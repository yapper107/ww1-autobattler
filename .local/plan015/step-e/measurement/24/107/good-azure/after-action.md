# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/24/107/good-azure/battle-107-1789674191477936858`

## Battle summary

**Ember** · 360 s · 357 shots.

### Turning points

- 14.9s, squad 1: contact (events line 173). First recorded contact.
- 41.6s, squad 0: help call ([trace 7362](#trace-7362)). No completion observed before termination.
- 42.9s, squad 1: help answer ([trace 7502](#trace-7502)). 49.2s, squad 1: advanced tactically.
- 47.5s, squad 0: assault ([trace 9136](#trace-9136)). 47.7s, squad 0: advanced tactically.
- 54.4s, squad 1: withdrawal ([trace 10264](#trace-10264)). 112.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 66.8s, squad 1: help call ([trace 12208](#trace-12208)). 68.4s, squad 0: answered a neighbour with support by fire.
- 68.4s, squad 0: help answer ([trace 12324](#trace-12324)). 86.6s, squad 0: broke contact.
- 86.6s, squad 0: withdrawal ([trace 15720](#trace-15720)). No completion observed before termination.
- 116.5s, squad 1: withdrawal ([trace 16810](#trace-16810)). No completion observed before termination.

### Squads

- **0** — FightHere; chose answered a neighbour with support by fire, broke contact and 3 further drill types; no completed objective recorded; 92 shots, 7/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 7 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 211 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 47 shots, 1/2 lost.

### Decisions and attribution

At 54.4s, squad 1 chose broke contact ([trace 10264](#trace-10264)), followed by 1 shots and 1 own casualties; estimate 12.2 against 0 distinct squad-reported contacts; At 31.1s, squad 1 chose advanced tactically ([trace 6551](#trace-6551)), followed by 2 shots and 0 own casualties; estimate 11.7 against 0 distinct squad-reported contacts; At 16.8s, squad 0 chose took cover and returned fire ([trace 2913](#trace-2913)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 684](#trace-684)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449787774633696, 'next_transition': 703}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 686](#trace-686)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409999119592868, 'next_transition': 817}.

### Communication

163 matched deliveries (mean 0.43s, max 2.05s); 406 explicit drops; 5 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.90s, squad 1, contact, evidence events line 173: First recorded contact; .
- 41.60s, squad 0, help call, evidence 7362: NeedSupport; No completion observed before termination.
- 42.90s, squad 1, help answer, evidence 7502: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 49.2s, squad 1: advanced tactically.
- 47.45s, squad 0, assault, evidence 9136: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 47.7s, squad 0: advanced tactically.
- 54.35s, squad 1, withdrawal, evidence 10264: BreakContact: believed ratio at least two without superiority; 112.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 66.80s, squad 1, help call, evidence 12208: NeedSupport; 68.4s, squad 0: answered a neighbour with support by fire.
- 68.40s, squad 0, help answer, evidence 12324: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 86.6s, squad 0: broke contact.
- 86.55s, squad 0, withdrawal, evidence 15720: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 116.45s, squad 1, withdrawal, evidence 16810: Withdraw to received rally; No completion observed before termination.

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
<a id="trace-972"></a>
<a id="trace-974"></a>
<a id="trace-1005"></a>
<a id="trace-1007"></a>
<a id="trace-1041"></a>
<a id="trace-1043"></a>
<a id="trace-1070"></a>
<a id="trace-1072"></a>
<a id="trace-1101"></a>
<a id="trace-1103"></a>
<a id="trace-1129"></a>
<a id="trace-1131"></a>
<a id="trace-1160"></a>
<a id="trace-1162"></a>
<a id="trace-1178"></a>
<a id="trace-1180"></a>
<a id="trace-1271"></a>
<a id="trace-1273"></a>
<a id="trace-1286"></a>
<a id="trace-1288"></a>
<a id="trace-1310"></a>
<a id="trace-1312"></a>
<a id="trace-1330"></a>
<a id="trace-1332"></a>
<a id="trace-1360"></a>
<a id="trace-1362"></a>
<a id="trace-1376"></a>
<a id="trace-1378"></a>
- 4.20s–12.70s (×36), actor 5, squad 0 (trace 703): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 687. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450113517940907, 'next_transition': 729}.
<a id="trace-817"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 817): traveling overwatch. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: None.
<a id="trace-818"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 818): received platoon directive. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: None.
<a id="trace-864"></a>
- 5.30s–5.30s (×1), actor 8, squad 1 (trace 864): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 17.313665067652423, 'next_transition': 1812}.
<a id="trace-938"></a>
<a id="trace-976"></a>
<a id="trace-1009"></a>
<a id="trace-1011"></a>
<a id="trace-1105"></a>
<a id="trace-1107"></a>
<a id="trace-1133"></a>
<a id="trace-1135"></a>
<a id="trace-1182"></a>
<a id="trace-1184"></a>
<a id="trace-1275"></a>
<a id="trace-1277"></a>
<a id="trace-1290"></a>
<a id="trace-1292"></a>
<a id="trace-1314"></a>
<a id="trace-1316"></a>
<a id="trace-1364"></a>
<a id="trace-1366"></a>
<a id="trace-1783"></a>
<a id="trace-1785"></a>
<a id="trace-1803"></a>
<a id="trace-1805"></a>
<a id="trace-2458"></a>
<a id="trace-2460"></a>
<a id="trace-3362"></a>
<a id="trace-3364"></a>
<a id="trace-4243"></a>
<a id="trace-4245"></a>
<a id="trace-4312"></a>
<a id="trace-4314"></a>
<a id="trace-4381"></a>
<a id="trace-4383"></a>
<a id="trace-4471"></a>
<a id="trace-4473"></a>
<a id="trace-4646"></a>
<a id="trace-4648"></a>
<a id="trace-4683"></a>
<a id="trace-4685"></a>
<a id="trace-4751"></a>
<a id="trace-4753"></a>
<a id="trace-4781"></a>
<a id="trace-4783"></a>
<a id="trace-5223"></a>
<a id="trace-5225"></a>
<a id="trace-5363"></a>
<a id="trace-5365"></a>
<a id="trace-5390"></a>
<a id="trace-5392"></a>
<a id="trace-5439"></a>
<a id="trace-5441"></a>
<a id="trace-5473"></a>
<a id="trace-5475"></a>
<a id="trace-5572"></a>
<a id="trace-5574"></a>
<a id="trace-5610"></a>
<a id="trace-5612"></a>
<a id="trace-6075"></a>
<a id="trace-6077"></a>
<a id="trace-6172"></a>
<a id="trace-6174"></a>
<a id="trace-6220"></a>
<a id="trace-6222"></a>
<a id="trace-6268"></a>
<a id="trace-6270"></a>
<a id="trace-6316"></a>
<a id="trace-6318"></a>
<a id="trace-6371"></a>
<a id="trace-6373"></a>
<a id="trace-6499"></a>
<a id="trace-6501"></a>
<a id="trace-6530"></a>
<a id="trace-6532"></a>
<a id="trace-6619"></a>
<a id="trace-6621"></a>
<a id="trace-6645"></a>
<a id="trace-6647"></a>
<a id="trace-6668"></a>
<a id="trace-6670"></a>
<a id="trace-6695"></a>
<a id="trace-6697"></a>
<a id="trace-6709"></a>
<a id="trace-6711"></a>
<a id="trace-6725"></a>
<a id="trace-6727"></a>
<a id="trace-6746"></a>
<a id="trace-6748"></a>
<a id="trace-6856"></a>
<a id="trace-6858"></a>
<a id="trace-6875"></a>
<a id="trace-6877"></a>
<a id="trace-6890"></a>
<a id="trace-6892"></a>
<a id="trace-6995"></a>
<a id="trace-6997"></a>
<a id="trace-7030"></a>
<a id="trace-7032"></a>
<a id="trace-7047"></a>
<a id="trace-7049"></a>
<a id="trace-7083"></a>
<a id="trace-7085"></a>
<a id="trace-7208"></a>
<a id="trace-7210"></a>
<a id="trace-7348"></a>
<a id="trace-7350"></a>
<a id="trace-7382"></a>
<a id="trace-7384"></a>
<a id="trace-7411"></a>
<a id="trace-7413"></a>
<a id="trace-7490"></a>
<a id="trace-7492"></a>
<a id="trace-8399"></a>
<a id="trace-8401"></a>
<a id="trace-8627"></a>
<a id="trace-8629"></a>
<a id="trace-8653"></a>
<a id="trace-8655"></a>
<a id="trace-8778"></a>
<a id="trace-8780"></a>
<a id="trace-8791"></a>
<a id="trace-8793"></a>
<a id="trace-8828"></a>
<a id="trace-8830"></a>
<a id="trace-8845"></a>
<a id="trace-8847"></a>
<a id="trace-8866"></a>
<a id="trace-8868"></a>
<a id="trace-9434"></a>
<a id="trace-9436"></a>
<a id="trace-9489"></a>
<a id="trace-9491"></a>
<a id="trace-9579"></a>
<a id="trace-9581"></a>
<a id="trace-9693"></a>
<a id="trace-9695"></a>
<a id="trace-9721"></a>
<a id="trace-9723"></a>
<a id="trace-9900"></a>
<a id="trace-9902"></a>
<a id="trace-9925"></a>
<a id="trace-9927"></a>
<a id="trace-9955"></a>
<a id="trace-9957"></a>
<a id="trace-9977"></a>
<a id="trace-9979"></a>
<a id="trace-10026"></a>
<a id="trace-10028"></a>
<a id="trace-10065"></a>
<a id="trace-10067"></a>
<a id="trace-10404"></a>
<a id="trace-10406"></a>
<a id="trace-10541"></a>
<a id="trace-10543"></a>
<a id="trace-10603"></a>
<a id="trace-10605"></a>
<a id="trace-10738"></a>
<a id="trace-10740"></a>
<a id="trace-10777"></a>
<a id="trace-10779"></a>
<a id="trace-10815"></a>
<a id="trace-10817"></a>
<a id="trace-10911"></a>
<a id="trace-10913"></a>
<a id="trace-10955"></a>
<a id="trace-10957"></a>
<a id="trace-11145"></a>
<a id="trace-11147"></a>
<a id="trace-11341"></a>
<a id="trace-11343"></a>
<a id="trace-11400"></a>
<a id="trace-11402"></a>
<a id="trace-11453"></a>
<a id="trace-11455"></a>
<a id="trace-11539"></a>
<a id="trace-11541"></a>
<a id="trace-11947"></a>
<a id="trace-11949"></a>
<a id="trace-11963"></a>
<a id="trace-11965"></a>
<a id="trace-11983"></a>
<a id="trace-11985"></a>
<a id="trace-12072"></a>
<a id="trace-12074"></a>
<a id="trace-12106"></a>
<a id="trace-12108"></a>
<a id="trace-12155"></a>
<a id="trace-12157"></a>
<a id="trace-12203"></a>
<a id="trace-12205"></a>
<a id="trace-12235"></a>
<a id="trace-12237"></a>
<a id="trace-12270"></a>
<a id="trace-12272"></a>
<a id="trace-14841"></a>
<a id="trace-14843"></a>
<a id="trace-14875"></a>
<a id="trace-14877"></a>
<a id="trace-14896"></a>
<a id="trace-14898"></a>
<a id="trace-14985"></a>
<a id="trace-14987"></a>
<a id="trace-15000"></a>
<a id="trace-15002"></a>
<a id="trace-15019"></a>
<a id="trace-15021"></a>
<a id="trace-15036"></a>
<a id="trace-15038"></a>
<a id="trace-15059"></a>
<a id="trace-15061"></a>
<a id="trace-15089"></a>
<a id="trace-15091"></a>
<a id="trace-15130"></a>
<a id="trace-15132"></a>
<a id="trace-15162"></a>
<a id="trace-15164"></a>
<a id="trace-15183"></a>
<a id="trace-15185"></a>
<a id="trace-15255"></a>
<a id="trace-15257"></a>
<a id="trace-15267"></a>
<a id="trace-15269"></a>
<a id="trace-15298"></a>
<a id="trace-15300"></a>
<a id="trace-15317"></a>
<a id="trace-15319"></a>
<a id="trace-15350"></a>
<a id="trace-15352"></a>
<a id="trace-15371"></a>
<a id="trace-15373"></a>
<a id="trace-15398"></a>
<a id="trace-15400"></a>
<a id="trace-15525"></a>
<a id="trace-15527"></a>
<a id="trace-15542"></a>
<a id="trace-15544"></a>
<a id="trace-15554"></a>
<a id="trace-15556"></a>
<a id="trace-15569"></a>
<a id="trace-15571"></a>
<a id="trace-15587"></a>
<a id="trace-15589"></a>
<a id="trace-15617"></a>
<a id="trace-15619"></a>
<a id="trace-15688"></a>
<a id="trace-15690"></a>
<a id="trace-15702"></a>
<a id="trace-15704"></a>
<a id="trace-15713"></a>
<a id="trace-15715"></a>
<a id="trace-15822"></a>
<a id="trace-15824"></a>
<a id="trace-15838"></a>
<a id="trace-15840"></a>
<a id="trace-15886"></a>
<a id="trace-15888"></a>
<a id="trace-15913"></a>
<a id="trace-15915"></a>
<a id="trace-16000"></a>
<a id="trace-16002"></a>
<a id="trace-16022"></a>
<a id="trace-16024"></a>
<a id="trace-16035"></a>
<a id="trace-16037"></a>
<a id="trace-16049"></a>
<a id="trace-16051"></a>
<a id="trace-16060"></a>
<a id="trace-16062"></a>
<a id="trace-16073"></a>
<a id="trace-16075"></a>
<a id="trace-16083"></a>
<a id="trace-16085"></a>
<a id="trace-16099"></a>
<a id="trace-16101"></a>
<a id="trace-16111"></a>
<a id="trace-16113"></a>
<a id="trace-16185"></a>
<a id="trace-16187"></a>
<a id="trace-16198"></a>
<a id="trace-16200"></a>
<a id="trace-16211"></a>
<a id="trace-16213"></a>
<a id="trace-16225"></a>
<a id="trace-16227"></a>
<a id="trace-16234"></a>
<a id="trace-16236"></a>
<a id="trace-16250"></a>
<a id="trace-16252"></a>
<a id="trace-16263"></a>
<a id="trace-16265"></a>
<a id="trace-16277"></a>
<a id="trace-16279"></a>
<a id="trace-16285"></a>
<a id="trace-16287"></a>
<a id="trace-16357"></a>
<a id="trace-16359"></a>
<a id="trace-16387"></a>
<a id="trace-16389"></a>
<a id="trace-16400"></a>
<a id="trace-16402"></a>
<a id="trace-16409"></a>
<a id="trace-16411"></a>
<a id="trace-16423"></a>
<a id="trace-16425"></a>
<a id="trace-16506"></a>
<a id="trace-16508"></a>
<a id="trace-16520"></a>
<a id="trace-16522"></a>
<a id="trace-16531"></a>
<a id="trace-16533"></a>
<a id="trace-16546"></a>
<a id="trace-16548"></a>
<a id="trace-16553"></a>
<a id="trace-16555"></a>
<a id="trace-16566"></a>
<a id="trace-16568"></a>
<a id="trace-16573"></a>
<a id="trace-16575"></a>
<a id="trace-16583"></a>
<a id="trace-16585"></a>
<a id="trace-16589"></a>
<a id="trace-16591"></a>
<a id="trace-16668"></a>
<a id="trace-16670"></a>
<a id="trace-16680"></a>
<a id="trace-16682"></a>
<a id="trace-16691"></a>
<a id="trace-16693"></a>
<a id="trace-16704"></a>
<a id="trace-16706"></a>
<a id="trace-16714"></a>
<a id="trace-16716"></a>
<a id="trace-16724"></a>
<a id="trace-16726"></a>
<a id="trace-16790"></a>
<a id="trace-16792"></a>
<a id="trace-16867"></a>
<a id="trace-16869"></a>
<a id="trace-16883"></a>
<a id="trace-16885"></a>
<a id="trace-16889"></a>
<a id="trace-16891"></a>
<a id="trace-16904"></a>
<a id="trace-16906"></a>
<a id="trace-16910"></a>
<a id="trace-16912"></a>
<a id="trace-16924"></a>
<a id="trace-16926"></a>
<a id="trace-16933"></a>
<a id="trace-16935"></a>
<a id="trace-16998"></a>
<a id="trace-17000"></a>
<a id="trace-17005"></a>
<a id="trace-17007"></a>
<a id="trace-17021"></a>
<a id="trace-17023"></a>
<a id="trace-17035"></a>
<a id="trace-17037"></a>
<a id="trace-17041"></a>
<a id="trace-17043"></a>
<a id="trace-17052"></a>
<a id="trace-17054"></a>
<a id="trace-17058"></a>
<a id="trace-17060"></a>
<a id="trace-17070"></a>
<a id="trace-17072"></a>
<a id="trace-17077"></a>
<a id="trace-17079"></a>
<a id="trace-17142"></a>
<a id="trace-17144"></a>
<a id="trace-17150"></a>
<a id="trace-17152"></a>
<a id="trace-17166"></a>
<a id="trace-17168"></a>
<a id="trace-17174"></a>
<a id="trace-17176"></a>
<a id="trace-17191"></a>
<a id="trace-17193"></a>
<a id="trace-17220"></a>
<a id="trace-17222"></a>
<a id="trace-17240"></a>
<a id="trace-17242"></a>
<a id="trace-17245"></a>
<a id="trace-17247"></a>
<a id="trace-17310"></a>
<a id="trace-17312"></a>
<a id="trace-17315"></a>
<a id="trace-17317"></a>
<a id="trace-17325"></a>
<a id="trace-17327"></a>
<a id="trace-17331"></a>
<a id="trace-17333"></a>
<a id="trace-17344"></a>
<a id="trace-17346"></a>
<a id="trace-17352"></a>
<a id="trace-17354"></a>
<a id="trace-17368"></a>
<a id="trace-17370"></a>
<a id="trace-17377"></a>
<a id="trace-17379"></a>
<a id="trace-17389"></a>
<a id="trace-17391"></a>
<a id="trace-17466"></a>
<a id="trace-17468"></a>
<a id="trace-17490"></a>
<a id="trace-17492"></a>
<a id="trace-17496"></a>
<a id="trace-17498"></a>
<a id="trace-17526"></a>
<a id="trace-17528"></a>
<a id="trace-17532"></a>
<a id="trace-17534"></a>
<a id="trace-17603"></a>
<a id="trace-17605"></a>
<a id="trace-17625"></a>
<a id="trace-17627"></a>
<a id="trace-17638"></a>
<a id="trace-17640"></a>
<a id="trace-17642"></a>
<a id="trace-17644"></a>
<a id="trace-17652"></a>
<a id="trace-17654"></a>
<a id="trace-17669"></a>
<a id="trace-17671"></a>
<a id="trace-17673"></a>
<a id="trace-17675"></a>
<a id="trace-17739"></a>
<a id="trace-17741"></a>
<a id="trace-17744"></a>
<a id="trace-17746"></a>
<a id="trace-17758"></a>
<a id="trace-17760"></a>
<a id="trace-17764"></a>
<a id="trace-17766"></a>
<a id="trace-17780"></a>
<a id="trace-17782"></a>
<a id="trace-17798"></a>
<a id="trace-17800"></a>
<a id="trace-17806"></a>
<a id="trace-17808"></a>
<a id="trace-17819"></a>
<a id="trace-17821"></a>
<a id="trace-17828"></a>
<a id="trace-17830"></a>
<a id="trace-17892"></a>
<a id="trace-17894"></a>
<a id="trace-17905"></a>
<a id="trace-17907"></a>
<a id="trace-17911"></a>
<a id="trace-17913"></a>
<a id="trace-17924"></a>
<a id="trace-17926"></a>
<a id="trace-17934"></a>
<a id="trace-17936"></a>
<a id="trace-17954"></a>
<a id="trace-17956"></a>
<a id="trace-17972"></a>
<a id="trace-17974"></a>
<a id="trace-18036"></a>
<a id="trace-18038"></a>
<a id="trace-18041"></a>
<a id="trace-18043"></a>
<a id="trace-18056"></a>
<a id="trace-18058"></a>
<a id="trace-18063"></a>
<a id="trace-18065"></a>
<a id="trace-18074"></a>
<a id="trace-18076"></a>
<a id="trace-18080"></a>
<a id="trace-18082"></a>
<a id="trace-18090"></a>
<a id="trace-18092"></a>
<a id="trace-18099"></a>
<a id="trace-18101"></a>
<a id="trace-18115"></a>
<a id="trace-18117"></a>
<a id="trace-18183"></a>
<a id="trace-18185"></a>
<a id="trace-18188"></a>
<a id="trace-18190"></a>
<a id="trace-18201"></a>
<a id="trace-18203"></a>
<a id="trace-18208"></a>
<a id="trace-18210"></a>
<a id="trace-18219"></a>
<a id="trace-18221"></a>
<a id="trace-18230"></a>
<a id="trace-18232"></a>
<a id="trace-18242"></a>
<a id="trace-18244"></a>
<a id="trace-18250"></a>
<a id="trace-18252"></a>
<a id="trace-18261"></a>
<a id="trace-18263"></a>
<a id="trace-18265"></a>
<a id="trace-18267"></a>
<a id="trace-18331"></a>
<a id="trace-18333"></a>
<a id="trace-18348"></a>
<a id="trace-18350"></a>
<a id="trace-18354"></a>
<a id="trace-18356"></a>
<a id="trace-18373"></a>
<a id="trace-18375"></a>
<a id="trace-18385"></a>
<a id="trace-18387"></a>
<a id="trace-18393"></a>
<a id="trace-18395"></a>
<a id="trace-18405"></a>
<a id="trace-18407"></a>
<a id="trace-18411"></a>
<a id="trace-18413"></a>
<a id="trace-18478"></a>
<a id="trace-18480"></a>
<a id="trace-18486"></a>
<a id="trace-18488"></a>
<a id="trace-18497"></a>
<a id="trace-18499"></a>
<a id="trace-18505"></a>
<a id="trace-18507"></a>
<a id="trace-18520"></a>
<a id="trace-18522"></a>
<a id="trace-18526"></a>
<a id="trace-18528"></a>
<a id="trace-18536"></a>
<a id="trace-18538"></a>
<a id="trace-18544"></a>
<a id="trace-18546"></a>
<a id="trace-18557"></a>
<a id="trace-18559"></a>
<a id="trace-18562"></a>
<a id="trace-18564"></a>
<a id="trace-18637"></a>
<a id="trace-18639"></a>
<a id="trace-18648"></a>
<a id="trace-18650"></a>
<a id="trace-18654"></a>
<a id="trace-18656"></a>
<a id="trace-18671"></a>
<a id="trace-18673"></a>
<a id="trace-18675"></a>
<a id="trace-18677"></a>
<a id="trace-18692"></a>
<a id="trace-18694"></a>
<a id="trace-18711"></a>
<a id="trace-18713"></a>
<a id="trace-18777"></a>
<a id="trace-18779"></a>
<a id="trace-18790"></a>
<a id="trace-18792"></a>
<a id="trace-18801"></a>
<a id="trace-18803"></a>
<a id="trace-18818"></a>
<a id="trace-18820"></a>
<a id="trace-18825"></a>
<a id="trace-18827"></a>
<a id="trace-18838"></a>
<a id="trace-18840"></a>
<a id="trace-18847"></a>
<a id="trace-18849"></a>
<a id="trace-18859"></a>
<a id="trace-18861"></a>
<a id="trace-18863"></a>
<a id="trace-18865"></a>
<a id="trace-18929"></a>
<a id="trace-18931"></a>
<a id="trace-18941"></a>
<a id="trace-18943"></a>
<a id="trace-18949"></a>
<a id="trace-18951"></a>
<a id="trace-18958"></a>
<a id="trace-18960"></a>
<a id="trace-18973"></a>
<a id="trace-18975"></a>
<a id="trace-18978"></a>
<a id="trace-18980"></a>
<a id="trace-18989"></a>
<a id="trace-18991"></a>
<a id="trace-19006"></a>
<a id="trace-19008"></a>
<a id="trace-19011"></a>
<a id="trace-19013"></a>
<a id="trace-19075"></a>
<a id="trace-19077"></a>
<a id="trace-19083"></a>
<a id="trace-19085"></a>
<a id="trace-19093"></a>
<a id="trace-19095"></a>
<a id="trace-19104"></a>
<a id="trace-19106"></a>
<a id="trace-19121"></a>
<a id="trace-19123"></a>
<a id="trace-19125"></a>
<a id="trace-19127"></a>
<a id="trace-19138"></a>
<a id="trace-19140"></a>
<a id="trace-19144"></a>
<a id="trace-19146"></a>
<a id="trace-19157"></a>
<a id="trace-19159"></a>
<a id="trace-19162"></a>
<a id="trace-19164"></a>
<a id="trace-19226"></a>
<a id="trace-19228"></a>
<a id="trace-19234"></a>
<a id="trace-19236"></a>
<a id="trace-19244"></a>
<a id="trace-19246"></a>
<a id="trace-19261"></a>
<a id="trace-19263"></a>
<a id="trace-19265"></a>
<a id="trace-19267"></a>
<a id="trace-19299"></a>
<a id="trace-19301"></a>
<a id="trace-19303"></a>
<a id="trace-19305"></a>
<a id="trace-19370"></a>
<a id="trace-19372"></a>
<a id="trace-19380"></a>
<a id="trace-19382"></a>
<a id="trace-19389"></a>
<a id="trace-19391"></a>
<a id="trace-19395"></a>
<a id="trace-19397"></a>
<a id="trace-19409"></a>
<a id="trace-19411"></a>
<a id="trace-19414"></a>
<a id="trace-19416"></a>
<a id="trace-19426"></a>
<a id="trace-19428"></a>
<a id="trace-19434"></a>
<a id="trace-19436"></a>
<a id="trace-19443"></a>
<a id="trace-19445"></a>
<a id="trace-19521"></a>
<a id="trace-19523"></a>
<a id="trace-19530"></a>
<a id="trace-19532"></a>
<a id="trace-19538"></a>
<a id="trace-19540"></a>
<a id="trace-19546"></a>
<a id="trace-19548"></a>
<a id="trace-19572"></a>
<a id="trace-19574"></a>
<a id="trace-19579"></a>
<a id="trace-19581"></a>
<a id="trace-19593"></a>
<a id="trace-19595"></a>
<a id="trace-19598"></a>
<a id="trace-19600"></a>
<a id="trace-19665"></a>
<a id="trace-19667"></a>
<a id="trace-19671"></a>
<a id="trace-19673"></a>
<a id="trace-19681"></a>
<a id="trace-19683"></a>
<a id="trace-19688"></a>
<a id="trace-19690"></a>
<a id="trace-19707"></a>
<a id="trace-19709"></a>
<a id="trace-19722"></a>
<a id="trace-19724"></a>
<a id="trace-19732"></a>
<a id="trace-19734"></a>
<a id="trace-19742"></a>
<a id="trace-19744"></a>
<a id="trace-19747"></a>
<a id="trace-19749"></a>
<a id="trace-19812"></a>
<a id="trace-19814"></a>
<a id="trace-19829"></a>
<a id="trace-19831"></a>
<a id="trace-19836"></a>
<a id="trace-19838"></a>
<a id="trace-19850"></a>
<a id="trace-19852"></a>
<a id="trace-19865"></a>
<a id="trace-19867"></a>
<a id="trace-19878"></a>
<a id="trace-19880"></a>
<a id="trace-19891"></a>
<a id="trace-19893"></a>
<a id="trace-19898"></a>
<a id="trace-19900"></a>
<a id="trace-19966"></a>
<a id="trace-19968"></a>
<a id="trace-19978"></a>
<a id="trace-19980"></a>
<a id="trace-19997"></a>
<a id="trace-19999"></a>
<a id="trace-20003"></a>
<a id="trace-20005"></a>
<a id="trace-20020"></a>
<a id="trace-20022"></a>
<a id="trace-20034"></a>
<a id="trace-20036"></a>
<a id="trace-20104"></a>
<a id="trace-20106"></a>
<a id="trace-20112"></a>
<a id="trace-20114"></a>
<a id="trace-20141"></a>
<a id="trace-20143"></a>
<a id="trace-20146"></a>
<a id="trace-20148"></a>
<a id="trace-20159"></a>
<a id="trace-20161"></a>
<a id="trace-20169"></a>
<a id="trace-20171"></a>
<a id="trace-20179"></a>
<a id="trace-20181"></a>
<a id="trace-20183"></a>
<a id="trace-20185"></a>
<a id="trace-20252"></a>
<a id="trace-20254"></a>
<a id="trace-20263"></a>
<a id="trace-20265"></a>
<a id="trace-20275"></a>
<a id="trace-20277"></a>
<a id="trace-20289"></a>
<a id="trace-20291"></a>
<a id="trace-20294"></a>
<a id="trace-20296"></a>
<a id="trace-20309"></a>
<a id="trace-20311"></a>
<a id="trace-20329"></a>
<a id="trace-20331"></a>
<a id="trace-20333"></a>
<a id="trace-20335"></a>
<a id="trace-20400"></a>
<a id="trace-20402"></a>
<a id="trace-20406"></a>
<a id="trace-20408"></a>
<a id="trace-20416"></a>
<a id="trace-20418"></a>
<a id="trace-20424"></a>
<a id="trace-20426"></a>
<a id="trace-20436"></a>
<a id="trace-20438"></a>
<a id="trace-20442"></a>
<a id="trace-20444"></a>
<a id="trace-20456"></a>
<a id="trace-20458"></a>
<a id="trace-20465"></a>
<a id="trace-20467"></a>
<a id="trace-20475"></a>
<a id="trace-20477"></a>
<a id="trace-20552"></a>
<a id="trace-20554"></a>
<a id="trace-20558"></a>
<a id="trace-20560"></a>
<a id="trace-20566"></a>
<a id="trace-20568"></a>
<a id="trace-20573"></a>
<a id="trace-20575"></a>
<a id="trace-20601"></a>
<a id="trace-20603"></a>
<a id="trace-20607"></a>
<a id="trace-20609"></a>
<a id="trace-20618"></a>
<a id="trace-20620"></a>
<a id="trace-20622"></a>
<a id="trace-20624"></a>
<a id="trace-20693"></a>
<a id="trace-20695"></a>
<a id="trace-20698"></a>
<a id="trace-20700"></a>
<a id="trace-20708"></a>
<a id="trace-20710"></a>
<a id="trace-20721"></a>
<a id="trace-20723"></a>
<a id="trace-20735"></a>
<a id="trace-20737"></a>
<a id="trace-20739"></a>
<a id="trace-20741"></a>
<a id="trace-20751"></a>
<a id="trace-20753"></a>
<a id="trace-20760"></a>
<a id="trace-20762"></a>
<a id="trace-20771"></a>
<a id="trace-20773"></a>
<a id="trace-20838"></a>
<a id="trace-20840"></a>
<a id="trace-20843"></a>
<a id="trace-20845"></a>
<a id="trace-20863"></a>
<a id="trace-20865"></a>
<a id="trace-20876"></a>
<a id="trace-20878"></a>
<a id="trace-20882"></a>
<a id="trace-20884"></a>
<a id="trace-20902"></a>
<a id="trace-20904"></a>
<a id="trace-20913"></a>
<a id="trace-20915"></a>
<a id="trace-20984"></a>
<a id="trace-20986"></a>
<a id="trace-20992"></a>
<a id="trace-20994"></a>
<a id="trace-21001"></a>
<a id="trace-21003"></a>
<a id="trace-21010"></a>
<a id="trace-21012"></a>
<a id="trace-21021"></a>
<a id="trace-21023"></a>
<a id="trace-21046"></a>
<a id="trace-21048"></a>
<a id="trace-21062"></a>
<a id="trace-21064"></a>
<a id="trace-21131"></a>
<a id="trace-21133"></a>
<a id="trace-21137"></a>
<a id="trace-21139"></a>
<a id="trace-21156"></a>
<a id="trace-21158"></a>
<a id="trace-21171"></a>
<a id="trace-21173"></a>
<a id="trace-21183"></a>
<a id="trace-21185"></a>
<a id="trace-21189"></a>
<a id="trace-21191"></a>
<a id="trace-21207"></a>
<a id="trace-21209"></a>
<a id="trace-21274"></a>
<a id="trace-21276"></a>
<a id="trace-21296"></a>
<a id="trace-21298"></a>
<a id="trace-21308"></a>
<a id="trace-21310"></a>
<a id="trace-21332"></a>
<a id="trace-21334"></a>
<a id="trace-21341"></a>
<a id="trace-21343"></a>
<a id="trace-21348"></a>
<a id="trace-21350"></a>
<a id="trace-21414"></a>
<a id="trace-21416"></a>
<a id="trace-21421"></a>
<a id="trace-21423"></a>
<a id="trace-21439"></a>
<a id="trace-21441"></a>
<a id="trace-21450"></a>
<a id="trace-21452"></a>
<a id="trace-21469"></a>
<a id="trace-21471"></a>
<a id="trace-21483"></a>
<a id="trace-21485"></a>
<a id="trace-21558"></a>
<a id="trace-21560"></a>
<a id="trace-21565"></a>
<a id="trace-21567"></a>
<a id="trace-21578"></a>
<a id="trace-21580"></a>
<a id="trace-21593"></a>
<a id="trace-21595"></a>
<a id="trace-21598"></a>
<a id="trace-21600"></a>
<a id="trace-21618"></a>
<a id="trace-21620"></a>
<a id="trace-21635"></a>
<a id="trace-21637"></a>
<a id="trace-21705"></a>
<a id="trace-21707"></a>
<a id="trace-21716"></a>
<a id="trace-21718"></a>
<a id="trace-21726"></a>
<a id="trace-21728"></a>
<a id="trace-21741"></a>
<a id="trace-21743"></a>
<a id="trace-21755"></a>
<a id="trace-21757"></a>
<a id="trace-21770"></a>
<a id="trace-21772"></a>
<a id="trace-21780"></a>
<a id="trace-21782"></a>
<a id="trace-21844"></a>
<a id="trace-21846"></a>
<a id="trace-21862"></a>
<a id="trace-21864"></a>
<a id="trace-21880"></a>
<a id="trace-21882"></a>
<a id="trace-21884"></a>
<a id="trace-21886"></a>
<a id="trace-21897"></a>
<a id="trace-21899"></a>
<a id="trace-21907"></a>
<a id="trace-21909"></a>
<a id="trace-21917"></a>
<a id="trace-21919"></a>
<a id="trace-21923"></a>
<a id="trace-21925"></a>
- 5.70s–289.80s (×888), actor 37, squad 4 (trace 938): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 753. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625256004234635, 'next_transition': 976}.
<a id="trace-1383"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1383): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1192. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724798762976573, 'next_transition': 1723}.
<a id="trace-1384"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1384): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1192. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724798762976573, 'next_transition': 1723}.
<a id="trace-1723"></a>
<a id="trace-1725"></a>
<a id="trace-1743"></a>
<a id="trace-1745"></a>
<a id="trace-1779"></a>
<a id="trace-1781"></a>
<a id="trace-1799"></a>
<a id="trace-1801"></a>
<a id="trace-2268"></a>
<a id="trace-2270"></a>
<a id="trace-2454"></a>
<a id="trace-2456"></a>
<a id="trace-2738"></a>
<a id="trace-2740"></a>
<a id="trace-2908"></a>
<a id="trace-2910"></a>
- 13.20s–16.75s (×16), actor 5, squad 0 (trace 1723): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1197. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41344887927848795, 'next_transition': 1743}.
<a id="trace-1812"></a>
- 14.90s–14.90s (×1), actor 8, squad 1 (trace 1812): ReactToContact: cover and return fire. Knowledge: actor memory at 10.00s, trace 1200. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150014525760161, 'next_transition': 2003}.
<a id="trace-1813"></a>
- 14.90s–14.90s (×1), actor 8, squad 1 (trace 1813): bounding overwatch. Knowledge: actor memory at 10.00s, trace 1200. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150014525760161, 'next_transition': 2003}.
<a id="trace-1814"></a>
<a id="trace-2003"></a>
<a id="trace-2131"></a>
<a id="trace-2278"></a>
<a id="trace-2487"></a>
<a id="trace-2607"></a>
<a id="trace-2760"></a>
- 14.90s–16.50s (×7), actor 8, squad 1 (trace 1814): new contact inside 100 m. Knowledge: actor memory at 10.00s, trace 1200. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150014525760161, 'next_transition': 2003}.
<a id="trace-2913"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2913): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1937. Next observer evidence: {'until': 17.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9449943686307054, 'next_transition': 3358}.
<a id="trace-2914"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2914): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1937. Next observer evidence: {'until': 17.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9449943686307054, 'next_transition': 3358}.
<a id="trace-2915"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2915): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1937. Next observer evidence: {'until': 17.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9449943686307054, 'next_transition': 3358}.
<a id="trace-3358"></a>
<a id="trace-3360"></a>
- 17.25s–17.25s (×2), actor 5, squad 0 (trace 3358): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1942. Next observer evidence: None.
<a id="trace-3374"></a>
<a id="trace-3810"></a>
- 17.35s–17.70s (×2), actor 0, squad 0 (trace 3374): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1937. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5900482439845558, 'next_transition': 3810}.
<a id="trace-4239"></a>
<a id="trace-4241"></a>
<a id="trace-4308"></a>
<a id="trace-4310"></a>
- 17.75s–18.25s (×4), actor 5, squad 0 (trace 4239): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1942. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49558235947861495, 'next_transition': 4308}.
<a id="trace-332"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (events line 332): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-333"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (events line 333): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4342"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 4342): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.621263 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4342. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149951183468233, 'next_transition': 4377}.
<a id="trace-4343"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 4343): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.621263 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4343. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149951183468233, 'next_transition': 4377}.
<a id="trace-4344"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 4344): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.621263 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4344. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6828293248945358, 'next_transition': 4484}.
<a id="trace-4345"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 4345): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.621263 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4345. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6828293248945358, 'next_transition': 4484}.
<a id="trace-4377"></a>
<a id="trace-4379"></a>
<a id="trace-4427"></a>
<a id="trace-4429"></a>
<a id="trace-4467"></a>
<a id="trace-4469"></a>
<a id="trace-4641"></a>
<a id="trace-4643"></a>
<a id="trace-4678"></a>
<a id="trace-4680"></a>
<a id="trace-4720"></a>
<a id="trace-4722"></a>
- 18.75s–21.25s (×12), actor 5, squad 0 (trace 4377): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 18.55s, trace 4345. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5106816090460834, 'next_transition': 4427}.
<a id="trace-4484"></a>
- 19.85s–19.85s (×1), actor 8, squad 1 (trace 4484): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 1945. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2574138097014222, 'next_transition': 4580}.
<a id="trace-4486"></a>
- 19.85s–19.85s (×1), actor 8, squad 1 (trace 4486): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 15.00s, trace 1945. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2574138097014222, 'next_transition': 4580}.
<a id="trace-4580"></a>
- 20.15s–20.15s (×1), actor 8, squad 1 (trace 4580): MoveTactically. Knowledge: actor memory at 20.00s, trace 4507. Next observer evidence: {'until': 22.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3396523625109547, 'next_transition': 5226}.
<a id="trace-4581"></a>
- 20.15s–20.15s (×1), actor 8, squad 1 (trace 4581): received platoon directive. Knowledge: actor memory at 20.00s, trace 4507. Next observer evidence: {'until': 22.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3396523625109547, 'next_transition': 5226}.
<a id="trace-4730"></a>
- 21.40s–21.40s (×1), actor 0, squad 0 (trace 4730): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4499. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2996347231797966, 'next_transition': 4746}.
<a id="trace-4746"></a>
<a id="trace-4748"></a>
<a id="trace-4775"></a>
<a id="trace-4777"></a>
- 21.75s–22.25s (×4), actor 5, squad 0 (trace 4746): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4504. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5726472316334587, 'next_transition': 4775}.
<a id="trace-4792"></a>
- 22.70s–22.70s (×1), actor 0, squad 0 (trace 4792): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 4499. Next observer evidence: None.
<a id="trace-5217"></a>
<a id="trace-5219"></a>
<a id="trace-5357"></a>
<a id="trace-5359"></a>
- 22.75s–23.25s (×4), actor 5, squad 0 (trace 5217): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4504. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.571474370613081, 'next_transition': 5357}.
<a id="trace-5226"></a>
- 22.80s–22.80s (×1), actor 8, squad 1 (trace 5226): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 4507. Next observer evidence: {'until': 26, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.410003421373388, 'next_transition': 5637}.
<a id="trace-5227"></a>
- 22.80s–22.80s (×1), actor 8, squad 1 (trace 5227): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 4507. Next observer evidence: {'until': 26, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.410003421373388, 'next_transition': 5637}.
<a id="trace-5366"></a>
- 23.25s–23.25s (×1), actor 0, squad 0 (trace 5366): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 4499. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38675121721179484, 'next_transition': 5384}.
<a id="trace-5384"></a>
<a id="trace-5386"></a>
<a id="trace-5433"></a>
<a id="trace-5435"></a>
<a id="trace-5467"></a>
<a id="trace-5469"></a>
<a id="trace-5566"></a>
<a id="trace-5568"></a>
<a id="trace-5604"></a>
<a id="trace-5606"></a>
<a id="trace-5650"></a>
<a id="trace-5652"></a>
- 23.75s–26.25s (×12), actor 5, squad 0 (trace 5384): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4504. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.448049286701853, 'next_transition': 5433}.
<a id="trace-5637"></a>
- 26.15s–26.15s (×1), actor 8, squad 1 (trace 5637): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 5488. Next observer evidence: {'until': 27.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2050169103036374, 'next_transition': 6085}.
<a id="trace-5662"></a>
- 26.40s–26.40s (×1), actor 0, squad 0 (trace 5662): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 5480. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.18127304809882608, 'next_transition': 6051}.
<a id="trace-6051"></a>
<a id="trace-6053"></a>
<a id="trace-6070"></a>
<a id="trace-6072"></a>
<a id="trace-6167"></a>
<a id="trace-6169"></a>
<a id="trace-6215"></a>
<a id="trace-6217"></a>
<a id="trace-6263"></a>
<a id="trace-6265"></a>
<a id="trace-6311"></a>
<a id="trace-6313"></a>
<a id="trace-6365"></a>
<a id="trace-6367"></a>
- 26.75s–29.75s (×14), actor 5, squad 0 (trace 6051): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5485. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6588105656804643, 'next_transition': 6070}.
<a id="trace-6085"></a>
- 27.45s–27.45s (×1), actor 8, squad 1 (trace 6085): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 5488. Next observer evidence: {'until': 29.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.77041739892283, 'next_transition': 578}.
<a id="trace-578"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (events line 578): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6378"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (trace 6378): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.686621 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 6378. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31502941612649576, 'next_transition': 6421}.
<a id="trace-6379"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (trace 6379): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.686621 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 6379. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31502941612649576, 'next_transition': 6421}.
<a id="trace-6419"></a>
- 30.05s–30.05s (×1), actor 1, squad 0 (trace 6419): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 6394. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03676678088858272, 'next_transition': 6493}.
<a id="trace-6421"></a>
- 30.05s–30.05s (×1), actor 8, squad 1 (trace 6421): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 30.00s, trace 6401. Next observer evidence: {'until': 30.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512514316534693, 'next_transition': 6535}.
<a id="trace-6493"></a>
<a id="trace-6495"></a>
<a id="trace-6524"></a>
<a id="trace-6526"></a>
<a id="trace-6615"></a>
<a id="trace-6617"></a>
<a id="trace-6641"></a>
<a id="trace-6643"></a>
<a id="trace-6664"></a>
<a id="trace-6666"></a>
<a id="trace-6691"></a>
<a id="trace-6693"></a>
<a id="trace-6704"></a>
<a id="trace-6706"></a>
<a id="trace-6720"></a>
<a id="trace-6722"></a>
<a id="trace-6741"></a>
<a id="trace-6743"></a>
<a id="trace-6756"></a>
<a id="trace-6758"></a>
<a id="trace-6835"></a>
<a id="trace-6837"></a>
<a id="trace-6850"></a>
<a id="trace-6852"></a>
<a id="trace-6869"></a>
<a id="trace-6871"></a>
<a id="trace-6884"></a>
<a id="trace-6886"></a>
<a id="trace-6989"></a>
<a id="trace-6991"></a>
<a id="trace-7011"></a>
<a id="trace-7013"></a>
<a id="trace-7024"></a>
<a id="trace-7026"></a>
<a id="trace-7041"></a>
<a id="trace-7043"></a>
<a id="trace-7077"></a>
<a id="trace-7079"></a>
<a id="trace-7110"></a>
<a id="trace-7112"></a>
<a id="trace-7202"></a>
<a id="trace-7204"></a>
- 30.25s–40.25s (×42), actor 5, squad 0 (trace 6493): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6398. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15345496994982769, 'next_transition': 6524}.
<a id="trace-6535"></a>
- 30.80s–30.80s (×1), actor 8, squad 1 (trace 6535): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 6401. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6551}.
<a id="trace-6537"></a>
- 30.80s–30.80s (×1), actor 8, squad 1 (trace 6537): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 30.00s, trace 6401. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6551}.
<a id="trace-6551"></a>
- 31.10s–31.10s (×1), actor 8, squad 1 (trace 6551): MoveTactically. Knowledge: actor memory at 30.00s, trace 6401. Next observer evidence: {'until': 37.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 7.151947344080492, 'next_transition': 6898}.
<a id="trace-6552"></a>
- 31.10s–31.10s (×1), actor 8, squad 1 (trace 6552): received platoon directive. Knowledge: actor memory at 30.00s, trace 6401. Next observer evidence: {'until': 37.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 7.151947344080492, 'next_transition': 6898}.
<a id="trace-6898"></a>
- 37.20s–37.20s (×1), actor 8, squad 1 (trace 6898): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 35.00s, trace 6773. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.186298318578209, 'next_transition': 7425}.
<a id="trace-7213"></a>
- 40.35s–40.35s (×1), actor 1, squad 0 (trace 7213): no progress: eligible movement budget expired; contract to column. Knowledge: actor memory at 40.00s, trace 7131. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11946715792404625, 'next_transition': 7315}.
<a id="trace-7315"></a>
<a id="trace-7317"></a>
<a id="trace-7342"></a>
<a id="trace-7344"></a>
- 40.75s–41.25s (×4), actor 5, squad 0 (trace 7315): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7135. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10740430016473991, 'next_transition': 7342}.
<a id="trace-7362"></a>
- 41.60s–41.60s (×1), actor 1, squad 0 (trace 7362): NeedSupport. Knowledge: actor memory at 40.00s, trace 7131. Next observer evidence: None.
<a id="trace-7376"></a>
<a id="trace-7378"></a>
<a id="trace-7405"></a>
<a id="trace-7407"></a>
<a id="trace-7484"></a>
<a id="trace-7486"></a>
- 41.75s–42.75s (×6), actor 5, squad 0 (trace 7376): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7135. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00013333333333302258, 'next_transition': 7405}.
<a id="trace-7425"></a>
- 42.60s–42.60s (×1), actor 8, squad 1 (trace 7425): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 40.00s, trace 7138. Next observer evidence: {'until': 42.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7502}.
<a id="trace-7500"></a>
- 42.90s–42.90s (×1), actor 1, squad 0 (trace 7500): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 40.00s, trace 7131. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8393}.
<a id="trace-7502"></a>
- 42.90s–42.90s (×1), actor 8, squad 1 (trace 7502): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 7138. Next observer evidence: None.
<a id="trace-7503"></a>
- 42.90s–42.90s (×1), actor 8, squad 1 (trace 7503): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 7138. Next observer evidence: None.
<a id="trace-8380"></a>
- 42.95s–42.95s (×1), actor 8, squad 1 (trace 8380): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 40.00s, trace 7138. Next observer evidence: {'until': 47, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.531425133123112, 'next_transition': 807}.
<a id="trace-8393"></a>
<a id="trace-8395"></a>
- 43.25s–43.25s (×2), actor 5, squad 0 (trace 8393): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7135. Next observer evidence: {'until': 43.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8414}.
<a id="trace-8414"></a>
- 43.50s–43.50s (×1), actor 1, squad 0 (trace 8414): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 7131. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05141718108872898, 'next_transition': 8621}.
<a id="trace-8419"></a>
- 43.50s–43.50s (×1), actor 1, squad 0 (trace 8419): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 7131. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05141718108872898, 'next_transition': 8621}.
<a id="trace-8420"></a>
- 43.50s–43.50s (×1), actor 1, squad 0 (trace 8420): Reorganise complete: known contact. Knowledge: actor memory at 40.00s, trace 7131. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05141718108872898, 'next_transition': 8621}.
<a id="trace-8621"></a>
<a id="trace-8623"></a>
<a id="trace-8649"></a>
<a id="trace-8651"></a>
<a id="trace-8683"></a>
<a id="trace-8685"></a>
- 43.75s–44.75s (×6), actor 5, squad 0 (trace 8621): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7135. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21135209778024655, 'next_transition': 8649}.
<a id="trace-8721"></a>
- 45.05s–45.05s (×1), actor 5, squad 0 (trace 8721): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 45.05s, trace 8721. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3643441200437871, 'next_transition': 8774}.
<a id="trace-8774"></a>
<a id="trace-8776"></a>
<a id="trace-8787"></a>
<a id="trace-8789"></a>
<a id="trace-8824"></a>
<a id="trace-8826"></a>
<a id="trace-8841"></a>
<a id="trace-8843"></a>
<a id="trace-8862"></a>
<a id="trace-8864"></a>
- 45.25s–47.25s (×10), actor 5, squad 0 (trace 8774): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.05s, trace 8721. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5712076039630246, 'next_transition': 8787}.
<a id="trace-807"></a>
- 47.10s–47.10s (×1), actor 5, squad 1 (events line 807): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8853"></a>
- 47.10s–47.10s (×1), actor 5, squad 1 (trace 8853): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.489261 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 47.10s, trace 8853. Next observer evidence: {'until': 49, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.339362235293697, 'next_transition': 9513}.
<a id="trace-8854"></a>
- 47.10s–47.10s (×1), actor 5, squad 1 (trace 8854): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.489261 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 47.10s, trace 8854. Next observer evidence: {'until': 49, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.339362235293697, 'next_transition': 9513}.
<a id="trace-8872"></a>
- 47.45s–47.45s (×1), actor 1, squad 0 (trace 8872): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 8696. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07560001653438998, 'next_transition': 9234}.
<a id="trace-8874"></a>
- 47.45s–47.45s (×1), actor 1, squad 0 (trace 8874): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 8696. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07560001653438998, 'next_transition': 9234}.
<a id="trace-9136"></a>
- 47.45s–47.45s (×1), actor 1, squad 0 (trace 9136): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 45.00s, trace 8696. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07560001653438998, 'next_transition': 9234}.
<a id="trace-9137"></a>
- 47.45s–47.45s (×1), actor 1, squad 0 (trace 9137): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 45.00s, trace 8696. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07560001653438998, 'next_transition': 9234}.
<a id="trace-9214"></a>
- 47.45s–47.45s (×1), actor 1, squad 0 (trace 9214): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 45.00s, trace 8696. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07560001653438998, 'next_transition': 9234}.
<a id="trace-9215"></a>
- 47.45s–47.45s (×1), actor 1, squad 0 (trace 9215): Assaulting. Knowledge: actor memory at 45.00s, trace 8696. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07560001653438998, 'next_transition': 9234}.
<a id="trace-9234"></a>
- 47.70s–47.70s (×1), actor 1, squad 0 (trace 9234): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 8696. Next observer evidence: None.
<a id="trace-9239"></a>
- 47.70s–47.70s (×1), actor 1, squad 0 (trace 9239): MoveTactically. Knowledge: actor memory at 45.00s, trace 8696. Next observer evidence: None.
<a id="trace-9240"></a>
- 47.70s–47.70s (×1), actor 1, squad 0 (trace 9240): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 45.00s, trace 8696. Next observer evidence: None.
<a id="trace-9430"></a>
<a id="trace-9432"></a>
<a id="trace-9453"></a>
<a id="trace-9455"></a>
<a id="trace-9485"></a>
<a id="trace-9487"></a>
<a id="trace-9575"></a>
<a id="trace-9577"></a>
<a id="trace-9590"></a>
<a id="trace-9592"></a>
<a id="trace-9689"></a>
<a id="trace-9691"></a>
<a id="trace-9717"></a>
<a id="trace-9719"></a>
<a id="trace-9896"></a>
<a id="trace-9898"></a>
<a id="trace-9921"></a>
<a id="trace-9923"></a>
<a id="trace-9951"></a>
<a id="trace-9953"></a>
<a id="trace-9973"></a>
<a id="trace-9975"></a>
<a id="trace-10022"></a>
<a id="trace-10024"></a>
<a id="trace-10061"></a>
<a id="trace-10063"></a>
<a id="trace-10116"></a>
<a id="trace-10118"></a>
- 47.75s–54.25s (×28), actor 5, squad 0 (trace 9430): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 47.10s, trace 8854. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.01890000360082247, 'next_transition': 9453}.
<a id="trace-9513"></a>
- 49.15s–49.15s (×1), actor 8, squad 1 (trace 9513): MoveTactically. Knowledge: actor memory at 45.00s, trace 8702. Next observer evidence: {'until': 51, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.8912890234374706, 'next_transition': 9731}.
<a id="trace-9514"></a>
- 49.15s–49.15s (×1), actor 8, squad 1 (trace 9514): received platoon directive. Knowledge: actor memory at 45.00s, trace 8702. Next observer evidence: {'until': 51, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.8912890234374706, 'next_transition': 9731}.
<a id="trace-9731"></a>
- 51.00s–51.00s (×1), actor 8, squad 1 (trace 9731): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 9615. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.380394227964257, 'next_transition': 10264}.
<a id="trace-9732"></a>
- 51.00s–51.00s (×1), actor 8, squad 1 (trace 9732): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 50.00s, trace 9615. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.380394227964257, 'next_transition': 10264}.
<a id="trace-10126"></a>
- 54.30s–54.30s (×1), actor 1, squad 0 (trace 10126): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 50.00s, trace 9609. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0010166666666666657, 'next_transition': 10399}.
<a id="trace-10264"></a>
- 54.35s–54.35s (×1), actor 8, squad 1 (trace 10264): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 9615. Next observer evidence: {'until': 66.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 16.280647302520926, 'next_transition': 12208}.
<a id="trace-10265"></a>
- 54.35s–54.35s (×1), actor 8, squad 1 (trace 10265): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 9615. Next observer evidence: {'until': 66.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 16.280647302520926, 'next_transition': 12208}.
<a id="trace-10399"></a>
<a id="trace-10401"></a>
<a id="trace-10536"></a>
<a id="trace-10538"></a>
<a id="trace-10598"></a>
<a id="trace-10600"></a>
<a id="trace-10655"></a>
<a id="trace-10657"></a>
<a id="trace-10732"></a>
<a id="trace-10734"></a>
<a id="trace-10771"></a>
<a id="trace-10773"></a>
<a id="trace-10809"></a>
<a id="trace-10811"></a>
<a id="trace-10854"></a>
<a id="trace-10856"></a>
<a id="trace-10907"></a>
<a id="trace-10909"></a>
<a id="trace-10951"></a>
<a id="trace-10953"></a>
- 54.75s–59.25s (×20), actor 5, squad 0 (trace 10399): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 9612. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.212533418115443, 'next_transition': 10536}.
<a id="trace-10958"></a>
- 59.25s–59.25s (×1), actor 1, squad 0 (trace 10958): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 55.00s, trace 10426. Next observer evidence: {'until': 59.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2385673305875753, 'next_transition': 11141}.
<a id="trace-11141"></a>
<a id="trace-11143"></a>
<a id="trace-11277"></a>
<a id="trace-11279"></a>
<a id="trace-11337"></a>
<a id="trace-11339"></a>
<a id="trace-11396"></a>
<a id="trace-11398"></a>
<a id="trace-11449"></a>
<a id="trace-11451"></a>
<a id="trace-11495"></a>
<a id="trace-11497"></a>
<a id="trace-11535"></a>
<a id="trace-11537"></a>
- 59.75s–62.75s (×14), actor 5, squad 0 (trace 11141): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 10429. Next observer evidence: {'until': 60.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4739687313642884, 'next_transition': 11277}.
<a id="trace-11561"></a>
- 63.15s–63.15s (×1), actor 1, squad 0 (trace 11561): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 60.00s, trace 11175. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11942}.
<a id="trace-11935"></a>
- 63.15s–63.15s (×1), actor 1, squad 0 (trace 11935): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 60.00s, trace 11175. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11942}.
<a id="trace-11942"></a>
<a id="trace-11944"></a>
<a id="trace-11958"></a>
<a id="trace-11960"></a>
<a id="trace-11978"></a>
<a id="trace-11980"></a>
<a id="trace-11990"></a>
<a id="trace-11992"></a>
<a id="trace-12067"></a>
<a id="trace-12069"></a>
<a id="trace-12101"></a>
<a id="trace-12103"></a>
<a id="trace-12150"></a>
<a id="trace-12152"></a>
<a id="trace-12198"></a>
<a id="trace-12200"></a>
<a id="trace-12230"></a>
<a id="trace-12232"></a>
<a id="trace-12265"></a>
<a id="trace-12267"></a>
<a id="trace-12309"></a>
<a id="trace-12311"></a>
- 63.25s–68.25s (×22), actor 5, squad 0 (trace 11942): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 11178. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11958}.
<a id="trace-12208"></a>
- 66.80s–66.80s (×1), actor 9, squad 1 (trace 12208): NeedSupport. Knowledge: actor memory at 65.00s, trace 12004. Next observer evidence: {'until': 68.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.2805323729541223, 'next_transition': 14849}.
<a id="trace-12324"></a>
- 68.40s–68.40s (×1), actor 1, squad 0 (trace 12324): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 11998. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07138333333333335, 'next_transition': 14836}.
<a id="trace-12325"></a>
- 68.40s–68.40s (×1), actor 1, squad 0 (trace 12325): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 65.00s, trace 11998. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07138333333333335, 'next_transition': 14836}.
<a id="trace-14836"></a>
<a id="trace-14838"></a>
<a id="trace-14870"></a>
<a id="trace-14872"></a>
<a id="trace-14891"></a>
<a id="trace-14893"></a>
<a id="trace-14980"></a>
<a id="trace-14982"></a>
<a id="trace-14995"></a>
<a id="trace-14997"></a>
<a id="trace-15014"></a>
<a id="trace-15016"></a>
- 68.75s–71.25s (×12), actor 5, squad 0 (trace 14836): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 12001. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11497500000000027, 'next_transition': 14870}.
<a id="trace-14849"></a>
- 68.90s–68.90s (×1), actor 9, squad 1 (trace 14849): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 12004. Next observer evidence: {'until': 98.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1632}.
<a id="trace-14850"></a>
- 68.90s–68.90s (×1), actor 9, squad 1 (trace 14850): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 12004. Next observer evidence: {'until': 98.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1632}.
<a id="trace-1405"></a>
- 71.75s–71.75s (×1), actor 5, squad 0 (events line 1405): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630018413354443, 'next_transition': 15054}.
<a id="trace-15031"></a>
<a id="trace-15033"></a>
- 71.75s–71.75s (×2), actor 5, squad 0 (trace 15031): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 14914. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630018413354443, 'next_transition': 15054}.
<a id="trace-15039"></a>
- 71.75s–71.75s (×1), actor 5, squad 0 (trace 15039): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.396714 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 71.75s, trace 15039. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630018413354443, 'next_transition': 15054}.
<a id="trace-15040"></a>
- 71.75s–71.75s (×1), actor 5, squad 0 (trace 15040): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.396714 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 71.75s, trace 15040. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630018413354443, 'next_transition': 15054}.
<a id="trace-15054"></a>
<a id="trace-15056"></a>
<a id="trace-15084"></a>
<a id="trace-15086"></a>
<a id="trace-15101"></a>
<a id="trace-15103"></a>
<a id="trace-15124"></a>
<a id="trace-15126"></a>
<a id="trace-15156"></a>
<a id="trace-15158"></a>
<a id="trace-15178"></a>
<a id="trace-15180"></a>
<a id="trace-15250"></a>
<a id="trace-15252"></a>
<a id="trace-15262"></a>
<a id="trace-15264"></a>
<a id="trace-15280"></a>
<a id="trace-15282"></a>
<a id="trace-15293"></a>
<a id="trace-15295"></a>
<a id="trace-15312"></a>
<a id="trace-15314"></a>
<a id="trace-15328"></a>
<a id="trace-15330"></a>
<a id="trace-15344"></a>
<a id="trace-15346"></a>
<a id="trace-15365"></a>
<a id="trace-15367"></a>
<a id="trace-15384"></a>
<a id="trace-15386"></a>
<a id="trace-15394"></a>
<a id="trace-15396"></a>
<a id="trace-15472"></a>
<a id="trace-15474"></a>
<a id="trace-15483"></a>
<a id="trace-15485"></a>
<a id="trace-15500"></a>
<a id="trace-15502"></a>
- 72.25s–81.25s (×38), actor 5, squad 0 (trace 15054): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 71.75s, trace 15040. Next observer evidence: {'until': 72.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49526355085657753, 'next_transition': 15084}.
<a id="trace-15506"></a>
- 81.35s–81.35s (×1), actor 5, squad 0 (trace 15506): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.243566 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 81.35s, trace 15506. Next observer evidence: None.
<a id="trace-15507"></a>
- 81.35s–81.35s (×1), actor 5, squad 0 (trace 15507): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.243566 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 81.35s, trace 15507. Next observer evidence: None.
<a id="trace-1506"></a>
- 81.35s–81.35s (×1), actor 5, squad 0 (events line 1506): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7443869959881858, 'next_transition': 15521}.
<a id="trace-15521"></a>
<a id="trace-15523"></a>
<a id="trace-15538"></a>
<a id="trace-15540"></a>
<a id="trace-15550"></a>
<a id="trace-15552"></a>
<a id="trace-15565"></a>
<a id="trace-15567"></a>
<a id="trace-15583"></a>
<a id="trace-15585"></a>
<a id="trace-15602"></a>
<a id="trace-15604"></a>
<a id="trace-15613"></a>
<a id="trace-15615"></a>
<a id="trace-15684"></a>
<a id="trace-15686"></a>
<a id="trace-15698"></a>
<a id="trace-15700"></a>
<a id="trace-15709"></a>
<a id="trace-15711"></a>
- 81.75s–86.25s (×20), actor 5, squad 0 (trace 15521): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 81.35s, trace 15507. Next observer evidence: {'until': 82.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.47249527855445284, 'next_transition': 15538}.
<a id="trace-15717"></a>
- 86.50s–86.50s (×1), actor 7, squad 0 (trace 15717): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 85.00s, trace 15624. Next observer evidence: None.
<a id="trace-15720"></a>
- 86.55s–86.55s (×1), actor 7, squad 0 (trace 15720): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 85.00s, trace 15624. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21002037681562688, 'next_transition': 15818}.
<a id="trace-15721"></a>
- 86.55s–86.55s (×1), actor 7, squad 0 (trace 15721): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 15624. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21002037681562688, 'next_transition': 15818}.
<a id="trace-15818"></a>
<a id="trace-15820"></a>
<a id="trace-15834"></a>
<a id="trace-15836"></a>
<a id="trace-15850"></a>
<a id="trace-15852"></a>
<a id="trace-15865"></a>
<a id="trace-15867"></a>
<a id="trace-15882"></a>
<a id="trace-15884"></a>
<a id="trace-15909"></a>
<a id="trace-15911"></a>
<a id="trace-15926"></a>
<a id="trace-15928"></a>
<a id="trace-15995"></a>
<a id="trace-15997"></a>
<a id="trace-16005"></a>
<a id="trace-16007"></a>
<a id="trace-16017"></a>
<a id="trace-16019"></a>
<a id="trace-16030"></a>
<a id="trace-16032"></a>
<a id="trace-16044"></a>
<a id="trace-16046"></a>
<a id="trace-16055"></a>
<a id="trace-16057"></a>
<a id="trace-16069"></a>
<a id="trace-16071"></a>
<a id="trace-16079"></a>
<a id="trace-16081"></a>
<a id="trace-16095"></a>
<a id="trace-16097"></a>
<a id="trace-16107"></a>
<a id="trace-16109"></a>
<a id="trace-16181"></a>
<a id="trace-16183"></a>
<a id="trace-16194"></a>
<a id="trace-16196"></a>
<a id="trace-16207"></a>
<a id="trace-16209"></a>
<a id="trace-16221"></a>
<a id="trace-16223"></a>
<a id="trace-16230"></a>
<a id="trace-16232"></a>
<a id="trace-16246"></a>
<a id="trace-16248"></a>
<a id="trace-16259"></a>
<a id="trace-16261"></a>
<a id="trace-16275"></a>
<a id="trace-16283"></a>
<a id="trace-16349"></a>
<a id="trace-16355"></a>
<a id="trace-16365"></a>
<a id="trace-16371"></a>
<a id="trace-16379"></a>
<a id="trace-16385"></a>
<a id="trace-16398"></a>
<a id="trace-16407"></a>
<a id="trace-16421"></a>
<a id="trace-16430"></a>
<a id="trace-16494"></a>
<a id="trace-16516"></a>
<a id="trace-16542"></a>
<a id="trace-16562"></a>
<a id="trace-16579"></a>
<a id="trace-16648"></a>
<a id="trace-16659"></a>
<a id="trace-16676"></a>
<a id="trace-16700"></a>
<a id="trace-16720"></a>
<a id="trace-16786"></a>
<a id="trace-16805"></a>
<a id="trace-16879"></a>
<a id="trace-16900"></a>
<a id="trace-16920"></a>
<a id="trace-16994"></a>
<a id="trace-17013"></a>
<a id="trace-17031"></a>
<a id="trace-17048"></a>
<a id="trace-17066"></a>
<a id="trace-17138"></a>
<a id="trace-17162"></a>
<a id="trace-17187"></a>
<a id="trace-17216"></a>
<a id="trace-17236"></a>
<a id="trace-17306"></a>
<a id="trace-17321"></a>
<a id="trace-17340"></a>
<a id="trace-17364"></a>
<a id="trace-17385"></a>
<a id="trace-17462"></a>
<a id="trace-17473"></a>
<a id="trace-17486"></a>
<a id="trace-17502"></a>
<a id="trace-17522"></a>
<a id="trace-17594"></a>
<a id="trace-17612"></a>
<a id="trace-17634"></a>
<a id="trace-17648"></a>
<a id="trace-17665"></a>
<a id="trace-17735"></a>
<a id="trace-17754"></a>
<a id="trace-17776"></a>
<a id="trace-17794"></a>
<a id="trace-17815"></a>
<a id="trace-17888"></a>
<a id="trace-17901"></a>
<a id="trace-17920"></a>
<a id="trace-17943"></a>
<a id="trace-17963"></a>
<a id="trace-18032"></a>
<a id="trace-18052"></a>
<a id="trace-18070"></a>
<a id="trace-18086"></a>
<a id="trace-18111"></a>
<a id="trace-18179"></a>
<a id="trace-18197"></a>
<a id="trace-18215"></a>
<a id="trace-18238"></a>
<a id="trace-18257"></a>
<a id="trace-18327"></a>
<a id="trace-18344"></a>
<a id="trace-18363"></a>
<a id="trace-18381"></a>
<a id="trace-18401"></a>
<a id="trace-18474"></a>
<a id="trace-18493"></a>
<a id="trace-18516"></a>
<a id="trace-18532"></a>
<a id="trace-18553"></a>
<a id="trace-18627"></a>
<a id="trace-18644"></a>
<a id="trace-18667"></a>
<a id="trace-18684"></a>
<a id="trace-18703"></a>
<a id="trace-18773"></a>
<a id="trace-18797"></a>
<a id="trace-18814"></a>
<a id="trace-18834"></a>
<a id="trace-18855"></a>
<a id="trace-18925"></a>
<a id="trace-18945"></a>
<a id="trace-18969"></a>
<a id="trace-18985"></a>
<a id="trace-19002"></a>
<a id="trace-19071"></a>
<a id="trace-19089"></a>
<a id="trace-19117"></a>
<a id="trace-19134"></a>
<a id="trace-19153"></a>
<a id="trace-19222"></a>
<a id="trace-19240"></a>
<a id="trace-19278"></a>
<a id="trace-19295"></a>
<a id="trace-19366"></a>
<a id="trace-19385"></a>
<a id="trace-19405"></a>
<a id="trace-19422"></a>
<a id="trace-19439"></a>
<a id="trace-19517"></a>
<a id="trace-19534"></a>
<a id="trace-19557"></a>
<a id="trace-19568"></a>
<a id="trace-19589"></a>
<a id="trace-19661"></a>
<a id="trace-19677"></a>
<a id="trace-19703"></a>
<a id="trace-19718"></a>
<a id="trace-19738"></a>
<a id="trace-19808"></a>
<a id="trace-19825"></a>
<a id="trace-19846"></a>
<a id="trace-19861"></a>
<a id="trace-19887"></a>
<a id="trace-19962"></a>
<a id="trace-19974"></a>
<a id="trace-19993"></a>
<a id="trace-20009"></a>
<a id="trace-20026"></a>
<a id="trace-20100"></a>
<a id="trace-20119"></a>
<a id="trace-20137"></a>
<a id="trace-20155"></a>
<a id="trace-20175"></a>
<a id="trace-20245"></a>
<a id="trace-20259"></a>
<a id="trace-20285"></a>
<a id="trace-20305"></a>
<a id="trace-20325"></a>
<a id="trace-20396"></a>
<a id="trace-20411"></a>
<a id="trace-20432"></a>
<a id="trace-20452"></a>
<a id="trace-20471"></a>
<a id="trace-20548"></a>
<a id="trace-20562"></a>
<a id="trace-20584"></a>
<a id="trace-20597"></a>
<a id="trace-20614"></a>
<a id="trace-20689"></a>
<a id="trace-20704"></a>
<a id="trace-20731"></a>
<a id="trace-20747"></a>
<a id="trace-20765"></a>
<a id="trace-20834"></a>
<a id="trace-20849"></a>
<a id="trace-20872"></a>
<a id="trace-20892"></a>
<a id="trace-20909"></a>
<a id="trace-20980"></a>
<a id="trace-20997"></a>
<a id="trace-21017"></a>
<a id="trace-21038"></a>
<a id="trace-21053"></a>
<a id="trace-21127"></a>
<a id="trace-21145"></a>
<a id="trace-21164"></a>
<a id="trace-21179"></a>
<a id="trace-21196"></a>
<a id="trace-21270"></a>
<a id="trace-21284"></a>
<a id="trace-21304"></a>
<a id="trace-21323"></a>
<a id="trace-21337"></a>
<a id="trace-21410"></a>
<a id="trace-21429"></a>
<a id="trace-21446"></a>
<a id="trace-21465"></a>
<a id="trace-21479"></a>
<a id="trace-21554"></a>
<a id="trace-21589"></a>
<a id="trace-21610"></a>
<a id="trace-21625"></a>
<a id="trace-21696"></a>
<a id="trace-21712"></a>
<a id="trace-21737"></a>
<a id="trace-21751"></a>
<a id="trace-21766"></a>
<a id="trace-21840"></a>
<a id="trace-21858"></a>
<a id="trace-21876"></a>
<a id="trace-21893"></a>
<a id="trace-21913"></a>
<a id="trace-21984"></a>
<a id="trace-21995"></a>
<a id="trace-22005"></a>
<a id="trace-22013"></a>
<a id="trace-22024"></a>
<a id="trace-22090"></a>
<a id="trace-22102"></a>
<a id="trace-22119"></a>
<a id="trace-22133"></a>
<a id="trace-22144"></a>
<a id="trace-22213"></a>
<a id="trace-22227"></a>
<a id="trace-22242"></a>
<a id="trace-22264"></a>
<a id="trace-22287"></a>
<a id="trace-22357"></a>
<a id="trace-22378"></a>
<a id="trace-22398"></a>
<a id="trace-22413"></a>
<a id="trace-22432"></a>
<a id="trace-22508"></a>
<a id="trace-22527"></a>
<a id="trace-22548"></a>
<a id="trace-22569"></a>
<a id="trace-22581"></a>
<a id="trace-22655"></a>
<a id="trace-22672"></a>
<a id="trace-22694"></a>
<a id="trace-22717"></a>
<a id="trace-22740"></a>
<a id="trace-22805"></a>
<a id="trace-22823"></a>
<a id="trace-22843"></a>
<a id="trace-22860"></a>
<a id="trace-22889"></a>
<a id="trace-22961"></a>
<a id="trace-22974"></a>
<a id="trace-22994"></a>
<a id="trace-23014"></a>
<a id="trace-23032"></a>
<a id="trace-23104"></a>
<a id="trace-23129"></a>
<a id="trace-23144"></a>
<a id="trace-23165"></a>
<a id="trace-23185"></a>
<a id="trace-23254"></a>
<a id="trace-23272"></a>
<a id="trace-23297"></a>
<a id="trace-23312"></a>
<a id="trace-23336"></a>
<a id="trace-23407"></a>
<a id="trace-23424"></a>
<a id="trace-23445"></a>
<a id="trace-23463"></a>
<a id="trace-23481"></a>
<a id="trace-23557"></a>
<a id="trace-23577"></a>
<a id="trace-23595"></a>
<a id="trace-23614"></a>
<a id="trace-23633"></a>
<a id="trace-23700"></a>
<a id="trace-23721"></a>
<a id="trace-23750"></a>
<a id="trace-23765"></a>
<a id="trace-23785"></a>
<a id="trace-23856"></a>
<a id="trace-23867"></a>
<a id="trace-23897"></a>
<a id="trace-23915"></a>
<a id="trace-23937"></a>
- 86.75s–359.30s (×313), actor 5, squad 0 (trace 15818): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 15622. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3247205868721403, 'next_transition': 15834}.
<a id="trace-1632"></a>
- 108.05s–108.05s (×1), actor 5, squad 1 (events line 1632): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16671}.
<a id="trace-16557"></a>
- 108.05s–108.05s (×1), actor 5, squad 1 (trace 16557): renew committed intent (75 s lifetime). Knowledge: actor memory at 108.05s, trace 16557. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16671}.
<a id="trace-16671"></a>
- 112.20s–112.20s (×1), actor 9, squad 1 (trace 16671): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 16593. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1641}.
<a id="trace-1641"></a>
- 115.25s–115.25s (×1), actor 5, squad 1 (events line 1641): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 116.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16810}.
<a id="trace-16793"></a>
- 115.25s–115.25s (×1), actor 5, squad 1 (trace 16793): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.090115 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 115.25s, trace 16793. Next observer evidence: {'until': 116.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16810}.
<a id="trace-16794"></a>
- 115.25s–115.25s (×1), actor 5, squad 1 (trace 16794): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.090115 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 115.25s, trace 16794. Next observer evidence: {'until': 116.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16810}.
<a id="trace-16810"></a>
- 116.45s–116.45s (×1), actor 9, squad 1 (trace 16810): Withdraw to received rally. Knowledge: actor memory at 115.00s, trace 16731. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 17197}.
<a id="trace-16811"></a>
- 116.45s–116.45s (×1), actor 9, squad 1 (trace 16811): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 16731. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 17197}.
<a id="trace-17197"></a>
- 127.70s–127.70s (×1), actor 9, squad 1 (trace 17197): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 125.00s, trace 17083. Next observer evidence: {'until': 157.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1834}.
<a id="trace-17198"></a>
- 127.70s–127.70s (×1), actor 9, squad 1 (trace 17198): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 125.00s, trace 17083. Next observer evidence: {'until': 157.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1834}.
<a id="trace-1834"></a>
- 175.25s–175.25s (×1), actor 5, squad 1 (events line 1834): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2046}.
<a id="trace-18623"></a>
- 175.25s–175.25s (×1), actor 5, squad 1 (trace 18623): renew committed intent (75 s lifetime). Knowledge: actor memory at 175.25s, trace 18623. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2046}.
<a id="trace-2046"></a>
- 236.25s–236.25s (×1), actor 5, squad 1 (events line 2046): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2239}.
<a id="trace-20409"></a>
- 236.25s–236.25s (×1), actor 5, squad 1 (trace 20409): renew committed intent (75 s lifetime). Knowledge: actor memory at 236.25s, trace 20409. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2239}.
<a id="trace-22015"></a>
<a id="trace-22017"></a>
<a id="trace-22026"></a>
<a id="trace-22028"></a>
<a id="trace-22092"></a>
<a id="trace-22094"></a>
<a id="trace-22104"></a>
<a id="trace-22106"></a>
<a id="trace-22121"></a>
<a id="trace-22123"></a>
<a id="trace-22135"></a>
<a id="trace-22137"></a>
<a id="trace-22146"></a>
<a id="trace-22148"></a>
<a id="trace-22215"></a>
<a id="trace-22217"></a>
<a id="trace-22229"></a>
<a id="trace-22231"></a>
<a id="trace-22244"></a>
<a id="trace-22246"></a>
<a id="trace-22266"></a>
<a id="trace-22268"></a>
<a id="trace-22289"></a>
<a id="trace-22291"></a>
<a id="trace-22359"></a>
<a id="trace-22361"></a>
<a id="trace-22380"></a>
<a id="trace-22382"></a>
<a id="trace-22400"></a>
<a id="trace-22402"></a>
<a id="trace-22415"></a>
<a id="trace-22417"></a>
<a id="trace-22434"></a>
<a id="trace-22436"></a>
<a id="trace-22510"></a>
<a id="trace-22512"></a>
<a id="trace-22529"></a>
<a id="trace-22531"></a>
<a id="trace-22550"></a>
<a id="trace-22552"></a>
<a id="trace-22571"></a>
<a id="trace-22573"></a>
<a id="trace-22583"></a>
<a id="trace-22585"></a>
<a id="trace-22657"></a>
<a id="trace-22659"></a>
<a id="trace-22674"></a>
<a id="trace-22676"></a>
<a id="trace-22696"></a>
<a id="trace-22698"></a>
<a id="trace-22719"></a>
<a id="trace-22721"></a>
<a id="trace-22742"></a>
<a id="trace-22744"></a>
<a id="trace-22807"></a>
<a id="trace-22809"></a>
<a id="trace-22825"></a>
<a id="trace-22827"></a>
<a id="trace-22845"></a>
<a id="trace-22847"></a>
<a id="trace-22862"></a>
<a id="trace-22864"></a>
<a id="trace-22891"></a>
<a id="trace-22893"></a>
<a id="trace-22963"></a>
<a id="trace-22965"></a>
<a id="trace-22976"></a>
<a id="trace-22978"></a>
<a id="trace-22996"></a>
<a id="trace-22998"></a>
<a id="trace-23016"></a>
<a id="trace-23018"></a>
<a id="trace-23034"></a>
<a id="trace-23036"></a>
<a id="trace-23106"></a>
<a id="trace-23108"></a>
<a id="trace-23131"></a>
<a id="trace-23133"></a>
<a id="trace-23146"></a>
<a id="trace-23148"></a>
<a id="trace-23167"></a>
<a id="trace-23169"></a>
<a id="trace-23187"></a>
<a id="trace-23189"></a>
<a id="trace-23256"></a>
<a id="trace-23258"></a>
<a id="trace-23274"></a>
<a id="trace-23276"></a>
<a id="trace-23299"></a>
<a id="trace-23301"></a>
<a id="trace-23314"></a>
<a id="trace-23316"></a>
<a id="trace-23338"></a>
<a id="trace-23340"></a>
<a id="trace-23409"></a>
<a id="trace-23411"></a>
<a id="trace-23426"></a>
<a id="trace-23428"></a>
<a id="trace-23447"></a>
<a id="trace-23449"></a>
<a id="trace-23465"></a>
<a id="trace-23467"></a>
<a id="trace-23483"></a>
<a id="trace-23485"></a>
<a id="trace-23559"></a>
<a id="trace-23561"></a>
<a id="trace-23579"></a>
<a id="trace-23581"></a>
<a id="trace-23597"></a>
<a id="trace-23599"></a>
<a id="trace-23616"></a>
<a id="trace-23618"></a>
<a id="trace-23635"></a>
<a id="trace-23637"></a>
<a id="trace-23702"></a>
<a id="trace-23704"></a>
<a id="trace-23723"></a>
<a id="trace-23725"></a>
<a id="trace-23752"></a>
<a id="trace-23754"></a>
<a id="trace-23767"></a>
<a id="trace-23769"></a>
<a id="trace-23787"></a>
<a id="trace-23789"></a>
<a id="trace-23858"></a>
<a id="trace-23860"></a>
<a id="trace-23869"></a>
<a id="trace-23871"></a>
<a id="trace-23899"></a>
<a id="trace-23901"></a>
<a id="trace-23917"></a>
<a id="trace-23919"></a>
<a id="trace-23939"></a>
<a id="trace-23941"></a>
- 293.30s–359.30s (×134), actor 38, squad 4 (trace 22015): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=38. Knowledge: actor memory at 290.00s, trace 21934. Next observer evidence: {'until': 294.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22026}.
<a id="trace-2239"></a>
- 296.55s–296.55s (×1), actor 5, squad 1 (events line 2239): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22110"></a>
- 296.55s–296.55s (×1), actor 5, squad 1 (trace 22110): renew committed intent (75 s lifetime). Knowledge: actor memory at 296.55s, trace 22110. Next observer evidence: {'until': 326.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2591}.
<a id="trace-2591"></a>
- 356.55s–356.55s (×1), actor 5, squad 1 (events line 2591): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23882"></a>
- 356.55s–356.55s (×1), actor 5, squad 1 (trace 23882): renew committed intent (75 s lifetime). Knowledge: actor memory at 356.55s, trace 23882. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

163 matched order/radio deliveries; 406 explicitly recorded losses; 5 unmatched orders (not classified as lost).
Matched delay: mean 0.425s; maximum 2.050s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1945: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1954: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4342: estimate 4.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4343: estimate 4.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4344: estimate 4.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4345: estimate 4.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 4499: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4504: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4505: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 4507: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4509: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4510: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4511: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4512: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4514: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4515: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4516: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4517: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4518: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5480: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5483: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5485: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5486: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 5488: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5490: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5491: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5492: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5493: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5495: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5496: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5497: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5498: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5499: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 6378: estimate 11.65; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 6379: estimate 11.65; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6394: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6395: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 6396: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6398: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6399: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 6401: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 6402: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6403: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 6404: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 6405: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 6406: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 6407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 6408: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 6409: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 6410: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 6411: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 6412: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 6766: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 6767: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 6768: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 6769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 6770: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 6771: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 6772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 6773: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 6774: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 6775: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 6776: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 6777: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 6778: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 6779: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 6780: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 6781: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 6782: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 6783: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 6784: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 7131: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 7132: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 7133: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7135: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7136: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 7138: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 7139: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7140: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 7141: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 7142: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 7143: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 7144: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 7145: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 7146: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 7147: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 7148: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 7149: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 8696: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 8697: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 8698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 8699: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 8700: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 8701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 8702: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 8703: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 8704: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 8705: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 8706: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 8707: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 8708: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 8709: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 8710: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 8711: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 8712: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 8713: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.05s leader 5, trace 8721: estimate 12.21; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 47.10s leader 5, trace 8853: estimate 12.26; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 47.10s leader 5, trace 8854: estimate 12.26; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 9609: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 9610: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 9611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 9612: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 9613: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 9614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 9615: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 9616: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 9617: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 9618: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 9619: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 9620: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 9621: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 9622: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 9623: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 9624: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 9625: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 9626: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 10426: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 10427: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 10428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 10429: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 10430: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 10431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 10432: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 10433: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 10434: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 10435: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 10436: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 10437: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 10438: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 10439: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 10440: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 10441: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 10442: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 10443: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 11175: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 11176: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 11177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 11178: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 11179: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 11180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 11181: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 11182: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 11183: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 11184: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 11185: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 11186: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 11187: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 11188: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 11189: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 11190: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 11191: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 11192: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 11998: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 11999: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 12000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 12001: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 12002: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 12003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 12004: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 12005: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 12006: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 12007: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 12008: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 12009: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 12010: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 12011: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 12012: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 12013: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 14911: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 14912: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 14913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 14914: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 14915: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 14916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 14917: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 14918: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 14919: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 14920: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 14921: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 14922: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 14923: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 14924: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 14925: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 14926: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 71.75s leader 5, trace 15039: estimate 12.60; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 71.75s leader 5, trace 15040: estimate 12.60; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 15186: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 15187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 15188: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 15189: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 15190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 15191: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 15192: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 15193: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 15194: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 15195: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 15196: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 15197: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 15198: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 15199: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 15200: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 15404: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 15405: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 15406: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 15407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 15408: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 15409: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 15410: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 15411: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 15412: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 15413: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 15414: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 15415: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 15416: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 15417: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.35s leader 5, trace 15506: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.35s leader 5, trace 15507: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 15622: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 15623: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 15624: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 15625: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 15626: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 15627: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 15628: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 15629: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 15630: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 15631: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 15632: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 15633: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 15634: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 15933: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 15934: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 15935: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 15936: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 15937: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 15938: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 15939: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 15940: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 15941: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 15942: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 15943: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 15944: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 16115: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 16116: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 16117: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 16118: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 16119: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 16120: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 16121: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 16122: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 16123: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 16124: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 16125: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 16126: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 16289: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 16290: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 16291: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 16292: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 16293: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 16294: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 16295: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 16296: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 16297: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 16298: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 16299: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 16300: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 16433: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 16434: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 16435: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 16436: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 16437: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 16438: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 16439: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 16440: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 16441: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 16442: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 16443: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 16444: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.05s leader 5, trace 16557: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 16592: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 16593: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 16594: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 16595: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 16596: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 16597: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 16598: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 16599: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 16600: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 16601: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 16602: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 16730: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 16731: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 16732: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16733: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 16734: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 16735: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 16736: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16737: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16738: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 16739: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 16740: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.25s leader 5, trace 16793: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.25s leader 5, trace 16794: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 16938: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 16939: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 16940: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16941: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 16942: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 16943: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 16944: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16945: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16946: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 16947: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 16948: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 17082: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 17083: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 17084: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 17085: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 17086: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 17087: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 17088: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 17089: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 17090: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 17091: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 17092: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 17249: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 17250: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 17251: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 17252: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 17253: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 17254: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 17255: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 17256: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 17257: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 17258: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 17259: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 17401: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 17402: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 17403: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 17404: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 17405: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 17406: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 17407: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 17408: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 17409: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 17410: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 17411: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 17535: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 17536: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 17537: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 17538: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 17539: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 17540: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 17541: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 17542: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 17543: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 17544: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 17545: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 17676: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 17677: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 17678: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 17679: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 17680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 17681: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 17682: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 17683: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 17684: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 17685: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 17686: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 17831: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 17832: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 17833: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 17834: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 17835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 17836: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 17837: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 17838: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 17839: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 17840: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 17841: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 17975: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 17976: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 17977: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 17978: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 17979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 17980: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 17981: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 17982: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 17983: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 17984: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 17985: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 18120: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 18121: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 18122: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 18123: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 18124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 18125: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 18126: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 18127: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 18128: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 18129: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 18130: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 18268: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 18269: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 18270: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 18271: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 18272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 18273: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 18274: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 18275: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 18276: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 18277: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 18278: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 18417: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 18418: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 18419: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 18420: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 18421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 18422: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 18423: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 18424: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 18425: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 18426: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 18427: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 18568: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 18569: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 18570: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 18571: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 18572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 18573: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 18574: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 18575: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 18576: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 18577: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 18578: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.25s leader 5, trace 18623: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 18714: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 18715: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 18716: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 18717: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 18718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 18719: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 18720: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 18721: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 18722: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 18723: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 18724: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 18868: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 18869: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 18870: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 18871: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 18872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 18873: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 18874: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 18875: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 18876: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 18877: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 18878: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 19014: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 19015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 19016: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 19017: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 19018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 19019: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 19020: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 19021: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 19022: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 19023: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 19024: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 19165: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 19166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 19167: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 19168: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 19169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 19170: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 19171: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 19172: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 19173: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 19174: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 19175: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 19309: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 19310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 19311: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19312: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 19313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 19315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19316: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19317: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 19318: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19319: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 19453: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 19454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 19455: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 19456: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 19457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 19458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 19459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 19460: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 19461: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 19462: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 19463: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 19601: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 19602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 19603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 19604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 19605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 19606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 19607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 19608: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 19609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 19610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 19611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 19750: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 19751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 19752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 19753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 19754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 19755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 19756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 19757: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 19758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 19759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 19760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 19901: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 19902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 19903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 19904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 19905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 19906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 19907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 19908: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 19909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 19910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 19911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 20037: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 20038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 20039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 20040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 20041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 20042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 20043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 20044: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 20045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 20046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 20047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 20186: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 20187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 20188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 20189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 20190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 20191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 20192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 20193: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 20194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 20195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 20196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 20336: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 20337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 20338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 20339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 20340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 20341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 20342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 20343: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 20344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 20345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 20346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 236.25s leader 5, trace 20409: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 20484: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 20485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 20486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 20487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 20488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 20489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 20490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 20491: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 20492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 20493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 20494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 20629: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 20630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 20631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 20632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 20633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 20634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 20635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 20636: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 20637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 20638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 20639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 20776: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 20777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 20778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 20779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 20780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 20781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 20782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 20783: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 20784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 20785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 20786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 20920: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 20921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 20922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 20923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 20924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 20925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 20926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 20927: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 20928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 20929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 20930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 21069: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 21070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 21071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 21072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 21073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 21074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 21075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 21076: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 21077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 21078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 21079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 21212: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 21213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 21214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 21215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 21216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 21217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 21218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 21219: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 21220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 21221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 21222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 21351: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 21352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 21353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 21354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 21355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 21356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 21357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 21358: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 21359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 21360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 21361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 21495: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 21496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 21497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 21498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 21499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 21500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 21501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 21502: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 21503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 21504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 21505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 21638: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 21639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 21640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 21641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 21642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 21643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 21644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 21645: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 21646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 21647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 21648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 21783: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 21784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 21785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 21786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 21787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 21788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 21789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 21790: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 21791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 21792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 21793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 21926: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 21927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 21928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 21929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 21930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 21931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 21932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 21933: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 21934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 21935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 21936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 22033: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 22034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 22035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 22036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 22037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 22038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 22039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 22040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 22041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 22042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 296.55s leader 5, trace 22110: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 22156: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 22157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 22158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 22159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 22160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 22161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 22162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 22163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 22164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 22165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 22300: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 22301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 22302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 22303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 22304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 22305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 22306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 22307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 22308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 22309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 22446: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 22447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 22448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 22449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 22450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 22451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 22452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 22453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 22454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 22455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 22595: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 22596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 22597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 22598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 22599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 22600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 22601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 22602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 22603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 22604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 22748: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 22749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 22750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 22751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 22752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 22753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 22754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 22755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 22756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 22757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 22896: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 22897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 22898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 22899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 22900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 22901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 22902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 22903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 22904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 22905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 23041: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 23042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 23043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 23044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 23045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 23046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 23047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 23048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 23049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 23050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 23197: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 23198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 23199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 23200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 23201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 23202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 23203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 23204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 23205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 23206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 23348: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 23349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 23350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 23351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 23352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 23353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 23354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 23355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 23356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 23357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 23493: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 23494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 23495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 23496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 23497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 23498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 23499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 23500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 23501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 23502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 23642: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 23643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 23644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 23645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 23646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 23647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 23648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 23649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 23650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 23651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 23793: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 23794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 23795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 23796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 23797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 23798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 23799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 23800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 23801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 23802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 356.55s leader 5, trace 23882: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 23948: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 23949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 23950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 23951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 23952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 23953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 23954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 23955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 23956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 23957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Soren incapacitated
- 1: Renn incapacitated
- 1: Bren killed in action
- 1: Rook killed in action
- 1: Ash incapacitated
- 1: Tern incapacitated
- 1: Reed killed in action
- 1: Moss killed in action
- 1: Lark killed in action

## Outcome attribution

- 115.25s, evidence 1641: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 116.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16810}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 115.25s, evidence 16793: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.090115 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 116.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16810}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 115.25s, evidence 16794: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.090115 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 116.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16810}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 175.25s, evidence 1834: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2046}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 236.25s, evidence 2046: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2239}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 296.55s, evidence 2239: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 356.55s, evidence 2591: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
