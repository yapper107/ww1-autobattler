# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/12/107/good-ember/battle-107-1789673891012264358`

## Battle summary

**Ember** · 360 s · 88 shots.

### Turning points

- 28.6s, squad 4: contact (events line 299). First recorded contact.
- 39.2s, squad 0: withdrawal ([trace 2281](#trace-2281)). 78.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 50.5s, squad 0: help call ([trace 3110](#trace-3110)). No completion observed before termination.
- 131.6s, squad 0: withdrawal ([trace 6887](#trace-6887)). 166.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 143.1s, squad 0: help call ([trace 7492](#trace-7492)). No completion observed before termination.
- 202.6s, squad 0: withdrawal ([trace 10394](#trace-10394)). 222.6s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 0 shots, 1/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 88 shots, 0/4 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 12.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 736](#trace-736)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 35.5s, squad 0 chose took cover and returned fire ([trace 1847](#trace-1847)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 735](#trace-735)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331222820702656, 'next_transition': 752}.
- 95.2s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.942871 retreat threshold=0.220000 initiative=requires intent ([trace 5126](#trace-5126)). Following evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.340200159988572, 'next_transition': 5206}.

### Communication

202 matched deliveries (mean 0.19s, max 5.60s); 239 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 28.55s, squad 4, contact, evidence events line 299: First recorded contact; .
- 39.20s, squad 0, withdrawal, evidence 2281: BreakContact: believed ratio at least two without superiority; 78.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 50.50s, squad 0, help call, evidence 3110: NeedSupport; No completion observed before termination.
- 131.60s, squad 0, withdrawal, evidence 6887: BreakContact: believed ratio at least two without superiority; 166.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 143.10s, squad 0, help call, evidence 7492: NeedSupport; No completion observed before termination.
- 202.55s, squad 0, withdrawal, evidence 10394: BreakContact: believed ratio at least two without superiority; 222.6s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.472047453143572, 'next_transition': 367}.
<a id="trace-12"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 12): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.472047453143572, 'next_transition': 367}.
<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.472047453143572, 'next_transition': 367}.
<a id="trace-211"></a>
<a id="trace-232"></a>
<a id="trace-240"></a>
<a id="trace-253"></a>
<a id="trace-258"></a>
<a id="trace-276"></a>
<a id="trace-287"></a>
<a id="trace-369"></a>
<a id="trace-389"></a>
<a id="trace-398"></a>
<a id="trace-413"></a>
<a id="trace-424"></a>
<a id="trace-445"></a>
<a id="trace-469"></a>
<a id="trace-481"></a>
<a id="trace-489"></a>
<a id="trace-572"></a>
<a id="trace-580"></a>
<a id="trace-699"></a>
<a id="trace-714"></a>
<a id="trace-733"></a>
<a id="trace-754"></a>
<a id="trace-770"></a>
<a id="trace-783"></a>
<a id="trace-806"></a>
<a id="trace-819"></a>
<a id="trace-903"></a>
<a id="trace-912"></a>
<a id="trace-934"></a>
<a id="trace-948"></a>
<a id="trace-961"></a>
<a id="trace-971"></a>
<a id="trace-992"></a>
<a id="trace-1001"></a>
<a id="trace-1017"></a>
<a id="trace-1024"></a>
<a id="trace-1109"></a>
<a id="trace-1129"></a>
<a id="trace-1236"></a>
<a id="trace-1250"></a>
<a id="trace-1275"></a>
<a id="trace-1284"></a>
<a id="trace-1300"></a>
<a id="trace-1307"></a>
<a id="trace-1330"></a>
<a id="trace-1344"></a>
<a id="trace-1421"></a>
<a id="trace-1431"></a>
<a id="trace-1456"></a>
<a id="trace-1464"></a>
<a id="trace-1483"></a>
<a id="trace-1493"></a>
<a id="trace-1513"></a>
<a id="trace-1529"></a>
<a id="trace-1594"></a>
<a id="trace-1609"></a>
<a id="trace-1689"></a>
<a id="trace-1699"></a>
<a id="trace-1708"></a>
<a id="trace-1715"></a>
<a id="trace-1727"></a>
<a id="trace-1740"></a>
<a id="trace-1748"></a>
<a id="trace-1755"></a>
<a id="trace-1764"></a>
<a id="trace-1770"></a>
<a id="trace-1846"></a>
<a id="trace-2175"></a>
<a id="trace-2187"></a>
<a id="trace-2200"></a>
<a id="trace-2228"></a>
<a id="trace-2232"></a>
<a id="trace-2242"></a>
<a id="trace-2264"></a>
<a id="trace-2442"></a>
<a id="trace-2453"></a>
<a id="trace-2530"></a>
<a id="trace-2549"></a>
<a id="trace-2557"></a>
<a id="trace-2564"></a>
<a id="trace-2582"></a>
<a id="trace-2599"></a>
<a id="trace-2607"></a>
<a id="trace-2612"></a>
<a id="trace-2623"></a>
<a id="trace-2635"></a>
<a id="trace-2725"></a>
<a id="trace-2753"></a>
<a id="trace-2788"></a>
<a id="trace-2838"></a>
<a id="trace-2888"></a>
<a id="trace-2932"></a>
<a id="trace-2963"></a>
<a id="trace-2999"></a>
<a id="trace-3021"></a>
<a id="trace-3028"></a>
<a id="trace-3105"></a>
<a id="trace-3119"></a>
<a id="trace-3137"></a>
<a id="trace-3164"></a>
<a id="trace-3256"></a>
<a id="trace-3290"></a>
<a id="trace-3333"></a>
<a id="trace-3363"></a>
<a id="trace-3401"></a>
<a id="trace-3416"></a>
<a id="trace-3495"></a>
<a id="trace-3508"></a>
<a id="trace-3521"></a>
<a id="trace-3531"></a>
<a id="trace-3539"></a>
<a id="trace-3549"></a>
<a id="trace-3566"></a>
<a id="trace-3573"></a>
<a id="trace-3584"></a>
<a id="trace-3590"></a>
<a id="trace-3665"></a>
<a id="trace-3678"></a>
<a id="trace-3685"></a>
<a id="trace-3691"></a>
<a id="trace-3710"></a>
<a id="trace-3716"></a>
<a id="trace-3727"></a>
<a id="trace-3738"></a>
<a id="trace-3750"></a>
<a id="trace-3758"></a>
<a id="trace-3836"></a>
<a id="trace-3847"></a>
<a id="trace-3860"></a>
<a id="trace-3879"></a>
<a id="trace-3891"></a>
<a id="trace-3899"></a>
<a id="trace-3919"></a>
<a id="trace-3932"></a>
<a id="trace-4025"></a>
<a id="trace-4040"></a>
<a id="trace-4120"></a>
<a id="trace-4132"></a>
<a id="trace-4151"></a>
<a id="trace-4164"></a>
<a id="trace-4179"></a>
<a id="trace-4191"></a>
<a id="trace-4206"></a>
<a id="trace-4213"></a>
<a id="trace-4232"></a>
<a id="trace-4245"></a>
<a id="trace-4328"></a>
<a id="trace-4341"></a>
<a id="trace-4356"></a>
<a id="trace-4366"></a>
<a id="trace-4380"></a>
<a id="trace-4391"></a>
<a id="trace-4404"></a>
<a id="trace-4421"></a>
<a id="trace-4437"></a>
<a id="trace-4451"></a>
<a id="trace-4536"></a>
<a id="trace-4551"></a>
<a id="trace-4574"></a>
<a id="trace-4591"></a>
<a id="trace-4612"></a>
<a id="trace-4625"></a>
<a id="trace-4638"></a>
<a id="trace-4651"></a>
<a id="trace-4665"></a>
<a id="trace-4678"></a>
<a id="trace-4755"></a>
<a id="trace-4761"></a>
<a id="trace-4779"></a>
<a id="trace-4788"></a>
<a id="trace-4832"></a>
<a id="trace-4846"></a>
<a id="trace-4866"></a>
<a id="trace-4879"></a>
<a id="trace-4900"></a>
<a id="trace-4915"></a>
<a id="trace-4996"></a>
<a id="trace-5010"></a>
<a id="trace-5021"></a>
<a id="trace-5028"></a>
<a id="trace-5044"></a>
<a id="trace-5054"></a>
<a id="trace-5072"></a>
<a id="trace-5080"></a>
<a id="trace-5100"></a>
<a id="trace-5111"></a>
<a id="trace-5190"></a>
<a id="trace-5208"></a>
<a id="trace-5223"></a>
<a id="trace-5235"></a>
<a id="trace-5250"></a>
<a id="trace-5257"></a>
<a id="trace-5275"></a>
<a id="trace-5288"></a>
<a id="trace-5307"></a>
<a id="trace-5316"></a>
<a id="trace-5450"></a>
<a id="trace-5516"></a>
<a id="trace-5532"></a>
<a id="trace-5550"></a>
<a id="trace-5568"></a>
<a id="trace-5584"></a>
<a id="trace-5605"></a>
<a id="trace-5617"></a>
<a id="trace-5632"></a>
<a id="trace-5642"></a>
<a id="trace-5724"></a>
<a id="trace-5732"></a>
<a id="trace-5751"></a>
<a id="trace-5763"></a>
<a id="trace-5775"></a>
<a id="trace-5790"></a>
<a id="trace-5805"></a>
<a id="trace-5820"></a>
<a id="trace-5836"></a>
<a id="trace-5846"></a>
<a id="trace-5926"></a>
<a id="trace-5940"></a>
<a id="trace-5955"></a>
<a id="trace-5963"></a>
<a id="trace-5983"></a>
<a id="trace-5993"></a>
<a id="trace-6007"></a>
<a id="trace-6019"></a>
<a id="trace-6032"></a>
<a id="trace-6054"></a>
<a id="trace-6129"></a>
<a id="trace-6196"></a>
<a id="trace-6216"></a>
<a id="trace-6229"></a>
<a id="trace-6249"></a>
<a id="trace-6258"></a>
<a id="trace-6280"></a>
<a id="trace-6297"></a>
<a id="trace-6312"></a>
<a id="trace-6322"></a>
<a id="trace-6400"></a>
<a id="trace-6410"></a>
<a id="trace-6424"></a>
<a id="trace-6433"></a>
<a id="trace-6449"></a>
<a id="trace-6463"></a>
<a id="trace-6474"></a>
<a id="trace-6481"></a>
<a id="trace-6494"></a>
<a id="trace-6501"></a>
<a id="trace-6580"></a>
<a id="trace-6588"></a>
<a id="trace-6604"></a>
<a id="trace-6608"></a>
<a id="trace-6621"></a>
<a id="trace-6631"></a>
<a id="trace-6753"></a>
<a id="trace-6764"></a>
<a id="trace-6774"></a>
<a id="trace-6787"></a>
<a id="trace-6862"></a>
<a id="trace-6868"></a>
<a id="trace-6884"></a>
<a id="trace-7046"></a>
<a id="trace-7064"></a>
<a id="trace-7075"></a>
<a id="trace-7087"></a>
<a id="trace-7095"></a>
<a id="trace-7108"></a>
<a id="trace-7115"></a>
<a id="trace-7194"></a>
<a id="trace-7203"></a>
<a id="trace-7218"></a>
<a id="trace-7231"></a>
<a id="trace-7239"></a>
<a id="trace-7245"></a>
<a id="trace-7262"></a>
<a id="trace-7270"></a>
<a id="trace-7280"></a>
<a id="trace-7288"></a>
<a id="trace-7363"></a>
<a id="trace-7378"></a>
<a id="trace-7387"></a>
<a id="trace-7405"></a>
<a id="trace-7438"></a>
<a id="trace-7467"></a>
<a id="trace-7515"></a>
<a id="trace-7562"></a>
<a id="trace-7614"></a>
<a id="trace-7704"></a>
<a id="trace-7798"></a>
<a id="trace-7818"></a>
<a id="trace-7840"></a>
<a id="trace-7850"></a>
<a id="trace-7862"></a>
<a id="trace-7876"></a>
<a id="trace-7888"></a>
<a id="trace-7901"></a>
<a id="trace-7909"></a>
<a id="trace-7918"></a>
<a id="trace-7998"></a>
<a id="trace-8004"></a>
<a id="trace-8015"></a>
<a id="trace-8022"></a>
<a id="trace-8034"></a>
<a id="trace-8046"></a>
<a id="trace-8053"></a>
<a id="trace-8060"></a>
<a id="trace-8079"></a>
<a id="trace-8085"></a>
<a id="trace-8156"></a>
<a id="trace-8167"></a>
<a id="trace-8181"></a>
<a id="trace-8193"></a>
<a id="trace-8201"></a>
<a id="trace-8207"></a>
<a id="trace-8227"></a>
<a id="trace-8241"></a>
<a id="trace-8251"></a>
<a id="trace-8266"></a>
<a id="trace-8345"></a>
<a id="trace-8358"></a>
<a id="trace-8448"></a>
<a id="trace-8455"></a>
<a id="trace-8484"></a>
<a id="trace-8494"></a>
<a id="trace-8504"></a>
<a id="trace-8522"></a>
<a id="trace-8543"></a>
<a id="trace-8559"></a>
<a id="trace-8633"></a>
<a id="trace-8647"></a>
<a id="trace-8666"></a>
<a id="trace-8673"></a>
<a id="trace-8695"></a>
<a id="trace-8706"></a>
<a id="trace-8727"></a>
<a id="trace-8747"></a>
<a id="trace-8762"></a>
<a id="trace-8772"></a>
<a id="trace-8889"></a>
<a id="trace-8901"></a>
<a id="trace-8920"></a>
<a id="trace-8933"></a>
<a id="trace-8953"></a>
<a id="trace-8974"></a>
<a id="trace-8991"></a>
<a id="trace-9002"></a>
<a id="trace-9029"></a>
<a id="trace-9039"></a>
<a id="trace-9118"></a>
<a id="trace-9133"></a>
<a id="trace-9151"></a>
<a id="trace-9168"></a>
<a id="trace-9179"></a>
<a id="trace-9191"></a>
<a id="trace-9209"></a>
<a id="trace-9221"></a>
<a id="trace-9233"></a>
<a id="trace-9242"></a>
<a id="trace-9323"></a>
<a id="trace-9337"></a>
<a id="trace-9351"></a>
<a id="trace-9359"></a>
<a id="trace-9380"></a>
<a id="trace-9400"></a>
<a id="trace-9413"></a>
<a id="trace-9478"></a>
<a id="trace-9497"></a>
<a id="trace-9510"></a>
<a id="trace-9588"></a>
<a id="trace-9599"></a>
<a id="trace-9622"></a>
<a id="trace-9631"></a>
<a id="trace-9648"></a>
<a id="trace-9655"></a>
<a id="trace-9671"></a>
<a id="trace-9690"></a>
<a id="trace-9702"></a>
<a id="trace-9713"></a>
<a id="trace-9801"></a>
<a id="trace-9808"></a>
<a id="trace-9820"></a>
<a id="trace-9831"></a>
<a id="trace-9848"></a>
<a id="trace-9861"></a>
<a id="trace-9874"></a>
<a id="trace-9882"></a>
<a id="trace-9900"></a>
<a id="trace-9911"></a>
<a id="trace-9992"></a>
<a id="trace-10003"></a>
<a id="trace-10020"></a>
<a id="trace-10037"></a>
<a id="trace-10049"></a>
<a id="trace-10058"></a>
<a id="trace-10079"></a>
<a id="trace-10090"></a>
<a id="trace-10217"></a>
<a id="trace-10224"></a>
<a id="trace-10310"></a>
<a id="trace-10333"></a>
<a id="trace-10342"></a>
<a id="trace-10363"></a>
<a id="trace-10393"></a>
<a id="trace-10555"></a>
<a id="trace-10571"></a>
<a id="trace-10585"></a>
<a id="trace-10604"></a>
<a id="trace-10616"></a>
<a id="trace-10697"></a>
<a id="trace-10708"></a>
<a id="trace-10726"></a>
<a id="trace-10738"></a>
<a id="trace-10747"></a>
<a id="trace-10759"></a>
<a id="trace-10775"></a>
<a id="trace-10791"></a>
<a id="trace-10802"></a>
<a id="trace-10811"></a>
<a id="trace-10899"></a>
<a id="trace-10910"></a>
<a id="trace-10921"></a>
<a id="trace-10929"></a>
<a id="trace-10947"></a>
<a id="trace-10964"></a>
<a id="trace-10974"></a>
<a id="trace-10988"></a>
<a id="trace-11006"></a>
<a id="trace-11014"></a>
<a id="trace-11152"></a>
<a id="trace-11158"></a>
<a id="trace-11180"></a>
<a id="trace-11200"></a>
<a id="trace-11212"></a>
<a id="trace-11223"></a>
<a id="trace-11251"></a>
<a id="trace-11261"></a>
<a id="trace-11272"></a>
<a id="trace-11285"></a>
<a id="trace-11364"></a>
<a id="trace-11377"></a>
<a id="trace-11390"></a>
<a id="trace-11402"></a>
<a id="trace-11426"></a>
<a id="trace-11438"></a>
<a id="trace-11449"></a>
<a id="trace-11466"></a>
<a id="trace-11485"></a>
<a id="trace-11505"></a>
<a id="trace-11583"></a>
<a id="trace-11602"></a>
<a id="trace-11621"></a>
<a id="trace-11627"></a>
<a id="trace-11641"></a>
<a id="trace-11649"></a>
<a id="trace-11662"></a>
<a id="trace-11667"></a>
<a id="trace-11678"></a>
<a id="trace-11686"></a>
<a id="trace-11759"></a>
<a id="trace-11770"></a>
<a id="trace-11781"></a>
<a id="trace-11791"></a>
<a id="trace-11800"></a>
<a id="trace-11806"></a>
<a id="trace-11817"></a>
<a id="trace-11826"></a>
<a id="trace-11839"></a>
<a id="trace-11848"></a>
<a id="trace-11922"></a>
<a id="trace-11929"></a>
<a id="trace-11938"></a>
<a id="trace-11948"></a>
<a id="trace-11956"></a>
<a id="trace-11968"></a>
<a id="trace-11977"></a>
<a id="trace-11983"></a>
<a id="trace-11994"></a>
<a id="trace-12003"></a>
<a id="trace-12078"></a>
<a id="trace-12087"></a>
<a id="trace-12099"></a>
<a id="trace-12104"></a>
<a id="trace-12113"></a>
<a id="trace-12123"></a>
<a id="trace-12131"></a>
<a id="trace-12140"></a>
<a id="trace-12153"></a>
<a id="trace-12161"></a>
<a id="trace-12234"></a>
<a id="trace-12242"></a>
<a id="trace-12254"></a>
<a id="trace-12260"></a>
<a id="trace-12273"></a>
<a id="trace-12279"></a>
<a id="trace-12290"></a>
<a id="trace-12299"></a>
<a id="trace-12307"></a>
<a id="trace-12318"></a>
<a id="trace-12391"></a>
<a id="trace-12398"></a>
<a id="trace-12408"></a>
<a id="trace-12417"></a>
<a id="trace-12428"></a>
<a id="trace-12542"></a>
<a id="trace-12554"></a>
<a id="trace-12564"></a>
<a id="trace-12580"></a>
<a id="trace-12591"></a>
<a id="trace-12670"></a>
<a id="trace-12688"></a>
<a id="trace-12702"></a>
<a id="trace-12711"></a>
<a id="trace-12727"></a>
<a id="trace-12739"></a>
<a id="trace-12755"></a>
<a id="trace-12876"></a>
<a id="trace-12898"></a>
<a id="trace-12906"></a>
<a id="trace-12987"></a>
<a id="trace-13007"></a>
<a id="trace-13028"></a>
<a id="trace-13041"></a>
<a id="trace-13058"></a>
<a id="trace-13068"></a>
<a id="trace-13080"></a>
<a id="trace-13092"></a>
<a id="trace-13110"></a>
<a id="trace-13119"></a>
<a id="trace-13295"></a>
<a id="trace-13306"></a>
<a id="trace-13323"></a>
<a id="trace-13435"></a>
<a id="trace-13454"></a>
<a id="trace-13469"></a>
<a id="trace-13499"></a>
<a id="trace-13513"></a>
<a id="trace-13534"></a>
<a id="trace-13548"></a>
<a id="trace-13632"></a>
<a id="trace-13645"></a>
<a id="trace-13655"></a>
<a id="trace-13668"></a>
<a id="trace-13686"></a>
<a id="trace-13700"></a>
<a id="trace-13713"></a>
<a id="trace-13726"></a>
<a id="trace-13747"></a>
<a id="trace-13759"></a>
<a id="trace-13835"></a>
<a id="trace-13847"></a>
<a id="trace-13857"></a>
<a id="trace-13921"></a>
<a id="trace-13934"></a>
<a id="trace-13945"></a>
<a id="trace-13960"></a>
<a id="trace-13967"></a>
<a id="trace-13979"></a>
<a id="trace-13982"></a>
<a id="trace-14054"></a>
<a id="trace-14060"></a>
<a id="trace-14070"></a>
<a id="trace-14074"></a>
<a id="trace-14086"></a>
<a id="trace-14091"></a>
<a id="trace-14097"></a>
<a id="trace-14101"></a>
<a id="trace-14108"></a>
<a id="trace-14110"></a>
<a id="trace-14177"></a>
<a id="trace-14179"></a>
<a id="trace-14185"></a>
<a id="trace-14189"></a>
<a id="trace-14199"></a>
<a id="trace-14204"></a>
<a id="trace-14210"></a>
<a id="trace-14215"></a>
<a id="trace-14229"></a>
<a id="trace-14234"></a>
<a id="trace-14309"></a>
<a id="trace-14318"></a>
<a id="trace-14328"></a>
<a id="trace-14335"></a>
<a id="trace-14345"></a>
<a id="trace-14352"></a>
<a id="trace-14362"></a>
<a id="trace-14369"></a>
<a id="trace-14380"></a>
<a id="trace-14387"></a>
<a id="trace-14461"></a>
<a id="trace-14467"></a>
<a id="trace-14477"></a>
<a id="trace-14484"></a>
<a id="trace-14495"></a>
<a id="trace-14503"></a>
<a id="trace-14513"></a>
<a id="trace-14518"></a>
<a id="trace-14531"></a>
<a id="trace-14542"></a>
<a id="trace-14616"></a>
<a id="trace-14623"></a>
<a id="trace-14633"></a>
<a id="trace-14639"></a>
<a id="trace-14649"></a>
<a id="trace-14657"></a>
<a id="trace-14666"></a>
<a id="trace-14673"></a>
<a id="trace-14684"></a>
<a id="trace-14692"></a>
<a id="trace-14767"></a>
<a id="trace-14774"></a>
<a id="trace-14790"></a>
<a id="trace-14797"></a>
<a id="trace-14807"></a>
<a id="trace-14814"></a>
<a id="trace-14823"></a>
<a id="trace-14830"></a>
<a id="trace-14841"></a>
<a id="trace-14847"></a>
<a id="trace-14922"></a>
<a id="trace-14927"></a>
<a id="trace-14939"></a>
<a id="trace-14946"></a>
<a id="trace-14957"></a>
<a id="trace-14970"></a>
<a id="trace-14981"></a>
<a id="trace-14987"></a>
<a id="trace-14998"></a>
<a id="trace-15005"></a>
<a id="trace-15079"></a>
<a id="trace-15086"></a>
<a id="trace-15096"></a>
<a id="trace-15102"></a>
<a id="trace-15112"></a>
<a id="trace-15121"></a>
<a id="trace-15132"></a>
<a id="trace-15140"></a>
<a id="trace-15156"></a>
<a id="trace-15163"></a>
<a id="trace-15238"></a>
<a id="trace-15244"></a>
<a id="trace-15254"></a>
<a id="trace-15261"></a>
<a id="trace-15271"></a>
<a id="trace-15278"></a>
<a id="trace-15288"></a>
<a id="trace-15295"></a>
<a id="trace-15314"></a>
<a id="trace-15389"></a>
<a id="trace-15395"></a>
<a id="trace-15410"></a>
<a id="trace-15417"></a>
<a id="trace-15427"></a>
<a id="trace-15434"></a>
<a id="trace-15444"></a>
<a id="trace-15450"></a>
<a id="trace-15460"></a>
<a id="trace-15466"></a>
<a id="trace-15541"></a>
<a id="trace-15548"></a>
<a id="trace-15559"></a>
<a id="trace-15565"></a>
<a id="trace-15577"></a>
<a id="trace-15590"></a>
<a id="trace-15602"></a>
<a id="trace-15609"></a>
<a id="trace-15620"></a>
<a id="trace-15625"></a>
<a id="trace-15700"></a>
<a id="trace-15776"></a>
<a id="trace-15789"></a>
<a id="trace-15803"></a>
<a id="trace-15812"></a>
<a id="trace-15829"></a>
<a id="trace-15892"></a>
<a id="trace-15908"></a>
<a id="trace-15918"></a>
<a id="trace-15996"></a>
<a id="trace-16008"></a>
<a id="trace-16022"></a>
<a id="trace-16031"></a>
<a id="trace-16045"></a>
<a id="trace-16055"></a>
<a id="trace-16066"></a>
<a id="trace-16073"></a>
<a id="trace-16090"></a>
<a id="trace-16106"></a>
<a id="trace-16183"></a>
<a id="trace-16211"></a>
<a id="trace-16216"></a>
<a id="trace-16226"></a>
<a id="trace-16234"></a>
<a id="trace-16247"></a>
<a id="trace-16254"></a>
<a id="trace-16264"></a>
<a id="trace-16272"></a>
<a id="trace-16344"></a>
<a id="trace-16352"></a>
<a id="trace-16363"></a>
<a id="trace-16371"></a>
<a id="trace-16386"></a>
<a id="trace-16394"></a>
<a id="trace-16406"></a>
<a id="trace-16413"></a>
<a id="trace-16423"></a>
<a id="trace-16430"></a>
<a id="trace-16503"></a>
<a id="trace-16509"></a>
<a id="trace-16519"></a>
<a id="trace-16526"></a>
<a id="trace-16544"></a>
<a id="trace-16557"></a>
<a id="trace-16564"></a>
<a id="trace-16580"></a>
<a id="trace-16587"></a>
- 1.60s–359.80s (×712), actor 37, squad 4 (trace 211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6015953836021876, 'next_transition': 232}.
<a id="trace-367"></a>
<a id="trace-411"></a>
<a id="trace-422"></a>
<a id="trace-443"></a>
<a id="trace-467"></a>
<a id="trace-487"></a>
<a id="trace-570"></a>
<a id="trace-578"></a>
- 5.70s–10.70s (×8), actor 5, squad 0 (trace 367): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 293. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.2876057716330145, 'next_transition': 411}.
<a id="trace-585"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 585): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 492. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724963650723586, 'next_transition': 697}.
<a id="trace-697"></a>
<a id="trace-712"></a>
<a id="trace-731"></a>
- 11.20s–12.20s (×3), actor 5, squad 0 (trace 697): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 494. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6547630541564429, 'next_transition': 712}.
<a id="trace-127"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 127): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331222820702656, 'next_transition': 752}.
<a id="trace-735"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 735): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 735. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331222820702656, 'next_transition': 752}.
<a id="trace-736"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 736): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 736. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331222820702656, 'next_transition': 752}.
<a id="trace-752"></a>
<a id="trace-768"></a>
<a id="trace-781"></a>
<a id="trace-901"></a>
<a id="trace-932"></a>
<a id="trace-969"></a>
<a id="trace-999"></a>
<a id="trace-1015"></a>
<a id="trace-1022"></a>
<a id="trace-1107"></a>
<a id="trace-1127"></a>
- 12.70s–20.75s (×11), actor 5, squad 0 (trace 752): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 736. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8900243195825341, 'next_transition': 768}.
<a id="trace-1137"></a>
- 21.15s–21.15s (×1), actor 0, squad 0 (trace 1137): traveling overwatch. Knowledge: actor memory at 20.00s, trace 1030. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450080680889231, 'next_transition': 1248}.
<a id="trace-1138"></a>
- 21.15s–21.15s (×1), actor 0, squad 0 (trace 1138): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 1030. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450080680889231, 'next_transition': 1248}.
<a id="trace-1248"></a>
<a id="trace-1273"></a>
<a id="trace-1282"></a>
<a id="trace-1298"></a>
<a id="trace-1305"></a>
<a id="trace-1328"></a>
<a id="trace-1419"></a>
<a id="trace-1429"></a>
<a id="trace-1454"></a>
<a id="trace-1462"></a>
<a id="trace-1481"></a>
<a id="trace-1491"></a>
<a id="trace-1511"></a>
<a id="trace-1527"></a>
- 21.75s–28.75s (×14), actor 5, squad 0 (trace 1248): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1032. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2993386721079707, 'next_transition': 1273}.
<a id="trace-1535"></a>
- 28.95s–28.95s (×1), actor 0, squad 0 (trace 1535): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 1347. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6539591187716747, 'next_transition': 1687}.
<a id="trace-1687"></a>
<a id="trace-1738"></a>
<a id="trace-1753"></a>
<a id="trace-1844"></a>
- 30.25s–35.25s (×4), actor 5, squad 0 (trace 1687): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1613. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6071022752721756, 'next_transition': 1738}.
<a id="trace-1847"></a>
- 35.50s–35.50s (×1), actor 0, squad 0 (trace 1847): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 1775. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1957}.
<a id="trace-1848"></a>
- 35.50s–35.50s (×1), actor 0, squad 0 (trace 1848): bounding overwatch. Knowledge: actor memory at 35.00s, trace 1775. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1957}.
<a id="trace-1849"></a>
<a id="trace-1957"></a>
<a id="trace-2065"></a>
- 35.50s–35.70s (×3), actor 0, squad 0 (trace 1849): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 1775. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1957}.
<a id="trace-2173"></a>
<a id="trace-2185"></a>
<a id="trace-2198"></a>
<a id="trace-2226"></a>
<a id="trace-2230"></a>
<a id="trace-2262"></a>
- 35.75s–38.75s (×6), actor 5, squad 0 (trace 2173): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 1777. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11293265100271045, 'next_transition': 2185}.
<a id="trace-2281"></a>
- 39.20s–39.20s (×1), actor 0, squad 0 (trace 2281): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 1775. Next observer evidence: None.
<a id="trace-2282"></a>
- 39.20s–39.20s (×1), actor 0, squad 0 (trace 2282): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 1775. Next observer evidence: None.
<a id="trace-2440"></a>
<a id="trace-2451"></a>
<a id="trace-2528"></a>
<a id="trace-2547"></a>
<a id="trace-2555"></a>
<a id="trace-2580"></a>
<a id="trace-2597"></a>
<a id="trace-2605"></a>
<a id="trace-2633"></a>
<a id="trace-2723"></a>
<a id="trace-2751"></a>
<a id="trace-2786"></a>
<a id="trace-2836"></a>
<a id="trace-2886"></a>
<a id="trace-2997"></a>
<a id="trace-3019"></a>
<a id="trace-3026"></a>
<a id="trace-3103"></a>
- 39.25s–50.25s (×18), actor 5, squad 0 (trace 2440): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 1777. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2451}.
<a id="trace-3110"></a>
- 50.50s–50.50s (×1), actor 0, squad 0 (trace 3110): NeedSupport. Knowledge: actor memory at 50.00s, trace 3029. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40995951465430447, 'next_transition': 3117}.
<a id="trace-3117"></a>
<a id="trace-3135"></a>
<a id="trace-3162"></a>
- 50.75s–51.75s (×3), actor 5, squad 0 (trace 3117): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 3031. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3842484485197156, 'next_transition': 3135}.
<a id="trace-3194"></a>
- 52.20s–52.20s (×1), actor 0, squad 0 (trace 3194): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 3029. Next observer evidence: None.
<a id="trace-3195"></a>
- 52.20s–52.20s (×1), actor 0, squad 0 (trace 3195): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 3029. Next observer evidence: None.
<a id="trace-3254"></a>
<a id="trace-3288"></a>
<a id="trace-3331"></a>
<a id="trace-3399"></a>
<a id="trace-3414"></a>
<a id="trace-3493"></a>
<a id="trace-3506"></a>
<a id="trace-3519"></a>
<a id="trace-3537"></a>
<a id="trace-3547"></a>
<a id="trace-3564"></a>
<a id="trace-3571"></a>
<a id="trace-3588"></a>
<a id="trace-3663"></a>
<a id="trace-3683"></a>
<a id="trace-3689"></a>
<a id="trace-3708"></a>
<a id="trace-3714"></a>
<a id="trace-3725"></a>
<a id="trace-3736"></a>
<a id="trace-3748"></a>
<a id="trace-3756"></a>
<a id="trace-3834"></a>
<a id="trace-3845"></a>
<a id="trace-3858"></a>
<a id="trace-3877"></a>
<a id="trace-3889"></a>
<a id="trace-3897"></a>
<a id="trace-3917"></a>
<a id="trace-3930"></a>
- 52.25s–68.75s (×30), actor 5, squad 0 (trace 3254): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 3031. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0003824999999997303, 'next_transition': 3288}.
<a id="trace-3933"></a>
- 68.75s–68.75s (×1), actor 0, squad 0 (trace 3933): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 3765. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875231331885564, 'next_transition': 4023}.
<a id="trace-3955"></a>
- 68.75s–68.75s (×1), actor 0, squad 0 (trace 3955): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 3765. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875231331885564, 'next_transition': 4023}.
<a id="trace-4023"></a>
<a id="trace-4038"></a>
<a id="trace-4118"></a>
<a id="trace-4130"></a>
<a id="trace-4149"></a>
<a id="trace-4162"></a>
<a id="trace-4177"></a>
<a id="trace-4204"></a>
<a id="trace-4243"></a>
<a id="trace-4326"></a>
<a id="trace-4354"></a>
<a id="trace-4364"></a>
<a id="trace-4378"></a>
<a id="trace-4389"></a>
<a id="trace-4402"></a>
<a id="trace-4419"></a>
- 69.25s–78.75s (×16), actor 5, squad 0 (trace 4023): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 3767. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512249899534125, 'next_transition': 4038}.
<a id="trace-4423"></a>
- 78.80s–78.80s (×1), actor 0, squad 0 (trace 4423): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 75.00s, trace 4250. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45616702863367486, 'next_transition': 4435}.
<a id="trace-4435"></a>
<a id="trace-4449"></a>
<a id="trace-4534"></a>
<a id="trace-4549"></a>
- 79.25s–80.75s (×4), actor 5, squad 0 (trace 4435): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4252. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31497857268392127, 'next_transition': 4449}.
<a id="trace-705"></a>
- 81.30s–81.30s (×1), actor 5, squad 0 (events line 705): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4575"></a>
- 81.30s–81.30s (×1), actor 5, squad 0 (trace 4575): renew committed intent (75 s lifetime). Knowledge: actor memory at 81.30s, trace 4575. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449364095266126, 'next_transition': 4589}.
<a id="trace-4589"></a>
<a id="trace-4610"></a>
<a id="trace-4623"></a>
<a id="trace-4663"></a>
<a id="trace-4676"></a>
<a id="trace-4753"></a>
<a id="trace-4759"></a>
<a id="trace-4777"></a>
- 81.75s–86.25s (×8), actor 5, squad 0 (trace 4589): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 81.30s, trace 4575. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4175189193775184, 'next_transition': 4610}.
<a id="trace-4789"></a>
- 86.75s–86.75s (×1), actor 0, squad 0 (trace 4789): MoveTactically. Knowledge: actor memory at 85.00s, trace 4684. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4830}.
<a id="trace-4790"></a>
- 86.75s–86.75s (×1), actor 0, squad 0 (trace 4790): traveling overwatch. Knowledge: actor memory at 85.00s, trace 4684. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4830}.
<a id="trace-4791"></a>
- 86.75s–86.75s (×1), actor 0, squad 0 (trace 4791): received platoon directive. Knowledge: actor memory at 85.00s, trace 4684. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4830}.
<a id="trace-4830"></a>
<a id="trace-4844"></a>
<a id="trace-4864"></a>
<a id="trace-4877"></a>
<a id="trace-4898"></a>
<a id="trace-4913"></a>
<a id="trace-4994"></a>
<a id="trace-5008"></a>
<a id="trace-5019"></a>
<a id="trace-5026"></a>
<a id="trace-5042"></a>
<a id="trace-5052"></a>
<a id="trace-5070"></a>
<a id="trace-5109"></a>
- 87.25s–94.75s (×14), actor 5, squad 0 (trace 4830): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 4686. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.028346695684858803, 'next_transition': 4844}.
<a id="trace-847"></a>
- 95.15s–95.15s (×1), actor 5, squad 0 (events line 847): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5126"></a>
- 95.15s–95.15s (×1), actor 5, squad 0 (trace 5126): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.942871 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.15s, trace 5126. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.340200159988572, 'next_transition': 5206}.
<a id="trace-5127"></a>
- 95.15s–95.15s (×1), actor 5, squad 0 (trace 5127): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.942871 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.15s, trace 5127. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.340200159988572, 'next_transition': 5206}.
<a id="trace-5206"></a>
<a id="trace-5221"></a>
<a id="trace-5233"></a>
<a id="trace-5248"></a>
<a id="trace-5273"></a>
<a id="trace-5305"></a>
<a id="trace-5314"></a>
- 95.75s–99.75s (×7), actor 5, squad 0 (trace 5206): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.15s, trace 5127. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34020015998857195, 'next_transition': 5221}.
<a id="trace-5320"></a>
- 99.95s–99.95s (×1), actor 0, squad 0 (trace 5320): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 5116. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5448}.
<a id="trace-5448"></a>
- 100.25s–100.25s (×1), actor 5, squad 0 (trace 5448): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 5375. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5458}.
<a id="trace-5458"></a>
- 100.60s–100.60s (×1), actor 0, squad 0 (trace 5458): received platoon directive. Knowledge: actor memory at 100.00s, trace 5373. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874718553777591, 'next_transition': 5530}.
<a id="trace-5530"></a>
<a id="trace-5566"></a>
<a id="trace-5582"></a>
<a id="trace-5603"></a>
<a id="trace-5615"></a>
<a id="trace-5630"></a>
<a id="trace-5640"></a>
<a id="trace-5722"></a>
<a id="trace-5730"></a>
<a id="trace-5749"></a>
<a id="trace-5761"></a>
<a id="trace-5773"></a>
<a id="trace-5788"></a>
<a id="trace-5803"></a>
<a id="trace-5818"></a>
<a id="trace-5834"></a>
<a id="trace-5844"></a>
<a id="trace-5924"></a>
<a id="trace-5938"></a>
<a id="trace-5953"></a>
<a id="trace-5961"></a>
<a id="trace-5981"></a>
<a id="trace-5991"></a>
<a id="trace-6005"></a>
<a id="trace-6017"></a>
<a id="trace-6030"></a>
<a id="trace-6052"></a>
<a id="trace-6127"></a>
- 101.25s–115.25s (×28), actor 5, squad 0 (trace 5530): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 5375. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8661936859452624, 'next_transition': 5566}.
<a id="trace-6134"></a>
- 115.55s–115.55s (×1), actor 0, squad 0 (trace 6134): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 115.00s, trace 6057. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6137}.
<a id="trace-6137"></a>
- 115.60s–115.60s (×1), actor 0, squad 0 (trace 6137): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 6057. Next observer evidence: None.
<a id="trace-6194"></a>
<a id="trace-6214"></a>
<a id="trace-6247"></a>
<a id="trace-6278"></a>
<a id="trace-6295"></a>
<a id="trace-6310"></a>
<a id="trace-6320"></a>
<a id="trace-6398"></a>
<a id="trace-6408"></a>
<a id="trace-6422"></a>
<a id="trace-6431"></a>
<a id="trace-6447"></a>
<a id="trace-6461"></a>
<a id="trace-6479"></a>
<a id="trace-6492"></a>
<a id="trace-6578"></a>
<a id="trace-6586"></a>
<a id="trace-6602"></a>
<a id="trace-6619"></a>
<a id="trace-6629"></a>
- 115.75s–127.75s (×20), actor 5, squad 0 (trace 6194): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6059. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6214}.
<a id="trace-6633"></a>
- 128.10s–128.10s (×1), actor 0, squad 0 (trace 6633): ReactToContact: cover and return fire. Knowledge: actor memory at 125.00s, trace 6511. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08118319561337817, 'next_transition': 6751}.
<a id="trace-6634"></a>
- 128.10s–128.10s (×1), actor 0, squad 0 (trace 6634): bounding overwatch. Knowledge: actor memory at 125.00s, trace 6511. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08118319561337817, 'next_transition': 6751}.
<a id="trace-6635"></a>
- 128.10s–128.10s (×1), actor 0, squad 0 (trace 6635): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 125.00s, trace 6511. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08118319561337817, 'next_transition': 6751}.
<a id="trace-6751"></a>
<a id="trace-6762"></a>
<a id="trace-6772"></a>
<a id="trace-6785"></a>
<a id="trace-6860"></a>
<a id="trace-6866"></a>
- 128.30s–130.80s (×6), actor 5, squad 0 (trace 6751): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 6513. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38383908347279105, 'next_transition': 6762}.
<a id="trace-6887"></a>
- 131.60s–131.60s (×1), actor 0, squad 0 (trace 6887): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 130.00s, trace 6788. Next observer evidence: {'until': 131.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07353285940652654, 'next_transition': 7044}.
<a id="trace-6888"></a>
- 131.60s–131.60s (×1), actor 0, squad 0 (trace 6888): rearward bound: one stationary suppressing element. Knowledge: actor memory at 130.00s, trace 6788. Next observer evidence: {'until': 131.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07353285940652654, 'next_transition': 7044}.
<a id="trace-7044"></a>
<a id="trace-7062"></a>
<a id="trace-7073"></a>
<a id="trace-7085"></a>
<a id="trace-7192"></a>
<a id="trace-7201"></a>
<a id="trace-7216"></a>
<a id="trace-7229"></a>
<a id="trace-7237"></a>
<a id="trace-7243"></a>
<a id="trace-7268"></a>
<a id="trace-7286"></a>
<a id="trace-7376"></a>
<a id="trace-7385"></a>
<a id="trace-7436"></a>
- 131.80s–142.30s (×15), actor 5, squad 0 (trace 7044): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 6790. Next observer evidence: {'until': 132.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.018623183300660536, 'next_transition': 7062}.
<a id="trace-7492"></a>
- 143.10s–143.10s (×1), actor 0, squad 0 (trace 7492): NeedSupport. Knowledge: actor memory at 140.00s, trace 7289. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.000553624421426489, 'next_transition': 7513}.
<a id="trace-7513"></a>
<a id="trace-7612"></a>
- 143.30s–144.30s (×2), actor 5, squad 0 (trace 7513): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 7291. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05578737536396577, 'next_transition': 7612}.
<a id="trace-7625"></a>
- 144.45s–144.45s (×1), actor 0, squad 0 (trace 7625): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 140.00s, trace 7289. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7843427568833639, 'next_transition': 7816}.
<a id="trace-7626"></a>
- 144.45s–144.45s (×1), actor 0, squad 0 (trace 7626): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 140.00s, trace 7289. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7843427568833639, 'next_transition': 7816}.
<a id="trace-7816"></a>
<a id="trace-7848"></a>
<a id="trace-7860"></a>
<a id="trace-7874"></a>
<a id="trace-7886"></a>
<a id="trace-7899"></a>
<a id="trace-7907"></a>
<a id="trace-7916"></a>
<a id="trace-7996"></a>
<a id="trace-8020"></a>
<a id="trace-8032"></a>
<a id="trace-8044"></a>
<a id="trace-8051"></a>
<a id="trace-8058"></a>
<a id="trace-8083"></a>
<a id="trace-8154"></a>
<a id="trace-8165"></a>
<a id="trace-8179"></a>
<a id="trace-8191"></a>
<a id="trace-8199"></a>
<a id="trace-8205"></a>
<a id="trace-8225"></a>
<a id="trace-8239"></a>
<a id="trace-8264"></a>
<a id="trace-8343"></a>
<a id="trace-8356"></a>
- 145.80s–160.80s (×26), actor 5, squad 0 (trace 7816): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 7714. Next observer evidence: {'until': 146.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8282250443284265, 'next_transition': 7848}.
<a id="trace-8367"></a>
- 161.15s–161.15s (×1), actor 0, squad 0 (trace 8367): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 8269. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498251538776045, 'next_transition': 8446}.
<a id="trace-8389"></a>
- 161.15s–161.15s (×1), actor 0, squad 0 (trace 8389): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 8269. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498251538776045, 'next_transition': 8446}.
<a id="trace-8446"></a>
<a id="trace-8453"></a>
<a id="trace-8482"></a>
<a id="trace-8492"></a>
<a id="trace-8502"></a>
<a id="trace-8520"></a>
- 161.30s–163.80s (×6), actor 5, squad 0 (trace 8446): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 8271. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449902479829295, 'next_transition': 8453}.
<a id="trace-1370"></a>
- 164.25s–164.25s (×1), actor 5, squad 0 (events line 1370): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8536"></a>
- 164.25s–164.25s (×1), actor 5, squad 0 (trace 8536): renew committed intent (75 s lifetime). Knowledge: actor memory at 164.25s, trace 8536. Next observer evidence: None.
<a id="trace-8540"></a>
<a id="trace-8557"></a>
<a id="trace-8631"></a>
<a id="trace-8645"></a>
<a id="trace-8664"></a>
<a id="trace-8671"></a>
- 164.30s–166.80s (×6), actor 5, squad 0 (trace 8540): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 164.25s, trace 8536. Next observer evidence: {'until': 164.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299621328717697, 'next_transition': 8557}.
<a id="trace-8677"></a>
- 166.95s–166.95s (×1), actor 0, squad 0 (trace 8677): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 165.00s, trace 8560. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150088103926611, 'next_transition': 8693}.
<a id="trace-8693"></a>
<a id="trace-8725"></a>
<a id="trace-8745"></a>
<a id="trace-8760"></a>
- 167.30s–169.30s (×4), actor 5, squad 0 (trace 8693): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 8562. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.787507543614664, 'next_transition': 8725}.
<a id="trace-8789"></a>
- 170.15s–170.15s (×1), actor 0, squad 0 (trace 8789): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 170.00s, trace 8778. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47252526993593186, 'next_transition': 8887}.
<a id="trace-8790"></a>
- 170.15s–170.15s (×1), actor 0, squad 0 (trace 8790): MoveTactically. Knowledge: actor memory at 170.00s, trace 8778. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47252526993593186, 'next_transition': 8887}.
<a id="trace-8791"></a>
- 170.15s–170.15s (×1), actor 0, squad 0 (trace 8791): traveling overwatch. Knowledge: actor memory at 170.00s, trace 8778. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47252526993593186, 'next_transition': 8887}.
<a id="trace-8792"></a>
- 170.15s–170.15s (×1), actor 0, squad 0 (trace 8792): . Knowledge: actor memory at 170.00s, trace 8778. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47252526993593186, 'next_transition': 8887}.
<a id="trace-8887"></a>
<a id="trace-8899"></a>
<a id="trace-8918"></a>
<a id="trace-8931"></a>
<a id="trace-8951"></a>
<a id="trace-8972"></a>
<a id="trace-8989"></a>
<a id="trace-9000"></a>
<a id="trace-9037"></a>
<a id="trace-9116"></a>
<a id="trace-9131"></a>
<a id="trace-9149"></a>
<a id="trace-9166"></a>
<a id="trace-9177"></a>
<a id="trace-9207"></a>
<a id="trace-9219"></a>
<a id="trace-9231"></a>
<a id="trace-9240"></a>
<a id="trace-9321"></a>
<a id="trace-9335"></a>
<a id="trace-9349"></a>
<a id="trace-9357"></a>
<a id="trace-9398"></a>
<a id="trace-9411"></a>
- 170.30s–183.30s (×24), actor 5, squad 0 (trace 8887): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 8780. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1418461387398524, 'next_transition': 8899}.
<a id="trace-9417"></a>
- 183.35s–183.35s (×1), actor 0, squad 0 (trace 9417): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 180.00s, trace 9244. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9476}.
<a id="trace-9476"></a>
<a id="trace-9495"></a>
<a id="trace-9586"></a>
<a id="trace-9597"></a>
<a id="trace-9620"></a>
<a id="trace-9629"></a>
<a id="trace-9646"></a>
<a id="trace-9688"></a>
<a id="trace-9700"></a>
<a id="trace-9711"></a>
<a id="trace-9799"></a>
<a id="trace-9806"></a>
<a id="trace-9818"></a>
<a id="trace-9846"></a>
<a id="trace-9859"></a>
<a id="trace-9872"></a>
<a id="trace-9880"></a>
<a id="trace-9990"></a>
<a id="trace-10001"></a>
<a id="trace-10018"></a>
<a id="trace-10035"></a>
<a id="trace-10056"></a>
<a id="trace-10088"></a>
- 183.80s–198.80s (×23), actor 5, squad 0 (trace 9476): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 9246. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9495}.
<a id="trace-10093"></a>
- 198.95s–198.95s (×1), actor 0, squad 0 (trace 10093): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 195.00s, trace 9914. Next observer evidence: {'until': 199, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10097}.
<a id="trace-10097"></a>
- 199.00s–199.00s (×1), actor 0, squad 0 (trace 10097): matching received arrivals: deployment leg complete. Knowledge: actor memory at 195.00s, trace 9914. Next observer evidence: None.
<a id="trace-10098"></a>
- 199.05s–199.05s (×1), actor 0, squad 0 (trace 10098): Reorganise: completed/failed drill. Knowledge: actor memory at 195.00s, trace 9914. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10215}.
<a id="trace-10101"></a>
- 199.05s–199.05s (×1), actor 0, squad 0 (trace 10101): ReactToContact: cover and return fire. Knowledge: actor memory at 195.00s, trace 9914. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10215}.
<a id="trace-10102"></a>
- 199.05s–199.05s (×1), actor 0, squad 0 (trace 10102): bounding overwatch. Knowledge: actor memory at 195.00s, trace 9914. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10215}.
<a id="trace-10103"></a>
- 199.05s–199.05s (×1), actor 0, squad 0 (trace 10103): Reorganise complete: known contact. Knowledge: actor memory at 195.00s, trace 9914. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10215}.
<a id="trace-10215"></a>
<a id="trace-10308"></a>
<a id="trace-10331"></a>
<a id="trace-10361"></a>
<a id="trace-10391"></a>
- 199.30s–202.30s (×5), actor 5, squad 0 (trace 10215): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 9916. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10308}.
<a id="trace-10394"></a>
- 202.55s–202.55s (×1), actor 0, squad 0 (trace 10394): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 200.00s, trace 10231. Next observer evidence: {'until': 202.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10553}.
<a id="trace-10395"></a>
- 202.55s–202.55s (×1), actor 0, squad 0 (trace 10395): rearward bound: one stationary suppressing element. Knowledge: actor memory at 200.00s, trace 10231. Next observer evidence: {'until': 202.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10553}.
<a id="trace-10553"></a>
<a id="trace-10569"></a>
<a id="trace-10583"></a>
<a id="trace-10602"></a>
<a id="trace-10614"></a>
<a id="trace-10695"></a>
<a id="trace-10724"></a>
<a id="trace-10736"></a>
<a id="trace-10745"></a>
<a id="trace-10757"></a>
<a id="trace-10773"></a>
<a id="trace-10789"></a>
<a id="trace-10809"></a>
<a id="trace-10897"></a>
<a id="trace-10919"></a>
<a id="trace-10927"></a>
<a id="trace-10945"></a>
<a id="trace-10962"></a>
<a id="trace-10972"></a>
<a id="trace-10986"></a>
<a id="trace-11004"></a>
<a id="trace-11012"></a>
- 202.80s–214.80s (×22), actor 5, squad 0 (trace 10553): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 10233. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10569}.
<a id="trace-11035"></a>
- 215.15s–215.15s (×1), actor 0, squad 0 (trace 11035): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 215.00s, trace 11024. Next observer evidence: {'until': 215.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11150}.
<a id="trace-11036"></a>
- 215.15s–215.15s (×1), actor 0, squad 0 (trace 11036): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 215.00s, trace 11024. Next observer evidence: {'until': 215.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11150}.
<a id="trace-11150"></a>
<a id="trace-11178"></a>
<a id="trace-11210"></a>
<a id="trace-11249"></a>
<a id="trace-11270"></a>
<a id="trace-11283"></a>
<a id="trace-11362"></a>
<a id="trace-11388"></a>
<a id="trace-11400"></a>
- 215.30s–221.80s (×9), actor 5, squad 0 (trace 11150): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 11026. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14174903106569198, 'next_transition': 11178}.
<a id="trace-11429"></a>
- 222.60s–222.60s (×1), actor 0, squad 0 (trace 11429): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 220.00s, trace 11288. Next observer evidence: {'until': 222.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.113403606892594, 'next_transition': 11436}.
<a id="trace-11436"></a>
<a id="trace-11447"></a>
<a id="trace-11483"></a>
<a id="trace-11503"></a>
<a id="trace-11581"></a>
<a id="trace-11600"></a>
<a id="trace-11619"></a>
<a id="trace-11639"></a>
<a id="trace-11647"></a>
<a id="trace-11660"></a>
<a id="trace-11676"></a>
<a id="trace-11684"></a>
<a id="trace-11757"></a>
<a id="trace-11768"></a>
<a id="trace-11779"></a>
<a id="trace-11789"></a>
<a id="trace-11798"></a>
<a id="trace-11804"></a>
- 222.80s–232.80s (×18), actor 5, squad 0 (trace 11436): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 11290. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22678255824688104, 'next_transition': 11447}.
<a id="trace-2073"></a>
- 233.30s–233.30s (×1), actor 5, squad 0 (events line 2073): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11824}.
<a id="trace-11815"></a>
- 233.30s–233.30s (×1), actor 5, squad 0 (trace 11815): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 11691. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11824}.
<a id="trace-11818"></a>
- 233.30s–233.30s (×1), actor 5, squad 0 (trace 11818): renew committed intent (75 s lifetime). Knowledge: actor memory at 233.30s, trace 11818. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11824}.
<a id="trace-11824"></a>
<a id="trace-11837"></a>
<a id="trace-11846"></a>
<a id="trace-11920"></a>
<a id="trace-11936"></a>
<a id="trace-11946"></a>
<a id="trace-11954"></a>
<a id="trace-11975"></a>
<a id="trace-11981"></a>
<a id="trace-11992"></a>
<a id="trace-12001"></a>
<a id="trace-12076"></a>
<a id="trace-12085"></a>
<a id="trace-12097"></a>
<a id="trace-12111"></a>
<a id="trace-12121"></a>
<a id="trace-12129"></a>
<a id="trace-12138"></a>
<a id="trace-12151"></a>
<a id="trace-12159"></a>
<a id="trace-12252"></a>
<a id="trace-12258"></a>
- 233.80s–246.80s (×22), actor 5, squad 0 (trace 11824): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 233.30s, trace 11818. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11837}.
<a id="trace-2177"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (events line 2177): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12262"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (trace 12262): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.299397 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 247.10s, trace 12262. Next observer evidence: {'until': 247.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12277}.
<a id="trace-12263"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (trace 12263): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.299397 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 247.10s, trace 12263. Next observer evidence: {'until': 247.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12277}.
<a id="trace-12277"></a>
<a id="trace-12288"></a>
<a id="trace-12297"></a>
<a id="trace-12316"></a>
<a id="trace-12389"></a>
<a id="trace-12415"></a>
- 247.80s–251.80s (×6), actor 5, squad 0 (trace 12277): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 247.10s, trace 12263. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12288}.
<a id="trace-12429"></a>
- 252.55s–252.55s (×1), actor 0, squad 0 (trace 12429): MoveTactically. Knowledge: actor memory at 250.00s, trace 12320. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12540}.
<a id="trace-12430"></a>
- 252.55s–252.55s (×1), actor 0, squad 0 (trace 12430): traveling. Knowledge: actor memory at 250.00s, trace 12320. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12540}.
<a id="trace-12431"></a>
- 252.55s–252.55s (×1), actor 0, squad 0 (trace 12431): received platoon directive. Knowledge: actor memory at 250.00s, trace 12320. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12540}.
<a id="trace-12540"></a>
<a id="trace-12552"></a>
<a id="trace-12562"></a>
<a id="trace-12578"></a>
<a id="trace-12589"></a>
<a id="trace-12686"></a>
<a id="trace-12700"></a>
<a id="trace-12725"></a>
<a id="trace-12753"></a>
- 252.80s–258.30s (×9), actor 5, squad 0 (trace 12540): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 12322. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12552}.
<a id="trace-12760"></a>
- 258.35s–258.35s (×1), actor 0, squad 0 (trace 12760): matching received arrivals: traveling stage complete. Knowledge: actor memory at 255.00s, trace 12598. Next observer evidence: {'until': 258.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724922770268297, 'next_transition': 12874}.
<a id="trace-12874"></a>
<a id="trace-12896"></a>
<a id="trace-13005"></a>
- 258.80s–260.80s (×3), actor 5, squad 0 (trace 12874): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 12600. Next observer evidence: {'until': 259.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3433347935951003, 'next_transition': 12896}.
<a id="trace-13013"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (trace 13013): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 260.90s, trace 13013. Next observer evidence: None.
<a id="trace-13014"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (trace 13014): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 260.90s, trace 13014. Next observer evidence: None.
<a id="trace-2315"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (events line 2315): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945008419221474, 'next_transition': 13026}.
<a id="trace-13026"></a>
<a id="trace-13056"></a>
<a id="trace-13078"></a>
<a id="trace-13090"></a>
<a id="trace-13108"></a>
<a id="trace-13117"></a>
- 261.30s–264.80s (×6), actor 5, squad 0 (trace 13026): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.90s, trace 13014. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.3624721549745873, 'next_transition': 13056}.
<a id="trace-13130"></a>
- 264.95s–264.95s (×1), actor 0, squad 0 (trace 13130): traveling overwatch. Knowledge: actor memory at 260.00s, trace 12913. Next observer evidence: {'until': 265.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449791489449856, 'next_transition': 13293}.
<a id="trace-13131"></a>
- 264.95s–264.95s (×1), actor 0, squad 0 (trace 13131): matching received arrivals: traveling stage complete. Knowledge: actor memory at 260.00s, trace 12913. Next observer evidence: {'until': 265.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449791489449856, 'next_transition': 13293}.
<a id="trace-13293"></a>
<a id="trace-13304"></a>
- 265.30s–265.80s (×2), actor 5, squad 0 (trace 13293): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 13221. Next observer evidence: {'until': 265.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.445864065979504, 'next_transition': 13304}.
<a id="trace-13329"></a>
- 266.35s–266.35s (×1), actor 0, squad 0 (trace 13329): received platoon directive. Knowledge: actor memory at 265.00s, trace 13219. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4427151916111436, 'next_transition': 13433}.
<a id="trace-13433"></a>
<a id="trace-13467"></a>
<a id="trace-13497"></a>
<a id="trace-13532"></a>
<a id="trace-13546"></a>
<a id="trace-13630"></a>
<a id="trace-13643"></a>
<a id="trace-13666"></a>
<a id="trace-13684"></a>
<a id="trace-13698"></a>
<a id="trace-13711"></a>
<a id="trace-13724"></a>
<a id="trace-13745"></a>
<a id="trace-13757"></a>
<a id="trace-13833"></a>
<a id="trace-13845"></a>
<a id="trace-13855"></a>
- 266.80s–276.30s (×17), actor 5, squad 0 (trace 13433): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 13221. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3886572325880902, 'next_transition': 13467}.
<a id="trace-13861"></a>
- 276.50s–276.50s (×1), actor 0, squad 0 (trace 13861): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 275.00s, trace 13764. Next observer evidence: {'until': 276.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07872987160605505, 'next_transition': 13919}.
<a id="trace-13919"></a>
<a id="trace-13932"></a>
<a id="trace-13943"></a>
<a id="trace-13958"></a>
<a id="trace-13965"></a>
<a id="trace-13977"></a>
<a id="trace-14052"></a>
<a id="trace-14058"></a>
<a id="trace-14068"></a>
<a id="trace-14072"></a>
<a id="trace-14084"></a>
<a id="trace-14089"></a>
<a id="trace-14095"></a>
<a id="trace-14099"></a>
<a id="trace-14187"></a>
<a id="trace-14197"></a>
<a id="trace-14202"></a>
<a id="trace-14208"></a>
<a id="trace-14227"></a>
<a id="trace-14307"></a>
<a id="trace-14316"></a>
<a id="trace-14326"></a>
<a id="trace-14333"></a>
<a id="trace-14350"></a>
<a id="trace-14360"></a>
<a id="trace-14367"></a>
<a id="trace-14385"></a>
<a id="trace-14465"></a>
<a id="trace-14475"></a>
<a id="trace-14482"></a>
<a id="trace-14493"></a>
<a id="trace-14501"></a>
<a id="trace-14511"></a>
<a id="trace-14529"></a>
<a id="trace-14621"></a>
<a id="trace-14631"></a>
<a id="trace-14637"></a>
<a id="trace-14647"></a>
<a id="trace-14655"></a>
<a id="trace-14671"></a>
<a id="trace-14682"></a>
<a id="trace-14690"></a>
<a id="trace-14765"></a>
<a id="trace-14788"></a>
<a id="trace-14795"></a>
<a id="trace-14805"></a>
<a id="trace-14812"></a>
<a id="trace-14828"></a>
<a id="trace-14839"></a>
<a id="trace-14920"></a>
<a id="trace-14937"></a>
<a id="trace-14944"></a>
<a id="trace-14955"></a>
<a id="trace-14968"></a>
<a id="trace-14979"></a>
<a id="trace-14985"></a>
<a id="trace-14996"></a>
<a id="trace-15003"></a>
<a id="trace-15084"></a>
<a id="trace-15094"></a>
<a id="trace-15100"></a>
<a id="trace-15110"></a>
<a id="trace-15119"></a>
<a id="trace-15130"></a>
<a id="trace-15138"></a>
<a id="trace-15154"></a>
<a id="trace-15161"></a>
<a id="trace-15236"></a>
<a id="trace-15252"></a>
<a id="trace-15259"></a>
<a id="trace-15269"></a>
<a id="trace-15276"></a>
<a id="trace-15286"></a>
<a id="trace-15293"></a>
<a id="trace-15305"></a>
<a id="trace-15312"></a>
<a id="trace-15408"></a>
<a id="trace-15415"></a>
<a id="trace-15425"></a>
<a id="trace-15442"></a>
<a id="trace-15448"></a>
<a id="trace-15539"></a>
<a id="trace-15546"></a>
<a id="trace-15563"></a>
<a id="trace-15575"></a>
<a id="trace-15588"></a>
- 276.80s–332.80s (×86), actor 5, squad 0 (trace 13919): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 13766. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300173947184176, 'next_transition': 13932}.
<a id="trace-2844"></a>
- 333.25s–333.25s (×1), actor 5, squad 0 (events line 2844): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15595"></a>
- 333.25s–333.25s (×1), actor 5, squad 0 (trace 15595): renew committed intent (75 s lifetime). Knowledge: actor memory at 333.25s, trace 15595. Next observer evidence: None.
<a id="trace-15599"></a>
<a id="trace-15607"></a>
<a id="trace-15618"></a>
<a id="trace-15698"></a>
- 333.30s–335.30s (×4), actor 5, squad 0 (trace 15599): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 333.25s, trace 15595. Next observer evidence: {'until': 333.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15607}.
<a id="trace-15707"></a>
- 335.90s–335.90s (×1), actor 1, squad 0 (trace 15707): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 335.00s, trace 15630. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15774}.
<a id="trace-15708"></a>
- 335.90s–335.90s (×1), actor 1, squad 0 (trace 15708): MoveTactically. Knowledge: actor memory at 335.00s, trace 15630. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15774}.
<a id="trace-15709"></a>
- 335.90s–335.90s (×1), actor 1, squad 0 (trace 15709): traveling. Knowledge: actor memory at 335.00s, trace 15630. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15774}.
<a id="trace-15710"></a>
- 335.90s–335.90s (×1), actor 1, squad 0 (trace 15710): . Knowledge: actor memory at 335.00s, trace 15630. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15774}.
<a id="trace-15774"></a>
<a id="trace-15787"></a>
<a id="trace-15801"></a>
<a id="trace-15827"></a>
- 336.30s–338.30s (×4), actor 5, squad 0 (trace 15774): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 335.00s, trace 15631. Next observer evidence: {'until': 336.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000000000000085, 'next_transition': 15787}.
<a id="trace-15833"></a>
- 338.60s–338.60s (×1), actor 1, squad 0 (trace 15833): received platoon directive. Knowledge: actor memory at 335.00s, trace 15630. Next observer evidence: {'until': 338.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099999999999985, 'next_transition': 15890}.
<a id="trace-15890"></a>
<a id="trace-15994"></a>
<a id="trace-16006"></a>
<a id="trace-16020"></a>
<a id="trace-16029"></a>
<a id="trace-16043"></a>
<a id="trace-16053"></a>
<a id="trace-16064"></a>
<a id="trace-16071"></a>
<a id="trace-16088"></a>
- 338.80s–344.30s (×10), actor 5, squad 0 (trace 15890): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 335.00s, trace 15631. Next observer evidence: {'until': 340.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4700104644223166, 'next_transition': 15994}.
<a id="trace-16099"></a>
- 344.65s–344.65s (×1), actor 1, squad 0 (trace 16099): traveling overwatch. Knowledge: actor memory at 340.00s, trace 15920. Next observer evidence: {'until': 344.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500177236597708, 'next_transition': 16104}.
<a id="trace-16100"></a>
- 344.65s–344.65s (×1), actor 1, squad 0 (trace 16100): matching received arrivals: traveling stage complete. Knowledge: actor memory at 340.00s, trace 15920. Next observer evidence: {'until': 344.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500177236597708, 'next_transition': 16104}.
<a id="trace-16104"></a>
<a id="trace-16193"></a>
<a id="trace-16209"></a>
<a id="trace-16224"></a>
<a id="trace-16232"></a>
<a id="trace-16252"></a>
<a id="trace-16270"></a>
<a id="trace-16350"></a>
<a id="trace-16361"></a>
<a id="trace-16369"></a>
<a id="trace-16384"></a>
<a id="trace-16392"></a>
<a id="trace-16404"></a>
<a id="trace-16411"></a>
<a id="trace-16428"></a>
<a id="trace-16501"></a>
<a id="trace-16507"></a>
<a id="trace-16517"></a>
<a id="trace-16524"></a>
<a id="trace-16542"></a>
<a id="trace-16555"></a>
<a id="trace-16562"></a>
<a id="trace-16578"></a>
<a id="trace-16585"></a>
- 344.80s–359.80s (×24), actor 5, squad 0 (trace 16104): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 340.00s, trace 15921. Next observer evidence: {'until': 345.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0999695119691633, 'next_transition': 16193}.

## Net delivery

202 matched order/radio deliveries; 239 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.193s; maximum 5.600s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 1611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1615: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1616: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1617: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1618: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 1775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 1776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 1777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 1778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 1779: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 1780: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 1781: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 1782: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 2457: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2461: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2462: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2463: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2464: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 2645: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 2646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2648: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2649: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2650: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 2651: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 2652: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 3029: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3031: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3032: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3033: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3034: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3035: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3036: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 3422: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3424: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3425: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3426: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3427: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3428: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3429: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 3591: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3593: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3594: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3595: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3596: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3597: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3598: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 3765: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 3766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3767: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3768: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 3769: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 3770: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 3771: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 3772: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 4041: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4043: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4044: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4045: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4046: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4047: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4048: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 4250: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4252: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4253: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4254: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4255: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4256: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4257: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 4458: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4460: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4461: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4462: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4463: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4464: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4465: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.30s leader 5, trace 4575: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 4684: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 4685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4686: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 4687: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 4688: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4689: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4690: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4691: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 4919: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 4920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 4921: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 4922: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 4923: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 4924: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 4925: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 4926: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 5116: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5118: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5119: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5120: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5121: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5122: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5123: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.15s leader 5, trace 5126: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.15s leader 5, trace 5127: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 5373: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5375: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5376: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5377: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5378: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5379: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5380: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 5650: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5652: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5653: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5654: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5655: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5656: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5657: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 5851: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 5852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5853: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 5854: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5855: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5856: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5857: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5858: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 6057: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6059: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6060: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6061: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6062: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6063: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6064: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 6324: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6326: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6327: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6328: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6329: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6330: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6331: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 6511: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6513: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6514: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6515: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6516: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6517: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6518: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 6788: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 6789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6790: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6791: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6792: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6793: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6794: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6795: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 7119: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7121: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 7122: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 7123: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7124: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7125: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7126: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 7289: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7291: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 7292: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7293: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7294: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7295: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7296: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 7712: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7714: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 7715: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7716: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7717: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7718: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7719: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 7920: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7922: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7923: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7924: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7925: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7926: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7927: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 8087: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 8088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 8089: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 8090: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 8091: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 8092: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 8093: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 8094: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 8269: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 8270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 8271: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 8272: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 8273: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 8274: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 8275: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 8276: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.25s leader 5, trace 8536: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 8560: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 8562: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 8563: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 8564: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 8565: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8566: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8567: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 8778: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 8779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 8780: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 8781: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 8782: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 8783: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 8784: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 8785: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 9041: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 9042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 9043: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 9044: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 9045: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 9046: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 9047: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 9048: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 9244: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9246: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 9247: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 9248: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 9249: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9250: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9251: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 9518: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9520: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 9521: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 9522: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 9523: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9524: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9525: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 9717: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 9718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 9719: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 9720: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 9721: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 9722: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 9723: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 9724: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 9914: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 9915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 9916: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 9917: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 9918: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 9919: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 9920: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 9921: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 0, trace 10231: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 10232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 10233: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 10234: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 10235: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 10236: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 10237: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 10238: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 0, trace 10624: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 10625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 10626: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 10627: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 10628: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 10629: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 10630: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 10631: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 0, trace 10814: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 10815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 10816: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 10817: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 10818: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 10819: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 10820: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 10821: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 0, trace 11024: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 11025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 11026: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 11027: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 11028: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 11029: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 11030: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 11031: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 0, trace 11288: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 11289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 11290: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 11291: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 11292: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 11293: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 11294: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 11295: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 0, trace 11509: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 11510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 11511: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 11512: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 11513: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 11514: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 11515: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 11516: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 0, trace 11689: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 11690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 11691: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 11692: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 11693: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 11694: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 11695: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 11696: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.30s leader 5, trace 11818: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 0, trace 11850: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 11851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 11852: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 11853: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 11854: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 11855: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 11856: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 11857: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 0, trace 12005: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 12006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 12007: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 12008: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 12009: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 12010: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 12011: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 12012: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 0, trace 12165: estimate 1.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 12166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 12167: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 12168: estimate 1.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 12169: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 12170: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 12171: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 12172: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.10s leader 5, trace 12262: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.10s leader 5, trace 12263: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 0, trace 12320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 12321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 12322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 12323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 12324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 12325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 12326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 12327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 0, trace 12598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 12599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 12600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 12601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 12602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 12603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 12604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 12605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 0, trace 12913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 12914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 12915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 12916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 12917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 12918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 12919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 12920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 13013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 13014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 0, trace 13219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 13220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 13221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 13222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 13223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 13224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 13225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 13226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 0, trace 13550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 13551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 13552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 13553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 13554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 13555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 13556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 13557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 0, trace 13764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 13765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 13766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 13767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 13768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 13769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 13770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 13771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 13983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 13984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 13985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 13986: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 13987: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 13988: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 13989: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 14111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 14112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 14113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 14114: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 14115: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 14116: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 14117: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 14239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 14240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 14241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 14242: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 14243: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 14244: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 14245: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 14391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 14392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 14393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 14394: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 14395: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 14396: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 14397: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 14546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 14547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 14548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 14549: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 14550: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 14551: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 14552: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 14697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 14698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 14699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 14700: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 14701: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 14702: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 14703: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 14851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 14852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 14853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 14854: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 14855: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 14856: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 14857: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 15009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 15010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 15011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 15012: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 15013: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 15014: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 15015: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 15168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 15169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 15170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 15171: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 15172: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 15173: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 15174: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 15318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 15319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 15320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 15321: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 15322: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 15323: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 15324: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 15470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 15471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 15472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 15473: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 15474: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 15475: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 15476: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 333.25s leader 5, trace 15595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 15630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 15631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 15632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 15633: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 15634: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 15635: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 15636: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 15920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 15921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 15922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 15923: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 15924: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 15925: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 15926: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 16112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 16113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 16114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 16115: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 16116: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 16117: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 16118: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 16275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 16276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 16277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 16278: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 16279: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 16280: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 16281: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 16432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 16433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 16434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 16435: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 16436: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 16437: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 16438: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 16589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 16590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 16591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 16592: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 16593: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 16594: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 16595: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
