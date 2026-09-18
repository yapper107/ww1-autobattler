# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/10/109/good-ember/battle-109-1789673860528333910`

## Battle summary

**Ember** · 360 s · 125 shots.

### Turning points

- 17.4s, squad 5: contact (events line 197). First recorded contact.
- 21.1s, squad 1: withdrawal ([trace 3701](#trace-3701)). 56.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 39.2s, squad 1: help call ([trace 9385](#trace-9385)). No completion observed before termination.
- 43.0s, squad 0: help call ([trace 9762](#trace-9762)). No completion observed before termination.
- 52.5s, squad 0: withdrawal ([trace 10893](#trace-10893)). 76.2s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 12 shots, 3/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 0 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 84 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 29 shots, 0/2 lost.

### Decisions and attribution

At 21.1s, squad 1 chose broke contact ([trace 3701](#trace-3701)), followed by 0 shots and 1 own casualties; estimate 12.1 against 0 distinct squad-reported contacts; At 36.5s, squad 0 chose prepared a base of fire ([trace 5538](#trace-5538)), followed by 1 shots and 0 own casualties; estimate 13.0 against 0 distinct squad-reported contacts; At 36.5s, squad 0 chose advanced tactically ([trace 8929](#trace-8929)), followed by 1 shots and 0 own casualties; estimate 13.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1284](#trace-1284)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5737795307224639, 'next_transition': 1308}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1286](#trace-1286)). Following evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.392981763077323, 'next_transition': 2199}.

### Communication

148 matched deliveries (mean 0.49s, max 5.35s); 491 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.40s, squad 5, contact, evidence events line 197: First recorded contact; .
- 21.10s, squad 1, withdrawal, evidence 3701: BreakContact: believed ratio at least two without superiority; 56.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 39.15s, squad 1, help call, evidence 9385: NeedSupport; No completion observed before termination.
- 43.05s, squad 0, help call, evidence 9762: NeedSupport; No completion observed before termination.
- 52.45s, squad 0, withdrawal, evidence 10893: BreakContact: believed ratio at least two without superiority; 76.2s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.064115655788349, 'next_transition': 815}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.064115655788349, 'next_transition': 815}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.064115655788349, 'next_transition': 815}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.158723150140798, 'next_transition': 1156}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.158723150140798, 'next_transition': 1156}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.158723150140798, 'next_transition': 1156}.
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
<a id="trace-845"></a>
<a id="trace-847"></a>
<a id="trace-876"></a>
<a id="trace-878"></a>
<a id="trace-911"></a>
<a id="trace-913"></a>
<a id="trace-932"></a>
<a id="trace-934"></a>
<a id="trace-963"></a>
<a id="trace-965"></a>
<a id="trace-992"></a>
<a id="trace-994"></a>
<a id="trace-1021"></a>
<a id="trace-1023"></a>
<a id="trace-1046"></a>
<a id="trace-1048"></a>
<a id="trace-1063"></a>
<a id="trace-1065"></a>
<a id="trace-1152"></a>
<a id="trace-1154"></a>
<a id="trace-1259"></a>
<a id="trace-1261"></a>
<a id="trace-1280"></a>
<a id="trace-1282"></a>
<a id="trace-1312"></a>
<a id="trace-1314"></a>
<a id="trace-1348"></a>
<a id="trace-1350"></a>
<a id="trace-1371"></a>
<a id="trace-1373"></a>
<a id="trace-1654"></a>
<a id="trace-1656"></a>
<a id="trace-1674"></a>
<a id="trace-1676"></a>
<a id="trace-1712"></a>
<a id="trace-1714"></a>
<a id="trace-1729"></a>
<a id="trace-1731"></a>
<a id="trace-1813"></a>
<a id="trace-1815"></a>
<a id="trace-1849"></a>
<a id="trace-1851"></a>
<a id="trace-1882"></a>
<a id="trace-1884"></a>
<a id="trace-1905"></a>
<a id="trace-1907"></a>
<a id="trace-2191"></a>
<a id="trace-2193"></a>
<a id="trace-2537"></a>
<a id="trace-2539"></a>
<a id="trace-2744"></a>
<a id="trace-2746"></a>
<a id="trace-2784"></a>
<a id="trace-2786"></a>
<a id="trace-2829"></a>
<a id="trace-2831"></a>
<a id="trace-3200"></a>
<a id="trace-3202"></a>
<a id="trace-3623"></a>
<a id="trace-3625"></a>
<a id="trace-3673"></a>
<a id="trace-3675"></a>
<a id="trace-3888"></a>
<a id="trace-3890"></a>
<a id="trace-4194"></a>
<a id="trace-4196"></a>
<a id="trace-4248"></a>
<a id="trace-4250"></a>
<a id="trace-4313"></a>
<a id="trace-4315"></a>
<a id="trace-4355"></a>
<a id="trace-4357"></a>
<a id="trace-4379"></a>
<a id="trace-4381"></a>
<a id="trace-4419"></a>
<a id="trace-4421"></a>
<a id="trace-4452"></a>
<a id="trace-4454"></a>
<a id="trace-4539"></a>
<a id="trace-4541"></a>
<a id="trace-4553"></a>
<a id="trace-4555"></a>
<a id="trace-4573"></a>
<a id="trace-4575"></a>
<a id="trace-4591"></a>
<a id="trace-4593"></a>
<a id="trace-4613"></a>
<a id="trace-4615"></a>
<a id="trace-4637"></a>
<a id="trace-4639"></a>
<a id="trace-4972"></a>
<a id="trace-4974"></a>
<a id="trace-4999"></a>
<a id="trace-5001"></a>
<a id="trace-5042"></a>
<a id="trace-5044"></a>
<a id="trace-5066"></a>
<a id="trace-5068"></a>
<a id="trace-5162"></a>
<a id="trace-5164"></a>
<a id="trace-5211"></a>
<a id="trace-5213"></a>
<a id="trace-5238"></a>
<a id="trace-5240"></a>
<a id="trace-5262"></a>
<a id="trace-5264"></a>
<a id="trace-5289"></a>
<a id="trace-5291"></a>
<a id="trace-5319"></a>
<a id="trace-5321"></a>
<a id="trace-5339"></a>
<a id="trace-5341"></a>
<a id="trace-5363"></a>
<a id="trace-5365"></a>
<a id="trace-5390"></a>
<a id="trace-5392"></a>
<a id="trace-5405"></a>
<a id="trace-5407"></a>
<a id="trace-5489"></a>
<a id="trace-5491"></a>
<a id="trace-5504"></a>
<a id="trace-5506"></a>
<a id="trace-5526"></a>
<a id="trace-5528"></a>
<a id="trace-9251"></a>
<a id="trace-9253"></a>
<a id="trace-9277"></a>
<a id="trace-9279"></a>
<a id="trace-9304"></a>
<a id="trace-9306"></a>
<a id="trace-9336"></a>
<a id="trace-9338"></a>
<a id="trace-9363"></a>
<a id="trace-9365"></a>
<a id="trace-9406"></a>
<a id="trace-9408"></a>
<a id="trace-9429"></a>
<a id="trace-9431"></a>
<a id="trace-9527"></a>
<a id="trace-9529"></a>
<a id="trace-9567"></a>
<a id="trace-9569"></a>
<a id="trace-9605"></a>
<a id="trace-9607"></a>
<a id="trace-9646"></a>
<a id="trace-9648"></a>
<a id="trace-9688"></a>
<a id="trace-9690"></a>
<a id="trace-9735"></a>
<a id="trace-9737"></a>
<a id="trace-9789"></a>
<a id="trace-9791"></a>
<a id="trace-9820"></a>
<a id="trace-9822"></a>
<a id="trace-9856"></a>
<a id="trace-9858"></a>
<a id="trace-9880"></a>
<a id="trace-9882"></a>
<a id="trace-9959"></a>
<a id="trace-9961"></a>
<a id="trace-10502"></a>
<a id="trace-10504"></a>
<a id="trace-10541"></a>
<a id="trace-10543"></a>
<a id="trace-10574"></a>
<a id="trace-10576"></a>
<a id="trace-10596"></a>
<a id="trace-10598"></a>
<a id="trace-10624"></a>
<a id="trace-10626"></a>
<a id="trace-10668"></a>
<a id="trace-10670"></a>
<a id="trace-10700"></a>
<a id="trace-10702"></a>
<a id="trace-10722"></a>
<a id="trace-10724"></a>
<a id="trace-10737"></a>
<a id="trace-10739"></a>
<a id="trace-10820"></a>
<a id="trace-10822"></a>
<a id="trace-10831"></a>
<a id="trace-10833"></a>
<a id="trace-10849"></a>
<a id="trace-10851"></a>
<a id="trace-10865"></a>
<a id="trace-10867"></a>
<a id="trace-10887"></a>
<a id="trace-10889"></a>
<a id="trace-11061"></a>
<a id="trace-11063"></a>
<a id="trace-11083"></a>
<a id="trace-11085"></a>
<a id="trace-11111"></a>
<a id="trace-11113"></a>
<a id="trace-11130"></a>
<a id="trace-11132"></a>
<a id="trace-11144"></a>
<a id="trace-11146"></a>
<a id="trace-11227"></a>
<a id="trace-11229"></a>
<a id="trace-11240"></a>
<a id="trace-11242"></a>
<a id="trace-11259"></a>
<a id="trace-11261"></a>
<a id="trace-11284"></a>
<a id="trace-11286"></a>
<a id="trace-11301"></a>
<a id="trace-11303"></a>
<a id="trace-11314"></a>
<a id="trace-11316"></a>
<a id="trace-11338"></a>
<a id="trace-11340"></a>
<a id="trace-11356"></a>
<a id="trace-11358"></a>
<a id="trace-11376"></a>
<a id="trace-11378"></a>
<a id="trace-11394"></a>
<a id="trace-11396"></a>
<a id="trace-11473"></a>
<a id="trace-11475"></a>
<a id="trace-11492"></a>
<a id="trace-11494"></a>
<a id="trace-11511"></a>
<a id="trace-11513"></a>
<a id="trace-11527"></a>
<a id="trace-11529"></a>
<a id="trace-11550"></a>
<a id="trace-11552"></a>
<a id="trace-11563"></a>
<a id="trace-11565"></a>
<a id="trace-11580"></a>
<a id="trace-11582"></a>
<a id="trace-11597"></a>
<a id="trace-11599"></a>
<a id="trace-11621"></a>
<a id="trace-11623"></a>
<a id="trace-11633"></a>
<a id="trace-11635"></a>
<a id="trace-11710"></a>
<a id="trace-11712"></a>
<a id="trace-11730"></a>
<a id="trace-11732"></a>
<a id="trace-11748"></a>
<a id="trace-11750"></a>
<a id="trace-11767"></a>
<a id="trace-11769"></a>
<a id="trace-11800"></a>
<a id="trace-11802"></a>
<a id="trace-11829"></a>
<a id="trace-11831"></a>
<a id="trace-11839"></a>
<a id="trace-11841"></a>
<a id="trace-11859"></a>
<a id="trace-11861"></a>
<a id="trace-11870"></a>
<a id="trace-11872"></a>
<a id="trace-11945"></a>
<a id="trace-11947"></a>
<a id="trace-11954"></a>
<a id="trace-11956"></a>
<a id="trace-11968"></a>
<a id="trace-11970"></a>
<a id="trace-11984"></a>
<a id="trace-11986"></a>
<a id="trace-12002"></a>
<a id="trace-12004"></a>
<a id="trace-12014"></a>
<a id="trace-12016"></a>
<a id="trace-12029"></a>
<a id="trace-12031"></a>
<a id="trace-12048"></a>
<a id="trace-12050"></a>
<a id="trace-12083"></a>
<a id="trace-12085"></a>
<a id="trace-12094"></a>
<a id="trace-12096"></a>
<a id="trace-12170"></a>
<a id="trace-12172"></a>
<a id="trace-12180"></a>
<a id="trace-12182"></a>
<a id="trace-12195"></a>
<a id="trace-12197"></a>
<a id="trace-12211"></a>
<a id="trace-12213"></a>
<a id="trace-12234"></a>
<a id="trace-12236"></a>
<a id="trace-12254"></a>
<a id="trace-12256"></a>
<a id="trace-12268"></a>
<a id="trace-12270"></a>
<a id="trace-12284"></a>
<a id="trace-12286"></a>
<a id="trace-12313"></a>
<a id="trace-12315"></a>
<a id="trace-12323"></a>
<a id="trace-12325"></a>
<a id="trace-12406"></a>
<a id="trace-12408"></a>
<a id="trace-12438"></a>
<a id="trace-12440"></a>
<a id="trace-12454"></a>
<a id="trace-12456"></a>
<a id="trace-12465"></a>
<a id="trace-12467"></a>
<a id="trace-12482"></a>
<a id="trace-12484"></a>
<a id="trace-12493"></a>
<a id="trace-12495"></a>
<a id="trace-12509"></a>
<a id="trace-12511"></a>
<a id="trace-12522"></a>
<a id="trace-12524"></a>
<a id="trace-12537"></a>
<a id="trace-12539"></a>
<a id="trace-12548"></a>
<a id="trace-12550"></a>
<a id="trace-12622"></a>
<a id="trace-12624"></a>
<a id="trace-12646"></a>
<a id="trace-12648"></a>
<a id="trace-12661"></a>
<a id="trace-12663"></a>
<a id="trace-12679"></a>
<a id="trace-12681"></a>
<a id="trace-12716"></a>
<a id="trace-12718"></a>
<a id="trace-12731"></a>
<a id="trace-12733"></a>
<a id="trace-12748"></a>
<a id="trace-12750"></a>
<a id="trace-12759"></a>
<a id="trace-12761"></a>
<a id="trace-12775"></a>
<a id="trace-12777"></a>
<a id="trace-12788"></a>
<a id="trace-12790"></a>
<a id="trace-12861"></a>
<a id="trace-12863"></a>
<a id="trace-12874"></a>
<a id="trace-12876"></a>
<a id="trace-12887"></a>
<a id="trace-12889"></a>
<a id="trace-12896"></a>
<a id="trace-12898"></a>
<a id="trace-12919"></a>
<a id="trace-12921"></a>
<a id="trace-12932"></a>
<a id="trace-12934"></a>
<a id="trace-12954"></a>
<a id="trace-12956"></a>
<a id="trace-12982"></a>
<a id="trace-12984"></a>
<a id="trace-13005"></a>
<a id="trace-13007"></a>
<a id="trace-13015"></a>
<a id="trace-13017"></a>
<a id="trace-13090"></a>
<a id="trace-13092"></a>
<a id="trace-13101"></a>
<a id="trace-13103"></a>
<a id="trace-13116"></a>
<a id="trace-13118"></a>
<a id="trace-13128"></a>
<a id="trace-13130"></a>
<a id="trace-13145"></a>
<a id="trace-13147"></a>
<a id="trace-13156"></a>
<a id="trace-13158"></a>
<a id="trace-13174"></a>
<a id="trace-13176"></a>
<a id="trace-13190"></a>
<a id="trace-13192"></a>
<a id="trace-13211"></a>
<a id="trace-13213"></a>
<a id="trace-13227"></a>
<a id="trace-13229"></a>
<a id="trace-13314"></a>
<a id="trace-13316"></a>
<a id="trace-13335"></a>
<a id="trace-13337"></a>
<a id="trace-13348"></a>
<a id="trace-13350"></a>
<a id="trace-13358"></a>
<a id="trace-13360"></a>
<a id="trace-13375"></a>
<a id="trace-13377"></a>
<a id="trace-13389"></a>
<a id="trace-13391"></a>
<a id="trace-13406"></a>
<a id="trace-13408"></a>
<a id="trace-13416"></a>
<a id="trace-13418"></a>
<a id="trace-13433"></a>
<a id="trace-13435"></a>
<a id="trace-13444"></a>
<a id="trace-13446"></a>
<a id="trace-13521"></a>
<a id="trace-13523"></a>
<a id="trace-13540"></a>
<a id="trace-13542"></a>
<a id="trace-13559"></a>
<a id="trace-13561"></a>
<a id="trace-13571"></a>
<a id="trace-13573"></a>
<a id="trace-13605"></a>
<a id="trace-13607"></a>
<a id="trace-13619"></a>
<a id="trace-13621"></a>
<a id="trace-13642"></a>
<a id="trace-13644"></a>
<a id="trace-13655"></a>
<a id="trace-13657"></a>
<a id="trace-13671"></a>
<a id="trace-13673"></a>
<a id="trace-13681"></a>
<a id="trace-13683"></a>
<a id="trace-13757"></a>
<a id="trace-13759"></a>
<a id="trace-13768"></a>
<a id="trace-13770"></a>
<a id="trace-13783"></a>
<a id="trace-13785"></a>
<a id="trace-13791"></a>
<a id="trace-13793"></a>
<a id="trace-13815"></a>
<a id="trace-13817"></a>
<a id="trace-13826"></a>
<a id="trace-13828"></a>
<a id="trace-13855"></a>
<a id="trace-13857"></a>
<a id="trace-13892"></a>
<a id="trace-13894"></a>
<a id="trace-13909"></a>
<a id="trace-13911"></a>
<a id="trace-13923"></a>
<a id="trace-13925"></a>
<a id="trace-13997"></a>
<a id="trace-13999"></a>
<a id="trace-14004"></a>
<a id="trace-14006"></a>
<a id="trace-14023"></a>
<a id="trace-14025"></a>
<a id="trace-14035"></a>
<a id="trace-14037"></a>
<a id="trace-14057"></a>
<a id="trace-14059"></a>
<a id="trace-14069"></a>
<a id="trace-14071"></a>
<a id="trace-14088"></a>
<a id="trace-14090"></a>
<a id="trace-14107"></a>
<a id="trace-14109"></a>
<a id="trace-14122"></a>
<a id="trace-14124"></a>
<a id="trace-14138"></a>
<a id="trace-14140"></a>
<a id="trace-14229"></a>
<a id="trace-14231"></a>
<a id="trace-14244"></a>
<a id="trace-14246"></a>
<a id="trace-14265"></a>
<a id="trace-14267"></a>
<a id="trace-14282"></a>
<a id="trace-14284"></a>
<a id="trace-14294"></a>
<a id="trace-14296"></a>
<a id="trace-14310"></a>
<a id="trace-14312"></a>
<a id="trace-14322"></a>
<a id="trace-14324"></a>
<a id="trace-14336"></a>
<a id="trace-14338"></a>
<a id="trace-14346"></a>
<a id="trace-14348"></a>
<a id="trace-14425"></a>
<a id="trace-14427"></a>
<a id="trace-14440"></a>
<a id="trace-14442"></a>
<a id="trace-14459"></a>
<a id="trace-14461"></a>
<a id="trace-14490"></a>
<a id="trace-14492"></a>
<a id="trace-14511"></a>
<a id="trace-14513"></a>
<a id="trace-14522"></a>
<a id="trace-14524"></a>
<a id="trace-14538"></a>
<a id="trace-14540"></a>
<a id="trace-14549"></a>
<a id="trace-14551"></a>
<a id="trace-14566"></a>
<a id="trace-14568"></a>
<a id="trace-14577"></a>
<a id="trace-14579"></a>
<a id="trace-14652"></a>
<a id="trace-14654"></a>
<a id="trace-14661"></a>
<a id="trace-14663"></a>
<a id="trace-14675"></a>
<a id="trace-14677"></a>
<a id="trace-14694"></a>
<a id="trace-14696"></a>
<a id="trace-14713"></a>
<a id="trace-14715"></a>
<a id="trace-14732"></a>
<a id="trace-14734"></a>
<a id="trace-14764"></a>
<a id="trace-14766"></a>
<a id="trace-14777"></a>
<a id="trace-14779"></a>
<a id="trace-14791"></a>
<a id="trace-14793"></a>
<a id="trace-14802"></a>
<a id="trace-14804"></a>
<a id="trace-14876"></a>
<a id="trace-14878"></a>
<a id="trace-14884"></a>
<a id="trace-14886"></a>
<a id="trace-14899"></a>
<a id="trace-14901"></a>
<a id="trace-14908"></a>
<a id="trace-14910"></a>
<a id="trace-14924"></a>
<a id="trace-14926"></a>
<a id="trace-14938"></a>
<a id="trace-14940"></a>
<a id="trace-14958"></a>
<a id="trace-14960"></a>
<a id="trace-14972"></a>
<a id="trace-14974"></a>
<a id="trace-14990"></a>
<a id="trace-14992"></a>
<a id="trace-15003"></a>
<a id="trace-15005"></a>
<a id="trace-15097"></a>
<a id="trace-15099"></a>
<a id="trace-15107"></a>
<a id="trace-15109"></a>
<a id="trace-15123"></a>
<a id="trace-15125"></a>
<a id="trace-15135"></a>
<a id="trace-15137"></a>
<a id="trace-15152"></a>
<a id="trace-15154"></a>
<a id="trace-15161"></a>
<a id="trace-15163"></a>
<a id="trace-15176"></a>
<a id="trace-15178"></a>
<a id="trace-15189"></a>
<a id="trace-15191"></a>
<a id="trace-15204"></a>
<a id="trace-15206"></a>
<a id="trace-15215"></a>
<a id="trace-15217"></a>
<a id="trace-15297"></a>
<a id="trace-15299"></a>
<a id="trace-15306"></a>
<a id="trace-15308"></a>
<a id="trace-15329"></a>
<a id="trace-15331"></a>
<a id="trace-15358"></a>
<a id="trace-15360"></a>
<a id="trace-15376"></a>
<a id="trace-15378"></a>
<a id="trace-15388"></a>
<a id="trace-15390"></a>
<a id="trace-15402"></a>
<a id="trace-15404"></a>
<a id="trace-15410"></a>
<a id="trace-15412"></a>
<a id="trace-15425"></a>
<a id="trace-15427"></a>
<a id="trace-15438"></a>
<a id="trace-15440"></a>
<a id="trace-15512"></a>
<a id="trace-15514"></a>
<a id="trace-15524"></a>
<a id="trace-15526"></a>
<a id="trace-15538"></a>
<a id="trace-15540"></a>
<a id="trace-15557"></a>
<a id="trace-15559"></a>
<a id="trace-15574"></a>
<a id="trace-15576"></a>
<a id="trace-15591"></a>
<a id="trace-15593"></a>
<a id="trace-15630"></a>
<a id="trace-15632"></a>
<a id="trace-15641"></a>
<a id="trace-15643"></a>
<a id="trace-15655"></a>
<a id="trace-15657"></a>
<a id="trace-15665"></a>
<a id="trace-15667"></a>
<a id="trace-15739"></a>
<a id="trace-15741"></a>
<a id="trace-15751"></a>
<a id="trace-15753"></a>
<a id="trace-15765"></a>
<a id="trace-15767"></a>
<a id="trace-15779"></a>
<a id="trace-15781"></a>
<a id="trace-15795"></a>
<a id="trace-15797"></a>
<a id="trace-15804"></a>
<a id="trace-15806"></a>
<a id="trace-15828"></a>
<a id="trace-15830"></a>
<a id="trace-15839"></a>
<a id="trace-15841"></a>
<a id="trace-15859"></a>
<a id="trace-15861"></a>
<a id="trace-15887"></a>
<a id="trace-15889"></a>
<a id="trace-15965"></a>
<a id="trace-15967"></a>
<a id="trace-15974"></a>
<a id="trace-15976"></a>
<a id="trace-15988"></a>
<a id="trace-15990"></a>
<a id="trace-16059"></a>
<a id="trace-16061"></a>
<a id="trace-16075"></a>
<a id="trace-16077"></a>
<a id="trace-16089"></a>
<a id="trace-16091"></a>
<a id="trace-16272"></a>
<a id="trace-16274"></a>
<a id="trace-16282"></a>
<a id="trace-16284"></a>
<a id="trace-16306"></a>
<a id="trace-16308"></a>
<a id="trace-16330"></a>
<a id="trace-16332"></a>
<a id="trace-16412"></a>
<a id="trace-16414"></a>
<a id="trace-16436"></a>
<a id="trace-16438"></a>
<a id="trace-16473"></a>
<a id="trace-16475"></a>
<a id="trace-16492"></a>
<a id="trace-16494"></a>
<a id="trace-16511"></a>
<a id="trace-16513"></a>
<a id="trace-16528"></a>
<a id="trace-16530"></a>
<a id="trace-16659"></a>
<a id="trace-16661"></a>
<a id="trace-16687"></a>
<a id="trace-16689"></a>
<a id="trace-16706"></a>
<a id="trace-16708"></a>
<a id="trace-16727"></a>
<a id="trace-16729"></a>
<a id="trace-16807"></a>
<a id="trace-16809"></a>
<a id="trace-16822"></a>
<a id="trace-16824"></a>
<a id="trace-16845"></a>
<a id="trace-16847"></a>
<a id="trace-16863"></a>
<a id="trace-16865"></a>
<a id="trace-16890"></a>
<a id="trace-16892"></a>
<a id="trace-16912"></a>
<a id="trace-16914"></a>
<a id="trace-16946"></a>
<a id="trace-16948"></a>
<a id="trace-16961"></a>
<a id="trace-16963"></a>
<a id="trace-16986"></a>
<a id="trace-16988"></a>
<a id="trace-16999"></a>
<a id="trace-17001"></a>
<a id="trace-17074"></a>
<a id="trace-17076"></a>
<a id="trace-17083"></a>
<a id="trace-17085"></a>
<a id="trace-17099"></a>
<a id="trace-17101"></a>
<a id="trace-17107"></a>
<a id="trace-17109"></a>
<a id="trace-17124"></a>
<a id="trace-17126"></a>
<a id="trace-17134"></a>
<a id="trace-17136"></a>
<a id="trace-17157"></a>
<a id="trace-17159"></a>
<a id="trace-17168"></a>
<a id="trace-17170"></a>
<a id="trace-17194"></a>
<a id="trace-17196"></a>
<a id="trace-17226"></a>
<a id="trace-17228"></a>
<a id="trace-17301"></a>
<a id="trace-17303"></a>
<a id="trace-17313"></a>
<a id="trace-17315"></a>
<a id="trace-17328"></a>
<a id="trace-17330"></a>
<a id="trace-17337"></a>
<a id="trace-17339"></a>
<a id="trace-17351"></a>
<a id="trace-17353"></a>
<a id="trace-17361"></a>
<a id="trace-17363"></a>
<a id="trace-17377"></a>
<a id="trace-17379"></a>
<a id="trace-17389"></a>
<a id="trace-17391"></a>
<a id="trace-17406"></a>
<a id="trace-17408"></a>
<a id="trace-17424"></a>
<a id="trace-17426"></a>
<a id="trace-17514"></a>
<a id="trace-17516"></a>
<a id="trace-17551"></a>
<a id="trace-17553"></a>
<a id="trace-17563"></a>
<a id="trace-17565"></a>
<a id="trace-17578"></a>
<a id="trace-17580"></a>
<a id="trace-17585"></a>
<a id="trace-17587"></a>
<a id="trace-17600"></a>
<a id="trace-17602"></a>
<a id="trace-17610"></a>
<a id="trace-17612"></a>
<a id="trace-17630"></a>
<a id="trace-17632"></a>
<a id="trace-17639"></a>
<a id="trace-17641"></a>
<a id="trace-17715"></a>
<a id="trace-17717"></a>
<a id="trace-17724"></a>
<a id="trace-17726"></a>
<a id="trace-17747"></a>
<a id="trace-17749"></a>
<a id="trace-17759"></a>
<a id="trace-17761"></a>
<a id="trace-17779"></a>
<a id="trace-17781"></a>
<a id="trace-17810"></a>
<a id="trace-17812"></a>
<a id="trace-17827"></a>
<a id="trace-17829"></a>
<a id="trace-17836"></a>
<a id="trace-17838"></a>
<a id="trace-17855"></a>
<a id="trace-17857"></a>
<a id="trace-17864"></a>
<a id="trace-17866"></a>
<a id="trace-17941"></a>
<a id="trace-17943"></a>
<a id="trace-17951"></a>
<a id="trace-17953"></a>
<a id="trace-17965"></a>
<a id="trace-17967"></a>
<a id="trace-17972"></a>
<a id="trace-17974"></a>
<a id="trace-17987"></a>
<a id="trace-17989"></a>
<a id="trace-18004"></a>
<a id="trace-18006"></a>
<a id="trace-18021"></a>
<a id="trace-18023"></a>
<a id="trace-18040"></a>
<a id="trace-18042"></a>
<a id="trace-18077"></a>
<a id="trace-18079"></a>
<a id="trace-18090"></a>
<a id="trace-18092"></a>
<a id="trace-18166"></a>
<a id="trace-18168"></a>
<a id="trace-18176"></a>
<a id="trace-18178"></a>
<a id="trace-18191"></a>
<a id="trace-18193"></a>
<a id="trace-18201"></a>
<a id="trace-18203"></a>
<a id="trace-18217"></a>
<a id="trace-18219"></a>
<a id="trace-18226"></a>
<a id="trace-18228"></a>
<a id="trace-18240"></a>
<a id="trace-18242"></a>
<a id="trace-18252"></a>
<a id="trace-18254"></a>
<a id="trace-18275"></a>
<a id="trace-18277"></a>
<a id="trace-18291"></a>
<a id="trace-18293"></a>
<a id="trace-18371"></a>
<a id="trace-18373"></a>
<a id="trace-18381"></a>
<a id="trace-18383"></a>
<a id="trace-18414"></a>
<a id="trace-18416"></a>
<a id="trace-18424"></a>
<a id="trace-18426"></a>
<a id="trace-18441"></a>
<a id="trace-18443"></a>
<a id="trace-18451"></a>
<a id="trace-18453"></a>
<a id="trace-18464"></a>
<a id="trace-18466"></a>
<a id="trace-18475"></a>
<a id="trace-18477"></a>
<a id="trace-18493"></a>
<a id="trace-18495"></a>
<a id="trace-18506"></a>
<a id="trace-18508"></a>
<a id="trace-18581"></a>
<a id="trace-18583"></a>
<a id="trace-18593"></a>
<a id="trace-18595"></a>
<a id="trace-18616"></a>
<a id="trace-18618"></a>
<a id="trace-18625"></a>
<a id="trace-18627"></a>
<a id="trace-18649"></a>
<a id="trace-18651"></a>
<a id="trace-18678"></a>
<a id="trace-18680"></a>
<a id="trace-18694"></a>
<a id="trace-18696"></a>
<a id="trace-18706"></a>
<a id="trace-18708"></a>
<a id="trace-18725"></a>
<a id="trace-18727"></a>
<a id="trace-18735"></a>
<a id="trace-18737"></a>
<a id="trace-18810"></a>
<a id="trace-18812"></a>
<a id="trace-18822"></a>
<a id="trace-18824"></a>
<a id="trace-18837"></a>
<a id="trace-18839"></a>
<a id="trace-18849"></a>
<a id="trace-18851"></a>
<a id="trace-18862"></a>
<a id="trace-18864"></a>
<a id="trace-18879"></a>
<a id="trace-18881"></a>
<a id="trace-18894"></a>
<a id="trace-18896"></a>
<a id="trace-18911"></a>
<a id="trace-18913"></a>
<a id="trace-18951"></a>
<a id="trace-18953"></a>
<a id="trace-18960"></a>
<a id="trace-18962"></a>
<a id="trace-19036"></a>
<a id="trace-19038"></a>
<a id="trace-19045"></a>
<a id="trace-19047"></a>
<a id="trace-19060"></a>
<a id="trace-19062"></a>
<a id="trace-19072"></a>
<a id="trace-19074"></a>
<a id="trace-19085"></a>
<a id="trace-19087"></a>
<a id="trace-19097"></a>
<a id="trace-19099"></a>
<a id="trace-19111"></a>
<a id="trace-19113"></a>
<a id="trace-19120"></a>
<a id="trace-19122"></a>
<a id="trace-19147"></a>
<a id="trace-19149"></a>
<a id="trace-19158"></a>
<a id="trace-19160"></a>
<a id="trace-19240"></a>
<a id="trace-19242"></a>
<a id="trace-19269"></a>
<a id="trace-19271"></a>
<a id="trace-19288"></a>
<a id="trace-19290"></a>
<a id="trace-19297"></a>
<a id="trace-19299"></a>
<a id="trace-19312"></a>
<a id="trace-19314"></a>
<a id="trace-19324"></a>
<a id="trace-19326"></a>
<a id="trace-19336"></a>
<a id="trace-19338"></a>
<a id="trace-19350"></a>
<a id="trace-19352"></a>
<a id="trace-19368"></a>
<a id="trace-19370"></a>
<a id="trace-19378"></a>
<a id="trace-19380"></a>
<a id="trace-19454"></a>
<a id="trace-19456"></a>
<a id="trace-19469"></a>
<a id="trace-19471"></a>
<a id="trace-19487"></a>
<a id="trace-19489"></a>
<a id="trace-19502"></a>
<a id="trace-19504"></a>
<a id="trace-19537"></a>
<a id="trace-19539"></a>
<a id="trace-19551"></a>
<a id="trace-19553"></a>
<a id="trace-19565"></a>
<a id="trace-19567"></a>
<a id="trace-19579"></a>
<a id="trace-19581"></a>
<a id="trace-19597"></a>
<a id="trace-19599"></a>
<a id="trace-19610"></a>
<a id="trace-19612"></a>
<a id="trace-19685"></a>
<a id="trace-19687"></a>
<a id="trace-19692"></a>
<a id="trace-19694"></a>
<a id="trace-19708"></a>
<a id="trace-19710"></a>
<a id="trace-19718"></a>
<a id="trace-19720"></a>
<a id="trace-19740"></a>
<a id="trace-19742"></a>
<a id="trace-19751"></a>
<a id="trace-19753"></a>
<a id="trace-19774"></a>
<a id="trace-19776"></a>
<a id="trace-19791"></a>
<a id="trace-19793"></a>
<a id="trace-19826"></a>
<a id="trace-19828"></a>
<a id="trace-19839"></a>
<a id="trace-19841"></a>
<a id="trace-19918"></a>
<a id="trace-19920"></a>
<a id="trace-19936"></a>
<a id="trace-19938"></a>
<a id="trace-19951"></a>
<a id="trace-19953"></a>
<a id="trace-19960"></a>
<a id="trace-19962"></a>
<a id="trace-19980"></a>
<a id="trace-19982"></a>
<a id="trace-19990"></a>
<a id="trace-19992"></a>
<a id="trace-20004"></a>
<a id="trace-20006"></a>
<a id="trace-20016"></a>
<a id="trace-20018"></a>
<a id="trace-20041"></a>
<a id="trace-20043"></a>
<a id="trace-20049"></a>
<a id="trace-20051"></a>
<a id="trace-20130"></a>
<a id="trace-20132"></a>
<a id="trace-20161"></a>
<a id="trace-20163"></a>
<a id="trace-20174"></a>
<a id="trace-20176"></a>
<a id="trace-20186"></a>
<a id="trace-20188"></a>
<a id="trace-20201"></a>
<a id="trace-20203"></a>
<a id="trace-20210"></a>
<a id="trace-20212"></a>
<a id="trace-20223"></a>
<a id="trace-20225"></a>
<a id="trace-20235"></a>
<a id="trace-20237"></a>
<a id="trace-20251"></a>
<a id="trace-20253"></a>
<a id="trace-20262"></a>
<a id="trace-20264"></a>
<a id="trace-20336"></a>
<a id="trace-20338"></a>
<a id="trace-20355"></a>
<a id="trace-20357"></a>
<a id="trace-20368"></a>
<a id="trace-20370"></a>
<a id="trace-20385"></a>
<a id="trace-20387"></a>
<a id="trace-20420"></a>
<a id="trace-20422"></a>
<a id="trace-20432"></a>
<a id="trace-20434"></a>
<a id="trace-20446"></a>
<a id="trace-20448"></a>
<a id="trace-20457"></a>
<a id="trace-20459"></a>
<a id="trace-20472"></a>
<a id="trace-20474"></a>
<a id="trace-20483"></a>
<a id="trace-20485"></a>
<a id="trace-20560"></a>
<a id="trace-20562"></a>
<a id="trace-20572"></a>
<a id="trace-20574"></a>
<a id="trace-20588"></a>
<a id="trace-20590"></a>
<a id="trace-20595"></a>
<a id="trace-20597"></a>
<a id="trace-20616"></a>
<a id="trace-20618"></a>
<a id="trace-20628"></a>
<a id="trace-20630"></a>
<a id="trace-20647"></a>
<a id="trace-20649"></a>
<a id="trace-20680"></a>
<a id="trace-20682"></a>
<a id="trace-20697"></a>
<a id="trace-20699"></a>
<a id="trace-20707"></a>
<a id="trace-20709"></a>
<a id="trace-20783"></a>
<a id="trace-20785"></a>
<a id="trace-20793"></a>
<a id="trace-20795"></a>
<a id="trace-20810"></a>
<a id="trace-20812"></a>
<a id="trace-20820"></a>
<a id="trace-20822"></a>
<a id="trace-20834"></a>
<a id="trace-20836"></a>
<a id="trace-20843"></a>
<a id="trace-20845"></a>
<a id="trace-20857"></a>
<a id="trace-20859"></a>
<a id="trace-20876"></a>
<a id="trace-20878"></a>
<a id="trace-20909"></a>
<a id="trace-20911"></a>
<a id="trace-21001"></a>
<a id="trace-21003"></a>
<a id="trace-21015"></a>
<a id="trace-21017"></a>
<a id="trace-21031"></a>
<a id="trace-21033"></a>
<a id="trace-21041"></a>
<a id="trace-21043"></a>
<a id="trace-21058"></a>
<a id="trace-21060"></a>
<a id="trace-21068"></a>
<a id="trace-21070"></a>
<a id="trace-21083"></a>
<a id="trace-21085"></a>
<a id="trace-21092"></a>
<a id="trace-21094"></a>
<a id="trace-21106"></a>
<a id="trace-21108"></a>
<a id="trace-21119"></a>
<a id="trace-21121"></a>
<a id="trace-21199"></a>
<a id="trace-21201"></a>
<a id="trace-21214"></a>
<a id="trace-21216"></a>
<a id="trace-21234"></a>
<a id="trace-21236"></a>
<a id="trace-21246"></a>
<a id="trace-21248"></a>
<a id="trace-21281"></a>
<a id="trace-21283"></a>
<a id="trace-21291"></a>
<a id="trace-21293"></a>
<a id="trace-21307"></a>
<a id="trace-21309"></a>
<a id="trace-21319"></a>
<a id="trace-21321"></a>
<a id="trace-21336"></a>
<a id="trace-21338"></a>
<a id="trace-21346"></a>
<a id="trace-21348"></a>
<a id="trace-21421"></a>
<a id="trace-21423"></a>
<a id="trace-21435"></a>
<a id="trace-21437"></a>
<a id="trace-21450"></a>
<a id="trace-21452"></a>
<a id="trace-21462"></a>
<a id="trace-21464"></a>
<a id="trace-21485"></a>
<a id="trace-21487"></a>
<a id="trace-21492"></a>
<a id="trace-21494"></a>
<a id="trace-21515"></a>
<a id="trace-21517"></a>
<a id="trace-21546"></a>
<a id="trace-21548"></a>
<a id="trace-21564"></a>
<a id="trace-21566"></a>
<a id="trace-21573"></a>
<a id="trace-21575"></a>
<a id="trace-21647"></a>
<a id="trace-21649"></a>
<a id="trace-21658"></a>
<a id="trace-21660"></a>
<a id="trace-21673"></a>
<a id="trace-21675"></a>
<a id="trace-21685"></a>
<a id="trace-21687"></a>
<a id="trace-21700"></a>
<a id="trace-21702"></a>
<a id="trace-21712"></a>
<a id="trace-21714"></a>
<a id="trace-21726"></a>
<a id="trace-21728"></a>
<a id="trace-21745"></a>
<a id="trace-21747"></a>
<a id="trace-21762"></a>
<a id="trace-21764"></a>
<a id="trace-21778"></a>
<a id="trace-21780"></a>
<a id="trace-21875"></a>
<a id="trace-21877"></a>
<a id="trace-21887"></a>
<a id="trace-21889"></a>
<a id="trace-21903"></a>
<a id="trace-21905"></a>
<a id="trace-21912"></a>
<a id="trace-21914"></a>
<a id="trace-21927"></a>
<a id="trace-21929"></a>
<a id="trace-21939"></a>
<a id="trace-21941"></a>
<a id="trace-21953"></a>
<a id="trace-21955"></a>
<a id="trace-21967"></a>
<a id="trace-21969"></a>
<a id="trace-21983"></a>
<a id="trace-21985"></a>
<a id="trace-21993"></a>
<a id="trace-21995"></a>
<a id="trace-22077"></a>
<a id="trace-22079"></a>
<a id="trace-22089"></a>
<a id="trace-22091"></a>
<a id="trace-22109"></a>
<a id="trace-22111"></a>
<a id="trace-22136"></a>
<a id="trace-22138"></a>
<a id="trace-22155"></a>
<a id="trace-22157"></a>
<a id="trace-22164"></a>
<a id="trace-22166"></a>
<a id="trace-22178"></a>
<a id="trace-22180"></a>
<a id="trace-22192"></a>
<a id="trace-22194"></a>
<a id="trace-22208"></a>
<a id="trace-22210"></a>
<a id="trace-22221"></a>
<a id="trace-22223"></a>
<a id="trace-22294"></a>
<a id="trace-22296"></a>
<a id="trace-22303"></a>
<a id="trace-22305"></a>
<a id="trace-22319"></a>
<a id="trace-22321"></a>
<a id="trace-22334"></a>
<a id="trace-22336"></a>
<a id="trace-22354"></a>
<a id="trace-22356"></a>
<a id="trace-22367"></a>
<a id="trace-22369"></a>
<a id="trace-22401"></a>
<a id="trace-22403"></a>
<a id="trace-22415"></a>
<a id="trace-22417"></a>
<a id="trace-22431"></a>
<a id="trace-22433"></a>
<a id="trace-22444"></a>
<a id="trace-22446"></a>
<a id="trace-22519"></a>
<a id="trace-22521"></a>
<a id="trace-22533"></a>
<a id="trace-22535"></a>
<a id="trace-22548"></a>
<a id="trace-22550"></a>
<a id="trace-22561"></a>
<a id="trace-22563"></a>
<a id="trace-22577"></a>
<a id="trace-22579"></a>
<a id="trace-22587"></a>
<a id="trace-22589"></a>
<a id="trace-22608"></a>
<a id="trace-22610"></a>
<a id="trace-22623"></a>
<a id="trace-22625"></a>
<a id="trace-22645"></a>
<a id="trace-22647"></a>
<a id="trace-22658"></a>
<a id="trace-22660"></a>
<a id="trace-22752"></a>
<a id="trace-22754"></a>
<a id="trace-22764"></a>
<a id="trace-22766"></a>
<a id="trace-22779"></a>
<a id="trace-22781"></a>
<a id="trace-22791"></a>
<a id="trace-22793"></a>
<a id="trace-22805"></a>
<a id="trace-22807"></a>
<a id="trace-22814"></a>
<a id="trace-22816"></a>
<a id="trace-22829"></a>
<a id="trace-22831"></a>
<a id="trace-22839"></a>
<a id="trace-22841"></a>
<a id="trace-22857"></a>
<a id="trace-22859"></a>
<a id="trace-22868"></a>
<a id="trace-22870"></a>
<a id="trace-22950"></a>
<a id="trace-22952"></a>
<a id="trace-22961"></a>
<a id="trace-22963"></a>
<a id="trace-22984"></a>
<a id="trace-22986"></a>
<a id="trace-23015"></a>
<a id="trace-23017"></a>
<a id="trace-23030"></a>
<a id="trace-23032"></a>
<a id="trace-23040"></a>
<a id="trace-23042"></a>
<a id="trace-23054"></a>
<a id="trace-23056"></a>
<a id="trace-23065"></a>
<a id="trace-23067"></a>
<a id="trace-23082"></a>
<a id="trace-23084"></a>
<a id="trace-23093"></a>
<a id="trace-23095"></a>
<a id="trace-23170"></a>
<a id="trace-23172"></a>
<a id="trace-23182"></a>
<a id="trace-23184"></a>
<a id="trace-23196"></a>
<a id="trace-23198"></a>
<a id="trace-23213"></a>
<a id="trace-23215"></a>
<a id="trace-23228"></a>
<a id="trace-23230"></a>
<a id="trace-23245"></a>
<a id="trace-23247"></a>
<a id="trace-23281"></a>
<a id="trace-23283"></a>
<a id="trace-23295"></a>
<a id="trace-23297"></a>
<a id="trace-23311"></a>
<a id="trace-23313"></a>
<a id="trace-23321"></a>
<a id="trace-23323"></a>
<a id="trace-23397"></a>
<a id="trace-23399"></a>
<a id="trace-23409"></a>
<a id="trace-23411"></a>
<a id="trace-23426"></a>
<a id="trace-23428"></a>
<a id="trace-23436"></a>
<a id="trace-23438"></a>
<a id="trace-23452"></a>
<a id="trace-23454"></a>
<a id="trace-23461"></a>
<a id="trace-23463"></a>
<a id="trace-23483"></a>
<a id="trace-23485"></a>
<a id="trace-23495"></a>
<a id="trace-23497"></a>
<a id="trace-23516"></a>
<a id="trace-23518"></a>
<a id="trace-23548"></a>
<a id="trace-23550"></a>
<a id="trace-23626"></a>
<a id="trace-23628"></a>
<a id="trace-23637"></a>
<a id="trace-23639"></a>
<a id="trace-23653"></a>
<a id="trace-23655"></a>
<a id="trace-23663"></a>
<a id="trace-23665"></a>
<a id="trace-23680"></a>
<a id="trace-23682"></a>
<a id="trace-23690"></a>
<a id="trace-23692"></a>
<a id="trace-23705"></a>
<a id="trace-23707"></a>
<a id="trace-23714"></a>
<a id="trace-23716"></a>
<a id="trace-23730"></a>
<a id="trace-23732"></a>
<a id="trace-23748"></a>
<a id="trace-23750"></a>
<a id="trace-23826"></a>
<a id="trace-23828"></a>
<a id="trace-23845"></a>
<a id="trace-23847"></a>
<a id="trace-23877"></a>
<a id="trace-23879"></a>
<a id="trace-23889"></a>
<a id="trace-23891"></a>
<a id="trace-23905"></a>
<a id="trace-23907"></a>
<a id="trace-23915"></a>
<a id="trace-23917"></a>
<a id="trace-23931"></a>
<a id="trace-23933"></a>
<a id="trace-23943"></a>
<a id="trace-23945"></a>
<a id="trace-23960"></a>
<a id="trace-23962"></a>
<a id="trace-23970"></a>
<a id="trace-23972"></a>
<a id="trace-24045"></a>
<a id="trace-24047"></a>
<a id="trace-24059"></a>
<a id="trace-24061"></a>
<a id="trace-24079"></a>
<a id="trace-24081"></a>
<a id="trace-24094"></a>
<a id="trace-24096"></a>
<a id="trace-24114"></a>
<a id="trace-24116"></a>
<a id="trace-24126"></a>
<a id="trace-24128"></a>
<a id="trace-24160"></a>
<a id="trace-24162"></a>
<a id="trace-24172"></a>
<a id="trace-24174"></a>
<a id="trace-24190"></a>
<a id="trace-24192"></a>
<a id="trace-24201"></a>
<a id="trace-24203"></a>
<a id="trace-24277"></a>
<a id="trace-24279"></a>
<a id="trace-24288"></a>
<a id="trace-24290"></a>
<a id="trace-24303"></a>
<a id="trace-24305"></a>
<a id="trace-24315"></a>
<a id="trace-24317"></a>
<a id="trace-24330"></a>
<a id="trace-24332"></a>
<a id="trace-24340"></a>
<a id="trace-24342"></a>
<a id="trace-24362"></a>
<a id="trace-24364"></a>
<a id="trace-24373"></a>
<a id="trace-24375"></a>
<a id="trace-24398"></a>
<a id="trace-24400"></a>
<a id="trace-24428"></a>
<a id="trace-24430"></a>
<a id="trace-24503"></a>
<a id="trace-24505"></a>
<a id="trace-24515"></a>
<a id="trace-24517"></a>
<a id="trace-24531"></a>
<a id="trace-24533"></a>
<a id="trace-24540"></a>
<a id="trace-24542"></a>
<a id="trace-24553"></a>
<a id="trace-24555"></a>
<a id="trace-24565"></a>
<a id="trace-24567"></a>
<a id="trace-24579"></a>
<a id="trace-24581"></a>
<a id="trace-24591"></a>
<a id="trace-24593"></a>
<a id="trace-24607"></a>
<a id="trace-24609"></a>
<a id="trace-24625"></a>
<a id="trace-24627"></a>
<a id="trace-24701"></a>
<a id="trace-24703"></a>
<a id="trace-24718"></a>
<a id="trace-24720"></a>
<a id="trace-24755"></a>
<a id="trace-24757"></a>
<a id="trace-24765"></a>
<a id="trace-24767"></a>
<a id="trace-24781"></a>
<a id="trace-24783"></a>
<a id="trace-24790"></a>
<a id="trace-24792"></a>
<a id="trace-24802"></a>
<a id="trace-24804"></a>
<a id="trace-24816"></a>
<a id="trace-24818"></a>
<a id="trace-24832"></a>
<a id="trace-24834"></a>
<a id="trace-24845"></a>
<a id="trace-24847"></a>
<a id="trace-24920"></a>
<a id="trace-24922"></a>
<a id="trace-24931"></a>
<a id="trace-24933"></a>
<a id="trace-24955"></a>
<a id="trace-24957"></a>
<a id="trace-24965"></a>
<a id="trace-24967"></a>
<a id="trace-24987"></a>
<a id="trace-24989"></a>
<a id="trace-25014"></a>
<a id="trace-25016"></a>
<a id="trace-25030"></a>
<a id="trace-25032"></a>
<a id="trace-25041"></a>
<a id="trace-25043"></a>
<a id="trace-25057"></a>
<a id="trace-25059"></a>
<a id="trace-25070"></a>
<a id="trace-25072"></a>
- 1.60s–359.80s (×1426), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079356011602765, 'next_transition': 608}.
<a id="trace-815"></a>
<a id="trace-817"></a>
<a id="trace-841"></a>
<a id="trace-843"></a>
<a id="trace-872"></a>
<a id="trace-874"></a>
<a id="trace-907"></a>
<a id="trace-909"></a>
<a id="trace-928"></a>
<a id="trace-930"></a>
<a id="trace-959"></a>
<a id="trace-961"></a>
<a id="trace-988"></a>
<a id="trace-990"></a>
<a id="trace-1017"></a>
<a id="trace-1019"></a>
<a id="trace-1148"></a>
<a id="trace-1150"></a>
<a id="trace-1255"></a>
<a id="trace-1257"></a>
<a id="trace-1276"></a>
<a id="trace-1278"></a>
- 5.20s–11.20s (×22), actor 5, squad 0 (trace 815): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600076258945034, 'next_transition': 841}.
<a id="trace-1156"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1156): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1077. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5695708493884564, 'next_transition': 128}.
<a id="trace-1157"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1157): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1077. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5695708493884564, 'next_transition': 128}.
<a id="trace-127"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 127): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5737795307224639, 'next_transition': 1308}.
<a id="trace-128"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 128): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.392981763077323, 'next_transition': 2199}.
<a id="trace-1284"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1284): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1284. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5737795307224639, 'next_transition': 1308}.
<a id="trace-1285"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1285): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1285. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5737795307224639, 'next_transition': 1308}.
<a id="trace-1286"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1286): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1286. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.392981763077323, 'next_transition': 2199}.
<a id="trace-1287"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1287): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1287. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.392981763077323, 'next_transition': 2199}.
<a id="trace-1308"></a>
<a id="trace-1310"></a>
<a id="trace-1344"></a>
<a id="trace-1346"></a>
<a id="trace-1367"></a>
<a id="trace-1369"></a>
- 11.70s–12.70s (×6), actor 5, squad 0 (trace 1308): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1287. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2954135707091453, 'next_transition': 1344}.
<a id="trace-1377"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1377): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1069. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249148674429753, 'next_transition': 1650}.
<a id="trace-1378"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1378): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1069. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249148674429753, 'next_transition': 1650}.
<a id="trace-1650"></a>
<a id="trace-1652"></a>
<a id="trace-1708"></a>
<a id="trace-1710"></a>
<a id="trace-1809"></a>
<a id="trace-1811"></a>
<a id="trace-1845"></a>
<a id="trace-1847"></a>
<a id="trace-1878"></a>
<a id="trace-1880"></a>
- 13.20s–16.25s (×10), actor 5, squad 0 (trace 1650): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1287. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2206319080732435, 'next_transition': 1708}.
<a id="trace-1908"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 1908): received platoon directive. Knowledge: actor memory at 15.00s, trace 1739. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945007628353028, 'next_transition': 2187}.
<a id="trace-2187"></a>
<a id="trace-2189"></a>
<a id="trace-2780"></a>
<a id="trace-2782"></a>
<a id="trace-2825"></a>
<a id="trace-2827"></a>
- 17.25s–19.25s (×6), actor 5, squad 0 (trace 2187): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1744. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6319576044083308, 'next_transition': 2780}.
<a id="trace-2199"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2199): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 1747. Next observer evidence: None.
<a id="trace-2244"></a>
- 17.55s–17.55s (×1), actor 8, squad 1 (trace 2244): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1747. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2390}.
<a id="trace-2245"></a>
- 17.55s–17.55s (×1), actor 8, squad 1 (trace 2245): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1747. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2390}.
<a id="trace-2246"></a>
<a id="trace-2390"></a>
<a id="trace-2540"></a>
- 17.55s–17.75s (×3), actor 8, squad 1 (trace 2246): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1747. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2390}.
<a id="trace-2859"></a>
- 19.50s–19.50s (×1), actor 0, squad 0 (trace 2859): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1739. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874976120003495, 'next_transition': 3203}.
<a id="trace-2860"></a>
- 19.50s–19.50s (×1), actor 0, squad 0 (trace 2860): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1739. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874976120003495, 'next_transition': 3203}.
<a id="trace-2861"></a>
<a id="trace-3203"></a>
- 19.50s–19.75s (×2), actor 0, squad 0 (trace 2861): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1739. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874976120003495, 'next_transition': 3203}.
<a id="trace-3619"></a>
<a id="trace-3621"></a>
<a id="trace-3669"></a>
<a id="trace-3671"></a>
<a id="trace-3884"></a>
<a id="trace-3886"></a>
- 20.25s–21.25s (×6), actor 5, squad 0 (trace 3619): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3534. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19854502571510016, 'next_transition': 3669}.
<a id="trace-3701"></a>
- 21.10s–21.10s (×1), actor 8, squad 1 (trace 3701): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 3537. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 17.499003708160554, 'next_transition': 5533}.
<a id="trace-3702"></a>
- 21.10s–21.10s (×1), actor 8, squad 1 (trace 3702): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 3537. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 17.499003708160554, 'next_transition': 5533}.
<a id="trace-3892"></a>
- 21.25s–21.25s (×1), actor 0, squad 0 (trace 3892): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3529. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24177300407654367, 'next_transition': 4190}.
<a id="trace-4190"></a>
<a id="trace-4192"></a>
<a id="trace-4244"></a>
<a id="trace-4246"></a>
<a id="trace-4375"></a>
<a id="trace-4377"></a>
<a id="trace-4415"></a>
<a id="trace-4417"></a>
<a id="trace-4448"></a>
<a id="trace-4450"></a>
- 21.75s–24.75s (×10), actor 5, squad 0 (trace 4190): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3534. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3713655623579279, 'next_transition': 4244}.
<a id="trace-4457"></a>
- 24.75s–24.75s (×1), actor 0, squad 0 (trace 4457): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3529. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39375506286427614, 'next_transition': 4549}.
<a id="trace-4549"></a>
<a id="trace-4551"></a>
<a id="trace-4569"></a>
<a id="trace-4571"></a>
<a id="trace-4609"></a>
<a id="trace-4611"></a>
<a id="trace-4633"></a>
<a id="trace-4635"></a>
- 25.75s–27.75s (×8), actor 5, squad 0 (trace 4549): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4471. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362462857677607, 'next_transition': 4569}.
<a id="trace-4649"></a>
- 28.00s–28.00s (×1), actor 0, squad 0 (trace 4649): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 4466. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874946924424318, 'next_transition': 4968}.
<a id="trace-4968"></a>
<a id="trace-4970"></a>
<a id="trace-4995"></a>
<a id="trace-4997"></a>
<a id="trace-5038"></a>
<a id="trace-5040"></a>
<a id="trace-5062"></a>
<a id="trace-5064"></a>
<a id="trace-5158"></a>
<a id="trace-5160"></a>
<a id="trace-5207"></a>
<a id="trace-5209"></a>
<a id="trace-5234"></a>
<a id="trace-5236"></a>
<a id="trace-5258"></a>
<a id="trace-5260"></a>
- 28.25s–31.75s (×16), actor 5, squad 0 (trace 4968): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4471. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750034287661063, 'next_transition': 4995}.
<a id="trace-5270"></a>
- 31.95s–31.95s (×1), actor 0, squad 0 (trace 5270): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 5073. Next observer evidence: {'until': 32.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.49218867663390764, 'next_transition': 5315}.
<a id="trace-5315"></a>
<a id="trace-5317"></a>
<a id="trace-5359"></a>
<a id="trace-5361"></a>
<a id="trace-5386"></a>
<a id="trace-5388"></a>
<a id="trace-5500"></a>
<a id="trace-5502"></a>
<a id="trace-5522"></a>
<a id="trace-5524"></a>
- 32.75s–36.25s (×10), actor 5, squad 0 (trace 5315): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 5078. Next observer evidence: {'until': 33.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.122190466955979, 'next_transition': 5359}.
<a id="trace-5533"></a>
- 36.35s–36.35s (×1), actor 9, squad 1 (trace 5533): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 5423. Next observer evidence: {'until': 39, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9385}.
<a id="trace-5534"></a>
- 36.35s–36.35s (×1), actor 9, squad 1 (trace 5534): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 5423. Next observer evidence: {'until': 39, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9385}.
<a id="trace-5538"></a>
- 36.45s–36.45s (×1), actor 0, squad 0 (trace 5538): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 5415. Next observer evidence: {'until': 37.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8733466534455105, 'next_transition': 9273}.
<a id="trace-8928"></a>
- 36.45s–36.45s (×1), actor 0, squad 0 (trace 8928): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 35.00s, trace 5415. Next observer evidence: {'until': 37.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8733466534455105, 'next_transition': 9273}.
<a id="trace-8929"></a>
- 36.45s–36.45s (×1), actor 0, squad 0 (trace 8929): MoveTactically. Knowledge: actor memory at 35.00s, trace 5415. Next observer evidence: {'until': 37.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8733466534455105, 'next_transition': 9273}.
<a id="trace-8930"></a>
- 36.45s–36.45s (×1), actor 0, squad 0 (trace 8930): contact cover complete: assessment resumes closure. Knowledge: actor memory at 35.00s, trace 5415. Next observer evidence: {'until': 37.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8733466534455105, 'next_transition': 9273}.
<a id="trace-9273"></a>
<a id="trace-9275"></a>
<a id="trace-9332"></a>
<a id="trace-9334"></a>
<a id="trace-9359"></a>
<a id="trace-9361"></a>
- 37.25s–38.75s (×6), actor 5, squad 0 (trace 9273): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 5420. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0573998320718745, 'next_transition': 9332}.
<a id="trace-593"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 593): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9368"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 9368): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.557853 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 9368. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5540035259383564, 'next_transition': 9402}.
<a id="trace-9369"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 9369): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.557853 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 9369. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5540035259383564, 'next_transition': 9402}.
<a id="trace-9385"></a>
- 39.15s–39.15s (×1), actor 9, squad 1 (trace 9385): NeedSupport. Knowledge: actor memory at 35.00s, trace 5423. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11264}.
<a id="trace-9402"></a>
<a id="trace-9404"></a>
<a id="trace-9425"></a>
<a id="trace-9427"></a>
<a id="trace-9565"></a>
<a id="trace-9644"></a>
<a id="trace-9686"></a>
<a id="trace-9731"></a>
<a id="trace-9733"></a>
- 39.25s–42.75s (×9), actor 5, squad 0 (trace 9402): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 9369. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5848909320406754, 'next_transition': 9425}.
<a id="trace-9762"></a>
- 43.05s–43.05s (×1), actor 0, squad 0 (trace 9762): NeedSupport. Knowledge: actor memory at 40.00s, trace 9442. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34919146046893373, 'next_transition': 9785}.
<a id="trace-9785"></a>
<a id="trace-9787"></a>
<a id="trace-9816"></a>
<a id="trace-9818"></a>
<a id="trace-9852"></a>
<a id="trace-9854"></a>
<a id="trace-9876"></a>
<a id="trace-9878"></a>
- 43.25s–44.75s (×8), actor 5, squad 0 (trace 9785): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 9447. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6170629659301184, 'next_transition': 9816}.
<a id="trace-9964"></a>
- 45.35s–45.35s (×1), actor 0, squad 0 (trace 9964): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 9886. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.3912407714486856, 'next_transition': 10537}.
<a id="trace-9965"></a>
- 45.35s–45.35s (×1), actor 0, squad 0 (trace 9965): received platoon directive. Knowledge: actor memory at 45.00s, trace 9886. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.3912407714486856, 'next_transition': 10537}.
<a id="trace-10537"></a>
<a id="trace-10539"></a>
<a id="trace-10570"></a>
<a id="trace-10572"></a>
<a id="trace-10620"></a>
<a id="trace-10622"></a>
<a id="trace-10664"></a>
<a id="trace-10666"></a>
<a id="trace-10696"></a>
<a id="trace-10698"></a>
<a id="trace-10816"></a>
<a id="trace-10818"></a>
<a id="trace-10861"></a>
<a id="trace-10863"></a>
- 46.25s–51.75s (×14), actor 5, squad 0 (trace 10537): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 9890. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6691660668994773, 'next_transition': 10570}.
<a id="trace-10893"></a>
- 52.45s–52.45s (×1), actor 1, squad 0 (trace 10893): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 10743. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11057}.
<a id="trace-10894"></a>
- 52.45s–52.45s (×1), actor 1, squad 0 (trace 10894): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 10743. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11057}.
<a id="trace-11057"></a>
<a id="trace-11059"></a>
<a id="trace-11079"></a>
<a id="trace-11081"></a>
<a id="trace-11223"></a>
<a id="trace-11225"></a>
<a id="trace-11236"></a>
<a id="trace-11238"></a>
<a id="trace-11257"></a>
<a id="trace-11299"></a>
<a id="trace-11336"></a>
<a id="trace-11352"></a>
<a id="trace-11354"></a>
- 52.75s–58.75s (×13), actor 5, squad 0 (trace 11057): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 10746. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7245007955512534, 'next_transition': 11079}.
<a id="trace-11264"></a>
- 56.35s–56.35s (×1), actor 9, squad 1 (trace 11264): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 55.00s, trace 11156. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 940}.
<a id="trace-11364"></a>
- 59.20s–59.20s (×1), actor 5, squad 0 (trace 11364): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 59.20s, trace 11364. Next observer evidence: None.
<a id="trace-11372"></a>
<a id="trace-11374"></a>
<a id="trace-11390"></a>
<a id="trace-11392"></a>
<a id="trace-11488"></a>
<a id="trace-11490"></a>
<a id="trace-11507"></a>
<a id="trace-11509"></a>
<a id="trace-11546"></a>
<a id="trace-11548"></a>
<a id="trace-11593"></a>
<a id="trace-11595"></a>
<a id="trace-11617"></a>
<a id="trace-11619"></a>
<a id="trace-11629"></a>
<a id="trace-11631"></a>
- 59.25s–64.75s (×16), actor 5, squad 0 (trace 11372): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 59.20s, trace 11364. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8435492613604036, 'next_transition': 11390}.
<a id="trace-11719"></a>
- 65.65s–65.65s (×1), actor 1, squad 0 (trace 11719): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 11641. Next observer evidence: None.
<a id="trace-11720"></a>
- 65.65s–65.65s (×1), actor 1, squad 0 (trace 11720): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 11641. Next observer evidence: None.
<a id="trace-11726"></a>
<a id="trace-11728"></a>
<a id="trace-11744"></a>
<a id="trace-11746"></a>
<a id="trace-11787"></a>
<a id="trace-11789"></a>
<a id="trace-11796"></a>
<a id="trace-11798"></a>
<a id="trace-11825"></a>
<a id="trace-11827"></a>
<a id="trace-11855"></a>
<a id="trace-11857"></a>
<a id="trace-11866"></a>
<a id="trace-11868"></a>
<a id="trace-11941"></a>
<a id="trace-11943"></a>
<a id="trace-11950"></a>
<a id="trace-11952"></a>
<a id="trace-11964"></a>
<a id="trace-11966"></a>
<a id="trace-11980"></a>
<a id="trace-11982"></a>
<a id="trace-11998"></a>
<a id="trace-12000"></a>
<a id="trace-12044"></a>
<a id="trace-12046"></a>
<a id="trace-12079"></a>
<a id="trace-12081"></a>
<a id="trace-12090"></a>
<a id="trace-12092"></a>
<a id="trace-12166"></a>
<a id="trace-12168"></a>
<a id="trace-12176"></a>
<a id="trace-12178"></a>
<a id="trace-12191"></a>
<a id="trace-12193"></a>
- 65.75s–76.25s (×36), actor 5, squad 0 (trace 11726): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 11643. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559918375233944, 'next_transition': 11744}.
<a id="trace-12198"></a>
- 76.25s–76.25s (×1), actor 1, squad 0 (trace 12198): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 75.00s, trace 12098. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12207}.
<a id="trace-12207"></a>
<a id="trace-12209"></a>
<a id="trace-12230"></a>
<a id="trace-12232"></a>
<a id="trace-12250"></a>
<a id="trace-12252"></a>
<a id="trace-12280"></a>
<a id="trace-12282"></a>
<a id="trace-12309"></a>
<a id="trace-12311"></a>
<a id="trace-12319"></a>
<a id="trace-12321"></a>
<a id="trace-12402"></a>
<a id="trace-12404"></a>
<a id="trace-12434"></a>
<a id="trace-12436"></a>
<a id="trace-12450"></a>
<a id="trace-12452"></a>
<a id="trace-12461"></a>
<a id="trace-12463"></a>
<a id="trace-12478"></a>
<a id="trace-12480"></a>
<a id="trace-12489"></a>
<a id="trace-12491"></a>
<a id="trace-12505"></a>
<a id="trace-12507"></a>
<a id="trace-12518"></a>
<a id="trace-12520"></a>
<a id="trace-12533"></a>
<a id="trace-12535"></a>
<a id="trace-12618"></a>
<a id="trace-12620"></a>
<a id="trace-12657"></a>
<a id="trace-12659"></a>
<a id="trace-12675"></a>
<a id="trace-12677"></a>
<a id="trace-12712"></a>
<a id="trace-12714"></a>
<a id="trace-12727"></a>
<a id="trace-12729"></a>
<a id="trace-12744"></a>
<a id="trace-12746"></a>
<a id="trace-12771"></a>
<a id="trace-12773"></a>
<a id="trace-12784"></a>
<a id="trace-12786"></a>
<a id="trace-12870"></a>
<a id="trace-12872"></a>
<a id="trace-12892"></a>
<a id="trace-12894"></a>
<a id="trace-12915"></a>
<a id="trace-12917"></a>
- 76.75s–92.25s (×52), actor 5, squad 0 (trace 12207): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 12100. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12230}.
<a id="trace-940"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (events line 940): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12409"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 12409): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.826897 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 12409. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12625}.
<a id="trace-12410"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 12410): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.826897 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 12410. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12625}.
<a id="trace-12625"></a>
- 85.25s–85.25s (×1), actor 9, squad 1 (trace 12625): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 12556. Next observer evidence: {'until': 88.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12753}.
<a id="trace-12626"></a>
- 85.25s–85.25s (×1), actor 9, squad 1 (trace 12626): new contact inside 100 m. Knowledge: actor memory at 85.00s, trace 12556. Next observer evidence: {'until': 88.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12753}.
<a id="trace-12753"></a>
- 88.55s–88.55s (×1), actor 9, squad 1 (trace 12753): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 85.00s, trace 12556. Next observer evidence: {'until': 107.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1584}.
<a id="trace-12755"></a>
- 88.55s–88.55s (×1), actor 9, squad 1 (trace 12755): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 85.00s, trace 12556. Next observer evidence: {'until': 107.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1584}.
<a id="trace-1189"></a>
- 94.15s–94.15s (×1), actor 5, squad 0 (events line 1189): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12989"></a>
- 94.15s–94.15s (×1), actor 5, squad 0 (trace 12989): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.867721 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 94.15s, trace 12989. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13001}.
<a id="trace-12990"></a>
- 94.15s–94.15s (×1), actor 5, squad 0 (trace 12990): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.867721 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 94.15s, trace 12990. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13001}.
<a id="trace-13001"></a>
<a id="trace-13003"></a>
<a id="trace-13011"></a>
<a id="trace-13013"></a>
<a id="trace-13086"></a>
<a id="trace-13088"></a>
<a id="trace-13112"></a>
<a id="trace-13114"></a>
<a id="trace-13124"></a>
<a id="trace-13126"></a>
<a id="trace-13141"></a>
<a id="trace-13143"></a>
<a id="trace-13152"></a>
<a id="trace-13154"></a>
<a id="trace-13170"></a>
<a id="trace-13172"></a>
<a id="trace-13186"></a>
<a id="trace-13188"></a>
<a id="trace-13207"></a>
<a id="trace-13209"></a>
<a id="trace-13223"></a>
<a id="trace-13225"></a>
<a id="trace-13310"></a>
<a id="trace-13312"></a>
<a id="trace-13331"></a>
<a id="trace-13333"></a>
<a id="trace-13371"></a>
<a id="trace-13373"></a>
<a id="trace-13385"></a>
<a id="trace-13387"></a>
<a id="trace-13402"></a>
<a id="trace-13404"></a>
<a id="trace-13412"></a>
<a id="trace-13414"></a>
<a id="trace-13429"></a>
<a id="trace-13431"></a>
<a id="trace-13440"></a>
<a id="trace-13442"></a>
<a id="trace-13517"></a>
<a id="trace-13519"></a>
<a id="trace-13536"></a>
<a id="trace-13538"></a>
<a id="trace-13567"></a>
<a id="trace-13569"></a>
<a id="trace-13615"></a>
<a id="trace-13617"></a>
- 94.25s–107.75s (×46), actor 5, squad 0 (trace 13001): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 94.15s, trace 12990. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13011}.
<a id="trace-1583"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (events line 1583): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13638}.
<a id="trace-1584"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (events line 1584): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13838}.
<a id="trace-13624"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (trace 13624): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.912613 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 13624. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13638}.
<a id="trace-13625"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (trace 13625): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.912613 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 13625. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13638}.
<a id="trace-13626"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 13626): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.912613 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 13626. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13838}.
<a id="trace-13627"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 13627): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.912613 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 13627. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13838}.
<a id="trace-13638"></a>
<a id="trace-13640"></a>
<a id="trace-13651"></a>
<a id="trace-13653"></a>
<a id="trace-13667"></a>
<a id="trace-13669"></a>
<a id="trace-13677"></a>
<a id="trace-13679"></a>
<a id="trace-13753"></a>
<a id="trace-13755"></a>
<a id="trace-13764"></a>
<a id="trace-13766"></a>
<a id="trace-13822"></a>
<a id="trace-13824"></a>
<a id="trace-13851"></a>
<a id="trace-13853"></a>
<a id="trace-13888"></a>
<a id="trace-13890"></a>
- 108.25s–113.75s (×18), actor 5, squad 0 (trace 13638): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 107.95s, trace 13627. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13651}.
<a id="trace-13838"></a>
- 112.90s–112.90s (×1), actor 9, squad 1 (trace 13838): MoveTactically. Knowledge: actor memory at 110.00s, trace 13692. Next observer evidence: None.
<a id="trace-13839"></a>
- 112.90s–112.90s (×1), actor 9, squad 1 (trace 13839): received platoon directive. Knowledge: actor memory at 110.00s, trace 13692. Next observer evidence: None.
<a id="trace-13843"></a>
- 112.95s–112.95s (×1), actor 9, squad 1 (trace 13843): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 13692. Next observer evidence: {'until': 142.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15994}.
<a id="trace-13895"></a>
- 113.85s–113.85s (×1), actor 1, squad 0 (trace 13895): MoveTactically. Knowledge: actor memory at 110.00s, trace 13687. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13905}.
<a id="trace-13896"></a>
- 113.85s–113.85s (×1), actor 1, squad 0 (trace 13896): received platoon directive. Knowledge: actor memory at 110.00s, trace 13687. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13905}.
<a id="trace-13905"></a>
<a id="trace-13907"></a>
<a id="trace-13993"></a>
<a id="trace-13995"></a>
<a id="trace-14019"></a>
<a id="trace-14021"></a>
<a id="trace-14031"></a>
<a id="trace-14033"></a>
<a id="trace-14053"></a>
<a id="trace-14055"></a>
<a id="trace-14065"></a>
<a id="trace-14067"></a>
<a id="trace-14084"></a>
<a id="trace-14086"></a>
<a id="trace-14103"></a>
<a id="trace-14105"></a>
<a id="trace-14118"></a>
<a id="trace-14120"></a>
<a id="trace-14240"></a>
<a id="trace-14242"></a>
<a id="trace-14254"></a>
<a id="trace-14256"></a>
<a id="trace-14261"></a>
<a id="trace-14263"></a>
<a id="trace-14290"></a>
<a id="trace-14292"></a>
<a id="trace-14306"></a>
<a id="trace-14308"></a>
<a id="trace-14318"></a>
<a id="trace-14320"></a>
<a id="trace-14342"></a>
<a id="trace-14344"></a>
<a id="trace-14421"></a>
<a id="trace-14423"></a>
<a id="trace-14436"></a>
<a id="trace-14438"></a>
<a id="trace-14455"></a>
<a id="trace-14457"></a>
<a id="trace-14486"></a>
<a id="trace-14488"></a>
<a id="trace-14507"></a>
<a id="trace-14509"></a>
<a id="trace-14518"></a>
<a id="trace-14520"></a>
<a id="trace-14534"></a>
<a id="trace-14536"></a>
<a id="trace-14545"></a>
<a id="trace-14547"></a>
<a id="trace-14562"></a>
<a id="trace-14564"></a>
<a id="trace-14573"></a>
<a id="trace-14575"></a>
<a id="trace-14648"></a>
<a id="trace-14650"></a>
<a id="trace-14657"></a>
<a id="trace-14659"></a>
<a id="trace-14671"></a>
<a id="trace-14673"></a>
<a id="trace-14690"></a>
<a id="trace-14692"></a>
<a id="trace-14709"></a>
<a id="trace-14711"></a>
<a id="trace-14728"></a>
<a id="trace-14730"></a>
<a id="trace-14773"></a>
<a id="trace-14775"></a>
<a id="trace-14798"></a>
<a id="trace-14800"></a>
<a id="trace-14895"></a>
<a id="trace-14897"></a>
<a id="trace-14920"></a>
<a id="trace-14922"></a>
<a id="trace-14934"></a>
<a id="trace-14936"></a>
<a id="trace-14954"></a>
<a id="trace-14956"></a>
<a id="trace-14999"></a>
<a id="trace-15001"></a>
<a id="trace-15093"></a>
<a id="trace-15095"></a>
<a id="trace-15103"></a>
<a id="trace-15105"></a>
<a id="trace-15119"></a>
<a id="trace-15121"></a>
<a id="trace-15131"></a>
<a id="trace-15133"></a>
<a id="trace-15148"></a>
<a id="trace-15150"></a>
<a id="trace-15172"></a>
<a id="trace-15174"></a>
<a id="trace-15185"></a>
<a id="trace-15187"></a>
<a id="trace-15200"></a>
<a id="trace-15202"></a>
<a id="trace-15293"></a>
<a id="trace-15295"></a>
<a id="trace-15302"></a>
<a id="trace-15304"></a>
<a id="trace-15325"></a>
<a id="trace-15327"></a>
<a id="trace-15372"></a>
<a id="trace-15374"></a>
<a id="trace-15384"></a>
<a id="trace-15386"></a>
<a id="trace-15421"></a>
<a id="trace-15423"></a>
<a id="trace-15434"></a>
<a id="trace-15436"></a>
<a id="trace-15508"></a>
<a id="trace-15510"></a>
<a id="trace-15520"></a>
<a id="trace-15522"></a>
<a id="trace-15534"></a>
<a id="trace-15536"></a>
<a id="trace-15553"></a>
<a id="trace-15555"></a>
<a id="trace-15570"></a>
<a id="trace-15572"></a>
<a id="trace-15587"></a>
<a id="trace-15589"></a>
<a id="trace-15626"></a>
<a id="trace-15628"></a>
<a id="trace-15637"></a>
<a id="trace-15639"></a>
<a id="trace-15661"></a>
<a id="trace-15663"></a>
<a id="trace-15735"></a>
<a id="trace-15737"></a>
<a id="trace-15747"></a>
<a id="trace-15749"></a>
<a id="trace-15761"></a>
<a id="trace-15763"></a>
<a id="trace-15775"></a>
<a id="trace-15777"></a>
<a id="trace-15791"></a>
<a id="trace-15793"></a>
<a id="trace-15824"></a>
<a id="trace-15826"></a>
<a id="trace-15835"></a>
<a id="trace-15837"></a>
<a id="trace-15961"></a>
<a id="trace-15963"></a>
<a id="trace-15970"></a>
<a id="trace-15972"></a>
<a id="trace-15984"></a>
<a id="trace-15986"></a>
<a id="trace-16055"></a>
<a id="trace-16057"></a>
<a id="trace-16085"></a>
<a id="trace-16087"></a>
- 114.25s–162.80s (×150), actor 5, squad 0 (trace 13905): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 13689. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13993}.
<a id="trace-15994"></a>
- 161.45s–161.45s (×1), actor 9, squad 1 (trace 15994): traveling. Knowledge: actor memory at 160.00s, trace 15898. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.567532126871142, 'next_transition': 2172}.
<a id="trace-15995"></a>
- 161.45s–161.45s (×1), actor 9, squad 1 (trace 15995): current contact unknown for 10 s. Knowledge: actor memory at 160.00s, trace 15898. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.567532126871142, 'next_transition': 2172}.
<a id="trace-16096"></a>
- 163.20s–163.20s (×1), actor 1, squad 0 (trace 16096): traveling. Knowledge: actor memory at 160.00s, trace 15893. Next observer evidence: None.
<a id="trace-16097"></a>
- 163.20s–163.20s (×1), actor 1, squad 0 (trace 16097): current contact unknown for 10 s. Knowledge: actor memory at 160.00s, trace 15893. Next observer evidence: None.
<a id="trace-2171"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (events line 2171): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2172"></a>
- 163.25s–163.25s (×1), actor 5, squad 1 (events line 2172): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 167.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.432548311323554, 'next_transition': 16532}.
<a id="trace-16257"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (trace 16257): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 163.25s, trace 16257. Next observer evidence: None.
<a id="trace-16258"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (trace 16258): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 163.25s, trace 16258. Next observer evidence: None.
<a id="trace-16259"></a>
- 163.25s–163.25s (×1), actor 5, squad 1 (trace 16259): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 163.25s, trace 16259. Next observer evidence: {'until': 167.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.432548311323554, 'next_transition': 16532}.
<a id="trace-16260"></a>
- 163.25s–163.25s (×1), actor 5, squad 1 (trace 16260): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 163.25s, trace 16260. Next observer evidence: {'until': 167.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.432548311323554, 'next_transition': 16532}.
<a id="trace-16266"></a>
<a id="trace-16268"></a>
<a id="trace-16278"></a>
<a id="trace-16280"></a>
<a id="trace-16302"></a>
<a id="trace-16304"></a>
<a id="trace-16326"></a>
<a id="trace-16328"></a>
<a id="trace-16408"></a>
<a id="trace-16410"></a>
<a id="trace-16469"></a>
<a id="trace-16471"></a>
<a id="trace-16488"></a>
<a id="trace-16490"></a>
<a id="trace-16507"></a>
<a id="trace-16509"></a>
<a id="trace-16524"></a>
<a id="trace-16526"></a>
<a id="trace-16655"></a>
<a id="trace-16657"></a>
<a id="trace-16683"></a>
<a id="trace-16685"></a>
- 163.30s–168.80s (×22), actor 5, squad 0 (trace 16266): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 163.25s, trace 16260. Next observer evidence: {'until': 163.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16278}.
<a id="trace-16532"></a>
- 167.90s–167.90s (×1), actor 9, squad 1 (trace 16532): matching received arrivals: traveling stage complete. Knowledge: actor memory at 165.00s, trace 16345. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16593}.
<a id="trace-16593"></a>
- 168.20s–168.20s (×1), actor 9, squad 1 (trace 16593): received platoon directive. Knowledge: actor memory at 165.00s, trace 16345. Next observer evidence: {'until': 173.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999969876303084, 'next_transition': 16965}.
<a id="trace-16690"></a>
- 168.80s–168.80s (×1), actor 1, squad 0 (trace 16690): traveling overwatch. Knowledge: actor memory at 165.00s, trace 16340. Next observer evidence: {'until': 169.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4411927727005773, 'next_transition': 16723}.
<a id="trace-16691"></a>
- 168.80s–168.80s (×1), actor 1, squad 0 (trace 16691): received platoon directive. Knowledge: actor memory at 165.00s, trace 16340. Next observer evidence: {'until': 169.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4411927727005773, 'next_transition': 16723}.
<a id="trace-16723"></a>
<a id="trace-16725"></a>
<a id="trace-16818"></a>
<a id="trace-16820"></a>
<a id="trace-16859"></a>
<a id="trace-16861"></a>
<a id="trace-16886"></a>
<a id="trace-16888"></a>
<a id="trace-16908"></a>
<a id="trace-16910"></a>
<a id="trace-16957"></a>
<a id="trace-16959"></a>
<a id="trace-16995"></a>
<a id="trace-16997"></a>
<a id="trace-17070"></a>
<a id="trace-17072"></a>
<a id="trace-17095"></a>
<a id="trace-17097"></a>
<a id="trace-17120"></a>
<a id="trace-17122"></a>
<a id="trace-17130"></a>
<a id="trace-17132"></a>
<a id="trace-17153"></a>
<a id="trace-17155"></a>
<a id="trace-17164"></a>
<a id="trace-17166"></a>
<a id="trace-17190"></a>
<a id="trace-17192"></a>
<a id="trace-17222"></a>
<a id="trace-17224"></a>
<a id="trace-17297"></a>
<a id="trace-17299"></a>
<a id="trace-17309"></a>
<a id="trace-17311"></a>
<a id="trace-17324"></a>
<a id="trace-17326"></a>
<a id="trace-17333"></a>
<a id="trace-17335"></a>
<a id="trace-17357"></a>
<a id="trace-17359"></a>
<a id="trace-17373"></a>
<a id="trace-17375"></a>
<a id="trace-17385"></a>
<a id="trace-17387"></a>
<a id="trace-17420"></a>
<a id="trace-17422"></a>
<a id="trace-17495"></a>
<a id="trace-17497"></a>
<a id="trace-17510"></a>
<a id="trace-17512"></a>
<a id="trace-17547"></a>
<a id="trace-17549"></a>
<a id="trace-17559"></a>
<a id="trace-17561"></a>
<a id="trace-17574"></a>
<a id="trace-17576"></a>
<a id="trace-17596"></a>
<a id="trace-17598"></a>
<a id="trace-17626"></a>
<a id="trace-17628"></a>
<a id="trace-17711"></a>
<a id="trace-17713"></a>
<a id="trace-17720"></a>
<a id="trace-17722"></a>
<a id="trace-17743"></a>
<a id="trace-17745"></a>
<a id="trace-17755"></a>
<a id="trace-17757"></a>
<a id="trace-17775"></a>
<a id="trace-17777"></a>
<a id="trace-17806"></a>
<a id="trace-17808"></a>
<a id="trace-17823"></a>
<a id="trace-17825"></a>
<a id="trace-17851"></a>
<a id="trace-17853"></a>
<a id="trace-17937"></a>
<a id="trace-17939"></a>
<a id="trace-17947"></a>
<a id="trace-17949"></a>
<a id="trace-17983"></a>
<a id="trace-17985"></a>
<a id="trace-18000"></a>
<a id="trace-18002"></a>
<a id="trace-18017"></a>
<a id="trace-18019"></a>
<a id="trace-18036"></a>
<a id="trace-18038"></a>
<a id="trace-18073"></a>
<a id="trace-18075"></a>
<a id="trace-18086"></a>
<a id="trace-18088"></a>
<a id="trace-18162"></a>
<a id="trace-18164"></a>
<a id="trace-18172"></a>
<a id="trace-18174"></a>
<a id="trace-18197"></a>
<a id="trace-18199"></a>
<a id="trace-18213"></a>
<a id="trace-18215"></a>
<a id="trace-18222"></a>
<a id="trace-18224"></a>
<a id="trace-18236"></a>
<a id="trace-18238"></a>
<a id="trace-18271"></a>
<a id="trace-18273"></a>
<a id="trace-18287"></a>
<a id="trace-18289"></a>
<a id="trace-18367"></a>
<a id="trace-18369"></a>
<a id="trace-18420"></a>
<a id="trace-18422"></a>
<a id="trace-18437"></a>
<a id="trace-18439"></a>
<a id="trace-18447"></a>
<a id="trace-18449"></a>
<a id="trace-18471"></a>
<a id="trace-18473"></a>
<a id="trace-18489"></a>
<a id="trace-18491"></a>
<a id="trace-18502"></a>
<a id="trace-18504"></a>
<a id="trace-18577"></a>
<a id="trace-18579"></a>
<a id="trace-18589"></a>
<a id="trace-18591"></a>
<a id="trace-18612"></a>
<a id="trace-18614"></a>
<a id="trace-18621"></a>
<a id="trace-18623"></a>
<a id="trace-18645"></a>
<a id="trace-18647"></a>
<a id="trace-18674"></a>
<a id="trace-18676"></a>
<a id="trace-18690"></a>
<a id="trace-18692"></a>
<a id="trace-18702"></a>
<a id="trace-18704"></a>
<a id="trace-18721"></a>
<a id="trace-18723"></a>
<a id="trace-18731"></a>
<a id="trace-18733"></a>
<a id="trace-18806"></a>
<a id="trace-18808"></a>
<a id="trace-18818"></a>
<a id="trace-18820"></a>
<a id="trace-18833"></a>
<a id="trace-18835"></a>
<a id="trace-18845"></a>
<a id="trace-18847"></a>
<a id="trace-18875"></a>
<a id="trace-18877"></a>
<a id="trace-18890"></a>
<a id="trace-18892"></a>
<a id="trace-18907"></a>
<a id="trace-18909"></a>
<a id="trace-19032"></a>
<a id="trace-19034"></a>
<a id="trace-19041"></a>
<a id="trace-19043"></a>
<a id="trace-19056"></a>
<a id="trace-19058"></a>
<a id="trace-19068"></a>
<a id="trace-19070"></a>
<a id="trace-19093"></a>
<a id="trace-19095"></a>
<a id="trace-19107"></a>
<a id="trace-19109"></a>
<a id="trace-19143"></a>
<a id="trace-19145"></a>
<a id="trace-19154"></a>
<a id="trace-19156"></a>
<a id="trace-19236"></a>
<a id="trace-19238"></a>
<a id="trace-19265"></a>
<a id="trace-19267"></a>
<a id="trace-19284"></a>
<a id="trace-19286"></a>
<a id="trace-19293"></a>
<a id="trace-19295"></a>
<a id="trace-19308"></a>
<a id="trace-19310"></a>
<a id="trace-19320"></a>
<a id="trace-19322"></a>
<a id="trace-19346"></a>
<a id="trace-19348"></a>
<a id="trace-19364"></a>
<a id="trace-19366"></a>
<a id="trace-19374"></a>
<a id="trace-19376"></a>
<a id="trace-19450"></a>
<a id="trace-19452"></a>
<a id="trace-19465"></a>
<a id="trace-19467"></a>
<a id="trace-19498"></a>
<a id="trace-19500"></a>
- 169.80s–231.80s (×196), actor 5, squad 0 (trace 16723): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 16342. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8298474864429952, 'next_transition': 16818}.
<a id="trace-16965"></a>
- 173.90s–173.90s (×1), actor 9, squad 1 (trace 16965): traveling overwatch. Knowledge: actor memory at 170.00s, trace 16741. Next observer evidence: {'until': 203.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2819}.
<a id="trace-16966"></a>
- 173.90s–173.90s (×1), actor 9, squad 1 (trace 16966): matching received arrivals: traveling stage complete. Knowledge: actor memory at 170.00s, trace 16741. Next observer evidence: {'until': 203.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2819}.
<a id="trace-2818"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (events line 2818): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19561}.
<a id="trace-2819"></a>
- 232.30s–232.30s (×1), actor 5, squad 1 (events line 2819): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19762}.
<a id="trace-19533"></a>
<a id="trace-19535"></a>
- 232.30s–232.30s (×2), actor 5, squad 0 (trace 19533): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 19387. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19561}.
<a id="trace-19540"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (trace 19540): renew committed intent (75 s lifetime). Knowledge: actor memory at 232.30s, trace 19540. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19561}.
<a id="trace-19541"></a>
- 232.30s–232.30s (×1), actor 5, squad 1 (trace 19541): renew committed intent (75 s lifetime). Knowledge: actor memory at 232.30s, trace 19541. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19762}.
<a id="trace-19561"></a>
<a id="trace-19563"></a>
<a id="trace-19575"></a>
<a id="trace-19577"></a>
<a id="trace-19593"></a>
<a id="trace-19595"></a>
<a id="trace-19606"></a>
<a id="trace-19608"></a>
<a id="trace-19681"></a>
<a id="trace-19683"></a>
<a id="trace-19704"></a>
<a id="trace-19706"></a>
<a id="trace-19714"></a>
<a id="trace-19716"></a>
<a id="trace-19736"></a>
<a id="trace-19738"></a>
<a id="trace-19770"></a>
<a id="trace-19772"></a>
- 233.30s–238.30s (×18), actor 5, squad 0 (trace 19561): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 232.30s, trace 19541. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19575}.
<a id="trace-19762"></a>
- 238.25s–238.25s (×1), actor 9, squad 1 (trace 19762): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 235.00s, trace 19619. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3413}.
<a id="trace-19763"></a>
- 238.25s–238.25s (×1), actor 9, squad 1 (trace 19763): MoveTactically. Knowledge: actor memory at 235.00s, trace 19619. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3413}.
<a id="trace-19764"></a>
- 238.25s–238.25s (×1), actor 9, squad 1 (trace 19764): . Knowledge: actor memory at 235.00s, trace 19619. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3413}.
<a id="trace-19780"></a>
- 238.55s–238.55s (×1), actor 1, squad 0 (trace 19780): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 235.00s, trace 19614. Next observer evidence: {'until': 238.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19787}.
<a id="trace-19781"></a>
- 238.55s–238.55s (×1), actor 1, squad 0 (trace 19781): MoveTactically. Knowledge: actor memory at 235.00s, trace 19614. Next observer evidence: {'until': 238.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19787}.
<a id="trace-19782"></a>
- 238.55s–238.55s (×1), actor 1, squad 0 (trace 19782): . Knowledge: actor memory at 235.00s, trace 19614. Next observer evidence: {'until': 238.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19787}.
<a id="trace-19787"></a>
<a id="trace-19789"></a>
<a id="trace-19835"></a>
<a id="trace-19837"></a>
<a id="trace-19914"></a>
<a id="trace-19916"></a>
<a id="trace-19932"></a>
<a id="trace-19934"></a>
<a id="trace-19947"></a>
<a id="trace-19949"></a>
<a id="trace-19956"></a>
<a id="trace-19958"></a>
<a id="trace-19976"></a>
<a id="trace-19978"></a>
<a id="trace-19986"></a>
<a id="trace-19988"></a>
<a id="trace-20012"></a>
<a id="trace-20014"></a>
<a id="trace-20037"></a>
<a id="trace-20039"></a>
<a id="trace-20182"></a>
<a id="trace-20184"></a>
<a id="trace-20197"></a>
<a id="trace-20199"></a>
<a id="trace-20206"></a>
<a id="trace-20208"></a>
<a id="trace-20231"></a>
<a id="trace-20233"></a>
<a id="trace-20258"></a>
<a id="trace-20260"></a>
<a id="trace-20351"></a>
<a id="trace-20353"></a>
<a id="trace-20381"></a>
<a id="trace-20383"></a>
<a id="trace-20428"></a>
<a id="trace-20430"></a>
<a id="trace-20442"></a>
<a id="trace-20444"></a>
<a id="trace-20453"></a>
<a id="trace-20455"></a>
<a id="trace-20479"></a>
<a id="trace-20481"></a>
<a id="trace-20556"></a>
<a id="trace-20558"></a>
<a id="trace-20568"></a>
<a id="trace-20570"></a>
<a id="trace-20584"></a>
<a id="trace-20586"></a>
<a id="trace-20624"></a>
<a id="trace-20626"></a>
<a id="trace-20643"></a>
<a id="trace-20645"></a>
<a id="trace-20676"></a>
<a id="trace-20678"></a>
<a id="trace-20703"></a>
<a id="trace-20705"></a>
<a id="trace-20779"></a>
<a id="trace-20781"></a>
<a id="trace-20806"></a>
<a id="trace-20808"></a>
<a id="trace-20816"></a>
<a id="trace-20818"></a>
<a id="trace-20839"></a>
<a id="trace-20841"></a>
<a id="trace-20853"></a>
<a id="trace-20855"></a>
<a id="trace-20872"></a>
<a id="trace-20874"></a>
<a id="trace-20905"></a>
<a id="trace-20907"></a>
<a id="trace-21011"></a>
<a id="trace-21013"></a>
<a id="trace-21027"></a>
<a id="trace-21029"></a>
<a id="trace-21037"></a>
<a id="trace-21039"></a>
<a id="trace-21054"></a>
<a id="trace-21056"></a>
<a id="trace-21064"></a>
<a id="trace-21066"></a>
<a id="trace-21079"></a>
<a id="trace-21081"></a>
<a id="trace-21115"></a>
<a id="trace-21117"></a>
<a id="trace-21195"></a>
<a id="trace-21197"></a>
<a id="trace-21230"></a>
<a id="trace-21232"></a>
<a id="trace-21242"></a>
<a id="trace-21244"></a>
<a id="trace-21277"></a>
<a id="trace-21279"></a>
<a id="trace-21287"></a>
<a id="trace-21289"></a>
<a id="trace-21303"></a>
<a id="trace-21305"></a>
<a id="trace-21315"></a>
<a id="trace-21317"></a>
<a id="trace-21332"></a>
<a id="trace-21334"></a>
<a id="trace-21342"></a>
<a id="trace-21344"></a>
<a id="trace-21417"></a>
<a id="trace-21419"></a>
<a id="trace-21431"></a>
<a id="trace-21433"></a>
<a id="trace-21446"></a>
<a id="trace-21448"></a>
<a id="trace-21458"></a>
<a id="trace-21460"></a>
<a id="trace-21481"></a>
<a id="trace-21483"></a>
<a id="trace-21511"></a>
<a id="trace-21513"></a>
<a id="trace-21542"></a>
<a id="trace-21544"></a>
<a id="trace-21560"></a>
<a id="trace-21562"></a>
<a id="trace-21654"></a>
<a id="trace-21656"></a>
<a id="trace-21669"></a>
<a id="trace-21671"></a>
<a id="trace-21681"></a>
<a id="trace-21683"></a>
<a id="trace-21696"></a>
<a id="trace-21698"></a>
<a id="trace-21708"></a>
<a id="trace-21710"></a>
<a id="trace-21722"></a>
<a id="trace-21724"></a>
<a id="trace-21741"></a>
<a id="trace-21743"></a>
<a id="trace-21758"></a>
<a id="trace-21760"></a>
<a id="trace-21774"></a>
<a id="trace-21776"></a>
<a id="trace-21883"></a>
<a id="trace-21885"></a>
<a id="trace-21899"></a>
<a id="trace-21901"></a>
<a id="trace-21908"></a>
<a id="trace-21910"></a>
<a id="trace-21923"></a>
<a id="trace-21925"></a>
<a id="trace-21935"></a>
<a id="trace-21937"></a>
<a id="trace-21949"></a>
<a id="trace-21951"></a>
<a id="trace-21963"></a>
<a id="trace-21965"></a>
<a id="trace-21979"></a>
<a id="trace-21981"></a>
<a id="trace-21989"></a>
<a id="trace-21991"></a>
<a id="trace-22073"></a>
<a id="trace-22075"></a>
<a id="trace-22085"></a>
<a id="trace-22087"></a>
<a id="trace-22151"></a>
<a id="trace-22153"></a>
<a id="trace-22160"></a>
<a id="trace-22162"></a>
<a id="trace-22174"></a>
<a id="trace-22176"></a>
<a id="trace-22188"></a>
<a id="trace-22190"></a>
<a id="trace-22204"></a>
<a id="trace-22206"></a>
<a id="trace-22217"></a>
<a id="trace-22219"></a>
<a id="trace-22315"></a>
<a id="trace-22317"></a>
<a id="trace-22330"></a>
<a id="trace-22332"></a>
<a id="trace-22350"></a>
<a id="trace-22352"></a>
<a id="trace-22397"></a>
<a id="trace-22399"></a>
<a id="trace-22411"></a>
<a id="trace-22413"></a>
<a id="trace-22427"></a>
<a id="trace-22429"></a>
<a id="trace-22440"></a>
<a id="trace-22442"></a>
<a id="trace-22515"></a>
<a id="trace-22517"></a>
<a id="trace-22529"></a>
<a id="trace-22531"></a>
- 238.80s–300.80s (×188), actor 5, squad 0 (trace 19787): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 19616. Next observer evidence: {'until': 239.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19835}.
<a id="trace-3412"></a>
- 301.30s–301.30s (×1), actor 5, squad 0 (events line 3412): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3413"></a>
- 301.30s–301.30s (×1), actor 5, squad 1 (events line 3413): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22544"></a>
<a id="trace-22546"></a>
- 301.30s–301.30s (×2), actor 5, squad 0 (trace 22544): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 22450. Next observer evidence: {'until': 301.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22557}.
<a id="trace-22551"></a>
- 301.30s–301.30s (×1), actor 5, squad 0 (trace 22551): renew committed intent (75 s lifetime). Knowledge: actor memory at 301.30s, trace 22551. Next observer evidence: {'until': 301.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22557}.
<a id="trace-22552"></a>
- 301.30s–301.30s (×1), actor 5, squad 1 (trace 22552): renew committed intent (75 s lifetime). Knowledge: actor memory at 301.30s, trace 22552. Next observer evidence: {'until': 331.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-22557"></a>
<a id="trace-22559"></a>
<a id="trace-22573"></a>
<a id="trace-22575"></a>
<a id="trace-22583"></a>
<a id="trace-22585"></a>
<a id="trace-22604"></a>
<a id="trace-22606"></a>
<a id="trace-22619"></a>
<a id="trace-22621"></a>
<a id="trace-22641"></a>
<a id="trace-22643"></a>
<a id="trace-22654"></a>
<a id="trace-22656"></a>
<a id="trace-22748"></a>
<a id="trace-22750"></a>
<a id="trace-22775"></a>
<a id="trace-22777"></a>
<a id="trace-22787"></a>
<a id="trace-22789"></a>
- 301.80s–306.80s (×20), actor 5, squad 0 (trace 22557): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 301.30s, trace 22552. Next observer evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22573}.
<a id="trace-22795"></a>
- 307.20s–307.20s (×1), actor 1, squad 0 (trace 22795): received platoon directive. Knowledge: actor memory at 305.00s, trace 22680. Next observer evidence: {'until': 307.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22810}.
<a id="trace-22810"></a>
<a id="trace-22812"></a>
<a id="trace-22825"></a>
<a id="trace-22827"></a>
<a id="trace-22853"></a>
<a id="trace-22855"></a>
<a id="trace-22864"></a>
<a id="trace-22866"></a>
<a id="trace-22957"></a>
<a id="trace-22959"></a>
<a id="trace-22980"></a>
<a id="trace-22982"></a>
<a id="trace-23011"></a>
<a id="trace-23013"></a>
<a id="trace-23026"></a>
<a id="trace-23028"></a>
<a id="trace-23050"></a>
<a id="trace-23052"></a>
<a id="trace-23061"></a>
<a id="trace-23063"></a>
<a id="trace-23078"></a>
<a id="trace-23080"></a>
<a id="trace-23089"></a>
<a id="trace-23091"></a>
<a id="trace-23166"></a>
<a id="trace-23168"></a>
<a id="trace-23178"></a>
<a id="trace-23180"></a>
<a id="trace-23209"></a>
<a id="trace-23211"></a>
<a id="trace-23224"></a>
<a id="trace-23226"></a>
<a id="trace-23241"></a>
<a id="trace-23243"></a>
<a id="trace-23277"></a>
<a id="trace-23279"></a>
<a id="trace-23291"></a>
<a id="trace-23293"></a>
<a id="trace-23307"></a>
<a id="trace-23309"></a>
<a id="trace-23317"></a>
<a id="trace-23319"></a>
<a id="trace-23393"></a>
<a id="trace-23395"></a>
<a id="trace-23405"></a>
<a id="trace-23407"></a>
<a id="trace-23422"></a>
<a id="trace-23424"></a>
<a id="trace-23432"></a>
<a id="trace-23434"></a>
<a id="trace-23448"></a>
<a id="trace-23450"></a>
<a id="trace-23457"></a>
<a id="trace-23459"></a>
<a id="trace-23479"></a>
<a id="trace-23481"></a>
<a id="trace-23512"></a>
<a id="trace-23514"></a>
<a id="trace-23544"></a>
<a id="trace-23546"></a>
<a id="trace-23622"></a>
<a id="trace-23624"></a>
<a id="trace-23633"></a>
<a id="trace-23635"></a>
<a id="trace-23649"></a>
<a id="trace-23651"></a>
<a id="trace-23659"></a>
<a id="trace-23661"></a>
<a id="trace-23676"></a>
<a id="trace-23678"></a>
<a id="trace-23686"></a>
<a id="trace-23688"></a>
<a id="trace-23701"></a>
<a id="trace-23703"></a>
<a id="trace-23726"></a>
<a id="trace-23728"></a>
<a id="trace-23744"></a>
<a id="trace-23746"></a>
<a id="trace-23822"></a>
<a id="trace-23824"></a>
<a id="trace-23841"></a>
<a id="trace-23843"></a>
<a id="trace-23885"></a>
<a id="trace-23887"></a>
<a id="trace-23901"></a>
<a id="trace-23903"></a>
<a id="trace-23911"></a>
<a id="trace-23913"></a>
<a id="trace-23927"></a>
<a id="trace-23929"></a>
<a id="trace-23939"></a>
<a id="trace-23941"></a>
<a id="trace-23956"></a>
<a id="trace-23958"></a>
<a id="trace-23966"></a>
<a id="trace-23968"></a>
<a id="trace-24041"></a>
<a id="trace-24043"></a>
<a id="trace-24055"></a>
<a id="trace-24057"></a>
<a id="trace-24075"></a>
<a id="trace-24077"></a>
<a id="trace-24090"></a>
<a id="trace-24092"></a>
<a id="trace-24110"></a>
<a id="trace-24112"></a>
<a id="trace-24122"></a>
<a id="trace-24124"></a>
<a id="trace-24156"></a>
<a id="trace-24158"></a>
<a id="trace-24168"></a>
<a id="trace-24170"></a>
<a id="trace-24186"></a>
<a id="trace-24188"></a>
<a id="trace-24197"></a>
<a id="trace-24199"></a>
<a id="trace-24273"></a>
<a id="trace-24275"></a>
<a id="trace-24284"></a>
<a id="trace-24286"></a>
<a id="trace-24299"></a>
<a id="trace-24301"></a>
<a id="trace-24311"></a>
<a id="trace-24313"></a>
<a id="trace-24326"></a>
<a id="trace-24328"></a>
<a id="trace-24358"></a>
<a id="trace-24360"></a>
<a id="trace-24369"></a>
<a id="trace-24371"></a>
<a id="trace-24394"></a>
<a id="trace-24396"></a>
<a id="trace-24424"></a>
<a id="trace-24426"></a>
<a id="trace-24511"></a>
<a id="trace-24513"></a>
<a id="trace-24527"></a>
<a id="trace-24529"></a>
<a id="trace-24536"></a>
<a id="trace-24538"></a>
<a id="trace-24561"></a>
<a id="trace-24563"></a>
<a id="trace-24575"></a>
<a id="trace-24577"></a>
<a id="trace-24603"></a>
<a id="trace-24605"></a>
<a id="trace-24621"></a>
<a id="trace-24623"></a>
<a id="trace-24697"></a>
<a id="trace-24699"></a>
<a id="trace-24714"></a>
<a id="trace-24716"></a>
<a id="trace-24761"></a>
<a id="trace-24763"></a>
<a id="trace-24777"></a>
<a id="trace-24779"></a>
<a id="trace-24786"></a>
<a id="trace-24788"></a>
<a id="trace-24812"></a>
<a id="trace-24814"></a>
<a id="trace-24828"></a>
<a id="trace-24830"></a>
<a id="trace-24841"></a>
<a id="trace-24843"></a>
<a id="trace-24916"></a>
<a id="trace-24918"></a>
<a id="trace-24927"></a>
<a id="trace-24929"></a>
<a id="trace-24951"></a>
<a id="trace-24953"></a>
<a id="trace-24961"></a>
<a id="trace-24963"></a>
<a id="trace-24983"></a>
<a id="trace-24985"></a>
<a id="trace-25037"></a>
<a id="trace-25039"></a>
<a id="trace-25053"></a>
<a id="trace-25055"></a>
<a id="trace-25066"></a>
<a id="trace-25068"></a>
- 307.80s–359.80s (×180), actor 5, squad 0 (trace 22810): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 22682. Next observer evidence: {'until': 308.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22825}.

## Net delivery

148 matched order/radio deliveries; 491 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.488s; maximum 5.350s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3529: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3537: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3539: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3540: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3541: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3542: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3543: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3544: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3545: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3547: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3548: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 4466: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4472: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 4474: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4476: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4477: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4478: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4479: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4480: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4481: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4482: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4483: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4484: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4485: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 5073: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 5074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 5075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 5076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 5077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 5078: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 5079: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 5080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 5081: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 5082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 5083: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 5084: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 5085: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 5086: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 5087: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 5088: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 5089: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 5090: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 5091: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 5092: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 5415: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 5416: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 5417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 5418: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 5419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 5420: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 5421: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 5422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 5423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 5424: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 5425: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 5426: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 5427: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 5428: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 5429: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 5430: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 5431: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 5432: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 5433: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 9368: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 9369: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 9442: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 9443: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 9444: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 9445: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 9446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 9447: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 9448: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 9449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 9450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 9451: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 9452: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 9453: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 9454: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 9455: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 9456: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 9457: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 9458: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 9459: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 9460: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 9886: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 9887: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 9888: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 9889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 9890: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 9891: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 9892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 9893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 9894: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 9895: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 9896: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 9897: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 9898: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 9899: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 9900: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 9901: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 9902: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 9903: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 10743: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 10744: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 10745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 10746: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 10747: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 10748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 10749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 10750: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 10751: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 10752: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 10753: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 10754: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 10755: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 10756: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 10757: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 10758: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 10759: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 11151: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 11152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 11153: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 11154: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 11155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 11156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 11157: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 11158: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 11159: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 11160: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 11161: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 11162: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 11163: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 11164: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 11165: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 11166: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 59.20s leader 5, trace 11364: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 11399: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 11400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 11401: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 11402: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 11403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 11404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 11405: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 11406: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 11407: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 11408: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 11409: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 11410: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 11411: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 11412: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 11413: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 11414: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 11641: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 11642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 11643: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 11644: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 11645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 11646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 11647: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 11648: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 11649: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 11650: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 11651: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 11652: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 11653: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 11654: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 11655: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 11656: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 11873: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 11874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 11875: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 11876: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 11877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 11878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 11879: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 11880: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 11881: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 11882: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 11883: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 11884: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 11885: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 11886: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 11887: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 11888: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 12098: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 12099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 12100: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 12101: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 12102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 12103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 12104: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 12105: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 12106: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 12107: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 12108: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 12109: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 12110: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 12111: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 12112: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 12113: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 12334: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 12335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 12336: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 12337: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 12338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 12339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 12340: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 12341: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 12342: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 12343: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 12344: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 12345: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 12346: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 12347: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 12348: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 12349: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 12409: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 12410: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 12551: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 12552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 12553: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 12554: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 12555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 12556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 12557: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 12558: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 12559: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 12560: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 12561: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 12562: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 12563: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 12564: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 12565: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 12566: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 12791: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 12792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 12793: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 12794: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 12795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 12796: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 12797: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 12798: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 12799: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 12800: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 12801: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 12802: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 12803: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 12804: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 12805: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 12806: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.15s leader 5, trace 12989: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.15s leader 5, trace 12990: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 13020: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 13021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 13022: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 13023: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 13024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 13025: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 13026: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 13027: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 13028: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 13029: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 13030: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 13031: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 13032: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 13033: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 13034: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 13035: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 13230: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 13231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 13232: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 13233: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 13234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 13235: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 13236: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 13237: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 13238: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 13239: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 13240: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 13241: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 13242: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 13243: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 13244: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 13245: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 13448: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 13449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 13450: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 13451: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 13452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 13453: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 13454: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 13455: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 13456: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 13457: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 13458: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 13459: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 13460: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 13461: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 13462: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 13463: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 13624: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 13625: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 13626: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 13627: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 13687: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 13688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 13689: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 13690: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 13691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 13692: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 13693: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 13694: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 13695: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 13696: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 13697: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 13698: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 13699: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 13700: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 13701: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 13702: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 13926: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 13927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 13928: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 13929: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 13930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 13931: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 13932: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 13933: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 13934: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 13935: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 13936: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 13937: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 13938: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 13939: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 13940: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 13941: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 14144: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 14145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 14146: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 14147: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 14148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 14149: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 14150: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 14151: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 14152: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 14153: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 14154: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 14155: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 14156: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 14157: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 14158: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 14159: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 14351: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 14352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 14353: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 14354: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 14355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 14356: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 14357: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 14358: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 14359: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 14360: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 14361: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 14362: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 14363: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 14364: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 14365: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 14366: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 14580: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 14581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 14582: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 14583: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 14584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 14585: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 14586: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 14587: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 14588: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 14589: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 14590: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 14591: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 14592: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 14593: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 14594: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 14595: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 14806: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 14807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 14808: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 14809: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 14810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 14811: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 14812: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 14813: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 14814: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 14815: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 14816: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 14817: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 14818: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 14819: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 14820: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 14821: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 15025: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 15026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 15027: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 15028: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 15029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 15030: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 15031: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 15032: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 15033: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 15034: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 15035: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 15036: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 15037: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 15038: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 15039: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 15040: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 15223: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 15224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 15225: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 15226: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 15227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 15228: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 15229: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 15230: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 15231: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 15232: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 15233: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 15234: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 15235: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 15236: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 15237: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 15238: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 15441: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 15442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 15443: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 15444: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 15445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 15446: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 15447: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 15448: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 15449: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 15450: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 15451: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 15452: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 15453: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 15454: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 15455: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 15456: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 15670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 15671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 15672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 15673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 15674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 15675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 15676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 15677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 15678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 15679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 15680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 15681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 15682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 15683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 15684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 15685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 15893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 15894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 15895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 15896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 15897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 15898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 15899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 15900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 15901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 15902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 15903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 15904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 15905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 15906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 15907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 15908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 16257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 16258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 16259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 16260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 16340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 16341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 16342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 16343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 16344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 16345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 16346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 16347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 16348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 16349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 16350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 16351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 16352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 16353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 16354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 16355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 16736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 16737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 16738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 16739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 16740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 16741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 16742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 16743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 16744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 16745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 16746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 16747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 16748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 16749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 16750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 16751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 17003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 17004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 17005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 17006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 17007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 17008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 17009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 17010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 17011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 17012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 17013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 17014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 17015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 17016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 17017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 17018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 17230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 17231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 17232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 17233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 17234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 17235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 17236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 17237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 17238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 17239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 17240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 17241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 17242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 17243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 17244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 17245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 17430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 17431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 17432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 17433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 17434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 17435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 17436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 17437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 17438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 17439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 17440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 17441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 17442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 17443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 17444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 17445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 17643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 17644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 17645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 17646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 17647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 17648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 17649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 17650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 17651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 17652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 17653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 17654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 17655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 17656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 17657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 17658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 17869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 17870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 17871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 17872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 17873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 17874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 17875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 17876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 17877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 17878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 17879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 17880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 17881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 17882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 17883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 17884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 18097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 18098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 18099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 18100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 18101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 18102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 18103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 18104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 18105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 18106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 18107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 18108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 18109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 18110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 18111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 18112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 18295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 18296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 18297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 18298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 18299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 18300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 18301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 18302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 18303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 18304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 18305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 18306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 18307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 18308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 18309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 18310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 18510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 18511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 18512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 18513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 18514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 18515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 18516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 18517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 18518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 18519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 18520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 18521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 18522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 18523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 18524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 18525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 18741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 18742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 18743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 18744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 18745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 18746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 18747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 18748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 18749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 18750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 18751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 18752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 18753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 18754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 18755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 18756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 18964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 18965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 18966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 18967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 18968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 18969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 18970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 18971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 18972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 18973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 18974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 18975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 18976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 18977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 18978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 18979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 19163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 19164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 19165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 19166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 19167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 19168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 19169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 19170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 19171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 19172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 19173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 19174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 19175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 19176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 19177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 19178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 19385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 19386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 19387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 19388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 19389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 19390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 19391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 19392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 19393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 19394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 19395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 19396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 19397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 19398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 19399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 19400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.30s leader 5, trace 19540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.30s leader 5, trace 19541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 19614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 19615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 19616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 19617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 19618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 19619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 19620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 19621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 19622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 19623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 19624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 19625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 19626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 19627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 19628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 19629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 19843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 19844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 19845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 19846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 19847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 19848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 19849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 19850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 19851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 19852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 19853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 19854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 19855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 19856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 19857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 19858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 20060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 20061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 20062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 20063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 20064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 20065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 20066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 20067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 20068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 20069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 20070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 20071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 20072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 20073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 20074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 20075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 20266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 20267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 20268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 20269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 20270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 20271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 20272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 20273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 20274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 20275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 20276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 20277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 20278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 20279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 20280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 20281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 20488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 20489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 20490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 20491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 20492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 20493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 20494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 20495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 20496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 20497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 20498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 20499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 20500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 20501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 20502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 20503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 20714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 20715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 20716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 20717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 20718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 20719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 20720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 20721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 20722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 20723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 20724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 20725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 20726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 20727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 20728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 20729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 20913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 20914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 20915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 20916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 20917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 20918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 20919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 20920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 20921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 20922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 20923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 20924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 20925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 20926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 20927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 20928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 21123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 21124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 21125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 21126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 21127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 21128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 21129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 21130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 21131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 21132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 21133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 21134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 21135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 21136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 21137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 21138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 21352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 21353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 21354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 21355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 21356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 21357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 21358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 21359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 21360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 21361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 21362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 21363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 21364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 21365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 21366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 21367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 21577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 21578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 21579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 21580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 21581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 21582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 21583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 21584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 21585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 21586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 21587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 21588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 21589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 21590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 21591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 21592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 21786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 21787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 21788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 21789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 21790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 21791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 21792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 21793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 21794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 21795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 21796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 21797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 21798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 21799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 21800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 21801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 22000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 22001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 22002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 22003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 22004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 22005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 22006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 22007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 22008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 22009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 22010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 22011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 22012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 22013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 22014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 22015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 22225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 22226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 22227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 22228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 22229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 22230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 22231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 22232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 22233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 22234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 22235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 22236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 22237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 22238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 22239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 22240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 22448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 22449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 22450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 22451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 22452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 22453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 22454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 22455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 22456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 22457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 22458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 22459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 22460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 22461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 22462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 22463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 301.30s leader 5, trace 22551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 301.30s leader 5, trace 22552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 22680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 22681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 22682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 22683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 22684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 22685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 22686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 22687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 22688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 22689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 22690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 22691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 22692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 22693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 22694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 22695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 22877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 22878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 22879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 22880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 22881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 22882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 22883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 22884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 22885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 22886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 22887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 22888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 22889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 22890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 22891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 22892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 23098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 23099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 23100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 23101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 23102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 23103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 23104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 23105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 23106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 23107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 23108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 23109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 23110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 23111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 23112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 23113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 23328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 23329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 23330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 23331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 23332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 23333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 23334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 23335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 23336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 23337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 23338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 23339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 23340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 23341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 23342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 23343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 23555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 23556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 23557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 23558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 23559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 23560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 23561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 23562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 23563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 23564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 23565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 23566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 23567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 23568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 23569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 23570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 23755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 23756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 23757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 23758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 23759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 23760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 23761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 23762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 23763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 23764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 23765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 23766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 23767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 23768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 23769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 23770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 23976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 23977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 23978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 23979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 23980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 23981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 23982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 23983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 23984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 23985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 23986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 23987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 23988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 23989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 23990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 23991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 24205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 24206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 24207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 24208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 24209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 24210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 24211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 24212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 24213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 24214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 24215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 24216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 24217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 24218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 24219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 24220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 24433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 24434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 24435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 24436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 24437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 24438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 24439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 24440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 24441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 24442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 24443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 24444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 24445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 24446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 24447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 24448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 24632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 24633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 24634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 24635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 24636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 24637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 24638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 24639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 24640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 24641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 24642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 24643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 24644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 24645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 24646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 24647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 24849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 24850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 24851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 24852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 24853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 24854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 24855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 24856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 24857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 24858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 24859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 24860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 24861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 24862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 24863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 24864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 25074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 25075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 25076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 25077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 25078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 25079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 25080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 25081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 25082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 25083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 25084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 25085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 25086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 25087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 25088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 25089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Ash incapacitated
- 1: Vale killed in action
- 1: Soren killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
