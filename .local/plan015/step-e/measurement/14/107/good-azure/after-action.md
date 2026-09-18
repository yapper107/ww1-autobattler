# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/14/107/good-azure/battle-107-1789673937526694666`

## Battle summary

**Ember** · 360 s · 784 shots.

### Turning points

- 29.4s, squad 4: contact (events line 313). First recorded contact.
- 52.5s, squad 0: help call ([trace 8718](#trace-8718)). No completion observed before termination.
- 92.8s, squad 0: withdrawal ([trace 13147](#trace-13147)). 99.3s, squad 0: broke contact.
- 99.3s, squad 0: withdrawal ([trace 13792](#trace-13792)). 134.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 138.2s, squad 0: withdrawal ([trace 15679](#trace-15679)). 197.8s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 53 shots, 6/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 731 shots, 1/8 lost.

### Decisions and attribution

At 66.1s, squad 0 chose leader risk threshold crossed without support ([trace 10770](#trace-10770)), followed by 1 shots and 0 own casualties; estimate 9.6 against 1 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 537](#trace-537)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 536](#trace-536)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150130612631944, 'next_transition': 550}.
- 39.6s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.554154 retreat threshold=0.500000 initiative=delegated ([trace 4426](#trace-4426)). Following evidence: None.

### Communication

188 matched deliveries (mean 0.33s, max 2.20s); 249 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 29.40s, squad 4, contact, evidence events line 313: First recorded contact; .
- 52.55s, squad 0, help call, evidence 8718: NeedSupport; No completion observed before termination.
- 92.85s, squad 0, withdrawal, evidence 13147: BreakContact: believed ratio at least two without superiority; 99.3s, squad 0: broke contact.
- 99.30s, squad 0, withdrawal, evidence 13792: BreakContact: believed ratio at least two without superiority; 134.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 138.20s, squad 0, withdrawal, evidence 15679: Withdraw to received rally; 197.8s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7578155676462262, 'next_transition': 451}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7578155676462262, 'next_transition': 451}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7578155676462262, 'next_transition': 451}.
<a id="trace-451"></a>
<a id="trace-471"></a>
<a id="trace-492"></a>
<a id="trace-514"></a>
<a id="trace-528"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 451): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2300236968604228, 'next_transition': 471}.
<a id="trace-78"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 78): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150130612631944, 'next_transition': 550}.
<a id="trace-536"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 536): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 536. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150130612631944, 'next_transition': 550}.
<a id="trace-537"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 537): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 537. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150130612631944, 'next_transition': 550}.
<a id="trace-550"></a>
<a id="trace-572"></a>
<a id="trace-649"></a>
<a id="trace-668"></a>
<a id="trace-690"></a>
<a id="trace-712"></a>
<a id="trace-730"></a>
<a id="trace-750"></a>
<a id="trace-773"></a>
<a id="trace-792"></a>
<a id="trace-809"></a>
<a id="trace-818"></a>
<a id="trace-902"></a>
<a id="trace-914"></a>
- 4.20s–10.70s (×14), actor 5, squad 0 (trace 550): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 537. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149891050065204, 'next_transition': 572}.
<a id="trace-714"></a>
<a id="trace-775"></a>
<a id="trace-794"></a>
<a id="trace-820"></a>
<a id="trace-904"></a>
<a id="trace-916"></a>
<a id="trace-1240"></a>
<a id="trace-1291"></a>
<a id="trace-1393"></a>
<a id="trace-1416"></a>
<a id="trace-1515"></a>
<a id="trace-1578"></a>
<a id="trace-1599"></a>
<a id="trace-1622"></a>
<a id="trace-1641"></a>
<a id="trace-1675"></a>
<a id="trace-1760"></a>
<a id="trace-1787"></a>
<a id="trace-1810"></a>
<a id="trace-1832"></a>
<a id="trace-1841"></a>
<a id="trace-1850"></a>
<a id="trace-1864"></a>
<a id="trace-2204"></a>
<a id="trace-2224"></a>
<a id="trace-2313"></a>
<a id="trace-2332"></a>
<a id="trace-2402"></a>
<a id="trace-2416"></a>
<a id="trace-2437"></a>
<a id="trace-2455"></a>
<a id="trace-2471"></a>
<a id="trace-2488"></a>
<a id="trace-2582"></a>
<a id="trace-2599"></a>
<a id="trace-2616"></a>
<a id="trace-2632"></a>
<a id="trace-2660"></a>
<a id="trace-2681"></a>
<a id="trace-2700"></a>
<a id="trace-2708"></a>
<a id="trace-2725"></a>
<a id="trace-3362"></a>
<a id="trace-3383"></a>
<a id="trace-3785"></a>
<a id="trace-3819"></a>
<a id="trace-4268"></a>
<a id="trace-4317"></a>
<a id="trace-4390"></a>
<a id="trace-4561"></a>
<a id="trace-4695"></a>
<a id="trace-4741"></a>
<a id="trace-4804"></a>
<a id="trace-4839"></a>
<a id="trace-4880"></a>
<a id="trace-4910"></a>
<a id="trace-4929"></a>
<a id="trace-8184"></a>
<a id="trace-8196"></a>
<a id="trace-8211"></a>
<a id="trace-8230"></a>
<a id="trace-8253"></a>
<a id="trace-8269"></a>
<a id="trace-8331"></a>
<a id="trace-8371"></a>
<a id="trace-8525"></a>
<a id="trace-8579"></a>
<a id="trace-8629"></a>
<a id="trace-8670"></a>
<a id="trace-8706"></a>
<a id="trace-8744"></a>
<a id="trace-8765"></a>
<a id="trace-8779"></a>
<a id="trace-8851"></a>
<a id="trace-8957"></a>
<a id="trace-9002"></a>
<a id="trace-9116"></a>
<a id="trace-9475"></a>
<a id="trace-9530"></a>
<a id="trace-9649"></a>
<a id="trace-9708"></a>
<a id="trace-9745"></a>
<a id="trace-9941"></a>
<a id="trace-9968"></a>
<a id="trace-10016"></a>
<a id="trace-10166"></a>
<a id="trace-10247"></a>
<a id="trace-10341"></a>
<a id="trace-10435"></a>
<a id="trace-10679"></a>
<a id="trace-10749"></a>
<a id="trace-10799"></a>
<a id="trace-10873"></a>
<a id="trace-10926"></a>
<a id="trace-10955"></a>
<a id="trace-11226"></a>
<a id="trace-11263"></a>
<a id="trace-11294"></a>
<a id="trace-11383"></a>
<a id="trace-11393"></a>
<a id="trace-11403"></a>
<a id="trace-11412"></a>
<a id="trace-11422"></a>
<a id="trace-11435"></a>
<a id="trace-11463"></a>
<a id="trace-11492"></a>
<a id="trace-11518"></a>
<a id="trace-11601"></a>
<a id="trace-11618"></a>
<a id="trace-11660"></a>
<a id="trace-11673"></a>
<a id="trace-11697"></a>
<a id="trace-11723"></a>
<a id="trace-11764"></a>
<a id="trace-11888"></a>
<a id="trace-11897"></a>
<a id="trace-11906"></a>
<a id="trace-11915"></a>
<a id="trace-11921"></a>
<a id="trace-12323"></a>
<a id="trace-12401"></a>
<a id="trace-12413"></a>
<a id="trace-12431"></a>
<a id="trace-12441"></a>
<a id="trace-12458"></a>
<a id="trace-12499"></a>
<a id="trace-12895"></a>
<a id="trace-13008"></a>
<a id="trace-13066"></a>
<a id="trace-13090"></a>
<a id="trace-13111"></a>
<a id="trace-13141"></a>
<a id="trace-13389"></a>
<a id="trace-13421"></a>
<a id="trace-13444"></a>
<a id="trace-13461"></a>
<a id="trace-13567"></a>
<a id="trace-13599"></a>
<a id="trace-13630"></a>
<a id="trace-13678"></a>
<a id="trace-13715"></a>
<a id="trace-13750"></a>
<a id="trace-13770"></a>
<a id="trace-13791"></a>
<a id="trace-13953"></a>
<a id="trace-14041"></a>
<a id="trace-14123"></a>
<a id="trace-14155"></a>
<a id="trace-14193"></a>
<a id="trace-14237"></a>
<a id="trace-14415"></a>
<a id="trace-14456"></a>
<a id="trace-14496"></a>
<a id="trace-14534"></a>
<a id="trace-14572"></a>
<a id="trace-14598"></a>
<a id="trace-14615"></a>
<a id="trace-14638"></a>
<a id="trace-14647"></a>
<a id="trace-14796"></a>
<a id="trace-14809"></a>
<a id="trace-14823"></a>
<a id="trace-14842"></a>
<a id="trace-14851"></a>
<a id="trace-14865"></a>
<a id="trace-14938"></a>
<a id="trace-14954"></a>
<a id="trace-14960"></a>
<a id="trace-14969"></a>
<a id="trace-14978"></a>
<a id="trace-14984"></a>
<a id="trace-14991"></a>
<a id="trace-14996"></a>
<a id="trace-15063"></a>
<a id="trace-15068"></a>
<a id="trace-15084"></a>
<a id="trace-15091"></a>
<a id="trace-15104"></a>
<a id="trace-15112"></a>
<a id="trace-15118"></a>
<a id="trace-15127"></a>
<a id="trace-15132"></a>
<a id="trace-15201"></a>
<a id="trace-15205"></a>
<a id="trace-15214"></a>
<a id="trace-15223"></a>
<a id="trace-15229"></a>
<a id="trace-15245"></a>
<a id="trace-15259"></a>
<a id="trace-15264"></a>
<a id="trace-15332"></a>
<a id="trace-15336"></a>
<a id="trace-15344"></a>
<a id="trace-15351"></a>
<a id="trace-15359"></a>
<a id="trace-15367"></a>
<a id="trace-15375"></a>
<a id="trace-15380"></a>
<a id="trace-15394"></a>
<a id="trace-15614"></a>
<a id="trace-15665"></a>
<a id="trace-15674"></a>
<a id="trace-15820"></a>
<a id="trace-15829"></a>
<a id="trace-15906"></a>
<a id="trace-15919"></a>
<a id="trace-15930"></a>
<a id="trace-15935"></a>
<a id="trace-15944"></a>
<a id="trace-15968"></a>
<a id="trace-15975"></a>
<a id="trace-16040"></a>
<a id="trace-16045"></a>
<a id="trace-16055"></a>
<a id="trace-16059"></a>
<a id="trace-16067"></a>
<a id="trace-16080"></a>
<a id="trace-16088"></a>
<a id="trace-16098"></a>
<a id="trace-16105"></a>
<a id="trace-16180"></a>
<a id="trace-16255"></a>
<a id="trace-16263"></a>
<a id="trace-16271"></a>
<a id="trace-16282"></a>
<a id="trace-16296"></a>
<a id="trace-16308"></a>
<a id="trace-16375"></a>
<a id="trace-16382"></a>
<a id="trace-16392"></a>
<a id="trace-16403"></a>
<a id="trace-16413"></a>
<a id="trace-16418"></a>
<a id="trace-16431"></a>
<a id="trace-16434"></a>
<a id="trace-16442"></a>
<a id="trace-16510"></a>
<a id="trace-16520"></a>
<a id="trace-16527"></a>
<a id="trace-16533"></a>
<a id="trace-16543"></a>
<a id="trace-16550"></a>
<a id="trace-16561"></a>
<a id="trace-16565"></a>
<a id="trace-16575"></a>
<a id="trace-16583"></a>
<a id="trace-16648"></a>
<a id="trace-16665"></a>
<a id="trace-16670"></a>
<a id="trace-16681"></a>
<a id="trace-16695"></a>
<a id="trace-16700"></a>
<a id="trace-16708"></a>
<a id="trace-16766"></a>
<a id="trace-16841"></a>
<a id="trace-16851"></a>
<a id="trace-16858"></a>
<a id="trace-16867"></a>
<a id="trace-16880"></a>
<a id="trace-16887"></a>
<a id="trace-16896"></a>
<a id="trace-16899"></a>
<a id="trace-16912"></a>
<a id="trace-16919"></a>
<a id="trace-16992"></a>
<a id="trace-17000"></a>
<a id="trace-17064"></a>
<a id="trace-17071"></a>
<a id="trace-17079"></a>
<a id="trace-17099"></a>
<a id="trace-17116"></a>
<a id="trace-17182"></a>
<a id="trace-17193"></a>
<a id="trace-17204"></a>
<a id="trace-17218"></a>
<a id="trace-17225"></a>
<a id="trace-17236"></a>
<a id="trace-17240"></a>
<a id="trace-17249"></a>
<a id="trace-17256"></a>
<a id="trace-17323"></a>
<a id="trace-17329"></a>
<a id="trace-17341"></a>
<a id="trace-17345"></a>
<a id="trace-17354"></a>
<a id="trace-17360"></a>
<a id="trace-17376"></a>
<a id="trace-17389"></a>
<a id="trace-17394"></a>
<a id="trace-17463"></a>
<a id="trace-17469"></a>
<a id="trace-17475"></a>
<a id="trace-17483"></a>
<a id="trace-17493"></a>
<a id="trace-17502"></a>
<a id="trace-17567"></a>
<a id="trace-17574"></a>
<a id="trace-17590"></a>
<a id="trace-17597"></a>
<a id="trace-17719"></a>
<a id="trace-17731"></a>
<a id="trace-17742"></a>
<a id="trace-17757"></a>
<a id="trace-17765"></a>
<a id="trace-17797"></a>
<a id="trace-17803"></a>
<a id="trace-17872"></a>
<a id="trace-17888"></a>
<a id="trace-17899"></a>
<a id="trace-17906"></a>
<a id="trace-17915"></a>
<a id="trace-17974"></a>
<a id="trace-17985"></a>
<a id="trace-17992"></a>
<a id="trace-18000"></a>
<a id="trace-18074"></a>
<a id="trace-18081"></a>
<a id="trace-18094"></a>
<a id="trace-18099"></a>
<a id="trace-18125"></a>
<a id="trace-18133"></a>
<a id="trace-18141"></a>
<a id="trace-18146"></a>
<a id="trace-18217"></a>
<a id="trace-18223"></a>
<a id="trace-18230"></a>
<a id="trace-18235"></a>
<a id="trace-18352"></a>
<a id="trace-18376"></a>
<a id="trace-18384"></a>
<a id="trace-18400"></a>
<a id="trace-18407"></a>
<a id="trace-18474"></a>
<a id="trace-18493"></a>
<a id="trace-18501"></a>
<a id="trace-18511"></a>
<a id="trace-18527"></a>
<a id="trace-18531"></a>
<a id="trace-18541"></a>
<a id="trace-18547"></a>
<a id="trace-18616"></a>
<a id="trace-18637"></a>
<a id="trace-18757"></a>
<a id="trace-18766"></a>
<a id="trace-18782"></a>
<a id="trace-18802"></a>
<a id="trace-18867"></a>
<a id="trace-18875"></a>
<a id="trace-18905"></a>
<a id="trace-18915"></a>
<a id="trace-18928"></a>
<a id="trace-18937"></a>
<a id="trace-18947"></a>
<a id="trace-18951"></a>
<a id="trace-19024"></a>
<a id="trace-19033"></a>
<a id="trace-19038"></a>
<a id="trace-19051"></a>
<a id="trace-19061"></a>
<a id="trace-19069"></a>
<a id="trace-19093"></a>
<a id="trace-19095"></a>
<a id="trace-19160"></a>
<a id="trace-19165"></a>
<a id="trace-19176"></a>
<a id="trace-19182"></a>
<a id="trace-19190"></a>
<a id="trace-19193"></a>
<a id="trace-19202"></a>
<a id="trace-19267"></a>
<a id="trace-19279"></a>
<a id="trace-19353"></a>
<a id="trace-19369"></a>
<a id="trace-19378"></a>
<a id="trace-19382"></a>
<a id="trace-19404"></a>
<a id="trace-19407"></a>
<a id="trace-19417"></a>
<a id="trace-19424"></a>
<a id="trace-19488"></a>
<a id="trace-19497"></a>
<a id="trace-19507"></a>
<a id="trace-19515"></a>
<a id="trace-19528"></a>
<a id="trace-19534"></a>
<a id="trace-19546"></a>
<a id="trace-19553"></a>
<a id="trace-19618"></a>
<a id="trace-19687"></a>
<a id="trace-19692"></a>
<a id="trace-19702"></a>
<a id="trace-19712"></a>
<a id="trace-19718"></a>
<a id="trace-19727"></a>
<a id="trace-19738"></a>
<a id="trace-19806"></a>
<a id="trace-19813"></a>
<a id="trace-19818"></a>
<a id="trace-19821"></a>
<a id="trace-19829"></a>
<a id="trace-19842"></a>
<a id="trace-19852"></a>
<a id="trace-19915"></a>
<a id="trace-19921"></a>
<a id="trace-19933"></a>
<a id="trace-19945"></a>
<a id="trace-19953"></a>
<a id="trace-19955"></a>
<a id="trace-19963"></a>
<a id="trace-20026"></a>
<a id="trace-20038"></a>
<a id="trace-20047"></a>
<a id="trace-20063"></a>
<a id="trace-20072"></a>
<a id="trace-20074"></a>
<a id="trace-20137"></a>
<a id="trace-20142"></a>
<a id="trace-20151"></a>
<a id="trace-20161"></a>
<a id="trace-20172"></a>
<a id="trace-20181"></a>
<a id="trace-20249"></a>
<a id="trace-20257"></a>
<a id="trace-20264"></a>
<a id="trace-20272"></a>
<a id="trace-20275"></a>
<a id="trace-20290"></a>
<a id="trace-20298"></a>
<a id="trace-20367"></a>
<a id="trace-20372"></a>
<a id="trace-20376"></a>
<a id="trace-20387"></a>
<a id="trace-20398"></a>
<a id="trace-20408"></a>
<a id="trace-20412"></a>
<a id="trace-20479"></a>
<a id="trace-20488"></a>
<a id="trace-20497"></a>
<a id="trace-20501"></a>
<a id="trace-20510"></a>
<a id="trace-20518"></a>
<a id="trace-20525"></a>
<a id="trace-20527"></a>
<a id="trace-20592"></a>
<a id="trace-20597"></a>
<a id="trace-20604"></a>
<a id="trace-20611"></a>
<a id="trace-20617"></a>
<a id="trace-20620"></a>
<a id="trace-20628"></a>
<a id="trace-20632"></a>
<a id="trace-20639"></a>
<a id="trace-20642"></a>
<a id="trace-20710"></a>
<a id="trace-20720"></a>
<a id="trace-20725"></a>
<a id="trace-20733"></a>
<a id="trace-20738"></a>
<a id="trace-20750"></a>
<a id="trace-20752"></a>
<a id="trace-20759"></a>
<a id="trace-20824"></a>
<a id="trace-20847"></a>
<a id="trace-20852"></a>
<a id="trace-20863"></a>
<a id="trace-20873"></a>
<a id="trace-20875"></a>
<a id="trace-20942"></a>
<a id="trace-20950"></a>
<a id="trace-20954"></a>
<a id="trace-20961"></a>
<a id="trace-20964"></a>
<a id="trace-20983"></a>
<a id="trace-20988"></a>
<a id="trace-21057"></a>
<a id="trace-21064"></a>
<a id="trace-21072"></a>
<a id="trace-21080"></a>
<a id="trace-21088"></a>
<a id="trace-21091"></a>
<a id="trace-21098"></a>
<a id="trace-21101"></a>
<a id="trace-21167"></a>
<a id="trace-21171"></a>
<a id="trace-21178"></a>
<a id="trace-21185"></a>
<a id="trace-21191"></a>
<a id="trace-21209"></a>
<a id="trace-21218"></a>
<a id="trace-21282"></a>
<a id="trace-21286"></a>
<a id="trace-21291"></a>
<a id="trace-21297"></a>
<a id="trace-21307"></a>
<a id="trace-21320"></a>
<a id="trace-21322"></a>
<a id="trace-21336"></a>
<a id="trace-21402"></a>
<a id="trace-21415"></a>
<a id="trace-21420"></a>
<a id="trace-21431"></a>
<a id="trace-21433"></a>
<a id="trace-21444"></a>
<a id="trace-21509"></a>
<a id="trace-21516"></a>
<a id="trace-21527"></a>
<a id="trace-21533"></a>
<a id="trace-21537"></a>
<a id="trace-21546"></a>
<a id="trace-21550"></a>
<a id="trace-21558"></a>
<a id="trace-21624"></a>
<a id="trace-21635"></a>
<a id="trace-21638"></a>
<a id="trace-21663"></a>
<a id="trace-21666"></a>
<a id="trace-21673"></a>
<a id="trace-21738"></a>
<a id="trace-21742"></a>
<a id="trace-21748"></a>
<a id="trace-21753"></a>
<a id="trace-21759"></a>
<a id="trace-21772"></a>
<a id="trace-21776"></a>
<a id="trace-21788"></a>
<a id="trace-21794"></a>
<a id="trace-21857"></a>
<a id="trace-21865"></a>
<a id="trace-21869"></a>
<a id="trace-21878"></a>
<a id="trace-21888"></a>
<a id="trace-21898"></a>
<a id="trace-21904"></a>
<a id="trace-21968"></a>
<a id="trace-21976"></a>
<a id="trace-21986"></a>
<a id="trace-21989"></a>
<a id="trace-21995"></a>
<a id="trace-21998"></a>
<a id="trace-22007"></a>
<a id="trace-22016"></a>
<a id="trace-22083"></a>
<a id="trace-22087"></a>
<a id="trace-22095"></a>
<a id="trace-22123"></a>
<a id="trace-22126"></a>
<a id="trace-22133"></a>
<a id="trace-22137"></a>
- 6.70s–359.80s (×548), actor 37, squad 4 (trace 714): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 592. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 775}.
<a id="trace-922"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 922): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 824. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37874811178187695, 'next_transition': 1238}.
<a id="trace-1238"></a>
<a id="trace-1262"></a>
<a id="trace-1289"></a>
<a id="trace-1315"></a>
<a id="trace-1337"></a>
<a id="trace-1363"></a>
<a id="trace-1391"></a>
<a id="trace-1414"></a>
<a id="trace-1494"></a>
<a id="trace-1513"></a>
<a id="trace-1537"></a>
<a id="trace-1561"></a>
<a id="trace-1576"></a>
<a id="trace-1597"></a>
<a id="trace-1620"></a>
<a id="trace-1639"></a>
<a id="trace-1661"></a>
<a id="trace-1673"></a>
<a id="trace-1758"></a>
<a id="trace-1785"></a>
<a id="trace-1798"></a>
<a id="trace-1808"></a>
<a id="trace-1830"></a>
<a id="trace-1839"></a>
<a id="trace-1848"></a>
<a id="trace-1862"></a>
- 11.20s–23.75s (×26), actor 5, squad 0 (trace 1238): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 829. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5253140007332116, 'next_transition': 1262}.
<a id="trace-1871"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 1871): traveling overwatch. Knowledge: actor memory at 20.00s, trace 1684. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020346432273251183, 'next_transition': 2202}.
<a id="trace-1872"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 1872): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 1684. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020346432273251183, 'next_transition': 2202}.
<a id="trace-2202"></a>
<a id="trace-2222"></a>
<a id="trace-2311"></a>
<a id="trace-2330"></a>
<a id="trace-2352"></a>
<a id="trace-2380"></a>
<a id="trace-2400"></a>
<a id="trace-2414"></a>
<a id="trace-2435"></a>
<a id="trace-2453"></a>
<a id="trace-2469"></a>
<a id="trace-2486"></a>
<a id="trace-2580"></a>
<a id="trace-2597"></a>
<a id="trace-2614"></a>
<a id="trace-2630"></a>
<a id="trace-2658"></a>
<a id="trace-2679"></a>
<a id="trace-2698"></a>
<a id="trace-2706"></a>
<a id="trace-2723"></a>
- 24.25s–34.25s (×21), actor 5, squad 0 (trace 2202): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1689. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2222}.
<a id="trace-2727"></a>
- 34.40s–34.40s (×1), actor 0, squad 0 (trace 2727): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 2493. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.027850005498204055, 'next_transition': 2893}.
<a id="trace-2893"></a>
<a id="trace-2967"></a>
- 34.75s–35.25s (×2), actor 5, squad 0 (trace 2893): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2498. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16943376579060293, 'next_transition': 2967}.
<a id="trace-2974"></a>
- 35.65s–35.65s (×1), actor 0, squad 0 (trace 2974): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 2895. Next observer evidence: None.
<a id="trace-2975"></a>
- 35.65s–35.65s (×1), actor 0, squad 0 (trace 2975): bounding overwatch. Knowledge: actor memory at 35.00s, trace 2895. Next observer evidence: None.
<a id="trace-2976"></a>
- 35.65s–35.65s (×1), actor 0, squad 0 (trace 2976): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2895. Next observer evidence: None.
<a id="trace-3360"></a>
<a id="trace-3381"></a>
- 35.75s–36.25s (×2), actor 5, squad 0 (trace 3360): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2900. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23401125105932194, 'next_transition': 3381}.
<a id="trace-3390"></a>
- 36.35s–36.35s (×1), actor 0, squad 0 (trace 3390): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2895. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09220625000000005, 'next_transition': 3783}.
<a id="trace-3783"></a>
<a id="trace-3817"></a>
- 36.75s–37.25s (×2), actor 5, squad 0 (trace 3783): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2900. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11132063229674215, 'next_transition': 3817}.
<a id="trace-3836"></a>
- 37.55s–37.55s (×1), actor 0, squad 0 (trace 3836): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 2895. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0787500267658685, 'next_transition': 4229}.
<a id="trace-4229"></a>
<a id="trace-4266"></a>
<a id="trace-4315"></a>
<a id="trace-4388"></a>
- 37.75s–39.25s (×4), actor 5, squad 0 (trace 4229): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2900. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17718849461801972, 'next_transition': 4266}.
<a id="trace-534"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (events line 534): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4426"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (trace 4426): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.554154 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 4426. Next observer evidence: None.
<a id="trace-4427"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (trace 4427): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.554154 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 4427. Next observer evidence: None.
<a id="trace-4445"></a>
<a id="trace-4559"></a>
<a id="trace-4642"></a>
- 39.75s–40.75s (×3), actor 5, squad 0 (trace 4445): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 39.60s, trace 4427. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29840500000000003, 'next_transition': 4559}.
<a id="trace-4686"></a>
- 41.20s–41.20s (×1), actor 0, squad 0 (trace 4686): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 4453. Next observer evidence: None.
<a id="trace-4693"></a>
<a id="trace-4739"></a>
<a id="trace-4802"></a>
<a id="trace-4837"></a>
<a id="trace-4878"></a>
<a id="trace-4908"></a>
- 41.25s–43.75s (×6), actor 5, squad 0 (trace 4693): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4458. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.054786249999999925, 'next_transition': 4739}.
<a id="trace-4914"></a>
- 43.95s–43.95s (×1), actor 0, squad 0 (trace 4914): received platoon directive; retain contact cover stage. Knowledge: actor memory at 40.00s, trace 4453. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14040077795368514, 'next_transition': 4927}.
<a id="trace-4927"></a>
- 44.25s–44.25s (×1), actor 5, squad 0 (trace 4927): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4458. Next observer evidence: {'until': 44.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0717960490295253, 'next_transition': 4933}.
<a id="trace-4933"></a>
- 44.40s–44.40s (×1), actor 0, squad 0 (trace 4933): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 4453. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07285747495109893, 'next_transition': 8104}.
<a id="trace-7794"></a>
- 44.40s–44.40s (×1), actor 0, squad 0 (trace 7794): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 4453. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07285747495109893, 'next_transition': 8104}.
<a id="trace-7795"></a>
- 44.40s–44.40s (×1), actor 0, squad 0 (trace 7795): MoveTactically. Knowledge: actor memory at 40.00s, trace 4453. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07285747495109893, 'next_transition': 8104}.
<a id="trace-7796"></a>
- 44.40s–44.40s (×1), actor 0, squad 0 (trace 7796): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 4453. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07285747495109893, 'next_transition': 8104}.
<a id="trace-8104"></a>
<a id="trace-8182"></a>
<a id="trace-8194"></a>
<a id="trace-8209"></a>
<a id="trace-8228"></a>
<a id="trace-8251"></a>
<a id="trace-8267"></a>
<a id="trace-8298"></a>
<a id="trace-8329"></a>
<a id="trace-8369"></a>
<a id="trace-8409"></a>
<a id="trace-8523"></a>
<a id="trace-8577"></a>
<a id="trace-8627"></a>
<a id="trace-8668"></a>
<a id="trace-8704"></a>
- 44.75s–52.25s (×16), actor 5, squad 0 (trace 8104): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4458. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18861429075380926, 'next_transition': 8182}.
<a id="trace-8718"></a>
- 52.55s–52.55s (×1), actor 0, squad 0 (trace 8718): NeedSupport. Knowledge: actor memory at 50.00s, trace 8430. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750117581794604, 'next_transition': 8742}.
<a id="trace-8742"></a>
<a id="trace-8763"></a>
<a id="trace-8777"></a>
<a id="trace-8819"></a>
<a id="trace-8849"></a>
<a id="trace-8955"></a>
<a id="trace-9000"></a>
<a id="trace-9060"></a>
<a id="trace-9114"></a>
- 52.75s–56.75s (×9), actor 5, squad 0 (trace 8742): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 8435. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0157083942860634, 'next_transition': 8763}.
<a id="trace-9117"></a>
- 56.75s–56.75s (×1), actor 0, squad 0 (trace 9117): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 55.00s, trace 8872. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4335237224963917, 'next_transition': 9473}.
<a id="trace-9473"></a>
<a id="trace-9528"></a>
<a id="trace-9591"></a>
<a id="trace-9647"></a>
<a id="trace-9706"></a>
<a id="trace-9743"></a>
<a id="trace-9874"></a>
<a id="trace-9939"></a>
<a id="trace-9966"></a>
<a id="trace-10014"></a>
<a id="trace-10099"></a>
<a id="trace-10164"></a>
<a id="trace-10245"></a>
<a id="trace-10339"></a>
<a id="trace-10433"></a>
<a id="trace-10526"></a>
<a id="trace-10677"></a>
<a id="trace-10747"></a>
- 57.25s–65.75s (×18), actor 5, squad 0 (trace 9473): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 8877. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20679033716963263, 'next_transition': 9528}.
<a id="trace-10770"></a>
- 66.05s–66.05s (×1), actor 5, squad 0 (trace 10770): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 66.05s, trace 10770. Next observer evidence: {'until': 66.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.20274338776454953, 'next_transition': 10797}.
<a id="trace-10797"></a>
<a id="trace-10871"></a>
<a id="trace-10924"></a>
<a id="trace-10953"></a>
<a id="trace-11008"></a>
- 66.25s–68.25s (×5), actor 5, squad 0 (trace 10797): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.05s, trace 10770. Next observer evidence: {'until': 66.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5134635156492632, 'next_transition': 10871}.
<a id="trace-11055"></a>
- 68.70s–68.70s (×1), actor 0, squad 0 (trace 11055): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 65.00s, trace 10569. Next observer evidence: None.
<a id="trace-11218"></a>
- 68.70s–68.70s (×1), actor 0, squad 0 (trace 11218): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 65.00s, trace 10569. Next observer evidence: None.
<a id="trace-11224"></a>
<a id="trace-11261"></a>
<a id="trace-11292"></a>
<a id="trace-11381"></a>
<a id="trace-11391"></a>
<a id="trace-11401"></a>
<a id="trace-11410"></a>
<a id="trace-11420"></a>
<a id="trace-11433"></a>
<a id="trace-11446"></a>
<a id="trace-11461"></a>
<a id="trace-11490"></a>
<a id="trace-11516"></a>
<a id="trace-11599"></a>
<a id="trace-11616"></a>
<a id="trace-11642"></a>
<a id="trace-11658"></a>
<a id="trace-11671"></a>
<a id="trace-11682"></a>
<a id="trace-11695"></a>
<a id="trace-11721"></a>
<a id="trace-11744"></a>
<a id="trace-11762"></a>
<a id="trace-11851"></a>
<a id="trace-11866"></a>
<a id="trace-11879"></a>
<a id="trace-11886"></a>
<a id="trace-11895"></a>
<a id="trace-11904"></a>
<a id="trace-11913"></a>
- 68.75s–83.25s (×30), actor 5, squad 0 (trace 11224): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.05s, trace 10770. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40446355861181843, 'next_transition': 11261}.
<a id="trace-11916"></a>
- 83.50s–83.50s (×1), actor 1, squad 0 (trace 11916): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 80.00s, trace 11780. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499882565480852, 'next_transition': 11919}.
<a id="trace-11919"></a>
<a id="trace-11934"></a>
- 83.75s–84.25s (×2), actor 5, squad 0 (trace 11919): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 11784. Next observer evidence: {'until': 84.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.13125137176002735, 'next_transition': 11934}.
<a id="trace-11937"></a>
- 84.50s–84.50s (×1), actor 1, squad 0 (trace 11937): Reorganise: completed/failed drill. Knowledge: actor memory at 80.00s, trace 11780. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12321}.
<a id="trace-11942"></a>
- 84.50s–84.50s (×1), actor 1, squad 0 (trace 11942): MoveTactically. Knowledge: actor memory at 80.00s, trace 11780. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12321}.
<a id="trace-11943"></a>
- 84.50s–84.50s (×1), actor 1, squad 0 (trace 11943): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 80.00s, trace 11780. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12321}.
<a id="trace-12321"></a>
<a id="trace-12399"></a>
<a id="trace-12411"></a>
<a id="trace-12429"></a>
<a id="trace-12439"></a>
<a id="trace-12456"></a>
- 84.75s–87.25s (×6), actor 5, squad 0 (trace 12321): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 11784. Next observer evidence: {'until': 85.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.36748357194169046, 'next_transition': 12399}.
<a id="trace-12462"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 12462): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.356553 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 12462. Next observer evidence: None.
<a id="trace-12463"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 12463): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.356553 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 12463. Next observer evidence: None.
<a id="trace-1660"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (events line 1660): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999987473541237, 'next_transition': 12471}.
<a id="trace-12471"></a>
<a id="trace-12485"></a>
<a id="trace-12497"></a>
- 87.75s–88.75s (×3), actor 5, squad 0 (trace 12471): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.35s, trace 12463. Next observer evidence: {'until': 88.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5128333155776005, 'next_transition': 12485}.
<a id="trace-12513"></a>
- 89.10s–89.10s (×1), actor 1, squad 0 (trace 12513): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 12328. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3792491888986262, 'next_transition': 12893}.
<a id="trace-12514"></a>
- 89.10s–89.10s (×1), actor 1, squad 0 (trace 12514): received platoon directive. Knowledge: actor memory at 85.00s, trace 12328. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3792491888986262, 'next_transition': 12893}.
<a id="trace-12893"></a>
<a id="trace-12916"></a>
<a id="trace-13006"></a>
<a id="trace-13022"></a>
<a id="trace-13064"></a>
<a id="trace-13088"></a>
<a id="trace-13109"></a>
<a id="trace-13139"></a>
- 89.25s–92.75s (×8), actor 5, squad 0 (trace 12893): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.35s, trace 12463. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38679632677942566, 'next_transition': 12916}.
<a id="trace-13147"></a>
- 92.85s–92.85s (×1), actor 1, squad 0 (trace 13147): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 90.00s, trace 12933. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25242438734097244, 'next_transition': 13387}.
<a id="trace-13148"></a>
- 92.85s–92.85s (×1), actor 1, squad 0 (trace 13148): rearward bound: one stationary suppressing element. Knowledge: actor memory at 90.00s, trace 12933. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25242438734097244, 'next_transition': 13387}.
<a id="trace-13387"></a>
<a id="trace-13419"></a>
<a id="trace-13442"></a>
<a id="trace-13459"></a>
<a id="trace-13565"></a>
<a id="trace-13597"></a>
<a id="trace-13628"></a>
<a id="trace-13676"></a>
<a id="trace-13713"></a>
- 93.25s–97.75s (×9), actor 5, squad 0 (trace 13387): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 12937. Next observer evidence: {'until': 93.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.283925559944047, 'next_transition': 13419}.
<a id="trace-13717"></a>
- 97.80s–97.80s (×1), actor 1, squad 0 (trace 13717): support established: element delivered fire on threat area. Knowledge: actor memory at 95.00s, trace 13469. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45484856117689193, 'next_transition': 13748}.
<a id="trace-13718"></a>
- 97.80s–97.80s (×1), actor 1, squad 0 (trace 13718): Fixing. Knowledge: actor memory at 95.00s, trace 13469. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45484856117689193, 'next_transition': 13748}.
<a id="trace-13748"></a>
<a id="trace-13768"></a>
- 98.25s–98.75s (×2), actor 5, squad 0 (trace 13748): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 13472. Next observer evidence: {'until': 98.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.25200827796721254, 'next_transition': 13768}.
<a id="trace-13782"></a>
- 99.05s–99.05s (×1), actor 1, squad 0 (trace 13782): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 95.00s, trace 13469. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750496412811843, 'next_transition': 13789}.
<a id="trace-13789"></a>
- 99.25s–99.25s (×1), actor 5, squad 0 (trace 13789): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 13472. Next observer evidence: None.
<a id="trace-13792"></a>
- 99.30s–99.30s (×1), actor 1, squad 0 (trace 13792): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 95.00s, trace 13469. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150103474590161, 'next_transition': 13951}.
<a id="trace-13793"></a>
- 99.30s–99.30s (×1), actor 1, squad 0 (trace 13793): rearward bound: one stationary suppressing element. Knowledge: actor memory at 95.00s, trace 13469. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150103474590161, 'next_transition': 13951}.
<a id="trace-13951"></a>
<a id="trace-14029"></a>
<a id="trace-14039"></a>
<a id="trace-14055"></a>
<a id="trace-14063"></a>
<a id="trace-14091"></a>
<a id="trace-14121"></a>
- 99.75s–102.75s (×7), actor 5, squad 0 (trace 13951): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 13472. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33740671673812317, 'next_transition': 14029}.
<a id="trace-1889"></a>
- 102.95s–102.95s (×1), actor 5, squad 0 (events line 1889): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31538243099205554, 'next_transition': 14153}.
<a id="trace-14132"></a>
- 102.95s–102.95s (×1), actor 5, squad 0 (trace 14132): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.179526 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 102.95s, trace 14132. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31538243099205554, 'next_transition': 14153}.
<a id="trace-14133"></a>
- 102.95s–102.95s (×1), actor 5, squad 0 (trace 14133): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.179526 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 102.95s, trace 14133. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31538243099205554, 'next_transition': 14153}.
<a id="trace-14153"></a>
<a id="trace-14191"></a>
<a id="trace-14235"></a>
<a id="trace-14272"></a>
<a id="trace-14376"></a>
<a id="trace-14413"></a>
<a id="trace-14454"></a>
<a id="trace-14494"></a>
<a id="trace-14532"></a>
<a id="trace-14570"></a>
<a id="trace-14596"></a>
<a id="trace-14613"></a>
<a id="trace-14636"></a>
<a id="trace-14645"></a>
<a id="trace-14713"></a>
- 103.25s–110.25s (×15), actor 5, squad 0 (trace 14153): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 102.95s, trace 14133. Next observer evidence: {'until': 103.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.31537262385311365, 'next_transition': 14191}.
<a id="trace-14718"></a>
- 110.65s–110.65s (×1), actor 1, squad 0 (trace 14718): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 14648. Next observer evidence: None.
<a id="trace-14719"></a>
- 110.65s–110.65s (×1), actor 1, squad 0 (trace 14719): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 14648. Next observer evidence: None.
<a id="trace-14777"></a>
<a id="trace-14784"></a>
<a id="trace-14794"></a>
<a id="trace-14807"></a>
<a id="trace-14821"></a>
<a id="trace-14840"></a>
<a id="trace-14849"></a>
<a id="trace-14863"></a>
<a id="trace-14871"></a>
<a id="trace-14936"></a>
<a id="trace-14941"></a>
<a id="trace-14947"></a>
<a id="trace-14952"></a>
<a id="trace-14958"></a>
<a id="trace-14967"></a>
<a id="trace-14976"></a>
<a id="trace-14982"></a>
<a id="trace-14989"></a>
<a id="trace-14994"></a>
<a id="trace-15061"></a>
<a id="trace-15066"></a>
<a id="trace-15075"></a>
<a id="trace-15088"></a>
<a id="trace-15109"></a>
<a id="trace-15124"></a>
<a id="trace-15198"></a>
<a id="trace-15211"></a>
<a id="trace-15226"></a>
<a id="trace-15242"></a>
<a id="trace-15256"></a>
<a id="trace-15329"></a>
<a id="trace-15341"></a>
<a id="trace-15356"></a>
<a id="trace-15372"></a>
- 110.75s–133.30s (×34), actor 5, squad 0 (trace 14777): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 14650. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14784}.
<a id="trace-15384"></a>
- 134.05s–134.05s (×1), actor 1, squad 0 (trace 15384): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 130.00s, trace 15265. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29819792534340406, 'next_transition': 15391}.
<a id="trace-15391"></a>
- 134.30s–134.30s (×1), actor 5, squad 0 (trace 15391): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 15267. Next observer evidence: {'until': 135, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6047996628820341, 'next_transition': 15505}.
<a id="trace-15395"></a>
- 134.30s–134.30s (×1), actor 1, squad 0 (trace 15395): MoveTactically. Knowledge: actor memory at 130.00s, trace 15265. Next observer evidence: {'until': 135, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6047996628820341, 'next_transition': 15505}.
<a id="trace-15396"></a>
- 134.30s–134.30s (×1), actor 1, squad 0 (trace 15396): received platoon directive. Knowledge: actor memory at 130.00s, trace 15265. Next observer evidence: {'until': 135, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6047996628820341, 'next_transition': 15505}.
<a id="trace-15505"></a>
- 135.05s–135.05s (×1), actor 1, squad 0 (trace 15505): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 135.00s, trace 15491. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.151192974557535, 'next_transition': 15611}.
<a id="trace-15611"></a>
- 135.30s–135.30s (×1), actor 5, squad 0 (trace 15611): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 15493. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6047996628820337, 'next_transition': 2102}.
<a id="trace-2102"></a>
- 136.25s–136.25s (×1), actor 5, squad 0 (events line 2102): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15633"></a>
- 136.25s–136.25s (×1), actor 5, squad 0 (trace 15633): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.197407 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 136.25s, trace 15633. Next observer evidence: None.
<a id="trace-15634"></a>
- 136.25s–136.25s (×1), actor 5, squad 0 (trace 15634): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.197407 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 136.25s, trace 15634. Next observer evidence: None.
<a id="trace-15636"></a>
<a id="trace-15662"></a>
- 136.30s–137.30s (×2), actor 5, squad 0 (trace 15636): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 136.25s, trace 15634. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1474136425388028, 'next_transition': 15662}.
<a id="trace-15679"></a>
- 138.20s–138.20s (×1), actor 1, squad 0 (trace 15679): Withdraw to received rally. Knowledge: actor memory at 135.00s, trace 15491. Next observer evidence: None.
<a id="trace-15680"></a>
- 138.20s–138.20s (×1), actor 1, squad 0 (trace 15680): rearward bound: one stationary suppressing element. Knowledge: actor memory at 135.00s, trace 15491. Next observer evidence: None.
<a id="trace-15802"></a>
<a id="trace-15817"></a>
<a id="trace-15893"></a>
<a id="trace-15912"></a>
<a id="trace-15927"></a>
<a id="trace-15941"></a>
<a id="trace-15965"></a>
<a id="trace-16037"></a>
<a id="trace-16052"></a>
<a id="trace-16064"></a>
<a id="trace-16077"></a>
<a id="trace-16095"></a>
<a id="trace-16177"></a>
- 138.30s–150.30s (×13), actor 5, squad 0 (trace 15802): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 136.25s, trace 15634. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0710010073948661, 'next_transition': 15817}.
<a id="trace-16181"></a>
- 150.45s–150.45s (×1), actor 1, squad 0 (trace 16181): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 16106. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6048014083243441, 'next_transition': 16252}.
<a id="trace-16182"></a>
- 150.45s–150.45s (×1), actor 1, squad 0 (trace 16182): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 16106. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6048014083243441, 'next_transition': 16252}.
<a id="trace-16252"></a>
<a id="trace-16268"></a>
<a id="trace-16289"></a>
<a id="trace-16303"></a>
<a id="trace-16372"></a>
<a id="trace-16389"></a>
<a id="trace-16410"></a>
<a id="trace-16428"></a>
<a id="trace-16439"></a>
<a id="trace-16507"></a>
<a id="trace-16524"></a>
<a id="trace-16540"></a>
<a id="trace-16558"></a>
<a id="trace-16572"></a>
<a id="trace-16645"></a>
<a id="trace-16662"></a>
<a id="trace-16674"></a>
<a id="trace-16692"></a>
<a id="trace-16705"></a>
- 151.30s–169.30s (×19), actor 5, squad 0 (trace 16252): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 16108. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18632662480469905, 'next_transition': 16268}.
<a id="trace-16710"></a>
- 169.45s–169.45s (×1), actor 1, squad 0 (trace 16710): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 165.00s, trace 16584. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200055282993364, 'next_transition': 16838}.
<a id="trace-16711"></a>
- 169.45s–169.45s (×1), actor 1, squad 0 (trace 16711): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 165.00s, trace 16584. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200055282993364, 'next_transition': 16838}.
<a id="trace-16838"></a>
<a id="trace-16855"></a>
<a id="trace-16877"></a>
<a id="trace-16893"></a>
<a id="trace-16909"></a>
<a id="trace-16982"></a>
<a id="trace-16997"></a>
- 170.30s–176.30s (×7), actor 5, squad 0 (trace 16838): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 16773. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.050008306845446, 'next_transition': 16855}.
<a id="trace-17005"></a>
- 176.70s–176.70s (×1), actor 1, squad 0 (trace 17005): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 175.00s, trace 16921. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5250041534227253, 'next_transition': 17068}.
<a id="trace-17006"></a>
- 176.70s–176.70s (×1), actor 1, squad 0 (trace 17006): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 175.00s, trace 16921. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5250041534227253, 'next_transition': 17068}.
<a id="trace-17068"></a>
<a id="trace-17094"></a>
<a id="trace-17106"></a>
<a id="trace-17179"></a>
<a id="trace-17201"></a>
<a id="trace-17215"></a>
<a id="trace-17233"></a>
<a id="trace-17246"></a>
<a id="trace-17320"></a>
<a id="trace-17338"></a>
<a id="trace-17351"></a>
<a id="trace-17373"></a>
<a id="trace-17386"></a>
<a id="trace-17460"></a>
<a id="trace-17472"></a>
<a id="trace-17490"></a>
- 177.30s–192.30s (×16), actor 5, squad 0 (trace 17068): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 16923. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1395585494509444, 'next_transition': 17094}.
<a id="trace-17504"></a>
- 192.85s–192.85s (×1), actor 1, squad 0 (trace 17504): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 190.00s, trace 17395. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000302247589466, 'next_transition': 17564}.
<a id="trace-17505"></a>
- 192.85s–192.85s (×1), actor 1, squad 0 (trace 17505): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 190.00s, trace 17395. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000302247589466, 'next_transition': 17564}.
<a id="trace-17564"></a>
<a id="trace-17587"></a>
- 193.30s–194.30s (×2), actor 5, squad 0 (trace 17564): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 17397. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5774789077437312, 'next_transition': 17587}.
<a id="trace-17611"></a>
- 195.05s–195.05s (×1), actor 1, squad 0 (trace 17611): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 195.00s, trace 17598. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17716}.
<a id="trace-17612"></a>
- 195.05s–195.05s (×1), actor 1, squad 0 (trace 17612): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 195.00s, trace 17598. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17716}.
<a id="trace-17716"></a>
- 195.30s–195.30s (×1), actor 5, squad 0 (trace 17716): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 17600. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2302}.
<a id="trace-2302"></a>
- 196.25s–196.25s (×1), actor 5, squad 0 (events line 2302): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17735"></a>
- 196.25s–196.25s (×1), actor 5, squad 0 (trace 17735): renew committed intent (75 s lifetime). Knowledge: actor memory at 196.25s, trace 17735. Next observer evidence: None.
<a id="trace-17738"></a>
<a id="trace-17754"></a>
- 196.30s–197.30s (×2), actor 5, squad 0 (trace 17738): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 196.25s, trace 17735. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6803646244641338, 'next_transition': 17754}.
<a id="trace-17766"></a>
- 197.80s–197.80s (×1), actor 1, squad 0 (trace 17766): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 195.00s, trace 17598. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3024131757858578, 'next_transition': 17773}.
<a id="trace-17773"></a>
<a id="trace-17794"></a>
<a id="trace-17869"></a>
- 198.30s–200.30s (×3), actor 5, squad 0 (trace 17773): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 196.25s, trace 17735. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5291884362976129, 'next_transition': 17794}.
<a id="trace-2320"></a>
- 200.65s–200.65s (×1), actor 5, squad 0 (events line 2320): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17880"></a>
- 200.65s–200.65s (×1), actor 5, squad 0 (trace 17880): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.157938 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 200.65s, trace 17880. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9407756442669074, 'next_transition': 17896}.
<a id="trace-17881"></a>
- 200.65s–200.65s (×1), actor 5, squad 0 (trace 17881): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.157938 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 200.65s, trace 17881. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9407756442669074, 'next_transition': 17896}.
<a id="trace-17896"></a>
<a id="trace-17912"></a>
- 201.30s–202.30s (×2), actor 5, squad 0 (trace 17896): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.65s, trace 17881. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3674873678856969, 'next_transition': 17912}.
<a id="trace-17918"></a>
- 202.45s–202.45s (×1), actor 1, squad 0 (trace 17918): MoveTactically. Knowledge: actor memory at 200.00s, trace 17804. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17982}.
<a id="trace-17919"></a>
- 202.45s–202.45s (×1), actor 1, squad 0 (trace 17919): traveling overwatch. Knowledge: actor memory at 200.00s, trace 17804. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17982}.
<a id="trace-17920"></a>
- 202.45s–202.45s (×1), actor 1, squad 0 (trace 17920): received platoon directive. Knowledge: actor memory at 200.00s, trace 17804. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17982}.
<a id="trace-17982"></a>
<a id="trace-17997"></a>
<a id="trace-18071"></a>
<a id="trace-18091"></a>
<a id="trace-18105"></a>
<a id="trace-18122"></a>
<a id="trace-18138"></a>
- 203.30s–209.30s (×7), actor 5, squad 0 (trace 17982): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.65s, trace 17881. Next observer evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37798597563637076, 'next_transition': 17997}.
<a id="trace-2359"></a>
- 210.25s–210.25s (×1), actor 5, squad 0 (events line 2359): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18210"></a>
- 210.25s–210.25s (×1), actor 5, squad 0 (trace 18210): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 210.25s, trace 18210. Next observer evidence: None.
<a id="trace-18211"></a>
- 210.25s–210.25s (×1), actor 5, squad 0 (trace 18211): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 210.25s, trace 18211. Next observer evidence: None.
<a id="trace-18213"></a>
<a id="trace-18227"></a>
- 210.30s–211.30s (×2), actor 5, squad 0 (trace 18213): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.25s, trace 18211. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560086963050682, 'next_transition': 18227}.
<a id="trace-18241"></a>
- 212.20s–212.20s (×1), actor 1, squad 0 (trace 18241): traveling. Knowledge: actor memory at 210.00s, trace 18147. Next observer evidence: None.
<a id="trace-18242"></a>
- 212.20s–212.20s (×1), actor 1, squad 0 (trace 18242): received platoon directive. Knowledge: actor memory at 210.00s, trace 18147. Next observer evidence: None.
<a id="trace-18349"></a>
<a id="trace-18373"></a>
<a id="trace-18397"></a>
<a id="trace-18471"></a>
<a id="trace-18490"></a>
<a id="trace-18508"></a>
<a id="trace-18524"></a>
<a id="trace-18538"></a>
<a id="trace-18613"></a>
<a id="trace-18634"></a>
- 212.30s–221.30s (×10), actor 5, squad 0 (trace 18349): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.25s, trace 18211. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.596003583749997, 'next_transition': 18373}.
<a id="trace-18644"></a>
- 222.05s–222.05s (×1), actor 1, squad 0 (trace 18644): matching received arrivals: traveling stage complete. Knowledge: actor memory at 220.00s, trace 18549. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199776151604578, 'next_transition': 18754}.
<a id="trace-18754"></a>
<a id="trace-18774"></a>
<a id="trace-18791"></a>
<a id="trace-18864"></a>
<a id="trace-18883"></a>
<a id="trace-18902"></a>
<a id="trace-18925"></a>
<a id="trace-18944"></a>
<a id="trace-19015"></a>
<a id="trace-19030"></a>
<a id="trace-19048"></a>
<a id="trace-19066"></a>
- 222.30s–233.30s (×12), actor 5, squad 0 (trace 18754): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 18551. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9520206350398617, 'next_transition': 18774}.
<a id="trace-19078"></a>
- 233.65s–233.65s (×1), actor 1, squad 0 (trace 19078): matching received arrivals: deployment leg complete. Knowledge: actor memory at 230.00s, trace 18953. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629980667251869, 'next_transition': 19090}.
<a id="trace-19090"></a>
<a id="trace-19157"></a>
<a id="trace-19173"></a>
- 234.30s–236.30s (×3), actor 5, squad 0 (trace 19090): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 18955. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0500231113858607, 'next_transition': 19157}.
<a id="trace-2451"></a>
- 236.65s–236.65s (×1), actor 5, squad 0 (events line 2451): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19178"></a>
- 236.65s–236.65s (×1), actor 5, squad 0 (trace 19178): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 236.65s, trace 19178. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19187}.
<a id="trace-19179"></a>
- 236.65s–236.65s (×1), actor 5, squad 0 (trace 19179): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 236.65s, trace 19179. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19187}.
<a id="trace-19187"></a>
<a id="trace-19199"></a>
- 237.30s–238.30s (×2), actor 5, squad 0 (trace 19187): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 236.65s, trace 19179. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19199}.
<a id="trace-19203"></a>
- 238.45s–238.45s (×1), actor 1, squad 0 (trace 19203): Reorganise: completed/failed drill. Knowledge: actor memory at 235.00s, trace 19096. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19276}.
<a id="trace-19206"></a>
- 238.45s–238.45s (×1), actor 1, squad 0 (trace 19206): MoveTactically. Knowledge: actor memory at 235.00s, trace 19096. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19276}.
<a id="trace-19207"></a>
- 238.45s–238.45s (×1), actor 1, squad 0 (trace 19207): traveling overwatch. Knowledge: actor memory at 235.00s, trace 19096. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19276}.
<a id="trace-19208"></a>
- 238.45s–238.45s (×1), actor 1, squad 0 (trace 19208): Reorganise complete. Knowledge: actor memory at 235.00s, trace 19096. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19276}.
<a id="trace-19276"></a>
<a id="trace-19350"></a>
<a id="trace-19375"></a>
<a id="trace-19389"></a>
<a id="trace-19401"></a>
<a id="trace-19414"></a>
<a id="trace-19485"></a>
<a id="trace-19504"></a>
<a id="trace-19525"></a>
<a id="trace-19543"></a>
<a id="trace-19560"></a>
- 239.30s–249.30s (×11), actor 5, squad 0 (trace 19276): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 236.65s, trace 19179. Next observer evidence: {'until': 240.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37802899653627403, 'next_transition': 19350}.
<a id="trace-19564"></a>
- 249.50s–249.50s (×1), actor 1, squad 0 (trace 19564): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 245.00s, trace 19425. Next observer evidence: {'until': 250.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.7875073488193268, 'next_transition': 19684}.
<a id="trace-19684"></a>
<a id="trace-19694"></a>
<a id="trace-19709"></a>
<a id="trace-19723"></a>
<a id="trace-19735"></a>
<a id="trace-19803"></a>
<a id="trace-19815"></a>
<a id="trace-19826"></a>
<a id="trace-19838"></a>
<a id="trace-19846"></a>
<a id="trace-19912"></a>
<a id="trace-19927"></a>
<a id="trace-19940"></a>
<a id="trace-19950"></a>
<a id="trace-19959"></a>
<a id="trace-20023"></a>
<a id="trace-20033"></a>
<a id="trace-20044"></a>
<a id="trace-20059"></a>
<a id="trace-20069"></a>
<a id="trace-20134"></a>
<a id="trace-20144"></a>
<a id="trace-20158"></a>
<a id="trace-20169"></a>
<a id="trace-20178"></a>
<a id="trace-20246"></a>
<a id="trace-20259"></a>
<a id="trace-20269"></a>
<a id="trace-20282"></a>
<a id="trace-20294"></a>
<a id="trace-20358"></a>
<a id="trace-20369"></a>
<a id="trace-20384"></a>
<a id="trace-20395"></a>
<a id="trace-20405"></a>
<a id="trace-20476"></a>
<a id="trace-20485"></a>
<a id="trace-20494"></a>
<a id="trace-20507"></a>
<a id="trace-20522"></a>
<a id="trace-20589"></a>
<a id="trace-20601"></a>
<a id="trace-20614"></a>
<a id="trace-20625"></a>
<a id="trace-20636"></a>
<a id="trace-20707"></a>
<a id="trace-20717"></a>
- 250.30s–296.30s (×47), actor 5, squad 0 (trace 19684): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 19623. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19694}.
<a id="trace-2576"></a>
- 297.05s–297.05s (×1), actor 5, squad 0 (events line 2576): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20727"></a>
- 297.05s–297.05s (×1), actor 5, squad 0 (trace 20727): renew committed intent (75 s lifetime). Knowledge: actor memory at 297.05s, trace 20727. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20730}.
<a id="trace-20730"></a>
<a id="trace-20747"></a>
<a id="trace-20756"></a>
<a id="trace-20821"></a>
<a id="trace-20833"></a>
<a id="trace-20844"></a>
<a id="trace-20860"></a>
<a id="trace-20870"></a>
<a id="trace-20939"></a>
<a id="trace-20947"></a>
<a id="trace-20958"></a>
<a id="trace-20971"></a>
<a id="trace-20980"></a>
<a id="trace-21051"></a>
<a id="trace-21061"></a>
<a id="trace-21075"></a>
<a id="trace-21085"></a>
<a id="trace-21095"></a>
<a id="trace-21164"></a>
<a id="trace-21188"></a>
<a id="trace-21206"></a>
<a id="trace-21214"></a>
<a id="trace-21279"></a>
<a id="trace-21300"></a>
<a id="trace-21317"></a>
<a id="trace-21328"></a>
<a id="trace-21396"></a>
<a id="trace-21404"></a>
<a id="trace-21412"></a>
<a id="trace-21428"></a>
<a id="trace-21437"></a>
<a id="trace-21506"></a>
<a id="trace-21522"></a>
<a id="trace-21530"></a>
<a id="trace-21543"></a>
<a id="trace-21555"></a>
<a id="trace-21621"></a>
<a id="trace-21632"></a>
<a id="trace-21646"></a>
<a id="trace-21660"></a>
<a id="trace-21670"></a>
<a id="trace-21735"></a>
<a id="trace-21745"></a>
<a id="trace-21756"></a>
<a id="trace-21769"></a>
<a id="trace-21785"></a>
<a id="trace-21854"></a>
<a id="trace-21862"></a>
<a id="trace-21872"></a>
<a id="trace-21885"></a>
<a id="trace-21895"></a>
<a id="trace-21965"></a>
<a id="trace-21983"></a>
<a id="trace-21992"></a>
<a id="trace-22004"></a>
<a id="trace-22013"></a>
<a id="trace-22080"></a>
<a id="trace-22092"></a>
- 297.30s–356.30s (×58), actor 5, squad 0 (trace 20730): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 297.05s, trace 20727. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20747}.
<a id="trace-2694"></a>
- 357.05s–357.05s (×1), actor 5, squad 0 (events line 2694): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22101"></a>
- 357.05s–357.05s (×1), actor 5, squad 0 (trace 22101): renew committed intent (75 s lifetime). Knowledge: actor memory at 357.05s, trace 22101. Next observer evidence: {'until': 357.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22105}.
<a id="trace-22105"></a>
<a id="trace-22120"></a>
<a id="trace-22130"></a>
- 357.30s–359.30s (×3), actor 5, squad 0 (trace 22105): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 357.05s, trace 22101. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22120}.

## Net delivery

188 matched order/radio deliveries; 249 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.325s; maximum 2.200s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 1686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 1687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 1694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 1695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 2495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 2496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2501: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2502: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 2503: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 2504: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2505: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2506: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2507: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 2897: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 2898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2902: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2903: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2904: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 2905: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 2906: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2907: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2908: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2909: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2910: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 4426: estimate 9.33; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 4427: estimate 9.33; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4453: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4454: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4455: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4458: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4459: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4460: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4461: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4462: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4463: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4464: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4465: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4466: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4467: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4468: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 8106: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 8107: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 8108: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 8109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 8110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 8111: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 8112: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 8113: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 8114: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 8115: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 8116: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 8117: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 8118: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 8119: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 8120: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 8121: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 8430: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 8431: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 8432: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 8433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 8434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 8435: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 8436: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 8437: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 8438: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 8439: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 8440: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 8441: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 8442: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 8443: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 8444: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 8445: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 8872: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8873: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 8874: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 8875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8877: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8878: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8879: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8880: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8881: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8882: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8883: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8884: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8885: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8886: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8887: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 9769: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 9770: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 9771: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 9772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 9773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 9774: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 9775: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 9776: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 9777: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 9778: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 9779: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 9780: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 9781: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 9782: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 9783: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 9784: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 10569: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 10570: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 10571: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 10572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 10573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 10574: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 10575: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 10576: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 10577: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 10578: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 10579: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 10580: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 10581: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 10582: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 10583: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.05s leader 5, trace 10770: estimate 9.58; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 11304: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 11305: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 11306: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 11307: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 11308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 11309: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 11310: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 11311: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 11312: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 11313: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 11314: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 11315: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 11316: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 11317: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 11526: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 11527: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 11528: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 11529: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 11530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 11531: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 11532: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 11533: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 11534: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 11535: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 11536: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 11537: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 11538: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 11539: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 11779: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 11780: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 11781: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 11782: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 11783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 11784: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 11785: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 11786: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 11787: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 11788: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 11789: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 11790: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 11791: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 11792: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 12328: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 12329: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 12330: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 12331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 12332: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 12333: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 12334: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 12335: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 12336: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 12337: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 12338: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 12339: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 12340: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 12462: estimate 9.72; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 12463: estimate 9.72; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 12933: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 12934: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 12935: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 12936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 12937: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 12938: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 12939: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 12940: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 12941: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 12942: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 12943: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 12944: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 12945: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 13469: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 13470: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 13471: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 13472: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 13473: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 13474: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 13475: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 13476: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 13477: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 13478: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 13479: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 13480: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 13957: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 13958: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 13959: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 13960: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 13961: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 13962: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 13963: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 13964: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 13965: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 13966: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 13967: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 102.95s leader 5, trace 14132: estimate 9.64; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 102.95s leader 5, trace 14133: estimate 9.64; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 14295: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 14296: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 14297: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 14298: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 14299: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 14300: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 14301: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 14302: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 14303: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 14304: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 14305: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 14648: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 14649: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 14650: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 14651: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 14652: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 14653: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 14654: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 14655: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 14656: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 14657: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 14658: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 14873: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 14874: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 14875: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 14876: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 14877: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 14878: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 14879: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 14880: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 14881: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 14882: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 14883: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 14998: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 14999: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 15000: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 15001: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 15002: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 15003: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 15004: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 15005: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 15006: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 15007: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 15008: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 15136: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 15137: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 15138: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 15139: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 15140: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 15141: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 15142: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 15143: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 15144: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 15145: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 15265: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 15266: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 15267: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 15268: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 15269: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 15270: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 15271: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 15272: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 15273: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 15274: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 15491: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 15492: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 15493: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 15494: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 15495: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 15496: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 15497: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 15498: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 15499: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 15500: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.25s leader 5, trace 15633: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.25s leader 5, trace 15634: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 15831: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 15832: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 15833: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 15834: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 15835: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 15836: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 15837: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 15838: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 15839: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 15840: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 15977: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 15978: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 15979: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 15980: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 15981: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 15982: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 15983: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 15984: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 15985: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 15986: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 16106: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 16107: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 16108: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 16109: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 16110: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 16111: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 16112: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 16113: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 16114: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 16115: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 16309: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 16310: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 16311: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 16312: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 16313: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 16314: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 16315: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 16316: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 16317: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 16318: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 16445: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 16446: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 16447: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 16448: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 16449: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 16450: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 16451: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 16452: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 16453: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 16454: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 16584: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 16585: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 16586: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 16587: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 16588: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 16589: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 16590: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 16591: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 16592: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 16593: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 16771: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 16772: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 16773: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 16774: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 16775: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 16776: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 16777: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 16778: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 16779: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 16780: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 16921: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 16922: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 16923: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 16924: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 16925: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 16926: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 16927: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 16928: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 16929: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 16930: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 17117: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 17118: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 17119: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 17120: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 17121: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 17122: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 17123: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 17124: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 17125: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 17126: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 17259: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 17260: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 17261: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 17262: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 17263: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 17264: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 17265: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 17266: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 17267: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 17268: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 17395: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 17396: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 17397: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 17398: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 17399: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 17400: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 17401: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 17402: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 17403: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 17404: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 17598: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 17599: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 17600: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 17601: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 17602: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 17603: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 17604: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 17605: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 17606: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 17607: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 196.25s leader 5, trace 17735: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 17804: estimate 1.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 17805: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 17806: estimate 1.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 17807: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 17808: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 17809: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 17810: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 17811: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 17812: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 17813: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.65s leader 5, trace 17880: estimate 1.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.65s leader 5, trace 17881: estimate 1.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 18007: estimate 1.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 18008: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 18009: estimate 1.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 18010: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 18011: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 18012: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 18013: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 18014: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 18015: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 18016: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 18147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 18148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 18149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 18150: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 18151: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 18152: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 18153: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 18154: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 18155: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 18156: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.25s leader 5, trace 18210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.25s leader 5, trace 18211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 18412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 18413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 18414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 18415: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 18416: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 18417: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 18418: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 18419: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 18420: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 18421: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 18549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 18550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 18551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 18552: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 18553: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 18554: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 18555: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 18556: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 18557: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 18558: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 18804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 18805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 18806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 18807: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 18808: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 18809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 18810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 18811: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 18812: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 18813: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 18953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 18954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 18955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 18956: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 18957: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 18958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 18959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 18960: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 18961: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 18962: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 19096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 19097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 19098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 19099: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 19100: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 19101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 19102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 19103: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 19104: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 19105: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 236.65s leader 5, trace 19178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 236.65s leader 5, trace 19179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 19285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 19286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 19287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 19288: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 19289: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 19290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 19291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 19292: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 19293: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 19294: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 19425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 19426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 19427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 19428: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 19429: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 19430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 19431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 19432: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 19433: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 19434: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 19622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 19623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 19624: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 19625: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 19626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 19627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 19628: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 19629: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 19630: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 19744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 19745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 19746: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 19747: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 19748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 19749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 19750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 19751: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 19752: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 19854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 19855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 19856: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 19857: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 19858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 19859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 19860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 19861: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 19862: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 19965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 19966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 19967: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 19968: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 19969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 19970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 19971: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 19972: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 19973: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 20076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 20077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 20078: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 20079: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 20080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 20081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 20082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 20083: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 20084: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 20188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 20189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 20190: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 20191: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 20192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 20193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 20194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 20195: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 20196: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 20300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 20301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 20302: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 20303: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 20304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 20305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 20306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 20307: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 20308: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 20414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 20415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 20416: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 20417: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 20418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 20419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 20420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 20421: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 20422: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 20529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 20530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 20531: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 20532: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 20533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 20534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 20535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 20536: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 20537: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 20645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 20646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 20647: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 20648: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 20649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 20650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 20651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 20652: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 20653: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 297.05s leader 5, trace 20727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 20762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 20763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 20764: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 20765: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 20766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 20767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 20768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 20769: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 20770: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 20881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 20882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 20883: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 20884: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 20885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 20886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 20887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 20888: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 20889: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 20993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 20994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 20995: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 20996: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 20997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 20998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 20999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 21000: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 21001: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 21104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 21105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 21106: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 21107: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 21108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 21109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 21110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 21111: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 21112: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 21220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 21221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 21222: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 21223: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 21224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 21225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 21226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 21227: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 21228: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 21338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 21339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 21340: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 21341: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 21342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 21343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 21344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 21345: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 21346: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 21446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 21447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 21448: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 21449: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 21450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 21451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 21452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 21453: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 21454: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 21563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 21564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 21565: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 21566: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 21567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 21568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 21569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 21570: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 21571: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 21677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 21678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 21679: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 21680: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 21681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 21682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 21683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 21684: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 21685: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 21796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 21797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 21798: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 21799: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 21800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 21801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 21802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 21803: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 21804: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 21906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 21907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 21908: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 21909: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 21910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 21911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 21912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 21913: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 21914: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 22022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 22023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 22024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 22025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 22026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 22027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 22028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 22029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 22030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 357.05s leader 5, trace 22101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 22139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 22140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 22141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 22142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 22143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 22144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 22145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 22146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 22147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Reed killed in action
- 1: Orin incapacitated
- 1: Vale incapacitated
- 1: Soren killed in action
- 1: Ash incapacitated
- 1: Moss incapacitated
- 1: Tern killed in action

## Outcome attribution

- 136.25s, evidence 2102: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 136.25s, evidence 15633: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.197407 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 136.25s, evidence 15634: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.197407 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 196.25s, evidence 2302: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
