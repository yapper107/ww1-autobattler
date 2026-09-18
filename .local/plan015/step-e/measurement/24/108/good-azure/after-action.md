# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/24/108/good-azure/battle-108-1789674200071790512`

## Battle summary

**Ember** · 360 s · 314 shots.

### Turning points

- 14.9s, squad 1: contact (events line 175). First recorded contact.
- 26.2s, squad 1: withdrawal ([trace 4545](#trace-4545)). 112.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 37.9s, squad 1: help call ([trace 10316](#trace-10316)). No completion observed before termination.
- 42.8s, squad 0: assault ([trace 11565](#trace-11565)). 58.2s, squad 0: took cover and returned fire.
- 47.7s, squad 0: help call ([trace 11979](#trace-11979)). No completion observed before termination.
- 95.7s, squad 0: withdrawal ([trace 18338](#trace-18338)). No completion observed before termination.
- 123.7s, squad 1: withdrawal ([trace 19497](#trace-19497)). 161.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 234.9s, squad 1: withdrawal ([trace 24057](#trace-24057)). 276.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 249.9s, squad 1: help call ([trace 24701](#trace-24701)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; no completed objective recorded; 46 shots, 8/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 4 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 217 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 47 shots, 0/2 lost.

### Decisions and attribution

At 42.8s, squad 0 chose prepared a base of fire ([trace 10766](#trace-10766)), followed by 2 shots and 0 own casualties; estimate 9.7 against 0 distinct squad-reported contacts; At 79.0s, squad 1 chose renewed the existing objective ([trace 17223](#trace-17223)), followed by 2 shots and 0 own casualties; estimate 12.7 against 3 distinct squad-reported contacts; At 26.2s, squad 1 chose broke contact ([trace 4545](#trace-4545)), followed by 1 shots and 0 own casualties; estimate 10.4 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 684](#trace-684)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449787774633696, 'next_transition': 703}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 686](#trace-686)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409999119592868, 'next_transition': 817}.

### Communication

198 matched deliveries (mean 0.40s, max 2.10s); 496 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.90s, squad 1, contact, evidence events line 175: First recorded contact; .
- 26.20s, squad 1, withdrawal, evidence 4545: BreakContact: believed ratio at least two without superiority; 112.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 37.85s, squad 1, help call, evidence 10316: NeedSupport; No completion observed before termination.
- 42.75s, squad 0, assault, evidence 11565: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 58.2s, squad 0: took cover and returned fire.
- 47.65s, squad 0, help call, evidence 11979: NeedSupport; No completion observed before termination.
- 95.70s, squad 0, withdrawal, evidence 18338: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 123.65s, squad 1, withdrawal, evidence 19497: Withdraw to received rally; 161.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 234.90s, squad 1, withdrawal, evidence 24057: BreakContact: believed ratio at least two without superiority; 276.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 249.90s, squad 1, help call, evidence 24701: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915439328533227, 'next_transition': 570}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915439328533227, 'next_transition': 570}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915439328533227, 'next_transition': 570}.
<a id="trace-327"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 327): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528790231665454, 'next_transition': 87}.
<a id="trace-328"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 328): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528790231665454, 'next_transition': 87}.
<a id="trace-329"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 329): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528790231665454, 'next_transition': 87}.
<a id="trace-570"></a>
<a id="trace-572"></a>
<a id="trace-598"></a>
<a id="trace-600"></a>
<a id="trace-629"></a>
<a id="trace-631"></a>
<a id="trace-654"></a>
<a id="trace-656"></a>
<a id="trace-673"></a>
<a id="trace-675"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 570): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600168965496865, 'next_transition': 598}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449787774633696, 'next_transition': 703}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409999119592868, 'next_transition': 817}.
<a id="trace-684"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 684): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 684. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449787774633696, 'next_transition': 703}.
<a id="trace-685"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 685): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 685. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449787774633696, 'next_transition': 703}.
<a id="trace-686"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 686): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 686. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409999119592868, 'next_transition': 817}.
<a id="trace-687"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 687): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 687. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409999119592868, 'next_transition': 817}.
<a id="trace-703"></a>
<a id="trace-705"></a>
<a id="trace-729"></a>
<a id="trace-731"></a>
<a id="trace-811"></a>
<a id="trace-813"></a>
<a id="trace-934"></a>
<a id="trace-936"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 703): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 687. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450113517940907, 'next_transition': 729}.
<a id="trace-817"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 817): traveling overwatch. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: None.
<a id="trace-818"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 818): received platoon directive. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: None.
<a id="trace-864"></a>
- 5.30s–5.30s (×1), actor 8, squad 1 (trace 864): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 17.313665067652423, 'next_transition': 1754}.
<a id="trace-938"></a>
<a id="trace-940"></a>
<a id="trace-1039"></a>
<a id="trace-1041"></a>
<a id="trace-1078"></a>
<a id="trace-1080"></a>
<a id="trace-1126"></a>
<a id="trace-1128"></a>
<a id="trace-1164"></a>
<a id="trace-1166"></a>
<a id="trace-1199"></a>
<a id="trace-1201"></a>
<a id="trace-1248"></a>
<a id="trace-1250"></a>
<a id="trace-1279"></a>
<a id="trace-1281"></a>
<a id="trace-1395"></a>
<a id="trace-1397"></a>
<a id="trace-1423"></a>
<a id="trace-1425"></a>
<a id="trace-1446"></a>
<a id="trace-1448"></a>
<a id="trace-1468"></a>
<a id="trace-1470"></a>
<a id="trace-1491"></a>
<a id="trace-1493"></a>
<a id="trace-1509"></a>
<a id="trace-1511"></a>
<a id="trace-1529"></a>
<a id="trace-1531"></a>
<a id="trace-1572"></a>
<a id="trace-1574"></a>
<a id="trace-1746"></a>
<a id="trace-1748"></a>
<a id="trace-2216"></a>
<a id="trace-2218"></a>
<a id="trace-2390"></a>
<a id="trace-2392"></a>
<a id="trace-2675"></a>
<a id="trace-2677"></a>
<a id="trace-2901"></a>
<a id="trace-2903"></a>
<a id="trace-2951"></a>
<a id="trace-2953"></a>
<a id="trace-2992"></a>
<a id="trace-2994"></a>
<a id="trace-3045"></a>
<a id="trace-3047"></a>
<a id="trace-3059"></a>
<a id="trace-3061"></a>
<a id="trace-3159"></a>
<a id="trace-3161"></a>
<a id="trace-3237"></a>
<a id="trace-3239"></a>
<a id="trace-3560"></a>
<a id="trace-3562"></a>
<a id="trace-3587"></a>
<a id="trace-3589"></a>
<a id="trace-3624"></a>
<a id="trace-3626"></a>
<a id="trace-3652"></a>
<a id="trace-3654"></a>
<a id="trace-4289"></a>
<a id="trace-4291"></a>
<a id="trace-4339"></a>
<a id="trace-4341"></a>
<a id="trace-4474"></a>
<a id="trace-4476"></a>
<a id="trace-4517"></a>
<a id="trace-4519"></a>
<a id="trace-4713"></a>
<a id="trace-4715"></a>
<a id="trace-4740"></a>
<a id="trace-4742"></a>
<a id="trace-4768"></a>
<a id="trace-4770"></a>
<a id="trace-4788"></a>
<a id="trace-4790"></a>
<a id="trace-4813"></a>
<a id="trace-4815"></a>
<a id="trace-4844"></a>
<a id="trace-4846"></a>
<a id="trace-4972"></a>
<a id="trace-4974"></a>
<a id="trace-5041"></a>
<a id="trace-5043"></a>
<a id="trace-5090"></a>
<a id="trace-5092"></a>
<a id="trace-5558"></a>
<a id="trace-5560"></a>
<a id="trace-5749"></a>
<a id="trace-5751"></a>
<a id="trace-5789"></a>
<a id="trace-5791"></a>
<a id="trace-5922"></a>
<a id="trace-5924"></a>
<a id="trace-5956"></a>
<a id="trace-5958"></a>
<a id="trace-9799"></a>
<a id="trace-9801"></a>
<a id="trace-9831"></a>
<a id="trace-9833"></a>
<a id="trace-9871"></a>
<a id="trace-9873"></a>
<a id="trace-10411"></a>
<a id="trace-10413"></a>
<a id="trace-10465"></a>
<a id="trace-10467"></a>
<a id="trace-10499"></a>
<a id="trace-10501"></a>
<a id="trace-10522"></a>
<a id="trace-10524"></a>
<a id="trace-10640"></a>
<a id="trace-10642"></a>
<a id="trace-10671"></a>
<a id="trace-10673"></a>
<a id="trace-10698"></a>
<a id="trace-10700"></a>
<a id="trace-11761"></a>
<a id="trace-11763"></a>
<a id="trace-11774"></a>
<a id="trace-11776"></a>
<a id="trace-11797"></a>
<a id="trace-11799"></a>
<a id="trace-11821"></a>
<a id="trace-11823"></a>
<a id="trace-11901"></a>
<a id="trace-11903"></a>
<a id="trace-11922"></a>
<a id="trace-11924"></a>
<a id="trace-11944"></a>
<a id="trace-11946"></a>
<a id="trace-11956"></a>
<a id="trace-11958"></a>
<a id="trace-11970"></a>
<a id="trace-11972"></a>
<a id="trace-11992"></a>
<a id="trace-11994"></a>
<a id="trace-12013"></a>
<a id="trace-12015"></a>
<a id="trace-12036"></a>
<a id="trace-12038"></a>
<a id="trace-12059"></a>
<a id="trace-12061"></a>
<a id="trace-12094"></a>
<a id="trace-12096"></a>
<a id="trace-12201"></a>
<a id="trace-12203"></a>
<a id="trace-12237"></a>
<a id="trace-12239"></a>
<a id="trace-12264"></a>
<a id="trace-12266"></a>
<a id="trace-12289"></a>
<a id="trace-12291"></a>
<a id="trace-12316"></a>
<a id="trace-12318"></a>
<a id="trace-12331"></a>
<a id="trace-12333"></a>
<a id="trace-12350"></a>
<a id="trace-12352"></a>
<a id="trace-12440"></a>
<a id="trace-12442"></a>
<a id="trace-12464"></a>
<a id="trace-12466"></a>
<a id="trace-12482"></a>
<a id="trace-12484"></a>
<a id="trace-12572"></a>
<a id="trace-12574"></a>
<a id="trace-12605"></a>
<a id="trace-12607"></a>
<a id="trace-12641"></a>
<a id="trace-12643"></a>
<a id="trace-12679"></a>
<a id="trace-12681"></a>
<a id="trace-12709"></a>
<a id="trace-12711"></a>
<a id="trace-12734"></a>
<a id="trace-12736"></a>
<a id="trace-12961"></a>
<a id="trace-12963"></a>
<a id="trace-12987"></a>
<a id="trace-12989"></a>
<a id="trace-13015"></a>
<a id="trace-13017"></a>
<a id="trace-13130"></a>
<a id="trace-13132"></a>
<a id="trace-13171"></a>
<a id="trace-13173"></a>
<a id="trace-13193"></a>
<a id="trace-13195"></a>
<a id="trace-13209"></a>
<a id="trace-13211"></a>
<a id="trace-13228"></a>
<a id="trace-13230"></a>
<a id="trace-13245"></a>
<a id="trace-13247"></a>
<a id="trace-13271"></a>
<a id="trace-13273"></a>
<a id="trace-13510"></a>
<a id="trace-13512"></a>
<a id="trace-13567"></a>
<a id="trace-13569"></a>
<a id="trace-13605"></a>
<a id="trace-13607"></a>
<a id="trace-13626"></a>
<a id="trace-13628"></a>
<a id="trace-16471"></a>
<a id="trace-16473"></a>
<a id="trace-16592"></a>
<a id="trace-16594"></a>
<a id="trace-16634"></a>
<a id="trace-16636"></a>
<a id="trace-16667"></a>
<a id="trace-16669"></a>
<a id="trace-16725"></a>
<a id="trace-16727"></a>
<a id="trace-16763"></a>
<a id="trace-16765"></a>
<a id="trace-16819"></a>
<a id="trace-16821"></a>
<a id="trace-16863"></a>
<a id="trace-16865"></a>
<a id="trace-16898"></a>
<a id="trace-16900"></a>
<a id="trace-16921"></a>
<a id="trace-16923"></a>
<a id="trace-17012"></a>
<a id="trace-17014"></a>
<a id="trace-17028"></a>
<a id="trace-17030"></a>
<a id="trace-17109"></a>
<a id="trace-17111"></a>
<a id="trace-17126"></a>
<a id="trace-17128"></a>
<a id="trace-17151"></a>
<a id="trace-17153"></a>
<a id="trace-17181"></a>
<a id="trace-17183"></a>
<a id="trace-17203"></a>
<a id="trace-17205"></a>
<a id="trace-17218"></a>
<a id="trace-17220"></a>
<a id="trace-17237"></a>
<a id="trace-17239"></a>
<a id="trace-17253"></a>
<a id="trace-17255"></a>
<a id="trace-17342"></a>
<a id="trace-17344"></a>
<a id="trace-17359"></a>
<a id="trace-17361"></a>
<a id="trace-17371"></a>
<a id="trace-17373"></a>
<a id="trace-17387"></a>
<a id="trace-17389"></a>
<a id="trace-17412"></a>
<a id="trace-17414"></a>
<a id="trace-17424"></a>
<a id="trace-17426"></a>
<a id="trace-17449"></a>
<a id="trace-17451"></a>
<a id="trace-17465"></a>
<a id="trace-17467"></a>
<a id="trace-17543"></a>
<a id="trace-17545"></a>
<a id="trace-17570"></a>
<a id="trace-17572"></a>
<a id="trace-17590"></a>
<a id="trace-17592"></a>
<a id="trace-17606"></a>
<a id="trace-17608"></a>
<a id="trace-17645"></a>
<a id="trace-17647"></a>
<a id="trace-17661"></a>
<a id="trace-17663"></a>
<a id="trace-17679"></a>
<a id="trace-17681"></a>
<a id="trace-17695"></a>
<a id="trace-17697"></a>
<a id="trace-17789"></a>
<a id="trace-17791"></a>
<a id="trace-17807"></a>
<a id="trace-17809"></a>
<a id="trace-18121"></a>
<a id="trace-18123"></a>
<a id="trace-18187"></a>
<a id="trace-18189"></a>
<a id="trace-18209"></a>
<a id="trace-18211"></a>
<a id="trace-18239"></a>
<a id="trace-18241"></a>
<a id="trace-18253"></a>
<a id="trace-18255"></a>
<a id="trace-18331"></a>
<a id="trace-18333"></a>
<a id="trace-18595"></a>
<a id="trace-18597"></a>
<a id="trace-18616"></a>
<a id="trace-18618"></a>
<a id="trace-18633"></a>
<a id="trace-18635"></a>
<a id="trace-18660"></a>
<a id="trace-18662"></a>
<a id="trace-18674"></a>
<a id="trace-18676"></a>
<a id="trace-18709"></a>
<a id="trace-18711"></a>
<a id="trace-18727"></a>
<a id="trace-18729"></a>
<a id="trace-18738"></a>
<a id="trace-18740"></a>
<a id="trace-18816"></a>
<a id="trace-18818"></a>
<a id="trace-18829"></a>
<a id="trace-18831"></a>
<a id="trace-18855"></a>
<a id="trace-18857"></a>
<a id="trace-18887"></a>
<a id="trace-18889"></a>
<a id="trace-18904"></a>
<a id="trace-18906"></a>
<a id="trace-18920"></a>
<a id="trace-18922"></a>
<a id="trace-18934"></a>
<a id="trace-18936"></a>
<a id="trace-18949"></a>
<a id="trace-18951"></a>
<a id="trace-19019"></a>
<a id="trace-19021"></a>
<a id="trace-19033"></a>
<a id="trace-19035"></a>
<a id="trace-19044"></a>
<a id="trace-19046"></a>
<a id="trace-19050"></a>
<a id="trace-19052"></a>
<a id="trace-19060"></a>
<a id="trace-19062"></a>
<a id="trace-19066"></a>
<a id="trace-19068"></a>
<a id="trace-19075"></a>
<a id="trace-19077"></a>
<a id="trace-19151"></a>
<a id="trace-19153"></a>
<a id="trace-19156"></a>
<a id="trace-19158"></a>
<a id="trace-19168"></a>
<a id="trace-19170"></a>
<a id="trace-19173"></a>
<a id="trace-19175"></a>
<a id="trace-19182"></a>
<a id="trace-19184"></a>
<a id="trace-19201"></a>
<a id="trace-19203"></a>
<a id="trace-19210"></a>
<a id="trace-19212"></a>
<a id="trace-19223"></a>
<a id="trace-19225"></a>
<a id="trace-19242"></a>
<a id="trace-19244"></a>
<a id="trace-19315"></a>
<a id="trace-19317"></a>
<a id="trace-19331"></a>
<a id="trace-19333"></a>
<a id="trace-19343"></a>
<a id="trace-19345"></a>
<a id="trace-19347"></a>
<a id="trace-19349"></a>
<a id="trace-19355"></a>
<a id="trace-19357"></a>
<a id="trace-19362"></a>
<a id="trace-19364"></a>
<a id="trace-19370"></a>
<a id="trace-19372"></a>
<a id="trace-19381"></a>
<a id="trace-19383"></a>
<a id="trace-19447"></a>
<a id="trace-19449"></a>
<a id="trace-19452"></a>
<a id="trace-19454"></a>
<a id="trace-19474"></a>
<a id="trace-19476"></a>
<a id="trace-19479"></a>
<a id="trace-19481"></a>
<a id="trace-19491"></a>
<a id="trace-19493"></a>
<a id="trace-19553"></a>
<a id="trace-19555"></a>
<a id="trace-19567"></a>
<a id="trace-19569"></a>
<a id="trace-19580"></a>
<a id="trace-19582"></a>
<a id="trace-19650"></a>
<a id="trace-19652"></a>
<a id="trace-19658"></a>
<a id="trace-19660"></a>
<a id="trace-19675"></a>
<a id="trace-19677"></a>
<a id="trace-19704"></a>
<a id="trace-19706"></a>
<a id="trace-19708"></a>
<a id="trace-19710"></a>
<a id="trace-19726"></a>
<a id="trace-19728"></a>
<a id="trace-19738"></a>
<a id="trace-19740"></a>
<a id="trace-19751"></a>
<a id="trace-19753"></a>
<a id="trace-19817"></a>
<a id="trace-19819"></a>
<a id="trace-19822"></a>
<a id="trace-19824"></a>
<a id="trace-19834"></a>
<a id="trace-19836"></a>
<a id="trace-19844"></a>
<a id="trace-19846"></a>
<a id="trace-19856"></a>
<a id="trace-19858"></a>
<a id="trace-19865"></a>
<a id="trace-19867"></a>
<a id="trace-19884"></a>
<a id="trace-19886"></a>
<a id="trace-19975"></a>
<a id="trace-19977"></a>
<a id="trace-20051"></a>
<a id="trace-20053"></a>
<a id="trace-20062"></a>
<a id="trace-20064"></a>
<a id="trace-20078"></a>
<a id="trace-20080"></a>
<a id="trace-20115"></a>
<a id="trace-20117"></a>
<a id="trace-20130"></a>
<a id="trace-20132"></a>
<a id="trace-20212"></a>
<a id="trace-20214"></a>
<a id="trace-20229"></a>
<a id="trace-20231"></a>
<a id="trace-20236"></a>
<a id="trace-20238"></a>
<a id="trace-20249"></a>
<a id="trace-20251"></a>
<a id="trace-20253"></a>
<a id="trace-20255"></a>
<a id="trace-20272"></a>
<a id="trace-20274"></a>
<a id="trace-20291"></a>
<a id="trace-20293"></a>
<a id="trace-20369"></a>
<a id="trace-20371"></a>
<a id="trace-20390"></a>
<a id="trace-20392"></a>
<a id="trace-20406"></a>
<a id="trace-20408"></a>
<a id="trace-20479"></a>
<a id="trace-20481"></a>
<a id="trace-20516"></a>
<a id="trace-20518"></a>
<a id="trace-20525"></a>
<a id="trace-20527"></a>
<a id="trace-20594"></a>
<a id="trace-20596"></a>
<a id="trace-20599"></a>
<a id="trace-20601"></a>
<a id="trace-20614"></a>
<a id="trace-20616"></a>
<a id="trace-20625"></a>
<a id="trace-20627"></a>
<a id="trace-20645"></a>
<a id="trace-20647"></a>
<a id="trace-20653"></a>
<a id="trace-20655"></a>
<a id="trace-20737"></a>
<a id="trace-20739"></a>
<a id="trace-20749"></a>
<a id="trace-20751"></a>
<a id="trace-20764"></a>
<a id="trace-20766"></a>
<a id="trace-20834"></a>
<a id="trace-20840"></a>
<a id="trace-20850"></a>
<a id="trace-20867"></a>
<a id="trace-20869"></a>
<a id="trace-20874"></a>
<a id="trace-20876"></a>
<a id="trace-20888"></a>
<a id="trace-20890"></a>
<a id="trace-20916"></a>
<a id="trace-20918"></a>
<a id="trace-20935"></a>
<a id="trace-20937"></a>
<a id="trace-21000"></a>
<a id="trace-21002"></a>
<a id="trace-21007"></a>
<a id="trace-21009"></a>
<a id="trace-21022"></a>
<a id="trace-21024"></a>
<a id="trace-21035"></a>
<a id="trace-21037"></a>
<a id="trace-21047"></a>
<a id="trace-21049"></a>
<a id="trace-21063"></a>
<a id="trace-21065"></a>
<a id="trace-21076"></a>
<a id="trace-21078"></a>
<a id="trace-21097"></a>
<a id="trace-21099"></a>
<a id="trace-21109"></a>
<a id="trace-21111"></a>
<a id="trace-21181"></a>
<a id="trace-21183"></a>
<a id="trace-21189"></a>
<a id="trace-21191"></a>
<a id="trace-21208"></a>
<a id="trace-21210"></a>
<a id="trace-21215"></a>
<a id="trace-21217"></a>
<a id="trace-21224"></a>
<a id="trace-21226"></a>
<a id="trace-21237"></a>
<a id="trace-21239"></a>
<a id="trace-21321"></a>
<a id="trace-21323"></a>
<a id="trace-21326"></a>
<a id="trace-21328"></a>
<a id="trace-21341"></a>
<a id="trace-21343"></a>
<a id="trace-21366"></a>
<a id="trace-21368"></a>
<a id="trace-21373"></a>
<a id="trace-21375"></a>
<a id="trace-21390"></a>
<a id="trace-21392"></a>
<a id="trace-21396"></a>
<a id="trace-21398"></a>
<a id="trace-21405"></a>
<a id="trace-21407"></a>
<a id="trace-21412"></a>
<a id="trace-21414"></a>
<a id="trace-21477"></a>
<a id="trace-21479"></a>
<a id="trace-21481"></a>
<a id="trace-21483"></a>
<a id="trace-21493"></a>
<a id="trace-21495"></a>
<a id="trace-21501"></a>
<a id="trace-21503"></a>
<a id="trace-21517"></a>
<a id="trace-21519"></a>
<a id="trace-21536"></a>
<a id="trace-21538"></a>
<a id="trace-21543"></a>
<a id="trace-21545"></a>
<a id="trace-21555"></a>
<a id="trace-21557"></a>
<a id="trace-21571"></a>
<a id="trace-21573"></a>
<a id="trace-21635"></a>
<a id="trace-21637"></a>
<a id="trace-21639"></a>
<a id="trace-21641"></a>
<a id="trace-21650"></a>
<a id="trace-21652"></a>
<a id="trace-21656"></a>
<a id="trace-21658"></a>
<a id="trace-21666"></a>
<a id="trace-21668"></a>
<a id="trace-21682"></a>
<a id="trace-21684"></a>
<a id="trace-21689"></a>
<a id="trace-21691"></a>
<a id="trace-21701"></a>
<a id="trace-21703"></a>
<a id="trace-21713"></a>
<a id="trace-21715"></a>
<a id="trace-21789"></a>
<a id="trace-21791"></a>
<a id="trace-21808"></a>
<a id="trace-21810"></a>
<a id="trace-21815"></a>
<a id="trace-21817"></a>
<a id="trace-21829"></a>
<a id="trace-21831"></a>
<a id="trace-21837"></a>
<a id="trace-21839"></a>
<a id="trace-21844"></a>
<a id="trace-21846"></a>
<a id="trace-21857"></a>
<a id="trace-21859"></a>
<a id="trace-21864"></a>
<a id="trace-21866"></a>
<a id="trace-21933"></a>
<a id="trace-21935"></a>
<a id="trace-22057"></a>
<a id="trace-22059"></a>
<a id="trace-22076"></a>
<a id="trace-22078"></a>
<a id="trace-22092"></a>
<a id="trace-22094"></a>
<a id="trace-22112"></a>
<a id="trace-22114"></a>
<a id="trace-22128"></a>
<a id="trace-22130"></a>
<a id="trace-22147"></a>
<a id="trace-22149"></a>
<a id="trace-22157"></a>
<a id="trace-22159"></a>
<a id="trace-22243"></a>
<a id="trace-22245"></a>
<a id="trace-22256"></a>
<a id="trace-22258"></a>
<a id="trace-22269"></a>
<a id="trace-22271"></a>
<a id="trace-22299"></a>
<a id="trace-22301"></a>
<a id="trace-22332"></a>
<a id="trace-22334"></a>
<a id="trace-22340"></a>
<a id="trace-22342"></a>
<a id="trace-22413"></a>
<a id="trace-22415"></a>
<a id="trace-22427"></a>
<a id="trace-22429"></a>
<a id="trace-22434"></a>
<a id="trace-22436"></a>
<a id="trace-22659"></a>
<a id="trace-22661"></a>
<a id="trace-22670"></a>
<a id="trace-22672"></a>
<a id="trace-22683"></a>
<a id="trace-22685"></a>
<a id="trace-22702"></a>
<a id="trace-22704"></a>
<a id="trace-22720"></a>
<a id="trace-22722"></a>
<a id="trace-22815"></a>
<a id="trace-22817"></a>
<a id="trace-22843"></a>
<a id="trace-22845"></a>
<a id="trace-22871"></a>
<a id="trace-22873"></a>
<a id="trace-22891"></a>
<a id="trace-22893"></a>
<a id="trace-22914"></a>
<a id="trace-22916"></a>
<a id="trace-22980"></a>
<a id="trace-22982"></a>
<a id="trace-22992"></a>
<a id="trace-22994"></a>
<a id="trace-23016"></a>
<a id="trace-23018"></a>
<a id="trace-23027"></a>
<a id="trace-23029"></a>
<a id="trace-23041"></a>
<a id="trace-23043"></a>
<a id="trace-23161"></a>
<a id="trace-23163"></a>
<a id="trace-23180"></a>
<a id="trace-23182"></a>
<a id="trace-23204"></a>
<a id="trace-23206"></a>
<a id="trace-23272"></a>
<a id="trace-23274"></a>
<a id="trace-23281"></a>
<a id="trace-23283"></a>
<a id="trace-23296"></a>
<a id="trace-23298"></a>
<a id="trace-23318"></a>
<a id="trace-23320"></a>
<a id="trace-23330"></a>
<a id="trace-23332"></a>
<a id="trace-23349"></a>
<a id="trace-23351"></a>
<a id="trace-23362"></a>
<a id="trace-23364"></a>
<a id="trace-23382"></a>
<a id="trace-23384"></a>
<a id="trace-23393"></a>
<a id="trace-23395"></a>
<a id="trace-23460"></a>
<a id="trace-23462"></a>
<a id="trace-23480"></a>
<a id="trace-23482"></a>
<a id="trace-23507"></a>
<a id="trace-23509"></a>
<a id="trace-23519"></a>
<a id="trace-23521"></a>
<a id="trace-23525"></a>
<a id="trace-23527"></a>
<a id="trace-23540"></a>
<a id="trace-23542"></a>
<a id="trace-23555"></a>
<a id="trace-23557"></a>
<a id="trace-23634"></a>
<a id="trace-23636"></a>
<a id="trace-23650"></a>
<a id="trace-23652"></a>
<a id="trace-23657"></a>
<a id="trace-23659"></a>
<a id="trace-23668"></a>
<a id="trace-23670"></a>
<a id="trace-23782"></a>
<a id="trace-23784"></a>
<a id="trace-23795"></a>
<a id="trace-23797"></a>
<a id="trace-23817"></a>
<a id="trace-23819"></a>
<a id="trace-23897"></a>
<a id="trace-23899"></a>
<a id="trace-23908"></a>
<a id="trace-23910"></a>
<a id="trace-23953"></a>
<a id="trace-23955"></a>
<a id="trace-23980"></a>
<a id="trace-23982"></a>
<a id="trace-23990"></a>
<a id="trace-23992"></a>
<a id="trace-24007"></a>
<a id="trace-24009"></a>
<a id="trace-24021"></a>
<a id="trace-24023"></a>
<a id="trace-24037"></a>
<a id="trace-24039"></a>
<a id="trace-24049"></a>
<a id="trace-24051"></a>
<a id="trace-24198"></a>
<a id="trace-24200"></a>
<a id="trace-24260"></a>
<a id="trace-24262"></a>
<a id="trace-24274"></a>
<a id="trace-24276"></a>
<a id="trace-24397"></a>
<a id="trace-24399"></a>
<a id="trace-24404"></a>
<a id="trace-24406"></a>
<a id="trace-24420"></a>
<a id="trace-24422"></a>
<a id="trace-24444"></a>
<a id="trace-24446"></a>
<a id="trace-24462"></a>
<a id="trace-24464"></a>
<a id="trace-24469"></a>
<a id="trace-24471"></a>
<a id="trace-24542"></a>
<a id="trace-24544"></a>
<a id="trace-24555"></a>
<a id="trace-24557"></a>
<a id="trace-24624"></a>
<a id="trace-24626"></a>
<a id="trace-24657"></a>
<a id="trace-24659"></a>
<a id="trace-24669"></a>
<a id="trace-24671"></a>
<a id="trace-24689"></a>
<a id="trace-24691"></a>
<a id="trace-24775"></a>
<a id="trace-24777"></a>
<a id="trace-24788"></a>
<a id="trace-24790"></a>
<a id="trace-24798"></a>
<a id="trace-24800"></a>
<a id="trace-24821"></a>
<a id="trace-24823"></a>
<a id="trace-24835"></a>
<a id="trace-24837"></a>
<a id="trace-24843"></a>
<a id="trace-24845"></a>
<a id="trace-24851"></a>
<a id="trace-24853"></a>
<a id="trace-24915"></a>
<a id="trace-24917"></a>
<a id="trace-24919"></a>
<a id="trace-24921"></a>
<a id="trace-24930"></a>
<a id="trace-24932"></a>
<a id="trace-24937"></a>
<a id="trace-24939"></a>
<a id="trace-24950"></a>
<a id="trace-24952"></a>
<a id="trace-24955"></a>
<a id="trace-24957"></a>
<a id="trace-24969"></a>
<a id="trace-24971"></a>
<a id="trace-24991"></a>
<a id="trace-24993"></a>
<a id="trace-24998"></a>
<a id="trace-25000"></a>
<a id="trace-25063"></a>
<a id="trace-25065"></a>
<a id="trace-25077"></a>
<a id="trace-25079"></a>
<a id="trace-25094"></a>
<a id="trace-25096"></a>
<a id="trace-25098"></a>
<a id="trace-25100"></a>
<a id="trace-25107"></a>
<a id="trace-25109"></a>
<a id="trace-25116"></a>
<a id="trace-25118"></a>
<a id="trace-25125"></a>
<a id="trace-25127"></a>
<a id="trace-25135"></a>
<a id="trace-25137"></a>
<a id="trace-25207"></a>
<a id="trace-25209"></a>
<a id="trace-25212"></a>
<a id="trace-25214"></a>
<a id="trace-25223"></a>
<a id="trace-25225"></a>
<a id="trace-25231"></a>
<a id="trace-25233"></a>
<a id="trace-25241"></a>
<a id="trace-25243"></a>
<a id="trace-25246"></a>
<a id="trace-25248"></a>
<a id="trace-25257"></a>
<a id="trace-25259"></a>
<a id="trace-25263"></a>
<a id="trace-25265"></a>
<a id="trace-25271"></a>
<a id="trace-25273"></a>
<a id="trace-25278"></a>
<a id="trace-25280"></a>
<a id="trace-25345"></a>
<a id="trace-25347"></a>
<a id="trace-25350"></a>
<a id="trace-25352"></a>
<a id="trace-25364"></a>
<a id="trace-25366"></a>
<a id="trace-25372"></a>
<a id="trace-25374"></a>
<a id="trace-25393"></a>
<a id="trace-25395"></a>
<a id="trace-25403"></a>
<a id="trace-25405"></a>
<a id="trace-25409"></a>
<a id="trace-25411"></a>
<a id="trace-25418"></a>
<a id="trace-25420"></a>
<a id="trace-25428"></a>
<a id="trace-25430"></a>
<a id="trace-25499"></a>
<a id="trace-25501"></a>
<a id="trace-25504"></a>
<a id="trace-25506"></a>
<a id="trace-25526"></a>
<a id="trace-25528"></a>
<a id="trace-25549"></a>
<a id="trace-25551"></a>
<a id="trace-25559"></a>
<a id="trace-25561"></a>
<a id="trace-25572"></a>
<a id="trace-25574"></a>
<a id="trace-25587"></a>
<a id="trace-25589"></a>
<a id="trace-25595"></a>
<a id="trace-25597"></a>
<a id="trace-25602"></a>
<a id="trace-25604"></a>
<a id="trace-25682"></a>
<a id="trace-25684"></a>
<a id="trace-25696"></a>
<a id="trace-25698"></a>
<a id="trace-25707"></a>
<a id="trace-25709"></a>
<a id="trace-25711"></a>
<a id="trace-25713"></a>
<a id="trace-25721"></a>
<a id="trace-25723"></a>
<a id="trace-25731"></a>
<a id="trace-25733"></a>
<a id="trace-25817"></a>
<a id="trace-25819"></a>
<a id="trace-25822"></a>
<a id="trace-25824"></a>
<a id="trace-25832"></a>
<a id="trace-25834"></a>
<a id="trace-25842"></a>
<a id="trace-25844"></a>
<a id="trace-25856"></a>
<a id="trace-25858"></a>
<a id="trace-25872"></a>
<a id="trace-25874"></a>
<a id="trace-25878"></a>
<a id="trace-25880"></a>
<a id="trace-25889"></a>
<a id="trace-25891"></a>
<a id="trace-25897"></a>
<a id="trace-25899"></a>
<a id="trace-25963"></a>
<a id="trace-25965"></a>
<a id="trace-25979"></a>
<a id="trace-25981"></a>
<a id="trace-25995"></a>
<a id="trace-25997"></a>
<a id="trace-26007"></a>
<a id="trace-26009"></a>
<a id="trace-26032"></a>
<a id="trace-26034"></a>
<a id="trace-26046"></a>
<a id="trace-26048"></a>
<a id="trace-26111"></a>
<a id="trace-26113"></a>
<a id="trace-26122"></a>
<a id="trace-26124"></a>
<a id="trace-26142"></a>
<a id="trace-26144"></a>
<a id="trace-26150"></a>
<a id="trace-26152"></a>
<a id="trace-26179"></a>
<a id="trace-26181"></a>
<a id="trace-26189"></a>
<a id="trace-26191"></a>
<a id="trace-26252"></a>
<a id="trace-26254"></a>
<a id="trace-26259"></a>
<a id="trace-26261"></a>
<a id="trace-26275"></a>
<a id="trace-26277"></a>
<a id="trace-26282"></a>
<a id="trace-26284"></a>
<a id="trace-26291"></a>
<a id="trace-26293"></a>
<a id="trace-26296"></a>
<a id="trace-26298"></a>
<a id="trace-26308"></a>
<a id="trace-26310"></a>
<a id="trace-26318"></a>
<a id="trace-26320"></a>
<a id="trace-26330"></a>
<a id="trace-26332"></a>
<a id="trace-26338"></a>
<a id="trace-26340"></a>
<a id="trace-26409"></a>
<a id="trace-26411"></a>
<a id="trace-26413"></a>
<a id="trace-26415"></a>
<a id="trace-26441"></a>
<a id="trace-26443"></a>
<a id="trace-26445"></a>
<a id="trace-26447"></a>
<a id="trace-26460"></a>
<a id="trace-26462"></a>
<a id="trace-26466"></a>
<a id="trace-26468"></a>
<a id="trace-26475"></a>
<a id="trace-26477"></a>
<a id="trace-26550"></a>
<a id="trace-26552"></a>
<a id="trace-26555"></a>
<a id="trace-26557"></a>
<a id="trace-26583"></a>
<a id="trace-26585"></a>
<a id="trace-26592"></a>
<a id="trace-26594"></a>
<a id="trace-26596"></a>
<a id="trace-26598"></a>
<a id="trace-26608"></a>
<a id="trace-26610"></a>
<a id="trace-26614"></a>
<a id="trace-26616"></a>
<a id="trace-26636"></a>
<a id="trace-26638"></a>
<a id="trace-26699"></a>
<a id="trace-26701"></a>
<a id="trace-26712"></a>
<a id="trace-26714"></a>
<a id="trace-26724"></a>
<a id="trace-26726"></a>
<a id="trace-26736"></a>
<a id="trace-26738"></a>
<a id="trace-26759"></a>
<a id="trace-26761"></a>
<a id="trace-26766"></a>
<a id="trace-26768"></a>
<a id="trace-26774"></a>
<a id="trace-26776"></a>
<a id="trace-26847"></a>
<a id="trace-26849"></a>
<a id="trace-26881"></a>
<a id="trace-26883"></a>
<a id="trace-26885"></a>
<a id="trace-26887"></a>
<a id="trace-26898"></a>
<a id="trace-26900"></a>
<a id="trace-26908"></a>
<a id="trace-26910"></a>
<a id="trace-26932"></a>
<a id="trace-26934"></a>
<a id="trace-26996"></a>
<a id="trace-26998"></a>
<a id="trace-27000"></a>
<a id="trace-27002"></a>
<a id="trace-27013"></a>
<a id="trace-27015"></a>
<a id="trace-27030"></a>
<a id="trace-27032"></a>
<a id="trace-27040"></a>
<a id="trace-27042"></a>
<a id="trace-27049"></a>
<a id="trace-27051"></a>
<a id="trace-27062"></a>
<a id="trace-27064"></a>
<a id="trace-27072"></a>
<a id="trace-27074"></a>
<a id="trace-27139"></a>
<a id="trace-27141"></a>
<a id="trace-27147"></a>
<a id="trace-27149"></a>
<a id="trace-27184"></a>
<a id="trace-27186"></a>
<a id="trace-27193"></a>
<a id="trace-27195"></a>
<a id="trace-27202"></a>
<a id="trace-27204"></a>
<a id="trace-27216"></a>
<a id="trace-27218"></a>
<a id="trace-27223"></a>
<a id="trace-27225"></a>
<a id="trace-27286"></a>
<a id="trace-27288"></a>
<a id="trace-27304"></a>
<a id="trace-27306"></a>
<a id="trace-27315"></a>
<a id="trace-27317"></a>
<a id="trace-27328"></a>
<a id="trace-27330"></a>
<a id="trace-27408"></a>
<a id="trace-27410"></a>
<a id="trace-27414"></a>
<a id="trace-27416"></a>
<a id="trace-27426"></a>
<a id="trace-27428"></a>
<a id="trace-27436"></a>
<a id="trace-27438"></a>
<a id="trace-27506"></a>
<a id="trace-27508"></a>
<a id="trace-27527"></a>
<a id="trace-27529"></a>
<a id="trace-27538"></a>
<a id="trace-27540"></a>
<a id="trace-27543"></a>
<a id="trace-27545"></a>
<a id="trace-27561"></a>
<a id="trace-27563"></a>
<a id="trace-27569"></a>
<a id="trace-27571"></a>
<a id="trace-27719"></a>
<a id="trace-27721"></a>
<a id="trace-27732"></a>
<a id="trace-27734"></a>
<a id="trace-27740"></a>
<a id="trace-27742"></a>
<a id="trace-27752"></a>
<a id="trace-27754"></a>
<a id="trace-27764"></a>
<a id="trace-27766"></a>
<a id="trace-27773"></a>
<a id="trace-27775"></a>
<a id="trace-27782"></a>
<a id="trace-27784"></a>
<a id="trace-27791"></a>
<a id="trace-27793"></a>
<a id="trace-27805"></a>
<a id="trace-27807"></a>
<a id="trace-27873"></a>
<a id="trace-27875"></a>
<a id="trace-27937"></a>
<a id="trace-27939"></a>
<a id="trace-27956"></a>
<a id="trace-27958"></a>
<a id="trace-27966"></a>
<a id="trace-27968"></a>
<a id="trace-27981"></a>
<a id="trace-27983"></a>
<a id="trace-27989"></a>
<a id="trace-27991"></a>
<a id="trace-28000"></a>
<a id="trace-28002"></a>
<a id="trace-28014"></a>
<a id="trace-28016"></a>
<a id="trace-28023"></a>
<a id="trace-28025"></a>
<a id="trace-28092"></a>
<a id="trace-28094"></a>
<a id="trace-28108"></a>
<a id="trace-28110"></a>
<a id="trace-28120"></a>
<a id="trace-28122"></a>
<a id="trace-28132"></a>
<a id="trace-28134"></a>
<a id="trace-28157"></a>
<a id="trace-28159"></a>
<a id="trace-28168"></a>
<a id="trace-28170"></a>
<a id="trace-28175"></a>
<a id="trace-28177"></a>
- 5.70s–359.80s (×1095), actor 37, squad 4 (trace 938): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 753. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625256004234635, 'next_transition': 1039}.
<a id="trace-960"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 960): traveling overwatch. Knowledge: actor memory at 5.00s, trace 738. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299972499481777, 'next_transition': 1035}.
<a id="trace-961"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 961): received platoon directive. Knowledge: actor memory at 5.00s, trace 738. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299972499481777, 'next_transition': 1035}.
<a id="trace-1035"></a>
<a id="trace-1037"></a>
<a id="trace-1074"></a>
<a id="trace-1076"></a>
<a id="trace-1122"></a>
<a id="trace-1124"></a>
<a id="trace-1160"></a>
<a id="trace-1162"></a>
<a id="trace-1195"></a>
<a id="trace-1197"></a>
<a id="trace-1244"></a>
<a id="trace-1246"></a>
<a id="trace-1275"></a>
<a id="trace-1277"></a>
<a id="trace-1303"></a>
<a id="trace-1305"></a>
<a id="trace-1391"></a>
<a id="trace-1393"></a>
<a id="trace-1419"></a>
<a id="trace-1421"></a>
<a id="trace-1442"></a>
<a id="trace-1444"></a>
<a id="trace-1464"></a>
<a id="trace-1466"></a>
<a id="trace-1487"></a>
<a id="trace-1489"></a>
<a id="trace-1505"></a>
<a id="trace-1507"></a>
<a id="trace-1525"></a>
<a id="trace-1527"></a>
<a id="trace-1540"></a>
<a id="trace-1542"></a>
<a id="trace-1568"></a>
<a id="trace-1570"></a>
- 6.20s–14.20s (×34), actor 5, squad 0 (trace 1035): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 743. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2403263573058785, 'next_transition': 1074}.
<a id="trace-1579"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 1579): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 1314. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1742}.
<a id="trace-1742"></a>
<a id="trace-1744"></a>
<a id="trace-2212"></a>
<a id="trace-2214"></a>
<a id="trace-2386"></a>
<a id="trace-2388"></a>
<a id="trace-2671"></a>
<a id="trace-2673"></a>
<a id="trace-2840"></a>
<a id="trace-2842"></a>
<a id="trace-2897"></a>
<a id="trace-2899"></a>
<a id="trace-2947"></a>
<a id="trace-2949"></a>
<a id="trace-2988"></a>
<a id="trace-2990"></a>
- 14.70s–18.25s (×16), actor 5, squad 0 (trace 1742): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1319. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.01968726650655188, 'next_transition': 2212}.
<a id="trace-1754"></a>
- 14.90s–14.90s (×1), actor 8, squad 1 (trace 1754): ReactToContact: cover and return fire. Knowledge: actor memory at 10.00s, trace 1322. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150014525760161, 'next_transition': 1946}.
<a id="trace-1755"></a>
- 14.90s–14.90s (×1), actor 8, squad 1 (trace 1755): bounding overwatch. Knowledge: actor memory at 10.00s, trace 1322. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150014525760161, 'next_transition': 1946}.
<a id="trace-1756"></a>
<a id="trace-1946"></a>
<a id="trace-2073"></a>
<a id="trace-2228"></a>
<a id="trace-2420"></a>
<a id="trace-2540"></a>
<a id="trace-2691"></a>
- 14.90s–16.50s (×7), actor 8, squad 1 (trace 1756): new contact inside 100 m. Knowledge: actor memory at 10.00s, trace 1322. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150014525760161, 'next_transition': 1946}.
<a id="trace-279"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (events line 279): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-280"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (events line 280): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3007"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 3007): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.621066 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 3007. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625837505267927, 'next_transition': 3019}.
<a id="trace-3008"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 3008): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.621066 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 3008. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625837505267927, 'next_transition': 3019}.
<a id="trace-3009"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 3009): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.621066 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 3009. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9508059378232765, 'next_transition': 3065}.
<a id="trace-3010"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 3010): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.621066 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 3010. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9508059378232765, 'next_transition': 3065}.
<a id="trace-3019"></a>
<a id="trace-3021"></a>
<a id="trace-3041"></a>
<a id="trace-3043"></a>
<a id="trace-3055"></a>
<a id="trace-3057"></a>
<a id="trace-3155"></a>
<a id="trace-3157"></a>
<a id="trace-3233"></a>
<a id="trace-3235"></a>
- 18.75s–20.75s (×10), actor 5, squad 0 (trace 3019): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 18.55s, trace 3010. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087473800100699, 'next_transition': 3041}.
<a id="trace-3065"></a>
- 19.85s–19.85s (×1), actor 8, squad 1 (trace 3065): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 1888. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3730782854174175, 'next_transition': 3164}.
<a id="trace-3067"></a>
- 19.85s–19.85s (×1), actor 8, squad 1 (trace 3067): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 15.00s, trace 1888. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3730782854174175, 'next_transition': 3164}.
<a id="trace-3164"></a>
- 20.35s–20.35s (×1), actor 8, squad 1 (trace 3164): MoveTactically. Knowledge: actor memory at 20.00s, trace 3079. Next observer evidence: {'until': 22.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4055148789500347, 'next_transition': 3658}.
<a id="trace-3165"></a>
- 20.35s–20.35s (×1), actor 8, squad 1 (trace 3165): received platoon directive. Knowledge: actor memory at 20.00s, trace 3079. Next observer evidence: {'until': 22.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4055148789500347, 'next_transition': 3658}.
<a id="trace-3244"></a>
- 21.00s–21.00s (×1), actor 0, squad 0 (trace 3244): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 3071. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.393742051521334, 'next_transition': 3555}.
<a id="trace-3245"></a>
- 21.00s–21.00s (×1), actor 0, squad 0 (trace 3245): bounding overwatch. Knowledge: actor memory at 20.00s, trace 3071. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.393742051521334, 'next_transition': 3555}.
<a id="trace-3246"></a>
- 21.00s–21.00s (×1), actor 0, squad 0 (trace 3246): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3071. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.393742051521334, 'next_transition': 3555}.
<a id="trace-3555"></a>
<a id="trace-3557"></a>
<a id="trace-3582"></a>
<a id="trace-3584"></a>
<a id="trace-3619"></a>
<a id="trace-3621"></a>
<a id="trace-3647"></a>
<a id="trace-3649"></a>
- 21.25s–22.75s (×8), actor 5, squad 0 (trace 3555): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3076. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875082242560503, 'next_transition': 3582}.
<a id="trace-3658"></a>
- 22.85s–22.85s (×1), actor 8, squad 1 (trace 3658): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 3079. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7806832525582958, 'next_transition': 4542}.
<a id="trace-3659"></a>
- 22.85s–22.85s (×1), actor 8, squad 1 (trace 3659): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3079. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7806832525582958, 'next_transition': 4542}.
<a id="trace-3773"></a>
- 23.00s–23.00s (×1), actor 0, squad 0 (trace 3773): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3071. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150053031529904, 'next_transition': 4232}.
<a id="trace-4232"></a>
<a id="trace-4234"></a>
<a id="trace-4283"></a>
<a id="trace-4285"></a>
<a id="trace-4333"></a>
<a id="trace-4335"></a>
<a id="trace-4364"></a>
<a id="trace-4366"></a>
<a id="trace-4468"></a>
<a id="trace-4470"></a>
<a id="trace-4511"></a>
<a id="trace-4513"></a>
<a id="trace-4707"></a>
<a id="trace-4709"></a>
- 23.25s–26.25s (×14), actor 5, squad 0 (trace 4232): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3076. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6182838295559885, 'next_transition': 4283}.
<a id="trace-4542"></a>
- 26.20s–26.20s (×1), actor 8, squad 1 (trace 4542): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4388. Next observer evidence: {'until': 37.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 18.73641809870294, 'next_transition': 10316}.
<a id="trace-4545"></a>
- 26.20s–26.20s (×1), actor 8, squad 1 (trace 4545): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 4388. Next observer evidence: {'until': 37.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 18.73641809870294, 'next_transition': 10316}.
<a id="trace-4546"></a>
- 26.20s–26.20s (×1), actor 8, squad 1 (trace 4546): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 4388. Next observer evidence: {'until': 37.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 18.73641809870294, 'next_transition': 10316}.
<a id="trace-4726"></a>
- 26.60s–26.60s (×1), actor 0, squad 0 (trace 4726): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4380. Next observer evidence: None.
<a id="trace-4734"></a>
<a id="trace-4736"></a>
<a id="trace-4764"></a>
<a id="trace-4766"></a>
<a id="trace-4784"></a>
<a id="trace-4786"></a>
<a id="trace-4809"></a>
<a id="trace-4811"></a>
<a id="trace-4840"></a>
<a id="trace-4842"></a>
<a id="trace-4861"></a>
<a id="trace-4863"></a>
<a id="trace-4884"></a>
<a id="trace-4886"></a>
<a id="trace-4966"></a>
<a id="trace-4968"></a>
<a id="trace-4991"></a>
<a id="trace-4993"></a>
<a id="trace-5015"></a>
<a id="trace-5017"></a>
<a id="trace-5035"></a>
<a id="trace-5037"></a>
<a id="trace-5084"></a>
<a id="trace-5086"></a>
- 26.75s–32.25s (×24), actor 5, squad 0 (trace 4734): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4385. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6161473951708475, 'next_transition': 4764}.
<a id="trace-5096"></a>
- 32.30s–32.30s (×1), actor 0, squad 0 (trace 5096): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 4892. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27900789336299353, 'next_transition': 5552}.
<a id="trace-5552"></a>
<a id="trace-5554"></a>
<a id="trace-5596"></a>
<a id="trace-5598"></a>
<a id="trace-5665"></a>
<a id="trace-5667"></a>
<a id="trace-5743"></a>
<a id="trace-5745"></a>
<a id="trace-5783"></a>
<a id="trace-5785"></a>
<a id="trace-5916"></a>
<a id="trace-5918"></a>
<a id="trace-5950"></a>
<a id="trace-5952"></a>
- 32.75s–35.75s (×14), actor 5, squad 0 (trace 5552): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4897. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8239603141058689, 'next_transition': 5596}.
<a id="trace-5961"></a>
- 35.80s–35.80s (×1), actor 0, squad 0 (trace 5961): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 5815. Next observer evidence: {'until': 36.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.27624227718302674, 'next_transition': 9793}.
<a id="trace-5963"></a>
- 35.80s–35.80s (×1), actor 0, squad 0 (trace 5963): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 5815. Next observer evidence: {'until': 36.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.27624227718302674, 'next_transition': 9793}.
<a id="trace-9443"></a>
- 35.80s–35.80s (×1), actor 0, squad 0 (trace 9443): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 35.00s, trace 5815. Next observer evidence: {'until': 36.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.27624227718302674, 'next_transition': 9793}.
<a id="trace-9444"></a>
- 35.80s–35.80s (×1), actor 0, squad 0 (trace 9444): MoveTactically. Knowledge: actor memory at 35.00s, trace 5815. Next observer evidence: {'until': 36.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.27624227718302674, 'next_transition': 9793}.
<a id="trace-9445"></a>
- 35.80s–35.80s (×1), actor 0, squad 0 (trace 9445): contact cover complete: assessment resumes closure. Knowledge: actor memory at 35.00s, trace 5815. Next observer evidence: {'until': 36.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.27624227718302674, 'next_transition': 9793}.
<a id="trace-9793"></a>
<a id="trace-9795"></a>
<a id="trace-9825"></a>
<a id="trace-9827"></a>
<a id="trace-9865"></a>
<a id="trace-9867"></a>
- 36.25s–37.25s (×6), actor 5, squad 0 (trace 9793): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 5820. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28124291064111123, 'next_transition': 9825}.
<a id="trace-9883"></a>
- 37.35s–37.35s (×1), actor 0, squad 0 (trace 9883): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 5815. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7728292426621218, 'next_transition': 10307}.
<a id="trace-9884"></a>
- 37.35s–37.35s (×1), actor 0, squad 0 (trace 9884): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 5815. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7728292426621218, 'next_transition': 10307}.
<a id="trace-10307"></a>
<a id="trace-10309"></a>
<a id="trace-10405"></a>
<a id="trace-10407"></a>
<a id="trace-10460"></a>
<a id="trace-10462"></a>
<a id="trace-10494"></a>
<a id="trace-10496"></a>
<a id="trace-10517"></a>
<a id="trace-10519"></a>
<a id="trace-10635"></a>
<a id="trace-10637"></a>
<a id="trace-10666"></a>
<a id="trace-10668"></a>
<a id="trace-10693"></a>
<a id="trace-10695"></a>
- 37.75s–41.25s (×16), actor 5, squad 0 (trace 10307): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 5820. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9454507217626382, 'next_transition': 10405}.
<a id="trace-10316"></a>
- 37.85s–37.85s (×1), actor 8, squad 1 (trace 10316): NeedSupport. Knowledge: actor memory at 35.00s, trace 5823. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10343}.
<a id="trace-10343"></a>
- 38.15s–38.15s (×1), actor 8, squad 1 (trace 10343): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 5823. Next observer evidence: {'until': 53.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.352599572784044, 'next_transition': 12355}.
<a id="trace-10344"></a>
- 38.15s–38.15s (×1), actor 8, squad 1 (trace 10344): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 5823. Next observer evidence: {'until': 53.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.352599572784044, 'next_transition': 12355}.
<a id="trace-10709"></a>
- 41.45s–41.45s (×1), actor 1, squad 0 (trace 10709): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 10541. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2607666361163889, 'next_transition': 10715}.
<a id="trace-10715"></a>
<a id="trace-10717"></a>
- 41.75s–41.75s (×2), actor 5, squad 0 (trace 10715): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10545. Next observer evidence: {'until': 42, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1453632440817852, 'next_transition': 682}.
<a id="trace-682"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 682): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10731"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 10731): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.659985 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 10731. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10744}.
<a id="trace-10732"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 10732): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.659985 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 10732. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10744}.
<a id="trace-10744"></a>
<a id="trace-10746"></a>
<a id="trace-10759"></a>
<a id="trace-10761"></a>
- 42.25s–42.75s (×4), actor 5, squad 0 (trace 10744): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 10732. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10759}.
<a id="trace-10766"></a>
- 42.75s–42.75s (×1), actor 1, squad 0 (trace 10766): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 10541. Next observer evidence: {'until': 43.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11757}.
<a id="trace-11565"></a>
- 42.75s–42.75s (×1), actor 1, squad 0 (trace 11565): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 40.00s, trace 10541. Next observer evidence: {'until': 43.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11757}.
<a id="trace-11566"></a>
- 42.75s–42.75s (×1), actor 1, squad 0 (trace 11566): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 40.00s, trace 10541. Next observer evidence: {'until': 43.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11757}.
<a id="trace-11734"></a>
- 42.75s–42.75s (×1), actor 1, squad 0 (trace 11734): Assaulting. Knowledge: actor memory at 40.00s, trace 10541. Next observer evidence: {'until': 43.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11757}.
<a id="trace-11757"></a>
<a id="trace-11759"></a>
<a id="trace-11770"></a>
<a id="trace-11772"></a>
<a id="trace-11793"></a>
<a id="trace-11795"></a>
<a id="trace-11817"></a>
<a id="trace-11819"></a>
<a id="trace-11897"></a>
<a id="trace-11899"></a>
<a id="trace-11918"></a>
<a id="trace-11920"></a>
<a id="trace-11940"></a>
<a id="trace-11942"></a>
<a id="trace-11952"></a>
<a id="trace-11954"></a>
<a id="trace-11965"></a>
<a id="trace-11967"></a>
- 43.25s–47.25s (×18), actor 5, squad 0 (trace 11757): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 10732. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05280000000000028, 'next_transition': 11770}.
<a id="trace-11979"></a>
- 47.65s–47.65s (×1), actor 1, squad 0 (trace 11979): NeedSupport. Knowledge: actor memory at 45.00s, trace 11826. Next observer evidence: None.
<a id="trace-11987"></a>
<a id="trace-11989"></a>
<a id="trace-12007"></a>
<a id="trace-12009"></a>
<a id="trace-12030"></a>
<a id="trace-12032"></a>
<a id="trace-12053"></a>
<a id="trace-12055"></a>
<a id="trace-12088"></a>
<a id="trace-12090"></a>
<a id="trace-12195"></a>
<a id="trace-12197"></a>
<a id="trace-12231"></a>
<a id="trace-12233"></a>
<a id="trace-12258"></a>
<a id="trace-12260"></a>
<a id="trace-12283"></a>
<a id="trace-12285"></a>
<a id="trace-12310"></a>
<a id="trace-12312"></a>
<a id="trace-12325"></a>
<a id="trace-12327"></a>
<a id="trace-12344"></a>
<a id="trace-12346"></a>
<a id="trace-12434"></a>
<a id="trace-12436"></a>
<a id="trace-12458"></a>
<a id="trace-12460"></a>
<a id="trace-12476"></a>
<a id="trace-12478"></a>
<a id="trace-12566"></a>
<a id="trace-12568"></a>
<a id="trace-12599"></a>
<a id="trace-12601"></a>
<a id="trace-12635"></a>
<a id="trace-12637"></a>
<a id="trace-12673"></a>
<a id="trace-12675"></a>
<a id="trace-12703"></a>
<a id="trace-12705"></a>
<a id="trace-12728"></a>
<a id="trace-12730"></a>
- 47.75s–57.75s (×42), actor 5, squad 0 (trace 11987): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 11830. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06494285714285704, 'next_transition': 12007}.
<a id="trace-12355"></a>
- 53.40s–53.40s (×1), actor 8, squad 1 (trace 12355): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 12117. Next observer evidence: {'until': 65.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.974205207561836, 'next_transition': 13399}.
<a id="trace-12377"></a>
- 53.40s–53.40s (×1), actor 8, squad 1 (trace 12377): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 12117. Next observer evidence: {'until': 65.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.974205207561836, 'next_transition': 13399}.
<a id="trace-12743"></a>
- 57.90s–57.90s (×1), actor 1, squad 0 (trace 12743): InsufficientStrength: frozen element failed; Reorganise before retirement assessment. Knowledge: actor memory at 55.00s, trace 12491. Next observer evidence: {'until': 58, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12750}.
<a id="trace-12750"></a>
- 58.15s–58.15s (×1), actor 1, squad 0 (trace 12750): Reorganise: completed/failed drill. Knowledge: actor memory at 55.00s, trace 12491. Next observer evidence: {'until': 58.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12941}.
<a id="trace-12755"></a>
- 58.15s–58.15s (×1), actor 1, squad 0 (trace 12755): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 12491. Next observer evidence: {'until': 58.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12941}.
<a id="trace-12756"></a>
- 58.15s–58.15s (×1), actor 1, squad 0 (trace 12756): Reorganise complete: known contact. Knowledge: actor memory at 55.00s, trace 12491. Next observer evidence: {'until': 58.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12941}.
<a id="trace-12941"></a>
<a id="trace-12943"></a>
<a id="trace-12955"></a>
<a id="trace-12957"></a>
<a id="trace-12981"></a>
<a id="trace-12983"></a>
<a id="trace-13009"></a>
<a id="trace-13011"></a>
- 58.25s–59.75s (×8), actor 5, squad 0 (trace 12941): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 12495. Next observer evidence: {'until': 58.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12955}.
<a id="trace-13037"></a>
- 60.05s–60.05s (×1), actor 5, squad 0 (trace 13037): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 60.05s, trace 13037. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25527707886094153, 'next_transition': 13094}.
<a id="trace-13094"></a>
<a id="trace-13096"></a>
<a id="trace-13124"></a>
<a id="trace-13126"></a>
<a id="trace-13144"></a>
<a id="trace-13146"></a>
<a id="trace-13165"></a>
<a id="trace-13167"></a>
- 60.25s–61.75s (×8), actor 5, squad 0 (trace 13094): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.05s, trace 13037. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5075555713202007, 'next_transition': 13124}.
<a id="trace-13174"></a>
- 61.75s–61.75s (×1), actor 1, squad 0 (trace 13174): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 13019. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449854821677942, 'next_transition': 13187}.
<a id="trace-13187"></a>
<a id="trace-13189"></a>
<a id="trace-13203"></a>
<a id="trace-13205"></a>
<a id="trace-13222"></a>
<a id="trace-13224"></a>
<a id="trace-13239"></a>
<a id="trace-13241"></a>
<a id="trace-13265"></a>
<a id="trace-13267"></a>
<a id="trace-13290"></a>
<a id="trace-13292"></a>
<a id="trace-13382"></a>
<a id="trace-13384"></a>
<a id="trace-13466"></a>
<a id="trace-13468"></a>
<a id="trace-13504"></a>
<a id="trace-13506"></a>
<a id="trace-13525"></a>
<a id="trace-13527"></a>
<a id="trace-13546"></a>
<a id="trace-13548"></a>
<a id="trace-13562"></a>
<a id="trace-13564"></a>
<a id="trace-13587"></a>
<a id="trace-13589"></a>
<a id="trace-13600"></a>
<a id="trace-13602"></a>
<a id="trace-13621"></a>
<a id="trace-13623"></a>
- 62.25s–69.25s (×30), actor 5, squad 0 (trace 13187): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.05s, trace 13037. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49876528569623363, 'next_transition': 13203}.
<a id="trace-13399"></a>
- 65.45s–65.45s (×1), actor 8, squad 1 (trace 13399): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 13315. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000001167374121, 'next_transition': 17043}.
<a id="trace-13400"></a>
- 65.45s–65.45s (×1), actor 8, squad 1 (trace 13400): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 13315. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000001167374121, 'next_transition': 17043}.
<a id="trace-13629"></a>
- 69.25s–69.25s (×1), actor 3, squad 0 (trace 13629): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 13310. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39863991619839884, 'next_transition': 16464}.
<a id="trace-16349"></a>
- 69.25s–69.25s (×1), actor 3, squad 0 (trace 16349): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 65.00s, trace 13310. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39863991619839884, 'next_transition': 16464}.
<a id="trace-16350"></a>
- 69.25s–69.25s (×1), actor 3, squad 0 (trace 16350): MoveTactically. Knowledge: actor memory at 65.00s, trace 13310. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39863991619839884, 'next_transition': 16464}.
<a id="trace-16351"></a>
- 69.25s–69.25s (×1), actor 3, squad 0 (trace 16351): contact cover complete: assessment resumes closure. Knowledge: actor memory at 65.00s, trace 13310. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39863991619839884, 'next_transition': 16464}.
<a id="trace-16453"></a>
- 69.25s–69.25s (×1), actor 3, squad 0 (trace 16453): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 65.00s, trace 13310. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39863991619839884, 'next_transition': 16464}.
<a id="trace-16464"></a>
<a id="trace-16466"></a>
<a id="trace-16550"></a>
<a id="trace-16552"></a>
<a id="trace-16585"></a>
<a id="trace-16587"></a>
<a id="trace-16629"></a>
<a id="trace-16631"></a>
<a id="trace-16662"></a>
<a id="trace-16664"></a>
<a id="trace-16720"></a>
<a id="trace-16722"></a>
<a id="trace-16758"></a>
<a id="trace-16760"></a>
<a id="trace-16813"></a>
<a id="trace-16815"></a>
<a id="trace-16857"></a>
<a id="trace-16859"></a>
<a id="trace-16892"></a>
<a id="trace-16894"></a>
<a id="trace-16916"></a>
<a id="trace-16918"></a>
<a id="trace-17007"></a>
<a id="trace-17009"></a>
<a id="trace-17023"></a>
<a id="trace-17025"></a>
<a id="trace-17104"></a>
<a id="trace-17106"></a>
<a id="trace-17121"></a>
<a id="trace-17123"></a>
<a id="trace-17146"></a>
<a id="trace-17148"></a>
<a id="trace-17176"></a>
<a id="trace-17178"></a>
<a id="trace-17199"></a>
<a id="trace-17201"></a>
<a id="trace-17214"></a>
<a id="trace-17216"></a>
<a id="trace-17249"></a>
<a id="trace-17251"></a>
<a id="trace-17326"></a>
<a id="trace-17328"></a>
<a id="trace-17338"></a>
<a id="trace-17340"></a>
<a id="trace-17355"></a>
<a id="trace-17357"></a>
<a id="trace-17367"></a>
<a id="trace-17369"></a>
<a id="trace-17383"></a>
<a id="trace-17385"></a>
<a id="trace-17393"></a>
<a id="trace-17395"></a>
<a id="trace-17408"></a>
<a id="trace-17410"></a>
<a id="trace-17420"></a>
<a id="trace-17422"></a>
<a id="trace-17445"></a>
<a id="trace-17447"></a>
<a id="trace-17461"></a>
<a id="trace-17463"></a>
<a id="trace-17539"></a>
<a id="trace-17541"></a>
<a id="trace-17566"></a>
<a id="trace-17568"></a>
<a id="trace-17586"></a>
<a id="trace-17588"></a>
<a id="trace-17602"></a>
<a id="trace-17604"></a>
- 69.75s–87.25s (×68), actor 5, squad 0 (trace 16464): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 13312. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5587346465998373, 'next_transition': 16550}.
<a id="trace-17043"></a>
- 76.20s–76.20s (×1), actor 8, squad 1 (trace 17043): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 16936. Next observer evidence: {'until': 78.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1336}.
<a id="trace-17044"></a>
- 76.20s–76.20s (×1), actor 8, squad 1 (trace 17044): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 16936. Next observer evidence: {'until': 78.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1336}.
<a id="trace-1336"></a>
- 78.95s–78.95s (×1), actor 5, squad 1 (events line 1336): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17223"></a>
- 78.95s–78.95s (×1), actor 5, squad 1 (trace 17223): renew committed intent (75 s lifetime). Knowledge: actor memory at 78.95s, trace 17223. Next observer evidence: {'until': 108.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19189}.
<a id="trace-17612"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 17612): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.317407 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 17612. Next observer evidence: None.
<a id="trace-17613"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 17613): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.317407 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 17613. Next observer evidence: None.
<a id="trace-1522"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (events line 1522): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5605613517715756, 'next_transition': 17624}.
<a id="trace-17624"></a>
<a id="trace-17626"></a>
<a id="trace-17640"></a>
<a id="trace-17642"></a>
<a id="trace-17656"></a>
<a id="trace-17658"></a>
<a id="trace-17674"></a>
<a id="trace-17676"></a>
- 87.75s–89.25s (×8), actor 5, squad 0 (trace 17624): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.35s, trace 17613. Next observer evidence: {'until': 88.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8851941196541764, 'next_transition': 17640}.
<a id="trace-17682"></a>
- 89.35s–89.35s (×1), actor 4, squad 0 (trace 17682): received platoon directive; retain held slots. Knowledge: actor memory at 85.00s, trace 17473. Next observer evidence: {'until': 89.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6220257878641906, 'next_transition': 17690}.
<a id="trace-17690"></a>
<a id="trace-17692"></a>
<a id="trace-17767"></a>
<a id="trace-17769"></a>
<a id="trace-17783"></a>
<a id="trace-17785"></a>
<a id="trace-17801"></a>
<a id="trace-17803"></a>
<a id="trace-17819"></a>
<a id="trace-17821"></a>
- 89.75s–91.75s (×10), actor 5, squad 0 (trace 17690): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.35s, trace 17613. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5367868383675329, 'next_transition': 17767}.
<a id="trace-17826"></a>
- 91.80s–91.80s (×1), actor 4, squad 0 (trace 17826): ReactToContact: cover and return fire. Knowledge: actor memory at 90.00s, trace 17698. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3152875000496032, 'next_transition': 18115}.
<a id="trace-17827"></a>
- 91.80s–91.80s (×1), actor 4, squad 0 (trace 17827): new contact inside 100 m. Knowledge: actor memory at 90.00s, trace 17698. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3152875000496032, 'next_transition': 18115}.
<a id="trace-18115"></a>
<a id="trace-18117"></a>
<a id="trace-18159"></a>
<a id="trace-18161"></a>
<a id="trace-18181"></a>
<a id="trace-18183"></a>
<a id="trace-18203"></a>
<a id="trace-18205"></a>
<a id="trace-18235"></a>
<a id="trace-18237"></a>
<a id="trace-18249"></a>
<a id="trace-18251"></a>
<a id="trace-18327"></a>
<a id="trace-18329"></a>
- 92.25s–95.25s (×14), actor 5, squad 0 (trace 18115): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 17699. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31538250004960305, 'next_transition': 18159}.
<a id="trace-18338"></a>
- 95.70s–95.70s (×1), actor 4, squad 0 (trace 18338): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 95.00s, trace 18258. Next observer evidence: None.
<a id="trace-18339"></a>
- 95.70s–95.70s (×1), actor 4, squad 0 (trace 18339): rearward bound: one stationary suppressing element. Knowledge: actor memory at 95.00s, trace 18258. Next observer evidence: None.
<a id="trace-18591"></a>
<a id="trace-18593"></a>
<a id="trace-18612"></a>
<a id="trace-18614"></a>
<a id="trace-18629"></a>
<a id="trace-18631"></a>
<a id="trace-18656"></a>
<a id="trace-18658"></a>
<a id="trace-18670"></a>
<a id="trace-18672"></a>
<a id="trace-18691"></a>
<a id="trace-18693"></a>
<a id="trace-18705"></a>
<a id="trace-18707"></a>
<a id="trace-18723"></a>
<a id="trace-18725"></a>
<a id="trace-18734"></a>
<a id="trace-18736"></a>
<a id="trace-18812"></a>
<a id="trace-18814"></a>
<a id="trace-18825"></a>
<a id="trace-18827"></a>
<a id="trace-18851"></a>
<a id="trace-18853"></a>
<a id="trace-18862"></a>
<a id="trace-18864"></a>
<a id="trace-18875"></a>
<a id="trace-18877"></a>
<a id="trace-18883"></a>
<a id="trace-18885"></a>
<a id="trace-18900"></a>
<a id="trace-18902"></a>
<a id="trace-18916"></a>
<a id="trace-18918"></a>
<a id="trace-18930"></a>
<a id="trace-18932"></a>
<a id="trace-18945"></a>
<a id="trace-18947"></a>
<a id="trace-19012"></a>
<a id="trace-19025"></a>
<a id="trace-19040"></a>
<a id="trace-19056"></a>
<a id="trace-19071"></a>
<a id="trace-19147"></a>
<a id="trace-19164"></a>
<a id="trace-19178"></a>
<a id="trace-19197"></a>
<a id="trace-19219"></a>
<a id="trace-19311"></a>
<a id="trace-19327"></a>
- 95.75s–116.25s (×50), actor 5, squad 0 (trace 18591): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 18259. Next observer evidence: {'until': 96.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8127029169049335, 'next_transition': 18612}.
<a id="trace-19189"></a>
- 112.80s–112.80s (×1), actor 8, squad 1 (trace 19189): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 19087. Next observer evidence: {'until': 115.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1796}.
<a id="trace-1796"></a>
- 115.85s–115.85s (×1), actor 5, squad 1 (events line 1796): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19443}.
<a id="trace-19321"></a>
- 115.85s–115.85s (×1), actor 5, squad 1 (trace 19321): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.169306 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 115.85s, trace 19321. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19443}.
<a id="trace-19322"></a>
- 115.85s–115.85s (×1), actor 5, squad 1 (trace 19322): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.169306 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 115.85s, trace 19322. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19443}.
<a id="trace-19443"></a>
<a id="trace-19458"></a>
- 120.25s–121.25s (×2), actor 8, squad 1 (trace 19443): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 120.00s, trace 19386. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19458}.
<a id="trace-1802"></a>
- 121.90s–121.90s (×1), actor 8, squad 1 (events line 1802): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19470}.
<a id="trace-19467"></a>
- 121.90s–121.90s (×1), actor 8, squad 1 (trace 19467): renew committed intent (75 s lifetime). Knowledge: actor memory at 121.90s, trace 19467. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19470}.
<a id="trace-19470"></a>
<a id="trace-19487"></a>
- 122.25s–123.25s (×2), actor 8, squad 1 (trace 19470): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 121.90s, trace 19467. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19487}.
<a id="trace-19497"></a>
- 123.65s–123.65s (×1), actor 8, squad 1 (trace 19497): Withdraw to received rally. Knowledge: actor memory at 121.90s, trace 19467. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19563}.
<a id="trace-19498"></a>
- 123.65s–123.65s (×1), actor 8, squad 1 (trace 19498): rearward bound: one stationary suppressing element. Knowledge: actor memory at 121.90s, trace 19467. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19563}.
<a id="trace-19563"></a>
<a id="trace-19646"></a>
<a id="trace-19671"></a>
<a id="trace-19700"></a>
<a id="trace-19717"></a>
<a id="trace-19734"></a>
<a id="trace-19813"></a>
<a id="trace-19830"></a>
<a id="trace-19852"></a>
<a id="trace-19880"></a>
<a id="trace-19897"></a>
<a id="trace-19971"></a>
- 124.25s–135.30s (×12), actor 8, squad 1 (trace 19563): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 121.90s, trace 19467. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874911507439254, 'next_transition': 19646}.
<a id="trace-19980"></a>
- 135.60s–135.60s (×1), actor 8, squad 1 (trace 19980): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 19914. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31502114611562315, 'next_transition': 20047}.
<a id="trace-19981"></a>
- 135.60s–135.60s (×1), actor 8, squad 1 (trace 19981): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 19914. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31502114611562315, 'next_transition': 20047}.
<a id="trace-20047"></a>
<a id="trace-20074"></a>
<a id="trace-20097"></a>
<a id="trace-20126"></a>
<a id="trace-20208"></a>
<a id="trace-20225"></a>
<a id="trace-20245"></a>
<a id="trace-20262"></a>
<a id="trace-20280"></a>
<a id="trace-20365"></a>
<a id="trace-20386"></a>
- 136.30s–146.30s (×11), actor 8, squad 1 (trace 20047): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 135.00s, trace 19914. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.575007482521908, 'next_transition': 20074}.
<a id="trace-20411"></a>
- 147.00s–147.00s (×1), actor 8, squad 1 (trace 20411): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 145.00s, trace 20297. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20468}.
<a id="trace-20412"></a>
- 147.00s–147.00s (×1), actor 8, squad 1 (trace 20412): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 145.00s, trace 20297. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20468}.
<a id="trace-20468"></a>
<a id="trace-20488"></a>
<a id="trace-20512"></a>
<a id="trace-20590"></a>
<a id="trace-20610"></a>
<a id="trace-20641"></a>
- 147.30s–152.30s (×6), actor 8, squad 1 (trace 20468): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 145.00s, trace 20297. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23605728118404226, 'next_transition': 20488}.
<a id="trace-20659"></a>
- 153.00s–153.00s (×1), actor 8, squad 1 (trace 20659): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 20528. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20723}.
<a id="trace-20660"></a>
- 153.00s–153.00s (×1), actor 8, squad 1 (trace 20660): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 20528. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20723}.
<a id="trace-20723"></a>
<a id="trace-20745"></a>
<a id="trace-20830"></a>
<a id="trace-20846"></a>
<a id="trace-20863"></a>
<a id="trace-20884"></a>
<a id="trace-20912"></a>
<a id="trace-20996"></a>
- 153.30s–160.30s (×8), actor 8, squad 1 (trace 20723): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 150.00s, trace 20528. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599363416458786, 'next_transition': 20745}.
<a id="trace-21012"></a>
- 161.25s–161.25s (×1), actor 8, squad 1 (trace 21012): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 160.00s, trace 20939. Next observer evidence: None.
<a id="trace-21018"></a>
<a id="trace-21043"></a>
<a id="trace-21072"></a>
<a id="trace-21093"></a>
<a id="trace-21177"></a>
<a id="trace-21204"></a>
<a id="trace-21220"></a>
<a id="trace-21233"></a>
<a id="trace-21248"></a>
<a id="trace-21317"></a>
<a id="trace-21337"></a>
<a id="trace-21362"></a>
<a id="trace-21386"></a>
<a id="trace-21401"></a>
<a id="trace-21473"></a>
<a id="trace-21489"></a>
<a id="trace-21507"></a>
<a id="trace-21532"></a>
<a id="trace-21551"></a>
<a id="trace-21631"></a>
<a id="trace-21646"></a>
<a id="trace-21662"></a>
<a id="trace-21678"></a>
- 161.30s–183.30s (×23), actor 8, squad 1 (trace 21018): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 160.00s, trace 20939. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21043}.
<a id="trace-2044"></a>
- 183.80s–183.80s (×1), actor 8, squad 1 (events line 2044): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21697}.
<a id="trace-21692"></a>
- 183.80s–183.80s (×1), actor 8, squad 1 (trace 21692): renew committed intent (75 s lifetime). Knowledge: actor memory at 183.80s, trace 21692. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21697}.
<a id="trace-21697"></a>
<a id="trace-21780"></a>
<a id="trace-21804"></a>
<a id="trace-21820"></a>
<a id="trace-21833"></a>
- 184.30s–188.30s (×5), actor 8, squad 1 (trace 21697): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 183.80s, trace 21692. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21780}.
<a id="trace-2071"></a>
- 189.25s–189.25s (×1), actor 8, squad 1 (events line 2071): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21849"></a>
- 189.25s–189.25s (×1), actor 8, squad 1 (trace 21849): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.781454 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 189.25s, trace 21849. Next observer evidence: None.
<a id="trace-21850"></a>
- 189.25s–189.25s (×1), actor 8, squad 1 (trace 21850): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.781454 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 189.25s, trace 21850. Next observer evidence: None.
<a id="trace-21852"></a>
<a id="trace-21927"></a>
- 189.30s–190.30s (×2), actor 8, squad 1 (trace 21852): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 189.25s, trace 21850. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21927}.
<a id="trace-21938"></a>
- 191.00s–191.00s (×1), actor 8, squad 1 (trace 21938): MoveTactically. Knowledge: actor memory at 190.00s, trace 21869. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22053}.
<a id="trace-21939"></a>
- 191.00s–191.00s (×1), actor 8, squad 1 (trace 21939): traveling. Knowledge: actor memory at 190.00s, trace 21869. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22053}.
<a id="trace-21940"></a>
- 191.00s–191.00s (×1), actor 8, squad 1 (trace 21940): received platoon directive. Knowledge: actor memory at 190.00s, trace 21869. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22053}.
<a id="trace-22053"></a>
<a id="trace-22088"></a>
<a id="trace-22124"></a>
<a id="trace-22143"></a>
<a id="trace-22221"></a>
<a id="trace-22239"></a>
<a id="trace-22265"></a>
<a id="trace-22295"></a>
<a id="trace-22328"></a>
<a id="trace-22403"></a>
- 191.30s–200.30s (×10), actor 8, squad 1 (trace 22053): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 190.00s, trace 21869. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4965530723131797, 'next_transition': 22088}.
<a id="trace-2128"></a>
- 200.50s–200.50s (×1), actor 8, squad 1 (events line 2128): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.317056777249754, 'next_transition': 22423}.
<a id="trace-22408"></a>
- 200.50s–200.50s (×1), actor 8, squad 1 (trace 22408): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 200.50s, trace 22408. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.317056777249754, 'next_transition': 22423}.
<a id="trace-22409"></a>
- 200.50s–200.50s (×1), actor 8, squad 1 (trace 22409): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 200.50s, trace 22409. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.317056777249754, 'next_transition': 22423}.
<a id="trace-22423"></a>
- 201.30s–201.30s (×1), actor 8, squad 1 (trace 22423): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 200.50s, trace 22409. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22439}.
<a id="trace-22439"></a>
- 202.20s–202.20s (×1), actor 8, squad 1 (trace 22439): matching received arrivals: traveling stage complete. Knowledge: actor memory at 200.50s, trace 22409. Next observer evidence: None.
<a id="trace-22546"></a>
- 202.25s–202.25s (×1), actor 8, squad 1 (trace 22546): received platoon directive. Knowledge: actor memory at 200.50s, trace 22409. Next observer evidence: None.
<a id="trace-22655"></a>
<a id="trace-22679"></a>
<a id="trace-22716"></a>
<a id="trace-22811"></a>
<a id="trace-22839"></a>
<a id="trace-22859"></a>
<a id="trace-22877"></a>
<a id="trace-22898"></a>
<a id="trace-22976"></a>
<a id="trace-23012"></a>
<a id="trace-23037"></a>
- 202.30s–212.30s (×11), actor 8, squad 1 (trace 22655): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 200.50s, trace 22409. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9448333530311037, 'next_transition': 22679}.
<a id="trace-23045"></a>
- 212.40s–212.40s (×1), actor 8, squad 1 (trace 23045): matching received arrivals: traveling stage complete. Knowledge: actor memory at 210.00s, trace 22919. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300505078959947, 'next_transition': 23169}.
<a id="trace-23169"></a>
<a id="trace-23190"></a>
<a id="trace-23268"></a>
<a id="trace-23292"></a>
<a id="trace-23314"></a>
<a id="trace-23345"></a>
<a id="trace-23378"></a>
<a id="trace-23456"></a>
<a id="trace-23476"></a>
<a id="trace-23498"></a>
- 213.30s–222.30s (×10), actor 8, squad 1 (trace 23169): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 210.00s, trace 22919. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.756252351057196, 'next_transition': 23190}.
<a id="trace-23505"></a>
- 222.60s–222.60s (×1), actor 8, squad 1 (trace 23505): matching received arrivals: deployment leg complete. Knowledge: actor memory at 220.00s, trace 23398. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23515}.
<a id="trace-23515"></a>
<a id="trace-23536"></a>
<a id="trace-23619"></a>
- 223.30s–225.30s (×3), actor 8, squad 1 (trace 23515): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 220.00s, trace 23398. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23536}.
<a id="trace-2250"></a>
- 225.80s–225.80s (×1), actor 8, squad 1 (events line 2250): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23646}.
<a id="trace-23637"></a>
- 225.80s–225.80s (×1), actor 8, squad 1 (trace 23637): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 225.80s, trace 23637. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23646}.
<a id="trace-23638"></a>
- 225.80s–225.80s (×1), actor 8, squad 1 (trace 23638): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 225.80s, trace 23638. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23646}.
<a id="trace-23646"></a>
<a id="trace-23664"></a>
- 226.30s–227.30s (×2), actor 8, squad 1 (trace 23646): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 225.80s, trace 23638. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23664}.
<a id="trace-23671"></a>
- 227.55s–227.55s (×1), actor 8, squad 1 (trace 23671): Reorganise: completed/failed drill. Knowledge: actor memory at 225.80s, trace 23638. Next observer evidence: {'until': 228.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937500507936482, 'next_transition': 23791}.
<a id="trace-23674"></a>
- 227.55s–227.55s (×1), actor 8, squad 1 (trace 23674): MoveTactically. Knowledge: actor memory at 225.80s, trace 23638. Next observer evidence: {'until': 228.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937500507936482, 'next_transition': 23791}.
<a id="trace-23675"></a>
- 227.55s–227.55s (×1), actor 8, squad 1 (trace 23675): Reorganise complete. Knowledge: actor memory at 225.80s, trace 23638. Next observer evidence: {'until': 228.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937500507936482, 'next_transition': 23791}.
<a id="trace-23791"></a>
<a id="trace-23813"></a>
<a id="trace-23893"></a>
<a id="trace-23926"></a>
- 228.30s–231.30s (×4), actor 8, squad 1 (trace 23791): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 225.80s, trace 23638. Next observer evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.5201002857029353, 'next_transition': 23813}.
<a id="trace-23933"></a>
- 231.55s–231.55s (×1), actor 8, squad 1 (trace 23933): ReactToContact: cover and return fire. Knowledge: actor memory at 230.00s, trace 23833. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7325001851851733, 'next_transition': 23976}.
<a id="trace-23934"></a>
- 231.55s–231.55s (×1), actor 8, squad 1 (trace 23934): bounding overwatch. Knowledge: actor memory at 230.00s, trace 23833. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7325001851851733, 'next_transition': 23976}.
<a id="trace-23935"></a>
- 231.55s–231.55s (×1), actor 8, squad 1 (trace 23935): new contact inside 100 m. Knowledge: actor memory at 230.00s, trace 23833. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7325001851851733, 'next_transition': 23976}.
<a id="trace-23976"></a>
<a id="trace-24003"></a>
- 232.30s–233.30s (×2), actor 8, squad 1 (trace 23976): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 230.00s, trace 23833. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6743199106168536, 'next_transition': 24003}.
<a id="trace-2296"></a>
- 234.25s–234.25s (×1), actor 8, squad 1 (events line 2296): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24029"></a>
- 234.25s–234.25s (×1), actor 8, squad 1 (trace 24029): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.334066 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 234.25s, trace 24029. Next observer evidence: None.
<a id="trace-24030"></a>
- 234.25s–234.25s (×1), actor 8, squad 1 (trace 24030): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.334066 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 234.25s, trace 24030. Next observer evidence: None.
<a id="trace-24032"></a>
- 234.30s–234.30s (×1), actor 8, squad 1 (trace 24032): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 234.25s, trace 24030. Next observer evidence: {'until': 234.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0819134465221827, 'next_transition': 24054}.
<a id="trace-24054"></a>
- 234.90s–234.90s (×1), actor 8, squad 1 (trace 24054): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 234.25s, trace 24030. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2362480508066471, 'next_transition': 24181}.
<a id="trace-24057"></a>
- 234.90s–234.90s (×1), actor 8, squad 1 (trace 24057): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 234.25s, trace 24030. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2362480508066471, 'next_transition': 24181}.
<a id="trace-24058"></a>
- 234.90s–234.90s (×1), actor 8, squad 1 (trace 24058): rearward bound: one stationary suppressing element. Knowledge: actor memory at 234.25s, trace 24030. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2362480508066471, 'next_transition': 24181}.
<a id="trace-24181"></a>
<a id="trace-24214"></a>
<a id="trace-24251"></a>
<a id="trace-24270"></a>
<a id="trace-24299"></a>
<a id="trace-24374"></a>
<a id="trace-24393"></a>
<a id="trace-24416"></a>
<a id="trace-24458"></a>
<a id="trace-24538"></a>
- 235.30s–245.30s (×10), actor 8, squad 1 (trace 24181): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 235.00s, trace 24120. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0137660039809833, 'next_transition': 24214}.
<a id="trace-24560"></a>
- 246.00s–246.00s (×1), actor 8, squad 1 (trace 24560): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 245.00s, trace 24477. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24620}.
<a id="trace-24561"></a>
- 246.00s–246.00s (×1), actor 8, squad 1 (trace 24561): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 245.00s, trace 24477. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24620}.
<a id="trace-24620"></a>
<a id="trace-24644"></a>
<a id="trace-24665"></a>
<a id="trace-24685"></a>
- 246.30s–249.30s (×4), actor 8, squad 1 (trace 24620): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 245.00s, trace 24477. Next observer evidence: {'until': 247.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.237163346126937, 'next_transition': 24644}.
<a id="trace-24701"></a>
- 249.90s–249.90s (×1), actor 8, squad 1 (trace 24701): NeedSupport. Knowledge: actor memory at 245.00s, trace 24477. Next observer evidence: {'until': 250.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24763}.
<a id="trace-24763"></a>
<a id="trace-24784"></a>
<a id="trace-24814"></a>
- 250.30s–252.30s (×3), actor 8, squad 1 (trace 24763): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 250.00s, trace 24704. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24784}.
<a id="trace-24926"></a>
<a id="trace-24946"></a>
- 256.30s–257.30s (×2), actor 9, squad 1 (trace 24926): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 255.00s, trace 24854. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24946}.
<a id="trace-2387"></a>
- 257.85s–257.85s (×1), actor 9, squad 1 (events line 2387): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24958"></a>
- 257.85s–257.85s (×1), actor 9, squad 1 (trace 24958): renew committed intent (75 s lifetime). Knowledge: actor memory at 257.85s, trace 24958. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24965}.
<a id="trace-24965"></a>
<a id="trace-24987"></a>
<a id="trace-25059"></a>
<a id="trace-25073"></a>
<a id="trace-25090"></a>
<a id="trace-25103"></a>
<a id="trace-25121"></a>
<a id="trace-25219"></a>
<a id="trace-25237"></a>
<a id="trace-25253"></a>
<a id="trace-25267"></a>
<a id="trace-25341"></a>
<a id="trace-25360"></a>
<a id="trace-25387"></a>
<a id="trace-25399"></a>
<a id="trace-25414"></a>
<a id="trace-25495"></a>
- 258.30s–275.30s (×17), actor 9, squad 1 (trace 24965): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 257.85s, trace 24958. Next observer evidence: {'until': 259.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24987}.
<a id="trace-25507"></a>
- 275.95s–275.95s (×1), actor 9, squad 1 (trace 25507): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 275.00s, trace 25439. Next observer evidence: {'until': 276, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25510}.
<a id="trace-25510"></a>
- 276.00s–276.00s (×1), actor 9, squad 1 (trace 25510): MoveTactically. Knowledge: actor memory at 275.00s, trace 25439. Next observer evidence: None.
<a id="trace-25511"></a>
- 276.00s–276.00s (×1), actor 9, squad 1 (trace 25511): traveling overwatch. Knowledge: actor memory at 275.00s, trace 25439. Next observer evidence: None.
<a id="trace-25512"></a>
- 276.00s–276.00s (×1), actor 9, squad 1 (trace 25512): received platoon directive. Knowledge: actor memory at 275.00s, trace 25439. Next observer evidence: None.
<a id="trace-25516"></a>
- 276.05s–276.05s (×1), actor 9, squad 1 (trace 25516): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 275.00s, trace 25439. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25522}.
<a id="trace-25522"></a>
<a id="trace-25545"></a>
<a id="trace-25568"></a>
<a id="trace-25591"></a>
<a id="trace-25664"></a>
<a id="trace-25678"></a>
<a id="trace-25703"></a>
<a id="trace-25717"></a>
<a id="trace-25735"></a>
<a id="trace-25813"></a>
<a id="trace-25828"></a>
<a id="trace-25847"></a>
<a id="trace-25868"></a>
<a id="trace-25885"></a>
<a id="trace-25959"></a>
<a id="trace-25975"></a>
<a id="trace-26001"></a>
<a id="trace-26015"></a>
<a id="trace-26028"></a>
<a id="trace-26105"></a>
<a id="trace-26118"></a>
<a id="trace-26138"></a>
<a id="trace-26164"></a>
<a id="trace-26175"></a>
<a id="trace-26248"></a>
<a id="trace-26271"></a>
<a id="trace-26287"></a>
<a id="trace-26304"></a>
<a id="trace-26326"></a>
<a id="trace-26422"></a>
<a id="trace-26437"></a>
<a id="trace-26456"></a>
<a id="trace-26471"></a>
<a id="trace-26546"></a>
<a id="trace-26565"></a>
<a id="trace-26588"></a>
<a id="trace-26604"></a>
<a id="trace-26621"></a>
<a id="trace-26695"></a>
<a id="trace-26708"></a>
<a id="trace-26732"></a>
<a id="trace-26755"></a>
<a id="trace-26770"></a>
- 276.30s–319.30s (×43), actor 9, squad 1 (trace 25522): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 275.00s, trace 25439. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25545}.
<a id="trace-2604"></a>
- 319.45s–319.45s (×1), actor 9, squad 1 (events line 2604): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26777"></a>
- 319.45s–319.45s (×1), actor 9, squad 1 (trace 26777): renew committed intent (75 s lifetime). Knowledge: actor memory at 319.45s, trace 26777. Next observer evidence: {'until': 320.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26843}.
<a id="trace-26843"></a>
<a id="trace-26864"></a>
<a id="trace-26877"></a>
<a id="trace-26894"></a>
<a id="trace-26992"></a>
<a id="trace-27009"></a>
<a id="trace-27026"></a>
<a id="trace-27045"></a>
<a id="trace-27058"></a>
<a id="trace-27135"></a>
<a id="trace-27162"></a>
<a id="trace-27175"></a>
<a id="trace-27189"></a>
<a id="trace-27212"></a>
<a id="trace-27282"></a>
- 320.30s–335.30s (×15), actor 9, squad 1 (trace 26843): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 320.00s, trace 26787. Next observer evidence: {'until': 321.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26864}.
<a id="trace-2664"></a>
- 336.25s–336.25s (×1), actor 9, squad 1 (events line 2664): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 337.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27324}.
<a id="trace-27293"></a>
- 336.25s–336.25s (×1), actor 9, squad 1 (trace 27293): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 336.25s, trace 27293. Next observer evidence: {'until': 337.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27324}.
<a id="trace-27294"></a>
- 336.25s–336.25s (×1), actor 9, squad 1 (trace 27294): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 336.25s, trace 27294. Next observer evidence: {'until': 337.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27324}.
<a id="trace-27324"></a>
- 337.30s–337.30s (×1), actor 9, squad 1 (trace 27324): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 336.25s, trace 27294. Next observer evidence: {'until': 337.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27342}.
<a id="trace-27342"></a>
- 337.90s–337.90s (×1), actor 9, squad 1 (trace 27342): traveling. Knowledge: actor memory at 336.25s, trace 27294. Next observer evidence: {'until': 338.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27404}.
<a id="trace-27343"></a>
- 337.90s–337.90s (×1), actor 9, squad 1 (trace 27343): received platoon directive. Knowledge: actor memory at 336.25s, trace 27294. Next observer evidence: {'until': 338.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27404}.
<a id="trace-27404"></a>
<a id="trace-27422"></a>
<a id="trace-27499"></a>
<a id="trace-27534"></a>
<a id="trace-27557"></a>
<a id="trace-27578"></a>
- 338.30s–344.30s (×6), actor 9, squad 1 (trace 27404): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 336.25s, trace 27294. Next observer evidence: {'until': 339.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1500000000000057, 'next_transition': 27422}.
<a id="trace-27583"></a>
- 344.30s–344.30s (×1), actor 9, squad 1 (trace 27583): matching received arrivals: traveling stage complete. Knowledge: actor memory at 340.00s, trace 27439. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8900000000000006, 'next_transition': 27710}.
<a id="trace-27710"></a>
<a id="trace-27728"></a>
<a id="trace-27748"></a>
<a id="trace-27769"></a>
<a id="trace-27787"></a>
<a id="trace-27869"></a>
- 345.30s–350.30s (×6), actor 9, squad 1 (trace 27710): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 345.00s, trace 27654. Next observer evidence: {'until': 346.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.150100000000002, 'next_transition': 27728}.
<a id="trace-27876"></a>
- 350.30s–350.30s (×1), actor 9, squad 1 (trace 27876): matching received arrivals: traveling stage complete. Knowledge: actor memory at 350.00s, trace 27811. Next observer evidence: {'until': 351.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8900000000000006, 'next_transition': 27952}.
<a id="trace-27952"></a>
<a id="trace-28010"></a>
<a id="trace-28084"></a>
<a id="trace-28104"></a>
- 351.30s–356.30s (×4), actor 9, squad 1 (trace 27952): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 350.00s, trace 27811. Next observer evidence: {'until': 354.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.450000000000003, 'next_transition': 28010}.
<a id="trace-28111"></a>
- 356.30s–356.30s (×1), actor 9, squad 1 (trace 28111): traveling overwatch. Knowledge: actor memory at 355.00s, trace 28026. Next observer evidence: {'until': 357.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28128}.
<a id="trace-28112"></a>
- 356.30s–356.30s (×1), actor 9, squad 1 (trace 28112): matching received arrivals: traveling stage complete. Knowledge: actor memory at 355.00s, trace 28026. Next observer evidence: {'until': 357.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28128}.
<a id="trace-28128"></a>
<a id="trace-28149"></a>
<a id="trace-28164"></a>
- 357.30s–359.30s (×3), actor 9, squad 1 (trace 28128): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 355.00s, trace 28026. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28149}.

## Net delivery

198 matched order/radio deliveries; 496 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.396s; maximum 2.100s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1888: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1897: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 3007: estimate 4.94; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 3008: estimate 4.94; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 3009: estimate 4.94; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 3010: estimate 4.94; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3076: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3077: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3079: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3081: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3082: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3083: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3084: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3086: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3087: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3088: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3089: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3090: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 4380: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4385: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4386: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 4388: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4390: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4391: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4392: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4393: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4395: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4396: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4397: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4398: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4399: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4892: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4893: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4897: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4898: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4900: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4902: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4903: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4904: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4905: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4907: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4908: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4909: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4910: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4911: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 5815: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 5816: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 5817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 5818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 5819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 5820: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 5821: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 5822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 5823: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 5824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 5825: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 5826: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 5827: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 5828: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 5829: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 5830: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 5831: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 5832: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 5833: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 5834: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 10541: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 10542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 10543: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 10544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 10545: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 10546: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 10547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 10548: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 10549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 10550: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 10551: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 10552: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 10553: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 10554: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 10555: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 10556: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 10557: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 10558: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 10559: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 10731: estimate 12.12; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 10732: estimate 12.12; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 11826: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 11827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 11828: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 11829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 11830: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 11831: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 11832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 11833: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 11834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 11835: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 11836: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 11837: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 11838: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 11839: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 11840: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 11841: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 11842: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 11843: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 11844: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 12110: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 12111: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 12112: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 12113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 12114: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 12115: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 12116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 12117: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 12118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 12119: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 12120: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 12121: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 12122: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 12123: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 12124: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 12125: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 12126: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 12127: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 12128: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 12491: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 12492: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 12493: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 12494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 12495: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 12496: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 12497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 12498: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 12499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 12500: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 12501: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 12502: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 12503: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 12504: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 12505: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 12506: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 12507: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 12508: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 12509: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 13019: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 13020: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 13021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 13022: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 13023: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 13024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 13025: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 13026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 13027: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 13028: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 13029: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 13030: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 13031: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 13032: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 13033: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 13034: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 13035: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 13036: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.05s leader 5, trace 13037: estimate 12.71; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 13309: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 13310: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 13311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 13312: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 13313: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 13314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 13315: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 13316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 13317: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 13318: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 13319: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 13320: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 13321: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 13322: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 13323: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 13324: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 13325: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 13326: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 16476: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 16477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 16478: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 16479: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 16480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 16481: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 16482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 16483: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 16484: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 16485: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 16486: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 16487: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 16488: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 16489: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 16490: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 16491: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 16492: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 16931: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 16932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 16933: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 16934: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 16935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 16936: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 16937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 16938: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 16939: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 16940: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 16941: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 16942: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 16943: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 16944: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 16945: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 16946: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 16947: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 78.95s leader 5, trace 17223: estimate 12.69; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 17257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 17258: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 17259: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 17260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 17261: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 17262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 17263: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 17264: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 17265: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 17266: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 17267: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 17268: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 17269: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 17270: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 17271: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 17272: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 17473: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 17474: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 17475: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 17476: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 17477: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 17478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 17479: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 17480: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 17481: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 17482: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 17483: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 17484: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 17485: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 17486: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 17487: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 17488: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 17612: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 17613: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 17698: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 17699: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 17700: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 17701: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 17702: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 17703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 17704: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 17705: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 17706: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 17707: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 17708: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 17709: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 17710: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 17711: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 17712: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 17713: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 18258: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 18259: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 18260: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 18261: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 18262: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 18263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 18264: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 18265: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 18266: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 18267: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 18268: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 18269: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 18270: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 18271: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 18272: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 18273: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 18742: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 18743: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 18744: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 18745: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 18746: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 18747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 18748: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 18749: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 18750: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 18751: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 18752: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 18753: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 18754: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 18755: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 18756: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 18757: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 18953: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 18954: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 18955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 18956: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 18957: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 18958: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 18959: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 18960: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 18961: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 18962: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 18963: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 18964: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 18965: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 19086: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 19087: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 19088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 19089: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 19090: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 19091: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 19092: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 19093: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 19094: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 19095: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 19096: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 19097: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 19098: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 19246: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 19247: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 19248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 19249: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 19250: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 19251: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 19252: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 19253: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 19254: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 19255: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 19256: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 19257: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 19258: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.85s leader 5, trace 19321: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.85s leader 5, trace 19322: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 19386: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 19387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 19388: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 19389: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 19390: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 19391: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 19392: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 19393: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 19394: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 19395: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 19396: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 19397: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.90s leader 8, trace 19467: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 19586: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 19587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 19588: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 19589: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 19590: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 19591: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 19592: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 19593: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 19594: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 19595: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 19596: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 19597: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 19756: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 19757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 19758: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 19759: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 19760: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 19761: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 19762: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 19763: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 19764: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 19765: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 19766: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 19767: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 19914: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 19915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 19916: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 19917: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 19918: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 19919: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 19920: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 19921: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 19922: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 19923: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 19924: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 19925: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 20147: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 20148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 20149: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 20150: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 20151: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 20152: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 20153: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 20154: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 20155: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 20156: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 20157: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 20158: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 20297: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 20298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 20299: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 20300: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 20301: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 20302: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 20303: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 20304: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 20305: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 20306: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 20307: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 20308: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 20528: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 20529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 20530: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 20531: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 20532: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 20533: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 20534: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 20535: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 20536: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 20537: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 20538: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 20539: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 20767: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 20768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 20769: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 20770: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 20771: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 20772: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 20773: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 20774: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 20775: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 20776: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 20777: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 20778: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 8, trace 20939: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 20940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 20941: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 20942: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 20943: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 20944: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 20945: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 20946: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 20947: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 20948: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 20949: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 20950: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 8, trace 21114: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 21115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 21116: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 21117: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 21118: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 21119: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 21120: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 21121: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 21122: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 21123: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 21124: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 21125: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 8, trace 21258: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 21259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 21260: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 21261: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 21262: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 21263: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 21264: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 21265: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 21266: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 21267: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 21268: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 21269: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 8, trace 21415: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 21416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 21417: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 21418: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 21419: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 21420: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 21421: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 21422: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 21423: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 21424: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 21425: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 21426: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 8, trace 21574: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 21575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 21576: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 21577: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 21578: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 21579: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 21580: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 21581: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 21582: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 21583: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 21584: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 21585: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 183.80s leader 8, trace 21692: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 8, trace 21722: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 21723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 21724: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 21725: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 21726: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 21727: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 21728: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 21729: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 21730: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 21731: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 21732: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 21733: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 189.25s leader 8, trace 21849: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 189.25s leader 8, trace 21850: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 8, trace 21869: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 21870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 21871: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 21872: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 21873: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 21874: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 21875: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 21876: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 21877: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 21878: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 21879: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 21880: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 8, trace 22160: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 22161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 22162: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 22163: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 22164: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 22165: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 22166: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 22167: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 22168: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 22169: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 22170: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 22171: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 8, trace 22343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 22344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 22345: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 22346: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 22347: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 22348: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 22349: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 22350: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 22351: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 22352: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 22353: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 22354: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.50s leader 8, trace 22408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.50s leader 8, trace 22409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 8, trace 22751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 22752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 22753: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 22754: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 22755: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 22756: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 22757: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 22758: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 22759: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 22760: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 22761: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 22762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 8, trace 22919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 22920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 22921: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 22922: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 22923: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 22924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 22925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 22926: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 22927: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 22928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 22929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 22930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 8, trace 23210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 23211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 23212: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 23213: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 23214: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 23215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 23216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 23217: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 23218: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 23219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 23220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 23221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 8, trace 23398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 23399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 23400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 23401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 23402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 23403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 23404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 23405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 23406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 23407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 23408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 23409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 8, trace 23558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 23559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 23560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 23561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 23562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 23563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 23564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 23565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 23566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 23567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 23568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 23569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.80s leader 8, trace 23637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.80s leader 8, trace 23638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 8, trace 23833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 23834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 23835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 23836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 23837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 23838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 23839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 23840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 23841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 23842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 23843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 23844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 234.25s leader 8, trace 24029: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 234.25s leader 8, trace 24030: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 8, trace 24120: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 24121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 24122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 24123: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 24124: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 24125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 24126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 24127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 24128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 24129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 24130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 24131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 8, trace 24313: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 24314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 24315: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 24316: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 24317: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 24318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 24319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 24320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 24321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 24322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 24323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 24324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 8, trace 24477: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 24478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 24479: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 24480: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 24481: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 24482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 24483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 24484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 24485: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 24486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 24487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 24488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 8, trace 24704: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 24705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 24706: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 24707: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 24708: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 24709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 24710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 24711: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 24712: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 24713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 24714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 24715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 24854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 24855: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 24856: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 24857: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 24858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 24859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 24860: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 24861: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 24862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 24863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 24864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 257.85s leader 9, trace 24958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 25001: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 25002: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 25003: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 25004: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 25005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 25006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 25007: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 25008: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 25009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 25010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 25011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 25138: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 25139: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 25140: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 25141: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 25142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 25143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 25144: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 25145: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 25146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 25147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 25148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 25281: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 25282: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 25283: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 25284: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 25285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 25286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 25287: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 25288: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 25289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 25290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 25291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 25439: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 25440: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 25441: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 25442: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 25443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 25444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 25445: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 25446: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 25447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 25448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 25449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 25608: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 25609: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 25610: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 25611: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 25612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 25613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 25614: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 25615: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 25616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 25617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 25618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 25749: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 25750: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 25751: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 25752: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 25753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 25754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 25755: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 25756: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 25757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 25758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 25759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 25900: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 25901: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 25902: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 25903: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 25904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 25905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 25906: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 25907: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 25908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 25909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 25910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 26049: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 26050: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 26051: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 26052: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 26053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 26054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 26055: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 26056: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 26057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 26058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 26059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 26192: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 26193: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 26194: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 26195: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 26196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 26197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 26198: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 26199: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 26200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 26201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 26202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 26349: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 26350: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 26351: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 26352: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 26353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 26354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 26355: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 26356: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 26357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 26358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 26359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 26486: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 26487: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 26488: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 26489: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 26490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 26491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 26492: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 26493: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 26494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 26495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 26496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 26639: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 26640: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 26641: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 26642: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 26643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 26644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 26645: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 26646: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 26647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 26648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 26649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 319.45s leader 9, trace 26777: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 26787: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 26788: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 26789: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 26790: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 26791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 26792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 26793: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 26794: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 26795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 26796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 26797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 26936: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 26937: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 26938: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 26939: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 26940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 26941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 26942: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 26943: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 26944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 26945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 26946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 27077: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 27078: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 27079: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 27080: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 27081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 27082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 27083: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 27084: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 27085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 27086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 27087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 27226: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 27227: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 27228: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 27229: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 27230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 27231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 27232: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 27233: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 27234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 27235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 27236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 336.25s leader 9, trace 27293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 336.25s leader 9, trace 27294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 27439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 27440: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 27441: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 27442: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 27443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 27444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 27445: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 27446: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 27447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 27448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 27449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 27654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 27655: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 27656: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 27657: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 27658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 27659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 27660: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 27661: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 27662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 27663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 27664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 27811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 27812: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 27813: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 27814: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 27815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 27816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 27817: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 27818: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 27819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 27820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 27821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 28026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 28027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 28028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 28029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 28030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 28031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 28032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 28033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 28034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 28035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 28036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 28178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 28179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 28180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 28181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 28182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 28183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 28184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 28185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 28186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 28187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 28188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Soren incapacitated
- 1: Rook killed in action
- 1: Ash incapacitated
- 1: Tern killed in action
- 1: Reed killed in action
- 1: Moss incapacitated
- 1: Iven killed in action
- 1: Bren incapacitated

## Outcome attribution

- 115.85s, evidence 1796: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19443}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 115.85s, evidence 19321: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.169306 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19443}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 115.85s, evidence 19322: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.169306 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19443}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 121.90s, evidence 1802: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19470}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 183.80s, evidence 2044: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21697}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
