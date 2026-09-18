# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/14/109/good-azure/battle-109-1789673953042983336`

## Battle summary

**Ember** · 360 s · 676 shots.

### Turning points

- 26.1s, squad 4: contact (events line 302). First recorded contact.
- 49.2s, squad 0: help call ([trace 7252](#trace-7252)). No completion observed before termination.
- 95.2s, squad 0: withdrawal ([trace 10080](#trace-10080)). 117.2s, squad 0: took cover and returned fire.
- 121.2s, squad 0: withdrawal ([trace 11324](#trace-11324)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; no completed objective recorded; 35 shots, 5/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 641 shots, 2/8 lost.

### Decisions and attribution

At 91.5s, squad 0 chose took cover and returned fire ([trace 9771](#trace-9771)), followed by 2 shots and 0 own casualties; estimate 9.2 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 539](#trace-539)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 538](#trace-538)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150019978655959, 'next_transition': 551}.
- 31.1s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.527839 retreat threshold=0.500000 initiative=delegated ([trace 2771](#trace-2771)). Following evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14249527081370494, 'next_transition': 2782}.

### Communication

136 matched deliveries (mean 0.35s, max 1.55s); 251 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 26.10s, squad 4, contact, evidence events line 302: First recorded contact; .
- 49.15s, squad 0, help call, evidence 7252: NeedSupport; No completion observed before termination.
- 95.20s, squad 0, withdrawal, evidence 10080: BreakContact: believed ratio at least two without superiority; 117.2s, squad 0: took cover and returned fire.
- 121.15s, squad 0, withdrawal, evidence 11324: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8365665723242086, 'next_transition': 451}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8365665723242086, 'next_transition': 451}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8365665723242086, 'next_transition': 451}.
<a id="trace-451"></a>
<a id="trace-472"></a>
<a id="trace-498"></a>
<a id="trace-515"></a>
<a id="trace-531"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 451): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2300236968604237, 'next_transition': 472}.
<a id="trace-79"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 79): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150019978655959, 'next_transition': 551}.
<a id="trace-538"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 538): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 538. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150019978655959, 'next_transition': 551}.
<a id="trace-539"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 539): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 539. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150019978655959, 'next_transition': 551}.
<a id="trace-551"></a>
<a id="trace-574"></a>
<a id="trace-651"></a>
<a id="trace-670"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 551): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 539. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150001684041189, 'next_transition': 574}.
<a id="trace-672"></a>
<a id="trace-1010"></a>
<a id="trace-1039"></a>
<a id="trace-1071"></a>
<a id="trace-1122"></a>
<a id="trace-1166"></a>
<a id="trace-1181"></a>
<a id="trace-1200"></a>
<a id="trace-1284"></a>
<a id="trace-1303"></a>
<a id="trace-1321"></a>
<a id="trace-1342"></a>
<a id="trace-1385"></a>
<a id="trace-1401"></a>
<a id="trace-1414"></a>
<a id="trace-1450"></a>
<a id="trace-1529"></a>
<a id="trace-1547"></a>
<a id="trace-1706"></a>
<a id="trace-1735"></a>
<a id="trace-1758"></a>
<a id="trace-1797"></a>
<a id="trace-1823"></a>
<a id="trace-1853"></a>
<a id="trace-1932"></a>
<a id="trace-1954"></a>
<a id="trace-1969"></a>
<a id="trace-1981"></a>
<a id="trace-1999"></a>
<a id="trace-2163"></a>
<a id="trace-2177"></a>
<a id="trace-2188"></a>
<a id="trace-2223"></a>
<a id="trace-2308"></a>
<a id="trace-2323"></a>
<a id="trace-2345"></a>
<a id="trace-2360"></a>
<a id="trace-2533"></a>
<a id="trace-2552"></a>
<a id="trace-2592"></a>
<a id="trace-2624"></a>
<a id="trace-2651"></a>
<a id="trace-2749"></a>
<a id="trace-2767"></a>
<a id="trace-2784"></a>
<a id="trace-2794"></a>
<a id="trace-2809"></a>
<a id="trace-2823"></a>
<a id="trace-2840"></a>
<a id="trace-2847"></a>
<a id="trace-3082"></a>
<a id="trace-3090"></a>
<a id="trace-3182"></a>
<a id="trace-3196"></a>
<a id="trace-3254"></a>
<a id="trace-3275"></a>
<a id="trace-3284"></a>
<a id="trace-3297"></a>
<a id="trace-3328"></a>
<a id="trace-3361"></a>
<a id="trace-3389"></a>
<a id="trace-6559"></a>
<a id="trace-6601"></a>
<a id="trace-6652"></a>
<a id="trace-6679"></a>
<a id="trace-6731"></a>
<a id="trace-6762"></a>
<a id="trace-6782"></a>
<a id="trace-6798"></a>
<a id="trace-6815"></a>
<a id="trace-6890"></a>
<a id="trace-6918"></a>
<a id="trace-6961"></a>
<a id="trace-7000"></a>
<a id="trace-7051"></a>
<a id="trace-7106"></a>
<a id="trace-7160"></a>
<a id="trace-7420"></a>
<a id="trace-7475"></a>
<a id="trace-7522"></a>
<a id="trace-7546"></a>
<a id="trace-7580"></a>
<a id="trace-7637"></a>
<a id="trace-7652"></a>
<a id="trace-7692"></a>
<a id="trace-8007"></a>
<a id="trace-8022"></a>
<a id="trace-8039"></a>
<a id="trace-8067"></a>
<a id="trace-8081"></a>
<a id="trace-8104"></a>
<a id="trace-8121"></a>
<a id="trace-8130"></a>
<a id="trace-8145"></a>
<a id="trace-8221"></a>
<a id="trace-8248"></a>
<a id="trace-8456"></a>
<a id="trace-8473"></a>
<a id="trace-8478"></a>
<a id="trace-8494"></a>
<a id="trace-8503"></a>
<a id="trace-8589"></a>
<a id="trace-8599"></a>
<a id="trace-8630"></a>
<a id="trace-8657"></a>
<a id="trace-8707"></a>
<a id="trace-8758"></a>
<a id="trace-8779"></a>
<a id="trace-8787"></a>
<a id="trace-8875"></a>
<a id="trace-8880"></a>
<a id="trace-8891"></a>
<a id="trace-8897"></a>
<a id="trace-8907"></a>
<a id="trace-8911"></a>
<a id="trace-9013"></a>
<a id="trace-9022"></a>
<a id="trace-9034"></a>
<a id="trace-9041"></a>
<a id="trace-9108"></a>
<a id="trace-9113"></a>
<a id="trace-9141"></a>
<a id="trace-9148"></a>
<a id="trace-9164"></a>
<a id="trace-9171"></a>
<a id="trace-9176"></a>
<a id="trace-9543"></a>
<a id="trace-9574"></a>
<a id="trace-9601"></a>
<a id="trace-9615"></a>
<a id="trace-9633"></a>
<a id="trace-9649"></a>
<a id="trace-9667"></a>
<a id="trace-9674"></a>
<a id="trace-9748"></a>
<a id="trace-9765"></a>
<a id="trace-9973"></a>
<a id="trace-9984"></a>
<a id="trace-9993"></a>
<a id="trace-10008"></a>
<a id="trace-10257"></a>
<a id="trace-10273"></a>
<a id="trace-10287"></a>
<a id="trace-10296"></a>
<a id="trace-10322"></a>
<a id="trace-10338"></a>
<a id="trace-10419"></a>
<a id="trace-10425"></a>
<a id="trace-10438"></a>
<a id="trace-10451"></a>
<a id="trace-10463"></a>
<a id="trace-10472"></a>
<a id="trace-10499"></a>
<a id="trace-10508"></a>
<a id="trace-10521"></a>
<a id="trace-10534"></a>
<a id="trace-10614"></a>
<a id="trace-10628"></a>
<a id="trace-10639"></a>
<a id="trace-10657"></a>
<a id="trace-10673"></a>
<a id="trace-10681"></a>
<a id="trace-10696"></a>
<a id="trace-10702"></a>
<a id="trace-10782"></a>
<a id="trace-10796"></a>
<a id="trace-10814"></a>
<a id="trace-10930"></a>
<a id="trace-10947"></a>
<a id="trace-10967"></a>
<a id="trace-10984"></a>
<a id="trace-10995"></a>
<a id="trace-11007"></a>
<a id="trace-11087"></a>
<a id="trace-11099"></a>
<a id="trace-11114"></a>
<a id="trace-11121"></a>
<a id="trace-11180"></a>
<a id="trace-11217"></a>
<a id="trace-11226"></a>
<a id="trace-11233"></a>
<a id="trace-11309"></a>
<a id="trace-11423"></a>
<a id="trace-11463"></a>
<a id="trace-11479"></a>
<a id="trace-11495"></a>
<a id="trace-11600"></a>
<a id="trace-11609"></a>
<a id="trace-11619"></a>
<a id="trace-11632"></a>
<a id="trace-11640"></a>
<a id="trace-11655"></a>
<a id="trace-11722"></a>
<a id="trace-11731"></a>
<a id="trace-11742"></a>
<a id="trace-11748"></a>
<a id="trace-11755"></a>
<a id="trace-11761"></a>
<a id="trace-11770"></a>
<a id="trace-11775"></a>
<a id="trace-11784"></a>
<a id="trace-11789"></a>
<a id="trace-11857"></a>
<a id="trace-11864"></a>
<a id="trace-11871"></a>
<a id="trace-11876"></a>
<a id="trace-11885"></a>
<a id="trace-11901"></a>
<a id="trace-11906"></a>
<a id="trace-11913"></a>
<a id="trace-11917"></a>
<a id="trace-11983"></a>
<a id="trace-11990"></a>
<a id="trace-12001"></a>
<a id="trace-12008"></a>
<a id="trace-12017"></a>
<a id="trace-12027"></a>
<a id="trace-12033"></a>
<a id="trace-12044"></a>
<a id="trace-12051"></a>
<a id="trace-12132"></a>
<a id="trace-12137"></a>
<a id="trace-12144"></a>
<a id="trace-12150"></a>
<a id="trace-12159"></a>
<a id="trace-12163"></a>
<a id="trace-12170"></a>
<a id="trace-12176"></a>
<a id="trace-12241"></a>
<a id="trace-12250"></a>
<a id="trace-12262"></a>
<a id="trace-12276"></a>
<a id="trace-12288"></a>
<a id="trace-12295"></a>
<a id="trace-12365"></a>
<a id="trace-12382"></a>
<a id="trace-12387"></a>
<a id="trace-12396"></a>
<a id="trace-12403"></a>
<a id="trace-12412"></a>
<a id="trace-12416"></a>
<a id="trace-12490"></a>
<a id="trace-12497"></a>
<a id="trace-12509"></a>
<a id="trace-12531"></a>
<a id="trace-12535"></a>
<a id="trace-12545"></a>
<a id="trace-12550"></a>
<a id="trace-12614"></a>
<a id="trace-12628"></a>
<a id="trace-12642"></a>
<a id="trace-12650"></a>
<a id="trace-12658"></a>
<a id="trace-12670"></a>
<a id="trace-12675"></a>
<a id="trace-12740"></a>
<a id="trace-12755"></a>
<a id="trace-12759"></a>
<a id="trace-12773"></a>
<a id="trace-12782"></a>
<a id="trace-12789"></a>
<a id="trace-12799"></a>
<a id="trace-12804"></a>
<a id="trace-12868"></a>
<a id="trace-12875"></a>
<a id="trace-12883"></a>
<a id="trace-12888"></a>
<a id="trace-12897"></a>
<a id="trace-12910"></a>
<a id="trace-12915"></a>
<a id="trace-12924"></a>
<a id="trace-12996"></a>
<a id="trace-13004"></a>
<a id="trace-13012"></a>
<a id="trace-13016"></a>
<a id="trace-13024"></a>
<a id="trace-13032"></a>
<a id="trace-13041"></a>
<a id="trace-13047"></a>
<a id="trace-13055"></a>
<a id="trace-13060"></a>
<a id="trace-13139"></a>
<a id="trace-13146"></a>
<a id="trace-13160"></a>
<a id="trace-13168"></a>
<a id="trace-13180"></a>
<a id="trace-13186"></a>
<a id="trace-13252"></a>
<a id="trace-13265"></a>
<a id="trace-13277"></a>
<a id="trace-13294"></a>
<a id="trace-13307"></a>
<a id="trace-13312"></a>
<a id="trace-13382"></a>
<a id="trace-13402"></a>
<a id="trace-13416"></a>
<a id="trace-13420"></a>
<a id="trace-13430"></a>
<a id="trace-13435"></a>
<a id="trace-13502"></a>
<a id="trace-13510"></a>
<a id="trace-13521"></a>
<a id="trace-13529"></a>
<a id="trace-13548"></a>
<a id="trace-13630"></a>
<a id="trace-13639"></a>
<a id="trace-13646"></a>
<a id="trace-13660"></a>
<a id="trace-13668"></a>
<a id="trace-13673"></a>
<a id="trace-13681"></a>
<a id="trace-13687"></a>
<a id="trace-13753"></a>
<a id="trace-13766"></a>
<a id="trace-13771"></a>
<a id="trace-13779"></a>
<a id="trace-13786"></a>
<a id="trace-13797"></a>
<a id="trace-13803"></a>
<a id="trace-13811"></a>
<a id="trace-13816"></a>
<a id="trace-13881"></a>
<a id="trace-13887"></a>
<a id="trace-13896"></a>
<a id="trace-13902"></a>
<a id="trace-13909"></a>
<a id="trace-13915"></a>
<a id="trace-13924"></a>
<a id="trace-13929"></a>
<a id="trace-14010"></a>
<a id="trace-14016"></a>
<a id="trace-14028"></a>
<a id="trace-14035"></a>
<a id="trace-14042"></a>
<a id="trace-14052"></a>
<a id="trace-14056"></a>
<a id="trace-14064"></a>
<a id="trace-14070"></a>
<a id="trace-14135"></a>
<a id="trace-14152"></a>
<a id="trace-14156"></a>
<a id="trace-14165"></a>
<a id="trace-14171"></a>
<a id="trace-14195"></a>
<a id="trace-14261"></a>
<a id="trace-14267"></a>
<a id="trace-14276"></a>
<a id="trace-14280"></a>
<a id="trace-14289"></a>
<a id="trace-14295"></a>
<a id="trace-14306"></a>
<a id="trace-14312"></a>
<a id="trace-14320"></a>
<a id="trace-14325"></a>
<a id="trace-14402"></a>
<a id="trace-14408"></a>
<a id="trace-14415"></a>
<a id="trace-14421"></a>
<a id="trace-14430"></a>
<a id="trace-14435"></a>
<a id="trace-14444"></a>
<a id="trace-14452"></a>
<a id="trace-14518"></a>
<a id="trace-14524"></a>
<a id="trace-14532"></a>
<a id="trace-14537"></a>
<a id="trace-14550"></a>
<a id="trace-14562"></a>
<a id="trace-14566"></a>
<a id="trace-14574"></a>
<a id="trace-14580"></a>
<a id="trace-14651"></a>
<a id="trace-14662"></a>
<a id="trace-14668"></a>
<a id="trace-14675"></a>
<a id="trace-14681"></a>
<a id="trace-14690"></a>
<a id="trace-14694"></a>
<a id="trace-14703"></a>
<a id="trace-14710"></a>
<a id="trace-14774"></a>
<a id="trace-14780"></a>
<a id="trace-14789"></a>
<a id="trace-14794"></a>
<a id="trace-14810"></a>
<a id="trace-14823"></a>
<a id="trace-14831"></a>
<a id="trace-14837"></a>
<a id="trace-14901"></a>
<a id="trace-14908"></a>
<a id="trace-14921"></a>
<a id="trace-14928"></a>
<a id="trace-14943"></a>
<a id="trace-14948"></a>
<a id="trace-14959"></a>
<a id="trace-14964"></a>
<a id="trace-15030"></a>
<a id="trace-15044"></a>
<a id="trace-15048"></a>
<a id="trace-15056"></a>
<a id="trace-15062"></a>
<a id="trace-15072"></a>
<a id="trace-15076"></a>
<a id="trace-15089"></a>
<a id="trace-15155"></a>
<a id="trace-15171"></a>
<a id="trace-15177"></a>
<a id="trace-15184"></a>
<a id="trace-15198"></a>
<a id="trace-15202"></a>
<a id="trace-15285"></a>
<a id="trace-15298"></a>
<a id="trace-15306"></a>
<a id="trace-15315"></a>
<a id="trace-15328"></a>
<a id="trace-15336"></a>
<a id="trace-15420"></a>
<a id="trace-15424"></a>
<a id="trace-15431"></a>
<a id="trace-15438"></a>
<a id="trace-15447"></a>
<a id="trace-15452"></a>
<a id="trace-15532"></a>
<a id="trace-15538"></a>
<a id="trace-15547"></a>
<a id="trace-15558"></a>
<a id="trace-15566"></a>
<a id="trace-15577"></a>
<a id="trace-15586"></a>
<a id="trace-15592"></a>
<a id="trace-15665"></a>
<a id="trace-15675"></a>
<a id="trace-15679"></a>
<a id="trace-15686"></a>
<a id="trace-15700"></a>
<a id="trace-15705"></a>
<a id="trace-15715"></a>
<a id="trace-15783"></a>
<a id="trace-15790"></a>
<a id="trace-15799"></a>
<a id="trace-15804"></a>
<a id="trace-15819"></a>
<a id="trace-15829"></a>
<a id="trace-15833"></a>
<a id="trace-15842"></a>
<a id="trace-15847"></a>
<a id="trace-15912"></a>
<a id="trace-15918"></a>
<a id="trace-15928"></a>
<a id="trace-15932"></a>
<a id="trace-15940"></a>
<a id="trace-15946"></a>
<a id="trace-15956"></a>
<a id="trace-15960"></a>
<a id="trace-15971"></a>
<a id="trace-15978"></a>
<a id="trace-16042"></a>
<a id="trace-16048"></a>
<a id="trace-16058"></a>
<a id="trace-16063"></a>
<a id="trace-16071"></a>
<a id="trace-16079"></a>
<a id="trace-16090"></a>
<a id="trace-16105"></a>
<a id="trace-16178"></a>
<a id="trace-16188"></a>
<a id="trace-16199"></a>
<a id="trace-16206"></a>
<a id="trace-16214"></a>
<a id="trace-16228"></a>
<a id="trace-16232"></a>
<a id="trace-16310"></a>
<a id="trace-16325"></a>
<a id="trace-16333"></a>
<a id="trace-16341"></a>
<a id="trace-16345"></a>
<a id="trace-16357"></a>
<a id="trace-16422"></a>
<a id="trace-16430"></a>
<a id="trace-16438"></a>
<a id="trace-16450"></a>
<a id="trace-16459"></a>
<a id="trace-16468"></a>
<a id="trace-16475"></a>
<a id="trace-16488"></a>
<a id="trace-16552"></a>
<a id="trace-16559"></a>
<a id="trace-16567"></a>
<a id="trace-16586"></a>
<a id="trace-16594"></a>
<a id="trace-16599"></a>
<a id="trace-16612"></a>
<a id="trace-16679"></a>
<a id="trace-16697"></a>
<a id="trace-16705"></a>
<a id="trace-16720"></a>
<a id="trace-16724"></a>
<a id="trace-16734"></a>
<a id="trace-16738"></a>
<a id="trace-16808"></a>
<a id="trace-16818"></a>
<a id="trace-16822"></a>
<a id="trace-16832"></a>
<a id="trace-16841"></a>
<a id="trace-16849"></a>
<a id="trace-16863"></a>
<a id="trace-16867"></a>
<a id="trace-16946"></a>
<a id="trace-16950"></a>
<a id="trace-16958"></a>
<a id="trace-16965"></a>
<a id="trace-16974"></a>
<a id="trace-16982"></a>
<a id="trace-16992"></a>
<a id="trace-17059"></a>
<a id="trace-17066"></a>
<a id="trace-17074"></a>
<a id="trace-17092"></a>
<a id="trace-17100"></a>
<a id="trace-17106"></a>
<a id="trace-17115"></a>
<a id="trace-17120"></a>
<a id="trace-17187"></a>
<a id="trace-17195"></a>
<a id="trace-17203"></a>
<a id="trace-17207"></a>
<a id="trace-17220"></a>
<a id="trace-17235"></a>
<a id="trace-17248"></a>
<a id="trace-17313"></a>
<a id="trace-17320"></a>
<a id="trace-17329"></a>
<a id="trace-17336"></a>
<a id="trace-17345"></a>
<a id="trace-17351"></a>
<a id="trace-17359"></a>
<a id="trace-17364"></a>
<a id="trace-17372"></a>
<a id="trace-17378"></a>
<a id="trace-17444"></a>
<a id="trace-17450"></a>
<a id="trace-17458"></a>
<a id="trace-17470"></a>
<a id="trace-17477"></a>
<a id="trace-17488"></a>
<a id="trace-17492"></a>
<a id="trace-17502"></a>
- 5.70s–359.30s (×547), actor 37, squad 4 (trace 672): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 594. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.039375, 'next_transition': 1010}.
<a id="trace-682"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 682): received platoon directive. Knowledge: actor memory at 5.00s, trace 581. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5411359900723998, 'next_transition': 1008}.
<a id="trace-1008"></a>
<a id="trace-1037"></a>
<a id="trace-1069"></a>
<a id="trace-1096"></a>
<a id="trace-1120"></a>
<a id="trace-1164"></a>
<a id="trace-1179"></a>
<a id="trace-1198"></a>
<a id="trace-1282"></a>
<a id="trace-1301"></a>
<a id="trace-1319"></a>
<a id="trace-1340"></a>
<a id="trace-1364"></a>
<a id="trace-1383"></a>
<a id="trace-1399"></a>
<a id="trace-1412"></a>
<a id="trace-1434"></a>
<a id="trace-1448"></a>
<a id="trace-1527"></a>
<a id="trace-1545"></a>
- 6.20s–15.70s (×20), actor 5, squad 0 (trace 1008): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 586. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150018770511548, 'next_transition': 1037}.
<a id="trace-1551"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 1551): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1452. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06374394579095355, 'next_transition': 1704}.
<a id="trace-1552"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 1552): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1452. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06374394579095355, 'next_transition': 1704}.
<a id="trace-1704"></a>
<a id="trace-1733"></a>
<a id="trace-1756"></a>
<a id="trace-1769"></a>
<a id="trace-1795"></a>
<a id="trace-1821"></a>
<a id="trace-1837"></a>
<a id="trace-1851"></a>
<a id="trace-1930"></a>
<a id="trace-1952"></a>
<a id="trace-1967"></a>
<a id="trace-1979"></a>
<a id="trace-1997"></a>
- 16.25s–22.25s (×13), actor 5, squad 0 (trace 1704): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1457. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1275001329656168, 'next_transition': 1733}.
<a id="trace-2004"></a>
- 22.70s–22.70s (×1), actor 0, squad 0 (trace 2004): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1857. Next observer evidence: None.
<a id="trace-2161"></a>
<a id="trace-2175"></a>
<a id="trace-2186"></a>
<a id="trace-2207"></a>
<a id="trace-2221"></a>
<a id="trace-2306"></a>
<a id="trace-2321"></a>
<a id="trace-2343"></a>
<a id="trace-2358"></a>
- 22.75s–26.75s (×9), actor 5, squad 0 (trace 2161): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1862. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2175}.
<a id="trace-2364"></a>
- 27.00s–27.00s (×1), actor 0, squad 0 (trace 2364): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 2229. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.14250376464894565, 'next_transition': 2531}.
<a id="trace-2365"></a>
- 27.00s–27.00s (×1), actor 0, squad 0 (trace 2365): bounding overwatch. Knowledge: actor memory at 25.00s, trace 2229. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.14250376464894565, 'next_transition': 2531}.
<a id="trace-2366"></a>
- 27.00s–27.00s (×1), actor 0, squad 0 (trace 2366): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 2229. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.14250376464894565, 'next_transition': 2531}.
<a id="trace-2531"></a>
<a id="trace-2550"></a>
<a id="trace-2590"></a>
<a id="trace-2610"></a>
<a id="trace-2622"></a>
<a id="trace-2649"></a>
<a id="trace-2747"></a>
- 27.25s–30.25s (×7), actor 5, squad 0 (trace 2531): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2234. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29780462597394003, 'next_transition': 2550}.
<a id="trace-2754"></a>
- 30.55s–30.55s (×1), actor 0, squad 0 (trace 2754): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 2655. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18493594615190895, 'next_transition': 2765}.
<a id="trace-2765"></a>
- 30.75s–30.75s (×1), actor 5, squad 0 (trace 2765): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2660. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40537327961564196, 'next_transition': 371}.
<a id="trace-371"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (events line 371): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2771"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 2771): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.527839 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 2771. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14249527081370494, 'next_transition': 2782}.
<a id="trace-2772"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 2772): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.527839 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 2772. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14249527081370494, 'next_transition': 2782}.
<a id="trace-2782"></a>
<a id="trace-2792"></a>
<a id="trace-2807"></a>
<a id="trace-2821"></a>
<a id="trace-2838"></a>
<a id="trace-2845"></a>
- 31.25s–33.75s (×6), actor 5, squad 0 (trace 2782): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 2772. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1476334425149989, 'next_transition': 2792}.
<a id="trace-2850"></a>
- 34.05s–34.05s (×1), actor 0, squad 0 (trace 2850): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 2655. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0777303488228697, 'next_transition': 3080}.
<a id="trace-3080"></a>
- 34.25s–34.25s (×1), actor 5, squad 0 (trace 3080): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 2772. Next observer evidence: None.
<a id="trace-3083"></a>
- 34.30s–34.30s (×1), actor 0, squad 0 (trace 3083): received platoon directive; retain contact cover stage. Knowledge: actor memory at 30.00s, trace 2655. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15738955014648362, 'next_transition': 3088}.
<a id="trace-3088"></a>
<a id="trace-3180"></a>
<a id="trace-3194"></a>
<a id="trace-3217"></a>
<a id="trace-3252"></a>
<a id="trace-3273"></a>
<a id="trace-3282"></a>
<a id="trace-3295"></a>
- 34.75s–38.25s (×8), actor 5, squad 0 (trace 3088): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 2772. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.262196592228346, 'next_transition': 3180}.
<a id="trace-3298"></a>
- 38.30s–38.30s (×1), actor 0, squad 0 (trace 3298): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 3099. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17753445944007062, 'next_transition': 3326}.
<a id="trace-3326"></a>
<a id="trace-3359"></a>
<a id="trace-3387"></a>
- 38.75s–39.75s (×3), actor 5, squad 0 (trace 3326): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3104. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23664840931192374, 'next_transition': 3359}.
<a id="trace-3431"></a>
- 40.05s–40.05s (×1), actor 0, squad 0 (trace 3431): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 3408. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07144125000000001, 'next_transition': 6557}.
<a id="trace-6216"></a>
- 40.05s–40.05s (×1), actor 0, squad 0 (trace 6216): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 3408. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07144125000000001, 'next_transition': 6557}.
<a id="trace-6217"></a>
- 40.05s–40.05s (×1), actor 0, squad 0 (trace 6217): MoveTactically. Knowledge: actor memory at 40.00s, trace 3408. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07144125000000001, 'next_transition': 6557}.
<a id="trace-6218"></a>
- 40.05s–40.05s (×1), actor 0, squad 0 (trace 6218): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 3408. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07144125000000001, 'next_transition': 6557}.
<a id="trace-6557"></a>
<a id="trace-6599"></a>
<a id="trace-6650"></a>
<a id="trace-6677"></a>
<a id="trace-6702"></a>
<a id="trace-6729"></a>
<a id="trace-6760"></a>
<a id="trace-6780"></a>
<a id="trace-6796"></a>
<a id="trace-6813"></a>
<a id="trace-6888"></a>
<a id="trace-6916"></a>
<a id="trace-6959"></a>
<a id="trace-6998"></a>
<a id="trace-7049"></a>
<a id="trace-7104"></a>
<a id="trace-7158"></a>
<a id="trace-7213"></a>
- 40.25s–48.75s (×18), actor 5, squad 0 (trace 6557): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3413. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14607124999999999, 'next_transition': 6599}.
<a id="trace-7252"></a>
- 49.15s–49.15s (×1), actor 0, squad 0 (trace 7252): NeedSupport. Knowledge: actor memory at 45.00s, trace 6816. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4576376235511785, 'next_transition': 7269}.
<a id="trace-7269"></a>
<a id="trace-7315"></a>
<a id="trace-7418"></a>
<a id="trace-7473"></a>
<a id="trace-7520"></a>
<a id="trace-7544"></a>
<a id="trace-7578"></a>
<a id="trace-7615"></a>
<a id="trace-7635"></a>
<a id="trace-7650"></a>
<a id="trace-7674"></a>
<a id="trace-7690"></a>
- 49.25s–54.75s (×12), actor 5, squad 0 (trace 7269): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 6821. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9167566311101285, 'next_transition': 7315}.
<a id="trace-7710"></a>
- 55.00s–55.00s (×1), actor 0, squad 0 (trace 7710): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 55.00s, trace 7695. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04338790069282701, 'next_transition': 8005}.
<a id="trace-8005"></a>
<a id="trace-8020"></a>
- 55.25s–55.75s (×2), actor 5, squad 0 (trace 8005): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 7699. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8020}.
<a id="trace-8023"></a>
- 56.05s–56.05s (×1), actor 5, squad 0 (trace 8023): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 56.05s, trace 8023. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0647371428571428, 'next_transition': 8037}.
<a id="trace-8037"></a>
<a id="trace-8057"></a>
<a id="trace-8065"></a>
<a id="trace-8079"></a>
<a id="trace-8102"></a>
<a id="trace-8119"></a>
<a id="trace-8128"></a>
<a id="trace-8143"></a>
<a id="trace-8219"></a>
<a id="trace-8235"></a>
<a id="trace-8246"></a>
- 56.25s–61.25s (×11), actor 5, squad 0 (trace 8037): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 56.05s, trace 8023. Next observer evidence: {'until': 56.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3289848562483109, 'next_transition': 8057}.
<a id="trace-8252"></a>
- 61.60s–61.60s (×1), actor 0, squad 0 (trace 8252): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 60.00s, trace 8147. Next observer evidence: None.
<a id="trace-8450"></a>
- 61.60s–61.60s (×1), actor 0, squad 0 (trace 8450): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 60.00s, trace 8147. Next observer evidence: None.
<a id="trace-8454"></a>
<a id="trace-8471"></a>
<a id="trace-8476"></a>
<a id="trace-8492"></a>
<a id="trace-8501"></a>
<a id="trace-8510"></a>
<a id="trace-8517"></a>
<a id="trace-8587"></a>
<a id="trace-8597"></a>
<a id="trace-8628"></a>
<a id="trace-8655"></a>
<a id="trace-8687"></a>
<a id="trace-8705"></a>
<a id="trace-8731"></a>
<a id="trace-8756"></a>
<a id="trace-8777"></a>
<a id="trace-8785"></a>
<a id="trace-8852"></a>
<a id="trace-8862"></a>
<a id="trace-8873"></a>
<a id="trace-8878"></a>
<a id="trace-8889"></a>
<a id="trace-8895"></a>
<a id="trace-8905"></a>
<a id="trace-8909"></a>
<a id="trace-8918"></a>
<a id="trace-8922"></a>
<a id="trace-8987"></a>
<a id="trace-8991"></a>
<a id="trace-8996"></a>
<a id="trace-8999"></a>
<a id="trace-9007"></a>
<a id="trace-9011"></a>
<a id="trace-9020"></a>
<a id="trace-9024"></a>
<a id="trace-9032"></a>
<a id="trace-9039"></a>
<a id="trace-9106"></a>
<a id="trace-9111"></a>
<a id="trace-9134"></a>
<a id="trace-9139"></a>
<a id="trace-9146"></a>
<a id="trace-9162"></a>
<a id="trace-9169"></a>
<a id="trace-9174"></a>
- 61.75s–83.75s (×45), actor 5, squad 0 (trace 8454): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 8151. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.036059512381107786, 'next_transition': 8471}.
<a id="trace-9183"></a>
- 84.20s–84.20s (×1), actor 1, squad 0 (trace 9183): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 80.00s, trace 9043. Next observer evidence: None.
<a id="trace-9188"></a>
<a id="trace-9197"></a>
- 84.25s–84.75s (×2), actor 5, squad 0 (trace 9188): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 9046. Next observer evidence: {'until': 84.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.20999906812623928, 'next_transition': 9197}.
<a id="trace-9267"></a>
- 85.20s–85.20s (×1), actor 1, squad 0 (trace 9267): Reorganise: completed/failed drill. Knowledge: actor memory at 85.00s, trace 9206. Next observer evidence: None.
<a id="trace-9272"></a>
- 85.20s–85.20s (×1), actor 1, squad 0 (trace 9272): MoveTactically. Knowledge: actor memory at 85.00s, trace 9206. Next observer evidence: None.
<a id="trace-9273"></a>
- 85.20s–85.20s (×1), actor 1, squad 0 (trace 9273): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 85.00s, trace 9206. Next observer evidence: None.
<a id="trace-9540"></a>
<a id="trace-9547"></a>
<a id="trace-9572"></a>
<a id="trace-9588"></a>
<a id="trace-9599"></a>
<a id="trace-9613"></a>
<a id="trace-9631"></a>
- 85.25s–88.25s (×7), actor 5, squad 0 (trace 9540): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 9209. Next observer evidence: {'until': 85.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000067048218653, 'next_transition': 9547}.
<a id="trace-1371"></a>
- 88.55s–88.55s (×1), actor 5, squad 0 (events line 1371): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9639"></a>
- 88.55s–88.55s (×1), actor 5, squad 0 (trace 9639): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.366664 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 88.55s, trace 9639. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15295574301717402, 'next_transition': 9647}.
<a id="trace-9640"></a>
- 88.55s–88.55s (×1), actor 5, squad 0 (trace 9640): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.366664 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 88.55s, trace 9640. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15295574301717402, 'next_transition': 9647}.
<a id="trace-9647"></a>
<a id="trace-9665"></a>
<a id="trace-9672"></a>
<a id="trace-9746"></a>
<a id="trace-9754"></a>
<a id="trace-9763"></a>
- 88.75s–91.25s (×6), actor 5, squad 0 (trace 9647): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 88.55s, trace 9640. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6930096201642792, 'next_transition': 9665}.
<a id="trace-9771"></a>
- 91.45s–91.45s (×1), actor 1, squad 0 (trace 9771): ReactToContact: cover and return fire. Knowledge: actor memory at 90.00s, trace 9680. Next observer evidence: {'until': 91.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.12599476973271556, 'next_transition': 9925}.
<a id="trace-9772"></a>
- 91.45s–91.45s (×1), actor 1, squad 0 (trace 9772): received platoon directive. Knowledge: actor memory at 90.00s, trace 9680. Next observer evidence: {'until': 91.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.12599476973271556, 'next_transition': 9925}.
<a id="trace-9925"></a>
<a id="trace-9938"></a>
<a id="trace-9955"></a>
<a id="trace-9971"></a>
<a id="trace-9982"></a>
<a id="trace-9991"></a>
<a id="trace-10006"></a>
- 91.75s–94.75s (×7), actor 5, squad 0 (trace 9925): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 9682. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3458567979304696, 'next_transition': 9938}.
<a id="trace-10080"></a>
- 95.20s–95.20s (×1), actor 1, squad 0 (trace 10080): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 95.00s, trace 10017. Next observer evidence: None.
<a id="trace-10081"></a>
- 95.20s–95.20s (×1), actor 1, squad 0 (trace 10081): rearward bound: one stationary suppressing element. Knowledge: actor memory at 95.00s, trace 10017. Next observer evidence: None.
<a id="trace-10222"></a>
<a id="trace-10255"></a>
<a id="trace-10271"></a>
<a id="trace-10285"></a>
<a id="trace-10294"></a>
<a id="trace-10320"></a>
<a id="trace-10329"></a>
<a id="trace-10336"></a>
<a id="trace-10344"></a>
<a id="trace-10417"></a>
<a id="trace-10423"></a>
<a id="trace-10436"></a>
<a id="trace-10449"></a>
<a id="trace-10461"></a>
<a id="trace-10470"></a>
<a id="trace-10497"></a>
<a id="trace-10506"></a>
<a id="trace-10519"></a>
<a id="trace-10532"></a>
<a id="trace-10607"></a>
<a id="trace-10612"></a>
<a id="trace-10626"></a>
<a id="trace-10637"></a>
<a id="trace-10648"></a>
<a id="trace-10655"></a>
<a id="trace-10671"></a>
<a id="trace-10679"></a>
<a id="trace-10694"></a>
<a id="trace-10700"></a>
<a id="trace-10780"></a>
<a id="trace-10794"></a>
<a id="trace-10812"></a>
- 95.25s–111.25s (×32), actor 5, squad 0 (trace 10222): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 10019. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8991503120924638, 'next_transition': 10255}.
<a id="trace-10820"></a>
- 111.45s–111.45s (×1), actor 1, squad 0 (trace 10820): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 10714. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0662842642261342, 'next_transition': 10928}.
<a id="trace-10821"></a>
- 111.45s–111.45s (×1), actor 1, squad 0 (trace 10821): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 10714. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0662842642261342, 'next_transition': 10928}.
<a id="trace-10928"></a>
<a id="trace-10945"></a>
<a id="trace-10965"></a>
<a id="trace-10982"></a>
<a id="trace-10993"></a>
<a id="trace-11005"></a>
<a id="trace-11014"></a>
<a id="trace-11085"></a>
<a id="trace-11097"></a>
<a id="trace-11112"></a>
<a id="trace-11119"></a>
- 111.75s–116.75s (×11), actor 5, squad 0 (trace 10928): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 10716. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21501508161245014, 'next_transition': 10945}.
<a id="trace-11126"></a>
- 116.95s–116.95s (×1), actor 1, squad 0 (trace 11126): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 115.00s, trace 11021. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4985858767323321, 'next_transition': 11134}.
<a id="trace-11134"></a>
- 117.20s–117.20s (×1), actor 1, squad 0 (trace 11134): Reorganise: completed/failed drill. Knowledge: actor memory at 115.00s, trace 11021. Next observer evidence: None.
<a id="trace-11137"></a>
- 117.20s–117.20s (×1), actor 1, squad 0 (trace 11137): ReactToContact: cover and return fire. Knowledge: actor memory at 115.00s, trace 11021. Next observer evidence: None.
<a id="trace-11138"></a>
- 117.20s–117.20s (×1), actor 1, squad 0 (trace 11138): Reorganise complete: known contact. Knowledge: actor memory at 115.00s, trace 11021. Next observer evidence: None.
<a id="trace-11178"></a>
<a id="trace-11186"></a>
<a id="trace-11202"></a>
<a id="trace-11215"></a>
<a id="trace-11224"></a>
<a id="trace-11231"></a>
<a id="trace-11307"></a>
<a id="trace-11317"></a>
- 117.25s–120.75s (×8), actor 5, squad 0 (trace 11178): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 11023. Next observer evidence: {'until': 117.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4986067990056082, 'next_transition': 11186}.
<a id="trace-11324"></a>
- 121.15s–121.15s (×1), actor 1, squad 0 (trace 11324): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 120.00s, trace 11238. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24929106293485231, 'next_transition': 11413}.
<a id="trace-11325"></a>
- 121.15s–121.15s (×1), actor 1, squad 0 (trace 11325): rearward bound: one stationary suppressing element. Knowledge: actor memory at 120.00s, trace 11238. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24929106293485231, 'next_transition': 11413}.
<a id="trace-11413"></a>
- 121.25s–121.25s (×1), actor 5, squad 0 (trace 11413): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 11239. Next observer evidence: {'until': 121.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24930660364893392, 'next_transition': 1605}.
<a id="trace-1605"></a>
- 121.45s–121.45s (×1), actor 5, squad 0 (events line 1605): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24930115807143322, 'next_transition': 11421}.
<a id="trace-11416"></a>
- 121.45s–121.45s (×1), actor 5, squad 0 (trace 11416): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.186769 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 121.45s, trace 11416. Next observer evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24930115807143322, 'next_transition': 11421}.
<a id="trace-11417"></a>
- 121.45s–121.45s (×1), actor 5, squad 0 (trace 11417): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.186769 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 121.45s, trace 11417. Next observer evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24930115807143322, 'next_transition': 11421}.
<a id="trace-11421"></a>
<a id="trace-11440"></a>
<a id="trace-11453"></a>
<a id="trace-11461"></a>
- 121.75s–123.25s (×4), actor 5, squad 0 (trace 11421): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 121.45s, trace 11417. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6495840526051615, 'next_transition': 11440}.
<a id="trace-11467"></a>
- 123.45s–123.45s (×1), actor 1, squad 0 (trace 11467): received Withdraw: retain retirement bound and receipts; extend rally. Knowledge: actor memory at 120.00s, trace 11238. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20188430334370316, 'next_transition': 11477}.
<a id="trace-11477"></a>
<a id="trace-11493"></a>
<a id="trace-11499"></a>
<a id="trace-11571"></a>
<a id="trace-11583"></a>
<a id="trace-11592"></a>
<a id="trace-11598"></a>
<a id="trace-11607"></a>
<a id="trace-11617"></a>
<a id="trace-11630"></a>
<a id="trace-11638"></a>
<a id="trace-11646"></a>
<a id="trace-11653"></a>
<a id="trace-11720"></a>
<a id="trace-11729"></a>
<a id="trace-11740"></a>
<a id="trace-11746"></a>
<a id="trace-11753"></a>
<a id="trace-11759"></a>
<a id="trace-11768"></a>
<a id="trace-11773"></a>
<a id="trace-11782"></a>
<a id="trace-11787"></a>
<a id="trace-11855"></a>
<a id="trace-11862"></a>
<a id="trace-11869"></a>
<a id="trace-11874"></a>
<a id="trace-11883"></a>
<a id="trace-11891"></a>
<a id="trace-11899"></a>
<a id="trace-11904"></a>
<a id="trace-11911"></a>
<a id="trace-11915"></a>
<a id="trace-11981"></a>
<a id="trace-11988"></a>
<a id="trace-11995"></a>
<a id="trace-11999"></a>
<a id="trace-12006"></a>
<a id="trace-12015"></a>
<a id="trace-12025"></a>
<a id="trace-12031"></a>
<a id="trace-12042"></a>
<a id="trace-12049"></a>
<a id="trace-12114"></a>
<a id="trace-12122"></a>
<a id="trace-12130"></a>
<a id="trace-12142"></a>
<a id="trace-12148"></a>
<a id="trace-12157"></a>
<a id="trace-12161"></a>
<a id="trace-12168"></a>
<a id="trace-12174"></a>
<a id="trace-12239"></a>
<a id="trace-12248"></a>
<a id="trace-12256"></a>
<a id="trace-12260"></a>
<a id="trace-12267"></a>
<a id="trace-12274"></a>
<a id="trace-12283"></a>
<a id="trace-12286"></a>
<a id="trace-12293"></a>
<a id="trace-12299"></a>
<a id="trace-12363"></a>
<a id="trace-12371"></a>
<a id="trace-12380"></a>
<a id="trace-12385"></a>
<a id="trace-12394"></a>
<a id="trace-12401"></a>
<a id="trace-12410"></a>
<a id="trace-12414"></a>
<a id="trace-12421"></a>
<a id="trace-12425"></a>
<a id="trace-12488"></a>
<a id="trace-12495"></a>
<a id="trace-12504"></a>
<a id="trace-12507"></a>
<a id="trace-12515"></a>
<a id="trace-12520"></a>
<a id="trace-12529"></a>
<a id="trace-12533"></a>
<a id="trace-12543"></a>
<a id="trace-12548"></a>
<a id="trace-12612"></a>
<a id="trace-12619"></a>
<a id="trace-12626"></a>
<a id="trace-12631"></a>
<a id="trace-12640"></a>
<a id="trace-12648"></a>
<a id="trace-12656"></a>
<a id="trace-12660"></a>
<a id="trace-12668"></a>
<a id="trace-12673"></a>
<a id="trace-12738"></a>
<a id="trace-12746"></a>
<a id="trace-12753"></a>
<a id="trace-12757"></a>
<a id="trace-12765"></a>
<a id="trace-12771"></a>
<a id="trace-12780"></a>
<a id="trace-12787"></a>
<a id="trace-12797"></a>
<a id="trace-12802"></a>
<a id="trace-12866"></a>
<a id="trace-12873"></a>
<a id="trace-12881"></a>
<a id="trace-12886"></a>
<a id="trace-12895"></a>
<a id="trace-12901"></a>
<a id="trace-12908"></a>
<a id="trace-12913"></a>
<a id="trace-12922"></a>
<a id="trace-12928"></a>
<a id="trace-12994"></a>
<a id="trace-13002"></a>
<a id="trace-13010"></a>
<a id="trace-13014"></a>
<a id="trace-13022"></a>
- 123.75s–182.30s (×117), actor 5, squad 0 (trace 11477): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 121.45s, trace 11417. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5377204347990094, 'next_transition': 11493}.
<a id="trace-1733"></a>
- 182.65s–182.65s (×1), actor 5, squad 0 (events line 1733): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13027"></a>
- 182.65s–182.65s (×1), actor 5, squad 0 (trace 13027): renew committed intent (75 s lifetime). Knowledge: actor memory at 182.65s, trace 13027. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13030}.
<a id="trace-13030"></a>
<a id="trace-13039"></a>
<a id="trace-13045"></a>
<a id="trace-13053"></a>
<a id="trace-13058"></a>
<a id="trace-13123"></a>
<a id="trace-13129"></a>
<a id="trace-13137"></a>
<a id="trace-13144"></a>
<a id="trace-13153"></a>
<a id="trace-13158"></a>
<a id="trace-13166"></a>
<a id="trace-13171"></a>
<a id="trace-13178"></a>
<a id="trace-13184"></a>
<a id="trace-13250"></a>
<a id="trace-13256"></a>
<a id="trace-13263"></a>
<a id="trace-13268"></a>
<a id="trace-13275"></a>
<a id="trace-13282"></a>
<a id="trace-13292"></a>
<a id="trace-13296"></a>
<a id="trace-13305"></a>
<a id="trace-13310"></a>
<a id="trace-13375"></a>
<a id="trace-13380"></a>
<a id="trace-13389"></a>
<a id="trace-13392"></a>
<a id="trace-13400"></a>
<a id="trace-13406"></a>
<a id="trace-13414"></a>
<a id="trace-13418"></a>
<a id="trace-13428"></a>
<a id="trace-13433"></a>
<a id="trace-13500"></a>
<a id="trace-13508"></a>
<a id="trace-13516"></a>
<a id="trace-13519"></a>
<a id="trace-13527"></a>
<a id="trace-13533"></a>
<a id="trace-13541"></a>
<a id="trace-13546"></a>
<a id="trace-13554"></a>
<a id="trace-13558"></a>
<a id="trace-13622"></a>
<a id="trace-13628"></a>
<a id="trace-13637"></a>
<a id="trace-13644"></a>
<a id="trace-13653"></a>
<a id="trace-13658"></a>
<a id="trace-13666"></a>
<a id="trace-13671"></a>
<a id="trace-13679"></a>
<a id="trace-13685"></a>
<a id="trace-13751"></a>
<a id="trace-13757"></a>
<a id="trace-13764"></a>
<a id="trace-13769"></a>
<a id="trace-13777"></a>
<a id="trace-13784"></a>
<a id="trace-13795"></a>
<a id="trace-13801"></a>
<a id="trace-13809"></a>
<a id="trace-13814"></a>
<a id="trace-13879"></a>
<a id="trace-13885"></a>
<a id="trace-13894"></a>
<a id="trace-13900"></a>
<a id="trace-13907"></a>
<a id="trace-13913"></a>
<a id="trace-13922"></a>
<a id="trace-13927"></a>
<a id="trace-13936"></a>
<a id="trace-13943"></a>
<a id="trace-14008"></a>
<a id="trace-14014"></a>
<a id="trace-14022"></a>
<a id="trace-14026"></a>
<a id="trace-14033"></a>
<a id="trace-14040"></a>
<a id="trace-14050"></a>
<a id="trace-14054"></a>
<a id="trace-14062"></a>
<a id="trace-14068"></a>
<a id="trace-14133"></a>
<a id="trace-14140"></a>
<a id="trace-14150"></a>
<a id="trace-14154"></a>
<a id="trace-14163"></a>
<a id="trace-14169"></a>
<a id="trace-14178"></a>
<a id="trace-14181"></a>
<a id="trace-14189"></a>
<a id="trace-14193"></a>
<a id="trace-14259"></a>
<a id="trace-14265"></a>
<a id="trace-14274"></a>
<a id="trace-14278"></a>
<a id="trace-14287"></a>
<a id="trace-14293"></a>
<a id="trace-14304"></a>
<a id="trace-14310"></a>
<a id="trace-14318"></a>
<a id="trace-14323"></a>
<a id="trace-14388"></a>
<a id="trace-14400"></a>
<a id="trace-14406"></a>
<a id="trace-14413"></a>
<a id="trace-14419"></a>
<a id="trace-14428"></a>
<a id="trace-14433"></a>
<a id="trace-14442"></a>
<a id="trace-14450"></a>
<a id="trace-14516"></a>
<a id="trace-14522"></a>
<a id="trace-14530"></a>
<a id="trace-14535"></a>
<a id="trace-14542"></a>
<a id="trace-14548"></a>
- 182.80s–242.80s (×120), actor 5, squad 0 (trace 13030): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 182.65s, trace 13027. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13039}.
<a id="trace-1820"></a>
- 243.25s–243.25s (×1), actor 5, squad 0 (events line 1820): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14555"></a>
- 243.25s–243.25s (×1), actor 5, squad 0 (trace 14555): renew committed intent (75 s lifetime). Knowledge: actor memory at 243.25s, trace 14555. Next observer evidence: None.
<a id="trace-14559"></a>
<a id="trace-14564"></a>
<a id="trace-14572"></a>
<a id="trace-14578"></a>
<a id="trace-14643"></a>
<a id="trace-14649"></a>
<a id="trace-14660"></a>
<a id="trace-14666"></a>
<a id="trace-14673"></a>
<a id="trace-14679"></a>
<a id="trace-14688"></a>
<a id="trace-14692"></a>
<a id="trace-14701"></a>
<a id="trace-14708"></a>
<a id="trace-14772"></a>
<a id="trace-14778"></a>
<a id="trace-14787"></a>
<a id="trace-14792"></a>
<a id="trace-14800"></a>
<a id="trace-14808"></a>
<a id="trace-14818"></a>
<a id="trace-14821"></a>
<a id="trace-14829"></a>
<a id="trace-14835"></a>
<a id="trace-14899"></a>
<a id="trace-14906"></a>
<a id="trace-14916"></a>
<a id="trace-14919"></a>
<a id="trace-14926"></a>
<a id="trace-14933"></a>
<a id="trace-14941"></a>
<a id="trace-14946"></a>
<a id="trace-14957"></a>
<a id="trace-14962"></a>
<a id="trace-15028"></a>
<a id="trace-15034"></a>
<a id="trace-15042"></a>
<a id="trace-15046"></a>
<a id="trace-15054"></a>
<a id="trace-15060"></a>
<a id="trace-15070"></a>
<a id="trace-15074"></a>
<a id="trace-15083"></a>
<a id="trace-15087"></a>
<a id="trace-15153"></a>
<a id="trace-15159"></a>
<a id="trace-15169"></a>
<a id="trace-15175"></a>
<a id="trace-15182"></a>
<a id="trace-15188"></a>
<a id="trace-15196"></a>
<a id="trace-15200"></a>
<a id="trace-15209"></a>
<a id="trace-15215"></a>
<a id="trace-15278"></a>
<a id="trace-15283"></a>
<a id="trace-15292"></a>
<a id="trace-15296"></a>
<a id="trace-15304"></a>
<a id="trace-15313"></a>
<a id="trace-15323"></a>
<a id="trace-15326"></a>
<a id="trace-15334"></a>
<a id="trace-15340"></a>
<a id="trace-15403"></a>
<a id="trace-15409"></a>
<a id="trace-15418"></a>
<a id="trace-15422"></a>
<a id="trace-15429"></a>
<a id="trace-15436"></a>
<a id="trace-15445"></a>
<a id="trace-15450"></a>
<a id="trace-15461"></a>
<a id="trace-15467"></a>
<a id="trace-15530"></a>
<a id="trace-15536"></a>
<a id="trace-15545"></a>
<a id="trace-15549"></a>
<a id="trace-15556"></a>
<a id="trace-15564"></a>
<a id="trace-15572"></a>
<a id="trace-15575"></a>
<a id="trace-15584"></a>
<a id="trace-15590"></a>
<a id="trace-15655"></a>
<a id="trace-15663"></a>
<a id="trace-15673"></a>
<a id="trace-15677"></a>
<a id="trace-15684"></a>
<a id="trace-15691"></a>
<a id="trace-15698"></a>
<a id="trace-15703"></a>
<a id="trace-15713"></a>
<a id="trace-15718"></a>
<a id="trace-15781"></a>
<a id="trace-15788"></a>
<a id="trace-15797"></a>
<a id="trace-15802"></a>
<a id="trace-15812"></a>
<a id="trace-15817"></a>
<a id="trace-15827"></a>
<a id="trace-15831"></a>
<a id="trace-15840"></a>
<a id="trace-15845"></a>
<a id="trace-15910"></a>
<a id="trace-15916"></a>
<a id="trace-15926"></a>
<a id="trace-15930"></a>
<a id="trace-15938"></a>
<a id="trace-15944"></a>
<a id="trace-15954"></a>
<a id="trace-15958"></a>
<a id="trace-15969"></a>
<a id="trace-15976"></a>
<a id="trace-16040"></a>
<a id="trace-16046"></a>
<a id="trace-16056"></a>
<a id="trace-16061"></a>
<a id="trace-16069"></a>
<a id="trace-16077"></a>
<a id="trace-16085"></a>
<a id="trace-16088"></a>
- 243.30s–303.80s (×122), actor 5, squad 0 (trace 14559): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 243.25s, trace 14555. Next observer evidence: {'until': 243.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14564}.
<a id="trace-1906"></a>
- 303.95s–303.95s (×1), actor 5, squad 0 (events line 1906): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16093"></a>
- 303.95s–303.95s (×1), actor 5, squad 0 (trace 16093): renew committed intent (75 s lifetime). Knowledge: actor memory at 303.95s, trace 16093. Next observer evidence: {'until': 304.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16099}.
<a id="trace-16099"></a>
<a id="trace-16103"></a>
<a id="trace-16168"></a>
<a id="trace-16176"></a>
<a id="trace-16186"></a>
<a id="trace-16191"></a>
<a id="trace-16197"></a>
<a id="trace-16204"></a>
<a id="trace-16212"></a>
<a id="trace-16217"></a>
<a id="trace-16226"></a>
<a id="trace-16230"></a>
<a id="trace-16294"></a>
<a id="trace-16300"></a>
<a id="trace-16308"></a>
<a id="trace-16314"></a>
<a id="trace-16323"></a>
<a id="trace-16331"></a>
<a id="trace-16339"></a>
<a id="trace-16343"></a>
<a id="trace-16352"></a>
<a id="trace-16355"></a>
<a id="trace-16420"></a>
<a id="trace-16428"></a>
<a id="trace-16436"></a>
<a id="trace-16441"></a>
<a id="trace-16448"></a>
<a id="trace-16457"></a>
<a id="trace-16466"></a>
<a id="trace-16473"></a>
<a id="trace-16483"></a>
<a id="trace-16486"></a>
<a id="trace-16550"></a>
<a id="trace-16557"></a>
<a id="trace-16565"></a>
<a id="trace-16570"></a>
<a id="trace-16578"></a>
<a id="trace-16584"></a>
<a id="trace-16592"></a>
<a id="trace-16597"></a>
<a id="trace-16606"></a>
<a id="trace-16610"></a>
<a id="trace-16677"></a>
<a id="trace-16683"></a>
<a id="trace-16692"></a>
<a id="trace-16695"></a>
<a id="trace-16703"></a>
<a id="trace-16710"></a>
<a id="trace-16718"></a>
<a id="trace-16722"></a>
<a id="trace-16732"></a>
<a id="trace-16736"></a>
<a id="trace-16801"></a>
<a id="trace-16806"></a>
<a id="trace-16816"></a>
<a id="trace-16820"></a>
<a id="trace-16830"></a>
<a id="trace-16839"></a>
<a id="trace-16847"></a>
<a id="trace-16853"></a>
<a id="trace-16861"></a>
<a id="trace-16865"></a>
<a id="trace-16930"></a>
<a id="trace-16937"></a>
<a id="trace-16944"></a>
<a id="trace-16948"></a>
<a id="trace-16956"></a>
<a id="trace-16963"></a>
<a id="trace-16972"></a>
<a id="trace-16980"></a>
<a id="trace-16990"></a>
<a id="trace-16994"></a>
<a id="trace-17057"></a>
<a id="trace-17064"></a>
<a id="trace-17072"></a>
<a id="trace-17077"></a>
<a id="trace-17085"></a>
<a id="trace-17090"></a>
<a id="trace-17098"></a>
<a id="trace-17104"></a>
<a id="trace-17113"></a>
<a id="trace-17118"></a>
<a id="trace-17185"></a>
<a id="trace-17193"></a>
<a id="trace-17201"></a>
<a id="trace-17205"></a>
<a id="trace-17213"></a>
<a id="trace-17218"></a>
<a id="trace-17227"></a>
<a id="trace-17233"></a>
<a id="trace-17241"></a>
<a id="trace-17246"></a>
<a id="trace-17311"></a>
<a id="trace-17318"></a>
<a id="trace-17327"></a>
<a id="trace-17334"></a>
<a id="trace-17343"></a>
<a id="trace-17349"></a>
<a id="trace-17357"></a>
<a id="trace-17362"></a>
<a id="trace-17370"></a>
<a id="trace-17376"></a>
<a id="trace-17442"></a>
<a id="trace-17448"></a>
<a id="trace-17456"></a>
<a id="trace-17461"></a>
<a id="trace-17468"></a>
<a id="trace-17475"></a>
<a id="trace-17486"></a>
<a id="trace-17490"></a>
<a id="trace-17500"></a>
<a id="trace-17505"></a>
- 304.30s–359.80s (×112), actor 5, squad 0 (trace 16099): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 303.95s, trace 16093. Next observer evidence: {'until': 304.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16103}.

## Net delivery

136 matched order/radio deliveries; 251 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.347s; maximum 1.550s. Message-level evidence is in the companion JSON.

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
- 15.00s leader 0, trace 1452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 1859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 1860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 1867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 1868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2655: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 2657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 2658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2661: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2663: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2664: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 2665: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 2666: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2667: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2668: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2669: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2670: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 2771: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 2772: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3099: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3104: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3105: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3107: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3108: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3109: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3110: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3111: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3112: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3113: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3114: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 3408: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 3410: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 3411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3413: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3414: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3416: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3417: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 3418: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 3419: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3420: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3421: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3422: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3423: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 6816: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 6817: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 6818: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 6819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 6820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 6821: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 6822: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 6823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 6824: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 6825: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 6826: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 6827: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 6828: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 6829: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 6830: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 6831: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 7330: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7331: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 7332: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 7333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7335: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7336: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7338: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7339: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 7340: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7341: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7342: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7343: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7344: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7345: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 7695: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 7696: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 7697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 7698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 7699: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 7700: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 7701: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 7702: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 7703: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 7704: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 7705: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 7706: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 7707: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 7708: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 56.05s leader 5, trace 8023: estimate 9.75; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 8147: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 8148: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 8149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8151: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8152: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 8153: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8154: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8155: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8156: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8157: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8158: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8159: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8160: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 8520: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 8521: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 8522: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 8523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 8524: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 8525: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 8526: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 8527: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 8528: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 8529: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 8530: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 8531: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 8532: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 8533: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 8788: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 8789: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 8790: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 8791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 8792: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 8793: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 8794: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 8795: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 8796: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 8797: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 8798: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 8799: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 8800: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 8923: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 8924: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 8925: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 8926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 8927: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 8928: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 8929: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 8930: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 8931: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 8932: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 8933: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 8934: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 8935: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 9042: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 9043: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 9044: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 9045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 9046: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 9047: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 9048: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 9049: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 9050: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 9051: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 9052: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 9053: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 9054: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 9206: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 9207: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 9208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 9209: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 9210: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 9211: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 9212: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 9213: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 9214: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 9215: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 9216: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 9217: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 88.55s leader 5, trace 9639: estimate 9.41; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 88.55s leader 5, trace 9640: estimate 9.41; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 9680: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 9681: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 9682: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 9683: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 9684: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 9685: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 9686: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 9687: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 9688: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 9689: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 9690: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 10017: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 10018: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 10019: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 10020: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 10021: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 10022: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 10023: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 10024: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 10025: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 10026: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 10027: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 10347: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 10348: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 10349: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 10350: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 10351: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 10352: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 10353: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 10354: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 10355: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 10356: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 10357: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 10542: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 10543: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 10544: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 10545: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 10546: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 10547: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 10548: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 10549: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 10550: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 10551: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 10552: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 10714: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 10715: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 10716: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 10717: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 10718: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 10719: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 10720: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 10721: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 10722: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 10723: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 10724: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 11021: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 11022: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 11023: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 11024: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 11025: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 11026: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 11027: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 11028: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 11029: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 11030: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 11031: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 11238: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 11239: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 11240: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 11241: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 11242: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 11243: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 11244: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 11245: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 11246: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 11247: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.45s leader 5, trace 11416: estimate 9.21; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.45s leader 5, trace 11417: estimate 9.21; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 11506: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 11507: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 11508: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 11509: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 11510: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 11511: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 11512: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 11513: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 11514: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 11515: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 11656: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 11657: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 11658: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 11659: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 11660: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 11661: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 11662: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 11663: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 11664: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 11791: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 11792: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 11793: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 11794: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 11795: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 11796: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 11797: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 11798: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 11799: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 11918: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 11919: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 11920: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 11921: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 11922: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 11923: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 11924: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 11925: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 11926: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 12052: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 12053: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 12054: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 12055: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 12056: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 12057: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 12058: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 12059: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 12060: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 12177: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 12178: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 12179: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 12180: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 12181: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 12182: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 12183: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 12184: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 12185: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 12301: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 12302: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 12303: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 12304: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 12305: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 12306: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 12307: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 12308: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 12309: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 12427: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 12428: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 12429: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 12430: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 12431: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 12432: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 12433: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 12434: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 12435: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 12551: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 12552: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 12553: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 12554: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 12555: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 12556: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 12557: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 12558: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 12559: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 12677: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 12678: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 12679: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 12680: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 12681: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 12682: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 12683: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 12684: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 12685: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 12805: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 12806: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 12807: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 12808: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 12809: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 12810: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 12811: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 12812: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 12813: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 12930: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 12931: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 12932: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 12933: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 12934: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 12935: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 12936: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 12937: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 12938: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 182.65s leader 5, trace 13027: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 13061: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 13062: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 13063: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 13064: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 13065: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 13066: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 13067: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 13068: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 13069: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 13187: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 13188: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 13189: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 13190: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 13191: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 13192: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 13193: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 13194: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 13195: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 13313: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 13314: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 13315: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 13316: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 13317: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 13318: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 13319: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 13320: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 13321: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 13439: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 13440: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 13441: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 13442: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 13443: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 13444: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 13445: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 13446: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 13447: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 13561: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 13562: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 13563: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 13564: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 13565: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 13566: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 13567: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 13568: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 13569: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 13688: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 13689: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 13690: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 13691: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 13692: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 13693: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 13694: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 13695: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 13696: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 13817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 13818: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 13819: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 13820: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 13821: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 13822: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 13823: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 13824: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 13825: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 13945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 13946: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 13947: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 13948: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 13949: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 13950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 13951: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 13952: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 13953: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 14071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 14072: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 14073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 14074: estimate 1.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 14075: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 14076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 14077: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 14078: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 14079: estimate 1.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 14198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 14199: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 14200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 14201: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 14202: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 14203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 14204: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 14205: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 14206: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 14327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 14328: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 14329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 14330: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 14331: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 14332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 14333: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 14334: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 14335: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 14453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 14454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 14455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 14456: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 14457: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 14458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 14459: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 14460: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 14461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 243.25s leader 5, trace 14555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 14581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 14582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 14583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 14584: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 14585: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 14586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 14587: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 14588: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 14589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 14711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 14712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 14713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 14714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 14715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 14716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 14717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 14718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 14719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 14838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 14839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 14840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 14841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 14842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 14843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 14844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 14845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 14846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 14967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 14968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 14969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 14970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 14971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 14972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 14973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 14974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 14975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 15091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 15092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 15093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 15094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 15095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 15096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 15097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 15098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 15099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 15217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 15218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 15219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 15220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 15221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 15222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 15223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 15224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 15225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 15342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 15343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 15344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 15345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 15346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 15347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 15348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 15349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 15350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 15469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 15470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 15471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 15472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 15473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 15474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 15475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 15476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 15477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 15593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 15594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 15595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 15596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 15597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 15598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 15599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 15600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 15601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 15720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 15721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 15722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 15723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 15724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 15725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 15726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 15727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 15728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 15848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 15849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 15850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 15851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 15852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 15853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 15854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 15855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 15856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 15979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 15980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 15981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 15982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 15983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 15984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 15985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 15986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 15987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 303.95s leader 5, trace 16093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 16107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 16108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 16109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 16110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 16111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 16112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 16113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 16114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 16115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 16233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 16234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 16235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 16236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 16237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 16238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 16239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 16240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 16241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 16358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 16359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 16360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 16361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 16362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 16363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 16364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 16365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 16366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 16489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 16490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 16491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 16492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 16493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 16494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 16495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 16496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 16497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 16613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 16614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 16615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 16616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 16617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 16618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 16619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 16620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 16621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 16739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 16740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 16741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 16742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 16743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 16744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 16745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 16746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 16747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 16869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 16870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 16871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 16872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 16873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 16874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 16875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 16876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 16877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 16996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 16997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 16998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 16999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 17000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 17001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 17002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 17003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 17004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 17121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 17122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 17123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 17124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 17125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 17126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 17127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 17128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 17129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 17249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 17250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 17251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 17252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 17253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 17254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 17255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 17256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 17257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 17379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 17380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 17381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 17382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 17383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 17384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 17385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 17386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 17387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 17507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 17508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 17509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 17510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 17511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 17512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 17513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 17514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 17515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Orin incapacitated
- 1: Soren incapacitated
- 1: Voss killed in action
- 1: Vale incapacitated
- 1: Ash killed in action
- 1: Tern killed in action
- 1: Reed incapacitated

## Outcome attribution

- 121.45s, evidence 1605: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24930115807143322, 'next_transition': 11421}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 121.45s, evidence 11416: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.186769 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24930115807143322, 'next_transition': 11421}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 121.45s, evidence 11417: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.186769 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24930115807143322, 'next_transition': 11421}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 182.65s, evidence 1733: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 243.25s, evidence 1820: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 303.95s, evidence 1906: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
