# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/9/107/good-ember/battle-107-1789673816605115404`

## Battle summary

**Ember** · 360 s · 322 shots.

### Turning points

- 26.4s, squad 4: contact (events line 252). First recorded contact.
- 36.9s, squad 1: withdrawal ([trace 5352](#trace-5352)). 56.9s, squad 1: contact broken or rally reached: Occupy and report strength.
- 48.5s, squad 1: help call ([trace 6099](#trace-6099)). No completion observed before termination.
- 86.1s, squad 0: help call ([trace 11340](#trace-11340)). No completion observed before termination.
- 131.9s, squad 0: help call ([trace 17208](#trace-17208)). No completion observed before termination.
- 140.2s, squad 1: withdrawal ([trace 17574](#trace-17574)). 160.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 152.7s, squad 0: withdrawal ([trace 18513](#trace-18513)). 173.7s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 3 further drill types; withdrew; 43 shots, 5/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 0 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 185 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 94 shots, 0/2 lost.

### Decisions and attribution

At 93.5s, squad 0 chose prepared a base of fire ([trace 11911](#trace-11911)), followed by 1 shots and 0 own casualties; estimate 10.7 against 0 distinct squad-reported contacts; At 93.5s, squad 0 chose advanced tactically ([trace 13549](#trace-13549)), followed by 1 shots and 0 own casualties; estimate 10.7 against 0 distinct squad-reported contacts; At 0.1s, squad 1 chose advanced tactically ([trace 333](#trace-333)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1354](#trace-1354)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1374}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1356](#trace-1356)). Following evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.749963365469624, 'next_transition': 2015}.

### Communication

188 matched deliveries (mean 0.47s, max 5.25s); 470 explicit drops; 5 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 26.35s, squad 4, contact, evidence events line 252: First recorded contact; .
- 36.85s, squad 1, withdrawal, evidence 5352: BreakContact: believed ratio at least two without superiority; 56.9s, squad 1: contact broken or rally reached: Occupy and report strength.
- 48.50s, squad 1, help call, evidence 6099: NeedSupport; No completion observed before termination.
- 86.05s, squad 0, help call, evidence 11340: NeedSupport; No completion observed before termination.
- 131.90s, squad 0, help call, evidence 17208: NeedSupport; No completion observed before termination.
- 140.15s, squad 1, withdrawal, evidence 17574: BreakContact: believed ratio at least two without superiority; 160.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 152.70s, squad 0, withdrawal, evidence 18513: BreakContact: believed ratio at least two without superiority; 173.7s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.947654322201183, 'next_transition': 833}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.947654322201183, 'next_transition': 833}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.947654322201183, 'next_transition': 833}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004744041103216, 'next_transition': 1146}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004744041103216, 'next_transition': 1146}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004744041103216, 'next_transition': 1146}.
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
<a id="trace-837"></a>
<a id="trace-839"></a>
<a id="trace-868"></a>
<a id="trace-870"></a>
<a id="trace-899"></a>
<a id="trace-901"></a>
<a id="trace-922"></a>
<a id="trace-924"></a>
<a id="trace-950"></a>
<a id="trace-952"></a>
<a id="trace-981"></a>
<a id="trace-983"></a>
<a id="trace-1008"></a>
<a id="trace-1010"></a>
<a id="trace-1035"></a>
<a id="trace-1037"></a>
<a id="trace-1052"></a>
<a id="trace-1054"></a>
<a id="trace-1143"></a>
<a id="trace-1145"></a>
<a id="trace-1266"></a>
<a id="trace-1268"></a>
<a id="trace-1290"></a>
<a id="trace-1292"></a>
<a id="trace-1314"></a>
<a id="trace-1316"></a>
<a id="trace-1351"></a>
<a id="trace-1353"></a>
<a id="trace-1378"></a>
<a id="trace-1380"></a>
<a id="trace-1717"></a>
<a id="trace-1719"></a>
<a id="trace-1742"></a>
<a id="trace-1744"></a>
<a id="trace-1778"></a>
<a id="trace-1780"></a>
<a id="trace-1798"></a>
<a id="trace-1800"></a>
<a id="trace-1885"></a>
<a id="trace-1887"></a>
<a id="trace-1923"></a>
<a id="trace-1925"></a>
<a id="trace-1959"></a>
<a id="trace-1961"></a>
<a id="trace-1992"></a>
<a id="trace-1994"></a>
<a id="trace-2011"></a>
<a id="trace-2013"></a>
<a id="trace-2124"></a>
<a id="trace-2126"></a>
<a id="trace-2155"></a>
<a id="trace-2157"></a>
<a id="trace-2185"></a>
<a id="trace-2187"></a>
<a id="trace-2217"></a>
<a id="trace-2219"></a>
<a id="trace-2245"></a>
<a id="trace-2247"></a>
<a id="trace-2339"></a>
<a id="trace-2341"></a>
<a id="trace-2369"></a>
<a id="trace-2371"></a>
<a id="trace-2395"></a>
<a id="trace-2397"></a>
<a id="trace-2430"></a>
<a id="trace-2432"></a>
<a id="trace-2460"></a>
<a id="trace-2462"></a>
<a id="trace-2483"></a>
<a id="trace-2485"></a>
<a id="trace-2515"></a>
<a id="trace-2517"></a>
<a id="trace-2856"></a>
<a id="trace-2858"></a>
<a id="trace-2878"></a>
<a id="trace-2880"></a>
<a id="trace-2905"></a>
<a id="trace-2907"></a>
<a id="trace-2996"></a>
<a id="trace-2998"></a>
<a id="trace-3010"></a>
<a id="trace-3012"></a>
<a id="trace-3056"></a>
<a id="trace-3058"></a>
<a id="trace-3510"></a>
<a id="trace-3512"></a>
<a id="trace-3553"></a>
<a id="trace-3555"></a>
<a id="trace-3586"></a>
<a id="trace-3588"></a>
<a id="trace-3626"></a>
<a id="trace-3628"></a>
<a id="trace-3668"></a>
<a id="trace-3670"></a>
<a id="trace-3687"></a>
<a id="trace-3689"></a>
<a id="trace-3713"></a>
<a id="trace-3715"></a>
<a id="trace-3814"></a>
<a id="trace-3816"></a>
<a id="trace-3828"></a>
<a id="trace-3830"></a>
<a id="trace-3850"></a>
<a id="trace-3852"></a>
<a id="trace-3864"></a>
<a id="trace-3866"></a>
<a id="trace-3889"></a>
<a id="trace-3891"></a>
<a id="trace-3909"></a>
<a id="trace-3911"></a>
<a id="trace-3930"></a>
<a id="trace-3932"></a>
<a id="trace-4233"></a>
<a id="trace-4235"></a>
<a id="trace-4257"></a>
<a id="trace-4259"></a>
<a id="trace-4280"></a>
<a id="trace-4282"></a>
<a id="trace-4809"></a>
<a id="trace-4811"></a>
<a id="trace-4831"></a>
<a id="trace-4833"></a>
<a id="trace-4879"></a>
<a id="trace-4881"></a>
<a id="trace-5343"></a>
<a id="trace-5345"></a>
<a id="trace-5548"></a>
<a id="trace-5550"></a>
<a id="trace-5580"></a>
<a id="trace-5582"></a>
<a id="trace-5611"></a>
<a id="trace-5613"></a>
<a id="trace-5630"></a>
<a id="trace-5632"></a>
<a id="trace-5659"></a>
<a id="trace-5661"></a>
<a id="trace-5676"></a>
<a id="trace-5678"></a>
<a id="trace-5773"></a>
<a id="trace-5775"></a>
<a id="trace-5798"></a>
<a id="trace-5800"></a>
<a id="trace-5821"></a>
<a id="trace-5823"></a>
<a id="trace-5833"></a>
<a id="trace-5835"></a>
<a id="trace-5856"></a>
<a id="trace-5858"></a>
<a id="trace-5868"></a>
<a id="trace-5870"></a>
<a id="trace-5891"></a>
<a id="trace-5893"></a>
<a id="trace-5900"></a>
<a id="trace-5902"></a>
<a id="trace-5914"></a>
<a id="trace-5916"></a>
<a id="trace-5922"></a>
<a id="trace-5924"></a>
<a id="trace-6003"></a>
<a id="trace-6005"></a>
<a id="trace-6012"></a>
<a id="trace-6014"></a>
<a id="trace-6031"></a>
<a id="trace-6033"></a>
<a id="trace-6042"></a>
<a id="trace-6044"></a>
<a id="trace-6061"></a>
<a id="trace-6063"></a>
<a id="trace-6073"></a>
<a id="trace-6075"></a>
<a id="trace-6093"></a>
<a id="trace-6095"></a>
<a id="trace-6167"></a>
<a id="trace-6169"></a>
<a id="trace-6179"></a>
<a id="trace-6181"></a>
<a id="trace-6192"></a>
<a id="trace-6194"></a>
<a id="trace-6274"></a>
<a id="trace-6276"></a>
<a id="trace-6291"></a>
<a id="trace-6293"></a>
<a id="trace-6312"></a>
<a id="trace-6314"></a>
<a id="trace-6327"></a>
<a id="trace-6329"></a>
<a id="trace-6341"></a>
<a id="trace-6343"></a>
<a id="trace-6353"></a>
<a id="trace-6355"></a>
<a id="trace-6369"></a>
<a id="trace-6371"></a>
<a id="trace-6382"></a>
<a id="trace-6384"></a>
<a id="trace-6480"></a>
<a id="trace-6482"></a>
<a id="trace-6494"></a>
<a id="trace-6496"></a>
<a id="trace-6579"></a>
<a id="trace-6581"></a>
<a id="trace-6592"></a>
<a id="trace-6594"></a>
<a id="trace-6609"></a>
<a id="trace-6611"></a>
<a id="trace-6626"></a>
<a id="trace-6628"></a>
<a id="trace-6774"></a>
<a id="trace-6776"></a>
<a id="trace-6799"></a>
<a id="trace-6801"></a>
<a id="trace-6834"></a>
<a id="trace-6836"></a>
<a id="trace-6856"></a>
<a id="trace-6858"></a>
<a id="trace-6891"></a>
<a id="trace-6893"></a>
<a id="trace-6913"></a>
<a id="trace-6915"></a>
<a id="trace-6995"></a>
<a id="trace-6997"></a>
<a id="trace-7256"></a>
<a id="trace-7258"></a>
<a id="trace-7273"></a>
<a id="trace-7275"></a>
<a id="trace-7292"></a>
<a id="trace-7294"></a>
<a id="trace-7313"></a>
<a id="trace-7315"></a>
<a id="trace-7327"></a>
<a id="trace-7329"></a>
<a id="trace-7352"></a>
<a id="trace-7354"></a>
<a id="trace-7368"></a>
<a id="trace-7370"></a>
<a id="trace-7393"></a>
<a id="trace-7395"></a>
<a id="trace-7410"></a>
<a id="trace-7412"></a>
<a id="trace-7496"></a>
<a id="trace-7498"></a>
<a id="trace-7510"></a>
<a id="trace-7512"></a>
<a id="trace-7530"></a>
<a id="trace-7532"></a>
<a id="trace-7544"></a>
<a id="trace-7546"></a>
<a id="trace-7686"></a>
<a id="trace-7688"></a>
<a id="trace-8064"></a>
<a id="trace-8066"></a>
<a id="trace-8092"></a>
<a id="trace-8094"></a>
<a id="trace-8129"></a>
<a id="trace-8131"></a>
<a id="trace-8162"></a>
<a id="trace-8164"></a>
<a id="trace-8192"></a>
<a id="trace-8194"></a>
<a id="trace-8343"></a>
<a id="trace-8345"></a>
<a id="trace-8362"></a>
<a id="trace-8364"></a>
<a id="trace-8738"></a>
<a id="trace-8740"></a>
<a id="trace-8759"></a>
<a id="trace-8761"></a>
<a id="trace-8794"></a>
<a id="trace-8796"></a>
<a id="trace-8809"></a>
<a id="trace-8811"></a>
<a id="trace-8829"></a>
<a id="trace-8831"></a>
<a id="trace-8855"></a>
<a id="trace-8857"></a>
<a id="trace-8877"></a>
<a id="trace-8879"></a>
<a id="trace-10678"></a>
<a id="trace-10680"></a>
<a id="trace-10764"></a>
<a id="trace-10766"></a>
<a id="trace-10782"></a>
<a id="trace-10784"></a>
<a id="trace-10807"></a>
<a id="trace-10809"></a>
<a id="trace-10820"></a>
<a id="trace-10822"></a>
<a id="trace-10852"></a>
<a id="trace-10854"></a>
<a id="trace-10868"></a>
<a id="trace-10870"></a>
<a id="trace-10886"></a>
<a id="trace-10888"></a>
<a id="trace-10906"></a>
<a id="trace-10908"></a>
<a id="trace-10928"></a>
<a id="trace-10930"></a>
<a id="trace-10940"></a>
<a id="trace-10942"></a>
<a id="trace-11020"></a>
<a id="trace-11022"></a>
<a id="trace-11034"></a>
<a id="trace-11036"></a>
<a id="trace-11053"></a>
<a id="trace-11055"></a>
<a id="trace-11071"></a>
<a id="trace-11073"></a>
<a id="trace-11091"></a>
<a id="trace-11093"></a>
<a id="trace-11106"></a>
<a id="trace-11108"></a>
<a id="trace-11125"></a>
<a id="trace-11127"></a>
<a id="trace-11197"></a>
<a id="trace-11199"></a>
<a id="trace-11218"></a>
<a id="trace-11220"></a>
<a id="trace-11235"></a>
<a id="trace-11237"></a>
<a id="trace-11316"></a>
<a id="trace-11318"></a>
<a id="trace-11327"></a>
<a id="trace-11329"></a>
<a id="trace-11359"></a>
<a id="trace-11361"></a>
<a id="trace-11371"></a>
<a id="trace-11373"></a>
<a id="trace-11528"></a>
<a id="trace-11530"></a>
<a id="trace-11544"></a>
<a id="trace-11546"></a>
<a id="trace-11575"></a>
<a id="trace-11577"></a>
<a id="trace-11591"></a>
<a id="trace-11593"></a>
<a id="trace-11619"></a>
<a id="trace-11621"></a>
<a id="trace-11637"></a>
<a id="trace-11639"></a>
<a id="trace-11774"></a>
<a id="trace-11776"></a>
<a id="trace-11787"></a>
<a id="trace-11789"></a>
<a id="trace-11811"></a>
<a id="trace-11813"></a>
<a id="trace-11828"></a>
<a id="trace-11830"></a>
<a id="trace-11857"></a>
<a id="trace-11859"></a>
<a id="trace-11872"></a>
<a id="trace-11874"></a>
<a id="trace-11898"></a>
<a id="trace-11900"></a>
<a id="trace-13646"></a>
<a id="trace-13648"></a>
<a id="trace-13675"></a>
<a id="trace-13677"></a>
<a id="trace-13697"></a>
<a id="trace-13699"></a>
<a id="trace-13777"></a>
<a id="trace-13779"></a>
<a id="trace-13793"></a>
<a id="trace-13795"></a>
<a id="trace-13818"></a>
<a id="trace-13820"></a>
<a id="trace-13842"></a>
<a id="trace-13844"></a>
<a id="trace-13864"></a>
<a id="trace-13866"></a>
<a id="trace-13873"></a>
<a id="trace-13875"></a>
<a id="trace-13894"></a>
<a id="trace-13896"></a>
<a id="trace-13909"></a>
<a id="trace-13911"></a>
<a id="trace-13927"></a>
<a id="trace-13929"></a>
<a id="trace-13942"></a>
<a id="trace-13944"></a>
<a id="trace-14024"></a>
<a id="trace-14026"></a>
<a id="trace-14035"></a>
<a id="trace-14037"></a>
<a id="trace-15697"></a>
<a id="trace-15699"></a>
<a id="trace-15711"></a>
<a id="trace-15713"></a>
<a id="trace-15737"></a>
<a id="trace-15739"></a>
<a id="trace-15765"></a>
<a id="trace-15767"></a>
<a id="trace-15786"></a>
<a id="trace-15788"></a>
<a id="trace-15805"></a>
<a id="trace-15807"></a>
<a id="trace-15835"></a>
<a id="trace-15837"></a>
<a id="trace-15855"></a>
<a id="trace-15857"></a>
<a id="trace-15940"></a>
<a id="trace-15942"></a>
<a id="trace-15953"></a>
<a id="trace-15955"></a>
<a id="trace-15974"></a>
<a id="trace-15976"></a>
<a id="trace-15988"></a>
<a id="trace-15990"></a>
<a id="trace-16008"></a>
<a id="trace-16010"></a>
<a id="trace-16019"></a>
<a id="trace-16021"></a>
<a id="trace-16043"></a>
<a id="trace-16045"></a>
<a id="trace-16057"></a>
<a id="trace-16059"></a>
<a id="trace-16088"></a>
<a id="trace-16090"></a>
<a id="trace-16101"></a>
<a id="trace-16103"></a>
<a id="trace-16180"></a>
<a id="trace-16182"></a>
<a id="trace-16198"></a>
<a id="trace-16200"></a>
<a id="trace-16226"></a>
<a id="trace-16228"></a>
<a id="trace-16239"></a>
<a id="trace-16241"></a>
<a id="trace-16265"></a>
<a id="trace-16267"></a>
<a id="trace-16282"></a>
<a id="trace-16284"></a>
<a id="trace-16298"></a>
<a id="trace-16300"></a>
<a id="trace-16319"></a>
<a id="trace-16321"></a>
<a id="trace-16344"></a>
<a id="trace-16346"></a>
<a id="trace-16358"></a>
<a id="trace-16360"></a>
<a id="trace-16444"></a>
<a id="trace-16446"></a>
<a id="trace-16466"></a>
<a id="trace-16468"></a>
<a id="trace-16488"></a>
<a id="trace-16490"></a>
<a id="trace-16504"></a>
<a id="trace-16506"></a>
<a id="trace-16522"></a>
<a id="trace-16524"></a>
<a id="trace-16534"></a>
<a id="trace-16536"></a>
<a id="trace-16550"></a>
<a id="trace-16552"></a>
<a id="trace-16561"></a>
<a id="trace-16563"></a>
<a id="trace-16581"></a>
<a id="trace-16583"></a>
<a id="trace-16596"></a>
<a id="trace-16598"></a>
<a id="trace-16678"></a>
<a id="trace-16680"></a>
<a id="trace-16699"></a>
<a id="trace-16701"></a>
<a id="trace-16721"></a>
<a id="trace-16723"></a>
<a id="trace-16733"></a>
<a id="trace-16735"></a>
<a id="trace-16756"></a>
<a id="trace-16758"></a>
<a id="trace-16773"></a>
<a id="trace-16775"></a>
<a id="trace-16788"></a>
<a id="trace-16790"></a>
<a id="trace-16803"></a>
<a id="trace-16805"></a>
<a id="trace-16826"></a>
<a id="trace-16828"></a>
<a id="trace-16840"></a>
<a id="trace-16842"></a>
<a id="trace-16925"></a>
<a id="trace-16927"></a>
<a id="trace-16944"></a>
<a id="trace-16946"></a>
<a id="trace-16965"></a>
<a id="trace-16967"></a>
<a id="trace-16978"></a>
<a id="trace-16980"></a>
<a id="trace-16996"></a>
<a id="trace-16998"></a>
<a id="trace-17007"></a>
<a id="trace-17009"></a>
<a id="trace-17026"></a>
<a id="trace-17028"></a>
<a id="trace-17040"></a>
<a id="trace-17042"></a>
<a id="trace-17057"></a>
<a id="trace-17059"></a>
<a id="trace-17069"></a>
<a id="trace-17071"></a>
<a id="trace-17152"></a>
<a id="trace-17154"></a>
<a id="trace-17168"></a>
<a id="trace-17170"></a>
<a id="trace-17187"></a>
<a id="trace-17189"></a>
<a id="trace-17202"></a>
<a id="trace-17204"></a>
<a id="trace-17232"></a>
<a id="trace-17234"></a>
<a id="trace-17252"></a>
<a id="trace-17254"></a>
<a id="trace-17271"></a>
<a id="trace-17273"></a>
<a id="trace-17281"></a>
<a id="trace-17283"></a>
<a id="trace-17300"></a>
<a id="trace-17302"></a>
<a id="trace-17315"></a>
<a id="trace-17317"></a>
<a id="trace-17391"></a>
<a id="trace-17393"></a>
<a id="trace-17409"></a>
<a id="trace-17411"></a>
<a id="trace-17432"></a>
<a id="trace-17434"></a>
<a id="trace-17444"></a>
<a id="trace-17446"></a>
<a id="trace-17478"></a>
<a id="trace-17480"></a>
<a id="trace-17493"></a>
<a id="trace-17495"></a>
<a id="trace-17511"></a>
<a id="trace-17513"></a>
<a id="trace-17524"></a>
<a id="trace-17526"></a>
<a id="trace-17537"></a>
<a id="trace-17539"></a>
<a id="trace-17549"></a>
<a id="trace-17551"></a>
<a id="trace-17679"></a>
<a id="trace-17681"></a>
<a id="trace-17707"></a>
<a id="trace-17709"></a>
<a id="trace-17723"></a>
<a id="trace-17725"></a>
<a id="trace-17742"></a>
<a id="trace-17744"></a>
<a id="trace-17764"></a>
<a id="trace-17766"></a>
<a id="trace-17775"></a>
<a id="trace-17777"></a>
<a id="trace-17790"></a>
<a id="trace-17792"></a>
<a id="trace-17807"></a>
<a id="trace-17809"></a>
<a id="trace-17827"></a>
<a id="trace-17829"></a>
<a id="trace-17849"></a>
<a id="trace-17851"></a>
<a id="trace-17927"></a>
<a id="trace-17929"></a>
<a id="trace-17943"></a>
<a id="trace-17945"></a>
<a id="trace-17962"></a>
<a id="trace-17964"></a>
<a id="trace-17978"></a>
<a id="trace-17980"></a>
<a id="trace-17996"></a>
<a id="trace-17998"></a>
<a id="trace-18010"></a>
<a id="trace-18012"></a>
<a id="trace-18282"></a>
<a id="trace-18284"></a>
<a id="trace-18302"></a>
<a id="trace-18304"></a>
<a id="trace-18325"></a>
<a id="trace-18327"></a>
<a id="trace-18341"></a>
<a id="trace-18343"></a>
<a id="trace-18425"></a>
<a id="trace-18427"></a>
<a id="trace-18444"></a>
<a id="trace-18446"></a>
<a id="trace-18463"></a>
<a id="trace-18465"></a>
<a id="trace-18481"></a>
<a id="trace-18483"></a>
<a id="trace-18502"></a>
<a id="trace-18504"></a>
<a id="trace-18701"></a>
<a id="trace-18703"></a>
<a id="trace-18717"></a>
<a id="trace-18719"></a>
<a id="trace-18735"></a>
<a id="trace-18737"></a>
<a id="trace-18754"></a>
<a id="trace-18756"></a>
<a id="trace-18773"></a>
<a id="trace-18775"></a>
<a id="trace-18850"></a>
<a id="trace-18852"></a>
<a id="trace-18867"></a>
<a id="trace-18869"></a>
<a id="trace-18890"></a>
<a id="trace-18892"></a>
<a id="trace-18914"></a>
<a id="trace-18916"></a>
<a id="trace-18935"></a>
<a id="trace-18937"></a>
<a id="trace-18947"></a>
<a id="trace-18949"></a>
<a id="trace-18969"></a>
<a id="trace-18971"></a>
<a id="trace-18984"></a>
<a id="trace-18986"></a>
<a id="trace-19000"></a>
<a id="trace-19002"></a>
<a id="trace-19014"></a>
<a id="trace-19016"></a>
<a id="trace-19098"></a>
<a id="trace-19100"></a>
<a id="trace-19123"></a>
<a id="trace-19125"></a>
<a id="trace-19139"></a>
<a id="trace-19141"></a>
<a id="trace-19156"></a>
<a id="trace-19158"></a>
<a id="trace-19179"></a>
<a id="trace-19181"></a>
<a id="trace-19195"></a>
<a id="trace-19197"></a>
<a id="trace-19214"></a>
<a id="trace-19216"></a>
<a id="trace-19227"></a>
<a id="trace-19229"></a>
<a id="trace-19252"></a>
<a id="trace-19254"></a>
<a id="trace-19325"></a>
<a id="trace-19327"></a>
<a id="trace-19402"></a>
<a id="trace-19404"></a>
<a id="trace-19420"></a>
<a id="trace-19422"></a>
<a id="trace-19438"></a>
<a id="trace-19440"></a>
<a id="trace-19450"></a>
<a id="trace-19452"></a>
<a id="trace-19469"></a>
<a id="trace-19471"></a>
<a id="trace-19477"></a>
<a id="trace-19479"></a>
<a id="trace-19491"></a>
<a id="trace-19493"></a>
<a id="trace-19502"></a>
<a id="trace-19504"></a>
<a id="trace-19519"></a>
<a id="trace-19521"></a>
<a id="trace-19530"></a>
<a id="trace-19532"></a>
<a id="trace-19606"></a>
<a id="trace-19608"></a>
<a id="trace-19623"></a>
<a id="trace-19625"></a>
<a id="trace-19637"></a>
<a id="trace-19639"></a>
<a id="trace-19649"></a>
<a id="trace-19651"></a>
<a id="trace-19669"></a>
<a id="trace-19671"></a>
<a id="trace-19679"></a>
<a id="trace-19681"></a>
<a id="trace-19694"></a>
<a id="trace-19696"></a>
<a id="trace-19710"></a>
<a id="trace-19712"></a>
<a id="trace-19724"></a>
<a id="trace-19726"></a>
<a id="trace-19737"></a>
<a id="trace-19739"></a>
<a id="trace-19810"></a>
<a id="trace-19812"></a>
<a id="trace-19823"></a>
<a id="trace-19825"></a>
<a id="trace-19838"></a>
<a id="trace-19840"></a>
<a id="trace-19848"></a>
<a id="trace-19850"></a>
<a id="trace-19866"></a>
<a id="trace-19868"></a>
<a id="trace-19873"></a>
<a id="trace-19875"></a>
<a id="trace-19889"></a>
<a id="trace-19891"></a>
<a id="trace-19898"></a>
<a id="trace-19900"></a>
<a id="trace-19912"></a>
<a id="trace-19914"></a>
<a id="trace-19922"></a>
<a id="trace-19924"></a>
<a id="trace-19995"></a>
<a id="trace-19997"></a>
<a id="trace-20007"></a>
<a id="trace-20009"></a>
<a id="trace-20019"></a>
<a id="trace-20021"></a>
<a id="trace-20029"></a>
<a id="trace-20031"></a>
<a id="trace-20046"></a>
<a id="trace-20048"></a>
<a id="trace-20055"></a>
<a id="trace-20057"></a>
<a id="trace-20075"></a>
<a id="trace-20077"></a>
<a id="trace-20090"></a>
<a id="trace-20092"></a>
<a id="trace-20103"></a>
<a id="trace-20105"></a>
<a id="trace-20114"></a>
<a id="trace-20116"></a>
<a id="trace-20189"></a>
<a id="trace-20191"></a>
<a id="trace-20209"></a>
<a id="trace-20211"></a>
<a id="trace-20224"></a>
<a id="trace-20226"></a>
<a id="trace-20233"></a>
<a id="trace-20235"></a>
<a id="trace-20250"></a>
<a id="trace-20252"></a>
<a id="trace-20257"></a>
<a id="trace-20259"></a>
<a id="trace-20268"></a>
<a id="trace-20270"></a>
<a id="trace-20281"></a>
<a id="trace-20283"></a>
<a id="trace-20294"></a>
<a id="trace-20296"></a>
<a id="trace-20305"></a>
<a id="trace-20307"></a>
<a id="trace-20376"></a>
<a id="trace-20378"></a>
<a id="trace-20388"></a>
<a id="trace-20390"></a>
<a id="trace-20403"></a>
<a id="trace-20405"></a>
<a id="trace-20412"></a>
<a id="trace-20414"></a>
<a id="trace-20432"></a>
<a id="trace-20434"></a>
<a id="trace-20450"></a>
<a id="trace-20452"></a>
<a id="trace-20465"></a>
<a id="trace-20467"></a>
<a id="trace-20476"></a>
<a id="trace-20478"></a>
<a id="trace-20487"></a>
<a id="trace-20489"></a>
<a id="trace-20496"></a>
<a id="trace-20498"></a>
<a id="trace-20568"></a>
<a id="trace-20570"></a>
<a id="trace-20578"></a>
<a id="trace-20580"></a>
<a id="trace-20591"></a>
<a id="trace-20593"></a>
<a id="trace-20600"></a>
<a id="trace-20602"></a>
<a id="trace-20618"></a>
<a id="trace-20620"></a>
<a id="trace-20627"></a>
<a id="trace-20629"></a>
<a id="trace-20642"></a>
<a id="trace-20644"></a>
<a id="trace-20656"></a>
<a id="trace-20658"></a>
<a id="trace-20672"></a>
<a id="trace-20674"></a>
<a id="trace-20680"></a>
<a id="trace-20682"></a>
<a id="trace-20756"></a>
<a id="trace-20758"></a>
<a id="trace-20769"></a>
<a id="trace-20771"></a>
<a id="trace-20780"></a>
<a id="trace-20782"></a>
<a id="trace-20791"></a>
<a id="trace-20793"></a>
<a id="trace-20808"></a>
<a id="trace-20810"></a>
<a id="trace-20817"></a>
<a id="trace-20819"></a>
<a id="trace-20830"></a>
<a id="trace-20832"></a>
<a id="trace-20844"></a>
<a id="trace-20846"></a>
<a id="trace-20857"></a>
<a id="trace-20859"></a>
<a id="trace-20869"></a>
<a id="trace-20871"></a>
<a id="trace-20942"></a>
<a id="trace-20944"></a>
<a id="trace-20953"></a>
<a id="trace-20955"></a>
<a id="trace-20965"></a>
<a id="trace-20967"></a>
<a id="trace-20975"></a>
<a id="trace-20977"></a>
<a id="trace-21003"></a>
<a id="trace-21005"></a>
<a id="trace-21013"></a>
<a id="trace-21015"></a>
<a id="trace-21027"></a>
<a id="trace-21029"></a>
<a id="trace-21038"></a>
<a id="trace-21040"></a>
<a id="trace-21049"></a>
<a id="trace-21051"></a>
<a id="trace-21060"></a>
<a id="trace-21062"></a>
<a id="trace-21133"></a>
<a id="trace-21135"></a>
<a id="trace-21141"></a>
<a id="trace-21143"></a>
<a id="trace-21155"></a>
<a id="trace-21157"></a>
<a id="trace-21164"></a>
<a id="trace-21166"></a>
<a id="trace-21187"></a>
<a id="trace-21189"></a>
<a id="trace-21196"></a>
<a id="trace-21198"></a>
<a id="trace-21209"></a>
<a id="trace-21211"></a>
<a id="trace-21228"></a>
<a id="trace-21230"></a>
<a id="trace-21245"></a>
<a id="trace-21247"></a>
<a id="trace-21255"></a>
<a id="trace-21257"></a>
<a id="trace-21327"></a>
<a id="trace-21329"></a>
<a id="trace-21335"></a>
<a id="trace-21337"></a>
<a id="trace-21348"></a>
<a id="trace-21350"></a>
<a id="trace-21357"></a>
<a id="trace-21359"></a>
<a id="trace-21375"></a>
<a id="trace-21377"></a>
<a id="trace-21382"></a>
<a id="trace-21384"></a>
<a id="trace-21396"></a>
<a id="trace-21398"></a>
<a id="trace-21408"></a>
<a id="trace-21410"></a>
<a id="trace-21424"></a>
<a id="trace-21426"></a>
<a id="trace-21434"></a>
<a id="trace-21436"></a>
<a id="trace-21504"></a>
<a id="trace-21506"></a>
<a id="trace-21515"></a>
<a id="trace-21517"></a>
<a id="trace-21534"></a>
<a id="trace-21536"></a>
<a id="trace-21549"></a>
<a id="trace-21551"></a>
<a id="trace-21563"></a>
<a id="trace-21565"></a>
<a id="trace-21573"></a>
<a id="trace-21575"></a>
<a id="trace-21587"></a>
<a id="trace-21589"></a>
<a id="trace-21597"></a>
<a id="trace-21599"></a>
<a id="trace-21610"></a>
<a id="trace-21612"></a>
<a id="trace-21622"></a>
<a id="trace-21624"></a>
<a id="trace-21695"></a>
<a id="trace-21697"></a>
<a id="trace-21705"></a>
<a id="trace-21707"></a>
<a id="trace-21717"></a>
<a id="trace-21719"></a>
<a id="trace-21728"></a>
<a id="trace-21730"></a>
<a id="trace-21744"></a>
<a id="trace-21746"></a>
<a id="trace-21754"></a>
<a id="trace-21756"></a>
<a id="trace-21781"></a>
<a id="trace-21783"></a>
<a id="trace-21789"></a>
<a id="trace-21791"></a>
<a id="trace-21803"></a>
<a id="trace-21805"></a>
<a id="trace-21813"></a>
<a id="trace-21815"></a>
<a id="trace-21886"></a>
<a id="trace-21888"></a>
<a id="trace-21896"></a>
<a id="trace-21898"></a>
<a id="trace-21910"></a>
<a id="trace-21912"></a>
<a id="trace-21923"></a>
<a id="trace-21925"></a>
<a id="trace-21939"></a>
<a id="trace-21941"></a>
<a id="trace-21948"></a>
<a id="trace-21950"></a>
<a id="trace-21964"></a>
<a id="trace-21966"></a>
<a id="trace-21974"></a>
<a id="trace-21976"></a>
<a id="trace-21988"></a>
<a id="trace-21990"></a>
<a id="trace-22009"></a>
<a id="trace-22011"></a>
<a id="trace-22082"></a>
<a id="trace-22084"></a>
<a id="trace-22090"></a>
<a id="trace-22092"></a>
<a id="trace-22103"></a>
<a id="trace-22105"></a>
<a id="trace-22175"></a>
<a id="trace-22177"></a>
<a id="trace-22191"></a>
<a id="trace-22193"></a>
<a id="trace-22204"></a>
<a id="trace-22206"></a>
<a id="trace-22220"></a>
<a id="trace-22222"></a>
<a id="trace-22231"></a>
<a id="trace-22233"></a>
<a id="trace-22244"></a>
<a id="trace-22246"></a>
<a id="trace-22257"></a>
<a id="trace-22259"></a>
<a id="trace-22329"></a>
<a id="trace-22331"></a>
<a id="trace-22342"></a>
<a id="trace-22344"></a>
<a id="trace-22357"></a>
<a id="trace-22359"></a>
<a id="trace-22370"></a>
<a id="trace-22372"></a>
<a id="trace-22394"></a>
<a id="trace-22396"></a>
<a id="trace-22464"></a>
<a id="trace-22466"></a>
<a id="trace-22480"></a>
<a id="trace-22482"></a>
<a id="trace-22492"></a>
<a id="trace-22494"></a>
<a id="trace-22507"></a>
<a id="trace-22509"></a>
<a id="trace-22519"></a>
<a id="trace-22521"></a>
<a id="trace-22590"></a>
<a id="trace-22592"></a>
<a id="trace-22600"></a>
<a id="trace-22602"></a>
<a id="trace-22613"></a>
<a id="trace-22615"></a>
<a id="trace-22624"></a>
<a id="trace-22626"></a>
<a id="trace-22646"></a>
<a id="trace-22648"></a>
<a id="trace-22660"></a>
<a id="trace-22662"></a>
<a id="trace-22677"></a>
<a id="trace-22679"></a>
<a id="trace-22743"></a>
<a id="trace-22745"></a>
<a id="trace-22767"></a>
<a id="trace-22769"></a>
<a id="trace-22782"></a>
<a id="trace-22784"></a>
<a id="trace-22853"></a>
<a id="trace-22855"></a>
<a id="trace-22863"></a>
<a id="trace-22865"></a>
<a id="trace-22875"></a>
<a id="trace-22877"></a>
<a id="trace-22890"></a>
<a id="trace-22892"></a>
<a id="trace-22906"></a>
<a id="trace-22908"></a>
<a id="trace-22924"></a>
<a id="trace-22926"></a>
<a id="trace-22942"></a>
<a id="trace-22944"></a>
<a id="trace-22953"></a>
<a id="trace-22955"></a>
<a id="trace-22972"></a>
<a id="trace-22974"></a>
<a id="trace-22987"></a>
<a id="trace-22989"></a>
<a id="trace-23054"></a>
<a id="trace-23056"></a>
<a id="trace-23074"></a>
<a id="trace-23076"></a>
<a id="trace-23095"></a>
<a id="trace-23097"></a>
<a id="trace-23106"></a>
<a id="trace-23108"></a>
<a id="trace-23124"></a>
<a id="trace-23126"></a>
<a id="trace-23133"></a>
<a id="trace-23135"></a>
<a id="trace-23154"></a>
<a id="trace-23156"></a>
<a id="trace-23163"></a>
<a id="trace-23165"></a>
<a id="trace-23177"></a>
<a id="trace-23179"></a>
<a id="trace-23185"></a>
<a id="trace-23187"></a>
<a id="trace-23252"></a>
<a id="trace-23254"></a>
<a id="trace-23263"></a>
<a id="trace-23265"></a>
<a id="trace-23287"></a>
<a id="trace-23289"></a>
<a id="trace-23294"></a>
<a id="trace-23296"></a>
<a id="trace-23311"></a>
<a id="trace-23313"></a>
<a id="trace-23321"></a>
<a id="trace-23323"></a>
<a id="trace-23344"></a>
<a id="trace-23346"></a>
<a id="trace-23356"></a>
<a id="trace-23358"></a>
<a id="trace-23372"></a>
<a id="trace-23374"></a>
<a id="trace-23385"></a>
<a id="trace-23387"></a>
<a id="trace-23454"></a>
<a id="trace-23456"></a>
<a id="trace-23464"></a>
<a id="trace-23466"></a>
<a id="trace-23477"></a>
<a id="trace-23479"></a>
<a id="trace-23486"></a>
<a id="trace-23488"></a>
<a id="trace-23501"></a>
<a id="trace-23503"></a>
<a id="trace-23512"></a>
<a id="trace-23514"></a>
<a id="trace-23526"></a>
<a id="trace-23528"></a>
<a id="trace-23536"></a>
<a id="trace-23538"></a>
<a id="trace-23551"></a>
<a id="trace-23553"></a>
<a id="trace-23564"></a>
<a id="trace-23566"></a>
<a id="trace-23645"></a>
<a id="trace-23647"></a>
<a id="trace-23657"></a>
<a id="trace-23659"></a>
<a id="trace-23671"></a>
<a id="trace-23673"></a>
<a id="trace-23680"></a>
<a id="trace-23682"></a>
<a id="trace-23696"></a>
<a id="trace-23698"></a>
<a id="trace-23706"></a>
<a id="trace-23708"></a>
<a id="trace-23719"></a>
<a id="trace-23721"></a>
<a id="trace-23729"></a>
<a id="trace-23731"></a>
<a id="trace-23745"></a>
<a id="trace-23747"></a>
<a id="trace-23755"></a>
<a id="trace-23757"></a>
<a id="trace-23827"></a>
<a id="trace-23829"></a>
<a id="trace-23838"></a>
<a id="trace-23840"></a>
<a id="trace-23854"></a>
<a id="trace-23856"></a>
<a id="trace-23872"></a>
<a id="trace-23874"></a>
<a id="trace-23893"></a>
<a id="trace-23895"></a>
<a id="trace-23902"></a>
<a id="trace-23904"></a>
<a id="trace-23919"></a>
<a id="trace-23921"></a>
<a id="trace-23928"></a>
<a id="trace-23930"></a>
<a id="trace-23943"></a>
<a id="trace-23945"></a>
<a id="trace-23950"></a>
<a id="trace-23952"></a>
<a id="trace-24020"></a>
<a id="trace-24022"></a>
<a id="trace-24030"></a>
<a id="trace-24032"></a>
<a id="trace-24045"></a>
<a id="trace-24047"></a>
<a id="trace-24054"></a>
<a id="trace-24056"></a>
<a id="trace-24074"></a>
<a id="trace-24076"></a>
<a id="trace-24085"></a>
<a id="trace-24087"></a>
<a id="trace-24100"></a>
<a id="trace-24102"></a>
<a id="trace-24112"></a>
<a id="trace-24114"></a>
<a id="trace-24134"></a>
<a id="trace-24136"></a>
<a id="trace-24150"></a>
<a id="trace-24152"></a>
<a id="trace-24219"></a>
<a id="trace-24221"></a>
<a id="trace-24229"></a>
<a id="trace-24231"></a>
<a id="trace-24240"></a>
<a id="trace-24242"></a>
<a id="trace-24249"></a>
<a id="trace-24251"></a>
<a id="trace-24266"></a>
<a id="trace-24268"></a>
<a id="trace-24278"></a>
<a id="trace-24280"></a>
<a id="trace-24291"></a>
<a id="trace-24293"></a>
<a id="trace-24299"></a>
<a id="trace-24301"></a>
<a id="trace-24315"></a>
<a id="trace-24317"></a>
<a id="trace-24327"></a>
<a id="trace-24329"></a>
<a id="trace-24396"></a>
<a id="trace-24398"></a>
<a id="trace-24408"></a>
<a id="trace-24410"></a>
<a id="trace-24436"></a>
<a id="trace-24438"></a>
<a id="trace-24445"></a>
<a id="trace-24447"></a>
<a id="trace-24459"></a>
<a id="trace-24461"></a>
<a id="trace-24469"></a>
<a id="trace-24471"></a>
<a id="trace-24482"></a>
<a id="trace-24484"></a>
<a id="trace-24492"></a>
<a id="trace-24494"></a>
<a id="trace-24507"></a>
<a id="trace-24509"></a>
<a id="trace-24516"></a>
<a id="trace-24518"></a>
<a id="trace-24584"></a>
<a id="trace-24586"></a>
<a id="trace-24594"></a>
<a id="trace-24596"></a>
<a id="trace-24613"></a>
<a id="trace-24615"></a>
<a id="trace-24622"></a>
<a id="trace-24624"></a>
<a id="trace-24640"></a>
<a id="trace-24642"></a>
<a id="trace-24662"></a>
<a id="trace-24664"></a>
<a id="trace-24678"></a>
<a id="trace-24680"></a>
<a id="trace-24685"></a>
<a id="trace-24687"></a>
<a id="trace-24700"></a>
<a id="trace-24702"></a>
<a id="trace-24707"></a>
<a id="trace-24709"></a>
<a id="trace-24775"></a>
<a id="trace-24777"></a>
<a id="trace-24787"></a>
<a id="trace-24789"></a>
<a id="trace-24800"></a>
<a id="trace-24802"></a>
<a id="trace-24809"></a>
<a id="trace-24811"></a>
<a id="trace-24826"></a>
<a id="trace-24828"></a>
<a id="trace-24839"></a>
<a id="trace-24841"></a>
<a id="trace-24853"></a>
<a id="trace-24855"></a>
<a id="trace-24864"></a>
<a id="trace-24866"></a>
<a id="trace-24882"></a>
<a id="trace-24884"></a>
<a id="trace-24894"></a>
<a id="trace-24896"></a>
<a id="trace-24969"></a>
<a id="trace-24971"></a>
<a id="trace-24981"></a>
<a id="trace-24983"></a>
<a id="trace-24993"></a>
<a id="trace-24995"></a>
<a id="trace-25003"></a>
<a id="trace-25005"></a>
<a id="trace-25021"></a>
<a id="trace-25023"></a>
<a id="trace-25031"></a>
<a id="trace-25033"></a>
<a id="trace-25042"></a>
<a id="trace-25044"></a>
<a id="trace-25052"></a>
<a id="trace-25054"></a>
<a id="trace-25070"></a>
<a id="trace-25072"></a>
<a id="trace-25077"></a>
<a id="trace-25079"></a>
<a id="trace-25148"></a>
<a id="trace-25150"></a>
<a id="trace-25159"></a>
<a id="trace-25161"></a>
<a id="trace-25175"></a>
<a id="trace-25177"></a>
<a id="trace-25184"></a>
<a id="trace-25186"></a>
<a id="trace-25213"></a>
<a id="trace-25215"></a>
<a id="trace-25222"></a>
<a id="trace-25224"></a>
<a id="trace-25236"></a>
<a id="trace-25238"></a>
<a id="trace-25245"></a>
<a id="trace-25247"></a>
<a id="trace-25262"></a>
<a id="trace-25264"></a>
<a id="trace-25271"></a>
<a id="trace-25273"></a>
<a id="trace-25339"></a>
<a id="trace-25341"></a>
<a id="trace-25351"></a>
<a id="trace-25353"></a>
<a id="trace-25365"></a>
<a id="trace-25367"></a>
<a id="trace-25374"></a>
<a id="trace-25376"></a>
<a id="trace-25395"></a>
<a id="trace-25397"></a>
<a id="trace-25408"></a>
<a id="trace-25410"></a>
<a id="trace-25421"></a>
<a id="trace-25423"></a>
<a id="trace-25439"></a>
<a id="trace-25441"></a>
<a id="trace-25457"></a>
<a id="trace-25459"></a>
<a id="trace-25466"></a>
<a id="trace-25468"></a>
<a id="trace-25536"></a>
<a id="trace-25538"></a>
<a id="trace-25547"></a>
<a id="trace-25549"></a>
<a id="trace-25559"></a>
<a id="trace-25561"></a>
<a id="trace-25569"></a>
<a id="trace-25571"></a>
<a id="trace-25587"></a>
<a id="trace-25589"></a>
<a id="trace-25598"></a>
<a id="trace-25600"></a>
<a id="trace-25611"></a>
<a id="trace-25613"></a>
<a id="trace-25622"></a>
<a id="trace-25624"></a>
<a id="trace-25650"></a>
<a id="trace-25652"></a>
<a id="trace-25717"></a>
<a id="trace-25719"></a>
<a id="trace-25729"></a>
<a id="trace-25731"></a>
<a id="trace-25747"></a>
<a id="trace-25749"></a>
<a id="trace-25760"></a>
<a id="trace-25762"></a>
<a id="trace-25779"></a>
<a id="trace-25781"></a>
<a id="trace-25786"></a>
<a id="trace-25788"></a>
<a id="trace-25800"></a>
<a id="trace-25802"></a>
<a id="trace-25809"></a>
<a id="trace-25811"></a>
<a id="trace-25825"></a>
<a id="trace-25827"></a>
<a id="trace-25832"></a>
<a id="trace-25834"></a>
<a id="trace-25907"></a>
<a id="trace-25909"></a>
<a id="trace-25921"></a>
<a id="trace-25923"></a>
<a id="trace-25931"></a>
<a id="trace-25933"></a>
<a id="trace-25943"></a>
<a id="trace-25945"></a>
<a id="trace-25960"></a>
<a id="trace-25962"></a>
<a id="trace-25969"></a>
<a id="trace-25971"></a>
<a id="trace-25995"></a>
<a id="trace-25997"></a>
<a id="trace-26006"></a>
<a id="trace-26008"></a>
<a id="trace-26021"></a>
<a id="trace-26023"></a>
<a id="trace-26028"></a>
<a id="trace-26030"></a>
<a id="trace-26098"></a>
<a id="trace-26100"></a>
<a id="trace-26120"></a>
<a id="trace-26122"></a>
<a id="trace-26131"></a>
<a id="trace-26133"></a>
<a id="trace-26151"></a>
<a id="trace-26153"></a>
<a id="trace-26158"></a>
<a id="trace-26160"></a>
<a id="trace-26174"></a>
<a id="trace-26176"></a>
<a id="trace-26184"></a>
<a id="trace-26186"></a>
<a id="trace-26196"></a>
<a id="trace-26198"></a>
<a id="trace-26213"></a>
<a id="trace-26215"></a>
<a id="trace-26287"></a>
<a id="trace-26289"></a>
<a id="trace-26298"></a>
<a id="trace-26300"></a>
<a id="trace-26310"></a>
<a id="trace-26312"></a>
<a id="trace-26320"></a>
<a id="trace-26322"></a>
<a id="trace-26340"></a>
<a id="trace-26342"></a>
<a id="trace-26349"></a>
<a id="trace-26351"></a>
<a id="trace-26364"></a>
<a id="trace-26366"></a>
<a id="trace-26373"></a>
<a id="trace-26375"></a>
<a id="trace-26391"></a>
<a id="trace-26393"></a>
<a id="trace-26400"></a>
<a id="trace-26402"></a>
<a id="trace-26471"></a>
<a id="trace-26473"></a>
<a id="trace-26492"></a>
<a id="trace-26494"></a>
<a id="trace-26502"></a>
<a id="trace-26504"></a>
<a id="trace-26527"></a>
<a id="trace-26529"></a>
<a id="trace-26539"></a>
<a id="trace-26541"></a>
<a id="trace-26551"></a>
<a id="trace-26553"></a>
<a id="trace-26562"></a>
<a id="trace-26564"></a>
<a id="trace-26576"></a>
<a id="trace-26578"></a>
<a id="trace-26585"></a>
<a id="trace-26587"></a>
<a id="trace-26654"></a>
<a id="trace-26656"></a>
<a id="trace-26668"></a>
<a id="trace-26670"></a>
<a id="trace-26680"></a>
<a id="trace-26682"></a>
<a id="trace-26689"></a>
<a id="trace-26691"></a>
<a id="trace-26706"></a>
<a id="trace-26708"></a>
<a id="trace-26718"></a>
<a id="trace-26720"></a>
<a id="trace-26732"></a>
<a id="trace-26734"></a>
<a id="trace-26744"></a>
<a id="trace-26746"></a>
<a id="trace-26768"></a>
<a id="trace-26770"></a>
<a id="trace-26778"></a>
<a id="trace-26780"></a>
<a id="trace-26849"></a>
<a id="trace-26851"></a>
<a id="trace-26861"></a>
<a id="trace-26863"></a>
<a id="trace-26873"></a>
<a id="trace-26875"></a>
<a id="trace-26884"></a>
<a id="trace-26886"></a>
<a id="trace-26909"></a>
<a id="trace-26911"></a>
<a id="trace-26922"></a>
<a id="trace-26924"></a>
<a id="trace-26932"></a>
<a id="trace-26934"></a>
<a id="trace-26949"></a>
<a id="trace-26951"></a>
<a id="trace-26959"></a>
<a id="trace-26961"></a>
- 1.60s–359.80s (×1424), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5000628314521076, 'next_transition': 608}.
<a id="trace-833"></a>
<a id="trace-835"></a>
<a id="trace-918"></a>
<a id="trace-920"></a>
<a id="trace-946"></a>
<a id="trace-948"></a>
<a id="trace-977"></a>
<a id="trace-979"></a>
<a id="trace-1004"></a>
<a id="trace-1006"></a>
<a id="trace-1048"></a>
<a id="trace-1050"></a>
<a id="trace-1139"></a>
<a id="trace-1141"></a>
<a id="trace-1262"></a>
<a id="trace-1264"></a>
<a id="trace-1286"></a>
<a id="trace-1288"></a>
<a id="trace-1310"></a>
<a id="trace-1312"></a>
<a id="trace-1347"></a>
<a id="trace-1349"></a>
- 5.70s–12.20s (×22), actor 5, squad 0 (trace 833): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.649369495133105, 'next_transition': 918}.
<a id="trace-1146"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1146): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1068. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.565201738372403, 'next_transition': 136}.
<a id="trace-135"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 135): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1374}.
<a id="trace-136"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 136): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.749963365469624, 'next_transition': 2015}.
<a id="trace-1354"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1354): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1354. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1374}.
<a id="trace-1355"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1355): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1355. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1374}.
<a id="trace-1356"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1356): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1356. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.749963365469624, 'next_transition': 2015}.
<a id="trace-1357"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1357): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1357. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.749963365469624, 'next_transition': 2015}.
<a id="trace-1374"></a>
<a id="trace-1376"></a>
- 12.70s–12.70s (×2), actor 5, squad 0 (trace 1374): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1357. Next observer evidence: None.
<a id="trace-1384"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1384): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1060. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47248663605439545, 'next_transition': 1713}.
<a id="trace-1713"></a>
<a id="trace-1715"></a>
<a id="trace-1738"></a>
<a id="trace-1740"></a>
<a id="trace-1881"></a>
<a id="trace-1883"></a>
<a id="trace-1955"></a>
<a id="trace-1957"></a>
<a id="trace-2120"></a>
<a id="trace-2122"></a>
<a id="trace-2181"></a>
<a id="trace-2183"></a>
<a id="trace-2213"></a>
<a id="trace-2215"></a>
<a id="trace-2241"></a>
<a id="trace-2243"></a>
<a id="trace-2335"></a>
<a id="trace-2337"></a>
<a id="trace-2365"></a>
<a id="trace-2367"></a>
<a id="trace-2426"></a>
<a id="trace-2428"></a>
<a id="trace-2456"></a>
<a id="trace-2458"></a>
<a id="trace-2479"></a>
<a id="trace-2481"></a>
<a id="trace-2511"></a>
<a id="trace-2513"></a>
- 13.20s–23.25s (×28), actor 5, squad 0 (trace 1713): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1357. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41345096266724496, 'next_transition': 1738}.
<a id="trace-2015"></a>
- 17.30s–17.30s (×1), actor 8, squad 1 (trace 2015): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1818. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.578614456542626, 'next_transition': 3067}.
<a id="trace-2016"></a>
- 17.30s–17.30s (×1), actor 8, squad 1 (trace 2016): received platoon directive. Knowledge: actor memory at 15.00s, trace 1818. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.578614456542626, 'next_transition': 3067}.
<a id="trace-2519"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2519): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2256. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575006123476091, 'next_transition': 2852}.
<a id="trace-2520"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2520): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2256. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575006123476091, 'next_transition': 2852}.
<a id="trace-2852"></a>
<a id="trace-2854"></a>
<a id="trace-2874"></a>
<a id="trace-2876"></a>
<a id="trace-2992"></a>
<a id="trace-2994"></a>
<a id="trace-3006"></a>
<a id="trace-3008"></a>
<a id="trace-3052"></a>
<a id="trace-3054"></a>
<a id="trace-3506"></a>
<a id="trace-3508"></a>
<a id="trace-3549"></a>
<a id="trace-3551"></a>
<a id="trace-3582"></a>
<a id="trace-3584"></a>
<a id="trace-3622"></a>
<a id="trace-3624"></a>
<a id="trace-3664"></a>
<a id="trace-3666"></a>
<a id="trace-3810"></a>
<a id="trace-3812"></a>
<a id="trace-3905"></a>
<a id="trace-3907"></a>
- 23.75s–32.75s (×24), actor 5, squad 0 (trace 2852): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2261. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49218755083576826, 'next_transition': 2874}.
<a id="trace-3067"></a>
- 26.40s–26.40s (×1), actor 8, squad 1 (trace 3067): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 2925. Next observer evidence: None.
<a id="trace-3110"></a>
- 26.45s–26.45s (×1), actor 8, squad 1 (trace 3110): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 2925. Next observer evidence: None.
<a id="trace-3111"></a>
- 26.45s–26.45s (×1), actor 8, squad 1 (trace 3111): bounding overwatch. Knowledge: actor memory at 25.00s, trace 2925. Next observer evidence: None.
<a id="trace-3112"></a>
<a id="trace-3242"></a>
<a id="trace-3372"></a>
- 26.45s–26.55s (×3), actor 8, squad 1 (trace 3112): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 2925. Next observer evidence: None.
<a id="trace-3721"></a>
- 29.90s–29.90s (×1), actor 8, squad 1 (trace 3721): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 2925. Next observer evidence: {'until': 33.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3937}.
<a id="trace-3937"></a>
- 33.50s–33.50s (×1), actor 8, squad 1 (trace 3937): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 3733. Next observer evidence: {'until': 36.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5349}.
<a id="trace-4065"></a>
- 33.55s–33.55s (×1), actor 0, squad 0 (trace 4065): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 3725. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4229}.
<a id="trace-4229"></a>
<a id="trace-4231"></a>
- 33.75s–33.75s (×2), actor 5, squad 0 (trace 4229): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3730. Next observer evidence: {'until': 34.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.01969445512066763, 'next_transition': 4297}.
<a id="trace-4297"></a>
- 34.90s–34.90s (×1), actor 0, squad 0 (trace 4297): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 3725. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2953028081596011, 'next_transition': 4805}.
<a id="trace-4298"></a>
- 34.90s–34.90s (×1), actor 0, squad 0 (trace 4298): bounding overwatch. Knowledge: actor memory at 30.00s, trace 3725. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2953028081596011, 'next_transition': 4805}.
<a id="trace-4299"></a>
- 34.90s–34.90s (×1), actor 0, squad 0 (trace 4299): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 3725. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2953028081596011, 'next_transition': 4805}.
<a id="trace-4805"></a>
<a id="trace-4807"></a>
<a id="trace-4827"></a>
<a id="trace-4829"></a>
<a id="trace-4875"></a>
<a id="trace-4877"></a>
- 35.25s–36.25s (×6), actor 5, squad 0 (trace 4805): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4735. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150089874298284, 'next_transition': 4827}.
<a id="trace-4892"></a>
- 36.40s–36.40s (×1), actor 0, squad 0 (trace 4892): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4730. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2707782763271072, 'next_transition': 5339}.
<a id="trace-5339"></a>
<a id="trace-5341"></a>
<a id="trace-5544"></a>
<a id="trace-5546"></a>
<a id="trace-5576"></a>
<a id="trace-5578"></a>
<a id="trace-5626"></a>
<a id="trace-5628"></a>
<a id="trace-5655"></a>
<a id="trace-5657"></a>
<a id="trace-5672"></a>
<a id="trace-5674"></a>
- 36.75s–39.75s (×12), actor 5, squad 0 (trace 5339): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4735. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.038388809567812, 'next_transition': 5544}.
<a id="trace-5349"></a>
- 36.85s–36.85s (×1), actor 8, squad 1 (trace 5349): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 4738. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.992521262516091, 'next_transition': 468}.
<a id="trace-5352"></a>
- 36.85s–36.85s (×1), actor 8, squad 1 (trace 5352): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 4738. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.992521262516091, 'next_transition': 468}.
<a id="trace-5353"></a>
- 36.85s–36.85s (×1), actor 8, squad 1 (trace 5353): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 4738. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.992521262516091, 'next_transition': 468}.
<a id="trace-467"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (events line 467): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-468"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (events line 468): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5684"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 5684): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.741688 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 5684. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24963435039608503, 'next_transition': 5769}.
<a id="trace-5685"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 5685): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.741688 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 5685. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24963435039608503, 'next_transition': 5769}.
<a id="trace-5686"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 5686): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.741688 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 5686. Next observer evidence: {'until': 48.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.007501546651252, 'next_transition': 6099}.
<a id="trace-5687"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 5687): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.741688 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 5687. Next observer evidence: {'until': 48.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.007501546651252, 'next_transition': 6099}.
<a id="trace-5769"></a>
<a id="trace-5771"></a>
- 40.25s–40.25s (×2), actor 5, squad 0 (trace 5769): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 5697. Next observer evidence: {'until': 40.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5781}.
<a id="trace-5781"></a>
- 40.45s–40.45s (×1), actor 1, squad 0 (trace 5781): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 5693. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5794}.
<a id="trace-5794"></a>
<a id="trace-5796"></a>
<a id="trace-5817"></a>
<a id="trace-5819"></a>
<a id="trace-5852"></a>
<a id="trace-5854"></a>
<a id="trace-5864"></a>
<a id="trace-5866"></a>
<a id="trace-5889"></a>
<a id="trace-5920"></a>
<a id="trace-6001"></a>
<a id="trace-6010"></a>
- 40.75s–45.75s (×12), actor 5, squad 0 (trace 5794): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 5697. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4949988987088088, 'next_transition': 5817}.
<a id="trace-6017"></a>
- 45.85s–45.85s (×1), actor 1, squad 0 (trace 6017): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 45.00s, trace 5930. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6029}.
<a id="trace-6029"></a>
<a id="trace-6038"></a>
<a id="trace-6040"></a>
<a id="trace-6057"></a>
<a id="trace-6059"></a>
<a id="trace-6163"></a>
<a id="trace-6165"></a>
<a id="trace-6175"></a>
<a id="trace-6177"></a>
<a id="trace-6188"></a>
<a id="trace-6190"></a>
<a id="trace-6270"></a>
<a id="trace-6272"></a>
<a id="trace-6287"></a>
<a id="trace-6289"></a>
<a id="trace-6308"></a>
<a id="trace-6310"></a>
<a id="trace-6323"></a>
<a id="trace-6325"></a>
<a id="trace-6337"></a>
<a id="trace-6339"></a>
<a id="trace-6349"></a>
<a id="trace-6351"></a>
<a id="trace-6365"></a>
<a id="trace-6367"></a>
- 46.25s–53.25s (×25), actor 5, squad 0 (trace 6029): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5934. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6038}.
<a id="trace-6099"></a>
- 48.50s–48.50s (×1), actor 8, squad 1 (trace 6099): NeedSupport. Knowledge: actor memory at 45.00s, trace 5937. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6107}.
<a id="trace-6107"></a>
- 48.70s–48.70s (×1), actor 8, squad 1 (trace 6107): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 5937. Next observer evidence: {'until': 56.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.955560302396468, 'next_transition': 6629}.
<a id="trace-6108"></a>
- 48.70s–48.70s (×1), actor 8, squad 1 (trace 6108): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 5937. Next observer evidence: {'until': 56.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.955560302396468, 'next_transition': 6629}.
<a id="trace-6385"></a>
- 53.85s–53.85s (×1), actor 1, squad 0 (trace 6385): no progress: eligible movement budget expired; contract to column. Knowledge: actor memory at 50.00s, trace 6201. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6476}.
<a id="trace-6476"></a>
<a id="trace-6478"></a>
<a id="trace-6490"></a>
<a id="trace-6492"></a>
<a id="trace-6575"></a>
<a id="trace-6577"></a>
<a id="trace-6588"></a>
<a id="trace-6590"></a>
<a id="trace-6605"></a>
<a id="trace-6607"></a>
<a id="trace-6770"></a>
<a id="trace-6772"></a>
<a id="trace-6795"></a>
<a id="trace-6797"></a>
<a id="trace-6830"></a>
<a id="trace-6832"></a>
<a id="trace-6852"></a>
<a id="trace-6854"></a>
<a id="trace-6909"></a>
<a id="trace-6911"></a>
<a id="trace-6991"></a>
<a id="trace-6993"></a>
- 54.25s–60.25s (×22), actor 5, squad 0 (trace 6476): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 6205. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6490}.
<a id="trace-6629"></a>
- 56.90s–56.90s (×1), actor 8, squad 1 (trace 6629): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 55.00s, trace 6506. Next observer evidence: None.
<a id="trace-6633"></a>
- 56.95s–56.95s (×1), actor 8, squad 1 (trace 6633): MoveTactically. Knowledge: actor memory at 55.00s, trace 6506. Next observer evidence: {'until': 70, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.751288789070873, 'next_transition': 8222}.
<a id="trace-6634"></a>
- 56.95s–56.95s (×1), actor 8, squad 1 (trace 6634): received platoon directive. Knowledge: actor memory at 55.00s, trace 6506. Next observer evidence: {'until': 70, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.751288789070873, 'next_transition': 8222}.
<a id="trace-6998"></a>
- 60.25s–60.25s (×1), actor 1, squad 0 (trace 6998): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 60.00s, trace 6918. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4949984326790588, 'next_transition': 7269}.
<a id="trace-7269"></a>
<a id="trace-7271"></a>
<a id="trace-7288"></a>
<a id="trace-7290"></a>
<a id="trace-7309"></a>
<a id="trace-7311"></a>
<a id="trace-7323"></a>
<a id="trace-7325"></a>
<a id="trace-7348"></a>
<a id="trace-7350"></a>
<a id="trace-7364"></a>
<a id="trace-7366"></a>
<a id="trace-7389"></a>
<a id="trace-7391"></a>
<a id="trace-7406"></a>
<a id="trace-7408"></a>
<a id="trace-7492"></a>
<a id="trace-7494"></a>
<a id="trace-7506"></a>
<a id="trace-7508"></a>
<a id="trace-7526"></a>
<a id="trace-7528"></a>
<a id="trace-7540"></a>
<a id="trace-7542"></a>
- 61.25s–66.75s (×24), actor 5, squad 0 (trace 7269): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 6922. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.442162283028082, 'next_transition': 7288}.
<a id="trace-7551"></a>
- 66.90s–66.90s (×1), actor 1, squad 0 (trace 7551): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 65.00s, trace 7422. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06973250095755862, 'next_transition': 7682}.
<a id="trace-7682"></a>
<a id="trace-7684"></a>
- 67.25s–67.25s (×2), actor 5, squad 0 (trace 7682): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 7426. Next observer evidence: {'until': 67.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.03148673556160644, 'next_transition': 638}.
<a id="trace-638"></a>
- 67.45s–67.45s (×1), actor 5, squad 0 (events line 638): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7690"></a>
- 67.45s–67.45s (×1), actor 5, squad 0 (trace 7690): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.610132 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.45s, trace 7690. Next observer evidence: None.
<a id="trace-7691"></a>
- 67.45s–67.45s (×1), actor 5, squad 0 (trace 7691): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.610132 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.45s, trace 7691. Next observer evidence: None.
<a id="trace-7693"></a>
- 67.55s–67.55s (×1), actor 1, squad 0 (trace 7693): ReactToContact: cover and return fire. Knowledge: actor memory at 65.00s, trace 7422. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8060}.
<a id="trace-7694"></a>
- 67.55s–67.55s (×1), actor 1, squad 0 (trace 7694): new contact inside 100 m. Knowledge: actor memory at 65.00s, trace 7422. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8060}.
<a id="trace-8060"></a>
<a id="trace-8062"></a>
<a id="trace-8088"></a>
<a id="trace-8090"></a>
<a id="trace-8125"></a>
<a id="trace-8127"></a>
<a id="trace-8158"></a>
<a id="trace-8160"></a>
<a id="trace-8188"></a>
<a id="trace-8190"></a>
<a id="trace-8339"></a>
<a id="trace-8341"></a>
<a id="trace-8358"></a>
<a id="trace-8360"></a>
- 67.75s–70.75s (×14), actor 5, squad 0 (trace 8060): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 67.45s, trace 7691. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40133865582571937, 'next_transition': 8088}.
<a id="trace-8222"></a>
- 70.10s–70.10s (×1), actor 8, squad 1 (trace 8222): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 70.00s, trace 8205. Next observer evidence: {'until': 83.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.28170589273211893, 'next_transition': 11132}.
<a id="trace-8373"></a>
- 71.05s–71.05s (×1), actor 1, squad 0 (trace 8373): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 70.00s, trace 8198. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08245338997498737, 'next_transition': 8734}.
<a id="trace-8734"></a>
<a id="trace-8736"></a>
<a id="trace-8755"></a>
<a id="trace-8757"></a>
<a id="trace-8790"></a>
<a id="trace-8792"></a>
<a id="trace-8825"></a>
<a id="trace-8827"></a>
- 71.25s–73.25s (×8), actor 5, squad 0 (trace 8734): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 8202. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04461280689191759, 'next_transition': 8755}.
<a id="trace-8891"></a>
- 74.65s–74.65s (×1), actor 1, squad 0 (trace 8891): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 70.00s, trace 8198. Next observer evidence: None.
<a id="trace-8892"></a>
- 74.65s–74.65s (×1), actor 1, squad 0 (trace 8892): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 70.00s, trace 8198. Next observer evidence: None.
<a id="trace-10674"></a>
<a id="trace-10676"></a>
<a id="trace-10760"></a>
<a id="trace-10762"></a>
<a id="trace-10803"></a>
<a id="trace-10805"></a>
<a id="trace-10816"></a>
<a id="trace-10818"></a>
<a id="trace-10850"></a>
<a id="trace-10866"></a>
<a id="trace-10884"></a>
<a id="trace-10904"></a>
<a id="trace-10926"></a>
<a id="trace-10936"></a>
<a id="trace-10938"></a>
<a id="trace-11016"></a>
<a id="trace-11018"></a>
<a id="trace-11030"></a>
<a id="trace-11032"></a>
- 74.75s–80.75s (×19), actor 5, squad 0 (trace 10674): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 8202. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12102475243536262, 'next_transition': 10760}.
<a id="trace-815"></a>
- 81.30s–81.30s (×1), actor 5, squad 0 (events line 815): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11058"></a>
- 81.30s–81.30s (×1), actor 5, squad 0 (trace 11058): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.063634 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.30s, trace 11058. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08636080872521676, 'next_transition': 11067}.
<a id="trace-11059"></a>
- 81.30s–81.30s (×1), actor 5, squad 0 (trace 11059): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.063634 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.30s, trace 11059. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08636080872521676, 'next_transition': 11067}.
<a id="trace-11067"></a>
<a id="trace-11069"></a>
<a id="trace-11087"></a>
<a id="trace-11089"></a>
<a id="trace-11102"></a>
<a id="trace-11104"></a>
<a id="trace-11214"></a>
<a id="trace-11216"></a>
<a id="trace-11231"></a>
<a id="trace-11233"></a>
<a id="trace-11312"></a>
<a id="trace-11314"></a>
<a id="trace-11323"></a>
<a id="trace-11325"></a>
- 81.75s–85.75s (×14), actor 5, squad 0 (trace 11067): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 81.30s, trace 11059. Next observer evidence: {'until': 82.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0132055975299283, 'next_transition': 11087}.
<a id="trace-11132"></a>
- 83.40s–83.40s (×1), actor 9, squad 1 (trace 11132): traveling. Knowledge: actor memory at 80.00s, trace 10956. Next observer evidence: {'until': 89.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999986437661063, 'next_transition': 11645}.
<a id="trace-11133"></a>
- 83.40s–83.40s (×1), actor 9, squad 1 (trace 11133): current contact unknown for 10 s. Knowledge: actor memory at 80.00s, trace 10956. Next observer evidence: {'until': 89.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999986437661063, 'next_transition': 11645}.
<a id="trace-11339"></a>
- 86.05s–86.05s (×1), actor 1, squad 0 (trace 11339): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 85.00s, trace 11245. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11355}.
<a id="trace-11340"></a>
- 86.05s–86.05s (×1), actor 1, squad 0 (trace 11340): NeedSupport. Knowledge: actor memory at 85.00s, trace 11245. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11355}.
<a id="trace-11355"></a>
<a id="trace-11357"></a>
- 86.25s–86.25s (×2), actor 5, squad 0 (trace 11355): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 11248. Next observer evidence: {'until': 87, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 11382}.
<a id="trace-11382"></a>
- 87.00s–87.00s (×1), actor 1, squad 0 (trace 11382): Reorganise: completed/failed drill. Knowledge: actor memory at 85.00s, trace 11245. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11524}.
<a id="trace-11386"></a>
- 87.00s–87.00s (×1), actor 1, squad 0 (trace 11386): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 11245. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11524}.
<a id="trace-11387"></a>
- 87.00s–87.00s (×1), actor 1, squad 0 (trace 11387): Reorganise complete: known contact. Knowledge: actor memory at 85.00s, trace 11245. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11524}.
<a id="trace-11524"></a>
<a id="trace-11526"></a>
<a id="trace-11540"></a>
<a id="trace-11542"></a>
<a id="trace-11571"></a>
<a id="trace-11573"></a>
<a id="trace-11587"></a>
<a id="trace-11589"></a>
<a id="trace-11615"></a>
<a id="trace-11617"></a>
<a id="trace-11633"></a>
<a id="trace-11635"></a>
<a id="trace-11770"></a>
<a id="trace-11772"></a>
<a id="trace-11783"></a>
<a id="trace-11785"></a>
- 87.25s–90.75s (×16), actor 5, squad 0 (trace 11524): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 11248. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11540}.
<a id="trace-11645"></a>
- 89.90s–89.90s (×1), actor 9, squad 1 (trace 11645): matching received arrivals: traveling stage complete. Knowledge: actor memory at 85.00s, trace 11251. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.450052253662536, 'next_transition': 11905}.
<a id="trace-11799"></a>
- 91.20s–91.20s (×1), actor 1, squad 0 (trace 11799): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 90.00s, trace 11699. Next observer evidence: None.
<a id="trace-11807"></a>
<a id="trace-11809"></a>
<a id="trace-11824"></a>
<a id="trace-11826"></a>
<a id="trace-11853"></a>
<a id="trace-11855"></a>
<a id="trace-11868"></a>
<a id="trace-11870"></a>
<a id="trace-11894"></a>
<a id="trace-11896"></a>
- 91.25s–93.25s (×10), actor 5, squad 0 (trace 11807): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 11701. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559981241918073, 'next_transition': 11824}.
<a id="trace-11905"></a>
- 93.35s–93.35s (×1), actor 9, squad 1 (trace 11905): ReactToContact: cover and return fire. Knowledge: actor memory at 90.00s, trace 11704. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31496856945734514, 'next_transition': 13825}.
<a id="trace-11906"></a>
- 93.35s–93.35s (×1), actor 9, squad 1 (trace 11906): bounding overwatch. Knowledge: actor memory at 90.00s, trace 11704. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31496856945734514, 'next_transition': 13825}.
<a id="trace-11907"></a>
- 93.35s–93.35s (×1), actor 9, squad 1 (trace 11907): new contact inside 100 m. Knowledge: actor memory at 90.00s, trace 11704. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31496856945734514, 'next_transition': 13825}.
<a id="trace-11911"></a>
- 93.45s–93.45s (×1), actor 1, squad 0 (trace 11911): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 90.00s, trace 11699. Next observer evidence: {'until': 94.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8944313656833524, 'next_transition': 13693}.
<a id="trace-13548"></a>
- 93.45s–93.45s (×1), actor 1, squad 0 (trace 13548): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 90.00s, trace 11699. Next observer evidence: {'until': 94.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8944313656833524, 'next_transition': 13693}.
<a id="trace-13549"></a>
- 93.45s–93.45s (×1), actor 1, squad 0 (trace 13549): MoveTactically. Knowledge: actor memory at 90.00s, trace 11699. Next observer evidence: {'until': 94.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8944313656833524, 'next_transition': 13693}.
<a id="trace-13550"></a>
- 93.45s–93.45s (×1), actor 1, squad 0 (trace 13550): contact cover complete: assessment resumes closure. Knowledge: actor memory at 90.00s, trace 11699. Next observer evidence: {'until': 94.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8944313656833524, 'next_transition': 13693}.
<a id="trace-13693"></a>
<a id="trace-13695"></a>
- 94.75s–94.75s (×2), actor 5, squad 0 (trace 13693): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 11701. Next observer evidence: {'until': 95, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6985861178797916, 'next_transition': 926}.
<a id="trace-926"></a>
- 95.15s–95.15s (×1), actor 5, squad 0 (events line 926): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13723"></a>
- 95.15s–95.15s (×1), actor 5, squad 0 (trace 13723): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.308539 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.15s, trace 13723. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0280293744272126, 'next_transition': 13789}.
<a id="trace-13724"></a>
- 95.15s–95.15s (×1), actor 5, squad 0 (trace 13724): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.308539 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.15s, trace 13724. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0280293744272126, 'next_transition': 13789}.
<a id="trace-13789"></a>
<a id="trace-13791"></a>
<a id="trace-13814"></a>
<a id="trace-13816"></a>
<a id="trace-13838"></a>
<a id="trace-13840"></a>
<a id="trace-13860"></a>
<a id="trace-13862"></a>
<a id="trace-13890"></a>
<a id="trace-13892"></a>
<a id="trace-13923"></a>
<a id="trace-13925"></a>
<a id="trace-13938"></a>
<a id="trace-13940"></a>
<a id="trace-14020"></a>
<a id="trace-14022"></a>
- 95.75s–100.25s (×16), actor 5, squad 0 (trace 13789): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.15s, trace 13724. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8198480530894777, 'next_transition': 13814}.
<a id="trace-13825"></a>
- 96.65s–96.65s (×1), actor 9, squad 1 (trace 13825): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 95.00s, trace 13712. Next observer evidence: {'until': 108.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1276}.
<a id="trace-13827"></a>
- 96.65s–96.65s (×1), actor 9, squad 1 (trace 13827): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 95.00s, trace 13712. Next observer evidence: {'until': 108.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1276}.
<a id="trace-14047"></a>
- 101.15s–101.15s (×1), actor 1, squad 0 (trace 14047): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 100.00s, trace 13949. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6287805163543865, 'next_transition': 15693}.
<a id="trace-14048"></a>
- 101.15s–101.15s (×1), actor 1, squad 0 (trace 14048): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 100.00s, trace 13949. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6287805163543865, 'next_transition': 15693}.
<a id="trace-15693"></a>
<a id="trace-15695"></a>
<a id="trace-15733"></a>
<a id="trace-15735"></a>
<a id="trace-15761"></a>
<a id="trace-15763"></a>
<a id="trace-15782"></a>
<a id="trace-15784"></a>
<a id="trace-15801"></a>
<a id="trace-15803"></a>
<a id="trace-15831"></a>
<a id="trace-15833"></a>
<a id="trace-15851"></a>
<a id="trace-15853"></a>
<a id="trace-15936"></a>
<a id="trace-15938"></a>
<a id="trace-15949"></a>
<a id="trace-15951"></a>
<a id="trace-15970"></a>
<a id="trace-15972"></a>
<a id="trace-15984"></a>
<a id="trace-15986"></a>
<a id="trace-16004"></a>
<a id="trace-16006"></a>
<a id="trace-16015"></a>
<a id="trace-16017"></a>
<a id="trace-16039"></a>
<a id="trace-16041"></a>
<a id="trace-16053"></a>
<a id="trace-16055"></a>
- 101.25s–108.75s (×30), actor 5, squad 0 (trace 15693): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 13951. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.14997954341714, 'next_transition': 15733}.
<a id="trace-1275"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (events line 1275): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040008749833677, 'next_transition': 16084}.
<a id="trace-1276"></a>
- 108.95s–108.95s (×1), actor 5, squad 1 (events line 1276): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 114.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16365}.
<a id="trace-16064"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 16064): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.814992 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 108.95s, trace 16064. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040008749833677, 'next_transition': 16084}.
<a id="trace-16065"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 16065): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.814992 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 108.95s, trace 16065. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040008749833677, 'next_transition': 16084}.
<a id="trace-16066"></a>
- 108.95s–108.95s (×1), actor 5, squad 1 (trace 16066): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.814992 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 108.95s, trace 16066. Next observer evidence: {'until': 114.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16365}.
<a id="trace-16067"></a>
- 108.95s–108.95s (×1), actor 5, squad 1 (trace 16067): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.814992 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 108.95s, trace 16067. Next observer evidence: {'until': 114.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16365}.
<a id="trace-16084"></a>
<a id="trace-16086"></a>
<a id="trace-16097"></a>
<a id="trace-16099"></a>
<a id="trace-16176"></a>
<a id="trace-16178"></a>
<a id="trace-16194"></a>
<a id="trace-16196"></a>
<a id="trace-16222"></a>
<a id="trace-16224"></a>
<a id="trace-16235"></a>
<a id="trace-16237"></a>
<a id="trace-16261"></a>
<a id="trace-16263"></a>
<a id="trace-16278"></a>
<a id="trace-16280"></a>
<a id="trace-16294"></a>
<a id="trace-16296"></a>
<a id="trace-16315"></a>
<a id="trace-16317"></a>
<a id="trace-16340"></a>
<a id="trace-16342"></a>
<a id="trace-16354"></a>
<a id="trace-16356"></a>
<a id="trace-16440"></a>
<a id="trace-16442"></a>
<a id="trace-16462"></a>
<a id="trace-16464"></a>
<a id="trace-16484"></a>
<a id="trace-16486"></a>
<a id="trace-16518"></a>
<a id="trace-16520"></a>
<a id="trace-16546"></a>
<a id="trace-16548"></a>
<a id="trace-16557"></a>
<a id="trace-16559"></a>
<a id="trace-16577"></a>
<a id="trace-16579"></a>
<a id="trace-16592"></a>
<a id="trace-16594"></a>
<a id="trace-16674"></a>
<a id="trace-16676"></a>
<a id="trace-16695"></a>
<a id="trace-16697"></a>
<a id="trace-16717"></a>
<a id="trace-16719"></a>
<a id="trace-16729"></a>
<a id="trace-16731"></a>
<a id="trace-16752"></a>
<a id="trace-16754"></a>
<a id="trace-16769"></a>
<a id="trace-16771"></a>
<a id="trace-16799"></a>
<a id="trace-16801"></a>
<a id="trace-16822"></a>
<a id="trace-16824"></a>
<a id="trace-16921"></a>
<a id="trace-16923"></a>
<a id="trace-16940"></a>
<a id="trace-16942"></a>
<a id="trace-16961"></a>
<a id="trace-16963"></a>
<a id="trace-16992"></a>
<a id="trace-16994"></a>
<a id="trace-17003"></a>
<a id="trace-17005"></a>
<a id="trace-17022"></a>
<a id="trace-17024"></a>
<a id="trace-17036"></a>
<a id="trace-17038"></a>
<a id="trace-17053"></a>
<a id="trace-17055"></a>
<a id="trace-17065"></a>
<a id="trace-17067"></a>
<a id="trace-17148"></a>
<a id="trace-17150"></a>
<a id="trace-17164"></a>
<a id="trace-17166"></a>
<a id="trace-17198"></a>
<a id="trace-17200"></a>
- 109.25s–131.80s (×80), actor 5, squad 0 (trace 16084): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.95s, trace 16067. Next observer evidence: {'until': 109.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.503995559857177, 'next_transition': 16097}.
<a id="trace-16365"></a>
- 114.90s–114.90s (×1), actor 9, squad 1 (trace 16365): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 110.00s, trace 16109. Next observer evidence: None.
<a id="trace-16366"></a>
- 114.90s–114.90s (×1), actor 9, squad 1 (trace 16366): MoveTactically. Knowledge: actor memory at 110.00s, trace 16109. Next observer evidence: None.
<a id="trace-16367"></a>
- 114.90s–114.90s (×1), actor 9, squad 1 (trace 16367): . Knowledge: actor memory at 110.00s, trace 16109. Next observer evidence: None.
<a id="trace-16371"></a>
- 114.95s–114.95s (×1), actor 9, squad 1 (trace 16371): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 16109. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17454}.
<a id="trace-17208"></a>
- 131.90s–131.90s (×1), actor 1, squad 0 (trace 17208): NeedSupport. Knowledge: actor memory at 130.00s, trace 17076. Next observer evidence: {'until': 132.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2811049679543288, 'next_transition': 17228}.
<a id="trace-17228"></a>
<a id="trace-17230"></a>
<a id="trace-17248"></a>
<a id="trace-17250"></a>
<a id="trace-17267"></a>
<a id="trace-17269"></a>
<a id="trace-17387"></a>
<a id="trace-17389"></a>
<a id="trace-17405"></a>
<a id="trace-17407"></a>
<a id="trace-17428"></a>
<a id="trace-17430"></a>
<a id="trace-17440"></a>
<a id="trace-17442"></a>
<a id="trace-17474"></a>
<a id="trace-17476"></a>
<a id="trace-17489"></a>
<a id="trace-17491"></a>
<a id="trace-17520"></a>
<a id="trace-17522"></a>
<a id="trace-17545"></a>
<a id="trace-17547"></a>
<a id="trace-17703"></a>
<a id="trace-17705"></a>
<a id="trace-17719"></a>
<a id="trace-17721"></a>
<a id="trace-17760"></a>
<a id="trace-17762"></a>
<a id="trace-17786"></a>
<a id="trace-17788"></a>
<a id="trace-17823"></a>
<a id="trace-17825"></a>
<a id="trace-17939"></a>
<a id="trace-17941"></a>
<a id="trace-17974"></a>
<a id="trace-17976"></a>
- 132.30s–146.80s (×36), actor 5, squad 0 (trace 17228): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 17078. Next observer evidence: {'until': 132.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4300423741046516, 'next_transition': 17248}.
<a id="trace-17454"></a>
- 136.85s–136.85s (×1), actor 9, squad 1 (trace 17454): ReactToContact: cover and return fire. Knowledge: actor memory at 135.00s, trace 17325. Next observer evidence: {'until': 140, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17574}.
<a id="trace-17455"></a>
- 136.85s–136.85s (×1), actor 9, squad 1 (trace 17455): new contact inside 100 m. Knowledge: actor memory at 135.00s, trace 17325. Next observer evidence: {'until': 140, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17574}.
<a id="trace-17574"></a>
- 140.15s–140.15s (×1), actor 9, squad 1 (trace 17574): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 140.00s, trace 17560. Next observer evidence: {'until': 151, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.925173498495088, 'next_transition': 18451}.
<a id="trace-17575"></a>
- 140.15s–140.15s (×1), actor 9, squad 1 (trace 17575): rearward bound: one stationary suppressing element. Knowledge: actor memory at 140.00s, trace 17560. Next observer evidence: {'until': 151, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.925173498495088, 'next_transition': 18451}.
<a id="trace-17986"></a>
- 147.25s–147.25s (×1), actor 1, squad 0 (trace 17986): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 145.00s, trace 17855. Next observer evidence: None.
<a id="trace-17992"></a>
<a id="trace-17994"></a>
<a id="trace-18006"></a>
<a id="trace-18008"></a>
- 147.30s–147.80s (×4), actor 5, squad 0 (trace 17992): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 17857. Next observer evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18006}.
<a id="trace-18021"></a>
- 148.25s–148.25s (×1), actor 1, squad 0 (trace 18021): Reorganise: completed/failed drill. Knowledge: actor memory at 145.00s, trace 17855. Next observer evidence: None.
<a id="trace-18024"></a>
- 148.25s–148.25s (×1), actor 1, squad 0 (trace 18024): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 17855. Next observer evidence: None.
<a id="trace-18025"></a>
- 148.25s–148.25s (×1), actor 1, squad 0 (trace 18025): Reorganise complete: known contact. Knowledge: actor memory at 145.00s, trace 17855. Next observer evidence: None.
<a id="trace-18278"></a>
<a id="trace-18280"></a>
<a id="trace-18298"></a>
<a id="trace-18300"></a>
<a id="trace-18321"></a>
<a id="trace-18323"></a>
<a id="trace-18337"></a>
<a id="trace-18339"></a>
<a id="trace-18421"></a>
<a id="trace-18423"></a>
<a id="trace-18477"></a>
<a id="trace-18479"></a>
<a id="trace-18498"></a>
<a id="trace-18500"></a>
- 148.30s–152.30s (×14), actor 5, squad 0 (trace 18278): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 17857. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748649156356193, 'next_transition': 18298}.
<a id="trace-18451"></a>
- 151.10s–151.10s (×1), actor 9, squad 1 (trace 18451): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 18350. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19085}.
<a id="trace-18452"></a>
- 151.10s–151.10s (×1), actor 9, squad 1 (trace 18452): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 18350. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19085}.
<a id="trace-18513"></a>
- 152.70s–152.70s (×1), actor 1, squad 0 (trace 18513): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 150.00s, trace 18346. Next observer evidence: {'until': 152.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750036367021533, 'next_transition': 18697}.
<a id="trace-18514"></a>
- 152.70s–152.70s (×1), actor 1, squad 0 (trace 18514): rearward bound: one stationary suppressing element. Knowledge: actor memory at 150.00s, trace 18346. Next observer evidence: {'until': 152.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750036367021533, 'next_transition': 18697}.
<a id="trace-18697"></a>
<a id="trace-18699"></a>
<a id="trace-18713"></a>
<a id="trace-18715"></a>
<a id="trace-18731"></a>
<a id="trace-18733"></a>
<a id="trace-18769"></a>
<a id="trace-18771"></a>
<a id="trace-18846"></a>
<a id="trace-18848"></a>
<a id="trace-18863"></a>
<a id="trace-18865"></a>
<a id="trace-18886"></a>
<a id="trace-18888"></a>
<a id="trace-18910"></a>
<a id="trace-18912"></a>
<a id="trace-18931"></a>
<a id="trace-18933"></a>
<a id="trace-18943"></a>
<a id="trace-18945"></a>
<a id="trace-18965"></a>
<a id="trace-18967"></a>
<a id="trace-18980"></a>
<a id="trace-18982"></a>
<a id="trace-19010"></a>
<a id="trace-19012"></a>
<a id="trace-19094"></a>
<a id="trace-19096"></a>
<a id="trace-19119"></a>
<a id="trace-19121"></a>
<a id="trace-19135"></a>
<a id="trace-19137"></a>
<a id="trace-19152"></a>
<a id="trace-19154"></a>
<a id="trace-19175"></a>
<a id="trace-19177"></a>
<a id="trace-19191"></a>
<a id="trace-19193"></a>
<a id="trace-19210"></a>
<a id="trace-19212"></a>
<a id="trace-19223"></a>
<a id="trace-19225"></a>
<a id="trace-19248"></a>
<a id="trace-19250"></a>
- 152.80s–164.30s (×44), actor 5, squad 0 (trace 18697): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 18348. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.314999096586006, 'next_transition': 18713}.
<a id="trace-19085"></a>
- 160.20s–160.20s (×1), actor 9, squad 1 (trace 19085): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 160.00s, trace 19025. Next observer evidence: {'until': 178, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1885}.
<a id="trace-19260"></a>
- 164.65s–164.65s (×1), actor 1, squad 0 (trace 19260): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 19021. Next observer evidence: {'until': 164.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21003373189241317, 'next_transition': 19321}.
<a id="trace-19261"></a>
- 164.65s–164.65s (×1), actor 1, squad 0 (trace 19261): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 19021. Next observer evidence: {'until': 164.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21003373189241317, 'next_transition': 19321}.
<a id="trace-19321"></a>
<a id="trace-19323"></a>
<a id="trace-19398"></a>
<a id="trace-19400"></a>
<a id="trace-19416"></a>
<a id="trace-19418"></a>
<a id="trace-19434"></a>
<a id="trace-19436"></a>
<a id="trace-19446"></a>
<a id="trace-19448"></a>
<a id="trace-19465"></a>
<a id="trace-19467"></a>
<a id="trace-19487"></a>
<a id="trace-19489"></a>
<a id="trace-19498"></a>
<a id="trace-19500"></a>
<a id="trace-19515"></a>
<a id="trace-19517"></a>
<a id="trace-19602"></a>
<a id="trace-19604"></a>
<a id="trace-19619"></a>
<a id="trace-19621"></a>
<a id="trace-19633"></a>
<a id="trace-19635"></a>
<a id="trace-19645"></a>
<a id="trace-19647"></a>
<a id="trace-19665"></a>
<a id="trace-19667"></a>
<a id="trace-19675"></a>
<a id="trace-19677"></a>
<a id="trace-19690"></a>
<a id="trace-19692"></a>
- 164.80s–173.30s (×32), actor 5, squad 0 (trace 19321): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 19023. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399377009172638, 'next_transition': 19398}.
<a id="trace-19702"></a>
- 173.70s–173.70s (×1), actor 1, squad 0 (trace 19702): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 170.00s, trace 19537. Next observer evidence: {'until': 173.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19706}.
<a id="trace-19706"></a>
<a id="trace-19708"></a>
<a id="trace-19733"></a>
<a id="trace-19735"></a>
<a id="trace-19806"></a>
<a id="trace-19808"></a>
<a id="trace-19819"></a>
<a id="trace-19821"></a>
<a id="trace-19834"></a>
<a id="trace-19836"></a>
<a id="trace-19844"></a>
<a id="trace-19846"></a>
<a id="trace-19862"></a>
<a id="trace-19864"></a>
- 173.80s–177.30s (×14), actor 5, squad 0 (trace 19706): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 19538. Next observer evidence: {'until': 174.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19733}.
<a id="trace-1884"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (events line 1884): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19885}.
<a id="trace-1885"></a>
- 178.05s–178.05s (×1), actor 5, squad 1 (events line 1885): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 183, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20058}.
<a id="trace-19876"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (trace 19876): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.05s, trace 19876. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19885}.
<a id="trace-19877"></a>
- 178.05s–178.05s (×1), actor 5, squad 1 (trace 19877): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.05s, trace 19877. Next observer evidence: {'until': 183, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20058}.
<a id="trace-19885"></a>
<a id="trace-19887"></a>
<a id="trace-19894"></a>
<a id="trace-19896"></a>
<a id="trace-19908"></a>
<a id="trace-19910"></a>
<a id="trace-19918"></a>
<a id="trace-19920"></a>
<a id="trace-19991"></a>
<a id="trace-19993"></a>
<a id="trace-20003"></a>
<a id="trace-20005"></a>
<a id="trace-20015"></a>
<a id="trace-20017"></a>
<a id="trace-20025"></a>
<a id="trace-20027"></a>
<a id="trace-20051"></a>
<a id="trace-20053"></a>
<a id="trace-20071"></a>
<a id="trace-20073"></a>
<a id="trace-20086"></a>
<a id="trace-20088"></a>
<a id="trace-20099"></a>
<a id="trace-20101"></a>
<a id="trace-20185"></a>
<a id="trace-20187"></a>
<a id="trace-20205"></a>
<a id="trace-20207"></a>
<a id="trace-20220"></a>
<a id="trace-20222"></a>
<a id="trace-20229"></a>
<a id="trace-20231"></a>
<a id="trace-20246"></a>
<a id="trace-20248"></a>
<a id="trace-20277"></a>
<a id="trace-20279"></a>
<a id="trace-20290"></a>
<a id="trace-20292"></a>
<a id="trace-20301"></a>
<a id="trace-20303"></a>
<a id="trace-20372"></a>
<a id="trace-20374"></a>
<a id="trace-20384"></a>
<a id="trace-20386"></a>
<a id="trace-20399"></a>
<a id="trace-20401"></a>
<a id="trace-20428"></a>
<a id="trace-20430"></a>
<a id="trace-20446"></a>
<a id="trace-20448"></a>
<a id="trace-20461"></a>
<a id="trace-20463"></a>
<a id="trace-20472"></a>
<a id="trace-20474"></a>
<a id="trace-20564"></a>
<a id="trace-20566"></a>
<a id="trace-20574"></a>
<a id="trace-20576"></a>
<a id="trace-20587"></a>
<a id="trace-20589"></a>
<a id="trace-20596"></a>
<a id="trace-20598"></a>
<a id="trace-20623"></a>
<a id="trace-20625"></a>
<a id="trace-20652"></a>
<a id="trace-20654"></a>
<a id="trace-20668"></a>
<a id="trace-20670"></a>
<a id="trace-20752"></a>
<a id="trace-20754"></a>
<a id="trace-20765"></a>
<a id="trace-20767"></a>
<a id="trace-20787"></a>
<a id="trace-20789"></a>
<a id="trace-20804"></a>
<a id="trace-20806"></a>
<a id="trace-20813"></a>
<a id="trace-20815"></a>
<a id="trace-20826"></a>
<a id="trace-20828"></a>
<a id="trace-20840"></a>
<a id="trace-20842"></a>
<a id="trace-20853"></a>
<a id="trace-20855"></a>
<a id="trace-20865"></a>
<a id="trace-20867"></a>
<a id="trace-20938"></a>
<a id="trace-20940"></a>
<a id="trace-20961"></a>
<a id="trace-20963"></a>
<a id="trace-20971"></a>
<a id="trace-20973"></a>
<a id="trace-20999"></a>
<a id="trace-21001"></a>
<a id="trace-21009"></a>
<a id="trace-21011"></a>
<a id="trace-21023"></a>
<a id="trace-21025"></a>
<a id="trace-21034"></a>
<a id="trace-21036"></a>
<a id="trace-21056"></a>
<a id="trace-21058"></a>
<a id="trace-21129"></a>
<a id="trace-21131"></a>
<a id="trace-21151"></a>
<a id="trace-21153"></a>
<a id="trace-21160"></a>
<a id="trace-21162"></a>
<a id="trace-21183"></a>
<a id="trace-21185"></a>
<a id="trace-21192"></a>
<a id="trace-21194"></a>
<a id="trace-21205"></a>
<a id="trace-21207"></a>
<a id="trace-21224"></a>
<a id="trace-21226"></a>
<a id="trace-21241"></a>
<a id="trace-21243"></a>
<a id="trace-21251"></a>
<a id="trace-21253"></a>
<a id="trace-21323"></a>
<a id="trace-21325"></a>
<a id="trace-21344"></a>
<a id="trace-21346"></a>
<a id="trace-21371"></a>
<a id="trace-21373"></a>
<a id="trace-21392"></a>
<a id="trace-21394"></a>
<a id="trace-21420"></a>
<a id="trace-21422"></a>
<a id="trace-21430"></a>
<a id="trace-21432"></a>
<a id="trace-21500"></a>
<a id="trace-21502"></a>
<a id="trace-21530"></a>
<a id="trace-21532"></a>
<a id="trace-21545"></a>
<a id="trace-21547"></a>
<a id="trace-21569"></a>
<a id="trace-21571"></a>
<a id="trace-21583"></a>
<a id="trace-21585"></a>
<a id="trace-21606"></a>
<a id="trace-21608"></a>
<a id="trace-21618"></a>
<a id="trace-21620"></a>
<a id="trace-21691"></a>
<a id="trace-21693"></a>
<a id="trace-21701"></a>
<a id="trace-21703"></a>
<a id="trace-21713"></a>
<a id="trace-21715"></a>
<a id="trace-21740"></a>
<a id="trace-21742"></a>
<a id="trace-21750"></a>
<a id="trace-21752"></a>
<a id="trace-21777"></a>
<a id="trace-21779"></a>
<a id="trace-21799"></a>
<a id="trace-21801"></a>
<a id="trace-21809"></a>
<a id="trace-21811"></a>
<a id="trace-21882"></a>
<a id="trace-21884"></a>
<a id="trace-21892"></a>
<a id="trace-21894"></a>
<a id="trace-21906"></a>
<a id="trace-21908"></a>
<a id="trace-21919"></a>
<a id="trace-21921"></a>
<a id="trace-21935"></a>
<a id="trace-21937"></a>
<a id="trace-21944"></a>
<a id="trace-21946"></a>
<a id="trace-21960"></a>
<a id="trace-21962"></a>
<a id="trace-21970"></a>
<a id="trace-21972"></a>
<a id="trace-21984"></a>
<a id="trace-21986"></a>
<a id="trace-22005"></a>
<a id="trace-22007"></a>
<a id="trace-22078"></a>
<a id="trace-22080"></a>
<a id="trace-22099"></a>
<a id="trace-22101"></a>
<a id="trace-22171"></a>
<a id="trace-22173"></a>
<a id="trace-22187"></a>
<a id="trace-22189"></a>
<a id="trace-22216"></a>
<a id="trace-22218"></a>
<a id="trace-22227"></a>
<a id="trace-22229"></a>
<a id="trace-22240"></a>
<a id="trace-22242"></a>
<a id="trace-22253"></a>
<a id="trace-22255"></a>
<a id="trace-22325"></a>
<a id="trace-22327"></a>
<a id="trace-22338"></a>
<a id="trace-22340"></a>
<a id="trace-22353"></a>
<a id="trace-22355"></a>
<a id="trace-22390"></a>
<a id="trace-22392"></a>
<a id="trace-22460"></a>
<a id="trace-22462"></a>
<a id="trace-22476"></a>
<a id="trace-22478"></a>
<a id="trace-22488"></a>
<a id="trace-22490"></a>
<a id="trace-22503"></a>
<a id="trace-22505"></a>
<a id="trace-22515"></a>
<a id="trace-22517"></a>
<a id="trace-22609"></a>
<a id="trace-22611"></a>
<a id="trace-22620"></a>
<a id="trace-22622"></a>
- 178.30s–246.80s (×220), actor 5, squad 0 (trace 19885): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.05s, trace 19877. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19894}.
<a id="trace-20058"></a>
- 183.00s–183.00s (×1), actor 9, squad 1 (trace 20058): MoveTactically. Knowledge: actor memory at 180.00s, trace 19929. Next observer evidence: None.
<a id="trace-20059"></a>
- 183.00s–183.00s (×1), actor 9, squad 1 (trace 20059): traveling overwatch. Knowledge: actor memory at 180.00s, trace 19929. Next observer evidence: None.
<a id="trace-20060"></a>
- 183.00s–183.00s (×1), actor 9, squad 1 (trace 20060): received platoon directive. Knowledge: actor memory at 180.00s, trace 19929. Next observer evidence: None.
<a id="trace-20065"></a>
- 183.05s–183.05s (×1), actor 9, squad 1 (trace 20065): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 180.00s, trace 19929. Next observer evidence: {'until': 213, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22106}.
<a id="trace-22106"></a>
- 236.30s–236.30s (×1), actor 9, squad 1 (trace 22106): traveling. Knowledge: actor memory at 235.00s, trace 22016. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.99998173033555, 'next_transition': 22397}.
<a id="trace-22107"></a>
- 236.30s–236.30s (×1), actor 9, squad 1 (trace 22107): current contact unknown for 10 s. Knowledge: actor memory at 235.00s, trace 22016. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.99998173033555, 'next_transition': 22397}.
<a id="trace-22397"></a>
- 242.30s–242.30s (×1), actor 9, squad 1 (trace 22397): matching received arrivals: traveling stage complete. Knowledge: actor memory at 240.00s, trace 22263. Next observer evidence: {'until': 247, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.860101851216672, 'next_transition': 2102}.
<a id="trace-2101"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (events line 2101): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2102"></a>
- 247.10s–247.10s (×1), actor 5, squad 1 (events line 2102): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22628"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (trace 22628): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.907508 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 247.10s, trace 22628. Next observer evidence: {'until': 247.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22656}.
<a id="trace-22629"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (trace 22629): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.907508 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 247.10s, trace 22629. Next observer evidence: {'until': 247.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22656}.
<a id="trace-22630"></a>
- 247.10s–247.10s (×1), actor 5, squad 1 (trace 22630): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.907508 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 247.10s, trace 22630. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1398798791539462, 'next_transition': 22680}.
<a id="trace-22631"></a>
- 247.10s–247.10s (×1), actor 5, squad 1 (trace 22631): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.907508 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 247.10s, trace 22631. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1398798791539462, 'next_transition': 22680}.
<a id="trace-22656"></a>
<a id="trace-22658"></a>
<a id="trace-22673"></a>
<a id="trace-22675"></a>
<a id="trace-22739"></a>
<a id="trace-22741"></a>
<a id="trace-22778"></a>
<a id="trace-22780"></a>
<a id="trace-22849"></a>
<a id="trace-22851"></a>
<a id="trace-22886"></a>
<a id="trace-22888"></a>
- 247.80s–251.80s (×12), actor 5, squad 0 (trace 22656): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 247.10s, trace 22631. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22673}.
<a id="trace-22680"></a>
- 248.30s–248.30s (×1), actor 9, squad 1 (trace 22680): matching received arrivals: traveling stage complete. Knowledge: actor memory at 245.00s, trace 22529. Next observer evidence: {'until': 252, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.710100933623357, 'next_transition': 22894}.
<a id="trace-22894"></a>
- 252.05s–252.05s (×1), actor 9, squad 1 (trace 22894): traveling overwatch. Knowledge: actor memory at 250.00s, trace 22790. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.289881631712, 'next_transition': 23268}.
<a id="trace-22895"></a>
- 252.05s–252.05s (×1), actor 9, squad 1 (trace 22895): received platoon directive. Knowledge: actor memory at 250.00s, trace 22790. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.289881631712, 'next_transition': 23268}.
<a id="trace-22909"></a>
- 252.45s–252.45s (×1), actor 1, squad 0 (trace 22909): MoveTactically. Knowledge: actor memory at 250.00s, trace 22787. Next observer evidence: None.
<a id="trace-22910"></a>
- 252.45s–252.45s (×1), actor 1, squad 0 (trace 22910): traveling overwatch. Knowledge: actor memory at 250.00s, trace 22787. Next observer evidence: None.
<a id="trace-22911"></a>
- 252.45s–252.45s (×1), actor 1, squad 0 (trace 22911): received platoon directive. Knowledge: actor memory at 250.00s, trace 22787. Next observer evidence: None.
<a id="trace-22915"></a>
- 252.50s–252.50s (×1), actor 1, squad 0 (trace 22915): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 250.00s, trace 22787. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22920}.
<a id="trace-22920"></a>
<a id="trace-22922"></a>
<a id="trace-22938"></a>
<a id="trace-22940"></a>
<a id="trace-22949"></a>
<a id="trace-22951"></a>
<a id="trace-22968"></a>
<a id="trace-22970"></a>
<a id="trace-22983"></a>
<a id="trace-22985"></a>
<a id="trace-23070"></a>
<a id="trace-23072"></a>
<a id="trace-23091"></a>
<a id="trace-23093"></a>
<a id="trace-23120"></a>
<a id="trace-23122"></a>
<a id="trace-23150"></a>
<a id="trace-23152"></a>
<a id="trace-23159"></a>
<a id="trace-23161"></a>
<a id="trace-23173"></a>
<a id="trace-23175"></a>
<a id="trace-23259"></a>
<a id="trace-23261"></a>
- 252.80s–260.80s (×24), actor 5, squad 0 (trace 22920): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 22788. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22938}.
<a id="trace-23266"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (trace 23266): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 260.90s, trace 23266. Next observer evidence: None.
<a id="trace-23267"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (trace 23267): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 260.90s, trace 23267. Next observer evidence: None.
<a id="trace-23268"></a>
- 260.90s–260.90s (×1), actor 5, squad 1 (trace 23268): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 260.90s, trace 23268. Next observer evidence: None.
<a id="trace-23269"></a>
- 260.90s–260.90s (×1), actor 5, squad 1 (trace 23269): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 260.90s, trace 23269. Next observer evidence: None.
<a id="trace-2163"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (events line 2163): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23283}.
<a id="trace-2164"></a>
- 260.90s–260.90s (×1), actor 5, squad 1 (events line 2164): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 265.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23467}.
<a id="trace-23283"></a>
<a id="trace-23285"></a>
<a id="trace-23307"></a>
<a id="trace-23309"></a>
<a id="trace-23340"></a>
<a id="trace-23342"></a>
<a id="trace-23352"></a>
<a id="trace-23354"></a>
<a id="trace-23368"></a>
<a id="trace-23370"></a>
<a id="trace-23381"></a>
<a id="trace-23383"></a>
<a id="trace-23450"></a>
<a id="trace-23452"></a>
<a id="trace-23460"></a>
<a id="trace-23462"></a>
- 261.30s–265.80s (×16), actor 5, squad 0 (trace 23283): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.90s, trace 23269. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23307}.
<a id="trace-23467"></a>
- 265.85s–265.85s (×1), actor 9, squad 1 (trace 23467): received platoon directive. Knowledge: actor memory at 265.00s, trace 23391. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25836}.
<a id="trace-23469"></a>
- 266.25s–266.25s (×1), actor 1, squad 0 (trace 23469): received platoon directive. Knowledge: actor memory at 265.00s, trace 23388. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23482}.
<a id="trace-23482"></a>
<a id="trace-23484"></a>
<a id="trace-23508"></a>
<a id="trace-23510"></a>
<a id="trace-23522"></a>
<a id="trace-23524"></a>
<a id="trace-23547"></a>
<a id="trace-23549"></a>
<a id="trace-23560"></a>
<a id="trace-23562"></a>
<a id="trace-23641"></a>
<a id="trace-23643"></a>
<a id="trace-23653"></a>
<a id="trace-23655"></a>
<a id="trace-23676"></a>
<a id="trace-23678"></a>
<a id="trace-23692"></a>
<a id="trace-23694"></a>
<a id="trace-23702"></a>
<a id="trace-23704"></a>
<a id="trace-23715"></a>
<a id="trace-23717"></a>
<a id="trace-23725"></a>
<a id="trace-23727"></a>
<a id="trace-23741"></a>
<a id="trace-23743"></a>
<a id="trace-23751"></a>
<a id="trace-23753"></a>
<a id="trace-23823"></a>
<a id="trace-23825"></a>
<a id="trace-23834"></a>
<a id="trace-23836"></a>
<a id="trace-23850"></a>
<a id="trace-23852"></a>
<a id="trace-23868"></a>
<a id="trace-23870"></a>
<a id="trace-23889"></a>
<a id="trace-23891"></a>
<a id="trace-23898"></a>
<a id="trace-23900"></a>
<a id="trace-23915"></a>
<a id="trace-23917"></a>
<a id="trace-23924"></a>
<a id="trace-23926"></a>
<a id="trace-23939"></a>
<a id="trace-23941"></a>
<a id="trace-24016"></a>
<a id="trace-24018"></a>
<a id="trace-24026"></a>
<a id="trace-24028"></a>
<a id="trace-24041"></a>
<a id="trace-24043"></a>
<a id="trace-24050"></a>
<a id="trace-24052"></a>
<a id="trace-24070"></a>
<a id="trace-24072"></a>
<a id="trace-24081"></a>
<a id="trace-24083"></a>
<a id="trace-24096"></a>
<a id="trace-24098"></a>
<a id="trace-24108"></a>
<a id="trace-24110"></a>
<a id="trace-24130"></a>
<a id="trace-24132"></a>
<a id="trace-24146"></a>
<a id="trace-24148"></a>
<a id="trace-24215"></a>
<a id="trace-24217"></a>
<a id="trace-24225"></a>
<a id="trace-24227"></a>
<a id="trace-24245"></a>
<a id="trace-24247"></a>
<a id="trace-24262"></a>
<a id="trace-24264"></a>
<a id="trace-24274"></a>
<a id="trace-24276"></a>
<a id="trace-24287"></a>
<a id="trace-24289"></a>
<a id="trace-24311"></a>
<a id="trace-24313"></a>
<a id="trace-24392"></a>
<a id="trace-24394"></a>
<a id="trace-24404"></a>
<a id="trace-24406"></a>
<a id="trace-24432"></a>
<a id="trace-24434"></a>
<a id="trace-24441"></a>
<a id="trace-24443"></a>
<a id="trace-24465"></a>
<a id="trace-24467"></a>
<a id="trace-24478"></a>
<a id="trace-24480"></a>
<a id="trace-24488"></a>
<a id="trace-24490"></a>
<a id="trace-24512"></a>
<a id="trace-24514"></a>
<a id="trace-24590"></a>
<a id="trace-24592"></a>
<a id="trace-24609"></a>
<a id="trace-24611"></a>
<a id="trace-24618"></a>
<a id="trace-24620"></a>
<a id="trace-24636"></a>
<a id="trace-24638"></a>
<a id="trace-24658"></a>
<a id="trace-24660"></a>
<a id="trace-24674"></a>
<a id="trace-24676"></a>
<a id="trace-24696"></a>
<a id="trace-24698"></a>
<a id="trace-24783"></a>
<a id="trace-24785"></a>
<a id="trace-24796"></a>
<a id="trace-24798"></a>
<a id="trace-24805"></a>
<a id="trace-24807"></a>
<a id="trace-24822"></a>
<a id="trace-24824"></a>
<a id="trace-24835"></a>
<a id="trace-24837"></a>
<a id="trace-24860"></a>
<a id="trace-24862"></a>
<a id="trace-24878"></a>
<a id="trace-24880"></a>
<a id="trace-24890"></a>
<a id="trace-24892"></a>
<a id="trace-24965"></a>
<a id="trace-24967"></a>
<a id="trace-24989"></a>
<a id="trace-24991"></a>
<a id="trace-24999"></a>
<a id="trace-25001"></a>
<a id="trace-25017"></a>
<a id="trace-25019"></a>
<a id="trace-25027"></a>
<a id="trace-25029"></a>
<a id="trace-25048"></a>
<a id="trace-25050"></a>
<a id="trace-25066"></a>
<a id="trace-25068"></a>
<a id="trace-25144"></a>
<a id="trace-25146"></a>
<a id="trace-25171"></a>
<a id="trace-25173"></a>
<a id="trace-25180"></a>
<a id="trace-25182"></a>
<a id="trace-25209"></a>
<a id="trace-25211"></a>
<a id="trace-25218"></a>
<a id="trace-25220"></a>
<a id="trace-25232"></a>
<a id="trace-25234"></a>
<a id="trace-25241"></a>
<a id="trace-25243"></a>
<a id="trace-25258"></a>
<a id="trace-25260"></a>
<a id="trace-25267"></a>
<a id="trace-25269"></a>
<a id="trace-25347"></a>
<a id="trace-25349"></a>
<a id="trace-25361"></a>
<a id="trace-25363"></a>
<a id="trace-25370"></a>
<a id="trace-25372"></a>
<a id="trace-25391"></a>
<a id="trace-25393"></a>
<a id="trace-25404"></a>
<a id="trace-25406"></a>
<a id="trace-25417"></a>
<a id="trace-25419"></a>
<a id="trace-25435"></a>
<a id="trace-25437"></a>
<a id="trace-25453"></a>
<a id="trace-25455"></a>
<a id="trace-25462"></a>
<a id="trace-25464"></a>
<a id="trace-25532"></a>
<a id="trace-25534"></a>
<a id="trace-25555"></a>
<a id="trace-25557"></a>
<a id="trace-25565"></a>
<a id="trace-25567"></a>
<a id="trace-25583"></a>
<a id="trace-25585"></a>
<a id="trace-25594"></a>
<a id="trace-25596"></a>
<a id="trace-25607"></a>
<a id="trace-25609"></a>
<a id="trace-25618"></a>
<a id="trace-25620"></a>
<a id="trace-25639"></a>
<a id="trace-25641"></a>
<a id="trace-25646"></a>
<a id="trace-25648"></a>
<a id="trace-25743"></a>
<a id="trace-25745"></a>
<a id="trace-25756"></a>
<a id="trace-25758"></a>
<a id="trace-25775"></a>
<a id="trace-25777"></a>
<a id="trace-25796"></a>
<a id="trace-25798"></a>
<a id="trace-25805"></a>
<a id="trace-25807"></a>
- 266.80s–328.80s (×204), actor 5, squad 0 (trace 23482): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 23389. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23508}.
<a id="trace-25835"></a>
- 329.90s–329.90s (×1), actor 5, squad 0 (trace 25835): renew committed intent (75 s lifetime). Knowledge: actor memory at 329.90s, trace 25835. Next observer evidence: None.
<a id="trace-25836"></a>
- 329.90s–329.90s (×1), actor 5, squad 1 (trace 25836): renew committed intent (75 s lifetime). Knowledge: actor memory at 329.90s, trace 25836. Next observer evidence: None.
<a id="trace-2384"></a>
- 329.90s–329.90s (×1), actor 5, squad 0 (events line 2384): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25903}.
<a id="trace-2385"></a>
- 329.90s–329.90s (×1), actor 5, squad 1 (events line 2385): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 359.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-25903"></a>
<a id="trace-25905"></a>
<a id="trace-25917"></a>
<a id="trace-25919"></a>
<a id="trace-25939"></a>
<a id="trace-25941"></a>
<a id="trace-25956"></a>
<a id="trace-25958"></a>
<a id="trace-25965"></a>
<a id="trace-25967"></a>
<a id="trace-25991"></a>
<a id="trace-25993"></a>
<a id="trace-26002"></a>
<a id="trace-26004"></a>
<a id="trace-26017"></a>
<a id="trace-26019"></a>
<a id="trace-26094"></a>
<a id="trace-26096"></a>
<a id="trace-26116"></a>
<a id="trace-26118"></a>
<a id="trace-26127"></a>
<a id="trace-26129"></a>
<a id="trace-26147"></a>
<a id="trace-26149"></a>
<a id="trace-26170"></a>
<a id="trace-26172"></a>
<a id="trace-26180"></a>
<a id="trace-26182"></a>
<a id="trace-26283"></a>
<a id="trace-26285"></a>
<a id="trace-26294"></a>
<a id="trace-26296"></a>
<a id="trace-26306"></a>
<a id="trace-26308"></a>
<a id="trace-26316"></a>
<a id="trace-26318"></a>
<a id="trace-26336"></a>
<a id="trace-26338"></a>
<a id="trace-26345"></a>
<a id="trace-26347"></a>
<a id="trace-26360"></a>
<a id="trace-26362"></a>
<a id="trace-26369"></a>
<a id="trace-26371"></a>
<a id="trace-26387"></a>
<a id="trace-26389"></a>
<a id="trace-26396"></a>
<a id="trace-26398"></a>
<a id="trace-26477"></a>
<a id="trace-26479"></a>
<a id="trace-26488"></a>
<a id="trace-26490"></a>
<a id="trace-26523"></a>
<a id="trace-26525"></a>
<a id="trace-26535"></a>
<a id="trace-26537"></a>
<a id="trace-26558"></a>
<a id="trace-26560"></a>
<a id="trace-26581"></a>
<a id="trace-26583"></a>
<a id="trace-26664"></a>
<a id="trace-26666"></a>
<a id="trace-26676"></a>
<a id="trace-26678"></a>
<a id="trace-26685"></a>
<a id="trace-26687"></a>
<a id="trace-26702"></a>
<a id="trace-26704"></a>
<a id="trace-26714"></a>
<a id="trace-26716"></a>
<a id="trace-26728"></a>
<a id="trace-26730"></a>
<a id="trace-26740"></a>
<a id="trace-26742"></a>
<a id="trace-26774"></a>
<a id="trace-26776"></a>
<a id="trace-26845"></a>
<a id="trace-26847"></a>
<a id="trace-26857"></a>
<a id="trace-26859"></a>
<a id="trace-26869"></a>
<a id="trace-26871"></a>
<a id="trace-26880"></a>
<a id="trace-26882"></a>
<a id="trace-26905"></a>
<a id="trace-26907"></a>
<a id="trace-26918"></a>
<a id="trace-26920"></a>
<a id="trace-26928"></a>
<a id="trace-26930"></a>
<a id="trace-26945"></a>
<a id="trace-26947"></a>
<a id="trace-26955"></a>
<a id="trace-26957"></a>
- 330.30s–359.80s (×94), actor 5, squad 0 (trace 25903): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 25840. Next observer evidence: {'until': 330.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25917}.

## Net delivery

188 matched order/radio deliveries; 470 explicitly recorded losses; 5 unmatched orders (not classified as lost).
Matched delay: mean 0.469s; maximum 5.250s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3733: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3735: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3736: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3737: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3738: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3739: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3740: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3741: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3742: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3743: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3744: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4736: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4738: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4740: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4741: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4742: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4743: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4744: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4745: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4746: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4747: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4748: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4749: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 5684: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 5685: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 5686: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 5687: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5697: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5698: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 5700: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5702: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5703: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5704: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5705: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5706: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5707: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5708: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5709: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5710: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5711: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 5932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5934: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5935: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 5937: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 5938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 5939: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5940: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5941: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5942: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5943: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5944: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5945: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5946: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 5947: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 5948: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 6201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 6202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 6203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 6204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 6205: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 6206: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 6207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 6208: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 6209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 6210: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 6211: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 6212: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 6213: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 6214: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6215: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6216: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6217: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 6218: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 6219: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 6499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 6500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 6501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 6502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 6503: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 6504: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 6505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 6506: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 6507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 6508: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 6509: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 6510: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 6511: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 6512: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 6513: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 6514: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 6515: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 6516: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 6517: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 6918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 6919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 6920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 6921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 6922: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 6923: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 6924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 6925: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 6926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 6927: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 6928: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 6929: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 6930: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 6931: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 6932: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 6933: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 6934: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 6935: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 6936: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 7422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 7423: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 7424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 7425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 7426: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 7427: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 7428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 7429: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 7430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 7431: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 7432: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 7433: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 7434: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 7435: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 7436: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 7437: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 7438: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 7439: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 7440: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.45s leader 5, trace 7690: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.45s leader 5, trace 7691: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 8198: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 8199: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 8200: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 8201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 8202: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 8203: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 8204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 8205: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 8206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 8207: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 8208: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 8209: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 8210: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 8211: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 8212: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 8213: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 8214: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 8215: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 8216: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 10690: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 10691: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 10692: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 10693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 10694: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 10695: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 10696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 10697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 10698: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 10699: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 10700: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 10701: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 10702: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 10703: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 10704: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 10705: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 10706: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 10707: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 10949: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 10950: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 10951: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 10952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 10953: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 10954: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 10955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 10956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 10957: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 10958: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 10959: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 10960: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 10961: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 10962: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 10963: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 10964: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 10965: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 10966: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.30s leader 5, trace 11058: estimate 11.75; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.30s leader 5, trace 11059: estimate 11.75; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 11245: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 11246: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 11247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 11248: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 11249: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 11250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 11251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 11252: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 11253: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 11254: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 11255: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 11256: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 11257: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 11258: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 11259: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 11260: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 11261: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 11699: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 11700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 11701: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 11702: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 11703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 11704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 11705: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 11706: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 11707: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 11708: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 11709: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 11710: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 11711: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 11712: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 11713: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 11714: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 13707: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 13708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 13709: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 13710: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 13711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 13712: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 13713: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 13714: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 13715: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 13716: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 13717: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 13718: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 13719: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 13720: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 13721: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 13722: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.15s leader 5, trace 13723: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.15s leader 5, trace 13724: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 13949: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 13950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 13951: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 13952: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 13953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 13954: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 13955: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 13956: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 13957: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 13958: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 13959: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 13960: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 13961: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 13962: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 13963: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 13964: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 15865: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15867: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 15868: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 15869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 15870: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 15871: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15872: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15873: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15874: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15875: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15876: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15877: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15878: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15879: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15880: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 16064: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 16065: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 16066: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 16067: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 16104: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 16105: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 16106: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 16107: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 16108: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 16109: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 16110: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 16111: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 16112: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 16113: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 16114: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 16115: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 16116: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 16117: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 16118: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 16119: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 16372: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 16373: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 16374: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 16375: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 16376: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 16377: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 16378: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16379: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 16380: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 16381: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 16382: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16383: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16384: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 16385: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 16386: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 16387: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 16601: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 16602: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 16603: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 16604: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 16605: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 16606: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 16607: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16608: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 16609: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 16610: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 16611: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16612: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16613: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 16614: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 16615: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 16616: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 16854: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 16855: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 16856: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 16857: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 16858: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 16859: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 16860: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 16861: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 16862: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 16863: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 16864: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 16865: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 16866: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 16867: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 16868: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 16869: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 17076: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 17077: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 17078: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 17079: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 17080: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 17081: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 17082: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 17083: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 17084: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 17085: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 17086: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 17087: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 17088: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 17089: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 17090: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 17091: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 17320: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 17321: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 17322: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 17323: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 17324: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 17325: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 17326: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 17327: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 17328: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 17329: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 17330: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 17331: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 17332: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 17333: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 17334: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 17335: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 17555: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 17556: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 17557: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 17558: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 17559: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 17560: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 17561: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 17562: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 17563: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 17564: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 17565: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 17566: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 17567: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 17568: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 17569: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 17855: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 17856: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 17857: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 17858: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 17859: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 17860: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 17861: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 17862: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 17863: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 17864: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 17865: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 17866: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 17867: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 17868: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 17869: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 18346: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 18347: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 18348: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 18349: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 18350: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 18351: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 18352: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 18353: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 18354: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 18355: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 18356: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 18357: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 18358: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 18359: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 18782: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 18783: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 18784: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 18785: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 18786: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 18787: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 18788: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 18789: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 18790: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 18791: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 18792: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 18793: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 18794: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 18795: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 19021: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 19022: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 19023: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 19024: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 19025: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 19026: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 19027: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 19028: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 19029: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 19030: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 19031: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 19032: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 19033: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 19034: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 19333: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 19334: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 19335: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 19336: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 19337: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 19338: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 19339: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 19340: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 19341: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 19342: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 19343: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 19344: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 19345: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 19537: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 19538: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 19539: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 19540: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 19541: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 19542: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 19543: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 19544: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 19545: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 19546: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 19547: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 19548: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 19549: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 19741: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 19742: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 19743: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 19744: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 19745: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 19746: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 19747: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 19748: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 19749: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 19750: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 19751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 19752: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 19753: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.05s leader 5, trace 19876: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.05s leader 5, trace 19877: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 19926: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 19927: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 19928: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 19929: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 19930: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 19931: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 19932: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 19933: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 19934: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 19935: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 19936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 19937: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 19938: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 20118: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 20119: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 20120: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 20121: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 20122: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 20123: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 20124: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 20125: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 20126: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 20127: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 20128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 20129: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 20130: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 20308: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 20309: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 20310: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 20311: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 20312: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 20313: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 20314: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 20315: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 20316: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 20317: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 20318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 20319: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 20320: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 20499: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 20500: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 20501: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 20502: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 20503: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 20504: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 20505: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 20506: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 20507: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 20508: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 20509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 20510: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 20511: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 20689: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 20690: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 20691: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 20692: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 20693: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 20694: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 20695: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 20696: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 20697: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 20698: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 20699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 20700: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 20701: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 20872: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 20873: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 20874: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 20875: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 20876: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 20877: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 20878: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 20879: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 20880: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 20881: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 20882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 20883: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 20884: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 21063: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 21064: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 21065: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 21066: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 21067: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 21068: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 21069: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 21070: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 21071: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 21072: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 21073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 21074: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 21075: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 21260: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 21261: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 21262: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 21263: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 21264: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 21265: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 21266: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 21267: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 21268: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 21269: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 21270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 21271: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 21272: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 21438: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 21439: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 21440: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 21441: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 21442: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 21443: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 21444: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 21445: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 21446: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 21447: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 21448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 21449: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 21450: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 21625: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 21626: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 21627: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 21628: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 21629: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 21630: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 21631: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 21632: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 21633: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 21634: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 21635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 21636: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 21637: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 21818: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 21819: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 21820: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 21821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 21822: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 21823: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 21824: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 21825: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 21826: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 21827: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 21828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 21829: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 21830: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 22013: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 22014: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 22015: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 22016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 22017: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 22018: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 22019: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 22020: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 22021: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 22022: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 22023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 22024: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 22025: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 22260: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 22261: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 22262: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 22263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 22264: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 22265: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 22266: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 22267: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 22268: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 22269: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 22270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 22271: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 22272: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 22526: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 22527: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 22528: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 22529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 22530: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 22531: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 22532: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 22533: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 22534: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 22535: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 22536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 22537: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 22538: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.10s leader 5, trace 22628: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.10s leader 5, trace 22629: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.10s leader 5, trace 22630: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.10s leader 5, trace 22631: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 22787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 22788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 22789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 22790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 22791: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 22792: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 22793: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 22794: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 22795: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 22796: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 22797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 22798: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 22799: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 22990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 22991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 22992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 22993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 22994: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 22995: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 22996: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 22997: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 22998: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 22999: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 23000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 23001: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 23002: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 23188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 23189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 23190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 23191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 23192: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 23193: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 23194: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 23195: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 23196: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 23197: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 23198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 23199: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 23200: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 23266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 23267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 23268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 23269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 23388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 23389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 23390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 23391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 23392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 23393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 23394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 23395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 23396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 23397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 23398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 23399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 23400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 23570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 23571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 23572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 23573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 23574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 23575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 23576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 23577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 23578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 23579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 23580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 23581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 23582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 23758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 23759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 23760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 23761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 23762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 23763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 23764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 23765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 23766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 23767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 23768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 23769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 23770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 23953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 23954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 23955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 23956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 23957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 23958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 23959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 23960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 23961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 23962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 23963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 23964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 23965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 24153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 24154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 24155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 24156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 24157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 24158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 24159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 24160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 24161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 24162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 24163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 24164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 24165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 24330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 24331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 24332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 24333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 24334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 24335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 24336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 24337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 24338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 24339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 24340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 24341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 24342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 24519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 24520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 24521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 24522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 24523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 24524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 24525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 24526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 24527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 24528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 24529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 24530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 24531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 24710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 24711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 24712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 24713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 24714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 24715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 24716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 24717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 24718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 24719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 24720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 24721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 24722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 24903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 24904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 24905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 24906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 24907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 24908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 24909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 24910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 24911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 24912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 24913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 24914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 24915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 25080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 25081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 25082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 25083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 25084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 25085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 25086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 25087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 25088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 25089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 25090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 25091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 25092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 25274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 25275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 25276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 25277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 25278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 25279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 25280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 25281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 25282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 25283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 25284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 25285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 25286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 25470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 25471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 25472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 25473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 25474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 25475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 25476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 25477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 25478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 25479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 25480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 25481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 25482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 25653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 25654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 25655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 25656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 25657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 25658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 25659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 25660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 25661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 25662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 25663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 25664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 25665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 329.90s leader 5, trace 25835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 329.90s leader 5, trace 25836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 25839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 25840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 25841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 25842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 25843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 25844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 25845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 25846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 25847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 25848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 25849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 25850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 25851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 26032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 26033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 26034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 26035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 26036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 26037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 26038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 26039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 26040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 26041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 26042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 26043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 26044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 26216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 26217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 26218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 26219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 26220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 26221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 26222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 26223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 26224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 26225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 26226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 26227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 26228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 26403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 26404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 26405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 26406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 26407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 26408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 26409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 26410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 26411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 26412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 26413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 26414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 26415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 26590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 26591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 26592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 26593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 26594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 26595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 26596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 26597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 26598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 26599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 26600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 26601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 26602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 26781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 26782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 26783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 26784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 26785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 26786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 26787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 26788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 26789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 26790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 26791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 26792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 26793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 26962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 26963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 26964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 26965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 26966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 26967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 26968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 26969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 26970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 26971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 26972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 26973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 26974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Bren incapacitated
- 1: Ash killed in action
- 1: Soren incapacitated
- 1: Orin incapacitated
- 1: Reed killed in action
- 1: Tern killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
