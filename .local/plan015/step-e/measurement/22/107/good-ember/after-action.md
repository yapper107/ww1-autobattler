# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/22/107/good-ember/battle-107-1789674149140533573`

## Battle summary

**Ember** · 360 s · 771 shots.

### Turning points

- 25.1s, squad 4: contact (events line 236). First recorded contact.
- 29.4s, squad 1: withdrawal ([trace 3427](#trace-3427)). 66.7s, squad 1: contact broken or rally reached: Occupy and report strength.
- 44.4s, squad 1: help call ([trace 8167](#trace-8167)). No completion observed before termination.
- 53.2s, squad 0: help call ([trace 9120](#trace-9120)). No completion observed before termination.
- 66.2s, squad 0: withdrawal ([trace 11423](#trace-11423)). 81.5s, squad 0: took cover and returned fire.
- 85.2s, squad 0: withdrawal ([trace 13967](#trace-13967)). 110.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 146.8s, squad 0: help call ([trace 17879](#trace-17879)). No completion observed before termination.
- 216.2s, squad 0: withdrawal ([trace 21854](#trace-21854)). 236.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 227.7s, squad 0: help call ([trace 22389](#trace-22389)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 28 shots, 6/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 0 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 685 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 58 shots, 0/2 lost.

### Decisions and attribution

At 59.0s, squad 0 chose took cover and returned fire ([trace 9581](#trace-9581)), followed by 1 shots and 0 own casualties; estimate 1.4 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 0.1s, squad 1 chose advanced tactically ([trace 333](#trace-333)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1675](#trace-1675)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7212761154806346, 'next_transition': 1704}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1677](#trace-1677)). Following evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.749969593471182, 'next_transition': 2039}.

### Communication

266 matched deliveries (mean 0.44s, max 6.60s); 465 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 25.10s, squad 4, contact, evidence events line 236: First recorded contact; .
- 29.35s, squad 1, withdrawal, evidence 3427: BreakContact: believed ratio at least two without superiority; 66.7s, squad 1: contact broken or rally reached: Occupy and report strength.
- 44.35s, squad 1, help call, evidence 8167: NeedSupport; No completion observed before termination.
- 53.20s, squad 0, help call, evidence 9120: NeedSupport; No completion observed before termination.
- 66.15s, squad 0, withdrawal, evidence 11423: BreakContact: believed ratio at least two without superiority; 81.5s, squad 0: took cover and returned fire.
- 85.20s, squad 0, withdrawal, evidence 13967: BreakContact: believed ratio at least two without superiority; 110.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 146.80s, squad 0, help call, evidence 17879: NeedSupport; No completion observed before termination.
- 216.25s, squad 0, withdrawal, evidence 21854: BreakContact: believed ratio at least two without superiority; 236.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 227.65s, squad 0, help call, evidence 22389: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.45945252481702, 'next_transition': 835}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.45945252481702, 'next_transition': 835}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.45945252481702, 'next_transition': 835}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004694246443457, 'next_transition': 1140}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004694246443457, 'next_transition': 1140}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004694246443457, 'next_transition': 1140}.
<a id="trace-580"></a>
<a id="trace-582"></a>
<a id="trace-608"></a>
<a id="trace-610"></a>
<a id="trace-639"></a>
<a id="trace-641"></a>
<a id="trace-664"></a>
<a id="trace-666"></a>
<a id="trace-683"></a>
<a id="trace-685"></a>
<a id="trace-707"></a>
<a id="trace-709"></a>
<a id="trace-733"></a>
<a id="trace-735"></a>
<a id="trace-839"></a>
<a id="trace-841"></a>
<a id="trace-870"></a>
<a id="trace-872"></a>
<a id="trace-901"></a>
<a id="trace-903"></a>
<a id="trace-926"></a>
<a id="trace-928"></a>
<a id="trace-950"></a>
<a id="trace-952"></a>
<a id="trace-980"></a>
<a id="trace-982"></a>
<a id="trace-1004"></a>
<a id="trace-1006"></a>
<a id="trace-1029"></a>
<a id="trace-1031"></a>
<a id="trace-1046"></a>
<a id="trace-1048"></a>
<a id="trace-1136"></a>
<a id="trace-1138"></a>
<a id="trace-1261"></a>
<a id="trace-1263"></a>
<a id="trace-1598"></a>
<a id="trace-1600"></a>
<a id="trace-1630"></a>
<a id="trace-1632"></a>
<a id="trace-1671"></a>
<a id="trace-1673"></a>
<a id="trace-1708"></a>
<a id="trace-1710"></a>
<a id="trace-1739"></a>
<a id="trace-1741"></a>
<a id="trace-1770"></a>
<a id="trace-1772"></a>
<a id="trace-1804"></a>
<a id="trace-1806"></a>
<a id="trace-1831"></a>
<a id="trace-1833"></a>
<a id="trace-1917"></a>
<a id="trace-1919"></a>
<a id="trace-1944"></a>
<a id="trace-1946"></a>
<a id="trace-1979"></a>
<a id="trace-1981"></a>
<a id="trace-2013"></a>
<a id="trace-2015"></a>
<a id="trace-2034"></a>
<a id="trace-2036"></a>
<a id="trace-2150"></a>
<a id="trace-2152"></a>
<a id="trace-2181"></a>
<a id="trace-2183"></a>
<a id="trace-2208"></a>
<a id="trace-2210"></a>
<a id="trace-2242"></a>
<a id="trace-2244"></a>
<a id="trace-2265"></a>
<a id="trace-2267"></a>
<a id="trace-2356"></a>
<a id="trace-2358"></a>
<a id="trace-2387"></a>
<a id="trace-2389"></a>
<a id="trace-2405"></a>
<a id="trace-2407"></a>
<a id="trace-2427"></a>
<a id="trace-2429"></a>
<a id="trace-2455"></a>
<a id="trace-2457"></a>
<a id="trace-2470"></a>
<a id="trace-2472"></a>
<a id="trace-2495"></a>
<a id="trace-2497"></a>
<a id="trace-2512"></a>
<a id="trace-2514"></a>
<a id="trace-2698"></a>
<a id="trace-2700"></a>
<a id="trace-2718"></a>
<a id="trace-2720"></a>
<a id="trace-2815"></a>
<a id="trace-2817"></a>
<a id="trace-2837"></a>
<a id="trace-2839"></a>
<a id="trace-3223"></a>
<a id="trace-3225"></a>
<a id="trace-3273"></a>
<a id="trace-3275"></a>
<a id="trace-3312"></a>
<a id="trace-3314"></a>
<a id="trace-3332"></a>
<a id="trace-3334"></a>
<a id="trace-3373"></a>
<a id="trace-3375"></a>
<a id="trace-3400"></a>
<a id="trace-3402"></a>
<a id="trace-3421"></a>
<a id="trace-3423"></a>
<a id="trace-3613"></a>
<a id="trace-3615"></a>
<a id="trace-3702"></a>
<a id="trace-3704"></a>
<a id="trace-3725"></a>
<a id="trace-3727"></a>
<a id="trace-3741"></a>
<a id="trace-3743"></a>
<a id="trace-3757"></a>
<a id="trace-3759"></a>
<a id="trace-3782"></a>
<a id="trace-3784"></a>
<a id="trace-3810"></a>
<a id="trace-3812"></a>
<a id="trace-3828"></a>
<a id="trace-3830"></a>
<a id="trace-3843"></a>
<a id="trace-3845"></a>
<a id="trace-4020"></a>
<a id="trace-4022"></a>
<a id="trace-4037"></a>
<a id="trace-4039"></a>
<a id="trace-4126"></a>
<a id="trace-4128"></a>
<a id="trace-4151"></a>
<a id="trace-4153"></a>
<a id="trace-4177"></a>
<a id="trace-4179"></a>
<a id="trace-4385"></a>
<a id="trace-4387"></a>
<a id="trace-4406"></a>
<a id="trace-4408"></a>
<a id="trace-4439"></a>
<a id="trace-4441"></a>
<a id="trace-4663"></a>
<a id="trace-4665"></a>
<a id="trace-4688"></a>
<a id="trace-4690"></a>
<a id="trace-4723"></a>
<a id="trace-4725"></a>
<a id="trace-4764"></a>
<a id="trace-4766"></a>
<a id="trace-4873"></a>
<a id="trace-4875"></a>
<a id="trace-4910"></a>
<a id="trace-4912"></a>
<a id="trace-4942"></a>
<a id="trace-4944"></a>
<a id="trace-5025"></a>
<a id="trace-5027"></a>
<a id="trace-8039"></a>
<a id="trace-8041"></a>
<a id="trace-8066"></a>
<a id="trace-8068"></a>
<a id="trace-8105"></a>
<a id="trace-8107"></a>
<a id="trace-8126"></a>
<a id="trace-8128"></a>
<a id="trace-8154"></a>
<a id="trace-8156"></a>
<a id="trace-8210"></a>
<a id="trace-8212"></a>
<a id="trace-8330"></a>
<a id="trace-8332"></a>
<a id="trace-8377"></a>
<a id="trace-8379"></a>
<a id="trace-8437"></a>
<a id="trace-8439"></a>
<a id="trace-8499"></a>
<a id="trace-8501"></a>
<a id="trace-8544"></a>
<a id="trace-8546"></a>
<a id="trace-8583"></a>
<a id="trace-8585"></a>
<a id="trace-8622"></a>
<a id="trace-8624"></a>
<a id="trace-8650"></a>
<a id="trace-8652"></a>
<a id="trace-8684"></a>
<a id="trace-8686"></a>
<a id="trace-8726"></a>
<a id="trace-8728"></a>
<a id="trace-8838"></a>
<a id="trace-8840"></a>
<a id="trace-8889"></a>
<a id="trace-8891"></a>
<a id="trace-8948"></a>
<a id="trace-8950"></a>
<a id="trace-8987"></a>
<a id="trace-8989"></a>
<a id="trace-9026"></a>
<a id="trace-9028"></a>
<a id="trace-9074"></a>
<a id="trace-9076"></a>
<a id="trace-9137"></a>
<a id="trace-9139"></a>
<a id="trace-9162"></a>
<a id="trace-9164"></a>
<a id="trace-9194"></a>
<a id="trace-9196"></a>
<a id="trace-9223"></a>
<a id="trace-9225"></a>
<a id="trace-9316"></a>
<a id="trace-9318"></a>
<a id="trace-9351"></a>
<a id="trace-9353"></a>
<a id="trace-9387"></a>
<a id="trace-9389"></a>
<a id="trace-9409"></a>
<a id="trace-9411"></a>
<a id="trace-9499"></a>
<a id="trace-9501"></a>
<a id="trace-9524"></a>
<a id="trace-9526"></a>
<a id="trace-9552"></a>
<a id="trace-9554"></a>
<a id="trace-9565"></a>
<a id="trace-9567"></a>
<a id="trace-10199"></a>
<a id="trace-10201"></a>
<a id="trace-10217"></a>
<a id="trace-10219"></a>
<a id="trace-10333"></a>
<a id="trace-10335"></a>
<a id="trace-10363"></a>
<a id="trace-10365"></a>
<a id="trace-10392"></a>
<a id="trace-10394"></a>
<a id="trace-10408"></a>
<a id="trace-10410"></a>
<a id="trace-10434"></a>
<a id="trace-10436"></a>
<a id="trace-11075"></a>
<a id="trace-11077"></a>
<a id="trace-11115"></a>
<a id="trace-11117"></a>
<a id="trace-11158"></a>
<a id="trace-11160"></a>
<a id="trace-11208"></a>
<a id="trace-11210"></a>
<a id="trace-11245"></a>
<a id="trace-11247"></a>
<a id="trace-11355"></a>
<a id="trace-11357"></a>
<a id="trace-11397"></a>
<a id="trace-11399"></a>
<a id="trace-11839"></a>
<a id="trace-11841"></a>
<a id="trace-11915"></a>
<a id="trace-11917"></a>
<a id="trace-12008"></a>
<a id="trace-12010"></a>
<a id="trace-12056"></a>
<a id="trace-12058"></a>
<a id="trace-12101"></a>
<a id="trace-12103"></a>
<a id="trace-12150"></a>
<a id="trace-12152"></a>
<a id="trace-12208"></a>
<a id="trace-12210"></a>
<a id="trace-12222"></a>
<a id="trace-12224"></a>
<a id="trace-12307"></a>
<a id="trace-12309"></a>
<a id="trace-12346"></a>
<a id="trace-12348"></a>
<a id="trace-12390"></a>
<a id="trace-12392"></a>
<a id="trace-12432"></a>
<a id="trace-12434"></a>
<a id="trace-12460"></a>
<a id="trace-12462"></a>
<a id="trace-12478"></a>
<a id="trace-12480"></a>
<a id="trace-12511"></a>
<a id="trace-12513"></a>
<a id="trace-12553"></a>
<a id="trace-12555"></a>
<a id="trace-12627"></a>
<a id="trace-12629"></a>
<a id="trace-12686"></a>
<a id="trace-12688"></a>
<a id="trace-12809"></a>
<a id="trace-12811"></a>
<a id="trace-12868"></a>
<a id="trace-12870"></a>
<a id="trace-12954"></a>
<a id="trace-12956"></a>
<a id="trace-13009"></a>
<a id="trace-13011"></a>
<a id="trace-13056"></a>
<a id="trace-13058"></a>
<a id="trace-13100"></a>
<a id="trace-13102"></a>
<a id="trace-13148"></a>
<a id="trace-13150"></a>
<a id="trace-13175"></a>
<a id="trace-13177"></a>
<a id="trace-13197"></a>
<a id="trace-13199"></a>
<a id="trace-13212"></a>
<a id="trace-13214"></a>
<a id="trace-13319"></a>
<a id="trace-13321"></a>
<a id="trace-13357"></a>
<a id="trace-13359"></a>
<a id="trace-13397"></a>
<a id="trace-13399"></a>
<a id="trace-13662"></a>
<a id="trace-13664"></a>
<a id="trace-13698"></a>
<a id="trace-13700"></a>
<a id="trace-13738"></a>
<a id="trace-13740"></a>
<a id="trace-13765"></a>
<a id="trace-13767"></a>
<a id="trace-13779"></a>
<a id="trace-13781"></a>
<a id="trace-13860"></a>
<a id="trace-13862"></a>
<a id="trace-13885"></a>
<a id="trace-13887"></a>
<a id="trace-14156"></a>
<a id="trace-14158"></a>
<a id="trace-14169"></a>
<a id="trace-14171"></a>
<a id="trace-14202"></a>
<a id="trace-14204"></a>
<a id="trace-14233"></a>
<a id="trace-14235"></a>
<a id="trace-14253"></a>
<a id="trace-14255"></a>
<a id="trace-14267"></a>
<a id="trace-14269"></a>
<a id="trace-14301"></a>
<a id="trace-14303"></a>
<a id="trace-14315"></a>
<a id="trace-14317"></a>
<a id="trace-14339"></a>
<a id="trace-14341"></a>
<a id="trace-14353"></a>
<a id="trace-14355"></a>
<a id="trace-14437"></a>
<a id="trace-14439"></a>
<a id="trace-14453"></a>
<a id="trace-14455"></a>
<a id="trace-14477"></a>
<a id="trace-14479"></a>
<a id="trace-14489"></a>
<a id="trace-14491"></a>
<a id="trace-14513"></a>
<a id="trace-14515"></a>
<a id="trace-14526"></a>
<a id="trace-14528"></a>
<a id="trace-14556"></a>
<a id="trace-14558"></a>
<a id="trace-14589"></a>
<a id="trace-14591"></a>
<a id="trace-14627"></a>
<a id="trace-14629"></a>
<a id="trace-14652"></a>
<a id="trace-14654"></a>
<a id="trace-14749"></a>
<a id="trace-14751"></a>
<a id="trace-14774"></a>
<a id="trace-14776"></a>
<a id="trace-14807"></a>
<a id="trace-14809"></a>
<a id="trace-14822"></a>
<a id="trace-14824"></a>
<a id="trace-14848"></a>
<a id="trace-14850"></a>
<a id="trace-14859"></a>
<a id="trace-14861"></a>
<a id="trace-14883"></a>
<a id="trace-14885"></a>
<a id="trace-14896"></a>
<a id="trace-14898"></a>
<a id="trace-14919"></a>
<a id="trace-14921"></a>
<a id="trace-14936"></a>
<a id="trace-14938"></a>
<a id="trace-15020"></a>
<a id="trace-15022"></a>
<a id="trace-15036"></a>
<a id="trace-15038"></a>
<a id="trace-15058"></a>
<a id="trace-15060"></a>
<a id="trace-15076"></a>
<a id="trace-15078"></a>
<a id="trace-15201"></a>
<a id="trace-15203"></a>
<a id="trace-15224"></a>
<a id="trace-15226"></a>
<a id="trace-15249"></a>
<a id="trace-15251"></a>
<a id="trace-15266"></a>
<a id="trace-15268"></a>
<a id="trace-15291"></a>
<a id="trace-15293"></a>
<a id="trace-15326"></a>
<a id="trace-15328"></a>
<a id="trace-15409"></a>
<a id="trace-15411"></a>
<a id="trace-15427"></a>
<a id="trace-15429"></a>
<a id="trace-15446"></a>
<a id="trace-15448"></a>
<a id="trace-15463"></a>
<a id="trace-15465"></a>
<a id="trace-15482"></a>
<a id="trace-15484"></a>
<a id="trace-15494"></a>
<a id="trace-15496"></a>
<a id="trace-15519"></a>
<a id="trace-15521"></a>
<a id="trace-15538"></a>
<a id="trace-15540"></a>
<a id="trace-15563"></a>
<a id="trace-15565"></a>
<a id="trace-15577"></a>
<a id="trace-15579"></a>
<a id="trace-15653"></a>
<a id="trace-15655"></a>
<a id="trace-15674"></a>
<a id="trace-15676"></a>
<a id="trace-15694"></a>
<a id="trace-15696"></a>
<a id="trace-15717"></a>
<a id="trace-15719"></a>
<a id="trace-15735"></a>
<a id="trace-15737"></a>
<a id="trace-15752"></a>
<a id="trace-15754"></a>
<a id="trace-15777"></a>
<a id="trace-15779"></a>
<a id="trace-15798"></a>
<a id="trace-15800"></a>
<a id="trace-15813"></a>
<a id="trace-15815"></a>
<a id="trace-15835"></a>
<a id="trace-15837"></a>
<a id="trace-15972"></a>
<a id="trace-15974"></a>
<a id="trace-15997"></a>
<a id="trace-15999"></a>
<a id="trace-16020"></a>
<a id="trace-16022"></a>
<a id="trace-16152"></a>
<a id="trace-16154"></a>
<a id="trace-16174"></a>
<a id="trace-16176"></a>
<a id="trace-16190"></a>
<a id="trace-16192"></a>
<a id="trace-16211"></a>
<a id="trace-16213"></a>
<a id="trace-16233"></a>
<a id="trace-16235"></a>
<a id="trace-16253"></a>
<a id="trace-16255"></a>
<a id="trace-16267"></a>
<a id="trace-16269"></a>
<a id="trace-16350"></a>
<a id="trace-16352"></a>
<a id="trace-16366"></a>
<a id="trace-16368"></a>
<a id="trace-16441"></a>
<a id="trace-16443"></a>
<a id="trace-16456"></a>
<a id="trace-16458"></a>
<a id="trace-16478"></a>
<a id="trace-16480"></a>
<a id="trace-16497"></a>
<a id="trace-16499"></a>
<a id="trace-16510"></a>
<a id="trace-16512"></a>
<a id="trace-16527"></a>
<a id="trace-16529"></a>
<a id="trace-16545"></a>
<a id="trace-16547"></a>
<a id="trace-16559"></a>
<a id="trace-16561"></a>
<a id="trace-16645"></a>
<a id="trace-16647"></a>
<a id="trace-16670"></a>
<a id="trace-16672"></a>
<a id="trace-16698"></a>
<a id="trace-16700"></a>
<a id="trace-16714"></a>
<a id="trace-16716"></a>
<a id="trace-16733"></a>
<a id="trace-16735"></a>
<a id="trace-16747"></a>
<a id="trace-16749"></a>
<a id="trace-16769"></a>
<a id="trace-16771"></a>
<a id="trace-16790"></a>
<a id="trace-16792"></a>
<a id="trace-16806"></a>
<a id="trace-16808"></a>
<a id="trace-16815"></a>
<a id="trace-16817"></a>
<a id="trace-16890"></a>
<a id="trace-16892"></a>
<a id="trace-16907"></a>
<a id="trace-16909"></a>
<a id="trace-16922"></a>
<a id="trace-16924"></a>
<a id="trace-16941"></a>
<a id="trace-16943"></a>
<a id="trace-16968"></a>
<a id="trace-16970"></a>
<a id="trace-17147"></a>
<a id="trace-17149"></a>
<a id="trace-17163"></a>
<a id="trace-17165"></a>
<a id="trace-17177"></a>
<a id="trace-17179"></a>
<a id="trace-17197"></a>
<a id="trace-17199"></a>
<a id="trace-17208"></a>
<a id="trace-17210"></a>
<a id="trace-17284"></a>
<a id="trace-17286"></a>
<a id="trace-17300"></a>
<a id="trace-17302"></a>
<a id="trace-17318"></a>
<a id="trace-17320"></a>
<a id="trace-17335"></a>
<a id="trace-17337"></a>
<a id="trace-17354"></a>
<a id="trace-17356"></a>
<a id="trace-17368"></a>
<a id="trace-17370"></a>
<a id="trace-17385"></a>
<a id="trace-17387"></a>
<a id="trace-17410"></a>
<a id="trace-17412"></a>
<a id="trace-17427"></a>
<a id="trace-17429"></a>
<a id="trace-17438"></a>
<a id="trace-17440"></a>
<a id="trace-17519"></a>
<a id="trace-17521"></a>
<a id="trace-17623"></a>
<a id="trace-17625"></a>
<a id="trace-17642"></a>
<a id="trace-17644"></a>
<a id="trace-17660"></a>
<a id="trace-17662"></a>
<a id="trace-17678"></a>
<a id="trace-17680"></a>
<a id="trace-17690"></a>
<a id="trace-17692"></a>
<a id="trace-17712"></a>
<a id="trace-17714"></a>
<a id="trace-17723"></a>
<a id="trace-17725"></a>
<a id="trace-17741"></a>
<a id="trace-17743"></a>
<a id="trace-17749"></a>
<a id="trace-17751"></a>
<a id="trace-17827"></a>
<a id="trace-17829"></a>
<a id="trace-17840"></a>
<a id="trace-17842"></a>
<a id="trace-17855"></a>
<a id="trace-17857"></a>
<a id="trace-17872"></a>
<a id="trace-17874"></a>
<a id="trace-17899"></a>
<a id="trace-17901"></a>
<a id="trace-17911"></a>
<a id="trace-17913"></a>
<a id="trace-18015"></a>
<a id="trace-18017"></a>
<a id="trace-18037"></a>
<a id="trace-18039"></a>
<a id="trace-18059"></a>
<a id="trace-18061"></a>
<a id="trace-18069"></a>
<a id="trace-18071"></a>
<a id="trace-18146"></a>
<a id="trace-18148"></a>
<a id="trace-18249"></a>
<a id="trace-18251"></a>
<a id="trace-18266"></a>
<a id="trace-18268"></a>
<a id="trace-18291"></a>
<a id="trace-18293"></a>
<a id="trace-18322"></a>
<a id="trace-18324"></a>
<a id="trace-18341"></a>
<a id="trace-18343"></a>
<a id="trace-18366"></a>
<a id="trace-18368"></a>
<a id="trace-18385"></a>
<a id="trace-18387"></a>
<a id="trace-18403"></a>
<a id="trace-18405"></a>
<a id="trace-18422"></a>
<a id="trace-18424"></a>
<a id="trace-18507"></a>
<a id="trace-18509"></a>
<a id="trace-18519"></a>
<a id="trace-18521"></a>
<a id="trace-18541"></a>
<a id="trace-18543"></a>
<a id="trace-18560"></a>
<a id="trace-18562"></a>
<a id="trace-18579"></a>
<a id="trace-18581"></a>
<a id="trace-18591"></a>
<a id="trace-18593"></a>
<a id="trace-18612"></a>
<a id="trace-18614"></a>
<a id="trace-18633"></a>
<a id="trace-18635"></a>
<a id="trace-18651"></a>
<a id="trace-18653"></a>
<a id="trace-18662"></a>
<a id="trace-18664"></a>
<a id="trace-18743"></a>
<a id="trace-18745"></a>
<a id="trace-18764"></a>
<a id="trace-18766"></a>
<a id="trace-18782"></a>
<a id="trace-18784"></a>
<a id="trace-18798"></a>
<a id="trace-18800"></a>
<a id="trace-18821"></a>
<a id="trace-18823"></a>
<a id="trace-18834"></a>
<a id="trace-18836"></a>
<a id="trace-18850"></a>
<a id="trace-18852"></a>
<a id="trace-18864"></a>
<a id="trace-18866"></a>
<a id="trace-18888"></a>
<a id="trace-18890"></a>
<a id="trace-18915"></a>
<a id="trace-18917"></a>
<a id="trace-19006"></a>
<a id="trace-19008"></a>
<a id="trace-19023"></a>
<a id="trace-19025"></a>
<a id="trace-19060"></a>
<a id="trace-19062"></a>
<a id="trace-19087"></a>
<a id="trace-19089"></a>
<a id="trace-19107"></a>
<a id="trace-19109"></a>
<a id="trace-19260"></a>
<a id="trace-19262"></a>
<a id="trace-19304"></a>
<a id="trace-19306"></a>
<a id="trace-19340"></a>
<a id="trace-19342"></a>
<a id="trace-19368"></a>
<a id="trace-19370"></a>
<a id="trace-19387"></a>
<a id="trace-19389"></a>
<a id="trace-19478"></a>
<a id="trace-19480"></a>
<a id="trace-19498"></a>
<a id="trace-19500"></a>
<a id="trace-19524"></a>
<a id="trace-19526"></a>
<a id="trace-19537"></a>
<a id="trace-19539"></a>
<a id="trace-19560"></a>
<a id="trace-19562"></a>
<a id="trace-19580"></a>
<a id="trace-19582"></a>
<a id="trace-19599"></a>
<a id="trace-19601"></a>
<a id="trace-19611"></a>
<a id="trace-19613"></a>
<a id="trace-19629"></a>
<a id="trace-19631"></a>
<a id="trace-19645"></a>
<a id="trace-19647"></a>
<a id="trace-19721"></a>
<a id="trace-19723"></a>
<a id="trace-19733"></a>
<a id="trace-19735"></a>
<a id="trace-19751"></a>
<a id="trace-19753"></a>
<a id="trace-19763"></a>
<a id="trace-19765"></a>
<a id="trace-19780"></a>
<a id="trace-19782"></a>
<a id="trace-19792"></a>
<a id="trace-19794"></a>
<a id="trace-19815"></a>
<a id="trace-19817"></a>
<a id="trace-19826"></a>
<a id="trace-19828"></a>
<a id="trace-19846"></a>
<a id="trace-19848"></a>
<a id="trace-19859"></a>
<a id="trace-19861"></a>
<a id="trace-19935"></a>
<a id="trace-19937"></a>
<a id="trace-19951"></a>
<a id="trace-19953"></a>
<a id="trace-19972"></a>
<a id="trace-19974"></a>
<a id="trace-20039"></a>
<a id="trace-20041"></a>
<a id="trace-20053"></a>
<a id="trace-20055"></a>
<a id="trace-20069"></a>
<a id="trace-20071"></a>
<a id="trace-20086"></a>
<a id="trace-20088"></a>
<a id="trace-20152"></a>
<a id="trace-20154"></a>
<a id="trace-20176"></a>
<a id="trace-20178"></a>
<a id="trace-20198"></a>
<a id="trace-20200"></a>
<a id="trace-20273"></a>
<a id="trace-20275"></a>
<a id="trace-20288"></a>
<a id="trace-20290"></a>
<a id="trace-20310"></a>
<a id="trace-20312"></a>
<a id="trace-20325"></a>
<a id="trace-20327"></a>
<a id="trace-20343"></a>
<a id="trace-20345"></a>
<a id="trace-20351"></a>
<a id="trace-20353"></a>
<a id="trace-20371"></a>
<a id="trace-20373"></a>
<a id="trace-20387"></a>
<a id="trace-20389"></a>
<a id="trace-20405"></a>
<a id="trace-20407"></a>
<a id="trace-20415"></a>
<a id="trace-20417"></a>
<a id="trace-20489"></a>
<a id="trace-20491"></a>
<a id="trace-20502"></a>
<a id="trace-20504"></a>
<a id="trace-20518"></a>
<a id="trace-20520"></a>
<a id="trace-20529"></a>
<a id="trace-20531"></a>
<a id="trace-20550"></a>
<a id="trace-20552"></a>
<a id="trace-20581"></a>
<a id="trace-20583"></a>
<a id="trace-20600"></a>
<a id="trace-20602"></a>
<a id="trace-20610"></a>
<a id="trace-20612"></a>
<a id="trace-20626"></a>
<a id="trace-20628"></a>
<a id="trace-20640"></a>
<a id="trace-20642"></a>
<a id="trace-20713"></a>
<a id="trace-20715"></a>
<a id="trace-20725"></a>
<a id="trace-20727"></a>
<a id="trace-20845"></a>
<a id="trace-20847"></a>
<a id="trace-20869"></a>
<a id="trace-20871"></a>
<a id="trace-20887"></a>
<a id="trace-20889"></a>
<a id="trace-20899"></a>
<a id="trace-20901"></a>
<a id="trace-20917"></a>
<a id="trace-20919"></a>
<a id="trace-20938"></a>
<a id="trace-20940"></a>
<a id="trace-20966"></a>
<a id="trace-20968"></a>
<a id="trace-20978"></a>
<a id="trace-20980"></a>
<a id="trace-21054"></a>
<a id="trace-21056"></a>
<a id="trace-21070"></a>
<a id="trace-21072"></a>
<a id="trace-21085"></a>
<a id="trace-21087"></a>
<a id="trace-21095"></a>
<a id="trace-21097"></a>
<a id="trace-21110"></a>
<a id="trace-21112"></a>
<a id="trace-21124"></a>
<a id="trace-21126"></a>
<a id="trace-21141"></a>
<a id="trace-21143"></a>
<a id="trace-21153"></a>
<a id="trace-21155"></a>
<a id="trace-21177"></a>
<a id="trace-21179"></a>
<a id="trace-21196"></a>
<a id="trace-21198"></a>
<a id="trace-21272"></a>
<a id="trace-21274"></a>
<a id="trace-21285"></a>
<a id="trace-21287"></a>
<a id="trace-21311"></a>
<a id="trace-21313"></a>
<a id="trace-21325"></a>
<a id="trace-21327"></a>
<a id="trace-21343"></a>
<a id="trace-21345"></a>
<a id="trace-21359"></a>
<a id="trace-21361"></a>
<a id="trace-21375"></a>
<a id="trace-21377"></a>
<a id="trace-21394"></a>
<a id="trace-21396"></a>
<a id="trace-21408"></a>
<a id="trace-21410"></a>
<a id="trace-21421"></a>
<a id="trace-21423"></a>
<a id="trace-21493"></a>
<a id="trace-21495"></a>
<a id="trace-21503"></a>
<a id="trace-21505"></a>
<a id="trace-21520"></a>
<a id="trace-21522"></a>
<a id="trace-21536"></a>
<a id="trace-21538"></a>
<a id="trace-21554"></a>
<a id="trace-21556"></a>
<a id="trace-21695"></a>
<a id="trace-21697"></a>
<a id="trace-21710"></a>
<a id="trace-21712"></a>
<a id="trace-21725"></a>
<a id="trace-21727"></a>
<a id="trace-21742"></a>
<a id="trace-21744"></a>
<a id="trace-21758"></a>
<a id="trace-21760"></a>
<a id="trace-21834"></a>
<a id="trace-21836"></a>
<a id="trace-21842"></a>
<a id="trace-21844"></a>
<a id="trace-21917"></a>
<a id="trace-21919"></a>
<a id="trace-21933"></a>
<a id="trace-21935"></a>
<a id="trace-21949"></a>
<a id="trace-21951"></a>
<a id="trace-21962"></a>
<a id="trace-21964"></a>
<a id="trace-21979"></a>
<a id="trace-21981"></a>
<a id="trace-21995"></a>
<a id="trace-21997"></a>
<a id="trace-22011"></a>
<a id="trace-22013"></a>
<a id="trace-22027"></a>
<a id="trace-22029"></a>
<a id="trace-22105"></a>
<a id="trace-22107"></a>
<a id="trace-22120"></a>
<a id="trace-22122"></a>
<a id="trace-22138"></a>
<a id="trace-22140"></a>
<a id="trace-22153"></a>
<a id="trace-22155"></a>
<a id="trace-22166"></a>
<a id="trace-22168"></a>
<a id="trace-22178"></a>
<a id="trace-22180"></a>
<a id="trace-22194"></a>
<a id="trace-22196"></a>
<a id="trace-22212"></a>
<a id="trace-22214"></a>
<a id="trace-22230"></a>
<a id="trace-22232"></a>
<a id="trace-22245"></a>
<a id="trace-22247"></a>
<a id="trace-22319"></a>
<a id="trace-22321"></a>
<a id="trace-22329"></a>
<a id="trace-22331"></a>
<a id="trace-22348"></a>
<a id="trace-22350"></a>
<a id="trace-22357"></a>
<a id="trace-22359"></a>
<a id="trace-22378"></a>
<a id="trace-22380"></a>
<a id="trace-22402"></a>
<a id="trace-22404"></a>
<a id="trace-22422"></a>
<a id="trace-22424"></a>
<a id="trace-22435"></a>
<a id="trace-22437"></a>
<a id="trace-22453"></a>
<a id="trace-22455"></a>
<a id="trace-22467"></a>
<a id="trace-22469"></a>
<a id="trace-22544"></a>
<a id="trace-22546"></a>
<a id="trace-22557"></a>
<a id="trace-22559"></a>
<a id="trace-22575"></a>
<a id="trace-22577"></a>
<a id="trace-22587"></a>
<a id="trace-22589"></a>
<a id="trace-22607"></a>
<a id="trace-22609"></a>
<a id="trace-22636"></a>
<a id="trace-22638"></a>
<a id="trace-22657"></a>
<a id="trace-22659"></a>
<a id="trace-22671"></a>
<a id="trace-22673"></a>
<a id="trace-22692"></a>
<a id="trace-22694"></a>
<a id="trace-22709"></a>
<a id="trace-22711"></a>
<a id="trace-22787"></a>
<a id="trace-22789"></a>
<a id="trace-22796"></a>
<a id="trace-22798"></a>
<a id="trace-22823"></a>
<a id="trace-22825"></a>
<a id="trace-22846"></a>
<a id="trace-22848"></a>
<a id="trace-22866"></a>
<a id="trace-22868"></a>
<a id="trace-22880"></a>
<a id="trace-22882"></a>
<a id="trace-22897"></a>
<a id="trace-22899"></a>
<a id="trace-22912"></a>
<a id="trace-22914"></a>
<a id="trace-22931"></a>
<a id="trace-22933"></a>
<a id="trace-22941"></a>
<a id="trace-22943"></a>
<a id="trace-23020"></a>
<a id="trace-23022"></a>
<a id="trace-23030"></a>
<a id="trace-23032"></a>
<a id="trace-23048"></a>
<a id="trace-23050"></a>
<a id="trace-23055"></a>
<a id="trace-23057"></a>
<a id="trace-23068"></a>
<a id="trace-23070"></a>
<a id="trace-23079"></a>
<a id="trace-23081"></a>
<a id="trace-23093"></a>
<a id="trace-23095"></a>
<a id="trace-23103"></a>
<a id="trace-23105"></a>
<a id="trace-23118"></a>
<a id="trace-23120"></a>
<a id="trace-23126"></a>
<a id="trace-23128"></a>
<a id="trace-23201"></a>
<a id="trace-23203"></a>
<a id="trace-23208"></a>
<a id="trace-23210"></a>
<a id="trace-23224"></a>
<a id="trace-23226"></a>
<a id="trace-23235"></a>
<a id="trace-23237"></a>
<a id="trace-23254"></a>
<a id="trace-23256"></a>
<a id="trace-23266"></a>
<a id="trace-23268"></a>
<a id="trace-23282"></a>
<a id="trace-23284"></a>
<a id="trace-23294"></a>
<a id="trace-23296"></a>
<a id="trace-23312"></a>
<a id="trace-23314"></a>
<a id="trace-23322"></a>
<a id="trace-23324"></a>
<a id="trace-23398"></a>
<a id="trace-23400"></a>
<a id="trace-23404"></a>
<a id="trace-23406"></a>
<a id="trace-23417"></a>
<a id="trace-23419"></a>
<a id="trace-23426"></a>
<a id="trace-23428"></a>
<a id="trace-23439"></a>
<a id="trace-23441"></a>
<a id="trace-23449"></a>
<a id="trace-23451"></a>
<a id="trace-23466"></a>
<a id="trace-23468"></a>
<a id="trace-23475"></a>
<a id="trace-23477"></a>
<a id="trace-23495"></a>
<a id="trace-23497"></a>
<a id="trace-23507"></a>
<a id="trace-23509"></a>
<a id="trace-23582"></a>
<a id="trace-23584"></a>
<a id="trace-23592"></a>
<a id="trace-23594"></a>
<a id="trace-23613"></a>
<a id="trace-23615"></a>
<a id="trace-23622"></a>
<a id="trace-23624"></a>
<a id="trace-23635"></a>
<a id="trace-23637"></a>
<a id="trace-23643"></a>
<a id="trace-23645"></a>
<a id="trace-23657"></a>
<a id="trace-23659"></a>
<a id="trace-23666"></a>
<a id="trace-23668"></a>
<a id="trace-23682"></a>
<a id="trace-23684"></a>
<a id="trace-23689"></a>
<a id="trace-23691"></a>
<a id="trace-23765"></a>
<a id="trace-23767"></a>
<a id="trace-23779"></a>
<a id="trace-23781"></a>
<a id="trace-23796"></a>
<a id="trace-23798"></a>
<a id="trace-23806"></a>
<a id="trace-23808"></a>
<a id="trace-23821"></a>
<a id="trace-23823"></a>
<a id="trace-23829"></a>
<a id="trace-23831"></a>
<a id="trace-23845"></a>
<a id="trace-23847"></a>
<a id="trace-23858"></a>
<a id="trace-23860"></a>
<a id="trace-23874"></a>
<a id="trace-23876"></a>
<a id="trace-23882"></a>
<a id="trace-23884"></a>
<a id="trace-23958"></a>
<a id="trace-23960"></a>
<a id="trace-23968"></a>
<a id="trace-23970"></a>
<a id="trace-23982"></a>
<a id="trace-23984"></a>
<a id="trace-23993"></a>
<a id="trace-23995"></a>
<a id="trace-24010"></a>
<a id="trace-24012"></a>
<a id="trace-24022"></a>
<a id="trace-24024"></a>
<a id="trace-24037"></a>
<a id="trace-24039"></a>
<a id="trace-24044"></a>
<a id="trace-24046"></a>
<a id="trace-24062"></a>
<a id="trace-24064"></a>
<a id="trace-24070"></a>
<a id="trace-24072"></a>
<a id="trace-24146"></a>
<a id="trace-24148"></a>
<a id="trace-24162"></a>
<a id="trace-24164"></a>
<a id="trace-24175"></a>
<a id="trace-24177"></a>
<a id="trace-24184"></a>
<a id="trace-24186"></a>
<a id="trace-24199"></a>
<a id="trace-24201"></a>
<a id="trace-24210"></a>
<a id="trace-24212"></a>
<a id="trace-24232"></a>
<a id="trace-24234"></a>
<a id="trace-24250"></a>
<a id="trace-24252"></a>
<a id="trace-24266"></a>
<a id="trace-24268"></a>
<a id="trace-24277"></a>
<a id="trace-24279"></a>
<a id="trace-24353"></a>
<a id="trace-24355"></a>
<a id="trace-24365"></a>
<a id="trace-24367"></a>
<a id="trace-24379"></a>
<a id="trace-24381"></a>
<a id="trace-24388"></a>
<a id="trace-24390"></a>
<a id="trace-24406"></a>
<a id="trace-24408"></a>
<a id="trace-24418"></a>
<a id="trace-24420"></a>
<a id="trace-24430"></a>
<a id="trace-24432"></a>
<a id="trace-24442"></a>
<a id="trace-24444"></a>
<a id="trace-24456"></a>
<a id="trace-24458"></a>
<a id="trace-24464"></a>
<a id="trace-24466"></a>
<a id="trace-24544"></a>
<a id="trace-24546"></a>
<a id="trace-24553"></a>
<a id="trace-24555"></a>
<a id="trace-24569"></a>
<a id="trace-24571"></a>
<a id="trace-24579"></a>
<a id="trace-24581"></a>
<a id="trace-24593"></a>
<a id="trace-24595"></a>
<a id="trace-24605"></a>
<a id="trace-24607"></a>
<a id="trace-24617"></a>
<a id="trace-24619"></a>
<a id="trace-24627"></a>
<a id="trace-24629"></a>
<a id="trace-24642"></a>
<a id="trace-24644"></a>
<a id="trace-24654"></a>
<a id="trace-24656"></a>
<a id="trace-24733"></a>
<a id="trace-24735"></a>
<a id="trace-24741"></a>
<a id="trace-24743"></a>
<a id="trace-24756"></a>
<a id="trace-24758"></a>
<a id="trace-24765"></a>
<a id="trace-24767"></a>
<a id="trace-24783"></a>
<a id="trace-24785"></a>
<a id="trace-24795"></a>
<a id="trace-24797"></a>
<a id="trace-24808"></a>
<a id="trace-24810"></a>
<a id="trace-24818"></a>
<a id="trace-24820"></a>
<a id="trace-24831"></a>
<a id="trace-24833"></a>
<a id="trace-24837"></a>
<a id="trace-24839"></a>
<a id="trace-24914"></a>
<a id="trace-24916"></a>
<a id="trace-24922"></a>
<a id="trace-24924"></a>
<a id="trace-24936"></a>
<a id="trace-24938"></a>
<a id="trace-24953"></a>
<a id="trace-24955"></a>
<a id="trace-24965"></a>
<a id="trace-24967"></a>
<a id="trace-24976"></a>
<a id="trace-24978"></a>
<a id="trace-24990"></a>
<a id="trace-24992"></a>
<a id="trace-25006"></a>
<a id="trace-25008"></a>
<a id="trace-25019"></a>
<a id="trace-25021"></a>
<a id="trace-25028"></a>
<a id="trace-25030"></a>
<a id="trace-25103"></a>
<a id="trace-25105"></a>
<a id="trace-25111"></a>
<a id="trace-25113"></a>
<a id="trace-25125"></a>
<a id="trace-25127"></a>
<a id="trace-25136"></a>
<a id="trace-25138"></a>
<a id="trace-25148"></a>
<a id="trace-25150"></a>
<a id="trace-25158"></a>
<a id="trace-25160"></a>
<a id="trace-25176"></a>
<a id="trace-25178"></a>
<a id="trace-25188"></a>
<a id="trace-25190"></a>
<a id="trace-25202"></a>
<a id="trace-25204"></a>
<a id="trace-25210"></a>
<a id="trace-25212"></a>
<a id="trace-25289"></a>
<a id="trace-25291"></a>
<a id="trace-25299"></a>
<a id="trace-25301"></a>
<a id="trace-25315"></a>
<a id="trace-25317"></a>
<a id="trace-25325"></a>
<a id="trace-25327"></a>
<a id="trace-25340"></a>
<a id="trace-25342"></a>
<a id="trace-25349"></a>
<a id="trace-25351"></a>
<a id="trace-25359"></a>
<a id="trace-25361"></a>
<a id="trace-25371"></a>
<a id="trace-25373"></a>
<a id="trace-25384"></a>
<a id="trace-25386"></a>
<a id="trace-25392"></a>
<a id="trace-25394"></a>
<a id="trace-25471"></a>
<a id="trace-25473"></a>
<a id="trace-25482"></a>
<a id="trace-25484"></a>
<a id="trace-25500"></a>
<a id="trace-25502"></a>
<a id="trace-25514"></a>
<a id="trace-25516"></a>
<a id="trace-25530"></a>
<a id="trace-25532"></a>
<a id="trace-25539"></a>
<a id="trace-25541"></a>
<a id="trace-25550"></a>
<a id="trace-25552"></a>
<a id="trace-25562"></a>
<a id="trace-25564"></a>
<a id="trace-25575"></a>
<a id="trace-25577"></a>
<a id="trace-25581"></a>
<a id="trace-25583"></a>
<a id="trace-25656"></a>
<a id="trace-25658"></a>
<a id="trace-25662"></a>
<a id="trace-25664"></a>
<a id="trace-25678"></a>
<a id="trace-25680"></a>
<a id="trace-25689"></a>
<a id="trace-25691"></a>
<a id="trace-25703"></a>
<a id="trace-25705"></a>
<a id="trace-25722"></a>
<a id="trace-25724"></a>
<a id="trace-25739"></a>
<a id="trace-25741"></a>
<a id="trace-25750"></a>
<a id="trace-25752"></a>
<a id="trace-25765"></a>
<a id="trace-25767"></a>
<a id="trace-25774"></a>
<a id="trace-25776"></a>
<a id="trace-25849"></a>
<a id="trace-25851"></a>
<a id="trace-25857"></a>
<a id="trace-25859"></a>
<a id="trace-25877"></a>
<a id="trace-25879"></a>
<a id="trace-25886"></a>
<a id="trace-25888"></a>
<a id="trace-25899"></a>
<a id="trace-25901"></a>
<a id="trace-25910"></a>
<a id="trace-25912"></a>
<a id="trace-25926"></a>
<a id="trace-25928"></a>
<a id="trace-25936"></a>
<a id="trace-25938"></a>
<a id="trace-25958"></a>
<a id="trace-25960"></a>
<a id="trace-25968"></a>
<a id="trace-25970"></a>
<a id="trace-26049"></a>
<a id="trace-26051"></a>
<a id="trace-26057"></a>
<a id="trace-26059"></a>
<a id="trace-26073"></a>
<a id="trace-26075"></a>
<a id="trace-26161"></a>
<a id="trace-26163"></a>
<a id="trace-26173"></a>
<a id="trace-26175"></a>
<a id="trace-26186"></a>
<a id="trace-26188"></a>
<a id="trace-26199"></a>
<a id="trace-26201"></a>
<a id="trace-26210"></a>
<a id="trace-26212"></a>
<a id="trace-26240"></a>
<a id="trace-26242"></a>
<a id="trace-26317"></a>
<a id="trace-26319"></a>
<a id="trace-26326"></a>
<a id="trace-26328"></a>
<a id="trace-26348"></a>
<a id="trace-26350"></a>
<a id="trace-26373"></a>
<a id="trace-26375"></a>
<a id="trace-26389"></a>
<a id="trace-26391"></a>
<a id="trace-26402"></a>
<a id="trace-26404"></a>
<a id="trace-26421"></a>
<a id="trace-26423"></a>
<a id="trace-26435"></a>
<a id="trace-26437"></a>
<a id="trace-26449"></a>
<a id="trace-26451"></a>
<a id="trace-26457"></a>
<a id="trace-26459"></a>
<a id="trace-26530"></a>
<a id="trace-26532"></a>
<a id="trace-26545"></a>
<a id="trace-26547"></a>
<a id="trace-26557"></a>
<a id="trace-26559"></a>
<a id="trace-26570"></a>
<a id="trace-26572"></a>
<a id="trace-26597"></a>
<a id="trace-26599"></a>
<a id="trace-26739"></a>
<a id="trace-26741"></a>
<a id="trace-26889"></a>
<a id="trace-26891"></a>
<a id="trace-26901"></a>
<a id="trace-26903"></a>
<a id="trace-26912"></a>
<a id="trace-26914"></a>
<a id="trace-26919"></a>
<a id="trace-26921"></a>
<a id="trace-26992"></a>
<a id="trace-26994"></a>
<a id="trace-27011"></a>
<a id="trace-27013"></a>
<a id="trace-27022"></a>
<a id="trace-27024"></a>
<a id="trace-27036"></a>
<a id="trace-27038"></a>
<a id="trace-27045"></a>
<a id="trace-27047"></a>
<a id="trace-27064"></a>
<a id="trace-27066"></a>
<a id="trace-27077"></a>
<a id="trace-27079"></a>
<a id="trace-27090"></a>
<a id="trace-27092"></a>
<a id="trace-27103"></a>
<a id="trace-27105"></a>
<a id="trace-27176"></a>
<a id="trace-27178"></a>
<a id="trace-27186"></a>
<a id="trace-27188"></a>
<a id="trace-27199"></a>
<a id="trace-27201"></a>
<a id="trace-27208"></a>
<a id="trace-27210"></a>
<a id="trace-27220"></a>
<a id="trace-27222"></a>
<a id="trace-27229"></a>
<a id="trace-27231"></a>
<a id="trace-27244"></a>
<a id="trace-27246"></a>
<a id="trace-27254"></a>
<a id="trace-27256"></a>
<a id="trace-27265"></a>
<a id="trace-27267"></a>
<a id="trace-27275"></a>
<a id="trace-27277"></a>
<a id="trace-27346"></a>
<a id="trace-27348"></a>
<a id="trace-27374"></a>
<a id="trace-27376"></a>
<a id="trace-27382"></a>
<a id="trace-27384"></a>
<a id="trace-27396"></a>
<a id="trace-27398"></a>
<a id="trace-27405"></a>
<a id="trace-27407"></a>
<a id="trace-27419"></a>
<a id="trace-27421"></a>
<a id="trace-27427"></a>
<a id="trace-27429"></a>
<a id="trace-27435"></a>
<a id="trace-27437"></a>
<a id="trace-27441"></a>
<a id="trace-27443"></a>
<a id="trace-27509"></a>
<a id="trace-27511"></a>
<a id="trace-27517"></a>
<a id="trace-27519"></a>
<a id="trace-27530"></a>
<a id="trace-27532"></a>
<a id="trace-27537"></a>
<a id="trace-27539"></a>
<a id="trace-27550"></a>
<a id="trace-27552"></a>
<a id="trace-27557"></a>
<a id="trace-27559"></a>
<a id="trace-27575"></a>
<a id="trace-27577"></a>
<a id="trace-27585"></a>
<a id="trace-27587"></a>
<a id="trace-27593"></a>
<a id="trace-27595"></a>
<a id="trace-27610"></a>
<a id="trace-27612"></a>
<a id="trace-27681"></a>
<a id="trace-27683"></a>
<a id="trace-27689"></a>
<a id="trace-27691"></a>
<a id="trace-27700"></a>
<a id="trace-27702"></a>
<a id="trace-27707"></a>
<a id="trace-27709"></a>
<a id="trace-27720"></a>
<a id="trace-27722"></a>
<a id="trace-27732"></a>
<a id="trace-27734"></a>
<a id="trace-27741"></a>
<a id="trace-27743"></a>
<a id="trace-27752"></a>
<a id="trace-27754"></a>
<a id="trace-27765"></a>
<a id="trace-27767"></a>
- 1.60s–359.80s (×1424), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5000649801950798, 'next_transition': 608}.
<a id="trace-835"></a>
<a id="trace-837"></a>
<a id="trace-922"></a>
<a id="trace-924"></a>
<a id="trace-946"></a>
<a id="trace-948"></a>
<a id="trace-976"></a>
<a id="trace-978"></a>
<a id="trace-1000"></a>
<a id="trace-1002"></a>
<a id="trace-1042"></a>
<a id="trace-1044"></a>
<a id="trace-1132"></a>
<a id="trace-1134"></a>
<a id="trace-1257"></a>
<a id="trace-1259"></a>
- 5.70s–10.70s (×16), actor 5, squad 0 (trace 835): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.629166782838713, 'next_transition': 922}.
<a id="trace-1140"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1140): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1061. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.5652460033181725, 'next_transition': 149}.
<a id="trace-1272"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1272): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1053. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3787567941685801, 'next_transition': 1594}.
<a id="trace-1594"></a>
<a id="trace-1596"></a>
<a id="trace-1626"></a>
<a id="trace-1628"></a>
<a id="trace-1667"></a>
<a id="trace-1669"></a>
- 11.20s–12.20s (×6), actor 5, squad 0 (trace 1594): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1058. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5456354853170088, 'next_transition': 1626}.
<a id="trace-148"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 148): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7212761154806346, 'next_transition': 1704}.
<a id="trace-149"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 149): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.749969593471182, 'next_transition': 2039}.
<a id="trace-1675"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1675): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1675. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7212761154806346, 'next_transition': 1704}.
<a id="trace-1676"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1676): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1676. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7212761154806346, 'next_transition': 1704}.
<a id="trace-1677"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1677): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1677. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.749969593471182, 'next_transition': 2039}.
<a id="trace-1678"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1678): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1678. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.749969593471182, 'next_transition': 2039}.
<a id="trace-1704"></a>
<a id="trace-1706"></a>
<a id="trace-1735"></a>
<a id="trace-1737"></a>
<a id="trace-1766"></a>
<a id="trace-1768"></a>
<a id="trace-1913"></a>
<a id="trace-1915"></a>
<a id="trace-1975"></a>
<a id="trace-1977"></a>
<a id="trace-2146"></a>
<a id="trace-2148"></a>
<a id="trace-2204"></a>
<a id="trace-2206"></a>
<a id="trace-2238"></a>
<a id="trace-2240"></a>
<a id="trace-2261"></a>
<a id="trace-2263"></a>
<a id="trace-2352"></a>
<a id="trace-2354"></a>
<a id="trace-2383"></a>
<a id="trace-2385"></a>
<a id="trace-2423"></a>
<a id="trace-2425"></a>
<a id="trace-2451"></a>
<a id="trace-2453"></a>
<a id="trace-2466"></a>
<a id="trace-2468"></a>
<a id="trace-2491"></a>
<a id="trace-2493"></a>
<a id="trace-2508"></a>
<a id="trace-2510"></a>
- 12.70s–23.75s (×32), actor 5, squad 0 (trace 1704): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1678. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.844985517660421, 'next_transition': 1735}.
<a id="trace-2039"></a>
- 17.30s–17.30s (×1), actor 8, squad 1 (trace 2039): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1848. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.754415180502228, 'next_transition': 2845}.
<a id="trace-2040"></a>
- 17.30s–17.30s (×1), actor 8, squad 1 (trace 2040): received platoon directive. Knowledge: actor memory at 15.00s, trace 1848. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.754415180502228, 'next_transition': 2845}.
<a id="trace-2524"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 2524): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2276. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2694}.
<a id="trace-2525"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 2525): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2276. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2694}.
<a id="trace-2694"></a>
<a id="trace-2696"></a>
<a id="trace-2811"></a>
<a id="trace-2813"></a>
<a id="trace-2833"></a>
<a id="trace-2835"></a>
<a id="trace-3219"></a>
<a id="trace-3221"></a>
<a id="trace-3269"></a>
<a id="trace-3271"></a>
<a id="trace-3308"></a>
<a id="trace-3310"></a>
<a id="trace-3328"></a>
<a id="trace-3330"></a>
<a id="trace-3369"></a>
<a id="trace-3371"></a>
<a id="trace-3396"></a>
<a id="trace-3398"></a>
<a id="trace-3698"></a>
<a id="trace-3700"></a>
<a id="trace-3806"></a>
<a id="trace-3808"></a>
<a id="trace-3839"></a>
<a id="trace-3841"></a>
- 24.25s–33.75s (×24), actor 5, squad 0 (trace 2694): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2281. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6656158716298415, 'next_transition': 2811}.
<a id="trace-2845"></a>
- 25.90s–25.90s (×1), actor 8, squad 1 (trace 2845): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 2739. Next observer evidence: None.
<a id="trace-2846"></a>
- 25.90s–25.90s (×1), actor 8, squad 1 (trace 2846): bounding overwatch. Knowledge: actor memory at 25.00s, trace 2739. Next observer evidence: None.
<a id="trace-2847"></a>
<a id="trace-2965"></a>
<a id="trace-3086"></a>
- 25.90s–26.00s (×3), actor 8, squad 1 (trace 2847): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 2739. Next observer evidence: None.
<a id="trace-3424"></a>
- 29.35s–29.35s (×1), actor 8, squad 1 (trace 3424): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 2739. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.56027950959767, 'next_transition': 426}.
<a id="trace-3427"></a>
- 29.35s–29.35s (×1), actor 8, squad 1 (trace 3427): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 2739. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.56027950959767, 'next_transition': 426}.
<a id="trace-3428"></a>
- 29.35s–29.35s (×1), actor 8, squad 1 (trace 3428): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 2739. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.56027950959767, 'next_transition': 426}.
<a id="trace-3850"></a>
- 34.10s–34.10s (×1), actor 0, squad 0 (trace 3850): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 3617. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4122}.
<a id="trace-4122"></a>
<a id="trace-4124"></a>
<a id="trace-4147"></a>
<a id="trace-4149"></a>
<a id="trace-4173"></a>
<a id="trace-4175"></a>
- 35.25s–36.25s (×6), actor 5, squad 0 (trace 4122): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4049. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20624942936768714, 'next_transition': 4147}.
<a id="trace-4186"></a>
- 36.60s–36.60s (×1), actor 0, squad 0 (trace 4186): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 4044. Next observer evidence: None.
<a id="trace-4187"></a>
- 36.60s–36.60s (×1), actor 0, squad 0 (trace 4187): bounding overwatch. Knowledge: actor memory at 35.00s, trace 4044. Next observer evidence: None.
<a id="trace-4188"></a>
- 36.60s–36.60s (×1), actor 0, squad 0 (trace 4188): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4044. Next observer evidence: None.
<a id="trace-4381"></a>
<a id="trace-4383"></a>
<a id="trace-4402"></a>
<a id="trace-4404"></a>
<a id="trace-4435"></a>
<a id="trace-4437"></a>
- 36.75s–37.75s (×6), actor 5, squad 0 (trace 4381): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4049. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5245965543334612, 'next_transition': 4402}.
<a id="trace-4469"></a>
- 38.10s–38.10s (×1), actor 0, squad 0 (trace 4469): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 4044. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46030948221051593, 'next_transition': 4684}.
<a id="trace-4684"></a>
<a id="trace-4686"></a>
<a id="trace-4719"></a>
<a id="trace-4721"></a>
<a id="trace-4760"></a>
<a id="trace-4762"></a>
- 38.75s–39.75s (×6), actor 5, squad 0 (trace 4684): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4049. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42750977507796517, 'next_transition': 4719}.
<a id="trace-425"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (events line 425): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-426"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (events line 426): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4770"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 4770): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.484390 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 4770. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2690606733378525, 'next_transition': 4869}.
<a id="trace-4771"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 4771): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.484390 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 4771. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2690606733378525, 'next_transition': 4869}.
<a id="trace-4772"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 4772): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.484390 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 4772. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6235912796194691, 'next_transition': 4957}.
<a id="trace-4773"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 4773): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.484390 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 4773. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6235912796194691, 'next_transition': 4957}.
<a id="trace-4869"></a>
<a id="trace-4871"></a>
<a id="trace-4906"></a>
<a id="trace-4908"></a>
<a id="trace-4938"></a>
<a id="trace-4940"></a>
- 40.25s–41.25s (×6), actor 5, squad 0 (trace 4869): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4782. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874882336422559, 'next_transition': 4906}.
<a id="trace-4957"></a>
- 41.60s–41.60s (×1), actor 8, squad 1 (trace 4957): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 4785. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.867595722660555, 'next_transition': 8167}.
<a id="trace-4958"></a>
- 41.60s–41.60s (×1), actor 8, squad 1 (trace 4958): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 4785. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.867595722660555, 'next_transition': 8167}.
<a id="trace-5030"></a>
- 41.75s–41.75s (×1), actor 0, squad 0 (trace 5030): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 4777. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8035}.
<a id="trace-5032"></a>
- 41.75s–41.75s (×1), actor 0, squad 0 (trace 5032): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 4777. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8035}.
<a id="trace-7728"></a>
- 41.75s–41.75s (×1), actor 0, squad 0 (trace 7728): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 4777. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8035}.
<a id="trace-7729"></a>
- 41.75s–41.75s (×1), actor 0, squad 0 (trace 7729): MoveTactically. Knowledge: actor memory at 40.00s, trace 4777. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8035}.
<a id="trace-7730"></a>
- 41.75s–41.75s (×1), actor 0, squad 0 (trace 7730): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 4777. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8035}.
<a id="trace-8035"></a>
<a id="trace-8037"></a>
<a id="trace-8062"></a>
<a id="trace-8064"></a>
<a id="trace-8101"></a>
<a id="trace-8103"></a>
<a id="trace-8206"></a>
<a id="trace-8208"></a>
<a id="trace-8326"></a>
<a id="trace-8328"></a>
<a id="trace-8373"></a>
<a id="trace-8375"></a>
<a id="trace-8433"></a>
<a id="trace-8435"></a>
<a id="trace-8495"></a>
<a id="trace-8497"></a>
<a id="trace-8540"></a>
<a id="trace-8542"></a>
<a id="trace-8646"></a>
<a id="trace-8648"></a>
<a id="trace-8680"></a>
<a id="trace-8682"></a>
<a id="trace-8722"></a>
<a id="trace-8724"></a>
<a id="trace-8834"></a>
<a id="trace-8836"></a>
<a id="trace-8885"></a>
<a id="trace-8887"></a>
<a id="trace-8944"></a>
<a id="trace-8946"></a>
<a id="trace-8983"></a>
<a id="trace-8985"></a>
<a id="trace-9022"></a>
<a id="trace-9024"></a>
<a id="trace-9070"></a>
<a id="trace-9072"></a>
- 42.25s–52.75s (×36), actor 5, squad 0 (trace 8035): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4782. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8062}.
<a id="trace-8167"></a>
- 44.35s–44.35s (×1), actor 8, squad 1 (trace 8167): NeedSupport. Knowledge: actor memory at 40.00s, trace 4785. Next observer evidence: {'until': 57, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.356460010699877, 'next_transition': 9418}.
<a id="trace-9120"></a>
- 53.20s–53.20s (×1), actor 0, squad 0 (trace 9120): NeedSupport. Knowledge: actor memory at 50.00s, trace 8746. Next observer evidence: None.
<a id="trace-9133"></a>
<a id="trace-9135"></a>
<a id="trace-9190"></a>
<a id="trace-9192"></a>
<a id="trace-9219"></a>
<a id="trace-9221"></a>
<a id="trace-9312"></a>
<a id="trace-9314"></a>
<a id="trace-9347"></a>
<a id="trace-9349"></a>
<a id="trace-9383"></a>
<a id="trace-9385"></a>
<a id="trace-9495"></a>
<a id="trace-9497"></a>
<a id="trace-9520"></a>
<a id="trace-9522"></a>
<a id="trace-9548"></a>
<a id="trace-9550"></a>
<a id="trace-9561"></a>
<a id="trace-9563"></a>
- 53.25s–58.75s (×20), actor 5, squad 0 (trace 9133): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 8751. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.447791343687572, 'next_transition': 9190}.
<a id="trace-9418"></a>
- 57.10s–57.10s (×1), actor 8, squad 1 (trace 9418): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 9240. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.308731755908411, 'next_transition': 11878}.
<a id="trace-9435"></a>
- 57.10s–57.10s (×1), actor 8, squad 1 (trace 9435): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 9240. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.308731755908411, 'next_transition': 11878}.
<a id="trace-9581"></a>
- 59.05s–59.05s (×1), actor 1, squad 0 (trace 9581): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 9233. Next observer evidence: {'until': 59.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.17356790536694652, 'next_transition': 10213}.
<a id="trace-9582"></a>
- 59.05s–59.05s (×1), actor 1, squad 0 (trace 9582): new contact inside 100 m. Knowledge: actor memory at 55.00s, trace 9233. Next observer evidence: {'until': 59.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.17356790536694652, 'next_transition': 10213}.
<a id="trace-10213"></a>
<a id="trace-10215"></a>
<a id="trace-10329"></a>
<a id="trace-10331"></a>
<a id="trace-10388"></a>
<a id="trace-10390"></a>
<a id="trace-10404"></a>
<a id="trace-10406"></a>
- 59.75s–61.75s (×8), actor 5, squad 0 (trace 10213): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 9237. Next observer evidence: {'until': 60.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.10088018013885823, 'next_transition': 10329}.
<a id="trace-10416"></a>
- 61.95s–61.95s (×1), actor 1, squad 0 (trace 10416): Fixing. Knowledge: actor memory at 60.00s, trace 10233. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2966139628700867, 'next_transition': 10432}.
<a id="trace-10432"></a>
- 62.25s–62.25s (×1), actor 5, squad 0 (trace 10432): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 10237. Next observer evidence: {'until': 62.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14048279061365593, 'next_transition': 10453}.
<a id="trace-10453"></a>
- 62.45s–62.45s (×1), actor 1, squad 0 (trace 10453): new contact inside 100 m. Knowledge: actor memory at 60.00s, trace 10233. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15075721381541643, 'next_transition': 11073}.
<a id="trace-11073"></a>
<a id="trace-11113"></a>
<a id="trace-11156"></a>
<a id="trace-11206"></a>
<a id="trace-11241"></a>
<a id="trace-11243"></a>
<a id="trace-11351"></a>
<a id="trace-11353"></a>
<a id="trace-11393"></a>
<a id="trace-11395"></a>
- 62.75s–65.75s (×10), actor 5, squad 0 (trace 11073): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 10237. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33151741040682287, 'next_transition': 11113}.
<a id="trace-11423"></a>
- 66.15s–66.15s (×1), actor 1, squad 0 (trace 11423): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 65.00s, trace 11268. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03794285714285702, 'next_transition': 11835}.
<a id="trace-11424"></a>
- 66.15s–66.15s (×1), actor 1, squad 0 (trace 11424): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 11268. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03794285714285702, 'next_transition': 11835}.
<a id="trace-11835"></a>
<a id="trace-11837"></a>
<a id="trace-11911"></a>
<a id="trace-11913"></a>
<a id="trace-12004"></a>
<a id="trace-12006"></a>
<a id="trace-12052"></a>
<a id="trace-12054"></a>
<a id="trace-12097"></a>
<a id="trace-12099"></a>
<a id="trace-12146"></a>
<a id="trace-12148"></a>
<a id="trace-12204"></a>
<a id="trace-12206"></a>
<a id="trace-12218"></a>
<a id="trace-12220"></a>
<a id="trace-12303"></a>
<a id="trace-12305"></a>
<a id="trace-12342"></a>
<a id="trace-12344"></a>
<a id="trace-12386"></a>
<a id="trace-12388"></a>
<a id="trace-12428"></a>
<a id="trace-12430"></a>
<a id="trace-12456"></a>
<a id="trace-12458"></a>
<a id="trace-12507"></a>
<a id="trace-12509"></a>
<a id="trace-12682"></a>
<a id="trace-12684"></a>
<a id="trace-12805"></a>
<a id="trace-12807"></a>
<a id="trace-12950"></a>
<a id="trace-12952"></a>
<a id="trace-13005"></a>
<a id="trace-13007"></a>
<a id="trace-13052"></a>
<a id="trace-13054"></a>
<a id="trace-13096"></a>
<a id="trace-13098"></a>
<a id="trace-13144"></a>
<a id="trace-13146"></a>
<a id="trace-13171"></a>
<a id="trace-13173"></a>
<a id="trace-13193"></a>
<a id="trace-13195"></a>
<a id="trace-13208"></a>
<a id="trace-13210"></a>
<a id="trace-13315"></a>
<a id="trace-13317"></a>
<a id="trace-13353"></a>
<a id="trace-13355"></a>
- 66.25s–80.75s (×52), actor 5, squad 0 (trace 11835): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 11272. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10514285714285723, 'next_transition': 11911}.
<a id="trace-11878"></a>
- 66.65s–66.65s (×1), actor 8, squad 1 (trace 11878): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 65.00s, trace 11275. Next observer evidence: None.
<a id="trace-11885"></a>
- 66.70s–66.70s (×1), actor 8, squad 1 (trace 11885): MoveTactically. Knowledge: actor memory at 65.00s, trace 11275. Next observer evidence: None.
<a id="trace-11886"></a>
- 66.70s–66.70s (×1), actor 8, squad 1 (trace 11886): traveling overwatch. Knowledge: actor memory at 65.00s, trace 11275. Next observer evidence: None.
<a id="trace-11887"></a>
- 66.70s–66.70s (×1), actor 8, squad 1 (trace 11887): received platoon directive. Knowledge: actor memory at 65.00s, trace 11275. Next observer evidence: None.
<a id="trace-11920"></a>
- 66.75s–66.75s (×1), actor 8, squad 1 (trace 11920): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 65.00s, trace 11275. Next observer evidence: {'until': 84, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.204921851116303, 'next_transition': 13787}.
<a id="trace-13402"></a>
- 81.25s–81.25s (×1), actor 1, squad 0 (trace 13402): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 80.00s, trace 13230. Next observer evidence: {'until': 81.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36120226211241246, 'next_transition': 13407}.
<a id="trace-13407"></a>
- 81.50s–81.50s (×1), actor 1, squad 0 (trace 13407): Reorganise: completed/failed drill. Knowledge: actor memory at 80.00s, trace 13230. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32342788577677434, 'next_transition': 13658}.
<a id="trace-13412"></a>
- 81.50s–81.50s (×1), actor 1, squad 0 (trace 13412): ReactToContact: cover and return fire. Knowledge: actor memory at 80.00s, trace 13230. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32342788577677434, 'next_transition': 13658}.
<a id="trace-13413"></a>
- 81.50s–81.50s (×1), actor 1, squad 0 (trace 13413): Reorganise complete: known contact. Knowledge: actor memory at 80.00s, trace 13230. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32342788577677434, 'next_transition': 13658}.
<a id="trace-13658"></a>
<a id="trace-13660"></a>
<a id="trace-13694"></a>
<a id="trace-13696"></a>
<a id="trace-13734"></a>
<a id="trace-13736"></a>
<a id="trace-13856"></a>
<a id="trace-13858"></a>
<a id="trace-13881"></a>
<a id="trace-13883"></a>
- 81.75s–84.75s (×10), actor 5, squad 0 (trace 13658): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 13234. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35909896385467827, 'next_transition': 13694}.
<a id="trace-13787"></a>
- 84.10s–84.10s (×1), actor 8, squad 1 (trace 13787): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 80.00s, trace 13237. Next observer evidence: None.
<a id="trace-13797"></a>
- 84.15s–84.15s (×1), actor 8, squad 1 (trace 13797): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 80.00s, trace 13237. Next observer evidence: {'until': 108.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 16.30947658227035, 'next_transition': 1407}.
<a id="trace-13967"></a>
- 85.20s–85.20s (×1), actor 1, squad 0 (trace 13967): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 85.00s, trace 13901. Next observer evidence: None.
<a id="trace-13968"></a>
- 85.20s–85.20s (×1), actor 1, squad 0 (trace 13968): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 13901. Next observer evidence: None.
<a id="trace-14152"></a>
<a id="trace-14154"></a>
<a id="trace-14165"></a>
<a id="trace-14167"></a>
<a id="trace-14198"></a>
<a id="trace-14200"></a>
<a id="trace-14249"></a>
<a id="trace-14251"></a>
<a id="trace-14263"></a>
<a id="trace-14265"></a>
<a id="trace-14297"></a>
<a id="trace-14299"></a>
<a id="trace-14311"></a>
<a id="trace-14313"></a>
<a id="trace-14335"></a>
<a id="trace-14337"></a>
<a id="trace-14349"></a>
<a id="trace-14351"></a>
<a id="trace-14433"></a>
<a id="trace-14435"></a>
<a id="trace-14449"></a>
<a id="trace-14451"></a>
<a id="trace-14473"></a>
<a id="trace-14475"></a>
<a id="trace-14485"></a>
<a id="trace-14487"></a>
<a id="trace-14509"></a>
<a id="trace-14511"></a>
<a id="trace-14522"></a>
<a id="trace-14524"></a>
<a id="trace-14552"></a>
<a id="trace-14554"></a>
<a id="trace-14648"></a>
<a id="trace-14650"></a>
<a id="trace-14770"></a>
<a id="trace-14772"></a>
<a id="trace-14803"></a>
<a id="trace-14805"></a>
<a id="trace-14818"></a>
<a id="trace-14820"></a>
<a id="trace-14844"></a>
<a id="trace-14846"></a>
<a id="trace-14879"></a>
<a id="trace-14881"></a>
<a id="trace-14915"></a>
<a id="trace-14917"></a>
<a id="trace-14932"></a>
<a id="trace-14934"></a>
<a id="trace-15016"></a>
<a id="trace-15018"></a>
<a id="trace-15054"></a>
<a id="trace-15056"></a>
- 85.25s–101.25s (×52), actor 5, squad 0 (trace 14152): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 13905. Next observer evidence: {'until': 85.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5711964150953395, 'next_transition': 14165}.
<a id="trace-15082"></a>
- 101.85s–101.85s (×1), actor 1, squad 0 (trace 15082): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 14943. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4969645717850651, 'next_transition': 15197}.
<a id="trace-15083"></a>
- 101.85s–101.85s (×1), actor 1, squad 0 (trace 15083): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 14943. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4969645717850651, 'next_transition': 15197}.
<a id="trace-15197"></a>
<a id="trace-15199"></a>
<a id="trace-15220"></a>
<a id="trace-15222"></a>
<a id="trace-15247"></a>
<a id="trace-15262"></a>
<a id="trace-15264"></a>
<a id="trace-15287"></a>
<a id="trace-15289"></a>
<a id="trace-15322"></a>
<a id="trace-15324"></a>
<a id="trace-15405"></a>
<a id="trace-15407"></a>
<a id="trace-15423"></a>
<a id="trace-15425"></a>
<a id="trace-15442"></a>
<a id="trace-15444"></a>
<a id="trace-15459"></a>
<a id="trace-15461"></a>
<a id="trace-15478"></a>
<a id="trace-15480"></a>
<a id="trace-15490"></a>
<a id="trace-15492"></a>
<a id="trace-15515"></a>
<a id="trace-15517"></a>
<a id="trace-15534"></a>
<a id="trace-15536"></a>
- 102.25s–108.75s (×27), actor 5, squad 0 (trace 15197): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 14946. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040174466957368, 'next_transition': 15220}.
<a id="trace-1406"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (events line 1406): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0080202314281443, 'next_transition': 15559}.
<a id="trace-1407"></a>
- 108.95s–108.95s (×1), actor 5, squad 1 (events line 1407): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 114.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15839}.
<a id="trace-15547"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 15547): renew committed intent (75 s lifetime). Knowledge: actor memory at 108.95s, trace 15547. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0080202314281443, 'next_transition': 15559}.
<a id="trace-15548"></a>
- 108.95s–108.95s (×1), actor 5, squad 1 (trace 15548): renew committed intent (75 s lifetime). Knowledge: actor memory at 108.95s, trace 15548. Next observer evidence: {'until': 114.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15839}.
<a id="trace-15559"></a>
<a id="trace-15561"></a>
<a id="trace-15573"></a>
<a id="trace-15575"></a>
<a id="trace-15651"></a>
- 109.25s–110.25s (×5), actor 5, squad 0 (trace 15559): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.95s, trace 15548. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0079824162533269, 'next_transition': 15573}.
<a id="trace-15664"></a>
- 110.50s–110.50s (×1), actor 1, squad 0 (trace 15664): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 15583. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4616241283710817, 'next_transition': 15672}.
<a id="trace-15672"></a>
<a id="trace-15692"></a>
<a id="trace-15715"></a>
<a id="trace-15733"></a>
<a id="trace-15748"></a>
<a id="trace-15750"></a>
<a id="trace-15773"></a>
<a id="trace-15775"></a>
<a id="trace-15794"></a>
<a id="trace-15796"></a>
<a id="trace-15809"></a>
<a id="trace-15811"></a>
<a id="trace-15831"></a>
<a id="trace-15833"></a>
<a id="trace-15968"></a>
<a id="trace-15970"></a>
- 110.75s–115.25s (×16), actor 5, squad 0 (trace 15672): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 15586. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5044512486842578, 'next_transition': 15692}.
<a id="trace-15839"></a>
- 114.90s–114.90s (×1), actor 9, squad 1 (trace 15839): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 110.00s, trace 15588. Next observer evidence: {'until': 121, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.0, 'next_transition': 16376}.
<a id="trace-15840"></a>
- 114.90s–114.90s (×1), actor 9, squad 1 (trace 15840): MoveTactically. Knowledge: actor memory at 110.00s, trace 15588. Next observer evidence: {'until': 121, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.0, 'next_transition': 16376}.
<a id="trace-15841"></a>
- 114.90s–114.90s (×1), actor 9, squad 1 (trace 15841): traveling. Knowledge: actor memory at 110.00s, trace 15588. Next observer evidence: {'until': 121, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.0, 'next_transition': 16376}.
<a id="trace-15842"></a>
- 114.90s–114.90s (×1), actor 9, squad 1 (trace 15842): . Knowledge: actor memory at 110.00s, trace 15588. Next observer evidence: {'until': 121, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.0, 'next_transition': 16376}.
<a id="trace-15982"></a>
- 115.40s–115.40s (×1), actor 1, squad 0 (trace 15982): MoveTactically. Knowledge: actor memory at 115.00s, trace 15897. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15993}.
<a id="trace-15983"></a>
- 115.40s–115.40s (×1), actor 1, squad 0 (trace 15983): traveling overwatch. Knowledge: actor memory at 115.00s, trace 15897. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15993}.
<a id="trace-15984"></a>
- 115.40s–115.40s (×1), actor 1, squad 0 (trace 15984): received platoon directive. Knowledge: actor memory at 115.00s, trace 15897. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15993}.
<a id="trace-15993"></a>
<a id="trace-15995"></a>
<a id="trace-16016"></a>
<a id="trace-16018"></a>
- 115.75s–116.25s (×4), actor 5, squad 0 (trace 15993): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 15900. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16016}.
<a id="trace-16023"></a>
- 116.25s–116.25s (×1), actor 1, squad 0 (trace 16023): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 15897. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4490318579530894, 'next_transition': 16170}.
<a id="trace-16170"></a>
<a id="trace-16172"></a>
<a id="trace-16207"></a>
<a id="trace-16209"></a>
<a id="trace-16229"></a>
<a id="trace-16231"></a>
<a id="trace-16249"></a>
<a id="trace-16251"></a>
<a id="trace-16263"></a>
<a id="trace-16265"></a>
<a id="trace-16346"></a>
<a id="trace-16348"></a>
<a id="trace-16362"></a>
<a id="trace-16364"></a>
<a id="trace-16437"></a>
<a id="trace-16439"></a>
<a id="trace-16452"></a>
<a id="trace-16454"></a>
<a id="trace-16474"></a>
<a id="trace-16476"></a>
<a id="trace-16493"></a>
<a id="trace-16495"></a>
<a id="trace-16523"></a>
<a id="trace-16525"></a>
<a id="trace-16541"></a>
<a id="trace-16543"></a>
<a id="trace-16641"></a>
<a id="trace-16643"></a>
<a id="trace-16666"></a>
<a id="trace-16668"></a>
<a id="trace-16694"></a>
<a id="trace-16696"></a>
<a id="trace-16729"></a>
<a id="trace-16731"></a>
<a id="trace-16743"></a>
<a id="trace-16745"></a>
<a id="trace-16765"></a>
<a id="trace-16767"></a>
<a id="trace-16786"></a>
<a id="trace-16788"></a>
<a id="trace-16802"></a>
<a id="trace-16804"></a>
<a id="trace-16811"></a>
<a id="trace-16813"></a>
<a id="trace-16886"></a>
<a id="trace-16888"></a>
<a id="trace-16903"></a>
<a id="trace-16905"></a>
<a id="trace-16937"></a>
<a id="trace-16939"></a>
<a id="trace-16964"></a>
<a id="trace-16966"></a>
- 117.25s–132.30s (×52), actor 5, squad 0 (trace 16170): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 15900. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.035926546191196, 'next_transition': 16207}.
<a id="trace-16376"></a>
- 121.10s–121.10s (×1), actor 9, squad 1 (trace 16376): matching received arrivals: traveling stage complete. Knowledge: actor memory at 120.00s, trace 16278. Next observer evidence: {'until': 125.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.999999999999996, 'next_transition': 16674}.
<a id="trace-16674"></a>
- 125.90s–125.90s (×1), actor 9, squad 1 (trace 16674): matching received arrivals: deployment leg complete. Knowledge: actor memory at 125.00s, trace 16573. Next observer evidence: None.
<a id="trace-16675"></a>
- 125.95s–125.95s (×1), actor 9, squad 1 (trace 16675): Reorganise: completed/failed drill. Knowledge: actor memory at 125.00s, trace 16573. Next observer evidence: {'until': 126, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16683}.
<a id="trace-16677"></a>
- 125.95s–125.95s (×1), actor 9, squad 1 (trace 16677): MoveTactically. Knowledge: actor memory at 125.00s, trace 16573. Next observer evidence: {'until': 126, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16683}.
<a id="trace-16678"></a>
- 125.95s–125.95s (×1), actor 9, squad 1 (trace 16678): traveling overwatch. Knowledge: actor memory at 125.00s, trace 16573. Next observer evidence: {'until': 126, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16683}.
<a id="trace-16679"></a>
- 125.95s–125.95s (×1), actor 9, squad 1 (trace 16679): Reorganise complete. Knowledge: actor memory at 125.00s, trace 16573. Next observer evidence: {'until': 126, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16683}.
<a id="trace-16683"></a>
- 126.00s–126.00s (×1), actor 9, squad 1 (trace 16683): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 125.00s, trace 16573. Next observer evidence: {'until': 151.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18280}.
<a id="trace-16976"></a>
- 132.65s–132.65s (×1), actor 1, squad 0 (trace 16976): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 16818. Next observer evidence: {'until': 132.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12598924810504933, 'next_transition': 17143}.
<a id="trace-17143"></a>
<a id="trace-17145"></a>
<a id="trace-17159"></a>
<a id="trace-17161"></a>
<a id="trace-17280"></a>
<a id="trace-17282"></a>
<a id="trace-17296"></a>
<a id="trace-17298"></a>
<a id="trace-17314"></a>
<a id="trace-17316"></a>
<a id="trace-17331"></a>
<a id="trace-17333"></a>
<a id="trace-17350"></a>
<a id="trace-17352"></a>
<a id="trace-17364"></a>
<a id="trace-17366"></a>
<a id="trace-17406"></a>
<a id="trace-17408"></a>
<a id="trace-17434"></a>
<a id="trace-17436"></a>
- 132.80s–139.80s (×20), actor 5, squad 0 (trace 17143): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 16821. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039964603050306, 'next_transition': 17159}.
<a id="trace-17522"></a>
- 140.30s–140.30s (×1), actor 1, squad 0 (trace 17522): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 140.00s, trace 17445. Next observer evidence: {'until': 140.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17567}.
<a id="trace-17567"></a>
- 140.55s–140.55s (×1), actor 1, squad 0 (trace 17567): recovering: retry accepted element corridor in column. Knowledge: actor memory at 140.00s, trace 17445. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1259907680573958, 'next_transition': 17619}.
<a id="trace-17619"></a>
<a id="trace-17621"></a>
- 140.80s–140.80s (×2), actor 5, squad 0 (trace 17619): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 17448. Next observer evidence: {'until': 141, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520040446764539, 'next_transition': 17629}.
<a id="trace-17629"></a>
- 141.05s–141.05s (×1), actor 1, squad 0 (trace 17629): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 140.00s, trace 17445. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520037266423949, 'next_transition': 17638}.
<a id="trace-17638"></a>
<a id="trace-17640"></a>
<a id="trace-17674"></a>
<a id="trace-17676"></a>
<a id="trace-17708"></a>
<a id="trace-17710"></a>
<a id="trace-17737"></a>
<a id="trace-17739"></a>
<a id="trace-17836"></a>
<a id="trace-17838"></a>
<a id="trace-17868"></a>
<a id="trace-17870"></a>
- 141.30s–146.80s (×12), actor 5, squad 0 (trace 17638): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 17448. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8528585329724969, 'next_transition': 17674}.
<a id="trace-17877"></a>
- 146.80s–146.80s (×1), actor 1, squad 0 (trace 17877): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 145.00s, trace 17754. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17895}.
<a id="trace-17879"></a>
- 146.80s–146.80s (×1), actor 1, squad 0 (trace 17879): NeedSupport. Knowledge: actor memory at 145.00s, trace 17754. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17895}.
<a id="trace-17895"></a>
<a id="trace-17897"></a>
<a id="trace-17907"></a>
<a id="trace-17909"></a>
- 147.30s–147.80s (×4), actor 5, squad 0 (trace 17895): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 17757. Next observer evidence: {'until': 147.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17907}.
<a id="trace-17916"></a>
- 147.80s–147.80s (×1), actor 1, squad 0 (trace 17916): Reorganise: completed/failed drill. Knowledge: actor memory at 145.00s, trace 17754. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18011}.
<a id="trace-17919"></a>
- 147.80s–147.80s (×1), actor 1, squad 0 (trace 17919): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 17754. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18011}.
<a id="trace-17920"></a>
- 147.80s–147.80s (×1), actor 1, squad 0 (trace 17920): bounding overwatch. Knowledge: actor memory at 145.00s, trace 17754. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18011}.
<a id="trace-17921"></a>
- 147.80s–147.80s (×1), actor 1, squad 0 (trace 17921): Reorganise complete: known contact. Knowledge: actor memory at 145.00s, trace 17754. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18011}.
<a id="trace-18011"></a>
<a id="trace-18013"></a>
<a id="trace-18033"></a>
<a id="trace-18035"></a>
<a id="trace-18055"></a>
<a id="trace-18057"></a>
<a id="trace-18065"></a>
<a id="trace-18067"></a>
<a id="trace-18142"></a>
<a id="trace-18144"></a>
- 148.30s–150.30s (×10), actor 5, squad 0 (trace 18011): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 17757. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749642853093507, 'next_transition': 18033}.
<a id="trace-18159"></a>
- 150.65s–150.65s (×1), actor 1, squad 0 (trace 18159): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 150.00s, trace 18075. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.570393332904351, 'next_transition': 18287}.
<a id="trace-18280"></a>
- 151.75s–151.75s (×1), actor 9, squad 1 (trace 18280): ReactToContact: cover and return fire. Knowledge: actor memory at 150.00s, trace 18079. Next observer evidence: {'until': 155, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18445}.
<a id="trace-18281"></a>
- 151.75s–151.75s (×1), actor 9, squad 1 (trace 18281): bounding overwatch. Knowledge: actor memory at 150.00s, trace 18079. Next observer evidence: {'until': 155, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18445}.
<a id="trace-18282"></a>
- 151.75s–151.75s (×1), actor 9, squad 1 (trace 18282): new contact inside 100 m. Knowledge: actor memory at 150.00s, trace 18079. Next observer evidence: {'until': 155, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18445}.
<a id="trace-18287"></a>
<a id="trace-18289"></a>
<a id="trace-18318"></a>
<a id="trace-18320"></a>
<a id="trace-18337"></a>
<a id="trace-18339"></a>
<a id="trace-18362"></a>
<a id="trace-18364"></a>
<a id="trace-18381"></a>
<a id="trace-18383"></a>
- 151.80s–153.80s (×10), actor 5, squad 0 (trace 18287): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 18077. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7594542431878066, 'next_transition': 18318}.
<a id="trace-18412"></a>
- 154.40s–154.40s (×1), actor 1, squad 0 (trace 18412): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 150.00s, trace 18075. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680133941954578, 'next_transition': 18418}.
<a id="trace-18418"></a>
<a id="trace-18420"></a>
<a id="trace-18503"></a>
<a id="trace-18505"></a>
<a id="trace-18515"></a>
<a id="trace-18517"></a>
<a id="trace-18537"></a>
<a id="trace-18539"></a>
<a id="trace-18556"></a>
<a id="trace-18558"></a>
<a id="trace-18575"></a>
<a id="trace-18577"></a>
<a id="trace-18587"></a>
<a id="trace-18589"></a>
<a id="trace-18608"></a>
<a id="trace-18610"></a>
<a id="trace-18629"></a>
<a id="trace-18631"></a>
<a id="trace-18658"></a>
<a id="trace-18660"></a>
<a id="trace-18739"></a>
<a id="trace-18741"></a>
- 154.80s–160.30s (×22), actor 5, squad 0 (trace 18418): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 18077. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2267999792906737, 'next_transition': 18503}.
<a id="trace-18445"></a>
- 155.05s–155.05s (×1), actor 9, squad 1 (trace 18445): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 155.00s, trace 18434. Next observer evidence: {'until': 178, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2564}.
<a id="trace-18447"></a>
- 155.05s–155.05s (×1), actor 9, squad 1 (trace 18447): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 155.00s, trace 18434. Next observer evidence: {'until': 178, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2564}.
<a id="trace-18749"></a>
- 160.60s–160.60s (×1), actor 1, squad 0 (trace 18749): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 160.00s, trace 18667. Next observer evidence: {'until': 160.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749649908807498, 'next_transition': 18760}.
<a id="trace-18760"></a>
<a id="trace-18762"></a>
<a id="trace-18778"></a>
<a id="trace-18780"></a>
<a id="trace-18794"></a>
<a id="trace-18796"></a>
- 160.80s–161.80s (×6), actor 5, squad 0 (trace 18760): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 18669. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300252968929104, 'next_transition': 18778}.
<a id="trace-18808"></a>
- 162.05s–162.05s (×1), actor 1, squad 0 (trace 18808): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 160.00s, trace 18667. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07275786830302283, 'next_transition': 18817}.
<a id="trace-18817"></a>
<a id="trace-18819"></a>
<a id="trace-18830"></a>
<a id="trace-18832"></a>
<a id="trace-18846"></a>
<a id="trace-18848"></a>
<a id="trace-18860"></a>
<a id="trace-18862"></a>
<a id="trace-18884"></a>
<a id="trace-18886"></a>
<a id="trace-18911"></a>
<a id="trace-18913"></a>
<a id="trace-19002"></a>
<a id="trace-19004"></a>
<a id="trace-19019"></a>
<a id="trace-19021"></a>
<a id="trace-19056"></a>
<a id="trace-19058"></a>
<a id="trace-19083"></a>
<a id="trace-19085"></a>
<a id="trace-19103"></a>
<a id="trace-19105"></a>
- 162.30s–167.30s (×22), actor 5, squad 0 (trace 18817): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 18669. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22749955589242377, 'next_transition': 18830}.
<a id="trace-19117"></a>
- 167.60s–167.60s (×1), actor 1, squad 0 (trace 19117): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 165.00s, trace 18929. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0007297345407749789, 'next_transition': 19300}.
<a id="trace-19300"></a>
<a id="trace-19302"></a>
<a id="trace-19336"></a>
<a id="trace-19338"></a>
<a id="trace-19364"></a>
<a id="trace-19366"></a>
<a id="trace-19474"></a>
<a id="trace-19476"></a>
<a id="trace-19494"></a>
<a id="trace-19496"></a>
- 168.30s–170.80s (×10), actor 5, squad 0 (trace 19300): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 18931. Next observer evidence: {'until': 168.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0006063672567017503, 'next_transition': 19336}.
<a id="trace-19510"></a>
- 171.20s–171.20s (×1), actor 1, squad 0 (trace 19510): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 170.00s, trace 19396. Next observer evidence: None.
<a id="trace-19512"></a>
- 171.20s–171.20s (×1), actor 1, squad 0 (trace 19512): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 170.00s, trace 19396. Next observer evidence: None.
<a id="trace-19520"></a>
<a id="trace-19522"></a>
<a id="trace-19533"></a>
<a id="trace-19535"></a>
<a id="trace-19556"></a>
<a id="trace-19558"></a>
<a id="trace-19576"></a>
<a id="trace-19578"></a>
<a id="trace-19595"></a>
<a id="trace-19597"></a>
<a id="trace-19607"></a>
<a id="trace-19609"></a>
<a id="trace-19641"></a>
<a id="trace-19643"></a>
<a id="trace-19717"></a>
<a id="trace-19719"></a>
<a id="trace-19729"></a>
<a id="trace-19731"></a>
<a id="trace-19747"></a>
<a id="trace-19749"></a>
<a id="trace-19759"></a>
<a id="trace-19761"></a>
<a id="trace-19776"></a>
<a id="trace-19778"></a>
- 171.30s–177.30s (×24), actor 5, squad 0 (trace 19520): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 19398. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19533}.
<a id="trace-2563"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (events line 2563): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199662596169866, 'next_transition': 19811}.
<a id="trace-2564"></a>
- 178.05s–178.05s (×1), actor 5, squad 1 (events line 2564): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 196.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20849}.
<a id="trace-19799"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (trace 19799): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.579475 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 178.05s, trace 19799. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199662596169866, 'next_transition': 19811}.
<a id="trace-19800"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (trace 19800): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.579475 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 178.05s, trace 19800. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199662596169866, 'next_transition': 19811}.
<a id="trace-19801"></a>
- 178.05s–178.05s (×1), actor 5, squad 1 (trace 19801): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.05s, trace 19801. Next observer evidence: {'until': 196.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20849}.
<a id="trace-19811"></a>
<a id="trace-19813"></a>
<a id="trace-19822"></a>
<a id="trace-19824"></a>
<a id="trace-19842"></a>
<a id="trace-19844"></a>
<a id="trace-19855"></a>
<a id="trace-19857"></a>
<a id="trace-19931"></a>
<a id="trace-19933"></a>
<a id="trace-19947"></a>
<a id="trace-19949"></a>
<a id="trace-19968"></a>
<a id="trace-19970"></a>
- 178.30s–181.30s (×14), actor 5, squad 0 (trace 19811): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.05s, trace 19801. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2075054642425689, 'next_transition': 19822}.
<a id="trace-19979"></a>
- 181.75s–181.75s (×1), actor 1, squad 0 (trace 19979): MoveTactically. Knowledge: actor memory at 180.00s, trace 19865. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20035}.
<a id="trace-19980"></a>
- 181.75s–181.75s (×1), actor 1, squad 0 (trace 19980): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 180.00s, trace 19865. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20035}.
<a id="trace-20035"></a>
<a id="trace-20037"></a>
<a id="trace-20065"></a>
<a id="trace-20067"></a>
<a id="trace-20082"></a>
<a id="trace-20084"></a>
- 181.80s–183.30s (×6), actor 5, squad 0 (trace 20035): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 19866. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07560543660640075, 'next_transition': 20065}.
<a id="trace-20092"></a>
- 183.65s–183.65s (×1), actor 1, squad 0 (trace 20092): received platoon directive. Knowledge: actor memory at 180.00s, trace 19865. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15121079341252144, 'next_transition': 20148}.
<a id="trace-20148"></a>
<a id="trace-20150"></a>
<a id="trace-20172"></a>
<a id="trace-20174"></a>
<a id="trace-20269"></a>
<a id="trace-20271"></a>
<a id="trace-20284"></a>
<a id="trace-20286"></a>
<a id="trace-20306"></a>
<a id="trace-20308"></a>
<a id="trace-20321"></a>
<a id="trace-20323"></a>
<a id="trace-20339"></a>
<a id="trace-20341"></a>
<a id="trace-20383"></a>
<a id="trace-20385"></a>
<a id="trace-20401"></a>
<a id="trace-20403"></a>
<a id="trace-20411"></a>
<a id="trace-20413"></a>
<a id="trace-20485"></a>
<a id="trace-20487"></a>
<a id="trace-20498"></a>
<a id="trace-20500"></a>
<a id="trace-20514"></a>
<a id="trace-20516"></a>
<a id="trace-20546"></a>
<a id="trace-20548"></a>
<a id="trace-20577"></a>
<a id="trace-20579"></a>
<a id="trace-20596"></a>
<a id="trace-20598"></a>
<a id="trace-20606"></a>
<a id="trace-20608"></a>
<a id="trace-20709"></a>
<a id="trace-20711"></a>
<a id="trace-20721"></a>
<a id="trace-20723"></a>
- 183.80s–195.80s (×38), actor 5, squad 0 (trace 20148): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 19866. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3024215868250441, 'next_transition': 20172}.
<a id="trace-20731"></a>
- 196.05s–196.05s (×1), actor 1, squad 0 (trace 20731): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 195.00s, trace 20643. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20841}.
<a id="trace-20841"></a>
<a id="trace-20843"></a>
<a id="trace-20865"></a>
<a id="trace-20867"></a>
<a id="trace-20895"></a>
<a id="trace-20897"></a>
<a id="trace-20934"></a>
<a id="trace-20936"></a>
<a id="trace-20962"></a>
<a id="trace-20964"></a>
<a id="trace-21050"></a>
<a id="trace-21052"></a>
<a id="trace-21066"></a>
<a id="trace-21068"></a>
<a id="trace-21091"></a>
<a id="trace-21093"></a>
<a id="trace-21106"></a>
<a id="trace-21108"></a>
<a id="trace-21120"></a>
<a id="trace-21122"></a>
<a id="trace-21137"></a>
<a id="trace-21139"></a>
<a id="trace-21149"></a>
<a id="trace-21151"></a>
<a id="trace-21173"></a>
<a id="trace-21175"></a>
<a id="trace-21192"></a>
<a id="trace-21194"></a>
<a id="trace-21268"></a>
<a id="trace-21270"></a>
- 196.30s–205.30s (×30), actor 5, squad 0 (trace 20841): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 20644. Next observer evidence: {'until': 196.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000232652731868, 'next_transition': 20865}.
<a id="trace-20849"></a>
- 196.45s–196.45s (×1), actor 9, squad 1 (trace 20849): MoveTactically. Knowledge: actor memory at 195.00s, trace 20646. Next observer evidence: None.
<a id="trace-20850"></a>
- 196.45s–196.45s (×1), actor 9, squad 1 (trace 20850): traveling overwatch. Knowledge: actor memory at 195.00s, trace 20646. Next observer evidence: None.
<a id="trace-20851"></a>
- 196.45s–196.45s (×1), actor 9, squad 1 (trace 20851): current contact unknown for 10 s. Knowledge: actor memory at 195.00s, trace 20646. Next observer evidence: None.
<a id="trace-20855"></a>
- 196.50s–196.50s (×1), actor 9, squad 1 (trace 20855): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 195.00s, trace 20646. Next observer evidence: {'until': 226.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22616}.
<a id="trace-21277"></a>
- 205.40s–205.40s (×1), actor 1, squad 0 (trace 21277): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 205.00s, trace 21200. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.680003947643313, 'next_transition': 21307}.
<a id="trace-21307"></a>
<a id="trace-21309"></a>
<a id="trace-21321"></a>
<a id="trace-21323"></a>
<a id="trace-21339"></a>
<a id="trace-21341"></a>
<a id="trace-21355"></a>
<a id="trace-21357"></a>
<a id="trace-21371"></a>
<a id="trace-21373"></a>
<a id="trace-21390"></a>
<a id="trace-21392"></a>
<a id="trace-21417"></a>
<a id="trace-21419"></a>
<a id="trace-21489"></a>
<a id="trace-21491"></a>
<a id="trace-21516"></a>
<a id="trace-21518"></a>
<a id="trace-21532"></a>
<a id="trace-21534"></a>
<a id="trace-21550"></a>
<a id="trace-21552"></a>
- 206.30s–212.30s (×22), actor 5, squad 0 (trace 21307): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 21201. Next observer evidence: {'until': 206.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259991897704227, 'next_transition': 21321}.
<a id="trace-21559"></a>
- 212.65s–212.65s (×1), actor 1, squad 0 (trace 21559): ReactToContact: cover and return fire. Knowledge: actor memory at 210.00s, trace 21425. Next observer evidence: {'until': 212.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000089441608474, 'next_transition': 21691}.
<a id="trace-21560"></a>
- 212.65s–212.65s (×1), actor 1, squad 0 (trace 21560): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 210.00s, trace 21425. Next observer evidence: {'until': 212.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000089441608474, 'next_transition': 21691}.
<a id="trace-21691"></a>
<a id="trace-21693"></a>
<a id="trace-21706"></a>
<a id="trace-21708"></a>
<a id="trace-21721"></a>
<a id="trace-21723"></a>
<a id="trace-21738"></a>
<a id="trace-21740"></a>
<a id="trace-21754"></a>
<a id="trace-21756"></a>
<a id="trace-21830"></a>
<a id="trace-21832"></a>
- 212.80s–215.30s (×12), actor 5, squad 0 (trace 21691): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 21426. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199987360959818, 'next_transition': 21706}.
<a id="trace-21854"></a>
- 216.25s–216.25s (×1), actor 1, squad 0 (trace 21854): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 215.00s, trace 21763. Next observer evidence: None.
<a id="trace-21855"></a>
- 216.25s–216.25s (×1), actor 1, squad 0 (trace 21855): rearward bound: one stationary suppressing element. Knowledge: actor memory at 215.00s, trace 21763. Next observer evidence: None.
<a id="trace-21913"></a>
<a id="trace-21915"></a>
<a id="trace-21945"></a>
<a id="trace-21947"></a>
<a id="trace-21975"></a>
<a id="trace-21977"></a>
<a id="trace-22007"></a>
<a id="trace-22009"></a>
<a id="trace-22023"></a>
<a id="trace-22025"></a>
<a id="trace-22101"></a>
<a id="trace-22103"></a>
<a id="trace-22134"></a>
<a id="trace-22136"></a>
<a id="trace-22149"></a>
<a id="trace-22151"></a>
<a id="trace-22174"></a>
<a id="trace-22176"></a>
<a id="trace-22190"></a>
<a id="trace-22192"></a>
<a id="trace-22226"></a>
<a id="trace-22228"></a>
<a id="trace-22241"></a>
<a id="trace-22243"></a>
<a id="trace-22315"></a>
<a id="trace-22317"></a>
<a id="trace-22325"></a>
<a id="trace-22327"></a>
<a id="trace-22344"></a>
<a id="trace-22346"></a>
<a id="trace-22374"></a>
<a id="trace-22376"></a>
- 216.30s–227.30s (×32), actor 5, squad 0 (trace 21913): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 21764. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0499997052380536, 'next_transition': 21945}.
<a id="trace-22389"></a>
- 227.65s–227.65s (×1), actor 1, squad 0 (trace 22389): NeedSupport. Knowledge: actor memory at 225.00s, trace 22250. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22398}.
<a id="trace-22398"></a>
<a id="trace-22400"></a>
<a id="trace-22418"></a>
<a id="trace-22420"></a>
<a id="trace-22449"></a>
<a id="trace-22451"></a>
<a id="trace-22463"></a>
<a id="trace-22465"></a>
<a id="trace-22540"></a>
<a id="trace-22542"></a>
<a id="trace-22553"></a>
<a id="trace-22555"></a>
<a id="trace-22571"></a>
<a id="trace-22573"></a>
<a id="trace-22583"></a>
<a id="trace-22585"></a>
<a id="trace-22603"></a>
<a id="trace-22605"></a>
<a id="trace-22632"></a>
<a id="trace-22634"></a>
<a id="trace-22653"></a>
<a id="trace-22655"></a>
<a id="trace-22667"></a>
<a id="trace-22669"></a>
<a id="trace-22688"></a>
<a id="trace-22690"></a>
<a id="trace-22705"></a>
<a id="trace-22707"></a>
<a id="trace-22783"></a>
<a id="trace-22785"></a>
<a id="trace-22819"></a>
<a id="trace-22821"></a>
- 227.80s–236.30s (×32), actor 5, squad 0 (trace 22398): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 22251. Next observer evidence: {'until': 228.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15647021587367832, 'next_transition': 22418}.
<a id="trace-22616"></a>
- 232.60s–232.60s (×1), actor 9, squad 1 (trace 22616): ReactToContact: cover and return fire. Knowledge: actor memory at 230.00s, trace 22476. Next observer evidence: {'until': 235.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22803}.
<a id="trace-22617"></a>
- 232.60s–232.60s (×1), actor 9, squad 1 (trace 22617): bounding overwatch. Knowledge: actor memory at 230.00s, trace 22476. Next observer evidence: {'until': 235.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22803}.
<a id="trace-22618"></a>
- 232.60s–232.60s (×1), actor 9, squad 1 (trace 22618): new contact inside 100 m. Knowledge: actor memory at 230.00s, trace 22476. Next observer evidence: {'until': 235.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22803}.
<a id="trace-22803"></a>
- 235.90s–235.90s (×1), actor 9, squad 1 (trace 22803): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 235.00s, trace 22718. Next observer evidence: {'until': 247, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3504}.
<a id="trace-22805"></a>
- 235.90s–235.90s (×1), actor 9, squad 1 (trace 22805): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 235.00s, trace 22718. Next observer evidence: {'until': 247, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3504}.
<a id="trace-22828"></a>
- 236.30s–236.30s (×1), actor 1, squad 0 (trace 22828): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 235.00s, trace 22715. Next observer evidence: {'until': 236.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.663582131246249, 'next_transition': 22842}.
<a id="trace-22842"></a>
<a id="trace-22844"></a>
<a id="trace-22862"></a>
<a id="trace-22864"></a>
<a id="trace-22893"></a>
<a id="trace-22895"></a>
<a id="trace-22908"></a>
<a id="trace-22910"></a>
<a id="trace-22927"></a>
<a id="trace-22929"></a>
<a id="trace-22937"></a>
<a id="trace-22939"></a>
<a id="trace-23016"></a>
<a id="trace-23018"></a>
<a id="trace-23026"></a>
<a id="trace-23028"></a>
<a id="trace-23044"></a>
<a id="trace-23046"></a>
<a id="trace-23064"></a>
<a id="trace-23066"></a>
<a id="trace-23075"></a>
<a id="trace-23077"></a>
<a id="trace-23089"></a>
<a id="trace-23091"></a>
<a id="trace-23099"></a>
<a id="trace-23101"></a>
<a id="trace-23114"></a>
<a id="trace-23116"></a>
<a id="trace-23122"></a>
<a id="trace-23124"></a>
<a id="trace-23220"></a>
<a id="trace-23222"></a>
<a id="trace-23231"></a>
<a id="trace-23233"></a>
- 236.80s–246.80s (×34), actor 5, squad 0 (trace 22842): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 22716. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1424024271769593, 'next_transition': 22862}.
<a id="trace-3503"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (events line 3503): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3504"></a>
- 247.10s–247.10s (×1), actor 5, squad 1 (events line 3504): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23238"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (trace 23238): renew committed intent (75 s lifetime). Knowledge: actor memory at 247.10s, trace 23238. Next observer evidence: {'until': 247.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23262}.
<a id="trace-23239"></a>
- 247.10s–247.10s (×1), actor 5, squad 1 (trace 23239): renew committed intent (75 s lifetime). Knowledge: actor memory at 247.10s, trace 23239. Next observer evidence: {'until': 273, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24216}.
<a id="trace-23262"></a>
<a id="trace-23264"></a>
<a id="trace-23278"></a>
<a id="trace-23280"></a>
<a id="trace-23290"></a>
<a id="trace-23292"></a>
<a id="trace-23318"></a>
<a id="trace-23320"></a>
<a id="trace-23394"></a>
<a id="trace-23396"></a>
<a id="trace-23422"></a>
<a id="trace-23424"></a>
<a id="trace-23445"></a>
<a id="trace-23447"></a>
<a id="trace-23462"></a>
<a id="trace-23464"></a>
<a id="trace-23471"></a>
<a id="trace-23473"></a>
<a id="trace-23491"></a>
<a id="trace-23493"></a>
<a id="trace-23503"></a>
<a id="trace-23505"></a>
<a id="trace-23588"></a>
<a id="trace-23590"></a>
<a id="trace-23609"></a>
<a id="trace-23611"></a>
<a id="trace-23631"></a>
<a id="trace-23633"></a>
<a id="trace-23653"></a>
<a id="trace-23655"></a>
<a id="trace-23662"></a>
<a id="trace-23664"></a>
<a id="trace-23678"></a>
<a id="trace-23680"></a>
<a id="trace-23775"></a>
<a id="trace-23777"></a>
<a id="trace-23792"></a>
<a id="trace-23794"></a>
<a id="trace-23817"></a>
<a id="trace-23819"></a>
<a id="trace-23841"></a>
<a id="trace-23843"></a>
<a id="trace-23854"></a>
<a id="trace-23856"></a>
<a id="trace-23870"></a>
<a id="trace-23872"></a>
<a id="trace-23878"></a>
<a id="trace-23880"></a>
<a id="trace-23954"></a>
<a id="trace-23956"></a>
<a id="trace-23964"></a>
<a id="trace-23966"></a>
<a id="trace-23989"></a>
<a id="trace-23991"></a>
<a id="trace-24018"></a>
<a id="trace-24020"></a>
<a id="trace-24033"></a>
<a id="trace-24035"></a>
<a id="trace-24058"></a>
<a id="trace-24060"></a>
<a id="trace-24066"></a>
<a id="trace-24068"></a>
<a id="trace-24142"></a>
<a id="trace-24144"></a>
<a id="trace-24158"></a>
<a id="trace-24160"></a>
<a id="trace-24180"></a>
<a id="trace-24182"></a>
<a id="trace-24195"></a>
<a id="trace-24197"></a>
<a id="trace-24206"></a>
<a id="trace-24208"></a>
<a id="trace-24228"></a>
<a id="trace-24230"></a>
<a id="trace-24246"></a>
<a id="trace-24248"></a>
<a id="trace-24262"></a>
<a id="trace-24264"></a>
<a id="trace-24273"></a>
<a id="trace-24275"></a>
<a id="trace-24349"></a>
<a id="trace-24351"></a>
<a id="trace-24361"></a>
<a id="trace-24363"></a>
<a id="trace-24375"></a>
<a id="trace-24377"></a>
<a id="trace-24384"></a>
<a id="trace-24386"></a>
<a id="trace-24402"></a>
<a id="trace-24404"></a>
<a id="trace-24414"></a>
<a id="trace-24416"></a>
<a id="trace-24426"></a>
<a id="trace-24428"></a>
<a id="trace-24438"></a>
<a id="trace-24440"></a>
<a id="trace-24452"></a>
<a id="trace-24454"></a>
<a id="trace-24540"></a>
<a id="trace-24542"></a>
<a id="trace-24549"></a>
<a id="trace-24551"></a>
<a id="trace-24565"></a>
<a id="trace-24567"></a>
<a id="trace-24575"></a>
<a id="trace-24577"></a>
<a id="trace-24589"></a>
<a id="trace-24591"></a>
<a id="trace-24601"></a>
<a id="trace-24603"></a>
<a id="trace-24613"></a>
<a id="trace-24615"></a>
<a id="trace-24623"></a>
<a id="trace-24625"></a>
<a id="trace-24638"></a>
<a id="trace-24640"></a>
<a id="trace-24650"></a>
<a id="trace-24652"></a>
<a id="trace-24729"></a>
<a id="trace-24731"></a>
<a id="trace-24737"></a>
<a id="trace-24739"></a>
<a id="trace-24761"></a>
<a id="trace-24763"></a>
<a id="trace-24779"></a>
<a id="trace-24781"></a>
<a id="trace-24791"></a>
<a id="trace-24793"></a>
<a id="trace-24804"></a>
<a id="trace-24806"></a>
<a id="trace-24827"></a>
<a id="trace-24829"></a>
<a id="trace-24910"></a>
<a id="trace-24912"></a>
<a id="trace-24918"></a>
<a id="trace-24920"></a>
<a id="trace-24932"></a>
<a id="trace-24934"></a>
<a id="trace-24949"></a>
<a id="trace-24951"></a>
<a id="trace-24972"></a>
<a id="trace-24974"></a>
<a id="trace-24986"></a>
<a id="trace-24988"></a>
<a id="trace-25002"></a>
<a id="trace-25004"></a>
<a id="trace-25024"></a>
<a id="trace-25026"></a>
<a id="trace-25107"></a>
<a id="trace-25109"></a>
<a id="trace-25121"></a>
<a id="trace-25123"></a>
<a id="trace-25132"></a>
<a id="trace-25134"></a>
<a id="trace-25144"></a>
<a id="trace-25146"></a>
<a id="trace-25154"></a>
<a id="trace-25156"></a>
<a id="trace-25172"></a>
<a id="trace-25174"></a>
<a id="trace-25198"></a>
<a id="trace-25200"></a>
<a id="trace-25295"></a>
<a id="trace-25297"></a>
<a id="trace-25311"></a>
<a id="trace-25313"></a>
<a id="trace-25321"></a>
<a id="trace-25323"></a>
<a id="trace-25336"></a>
<a id="trace-25338"></a>
<a id="trace-25345"></a>
<a id="trace-25347"></a>
<a id="trace-25367"></a>
<a id="trace-25369"></a>
<a id="trace-25380"></a>
<a id="trace-25382"></a>
<a id="trace-25388"></a>
<a id="trace-25390"></a>
<a id="trace-25467"></a>
<a id="trace-25469"></a>
<a id="trace-25496"></a>
<a id="trace-25498"></a>
<a id="trace-25510"></a>
<a id="trace-25512"></a>
<a id="trace-25526"></a>
<a id="trace-25528"></a>
<a id="trace-25535"></a>
<a id="trace-25537"></a>
<a id="trace-25558"></a>
<a id="trace-25560"></a>
<a id="trace-25571"></a>
<a id="trace-25573"></a>
<a id="trace-25652"></a>
<a id="trace-25654"></a>
<a id="trace-25674"></a>
<a id="trace-25676"></a>
<a id="trace-25685"></a>
<a id="trace-25687"></a>
<a id="trace-25699"></a>
<a id="trace-25701"></a>
<a id="trace-25718"></a>
<a id="trace-25720"></a>
<a id="trace-25735"></a>
<a id="trace-25737"></a>
<a id="trace-25746"></a>
<a id="trace-25748"></a>
<a id="trace-25761"></a>
<a id="trace-25763"></a>
<a id="trace-25770"></a>
<a id="trace-25772"></a>
<a id="trace-25853"></a>
<a id="trace-25855"></a>
- 247.80s–315.80s (×212), actor 5, squad 0 (trace 23262): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 247.10s, trace 23239. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23278}.
<a id="trace-24216"></a>
- 273.05s–273.05s (×1), actor 9, squad 1 (trace 24216): MoveTactically. Knowledge: actor memory at 270.00s, trace 24076. Next observer evidence: None.
<a id="trace-24217"></a>
- 273.05s–273.05s (×1), actor 9, squad 1 (trace 24217): traveling overwatch. Knowledge: actor memory at 270.00s, trace 24076. Next observer evidence: None.
<a id="trace-24218"></a>
- 273.05s–273.05s (×1), actor 9, squad 1 (trace 24218): current contact unknown for 10 s. Knowledge: actor memory at 270.00s, trace 24076. Next observer evidence: None.
<a id="trace-24222"></a>
- 273.10s–273.10s (×1), actor 9, squad 1 (trace 24222): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 270.00s, trace 24076. Next observer evidence: {'until': 303, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4223}.
<a id="trace-4222"></a>
- 316.10s–316.10s (×1), actor 5, squad 0 (events line 4222): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4223"></a>
- 316.10s–316.10s (×1), actor 5, squad 1 (events line 4223): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25862"></a>
- 316.10s–316.10s (×1), actor 5, squad 0 (trace 25862): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.10s, trace 25862. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25873}.
<a id="trace-25863"></a>
- 316.10s–316.10s (×1), actor 5, squad 0 (trace 25863): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.10s, trace 25863. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25873}.
<a id="trace-25864"></a>
- 316.10s–316.10s (×1), actor 5, squad 1 (trace 25864): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.10s, trace 25864. Next observer evidence: {'until': 321, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26063}.
<a id="trace-25865"></a>
- 316.10s–316.10s (×1), actor 5, squad 1 (trace 25865): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.10s, trace 25865. Next observer evidence: {'until': 321, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26063}.
<a id="trace-25873"></a>
<a id="trace-25875"></a>
<a id="trace-25882"></a>
<a id="trace-25884"></a>
<a id="trace-25895"></a>
<a id="trace-25897"></a>
<a id="trace-25906"></a>
<a id="trace-25908"></a>
<a id="trace-25922"></a>
<a id="trace-25924"></a>
<a id="trace-25932"></a>
<a id="trace-25934"></a>
<a id="trace-25954"></a>
<a id="trace-25956"></a>
<a id="trace-25964"></a>
<a id="trace-25966"></a>
<a id="trace-26045"></a>
<a id="trace-26047"></a>
<a id="trace-26069"></a>
<a id="trace-26071"></a>
- 316.30s–321.30s (×20), actor 5, squad 0 (trace 25873): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 316.10s, trace 25865. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25882}.
<a id="trace-26063"></a>
- 321.05s–321.05s (×1), actor 9, squad 1 (trace 26063): received platoon directive. Knowledge: actor memory at 320.00s, trace 25979. Next observer evidence: {'until': 351, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-26079"></a>
- 321.70s–321.70s (×1), actor 1, squad 0 (trace 26079): MoveTactically. Knowledge: actor memory at 320.00s, trace 25976. Next observer evidence: {'until': 321.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26157}.
<a id="trace-26080"></a>
- 321.70s–321.70s (×1), actor 1, squad 0 (trace 26080): traveling overwatch. Knowledge: actor memory at 320.00s, trace 25976. Next observer evidence: {'until': 321.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26157}.
<a id="trace-26081"></a>
- 321.70s–321.70s (×1), actor 1, squad 0 (trace 26081): received platoon directive. Knowledge: actor memory at 320.00s, trace 25976. Next observer evidence: {'until': 321.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26157}.
<a id="trace-26157"></a>
<a id="trace-26159"></a>
<a id="trace-26169"></a>
<a id="trace-26171"></a>
<a id="trace-26182"></a>
<a id="trace-26184"></a>
<a id="trace-26195"></a>
<a id="trace-26197"></a>
<a id="trace-26206"></a>
<a id="trace-26208"></a>
<a id="trace-26222"></a>
<a id="trace-26224"></a>
<a id="trace-26236"></a>
<a id="trace-26238"></a>
<a id="trace-26344"></a>
<a id="trace-26346"></a>
<a id="trace-26369"></a>
<a id="trace-26371"></a>
<a id="trace-26385"></a>
<a id="trace-26387"></a>
<a id="trace-26417"></a>
<a id="trace-26419"></a>
<a id="trace-26431"></a>
<a id="trace-26433"></a>
<a id="trace-26526"></a>
<a id="trace-26528"></a>
<a id="trace-26541"></a>
<a id="trace-26543"></a>
<a id="trace-26566"></a>
<a id="trace-26568"></a>
<a id="trace-26593"></a>
<a id="trace-26595"></a>
- 321.80s–332.30s (×32), actor 5, squad 0 (trace 26157): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.00s, trace 25977. Next observer evidence: {'until': 322.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26169}.
<a id="trace-26604"></a>
- 332.75s–332.75s (×1), actor 1, squad 0 (trace 26604): ReactToContact: cover and return fire. Knowledge: actor memory at 330.00s, trace 26460. Next observer evidence: {'until': 332.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500586936613714, 'next_transition': 26735}.
<a id="trace-26605"></a>
- 332.75s–332.75s (×1), actor 1, squad 0 (trace 26605): bounding overwatch. Knowledge: actor memory at 330.00s, trace 26460. Next observer evidence: {'until': 332.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500586936613714, 'next_transition': 26735}.
<a id="trace-26606"></a>
- 332.75s–332.75s (×1), actor 1, squad 0 (trace 26606): new contact inside 100 m. Knowledge: actor memory at 330.00s, trace 26460. Next observer evidence: {'until': 332.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500586936613714, 'next_transition': 26735}.
<a id="trace-26735"></a>
<a id="trace-26737"></a>
- 332.80s–332.80s (×2), actor 5, squad 0 (trace 26735): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 26461. Next observer evidence: {'until': 333.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.8400026881275116, 'next_transition': 26885}.
<a id="trace-26742"></a>
- 332.80s–332.80s (×1), actor 1, squad 0 (trace 26742): new contact inside 100 m. Knowledge: actor memory at 330.00s, trace 26460. Next observer evidence: {'until': 333.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.8400026881275116, 'next_transition': 26885}.
<a id="trace-26885"></a>
<a id="trace-26887"></a>
<a id="trace-26897"></a>
<a id="trace-26899"></a>
<a id="trace-26908"></a>
<a id="trace-26910"></a>
<a id="trace-26988"></a>
<a id="trace-26990"></a>
<a id="trace-27007"></a>
<a id="trace-27009"></a>
<a id="trace-27018"></a>
<a id="trace-27020"></a>
<a id="trace-27032"></a>
<a id="trace-27034"></a>
<a id="trace-27060"></a>
<a id="trace-27062"></a>
<a id="trace-27073"></a>
<a id="trace-27075"></a>
<a id="trace-27174"></a>
<a id="trace-27184"></a>
<a id="trace-27197"></a>
<a id="trace-27206"></a>
<a id="trace-27218"></a>
<a id="trace-27227"></a>
<a id="trace-27242"></a>
<a id="trace-27252"></a>
<a id="trace-27263"></a>
<a id="trace-27273"></a>
<a id="trace-27356"></a>
<a id="trace-27372"></a>
<a id="trace-27394"></a>
<a id="trace-27403"></a>
<a id="trace-27425"></a>
<a id="trace-27439"></a>
<a id="trace-27515"></a>
<a id="trace-27528"></a>
<a id="trace-27535"></a>
<a id="trace-27548"></a>
<a id="trace-27555"></a>
<a id="trace-27573"></a>
<a id="trace-27583"></a>
<a id="trace-27608"></a>
<a id="trace-27679"></a>
<a id="trace-27687"></a>
<a id="trace-27698"></a>
<a id="trace-27705"></a>
<a id="trace-27718"></a>
<a id="trace-27730"></a>
<a id="trace-27739"></a>
<a id="trace-27750"></a>
<a id="trace-27763"></a>
- 333.30s–359.80s (×51), actor 5, squad 0 (trace 26885): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 26461. Next observer evidence: {'until': 333.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8899908385344846, 'next_transition': 26897}.

## Net delivery

266 matched order/radio deliveries; 465 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.445s; maximum 6.600s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3625: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3627: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3628: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3629: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3630: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3631: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3632: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3633: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3634: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3635: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3636: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4050: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4052: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4054: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4055: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4056: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4057: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4058: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4059: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4060: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4061: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4062: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4063: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 4770: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 4771: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 4772: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 4773: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4777: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4782: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4783: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 4785: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 4786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4787: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4788: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4789: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4790: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4791: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4792: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4793: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4794: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 4795: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 4796: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 8235: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 8236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 8237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 8238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 8239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 8240: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 8241: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 8242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 8243: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 8244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 8245: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 8246: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 8247: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 8248: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 8249: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 8250: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 8251: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 8252: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 8253: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 8254: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 8746: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 8747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 8748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 8749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 8750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 8751: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 8752: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 8753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 8754: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 8755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 8756: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 8757: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 8758: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 8759: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 8760: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 8761: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 8762: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 8763: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 8764: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 8765: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 9232: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 9233: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 9234: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 9235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 9236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 9237: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 9238: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 9239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 9240: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 9241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 9242: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 9243: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 9244: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 9245: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 9246: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 9247: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 9248: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 9249: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 9250: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 9251: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 10233: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 10234: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 10235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 10236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 10237: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 10238: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 10239: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 10240: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 10241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 10242: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 10243: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 10244: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 10245: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 10246: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 10247: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 10248: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 10249: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 10250: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 10251: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 11268: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 11269: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 11270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 11271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 11272: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 11273: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 11274: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 11275: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 11276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 11277: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 11278: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 11279: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 11280: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 11281: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 11282: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 11283: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 11284: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 11285: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 11286: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 12229: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 12230: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 12231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 12232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 12233: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 12234: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 12235: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 12236: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 12237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 12238: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 12239: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 12240: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 12241: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 12242: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 12243: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 12244: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 12245: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 12246: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 12247: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 12714: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 12715: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 12716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 12717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 12718: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 12719: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 12720: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 12721: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 12722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 12723: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 12724: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 12725: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 12726: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 12727: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 12728: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 12729: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 12730: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 12731: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 12732: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 13230: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 13231: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 13232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 13233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 13234: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 13235: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 13236: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 13237: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 13238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 13239: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 13240: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 13241: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 13242: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 13243: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 13244: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 13245: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 13246: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 13247: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 13248: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 13901: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 13902: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 13903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 13904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 13905: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 13906: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 13907: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 13908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 13909: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 13910: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 13911: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 13912: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 13913: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 13914: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 13915: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 13916: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 13917: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 13918: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 14362: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 14363: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 14364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 14365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 14366: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 14367: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 14368: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 14369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 14370: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 14371: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 14372: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 14373: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 14374: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 14375: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 14376: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 14377: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 14378: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 14379: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 14665: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 14666: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 14667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 14668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 14669: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14670: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 14671: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 14672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 14673: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 14674: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 14675: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14676: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14677: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14678: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14679: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14680: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 14681: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 14682: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 14943: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 14944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 14945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 14946: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 14947: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 14948: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 14949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 14950: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 14951: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 14952: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 14953: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 14954: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 14955: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 14956: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 14957: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 14958: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 14959: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 15338: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 15339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15341: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 15342: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 15343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 15344: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15345: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15346: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15347: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15348: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15349: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15350: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15351: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15352: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15353: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 15547: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 15548: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 15583: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 15584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 15585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15586: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 15587: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 15588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 15589: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15590: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15591: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15592: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15593: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15594: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15595: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15596: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15597: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15598: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 15897: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 15898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 15899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 15900: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 15901: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 15902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 15903: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 15904: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 15905: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 15906: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 15907: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 15908: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 15909: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 15910: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 15911: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 15912: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 16273: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 16274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 16275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 16276: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 16277: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 16278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 16279: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16280: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 16281: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 16282: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 16283: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16284: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16285: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 16286: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 16287: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 16288: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 16568: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 16569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 16570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 16571: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 16572: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 16573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 16574: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 16575: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 16576: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 16577: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 16578: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 16579: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 16580: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 16581: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 16582: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 16583: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 16818: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 16819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 16820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 16821: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 16822: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 16823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 16824: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 16825: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 16826: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 16827: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 16828: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 16829: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 16830: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 16831: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 16832: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 16833: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 17212: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 17213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 17214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 17215: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 17216: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 17217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 17218: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 17219: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 17220: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 17221: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 17222: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 17223: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 17224: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 17225: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 17226: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 17227: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 17445: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 17446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 17447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 17448: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 17449: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 17450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 17451: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 17452: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 17453: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 17454: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 17455: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 17456: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 17457: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 17458: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 17459: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 17460: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 17754: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 17755: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 17756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 17757: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 17758: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 17759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 17760: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 17761: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 17762: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 17763: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 17764: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 17765: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 17766: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 17767: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 17768: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 17769: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 18075: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 18076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 18077: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 18078: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 18079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 18080: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 18081: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 18082: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 18083: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 18084: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 18085: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 18086: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 18087: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 18088: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 18089: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 18430: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 18431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 18432: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 18433: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 18434: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 18435: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 18436: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 18437: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 18438: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 18439: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 18440: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 18441: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 18442: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 18443: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 18444: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 18667: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 18668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 18669: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 18670: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 18671: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 18672: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 18673: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 18674: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 18675: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 18676: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 18677: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 18678: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 18679: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 18680: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 18681: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 18929: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 18930: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 18931: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 18932: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 18933: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 18934: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 18935: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 18936: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 18937: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 18938: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 18939: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 18940: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 18941: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 18942: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 19396: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 19397: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 19398: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 19399: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 19400: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 19401: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 19402: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 19403: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 19404: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 19405: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 19406: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 19407: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 19408: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 19409: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 19651: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 19652: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 19653: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 19654: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 19655: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 19656: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 19657: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 19658: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 19659: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 19660: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 19661: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 19662: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 19663: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.05s leader 5, trace 19799: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.05s leader 5, trace 19800: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.05s leader 5, trace 19801: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 19865: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 19866: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 19867: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 19868: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 19869: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 19870: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 19871: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 19872: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 19873: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 19874: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 19875: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 19876: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 19877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 20204: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 20205: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 20206: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 20207: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 20208: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 20209: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 20210: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 20211: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 20212: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 20213: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 20214: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 20215: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 20216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 20419: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 20420: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 20421: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 20422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 20423: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 20424: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 20425: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 20426: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 20427: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 20428: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 20429: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 20430: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 20431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 20643: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 20644: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 20645: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 20646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 20647: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 20648: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 20649: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 20650: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 20651: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 20652: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 20653: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 20654: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 20655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 20981: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 20982: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 20983: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 20984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 20985: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 20986: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 20987: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 20988: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 20989: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 20990: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 20991: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 20992: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 20993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 21200: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 21201: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 21202: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 21203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 21204: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 21205: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 21206: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 21207: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 21208: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 21209: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 21210: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 21211: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 21212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 21425: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 21426: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 21427: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 21428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 21429: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 21430: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 21431: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 21432: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 21433: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 21434: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 21435: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 21436: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 21437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 21763: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 21764: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 21765: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 21766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 21767: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 21768: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 21769: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 21770: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 21771: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 21772: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 21773: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 21774: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 21775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 22032: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 22033: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 22034: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 22035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 22036: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 22037: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 22038: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 22039: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 22040: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 22041: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 22042: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 22043: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 22044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 22250: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 22251: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 22252: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 22253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 22254: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 22255: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 22256: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 22257: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 22258: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 22259: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 22260: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 22261: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 22262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 22473: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 22474: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 22475: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 22476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 22477: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 22478: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 22479: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 22480: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 22481: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 22482: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 22483: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 22484: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 22485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 22715: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 22716: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 22717: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 22718: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 22719: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 22720: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 22721: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 22722: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 22723: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 22724: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 22725: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 22726: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 22727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 22946: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 22947: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 22948: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 22949: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 22950: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 22951: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 22952: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 22953: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 22954: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 22955: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 22956: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 22957: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 22958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 23130: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 23131: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 23132: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 23133: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 23134: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 23135: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 23136: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 23137: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 23138: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 23139: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 23140: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 23141: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 23142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.10s leader 5, trace 23238: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.10s leader 5, trace 23239: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 23325: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 23326: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 23327: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 23328: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 23329: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 23330: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 23331: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 23332: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 23333: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 23334: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 23335: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 23336: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 23337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 23510: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 23511: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 23512: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 23513: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 23514: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 23515: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 23516: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 23517: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 23518: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 23519: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 23520: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 23521: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 23522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 23694: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 23695: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 23696: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 23697: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 23698: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 23699: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 23700: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 23701: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 23702: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 23703: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 23704: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 23705: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 23706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 23885: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 23886: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 23887: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 23888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 23889: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 23890: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 23891: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 23892: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 23893: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 23894: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 23895: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 23896: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 23897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 24073: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 24074: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 24075: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 24076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 24077: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 24078: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 24079: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 24080: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 24081: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 24082: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 24083: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 24084: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 24085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 24281: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 24282: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 24283: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 24284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 24285: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 24286: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 24287: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 24288: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 24289: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 24290: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 24291: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 24292: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 24293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 24467: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 24468: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 24469: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 24470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 24471: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 24472: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 24473: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 24474: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 24475: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 24476: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 24477: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 24478: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 24479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 24657: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 24658: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 24659: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 24660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 24661: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 24662: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 24663: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 24664: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 24665: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 24666: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 24667: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 24668: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 24669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 24840: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 24841: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 24842: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 24843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 24844: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 24845: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 24846: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 24847: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 24848: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 24849: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 24850: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 24851: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 24852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 25031: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 25032: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 25033: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 25034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 25035: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 25036: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 25037: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 25038: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 25039: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 25040: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 25041: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 25042: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 25043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 25213: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 25214: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 25215: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 25216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 25217: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 25218: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 25219: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 25220: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 25221: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 25222: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 25223: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 25224: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 25225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 25397: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 25398: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 25399: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 25400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 25401: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 25402: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 25403: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 25404: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 25405: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 25406: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 25407: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 25408: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 25409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 25584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 25585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 25586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 25587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 25588: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 25589: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 25590: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 25591: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 25592: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 25593: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 25594: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 25595: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 25596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 25777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 25778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 25779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 25780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 25781: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 25782: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 25783: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 25784: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 25785: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 25786: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 25787: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 25788: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 25789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.10s leader 5, trace 25862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.10s leader 5, trace 25863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.10s leader 5, trace 25864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.10s leader 5, trace 25865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 25976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 25977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 25978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 25979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 25980: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 25981: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 25982: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 25983: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 25984: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 25985: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 25986: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 25987: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 25988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 26249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 26250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 26251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 26252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 26253: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 26254: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 26255: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 26256: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 26257: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 26258: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 26259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 26260: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 26261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 26460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 26461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 26462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 26463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 26464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 26465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 26466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 26467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 26468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 26469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 26470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 26471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 26472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 26924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 26925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 26926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 26927: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 26928: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 26929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 26930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 26931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 26932: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 26933: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 26934: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 26935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 27108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 27109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 27110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 27111: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 27112: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 27113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 27114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 27115: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 27116: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 27117: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 27118: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 27119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 27280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 27281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 27282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 27283: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 27284: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 27285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 27286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 27287: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 27288: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 27289: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 27290: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 27291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 27444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 27445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 27446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 27447: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 27448: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 27449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 27450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 27451: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 27452: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 27453: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 27454: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 27455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 27615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 27616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 27617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 27618: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 27619: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 27620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 27621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 27622: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 27623: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 27624: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 27625: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 27626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 27770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 27771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 27772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 27773: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 27774: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 27775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 27776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 27777: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 27778: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 27779: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 27780: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 27781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Reed incapacitated
- 1: Soren killed in action
- 1: Bren incapacitated
- 1: Ash incapacitated
- 1: Orin killed in action
- 1: Tern killed in action
- 1: Rook killed in action

## Outcome attribution

- 141.05s, evidence 17629: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520037266423949, 'next_transition': 17638}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
