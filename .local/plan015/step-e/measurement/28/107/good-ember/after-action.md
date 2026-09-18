# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/28/107/good-ember/battle-107-1789674291867574142`

## Battle summary

**Ember** · 360 s · 135 shots.

### Turning points

- 14.8s, squad 1: contact (events line 170). First recorded contact.
- 26.4s, squad 0: withdrawal ([trace 6439](#trace-6439)). 36.2s, squad 0: took cover and returned fire.
- 35.8s, squad 0: help call ([trace 7399](#trace-7399)). No completion observed before termination.
- 38.0s, squad 0: help call ([trace 7657](#trace-7657)). No completion observed before termination.
- 40.3s, squad 0: withdrawal ([trace 7802](#trace-7802)). 76.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 69.7s, squad 0: help call ([trace 9609](#trace-9609)). No completion observed before termination.
- 180.4s, squad 0: help call ([trace 16625](#trace-16625)). No completion observed before termination.
- 197.2s, squad 0: withdrawal ([trace 17357](#trace-17357)). 218.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 307.9s, squad 0: withdrawal ([trace 23070](#trace-23070)). 327.9s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 8 shots, 5/8 lost.
- **1** — FightHere; chose advanced tactically, took cover and returned fire; no completed objective recorded; 1 shots, 2/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 91 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 35 shots, 0/2 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 0.1s, squad 1 chose advanced tactically ([trace 315](#trace-315)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 12.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 1443](#trace-1443)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1442](#trace-1442)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575000416120977, 'next_transition': 1463}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1444](#trace-1444)). Following evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.987236301316829, 'next_transition': 2095}.

### Communication

262 matched deliveries (mean 0.39s, max 5.25s); 253 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.85s, squad 1, contact, evidence events line 170: First recorded contact; .
- 26.35s, squad 0, withdrawal, evidence 6439: BreakContact: believed ratio at least two without superiority; 36.2s, squad 0: took cover and returned fire.
- 35.80s, squad 0, help call, evidence 7399: NeedSupport; No completion observed before termination.
- 38.05s, squad 0, help call, evidence 7657: NeedSupport; No completion observed before termination.
- 40.30s, squad 0, withdrawal, evidence 7802: BreakContact: believed ratio at least two without superiority; 76.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 69.70s, squad 0, help call, evidence 9609: NeedSupport; No completion observed before termination.
- 180.35s, squad 0, help call, evidence 16625: NeedSupport; No completion observed before termination.
- 197.20s, squad 0, withdrawal, evidence 17357: BreakContact: believed ratio at least two without superiority; 218.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 307.85s, squad 0, withdrawal, evidence 23070: BreakContact: believed ratio at least two without superiority; 327.9s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945256466219773, 'next_transition': 799}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945256466219773, 'next_transition': 799}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945256466219773, 'next_transition': 799}.
<a id="trace-315"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 315): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004781830177322, 'next_transition': 1112}.
<a id="trace-316"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 316): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004781830177322, 'next_transition': 1112}.
<a id="trace-317"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 317): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004781830177322, 'next_transition': 1112}.
<a id="trace-546"></a>
<a id="trace-548"></a>
<a id="trace-574"></a>
<a id="trace-576"></a>
<a id="trace-605"></a>
<a id="trace-607"></a>
<a id="trace-630"></a>
<a id="trace-632"></a>
<a id="trace-649"></a>
<a id="trace-651"></a>
<a id="trace-673"></a>
<a id="trace-675"></a>
<a id="trace-699"></a>
<a id="trace-701"></a>
<a id="trace-803"></a>
<a id="trace-805"></a>
<a id="trace-834"></a>
<a id="trace-836"></a>
<a id="trace-865"></a>
<a id="trace-867"></a>
<a id="trace-888"></a>
<a id="trace-890"></a>
<a id="trace-916"></a>
<a id="trace-918"></a>
<a id="trace-947"></a>
<a id="trace-949"></a>
<a id="trace-974"></a>
<a id="trace-976"></a>
<a id="trace-1001"></a>
<a id="trace-1003"></a>
<a id="trace-1018"></a>
<a id="trace-1020"></a>
<a id="trace-1109"></a>
<a id="trace-1111"></a>
<a id="trace-1355"></a>
<a id="trace-1357"></a>
<a id="trace-1379"></a>
<a id="trace-1381"></a>
<a id="trace-1403"></a>
<a id="trace-1405"></a>
<a id="trace-1439"></a>
<a id="trace-1441"></a>
<a id="trace-1467"></a>
<a id="trace-1469"></a>
<a id="trace-1998"></a>
<a id="trace-2000"></a>
<a id="trace-2024"></a>
<a id="trace-2026"></a>
<a id="trace-2064"></a>
<a id="trace-2066"></a>
<a id="trace-2087"></a>
<a id="trace-2089"></a>
<a id="trace-3434"></a>
<a id="trace-3436"></a>
<a id="trace-3498"></a>
<a id="trace-3500"></a>
<a id="trace-4242"></a>
<a id="trace-4244"></a>
<a id="trace-4280"></a>
<a id="trace-4282"></a>
<a id="trace-4338"></a>
<a id="trace-4340"></a>
<a id="trace-4365"></a>
<a id="trace-4367"></a>
<a id="trace-4981"></a>
<a id="trace-4983"></a>
<a id="trace-5010"></a>
<a id="trace-5012"></a>
<a id="trace-5055"></a>
<a id="trace-5057"></a>
<a id="trace-5079"></a>
<a id="trace-5081"></a>
<a id="trace-5178"></a>
<a id="trace-5180"></a>
<a id="trace-5220"></a>
<a id="trace-5222"></a>
<a id="trace-5255"></a>
<a id="trace-5257"></a>
<a id="trace-5286"></a>
<a id="trace-5288"></a>
<a id="trace-5320"></a>
<a id="trace-5322"></a>
<a id="trace-5347"></a>
<a id="trace-5349"></a>
<a id="trace-6187"></a>
<a id="trace-6189"></a>
<a id="trace-6211"></a>
<a id="trace-6213"></a>
<a id="trace-6258"></a>
<a id="trace-6260"></a>
<a id="trace-6284"></a>
<a id="trace-6286"></a>
<a id="trace-6366"></a>
<a id="trace-6368"></a>
<a id="trace-6395"></a>
<a id="trace-6397"></a>
<a id="trace-6432"></a>
<a id="trace-6434"></a>
<a id="trace-6888"></a>
<a id="trace-6890"></a>
<a id="trace-6910"></a>
<a id="trace-6912"></a>
<a id="trace-6940"></a>
<a id="trace-6942"></a>
<a id="trace-6963"></a>
<a id="trace-6965"></a>
<a id="trace-6985"></a>
<a id="trace-6987"></a>
<a id="trace-7026"></a>
<a id="trace-7028"></a>
<a id="trace-7047"></a>
<a id="trace-7049"></a>
<a id="trace-7139"></a>
<a id="trace-7141"></a>
<a id="trace-7155"></a>
<a id="trace-7157"></a>
<a id="trace-7174"></a>
<a id="trace-7176"></a>
<a id="trace-7192"></a>
<a id="trace-7194"></a>
<a id="trace-7218"></a>
<a id="trace-7220"></a>
<a id="trace-7238"></a>
<a id="trace-7240"></a>
<a id="trace-7258"></a>
<a id="trace-7260"></a>
<a id="trace-7271"></a>
<a id="trace-7273"></a>
<a id="trace-7291"></a>
<a id="trace-7293"></a>
<a id="trace-7304"></a>
<a id="trace-7306"></a>
<a id="trace-7381"></a>
<a id="trace-7383"></a>
<a id="trace-7393"></a>
<a id="trace-7395"></a>
<a id="trace-7422"></a>
<a id="trace-7424"></a>
<a id="trace-7602"></a>
<a id="trace-7604"></a>
<a id="trace-7624"></a>
<a id="trace-7626"></a>
<a id="trace-7646"></a>
<a id="trace-7648"></a>
<a id="trace-7671"></a>
<a id="trace-7673"></a>
<a id="trace-7685"></a>
<a id="trace-7687"></a>
<a id="trace-7704"></a>
<a id="trace-7706"></a>
<a id="trace-7715"></a>
<a id="trace-7717"></a>
<a id="trace-7797"></a>
<a id="trace-7799"></a>
<a id="trace-8027"></a>
<a id="trace-8029"></a>
<a id="trace-8047"></a>
<a id="trace-8049"></a>
<a id="trace-8073"></a>
<a id="trace-8075"></a>
<a id="trace-8097"></a>
<a id="trace-8099"></a>
<a id="trace-8111"></a>
<a id="trace-8113"></a>
<a id="trace-8138"></a>
<a id="trace-8140"></a>
<a id="trace-8149"></a>
<a id="trace-8151"></a>
<a id="trace-8164"></a>
<a id="trace-8166"></a>
<a id="trace-8179"></a>
<a id="trace-8181"></a>
<a id="trace-8257"></a>
<a id="trace-8259"></a>
<a id="trace-8273"></a>
<a id="trace-8275"></a>
<a id="trace-8293"></a>
<a id="trace-8295"></a>
<a id="trace-8306"></a>
<a id="trace-8308"></a>
<a id="trace-8323"></a>
<a id="trace-8325"></a>
<a id="trace-8331"></a>
<a id="trace-8333"></a>
<a id="trace-8350"></a>
<a id="trace-8352"></a>
<a id="trace-8367"></a>
<a id="trace-8369"></a>
<a id="trace-8383"></a>
<a id="trace-8385"></a>
<a id="trace-8391"></a>
<a id="trace-8393"></a>
<a id="trace-8470"></a>
<a id="trace-8472"></a>
<a id="trace-8486"></a>
<a id="trace-8488"></a>
<a id="trace-8499"></a>
<a id="trace-8501"></a>
<a id="trace-8511"></a>
<a id="trace-8513"></a>
<a id="trace-8687"></a>
<a id="trace-8689"></a>
<a id="trace-8709"></a>
<a id="trace-8711"></a>
<a id="trace-8731"></a>
<a id="trace-8733"></a>
<a id="trace-8743"></a>
<a id="trace-8745"></a>
<a id="trace-8768"></a>
<a id="trace-8770"></a>
<a id="trace-8782"></a>
<a id="trace-8784"></a>
<a id="trace-8858"></a>
<a id="trace-8860"></a>
<a id="trace-8873"></a>
<a id="trace-8875"></a>
<a id="trace-8893"></a>
<a id="trace-8895"></a>
<a id="trace-8915"></a>
<a id="trace-8917"></a>
<a id="trace-8934"></a>
<a id="trace-8936"></a>
<a id="trace-8946"></a>
<a id="trace-8948"></a>
<a id="trace-8980"></a>
<a id="trace-8982"></a>
<a id="trace-8992"></a>
<a id="trace-8994"></a>
<a id="trace-9009"></a>
<a id="trace-9011"></a>
<a id="trace-9023"></a>
<a id="trace-9025"></a>
<a id="trace-9104"></a>
<a id="trace-9106"></a>
<a id="trace-9123"></a>
<a id="trace-9125"></a>
<a id="trace-9139"></a>
<a id="trace-9141"></a>
<a id="trace-9149"></a>
<a id="trace-9151"></a>
<a id="trace-9168"></a>
<a id="trace-9170"></a>
<a id="trace-9181"></a>
<a id="trace-9183"></a>
<a id="trace-9197"></a>
<a id="trace-9199"></a>
<a id="trace-9207"></a>
<a id="trace-9209"></a>
<a id="trace-9229"></a>
<a id="trace-9231"></a>
<a id="trace-9239"></a>
<a id="trace-9241"></a>
<a id="trace-9316"></a>
<a id="trace-9318"></a>
<a id="trace-9326"></a>
<a id="trace-9328"></a>
<a id="trace-9482"></a>
<a id="trace-9484"></a>
<a id="trace-9500"></a>
<a id="trace-9502"></a>
<a id="trace-9528"></a>
<a id="trace-9530"></a>
<a id="trace-9538"></a>
<a id="trace-9540"></a>
<a id="trace-9556"></a>
<a id="trace-9558"></a>
<a id="trace-9577"></a>
<a id="trace-9579"></a>
<a id="trace-9597"></a>
<a id="trace-9599"></a>
<a id="trace-9615"></a>
<a id="trace-9617"></a>
<a id="trace-9697"></a>
<a id="trace-9699"></a>
<a id="trace-9709"></a>
<a id="trace-9711"></a>
<a id="trace-9727"></a>
<a id="trace-9729"></a>
<a id="trace-9742"></a>
<a id="trace-9744"></a>
<a id="trace-9765"></a>
<a id="trace-9767"></a>
<a id="trace-9778"></a>
<a id="trace-9780"></a>
<a id="trace-9799"></a>
<a id="trace-9801"></a>
<a id="trace-9809"></a>
<a id="trace-9811"></a>
<a id="trace-9829"></a>
<a id="trace-9831"></a>
<a id="trace-9841"></a>
<a id="trace-9843"></a>
<a id="trace-9920"></a>
<a id="trace-9922"></a>
<a id="trace-9929"></a>
<a id="trace-9931"></a>
<a id="trace-9952"></a>
<a id="trace-9954"></a>
<a id="trace-9969"></a>
<a id="trace-9971"></a>
<a id="trace-9993"></a>
<a id="trace-9995"></a>
<a id="trace-10014"></a>
<a id="trace-10016"></a>
<a id="trace-10046"></a>
<a id="trace-10048"></a>
<a id="trace-10066"></a>
<a id="trace-10068"></a>
<a id="trace-10097"></a>
<a id="trace-10099"></a>
<a id="trace-10112"></a>
<a id="trace-10114"></a>
<a id="trace-10188"></a>
<a id="trace-10190"></a>
<a id="trace-10196"></a>
<a id="trace-10198"></a>
<a id="trace-10211"></a>
<a id="trace-10213"></a>
<a id="trace-10219"></a>
<a id="trace-10221"></a>
<a id="trace-10234"></a>
<a id="trace-10236"></a>
<a id="trace-10243"></a>
<a id="trace-10245"></a>
<a id="trace-10262"></a>
<a id="trace-10264"></a>
<a id="trace-10274"></a>
<a id="trace-10276"></a>
<a id="trace-10287"></a>
<a id="trace-10289"></a>
<a id="trace-10300"></a>
<a id="trace-10302"></a>
<a id="trace-10379"></a>
<a id="trace-10381"></a>
<a id="trace-10392"></a>
<a id="trace-10394"></a>
<a id="trace-10412"></a>
<a id="trace-10414"></a>
<a id="trace-10425"></a>
<a id="trace-10427"></a>
<a id="trace-10442"></a>
<a id="trace-10444"></a>
<a id="trace-10451"></a>
<a id="trace-10453"></a>
<a id="trace-10470"></a>
<a id="trace-10472"></a>
<a id="trace-10479"></a>
<a id="trace-10481"></a>
<a id="trace-10493"></a>
<a id="trace-10495"></a>
<a id="trace-10504"></a>
<a id="trace-10506"></a>
<a id="trace-10578"></a>
<a id="trace-10580"></a>
<a id="trace-10590"></a>
<a id="trace-10592"></a>
<a id="trace-10607"></a>
<a id="trace-10609"></a>
<a id="trace-10617"></a>
<a id="trace-10619"></a>
<a id="trace-10638"></a>
<a id="trace-10640"></a>
<a id="trace-10652"></a>
<a id="trace-10654"></a>
<a id="trace-10680"></a>
<a id="trace-10682"></a>
<a id="trace-10689"></a>
<a id="trace-10691"></a>
<a id="trace-10702"></a>
<a id="trace-10704"></a>
<a id="trace-10710"></a>
<a id="trace-10712"></a>
<a id="trace-10786"></a>
<a id="trace-10788"></a>
<a id="trace-10796"></a>
<a id="trace-10798"></a>
<a id="trace-10809"></a>
<a id="trace-10811"></a>
<a id="trace-10821"></a>
<a id="trace-10823"></a>
<a id="trace-10836"></a>
<a id="trace-10838"></a>
<a id="trace-10846"></a>
<a id="trace-10848"></a>
<a id="trace-10867"></a>
<a id="trace-10869"></a>
<a id="trace-10880"></a>
<a id="trace-10882"></a>
<a id="trace-10902"></a>
<a id="trace-10904"></a>
<a id="trace-10916"></a>
<a id="trace-10918"></a>
<a id="trace-10993"></a>
<a id="trace-10995"></a>
<a id="trace-11000"></a>
<a id="trace-11002"></a>
<a id="trace-11014"></a>
<a id="trace-11016"></a>
<a id="trace-11024"></a>
<a id="trace-11026"></a>
<a id="trace-11036"></a>
<a id="trace-11038"></a>
<a id="trace-11048"></a>
<a id="trace-11050"></a>
<a id="trace-11068"></a>
<a id="trace-11070"></a>
<a id="trace-11078"></a>
<a id="trace-11080"></a>
<a id="trace-11093"></a>
<a id="trace-11095"></a>
<a id="trace-11103"></a>
<a id="trace-11105"></a>
<a id="trace-11186"></a>
<a id="trace-11188"></a>
<a id="trace-11198"></a>
<a id="trace-11200"></a>
<a id="trace-11218"></a>
<a id="trace-11220"></a>
<a id="trace-11232"></a>
<a id="trace-11234"></a>
<a id="trace-11247"></a>
<a id="trace-11249"></a>
<a id="trace-11258"></a>
<a id="trace-11260"></a>
<a id="trace-11275"></a>
<a id="trace-11277"></a>
<a id="trace-11286"></a>
<a id="trace-11288"></a>
<a id="trace-11302"></a>
<a id="trace-11304"></a>
<a id="trace-11310"></a>
<a id="trace-11312"></a>
<a id="trace-11388"></a>
<a id="trace-11390"></a>
<a id="trace-11397"></a>
<a id="trace-11399"></a>
<a id="trace-11416"></a>
<a id="trace-11418"></a>
<a id="trace-11430"></a>
<a id="trace-11432"></a>
<a id="trace-11446"></a>
<a id="trace-11448"></a>
<a id="trace-11459"></a>
<a id="trace-11461"></a>
<a id="trace-11486"></a>
<a id="trace-11488"></a>
<a id="trace-11501"></a>
<a id="trace-11503"></a>
<a id="trace-11512"></a>
<a id="trace-11514"></a>
<a id="trace-11609"></a>
<a id="trace-11611"></a>
<a id="trace-11689"></a>
<a id="trace-11691"></a>
<a id="trace-11707"></a>
<a id="trace-11709"></a>
<a id="trace-11731"></a>
<a id="trace-11733"></a>
<a id="trace-11746"></a>
<a id="trace-11748"></a>
<a id="trace-11773"></a>
<a id="trace-11775"></a>
<a id="trace-11785"></a>
<a id="trace-11787"></a>
<a id="trace-11807"></a>
<a id="trace-11809"></a>
<a id="trace-11820"></a>
<a id="trace-11822"></a>
<a id="trace-11836"></a>
<a id="trace-11838"></a>
<a id="trace-11853"></a>
<a id="trace-11855"></a>
<a id="trace-11938"></a>
<a id="trace-11940"></a>
<a id="trace-11954"></a>
<a id="trace-11956"></a>
<a id="trace-11979"></a>
<a id="trace-11981"></a>
<a id="trace-11990"></a>
<a id="trace-11992"></a>
<a id="trace-12015"></a>
<a id="trace-12017"></a>
<a id="trace-12080"></a>
<a id="trace-12082"></a>
<a id="trace-12100"></a>
<a id="trace-12102"></a>
<a id="trace-12115"></a>
<a id="trace-12117"></a>
<a id="trace-12134"></a>
<a id="trace-12136"></a>
<a id="trace-12145"></a>
<a id="trace-12147"></a>
<a id="trace-12232"></a>
<a id="trace-12234"></a>
<a id="trace-12248"></a>
<a id="trace-12250"></a>
<a id="trace-12270"></a>
<a id="trace-12272"></a>
<a id="trace-12284"></a>
<a id="trace-12286"></a>
<a id="trace-12307"></a>
<a id="trace-12309"></a>
<a id="trace-12320"></a>
<a id="trace-12322"></a>
<a id="trace-12340"></a>
<a id="trace-12342"></a>
<a id="trace-12356"></a>
<a id="trace-12358"></a>
<a id="trace-12373"></a>
<a id="trace-12375"></a>
<a id="trace-12386"></a>
<a id="trace-12388"></a>
<a id="trace-12468"></a>
<a id="trace-12470"></a>
<a id="trace-12480"></a>
<a id="trace-12482"></a>
<a id="trace-12497"></a>
<a id="trace-12499"></a>
<a id="trace-12512"></a>
<a id="trace-12514"></a>
<a id="trace-12534"></a>
<a id="trace-12536"></a>
<a id="trace-12555"></a>
<a id="trace-12557"></a>
<a id="trace-12571"></a>
<a id="trace-12573"></a>
<a id="trace-12583"></a>
<a id="trace-12585"></a>
<a id="trace-12613"></a>
<a id="trace-12615"></a>
<a id="trace-12624"></a>
<a id="trace-12626"></a>
<a id="trace-12703"></a>
<a id="trace-12705"></a>
<a id="trace-12714"></a>
<a id="trace-12716"></a>
<a id="trace-12739"></a>
<a id="trace-12741"></a>
<a id="trace-12758"></a>
<a id="trace-12760"></a>
<a id="trace-12932"></a>
<a id="trace-12934"></a>
<a id="trace-12951"></a>
<a id="trace-12953"></a>
<a id="trace-12983"></a>
<a id="trace-12985"></a>
<a id="trace-12995"></a>
<a id="trace-12997"></a>
<a id="trace-13015"></a>
<a id="trace-13017"></a>
<a id="trace-13033"></a>
<a id="trace-13035"></a>
<a id="trace-13114"></a>
<a id="trace-13116"></a>
<a id="trace-13138"></a>
<a id="trace-13140"></a>
<a id="trace-13167"></a>
<a id="trace-13169"></a>
<a id="trace-13179"></a>
<a id="trace-13181"></a>
<a id="trace-13202"></a>
<a id="trace-13204"></a>
<a id="trace-13214"></a>
<a id="trace-13216"></a>
<a id="trace-13237"></a>
<a id="trace-13239"></a>
<a id="trace-13252"></a>
<a id="trace-13254"></a>
<a id="trace-13270"></a>
<a id="trace-13272"></a>
<a id="trace-13290"></a>
<a id="trace-13292"></a>
<a id="trace-13371"></a>
<a id="trace-13373"></a>
<a id="trace-13381"></a>
<a id="trace-13383"></a>
<a id="trace-13401"></a>
<a id="trace-13403"></a>
<a id="trace-13415"></a>
<a id="trace-13417"></a>
<a id="trace-13439"></a>
<a id="trace-13441"></a>
<a id="trace-13453"></a>
<a id="trace-13455"></a>
<a id="trace-13477"></a>
<a id="trace-13479"></a>
<a id="trace-13506"></a>
<a id="trace-13508"></a>
<a id="trace-13523"></a>
<a id="trace-13525"></a>
<a id="trace-13604"></a>
<a id="trace-13606"></a>
<a id="trace-13687"></a>
<a id="trace-13689"></a>
<a id="trace-13697"></a>
<a id="trace-13699"></a>
<a id="trace-13725"></a>
<a id="trace-13727"></a>
<a id="trace-13736"></a>
<a id="trace-13738"></a>
<a id="trace-13758"></a>
<a id="trace-13760"></a>
<a id="trace-13775"></a>
<a id="trace-13777"></a>
<a id="trace-13798"></a>
<a id="trace-13800"></a>
<a id="trace-13811"></a>
<a id="trace-13813"></a>
<a id="trace-13831"></a>
<a id="trace-13833"></a>
<a id="trace-13847"></a>
<a id="trace-13849"></a>
<a id="trace-13930"></a>
<a id="trace-13932"></a>
<a id="trace-13943"></a>
<a id="trace-13945"></a>
<a id="trace-13963"></a>
<a id="trace-13965"></a>
<a id="trace-13980"></a>
<a id="trace-13982"></a>
<a id="trace-13997"></a>
<a id="trace-13999"></a>
<a id="trace-14007"></a>
<a id="trace-14009"></a>
<a id="trace-14034"></a>
<a id="trace-14036"></a>
<a id="trace-14046"></a>
<a id="trace-14048"></a>
<a id="trace-14065"></a>
<a id="trace-14067"></a>
<a id="trace-14079"></a>
<a id="trace-14081"></a>
<a id="trace-14165"></a>
<a id="trace-14167"></a>
<a id="trace-14317"></a>
<a id="trace-14319"></a>
<a id="trace-14337"></a>
<a id="trace-14339"></a>
<a id="trace-14494"></a>
<a id="trace-14496"></a>
<a id="trace-14520"></a>
<a id="trace-14522"></a>
<a id="trace-14539"></a>
<a id="trace-14541"></a>
<a id="trace-14578"></a>
<a id="trace-14580"></a>
<a id="trace-14587"></a>
<a id="trace-14589"></a>
<a id="trace-14622"></a>
<a id="trace-14624"></a>
<a id="trace-14644"></a>
<a id="trace-14646"></a>
<a id="trace-14728"></a>
<a id="trace-14730"></a>
<a id="trace-14739"></a>
<a id="trace-14741"></a>
<a id="trace-14764"></a>
<a id="trace-14766"></a>
<a id="trace-14775"></a>
<a id="trace-14777"></a>
<a id="trace-14796"></a>
<a id="trace-14798"></a>
<a id="trace-14811"></a>
<a id="trace-14813"></a>
<a id="trace-14836"></a>
<a id="trace-14838"></a>
<a id="trace-14859"></a>
<a id="trace-14861"></a>
<a id="trace-14883"></a>
<a id="trace-14885"></a>
<a id="trace-14894"></a>
<a id="trace-14896"></a>
<a id="trace-15110"></a>
<a id="trace-15112"></a>
<a id="trace-15125"></a>
<a id="trace-15127"></a>
<a id="trace-15157"></a>
<a id="trace-15159"></a>
<a id="trace-15172"></a>
<a id="trace-15174"></a>
<a id="trace-15195"></a>
<a id="trace-15197"></a>
<a id="trace-15218"></a>
<a id="trace-15220"></a>
<a id="trace-15236"></a>
<a id="trace-15238"></a>
<a id="trace-15251"></a>
<a id="trace-15253"></a>
<a id="trace-15271"></a>
<a id="trace-15273"></a>
<a id="trace-15291"></a>
<a id="trace-15293"></a>
<a id="trace-15370"></a>
<a id="trace-15372"></a>
<a id="trace-15383"></a>
<a id="trace-15385"></a>
<a id="trace-15854"></a>
<a id="trace-15856"></a>
<a id="trace-15878"></a>
<a id="trace-15880"></a>
<a id="trace-15900"></a>
<a id="trace-15902"></a>
<a id="trace-16450"></a>
<a id="trace-16452"></a>
<a id="trace-16471"></a>
<a id="trace-16473"></a>
<a id="trace-16501"></a>
<a id="trace-16503"></a>
<a id="trace-16518"></a>
<a id="trace-16520"></a>
<a id="trace-16532"></a>
<a id="trace-16534"></a>
<a id="trace-16618"></a>
<a id="trace-16620"></a>
<a id="trace-16639"></a>
<a id="trace-16641"></a>
<a id="trace-16656"></a>
<a id="trace-16658"></a>
<a id="trace-16755"></a>
<a id="trace-16757"></a>
<a id="trace-16775"></a>
<a id="trace-16777"></a>
<a id="trace-16791"></a>
<a id="trace-16793"></a>
<a id="trace-16805"></a>
<a id="trace-16807"></a>
<a id="trace-16818"></a>
<a id="trace-16820"></a>
<a id="trace-16840"></a>
<a id="trace-16842"></a>
<a id="trace-16855"></a>
<a id="trace-16857"></a>
<a id="trace-16929"></a>
<a id="trace-16931"></a>
<a id="trace-16939"></a>
<a id="trace-16941"></a>
<a id="trace-16962"></a>
<a id="trace-16964"></a>
<a id="trace-16974"></a>
<a id="trace-16976"></a>
<a id="trace-16987"></a>
<a id="trace-16989"></a>
<a id="trace-17001"></a>
<a id="trace-17003"></a>
<a id="trace-17018"></a>
<a id="trace-17020"></a>
<a id="trace-17029"></a>
<a id="trace-17031"></a>
<a id="trace-17043"></a>
<a id="trace-17045"></a>
<a id="trace-17049"></a>
<a id="trace-17051"></a>
<a id="trace-17119"></a>
<a id="trace-17121"></a>
<a id="trace-17125"></a>
<a id="trace-17127"></a>
<a id="trace-17144"></a>
<a id="trace-17146"></a>
<a id="trace-17155"></a>
<a id="trace-17157"></a>
<a id="trace-17171"></a>
<a id="trace-17173"></a>
<a id="trace-17185"></a>
<a id="trace-17187"></a>
<a id="trace-17203"></a>
<a id="trace-17205"></a>
<a id="trace-17212"></a>
<a id="trace-17214"></a>
<a id="trace-17227"></a>
<a id="trace-17229"></a>
<a id="trace-17238"></a>
<a id="trace-17240"></a>
<a id="trace-17312"></a>
<a id="trace-17314"></a>
<a id="trace-17320"></a>
<a id="trace-17322"></a>
<a id="trace-17338"></a>
<a id="trace-17340"></a>
<a id="trace-17348"></a>
<a id="trace-17350"></a>
<a id="trace-17493"></a>
<a id="trace-17495"></a>
<a id="trace-17509"></a>
<a id="trace-17511"></a>
<a id="trace-17526"></a>
<a id="trace-17528"></a>
<a id="trace-17541"></a>
<a id="trace-17543"></a>
<a id="trace-17561"></a>
<a id="trace-17563"></a>
<a id="trace-17577"></a>
<a id="trace-17579"></a>
<a id="trace-17659"></a>
<a id="trace-17661"></a>
<a id="trace-17681"></a>
<a id="trace-17683"></a>
<a id="trace-17698"></a>
<a id="trace-17700"></a>
<a id="trace-17711"></a>
<a id="trace-17713"></a>
<a id="trace-17732"></a>
<a id="trace-17734"></a>
<a id="trace-17745"></a>
<a id="trace-17747"></a>
<a id="trace-17762"></a>
<a id="trace-17764"></a>
<a id="trace-17776"></a>
<a id="trace-17778"></a>
<a id="trace-17795"></a>
<a id="trace-17797"></a>
<a id="trace-17813"></a>
<a id="trace-17815"></a>
<a id="trace-17887"></a>
<a id="trace-17889"></a>
<a id="trace-17899"></a>
<a id="trace-17901"></a>
<a id="trace-17924"></a>
<a id="trace-17926"></a>
<a id="trace-17938"></a>
<a id="trace-17940"></a>
<a id="trace-17962"></a>
<a id="trace-17964"></a>
<a id="trace-17979"></a>
<a id="trace-17981"></a>
<a id="trace-17998"></a>
<a id="trace-18000"></a>
<a id="trace-18016"></a>
<a id="trace-18018"></a>
<a id="trace-18088"></a>
<a id="trace-18090"></a>
<a id="trace-18098"></a>
<a id="trace-18100"></a>
<a id="trace-18184"></a>
<a id="trace-18186"></a>
<a id="trace-18198"></a>
<a id="trace-18200"></a>
<a id="trace-18218"></a>
<a id="trace-18220"></a>
<a id="trace-18231"></a>
<a id="trace-18233"></a>
<a id="trace-18253"></a>
<a id="trace-18255"></a>
<a id="trace-18278"></a>
<a id="trace-18280"></a>
<a id="trace-18293"></a>
<a id="trace-18295"></a>
<a id="trace-18312"></a>
<a id="trace-18314"></a>
<a id="trace-18336"></a>
<a id="trace-18338"></a>
<a id="trace-18345"></a>
<a id="trace-18347"></a>
<a id="trace-18424"></a>
<a id="trace-18426"></a>
<a id="trace-18439"></a>
<a id="trace-18441"></a>
<a id="trace-18456"></a>
<a id="trace-18458"></a>
<a id="trace-18475"></a>
<a id="trace-18477"></a>
<a id="trace-18492"></a>
<a id="trace-18494"></a>
<a id="trace-18503"></a>
<a id="trace-18505"></a>
<a id="trace-18522"></a>
<a id="trace-18524"></a>
<a id="trace-18540"></a>
<a id="trace-18542"></a>
<a id="trace-18566"></a>
<a id="trace-18568"></a>
<a id="trace-18581"></a>
<a id="trace-18583"></a>
<a id="trace-18661"></a>
<a id="trace-18663"></a>
<a id="trace-18682"></a>
<a id="trace-18684"></a>
<a id="trace-18703"></a>
<a id="trace-18705"></a>
<a id="trace-18722"></a>
<a id="trace-18724"></a>
<a id="trace-18745"></a>
<a id="trace-18747"></a>
<a id="trace-18758"></a>
<a id="trace-18760"></a>
<a id="trace-18773"></a>
<a id="trace-18775"></a>
<a id="trace-18783"></a>
<a id="trace-18785"></a>
<a id="trace-18804"></a>
<a id="trace-18806"></a>
<a id="trace-18820"></a>
<a id="trace-18822"></a>
<a id="trace-18897"></a>
<a id="trace-18899"></a>
<a id="trace-18908"></a>
<a id="trace-18910"></a>
<a id="trace-18927"></a>
<a id="trace-18929"></a>
<a id="trace-18941"></a>
<a id="trace-18943"></a>
<a id="trace-18959"></a>
<a id="trace-18961"></a>
<a id="trace-18975"></a>
<a id="trace-18977"></a>
<a id="trace-18992"></a>
<a id="trace-18994"></a>
<a id="trace-19007"></a>
<a id="trace-19009"></a>
<a id="trace-19022"></a>
<a id="trace-19024"></a>
<a id="trace-19030"></a>
<a id="trace-19032"></a>
<a id="trace-19105"></a>
<a id="trace-19107"></a>
<a id="trace-19118"></a>
<a id="trace-19120"></a>
<a id="trace-19132"></a>
<a id="trace-19134"></a>
<a id="trace-19143"></a>
<a id="trace-19145"></a>
<a id="trace-19160"></a>
<a id="trace-19162"></a>
<a id="trace-19173"></a>
<a id="trace-19175"></a>
<a id="trace-19188"></a>
<a id="trace-19190"></a>
<a id="trace-19204"></a>
<a id="trace-19206"></a>
<a id="trace-19219"></a>
<a id="trace-19221"></a>
<a id="trace-19233"></a>
<a id="trace-19235"></a>
<a id="trace-19313"></a>
<a id="trace-19315"></a>
<a id="trace-19322"></a>
<a id="trace-19324"></a>
<a id="trace-19337"></a>
<a id="trace-19339"></a>
<a id="trace-19349"></a>
<a id="trace-19351"></a>
<a id="trace-19366"></a>
<a id="trace-19368"></a>
<a id="trace-19376"></a>
<a id="trace-19378"></a>
<a id="trace-19390"></a>
<a id="trace-19392"></a>
<a id="trace-19399"></a>
<a id="trace-19401"></a>
<a id="trace-19417"></a>
<a id="trace-19419"></a>
<a id="trace-19427"></a>
<a id="trace-19429"></a>
<a id="trace-19502"></a>
<a id="trace-19504"></a>
<a id="trace-19517"></a>
<a id="trace-19519"></a>
<a id="trace-19532"></a>
<a id="trace-19534"></a>
<a id="trace-19542"></a>
<a id="trace-19544"></a>
<a id="trace-19560"></a>
<a id="trace-19562"></a>
<a id="trace-19580"></a>
<a id="trace-19582"></a>
<a id="trace-19594"></a>
<a id="trace-19596"></a>
<a id="trace-19606"></a>
<a id="trace-19608"></a>
<a id="trace-19621"></a>
<a id="trace-19623"></a>
<a id="trace-19629"></a>
<a id="trace-19631"></a>
<a id="trace-19703"></a>
<a id="trace-19705"></a>
<a id="trace-19715"></a>
<a id="trace-19717"></a>
<a id="trace-19727"></a>
<a id="trace-19729"></a>
<a id="trace-19740"></a>
<a id="trace-19742"></a>
<a id="trace-19755"></a>
<a id="trace-19757"></a>
<a id="trace-19769"></a>
<a id="trace-19771"></a>
<a id="trace-19785"></a>
<a id="trace-19787"></a>
<a id="trace-19801"></a>
<a id="trace-19803"></a>
<a id="trace-19820"></a>
<a id="trace-19822"></a>
<a id="trace-19833"></a>
<a id="trace-19835"></a>
<a id="trace-19910"></a>
<a id="trace-19912"></a>
<a id="trace-19918"></a>
<a id="trace-19920"></a>
<a id="trace-19931"></a>
<a id="trace-19933"></a>
<a id="trace-19943"></a>
<a id="trace-19945"></a>
<a id="trace-19957"></a>
<a id="trace-19959"></a>
<a id="trace-19969"></a>
<a id="trace-19971"></a>
<a id="trace-19984"></a>
<a id="trace-19986"></a>
<a id="trace-19994"></a>
<a id="trace-19996"></a>
<a id="trace-20012"></a>
<a id="trace-20014"></a>
<a id="trace-20025"></a>
<a id="trace-20027"></a>
<a id="trace-20101"></a>
<a id="trace-20103"></a>
<a id="trace-20113"></a>
<a id="trace-20115"></a>
<a id="trace-20134"></a>
<a id="trace-20136"></a>
<a id="trace-20143"></a>
<a id="trace-20145"></a>
<a id="trace-20161"></a>
<a id="trace-20163"></a>
<a id="trace-20172"></a>
<a id="trace-20174"></a>
<a id="trace-20184"></a>
<a id="trace-20186"></a>
<a id="trace-20198"></a>
<a id="trace-20200"></a>
<a id="trace-20213"></a>
<a id="trace-20215"></a>
<a id="trace-20220"></a>
<a id="trace-20222"></a>
<a id="trace-20295"></a>
<a id="trace-20297"></a>
<a id="trace-20307"></a>
<a id="trace-20309"></a>
<a id="trace-20325"></a>
<a id="trace-20327"></a>
<a id="trace-20336"></a>
<a id="trace-20338"></a>
<a id="trace-20352"></a>
<a id="trace-20354"></a>
<a id="trace-20364"></a>
<a id="trace-20366"></a>
<a id="trace-20383"></a>
<a id="trace-20385"></a>
<a id="trace-20403"></a>
<a id="trace-20405"></a>
<a id="trace-20415"></a>
<a id="trace-20417"></a>
<a id="trace-20428"></a>
<a id="trace-20430"></a>
<a id="trace-20504"></a>
<a id="trace-20506"></a>
<a id="trace-20513"></a>
<a id="trace-20515"></a>
<a id="trace-20526"></a>
<a id="trace-20528"></a>
<a id="trace-20538"></a>
<a id="trace-20540"></a>
<a id="trace-20553"></a>
<a id="trace-20555"></a>
<a id="trace-20572"></a>
<a id="trace-20574"></a>
<a id="trace-20595"></a>
<a id="trace-20597"></a>
<a id="trace-20666"></a>
<a id="trace-20668"></a>
<a id="trace-20687"></a>
<a id="trace-20689"></a>
<a id="trace-20711"></a>
<a id="trace-20713"></a>
<a id="trace-20797"></a>
<a id="trace-20799"></a>
<a id="trace-20809"></a>
<a id="trace-20811"></a>
<a id="trace-20826"></a>
<a id="trace-20828"></a>
<a id="trace-20835"></a>
<a id="trace-20837"></a>
<a id="trace-20859"></a>
<a id="trace-20861"></a>
<a id="trace-20873"></a>
<a id="trace-20875"></a>
<a id="trace-20894"></a>
<a id="trace-20896"></a>
<a id="trace-20912"></a>
<a id="trace-20914"></a>
<a id="trace-20985"></a>
<a id="trace-20987"></a>
<a id="trace-20999"></a>
<a id="trace-21001"></a>
<a id="trace-21080"></a>
<a id="trace-21082"></a>
<a id="trace-21094"></a>
<a id="trace-21096"></a>
<a id="trace-21118"></a>
<a id="trace-21120"></a>
<a id="trace-21140"></a>
<a id="trace-21142"></a>
<a id="trace-21165"></a>
<a id="trace-21167"></a>
<a id="trace-21176"></a>
<a id="trace-21178"></a>
<a id="trace-21198"></a>
<a id="trace-21200"></a>
<a id="trace-21215"></a>
<a id="trace-21217"></a>
<a id="trace-21229"></a>
<a id="trace-21231"></a>
<a id="trace-21240"></a>
<a id="trace-21242"></a>
<a id="trace-21320"></a>
<a id="trace-21322"></a>
<a id="trace-21333"></a>
<a id="trace-21335"></a>
<a id="trace-21353"></a>
<a id="trace-21355"></a>
<a id="trace-21366"></a>
<a id="trace-21368"></a>
<a id="trace-21386"></a>
<a id="trace-21388"></a>
<a id="trace-21407"></a>
<a id="trace-21409"></a>
<a id="trace-21425"></a>
<a id="trace-21427"></a>
<a id="trace-21442"></a>
<a id="trace-21444"></a>
<a id="trace-21521"></a>
<a id="trace-21523"></a>
<a id="trace-21541"></a>
<a id="trace-21543"></a>
<a id="trace-21624"></a>
<a id="trace-21626"></a>
<a id="trace-21640"></a>
<a id="trace-21642"></a>
<a id="trace-21659"></a>
<a id="trace-21661"></a>
<a id="trace-21670"></a>
<a id="trace-21672"></a>
<a id="trace-21689"></a>
<a id="trace-21691"></a>
<a id="trace-21702"></a>
<a id="trace-21704"></a>
<a id="trace-21826"></a>
<a id="trace-21828"></a>
<a id="trace-21846"></a>
<a id="trace-21848"></a>
<a id="trace-21871"></a>
<a id="trace-21873"></a>
<a id="trace-21882"></a>
<a id="trace-21884"></a>
<a id="trace-21970"></a>
<a id="trace-21972"></a>
<a id="trace-21992"></a>
<a id="trace-21994"></a>
<a id="trace-22016"></a>
<a id="trace-22018"></a>
<a id="trace-22028"></a>
<a id="trace-22030"></a>
<a id="trace-22051"></a>
<a id="trace-22053"></a>
<a id="trace-22064"></a>
<a id="trace-22066"></a>
<a id="trace-22085"></a>
<a id="trace-22087"></a>
<a id="trace-22100"></a>
<a id="trace-22102"></a>
<a id="trace-22173"></a>
<a id="trace-22175"></a>
<a id="trace-22186"></a>
<a id="trace-22188"></a>
<a id="trace-22263"></a>
<a id="trace-22265"></a>
<a id="trace-22274"></a>
<a id="trace-22276"></a>
<a id="trace-22297"></a>
<a id="trace-22299"></a>
<a id="trace-22323"></a>
<a id="trace-22325"></a>
<a id="trace-22347"></a>
<a id="trace-22349"></a>
<a id="trace-22363"></a>
<a id="trace-22365"></a>
<a id="trace-22388"></a>
<a id="trace-22390"></a>
<a id="trace-22398"></a>
<a id="trace-22400"></a>
<a id="trace-22416"></a>
<a id="trace-22418"></a>
<a id="trace-22429"></a>
<a id="trace-22431"></a>
<a id="trace-22508"></a>
<a id="trace-22510"></a>
<a id="trace-22521"></a>
<a id="trace-22523"></a>
<a id="trace-22540"></a>
<a id="trace-22542"></a>
<a id="trace-22551"></a>
<a id="trace-22553"></a>
<a id="trace-22575"></a>
<a id="trace-22577"></a>
<a id="trace-22586"></a>
<a id="trace-22588"></a>
<a id="trace-22604"></a>
<a id="trace-22606"></a>
<a id="trace-22624"></a>
<a id="trace-22626"></a>
<a id="trace-22896"></a>
<a id="trace-22898"></a>
<a id="trace-22910"></a>
<a id="trace-22912"></a>
<a id="trace-22995"></a>
<a id="trace-22997"></a>
<a id="trace-23004"></a>
<a id="trace-23006"></a>
<a id="trace-23026"></a>
<a id="trace-23028"></a>
<a id="trace-23040"></a>
<a id="trace-23042"></a>
<a id="trace-23052"></a>
<a id="trace-23054"></a>
<a id="trace-23065"></a>
<a id="trace-23067"></a>
<a id="trace-23134"></a>
<a id="trace-23136"></a>
<a id="trace-23152"></a>
<a id="trace-23154"></a>
<a id="trace-23168"></a>
<a id="trace-23170"></a>
<a id="trace-23178"></a>
<a id="trace-23180"></a>
<a id="trace-23255"></a>
<a id="trace-23257"></a>
<a id="trace-23265"></a>
<a id="trace-23267"></a>
<a id="trace-23282"></a>
<a id="trace-23284"></a>
<a id="trace-23295"></a>
<a id="trace-23297"></a>
<a id="trace-23314"></a>
<a id="trace-23316"></a>
<a id="trace-23327"></a>
<a id="trace-23329"></a>
<a id="trace-23343"></a>
<a id="trace-23345"></a>
<a id="trace-23356"></a>
<a id="trace-23358"></a>
<a id="trace-23373"></a>
<a id="trace-23375"></a>
<a id="trace-23385"></a>
<a id="trace-23387"></a>
<a id="trace-23455"></a>
<a id="trace-23457"></a>
<a id="trace-23465"></a>
<a id="trace-23467"></a>
<a id="trace-23485"></a>
<a id="trace-23487"></a>
<a id="trace-23498"></a>
<a id="trace-23500"></a>
<a id="trace-23519"></a>
<a id="trace-23521"></a>
<a id="trace-23530"></a>
<a id="trace-23532"></a>
<a id="trace-23550"></a>
<a id="trace-23552"></a>
<a id="trace-23562"></a>
<a id="trace-23564"></a>
<a id="trace-23579"></a>
<a id="trace-23581"></a>
<a id="trace-23588"></a>
<a id="trace-23590"></a>
<a id="trace-23665"></a>
<a id="trace-23667"></a>
<a id="trace-23684"></a>
<a id="trace-23686"></a>
<a id="trace-23700"></a>
<a id="trace-23702"></a>
<a id="trace-23720"></a>
<a id="trace-23722"></a>
<a id="trace-23738"></a>
<a id="trace-23740"></a>
<a id="trace-23748"></a>
<a id="trace-23750"></a>
<a id="trace-23764"></a>
<a id="trace-23766"></a>
<a id="trace-23778"></a>
<a id="trace-23780"></a>
<a id="trace-23801"></a>
<a id="trace-23803"></a>
<a id="trace-23877"></a>
<a id="trace-23879"></a>
<a id="trace-23886"></a>
<a id="trace-23888"></a>
<a id="trace-23902"></a>
<a id="trace-23904"></a>
<a id="trace-23923"></a>
<a id="trace-23925"></a>
<a id="trace-23943"></a>
<a id="trace-23945"></a>
<a id="trace-23959"></a>
<a id="trace-23961"></a>
<a id="trace-23983"></a>
<a id="trace-23985"></a>
<a id="trace-24004"></a>
<a id="trace-24006"></a>
<a id="trace-24020"></a>
<a id="trace-24022"></a>
<a id="trace-24027"></a>
<a id="trace-24029"></a>
<a id="trace-24112"></a>
<a id="trace-24114"></a>
<a id="trace-24120"></a>
<a id="trace-24122"></a>
<a id="trace-24135"></a>
<a id="trace-24137"></a>
<a id="trace-24145"></a>
<a id="trace-24147"></a>
<a id="trace-24163"></a>
<a id="trace-24165"></a>
<a id="trace-24181"></a>
<a id="trace-24183"></a>
<a id="trace-24195"></a>
<a id="trace-24197"></a>
<a id="trace-24212"></a>
<a id="trace-24214"></a>
<a id="trace-24234"></a>
<a id="trace-24236"></a>
<a id="trace-24244"></a>
<a id="trace-24246"></a>
<a id="trace-24316"></a>
<a id="trace-24318"></a>
<a id="trace-24337"></a>
<a id="trace-24339"></a>
<a id="trace-24346"></a>
<a id="trace-24348"></a>
<a id="trace-24361"></a>
<a id="trace-24363"></a>
<a id="trace-24371"></a>
<a id="trace-24373"></a>
<a id="trace-24385"></a>
<a id="trace-24387"></a>
<a id="trace-24402"></a>
<a id="trace-24404"></a>
<a id="trace-24416"></a>
<a id="trace-24418"></a>
<a id="trace-24432"></a>
<a id="trace-24434"></a>
<a id="trace-24506"></a>
<a id="trace-24508"></a>
<a id="trace-24514"></a>
<a id="trace-24516"></a>
<a id="trace-24532"></a>
<a id="trace-24534"></a>
<a id="trace-24547"></a>
<a id="trace-24549"></a>
<a id="trace-24566"></a>
<a id="trace-24568"></a>
<a id="trace-24578"></a>
<a id="trace-24580"></a>
<a id="trace-24591"></a>
<a id="trace-24593"></a>
<a id="trace-24602"></a>
<a id="trace-24604"></a>
<a id="trace-24618"></a>
<a id="trace-24620"></a>
<a id="trace-24629"></a>
<a id="trace-24631"></a>
<a id="trace-24702"></a>
<a id="trace-24704"></a>
<a id="trace-24728"></a>
<a id="trace-24730"></a>
<a id="trace-24735"></a>
<a id="trace-24737"></a>
<a id="trace-24755"></a>
<a id="trace-24757"></a>
<a id="trace-24768"></a>
<a id="trace-24770"></a>
<a id="trace-24783"></a>
<a id="trace-24785"></a>
<a id="trace-24805"></a>
<a id="trace-24807"></a>
<a id="trace-24819"></a>
<a id="trace-24821"></a>
<a id="trace-24827"></a>
<a id="trace-24829"></a>
<a id="trace-24899"></a>
<a id="trace-24901"></a>
<a id="trace-24910"></a>
<a id="trace-24912"></a>
<a id="trace-24923"></a>
<a id="trace-24925"></a>
<a id="trace-24938"></a>
<a id="trace-24940"></a>
<a id="trace-24953"></a>
<a id="trace-24955"></a>
<a id="trace-24964"></a>
<a id="trace-24966"></a>
<a id="trace-24979"></a>
<a id="trace-24981"></a>
<a id="trace-24994"></a>
<a id="trace-24996"></a>
<a id="trace-25011"></a>
<a id="trace-25013"></a>
<a id="trace-25021"></a>
<a id="trace-25023"></a>
<a id="trace-25102"></a>
<a id="trace-25104"></a>
<a id="trace-25114"></a>
<a id="trace-25116"></a>
<a id="trace-25128"></a>
<a id="trace-25130"></a>
<a id="trace-25139"></a>
<a id="trace-25141"></a>
<a id="trace-25165"></a>
<a id="trace-25167"></a>
<a id="trace-25179"></a>
<a id="trace-25181"></a>
<a id="trace-25192"></a>
<a id="trace-25194"></a>
<a id="trace-25209"></a>
<a id="trace-25211"></a>
<a id="trace-25218"></a>
<a id="trace-25220"></a>
- 1.60s–359.80s (×1424), actor 37, squad 4 (trace 546): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5000620583233419, 'next_transition': 574}.
<a id="trace-799"></a>
<a id="trace-801"></a>
<a id="trace-884"></a>
<a id="trace-886"></a>
<a id="trace-912"></a>
<a id="trace-914"></a>
<a id="trace-943"></a>
<a id="trace-945"></a>
<a id="trace-970"></a>
<a id="trace-972"></a>
<a id="trace-1014"></a>
<a id="trace-1016"></a>
<a id="trace-1105"></a>
<a id="trace-1107"></a>
<a id="trace-1351"></a>
<a id="trace-1353"></a>
<a id="trace-1375"></a>
<a id="trace-1377"></a>
<a id="trace-1399"></a>
<a id="trace-1401"></a>
<a id="trace-1435"></a>
<a id="trace-1437"></a>
- 5.70s–12.20s (×22), actor 5, squad 0 (trace 799): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 713. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.622923235134939, 'next_transition': 884}.
<a id="trace-1112"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1112): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1034. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.2303290263217015, 'next_transition': 134}.
<a id="trace-1113"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1113): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1034. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.2303290263217015, 'next_transition': 134}.
<a id="trace-133"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 133): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575000416120977, 'next_transition': 1463}.
<a id="trace-134"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 134): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.987236301316829, 'next_transition': 2095}.
<a id="trace-1442"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1442): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1442. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575000416120977, 'next_transition': 1463}.
<a id="trace-1443"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1443): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1443. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575000416120977, 'next_transition': 1463}.
<a id="trace-1444"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1444): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1444. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.987236301316829, 'next_transition': 2095}.
<a id="trace-1445"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1445): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1445. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.987236301316829, 'next_transition': 2095}.
<a id="trace-1463"></a>
<a id="trace-1465"></a>
- 12.70s–12.70s (×2), actor 5, squad 0 (trace 1463): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1445. Next observer evidence: None.
<a id="trace-1472"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1472): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1026. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4804965522833002, 'next_transition': 1994}.
<a id="trace-1473"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1473): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1026. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4804965522833002, 'next_transition': 1994}.
<a id="trace-1994"></a>
<a id="trace-1996"></a>
<a id="trace-2020"></a>
<a id="trace-2022"></a>
<a id="trace-3430"></a>
<a id="trace-3432"></a>
<a id="trace-4238"></a>
<a id="trace-4240"></a>
<a id="trace-4361"></a>
<a id="trace-4363"></a>
- 13.20s–17.75s (×10), actor 5, squad 0 (trace 1994): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1445. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4134345779017986, 'next_transition': 2020}.
<a id="trace-2095"></a>
- 14.85s–14.85s (×1), actor 8, squad 1 (trace 2095): ReactToContact: cover and return fire. Knowledge: actor memory at 10.00s, trace 1034. Next observer evidence: None.
<a id="trace-2096"></a>
- 14.85s–14.85s (×1), actor 8, squad 1 (trace 2096): bounding overwatch. Knowledge: actor memory at 10.00s, trace 1034. Next observer evidence: None.
<a id="trace-2097"></a>
<a id="trace-2413"></a>
<a id="trace-2755"></a>
<a id="trace-3112"></a>
<a id="trace-3528"></a>
<a id="trace-3876"></a>
- 14.85s–16.10s (×6), actor 8, squad 1 (trace 2097): new contact inside 100 m. Knowledge: actor memory at 10.00s, trace 1034. Next observer evidence: None.
<a id="trace-4368"></a>
- 17.75s–17.75s (×1), actor 0, squad 0 (trace 4368): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2728. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6753389881427194, 'next_transition': 5006}.
<a id="trace-4369"></a>
- 17.75s–17.75s (×1), actor 0, squad 0 (trace 4369): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2728. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6753389881427194, 'next_transition': 5006}.
<a id="trace-4370"></a>
- 17.75s–17.75s (×1), actor 0, squad 0 (trace 4370): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2728. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6753389881427194, 'next_transition': 5006}.
<a id="trace-5006"></a>
<a id="trace-5008"></a>
<a id="trace-5051"></a>
<a id="trace-5053"></a>
<a id="trace-5075"></a>
<a id="trace-5077"></a>
<a id="trace-5174"></a>
<a id="trace-5176"></a>
<a id="trace-5216"></a>
<a id="trace-5218"></a>
- 18.75s–20.75s (×10), actor 5, squad 0 (trace 5006): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2733. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7451992229356307, 'next_transition': 5051}.
<a id="trace-5087"></a>
- 19.95s–19.95s (×1), actor 9, squad 1 (trace 5087): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 2737. Next observer evidence: {'until': 22, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.152190975449315, 'next_transition': 5307}.
<a id="trace-5275"></a>
- 21.45s–21.45s (×1), actor 0, squad 0 (trace 5275): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 5089. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29925022423249814, 'next_transition': 5282}.
<a id="trace-5282"></a>
<a id="trace-5284"></a>
<a id="trace-5316"></a>
<a id="trace-5318"></a>
<a id="trace-5343"></a>
<a id="trace-5345"></a>
- 21.75s–22.75s (×6), actor 5, squad 0 (trace 5282): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5094. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.079991309765586, 'next_transition': 5316}.
<a id="trace-5307"></a>
- 22.10s–22.10s (×1), actor 9, squad 1 (trace 5307): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 20.00s, trace 5097. Next observer evidence: {'until': 52, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.9620499999999996, 'next_transition': None}.
<a id="trace-5352"></a>
- 22.75s–22.75s (×1), actor 0, squad 0 (trace 5352): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 5089. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6074250438392863, 'next_transition': 6183}.
<a id="trace-6183"></a>
<a id="trace-6185"></a>
<a id="trace-6207"></a>
<a id="trace-6209"></a>
<a id="trace-6256"></a>
<a id="trace-6364"></a>
<a id="trace-6391"></a>
<a id="trace-6393"></a>
<a id="trace-6428"></a>
<a id="trace-6430"></a>
- 23.25s–26.25s (×10), actor 5, squad 0 (trace 6183): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5094. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3600026719935873, 'next_transition': 6207}.
<a id="trace-6439"></a>
- 26.35s–26.35s (×1), actor 0, squad 0 (trace 6439): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 6296. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3600067155883112, 'next_transition': 6884}.
<a id="trace-6440"></a>
- 26.35s–26.35s (×1), actor 0, squad 0 (trace 6440): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 6296. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3600067155883112, 'next_transition': 6884}.
<a id="trace-6884"></a>
<a id="trace-6886"></a>
<a id="trace-6906"></a>
<a id="trace-6908"></a>
<a id="trace-6936"></a>
<a id="trace-6938"></a>
<a id="trace-6959"></a>
<a id="trace-6961"></a>
<a id="trace-6981"></a>
<a id="trace-6983"></a>
<a id="trace-7135"></a>
<a id="trace-7137"></a>
<a id="trace-7236"></a>
<a id="trace-7269"></a>
<a id="trace-7379"></a>
<a id="trace-7391"></a>
- 26.75s–35.75s (×16), actor 5, squad 0 (trace 6884): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 6300. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6202029817128977, 'next_transition': 6906}.
<a id="trace-7398"></a>
- 35.80s–35.80s (×1), actor 1, squad 0 (trace 7398): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 35.00s, trace 7314. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1939043130128333, 'next_transition': 7420}.
<a id="trace-7399"></a>
- 35.80s–35.80s (×1), actor 1, squad 0 (trace 7399): NeedSupport. Knowledge: actor memory at 35.00s, trace 7314. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1939043130128333, 'next_transition': 7420}.
<a id="trace-7420"></a>
- 36.25s–36.25s (×1), actor 5, squad 0 (trace 7420): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 7317. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6086191864129987, 'next_transition': 7600}.
<a id="trace-7427"></a>
- 36.25s–36.25s (×1), actor 1, squad 0 (trace 7427): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 7314. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6086191864129987, 'next_transition': 7600}.
<a id="trace-7432"></a>
- 36.25s–36.25s (×1), actor 1, squad 0 (trace 7432): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 7314. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6086191864129987, 'next_transition': 7600}.
<a id="trace-7433"></a>
- 36.25s–36.25s (×1), actor 1, squad 0 (trace 7433): Reorganise complete: known contact. Knowledge: actor memory at 35.00s, trace 7314. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6086191864129987, 'next_transition': 7600}.
<a id="trace-7600"></a>
<a id="trace-7622"></a>
<a id="trace-7644"></a>
- 36.75s–37.75s (×3), actor 5, squad 0 (trace 7600): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 7317. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0481242062532619, 'next_transition': 7622}.
<a id="trace-7657"></a>
- 38.05s–38.05s (×1), actor 1, squad 0 (trace 7657): NeedSupport. Knowledge: actor memory at 35.00s, trace 7314. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7800129878915314, 'next_transition': 570}.
<a id="trace-570"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (events line 570): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7721"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 7721): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.071793 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 7721. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8137381274158056, 'next_transition': 7802}.
<a id="trace-7722"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 7722): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.071793 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 7722. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8137381274158056, 'next_transition': 7802}.
<a id="trace-7802"></a>
- 40.30s–40.30s (×1), actor 1, squad 0 (trace 7802): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 7726. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.805102697181479, 'next_transition': 8095}.
<a id="trace-7803"></a>
- 40.30s–40.30s (×1), actor 1, squad 0 (trace 7803): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 7726. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.805102697181479, 'next_transition': 8095}.
<a id="trace-8095"></a>
<a id="trace-8109"></a>
<a id="trace-8136"></a>
<a id="trace-8177"></a>
<a id="trace-8255"></a>
<a id="trace-8271"></a>
<a id="trace-8291"></a>
<a id="trace-8304"></a>
<a id="trace-8321"></a>
<a id="trace-8365"></a>
<a id="trace-8381"></a>
<a id="trace-8389"></a>
<a id="trace-8468"></a>
<a id="trace-8484"></a>
<a id="trace-8497"></a>
<a id="trace-8509"></a>
- 42.25s–51.75s (×16), actor 5, squad 0 (trace 8095): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7729. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000182573353, 'next_transition': 8109}.
<a id="trace-8518"></a>
- 51.90s–51.90s (×1), actor 1, squad 0 (trace 8518): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 8399. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8685}.
<a id="trace-8519"></a>
- 51.90s–51.90s (×1), actor 1, squad 0 (trace 8519): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 8399. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8685}.
<a id="trace-8685"></a>
<a id="trace-8707"></a>
<a id="trace-8729"></a>
<a id="trace-8766"></a>
<a id="trace-8780"></a>
<a id="trace-8856"></a>
<a id="trace-8871"></a>
<a id="trace-8891"></a>
<a id="trace-8932"></a>
<a id="trace-8944"></a>
<a id="trace-8978"></a>
<a id="trace-8990"></a>
<a id="trace-9021"></a>
<a id="trace-9102"></a>
<a id="trace-9137"></a>
<a id="trace-9147"></a>
<a id="trace-9166"></a>
<a id="trace-9179"></a>
<a id="trace-9195"></a>
<a id="trace-9205"></a>
<a id="trace-9227"></a>
<a id="trace-9237"></a>
<a id="trace-9314"></a>
<a id="trace-9324"></a>
- 52.25s–65.75s (×24), actor 5, squad 0 (trace 8685): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 8402. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8707}.
<a id="trace-9331"></a>
- 65.85s–65.85s (×1), actor 1, squad 0 (trace 9331): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 9250. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3675038474680214, 'next_transition': 9480}.
<a id="trace-9408"></a>
- 65.85s–65.85s (×1), actor 1, squad 0 (trace 9408): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 9250. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3675038474680214, 'next_transition': 9480}.
<a id="trace-9480"></a>
<a id="trace-9498"></a>
<a id="trace-9526"></a>
<a id="trace-9536"></a>
<a id="trace-9554"></a>
<a id="trace-9575"></a>
<a id="trace-9595"></a>
- 66.25s–69.25s (×7), actor 5, squad 0 (trace 9480): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 9253. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624450386604787, 'next_transition': 9498}.
<a id="trace-9609"></a>
- 69.70s–69.70s (×1), actor 1, squad 0 (trace 9609): NeedSupport. Knowledge: actor memory at 65.00s, trace 9250. Next observer evidence: None.
<a id="trace-9613"></a>
<a id="trace-9695"></a>
<a id="trace-9707"></a>
<a id="trace-9725"></a>
<a id="trace-9740"></a>
<a id="trace-9763"></a>
<a id="trace-9797"></a>
<a id="trace-9839"></a>
<a id="trace-9918"></a>
<a id="trace-9950"></a>
- 69.75s–76.25s (×10), actor 5, squad 0 (trace 9613): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 9253. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499036184549556, 'next_transition': 9695}.
<a id="trace-9958"></a>
- 76.65s–76.65s (×1), actor 1, squad 0 (trace 9958): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 75.00s, trace 9848. Next observer evidence: None.
<a id="trace-9967"></a>
<a id="trace-9991"></a>
<a id="trace-10012"></a>
<a id="trace-10044"></a>
<a id="trace-10064"></a>
<a id="trace-10095"></a>
<a id="trace-10110"></a>
<a id="trace-10186"></a>
<a id="trace-10194"></a>
<a id="trace-10217"></a>
<a id="trace-10232"></a>
<a id="trace-10241"></a>
<a id="trace-10285"></a>
<a id="trace-10298"></a>
<a id="trace-10377"></a>
<a id="trace-10390"></a>
<a id="trace-10410"></a>
<a id="trace-10440"></a>
<a id="trace-10449"></a>
<a id="trace-10468"></a>
<a id="trace-10477"></a>
<a id="trace-10491"></a>
<a id="trace-10502"></a>
<a id="trace-10576"></a>
<a id="trace-10588"></a>
<a id="trace-10605"></a>
<a id="trace-10615"></a>
<a id="trace-10636"></a>
<a id="trace-10650"></a>
<a id="trace-10678"></a>
<a id="trace-10708"></a>
<a id="trace-10794"></a>
<a id="trace-10807"></a>
<a id="trace-10819"></a>
<a id="trace-10834"></a>
<a id="trace-10865"></a>
<a id="trace-10900"></a>
<a id="trace-10914"></a>
<a id="trace-10991"></a>
<a id="trace-11012"></a>
<a id="trace-11034"></a>
<a id="trace-11046"></a>
<a id="trace-11066"></a>
<a id="trace-11076"></a>
<a id="trace-11091"></a>
<a id="trace-11101"></a>
<a id="trace-11184"></a>
<a id="trace-11196"></a>
<a id="trace-11216"></a>
<a id="trace-11230"></a>
<a id="trace-11245"></a>
<a id="trace-11256"></a>
<a id="trace-11273"></a>
<a id="trace-11284"></a>
- 76.75s–108.75s (×54), actor 5, squad 0 (trace 9967): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 9851. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5249889442696573, 'next_transition': 9991}.
<a id="trace-1183"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (events line 1183): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11300}.
<a id="trace-11291"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 11291): renew committed intent (75 s lifetime). Knowledge: actor memory at 108.95s, trace 11291. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11300}.
<a id="trace-11300"></a>
<a id="trace-11308"></a>
<a id="trace-11386"></a>
<a id="trace-11395"></a>
<a id="trace-11414"></a>
<a id="trace-11428"></a>
<a id="trace-11444"></a>
<a id="trace-11457"></a>
<a id="trace-11484"></a>
<a id="trace-11499"></a>
<a id="trace-11510"></a>
- 109.25s–114.25s (×11), actor 5, squad 0 (trace 11300): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.95s, trace 11291. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11308}.
<a id="trace-11517"></a>
- 114.50s–114.50s (×1), actor 1, squad 0 (trace 11517): MoveTactically. Knowledge: actor memory at 110.00s, trace 11319. Next observer evidence: {'until': 114.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11607}.
<a id="trace-11518"></a>
- 114.50s–114.50s (×1), actor 1, squad 0 (trace 11518): received platoon directive. Knowledge: actor memory at 110.00s, trace 11319. Next observer evidence: {'until': 114.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11607}.
<a id="trace-11607"></a>
<a id="trace-11687"></a>
<a id="trace-11705"></a>
<a id="trace-11729"></a>
<a id="trace-11771"></a>
<a id="trace-11805"></a>
<a id="trace-11818"></a>
<a id="trace-11834"></a>
<a id="trace-11851"></a>
<a id="trace-11936"></a>
<a id="trace-11952"></a>
<a id="trace-11977"></a>
<a id="trace-11988"></a>
<a id="trace-12013"></a>
- 114.75s–122.25s (×14), actor 5, squad 0 (trace 11607): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 11322. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11687}.
<a id="trace-12023"></a>
- 122.65s–122.65s (×1), actor 1, squad 0 (trace 12023): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 11859. Next observer evidence: None.
<a id="trace-12078"></a>
<a id="trace-12113"></a>
<a id="trace-12132"></a>
<a id="trace-12230"></a>
<a id="trace-12246"></a>
<a id="trace-12268"></a>
<a id="trace-12305"></a>
<a id="trace-12318"></a>
<a id="trace-12338"></a>
<a id="trace-12354"></a>
<a id="trace-12371"></a>
<a id="trace-12384"></a>
<a id="trace-12466"></a>
<a id="trace-12478"></a>
<a id="trace-12510"></a>
<a id="trace-12532"></a>
<a id="trace-12553"></a>
<a id="trace-12569"></a>
<a id="trace-12701"></a>
<a id="trace-12712"></a>
- 122.75s–135.80s (×20), actor 5, squad 0 (trace 12078): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 11862. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13123749528790965, 'next_transition': 12113}.
<a id="trace-12718"></a>
- 135.85s–135.85s (×1), actor 1, squad 0 (trace 12718): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 135.00s, trace 12631. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12737}.
<a id="trace-12737"></a>
<a id="trace-12756"></a>
- 136.30s–136.80s (×2), actor 5, squad 0 (trace 12737): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 12634. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10498312745324878, 'next_transition': 12756}.
<a id="trace-12764"></a>
- 136.85s–136.85s (×1), actor 1, squad 0 (trace 12764): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 135.00s, trace 12631. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41999997486772367, 'next_transition': 12930}.
<a id="trace-12930"></a>
<a id="trace-12949"></a>
<a id="trace-12993"></a>
<a id="trace-13031"></a>
<a id="trace-13136"></a>
<a id="trace-13165"></a>
<a id="trace-13200"></a>
<a id="trace-13235"></a>
<a id="trace-13268"></a>
<a id="trace-13379"></a>
<a id="trace-13413"></a>
<a id="trace-13437"></a>
<a id="trace-13451"></a>
<a id="trace-13475"></a>
- 137.30s–148.30s (×14), actor 5, squad 0 (trace 12930): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 12634. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06561098844843012, 'next_transition': 12949}.
<a id="trace-13485"></a>
- 148.45s–148.45s (×1), actor 1, squad 0 (trace 13485): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 145.00s, trace 13297. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500501236713462, 'next_transition': 13504}.
<a id="trace-13504"></a>
<a id="trace-13521"></a>
- 148.80s–149.30s (×2), actor 5, squad 0 (trace 13504): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 13300. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199936643569762, 'next_transition': 13521}.
<a id="trace-13533"></a>
- 149.45s–149.45s (×1), actor 1, squad 0 (trace 13533): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 145.00s, trace 13297. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13602}.
<a id="trace-13602"></a>
<a id="trace-13685"></a>
<a id="trace-13734"></a>
<a id="trace-13756"></a>
<a id="trace-13773"></a>
<a id="trace-13796"></a>
<a id="trace-13809"></a>
<a id="trace-13845"></a>
<a id="trace-13928"></a>
<a id="trace-13941"></a>
<a id="trace-13961"></a>
<a id="trace-13978"></a>
<a id="trace-13995"></a>
<a id="trace-14005"></a>
<a id="trace-14032"></a>
<a id="trace-14044"></a>
- 149.80s–158.80s (×16), actor 5, squad 0 (trace 13602): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 13300. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.02625304114658839, 'next_transition': 13685}.
<a id="trace-14068"></a>
- 159.45s–159.45s (×1), actor 1, squad 0 (trace 14068): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 155.00s, trace 13859. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14077}.
<a id="trace-14077"></a>
<a id="trace-14163"></a>
- 159.80s–160.30s (×2), actor 5, squad 0 (trace 14077): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 13862. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14163}.
<a id="trace-14170"></a>
- 160.45s–160.45s (×1), actor 1, squad 0 (trace 14170): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 160.00s, trace 14085. Next observer evidence: {'until': 160.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10501216458635121, 'next_transition': 14315}.
<a id="trace-14315"></a>
<a id="trace-14335"></a>
- 160.80s–161.30s (×2), actor 5, squad 0 (trace 14315): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 14088. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199821456654779, 'next_transition': 14335}.
<a id="trace-14364"></a>
- 161.70s–161.70s (×1), actor 1, squad 0 (trace 14364): traveling overwatch. Knowledge: actor memory at 160.00s, trace 14085. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23626101587995296, 'next_transition': 14492}.
<a id="trace-14365"></a>
- 161.70s–161.70s (×1), actor 1, squad 0 (trace 14365): current contact unknown for 10 s. Knowledge: actor memory at 160.00s, trace 14085. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23626101587995296, 'next_transition': 14492}.
<a id="trace-14492"></a>
<a id="trace-14518"></a>
<a id="trace-14537"></a>
<a id="trace-14576"></a>
<a id="trace-14585"></a>
- 161.80s–163.80s (×5), actor 5, squad 0 (trace 14492): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 14088. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299900941787131, 'next_transition': 14518}.
<a id="trace-1901"></a>
- 164.25s–164.25s (×1), actor 5, squad 0 (events line 1901): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14607"></a>
- 164.25s–164.25s (×1), actor 5, squad 0 (trace 14607): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 164.25s, trace 14607. Next observer evidence: None.
<a id="trace-14608"></a>
- 164.25s–164.25s (×1), actor 5, squad 0 (trace 14608): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 164.25s, trace 14608. Next observer evidence: None.
<a id="trace-14619"></a>
<a id="trace-14642"></a>
<a id="trace-14726"></a>
<a id="trace-14737"></a>
<a id="trace-14762"></a>
<a id="trace-14773"></a>
<a id="trace-14794"></a>
<a id="trace-14834"></a>
<a id="trace-14857"></a>
<a id="trace-14881"></a>
- 164.30s–169.30s (×10), actor 5, squad 0 (trace 14619): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 164.25s, trace 14608. Next observer evidence: {'until': 164.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7349973513296549, 'next_transition': 14642}.
<a id="trace-14919"></a>
- 170.05s–170.05s (×1), actor 1, squad 0 (trace 14919): received platoon directive. Knowledge: actor memory at 170.00s, trace 14901. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4147105072065235, 'next_transition': 15108}.
<a id="trace-15108"></a>
<a id="trace-15123"></a>
<a id="trace-15155"></a>
<a id="trace-15170"></a>
<a id="trace-15193"></a>
<a id="trace-15216"></a>
<a id="trace-15234"></a>
<a id="trace-15249"></a>
<a id="trace-15289"></a>
<a id="trace-15368"></a>
<a id="trace-15381"></a>
- 170.30s–175.80s (×11), actor 5, squad 0 (trace 15108): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 14904. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1076461154248534, 'next_transition': 15123}.
<a id="trace-15398"></a>
- 176.05s–176.05s (×1), actor 1, squad 0 (trace 15398): ReactToContact: cover and return fire. Knowledge: actor memory at 175.00s, trace 15298. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15853065949449252, 'next_transition': 15852}.
<a id="trace-15399"></a>
- 176.05s–176.05s (×1), actor 1, squad 0 (trace 15399): bounding overwatch. Knowledge: actor memory at 175.00s, trace 15298. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15853065949449252, 'next_transition': 15852}.
<a id="trace-15400"></a>
- 176.05s–176.05s (×1), actor 1, squad 0 (trace 15400): new contact inside 100 m. Knowledge: actor memory at 175.00s, trace 15298. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15853065949449252, 'next_transition': 15852}.
<a id="trace-15852"></a>
<a id="trace-15876"></a>
<a id="trace-15898"></a>
- 176.30s–177.30s (×3), actor 5, squad 0 (trace 15852): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 15301. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6672318971058139, 'next_transition': 15876}.
<a id="trace-15908"></a>
- 177.60s–177.60s (×1), actor 1, squad 0 (trace 15908): new contact inside 100 m. Knowledge: actor memory at 175.00s, trace 15298. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2878752946095828, 'next_transition': 16469}.
<a id="trace-16469"></a>
<a id="trace-16499"></a>
<a id="trace-16516"></a>
<a id="trace-16530"></a>
<a id="trace-16616"></a>
- 178.30s–180.30s (×5), actor 5, squad 0 (trace 16469): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 15301. Next observer evidence: {'until': 178.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.1355034487766278, 'next_transition': 16499}.
<a id="trace-16623"></a>
- 180.35s–180.35s (×1), actor 1, squad 0 (trace 16623): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 180.00s, trace 16538. Next observer evidence: {'until': 180.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15752231238780157, 'next_transition': 16637}.
<a id="trace-16625"></a>
- 180.35s–180.35s (×1), actor 1, squad 0 (trace 16625): NeedSupport. Knowledge: actor memory at 180.00s, trace 16538. Next observer evidence: {'until': 180.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15752231238780157, 'next_transition': 16637}.
<a id="trace-16637"></a>
<a id="trace-16654"></a>
- 180.80s–181.30s (×2), actor 5, squad 0 (trace 16637): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 16540. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299934492516571, 'next_transition': 16654}.
<a id="trace-16661"></a>
- 181.35s–181.35s (×1), actor 1, squad 0 (trace 16661): Reorganise: completed/failed drill. Knowledge: actor memory at 180.00s, trace 16538. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.944989144593736, 'next_transition': 16753}.
<a id="trace-16664"></a>
- 181.35s–181.35s (×1), actor 1, squad 0 (trace 16664): ReactToContact: cover and return fire. Knowledge: actor memory at 180.00s, trace 16538. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.944989144593736, 'next_transition': 16753}.
<a id="trace-16665"></a>
- 181.35s–181.35s (×1), actor 1, squad 0 (trace 16665): Reorganise complete: known contact. Knowledge: actor memory at 180.00s, trace 16538. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.944989144593736, 'next_transition': 16753}.
<a id="trace-16753"></a>
<a id="trace-16789"></a>
<a id="trace-16803"></a>
<a id="trace-16816"></a>
<a id="trace-16838"></a>
- 181.80s–184.30s (×5), actor 5, squad 0 (trace 16753): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 16540. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750325522429685, 'next_transition': 16789}.
<a id="trace-16861"></a>
- 184.95s–184.95s (×1), actor 1, squad 0 (trace 16861): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 180.00s, trace 16538. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299924199742409, 'next_transition': 16927}.
<a id="trace-16863"></a>
- 184.95s–184.95s (×1), actor 1, squad 0 (trace 16863): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 180.00s, trace 16538. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299924199742409, 'next_transition': 16927}.
<a id="trace-16927"></a>
<a id="trace-16937"></a>
<a id="trace-16960"></a>
<a id="trace-16972"></a>
<a id="trace-16985"></a>
<a id="trace-17027"></a>
<a id="trace-17041"></a>
<a id="trace-17047"></a>
<a id="trace-17117"></a>
<a id="trace-17123"></a>
<a id="trace-17142"></a>
- 185.30s–191.30s (×11), actor 5, squad 0 (trace 16927): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 16866. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449901738774849, 'next_transition': 16937}.
<a id="trace-2321"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (events line 2321): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17158"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (trace 17158): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.580725 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 191.85s, trace 17158. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17169}.
<a id="trace-17159"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (trace 17159): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.580725 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 191.85s, trace 17159. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17169}.
<a id="trace-17169"></a>
<a id="trace-17183"></a>
<a id="trace-17201"></a>
<a id="trace-17210"></a>
<a id="trace-17310"></a>
<a id="trace-17318"></a>
<a id="trace-17336"></a>
<a id="trace-17346"></a>
- 192.30s–196.80s (×8), actor 5, squad 0 (trace 17169): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 191.85s, trace 17159. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17183}.
<a id="trace-17357"></a>
- 197.20s–197.20s (×1), actor 1, squad 0 (trace 17357): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 195.00s, trace 17243. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17507}.
<a id="trace-17358"></a>
- 197.20s–197.20s (×1), actor 1, squad 0 (trace 17358): rearward bound: one stationary suppressing element. Knowledge: actor memory at 195.00s, trace 17243. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17507}.
<a id="trace-17507"></a>
<a id="trace-17539"></a>
<a id="trace-17559"></a>
<a id="trace-17657"></a>
<a id="trace-17679"></a>
<a id="trace-17709"></a>
<a id="trace-17730"></a>
<a id="trace-17743"></a>
<a id="trace-17760"></a>
<a id="trace-17774"></a>
<a id="trace-17793"></a>
<a id="trace-17811"></a>
<a id="trace-17885"></a>
<a id="trace-17922"></a>
<a id="trace-17936"></a>
<a id="trace-17960"></a>
<a id="trace-17977"></a>
<a id="trace-17996"></a>
<a id="trace-18014"></a>
- 197.80s–208.80s (×19), actor 5, squad 0 (trace 17507): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 17245. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087432850166903, 'next_transition': 17539}.
<a id="trace-18025"></a>
- 209.10s–209.10s (×1), actor 1, squad 0 (trace 18025): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 205.00s, trace 17820. Next observer evidence: {'until': 209.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259982644148114, 'next_transition': 18096}.
<a id="trace-18026"></a>
- 209.10s–209.10s (×1), actor 1, squad 0 (trace 18026): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 205.00s, trace 17820. Next observer evidence: {'until': 209.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259982644148114, 'next_transition': 18096}.
<a id="trace-18096"></a>
<a id="trace-18182"></a>
<a id="trace-18216"></a>
<a id="trace-18229"></a>
<a id="trace-18251"></a>
<a id="trace-18276"></a>
<a id="trace-18291"></a>
<a id="trace-18310"></a>
<a id="trace-18334"></a>
<a id="trace-18343"></a>
<a id="trace-18422"></a>
<a id="trace-18454"></a>
<a id="trace-18490"></a>
<a id="trace-18520"></a>
- 209.80s–218.30s (×14), actor 5, squad 0 (trace 18096): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 17822. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300163629621067, 'next_transition': 18182}.
<a id="trace-18525"></a>
- 218.30s–218.30s (×1), actor 1, squad 0 (trace 18525): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 215.00s, trace 18353. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.732475394115076, 'next_transition': 18564}.
<a id="trace-18564"></a>
<a id="trace-18579"></a>
<a id="trace-18659"></a>
<a id="trace-18701"></a>
<a id="trace-18720"></a>
<a id="trace-18756"></a>
<a id="trace-18771"></a>
<a id="trace-18802"></a>
<a id="trace-18818"></a>
<a id="trace-18895"></a>
<a id="trace-18906"></a>
<a id="trace-18925"></a>
<a id="trace-18957"></a>
<a id="trace-18973"></a>
<a id="trace-18990"></a>
<a id="trace-19020"></a>
<a id="trace-19028"></a>
<a id="trace-19103"></a>
<a id="trace-19116"></a>
<a id="trace-19130"></a>
<a id="trace-19141"></a>
<a id="trace-19158"></a>
<a id="trace-19171"></a>
<a id="trace-19186"></a>
<a id="trace-19202"></a>
<a id="trace-19217"></a>
<a id="trace-19231"></a>
<a id="trace-19311"></a>
<a id="trace-19335"></a>
<a id="trace-19347"></a>
<a id="trace-19364"></a>
<a id="trace-19388"></a>
<a id="trace-19397"></a>
<a id="trace-19415"></a>
<a id="trace-19425"></a>
<a id="trace-19500"></a>
<a id="trace-19515"></a>
<a id="trace-19530"></a>
<a id="trace-19558"></a>
<a id="trace-19578"></a>
<a id="trace-19592"></a>
<a id="trace-19604"></a>
<a id="trace-19619"></a>
<a id="trace-19627"></a>
<a id="trace-19725"></a>
<a id="trace-19738"></a>
<a id="trace-19767"></a>
<a id="trace-19783"></a>
<a id="trace-19799"></a>
<a id="trace-19831"></a>
<a id="trace-19908"></a>
<a id="trace-19941"></a>
<a id="trace-19967"></a>
<a id="trace-19982"></a>
<a id="trace-19992"></a>
<a id="trace-20010"></a>
<a id="trace-20023"></a>
<a id="trace-20111"></a>
<a id="trace-20132"></a>
<a id="trace-20159"></a>
<a id="trace-20182"></a>
<a id="trace-20196"></a>
<a id="trace-20211"></a>
<a id="trace-20305"></a>
- 219.30s–260.80s (×64), actor 5, squad 0 (trace 18564): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 18355. Next observer evidence: {'until': 219.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574887508085898, 'next_transition': 18579}.
<a id="trace-20310"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (trace 20310): renew committed intent (75 s lifetime). Knowledge: actor memory at 260.90s, trace 20310. Next observer evidence: None.
<a id="trace-3183"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (events line 3183): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20323}.
<a id="trace-20323"></a>
<a id="trace-20350"></a>
<a id="trace-20381"></a>
<a id="trace-20401"></a>
<a id="trace-20413"></a>
<a id="trace-20426"></a>
<a id="trace-20502"></a>
<a id="trace-20511"></a>
<a id="trace-20536"></a>
- 261.30s–266.80s (×9), actor 5, squad 0 (trace 20323): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.90s, trace 20310. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20350}.
<a id="trace-20558"></a>
- 267.45s–267.45s (×1), actor 1, squad 0 (trace 20558): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 265.00s, trace 20434. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20570}.
<a id="trace-20559"></a>
- 267.45s–267.45s (×1), actor 1, squad 0 (trace 20559): MoveTactically. Knowledge: actor memory at 265.00s, trace 20434. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20570}.
<a id="trace-20560"></a>
- 267.45s–267.45s (×1), actor 1, squad 0 (trace 20560): . Knowledge: actor memory at 265.00s, trace 20434. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20570}.
<a id="trace-20570"></a>
<a id="trace-20593"></a>
- 267.80s–268.30s (×2), actor 5, squad 0 (trace 20570): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 20436. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20593}.
<a id="trace-20598"></a>
- 268.45s–268.45s (×1), actor 1, squad 0 (trace 20598): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 265.00s, trace 20434. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20685}.
<a id="trace-20685"></a>
<a id="trace-20709"></a>
<a id="trace-20795"></a>
<a id="trace-20807"></a>
<a id="trace-20833"></a>
<a id="trace-20857"></a>
<a id="trace-20871"></a>
<a id="trace-20892"></a>
- 269.30s–273.30s (×8), actor 5, squad 0 (trace 20685): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 20436. Next observer evidence: {'until': 269.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1968603430099626, 'next_transition': 20709}.
<a id="trace-20897"></a>
- 273.30s–273.30s (×1), actor 1, squad 0 (trace 20897): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 270.00s, trace 20716. Next observer evidence: {'until': 273.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512405152022238, 'next_transition': 20910}.
<a id="trace-20910"></a>
- 273.80s–273.80s (×1), actor 5, squad 0 (trace 20910): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 20718. Next observer evidence: {'until': 274.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20925}.
<a id="trace-20925"></a>
- 274.25s–274.25s (×1), actor 1, squad 0 (trace 20925): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 270.00s, trace 20716. Next observer evidence: None.
<a id="trace-20983"></a>
<a id="trace-20997"></a>
<a id="trace-21078"></a>
<a id="trace-21092"></a>
<a id="trace-21116"></a>
<a id="trace-21138"></a>
<a id="trace-21163"></a>
<a id="trace-21174"></a>
<a id="trace-21196"></a>
<a id="trace-21213"></a>
<a id="trace-21227"></a>
<a id="trace-21318"></a>
<a id="trace-21331"></a>
<a id="trace-21351"></a>
<a id="trace-21364"></a>
<a id="trace-21384"></a>
<a id="trace-21405"></a>
<a id="trace-21423"></a>
- 274.30s–283.30s (×18), actor 5, squad 0 (trace 20983): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 20718. Next observer evidence: {'until': 274.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20997}.
<a id="trace-21432"></a>
- 283.50s–283.50s (×1), actor 1, squad 0 (trace 21432): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 280.00s, trace 21246. Next observer evidence: {'until': 283.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21440}.
<a id="trace-21440"></a>
- 283.80s–283.80s (×1), actor 5, squad 0 (trace 21440): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 21248. Next observer evidence: {'until': 284, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21451}.
<a id="trace-21451"></a>
- 284.05s–284.05s (×1), actor 1, squad 0 (trace 21451): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 280.00s, trace 21246. Next observer evidence: {'until': 284.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21519}.
<a id="trace-21519"></a>
<a id="trace-21539"></a>
<a id="trace-21622"></a>
<a id="trace-21638"></a>
<a id="trace-21668"></a>
<a id="trace-21687"></a>
<a id="trace-21700"></a>
- 284.30s–287.80s (×7), actor 5, squad 0 (trace 21519): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 21248. Next observer evidence: {'until': 284.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07876707497425856, 'next_transition': 21539}.
<a id="trace-21707"></a>
- 288.05s–288.05s (×1), actor 1, squad 0 (trace 21707): traveling. Knowledge: actor memory at 285.00s, trace 21549. Next observer evidence: {'until': 288.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574893625177582, 'next_transition': 21824}.
<a id="trace-21708"></a>
- 288.05s–288.05s (×1), actor 1, squad 0 (trace 21708): current contact unknown for 10 s. Knowledge: actor memory at 285.00s, trace 21549. Next observer evidence: {'until': 288.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574893625177582, 'next_transition': 21824}.
<a id="trace-21824"></a>
- 288.30s–288.30s (×1), actor 5, squad 0 (trace 21824): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 285.00s, trace 21551. Next observer evidence: {'until': 288.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15751431659138201, 'next_transition': 3521}.
<a id="trace-3521"></a>
- 288.50s–288.50s (×1), actor 5, squad 0 (events line 3521): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6930995491446805, 'next_transition': 21869}.
<a id="trace-21832"></a>
- 288.50s–288.50s (×1), actor 5, squad 0 (trace 21832): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 288.50s, trace 21832. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6930995491446805, 'next_transition': 21869}.
<a id="trace-21833"></a>
- 288.50s–288.50s (×1), actor 5, squad 0 (trace 21833): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 288.50s, trace 21833. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6930995491446805, 'next_transition': 21869}.
<a id="trace-21869"></a>
<a id="trace-21968"></a>
<a id="trace-21990"></a>
<a id="trace-22014"></a>
<a id="trace-22026"></a>
<a id="trace-22062"></a>
<a id="trace-22083"></a>
<a id="trace-22098"></a>
- 289.30s–293.80s (×8), actor 5, squad 0 (trace 21869): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 288.50s, trace 21833. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.150008892688713, 'next_transition': 21968}.
<a id="trace-22104"></a>
- 293.90s–293.90s (×1), actor 1, squad 0 (trace 22104): traveling overwatch. Knowledge: actor memory at 290.00s, trace 21894. Next observer evidence: {'until': 294.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.288077933542545, 'next_transition': 22184}.
<a id="trace-22105"></a>
- 293.90s–293.90s (×1), actor 1, squad 0 (trace 22105): received platoon directive. Knowledge: actor memory at 290.00s, trace 21894. Next observer evidence: {'until': 294.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.288077933542545, 'next_transition': 22184}.
<a id="trace-22184"></a>
<a id="trace-22272"></a>
<a id="trace-22295"></a>
<a id="trace-22321"></a>
<a id="trace-22345"></a>
<a id="trace-22361"></a>
<a id="trace-22386"></a>
<a id="trace-22414"></a>
<a id="trace-22519"></a>
<a id="trace-22538"></a>
<a id="trace-22549"></a>
<a id="trace-22573"></a>
<a id="trace-22584"></a>
<a id="trace-22622"></a>
- 294.80s–303.80s (×14), actor 5, squad 0 (trace 22184): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 21896. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2049996524020994, 'next_transition': 22272}.
<a id="trace-22640"></a>
- 304.25s–304.25s (×1), actor 1, squad 0 (trace 22640): ReactToContact: cover and return fire. Knowledge: actor memory at 300.00s, trace 22433. Next observer evidence: None.
<a id="trace-22641"></a>
- 304.25s–304.25s (×1), actor 1, squad 0 (trace 22641): bounding overwatch. Knowledge: actor memory at 300.00s, trace 22433. Next observer evidence: None.
<a id="trace-22642"></a>
- 304.25s–304.25s (×1), actor 1, squad 0 (trace 22642): new contact inside 100 m. Knowledge: actor memory at 300.00s, trace 22433. Next observer evidence: None.
<a id="trace-22894"></a>
<a id="trace-22908"></a>
<a id="trace-22993"></a>
<a id="trace-23024"></a>
<a id="trace-23038"></a>
<a id="trace-23050"></a>
<a id="trace-23063"></a>
- 304.30s–307.80s (×7), actor 5, squad 0 (trace 22894): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 22435. Next observer evidence: {'until': 304.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.29181435436671493, 'next_transition': 22908}.
<a id="trace-23070"></a>
- 307.85s–307.85s (×1), actor 1, squad 0 (trace 23070): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 305.00s, trace 22924. Next observer evidence: {'until': 308.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300297397282124, 'next_transition': 23150}.
<a id="trace-23071"></a>
- 307.85s–307.85s (×1), actor 1, squad 0 (trace 23071): rearward bound: one stationary suppressing element. Knowledge: actor memory at 305.00s, trace 22924. Next observer evidence: {'until': 308.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300297397282124, 'next_transition': 23150}.
<a id="trace-23150"></a>
<a id="trace-23166"></a>
<a id="trace-23253"></a>
<a id="trace-23280"></a>
<a id="trace-23293"></a>
<a id="trace-23312"></a>
<a id="trace-23325"></a>
<a id="trace-23341"></a>
<a id="trace-23354"></a>
<a id="trace-23371"></a>
<a id="trace-23383"></a>
<a id="trace-23463"></a>
- 308.80s–315.80s (×12), actor 5, squad 0 (trace 23150): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 22925. Next observer evidence: {'until': 309.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259995767387015, 'next_transition': 23166}.
<a id="trace-3803"></a>
- 316.10s–316.10s (×1), actor 5, squad 0 (events line 3803): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23469"></a>
- 316.10s–316.10s (×1), actor 5, squad 0 (trace 23469): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.744258 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.10s, trace 23469. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999434598208874, 'next_transition': 23483}.
<a id="trace-23470"></a>
- 316.10s–316.10s (×1), actor 5, squad 0 (trace 23470): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.744258 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.10s, trace 23470. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999434598208874, 'next_transition': 23483}.
<a id="trace-23483"></a>
<a id="trace-23496"></a>
<a id="trace-23517"></a>
<a id="trace-23528"></a>
<a id="trace-23548"></a>
<a id="trace-23560"></a>
<a id="trace-23577"></a>
<a id="trace-23586"></a>
<a id="trace-23663"></a>
- 316.30s–320.30s (×9), actor 5, squad 0 (trace 23483): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 316.10s, trace 23470. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7350803090458977, 'next_transition': 23496}.
<a id="trace-23676"></a>
- 320.65s–320.65s (×1), actor 1, squad 0 (trace 23676): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 320.00s, trace 23595. Next observer evidence: {'until': 321.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600330257400256, 'next_transition': 23698}.
<a id="trace-23677"></a>
- 320.65s–320.65s (×1), actor 1, squad 0 (trace 23677): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 320.00s, trace 23595. Next observer evidence: {'until': 321.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600330257400256, 'next_transition': 23698}.
<a id="trace-23698"></a>
<a id="trace-23718"></a>
<a id="trace-23736"></a>
<a id="trace-23746"></a>
<a id="trace-23762"></a>
<a id="trace-23776"></a>
<a id="trace-23792"></a>
<a id="trace-23799"></a>
<a id="trace-23900"></a>
<a id="trace-23921"></a>
<a id="trace-23941"></a>
- 321.30s–327.30s (×11), actor 5, squad 0 (trace 23698): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.00s, trace 23596. Next observer evidence: {'until': 321.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599664842808724, 'next_transition': 23718}.
<a id="trace-23962"></a>
- 327.90s–327.90s (×1), actor 1, squad 0 (trace 23962): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 325.00s, trace 23809. Next observer evidence: None.
<a id="trace-23965"></a>
- 327.95s–327.95s (×1), actor 1, squad 0 (trace 23965): MoveTactically. Knowledge: actor memory at 325.00s, trace 23809. Next observer evidence: {'until': 328, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23970}.
<a id="trace-23966"></a>
- 327.95s–327.95s (×1), actor 1, squad 0 (trace 23966): received platoon directive. Knowledge: actor memory at 325.00s, trace 23809. Next observer evidence: {'until': 328, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23970}.
<a id="trace-23970"></a>
- 328.00s–328.00s (×1), actor 1, squad 0 (trace 23970): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 325.00s, trace 23809. Next observer evidence: {'until': 328.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23981}.
<a id="trace-23981"></a>
<a id="trace-24002"></a>
<a id="trace-24110"></a>
<a id="trace-24118"></a>
<a id="trace-24143"></a>
<a id="trace-24161"></a>
<a id="trace-24179"></a>
<a id="trace-24193"></a>
<a id="trace-24210"></a>
<a id="trace-24232"></a>
<a id="trace-24314"></a>
<a id="trace-24335"></a>
<a id="trace-24344"></a>
<a id="trace-24359"></a>
<a id="trace-24383"></a>
<a id="trace-24400"></a>
<a id="trace-24504"></a>
<a id="trace-24512"></a>
<a id="trace-24530"></a>
<a id="trace-24545"></a>
<a id="trace-24564"></a>
<a id="trace-24576"></a>
<a id="trace-24589"></a>
<a id="trace-24600"></a>
<a id="trace-24616"></a>
<a id="trace-24627"></a>
<a id="trace-24714"></a>
<a id="trace-24726"></a>
<a id="trace-24753"></a>
<a id="trace-24766"></a>
<a id="trace-24803"></a>
<a id="trace-24825"></a>
<a id="trace-24908"></a>
<a id="trace-24921"></a>
<a id="trace-24936"></a>
<a id="trace-24951"></a>
<a id="trace-24962"></a>
<a id="trace-24977"></a>
<a id="trace-24992"></a>
<a id="trace-25019"></a>
<a id="trace-25100"></a>
<a id="trace-25112"></a>
<a id="trace-25126"></a>
<a id="trace-25137"></a>
<a id="trace-25163"></a>
<a id="trace-25177"></a>
<a id="trace-25190"></a>
<a id="trace-25207"></a>
<a id="trace-25216"></a>
- 328.30s–359.80s (×49), actor 5, squad 0 (trace 23981): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 23810. Next observer evidence: {'until': 328.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24002}.

## Net delivery

262 matched order/radio deliveries; 253 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.390s; maximum 5.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2736: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2738: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2741: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2745: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 5089: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 5090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 5091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 5092: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 5093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 5094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 5095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 5096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 5097: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 5098: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 5099: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 5100: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 5101: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 5102: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 5103: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 5104: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 5105: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 5106: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 5107: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 6296: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 6297: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 6298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 6299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 6300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 6301: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 6302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 6303: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 6304: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 6305: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 6306: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 6307: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 6308: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 6309: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 6310: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 6311: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 6312: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 7059: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7060: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7063: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7064: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7066: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7067: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7068: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7069: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7070: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7071: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7072: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7073: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7074: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7075: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 7314: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 7315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 7316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 7317: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 7318: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 7319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 7320: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 7321: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 7322: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 7323: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 7324: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 7325: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 7326: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 7327: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 7328: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 7329: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 7721: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 7722: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 7726: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 7727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7729: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7730: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7732: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 7733: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 7734: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 7735: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 7736: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 7737: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 7738: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 7739: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 7740: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 7741: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 8184: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 8185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 8186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 8187: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 8188: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 8189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 8190: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 8191: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 8192: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 8193: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 8194: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 8195: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 8196: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 8197: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 8198: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 8199: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 8399: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 8400: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 8401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 8402: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 8403: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 8404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 8405: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 8406: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 8407: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 8408: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 8409: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 8410: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 8411: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 8412: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 8413: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 8414: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8790: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 8791: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8793: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8794: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8796: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8797: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8798: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8799: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8800: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8801: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8802: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8803: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 8804: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 8805: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 9031: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 9032: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 9033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 9034: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 9035: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 9036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 9037: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 9038: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 9039: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 9040: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 9041: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 9042: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 9043: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 9044: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 9045: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 9046: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 9250: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 9251: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 9252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 9253: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 9254: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 9255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 9256: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 9257: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 9258: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 9259: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 9260: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 9261: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 9262: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 9263: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 9264: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 9265: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 9621: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 9622: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 9623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 9624: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 9625: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 9626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 9627: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 9628: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 9629: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 9630: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 9631: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 9632: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 9633: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 9634: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 9635: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 9636: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 9848: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 9849: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 9850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 9851: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 9852: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 9853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 9854: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 9855: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 9856: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 9857: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 9858: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 9859: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 9860: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 9861: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 9862: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 9863: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 10119: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 10120: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 10121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 10122: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 10123: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 10124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 10125: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 10126: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 10127: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 10128: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 10129: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 10130: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 10131: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 10132: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 10133: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 10134: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 10307: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 10308: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 10309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 10310: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 10311: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 10312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 10313: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 10314: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 10315: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 10316: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 10317: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 10318: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 10319: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 10320: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 10321: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 10322: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 10508: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 10509: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 10510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 10511: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 10512: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 10513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 10514: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 10515: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 10516: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 10517: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 10518: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 10519: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 10520: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 10521: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 10522: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 10523: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 10718: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 10719: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 10720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 10721: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 10722: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 10723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 10724: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 10725: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 10726: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 10727: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 10728: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 10729: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 10730: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 10731: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 10732: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 10733: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 10922: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 10923: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 10924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 10925: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 10926: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 10927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 10928: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 10929: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 10930: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 10931: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 10932: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 10933: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 10934: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 10935: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 10936: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 10937: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 11111: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 11112: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 11113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 11114: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 11115: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 11116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 11117: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 11118: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 11119: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 11120: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 11121: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 11122: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 11123: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 11124: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 11125: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 11126: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 11291: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 11319: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 11320: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 11321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 11322: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 11323: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 11324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 11325: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 11326: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 11327: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 11328: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 11329: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 11330: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 11331: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 11332: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 11333: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 11334: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 11616: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 11617: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 11618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 11619: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 11620: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 11621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 11622: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 11623: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 11624: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 11625: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 11626: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 11627: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 11628: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 11629: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 11630: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 11631: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 11859: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 11860: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 11861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 11862: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 11863: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 11864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 11865: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 11866: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 11867: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 11868: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 11869: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 11870: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 11871: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 11872: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 11873: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 11874: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 12163: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 12164: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 12165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 12166: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 12167: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 12168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 12169: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 12170: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 12171: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 12172: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 12173: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 12174: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 12175: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 12176: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 12177: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 12178: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 12392: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 12393: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 12394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 12395: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 12396: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 12397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 12398: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 12399: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 12400: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 12401: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 12402: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 12403: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 12404: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 12405: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 12406: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 12407: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 12631: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 12632: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 12633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 12634: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 12635: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 12636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 12637: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 12638: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 12639: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 12640: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 12641: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 12642: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 12643: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 12644: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 12645: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 12646: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 13039: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 13040: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 13041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 13042: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 13043: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 13044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 13045: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 13046: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 13047: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 13048: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 13049: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 13050: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 13051: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 13052: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 13053: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 13054: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 13297: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 13298: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 13299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 13300: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 13301: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 13302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 13303: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 13304: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 13305: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 13306: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 13307: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 13308: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 13309: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 13310: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 13311: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 13312: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 13610: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 13611: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 13612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 13613: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 13614: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 13615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 13616: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 13617: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 13618: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 13619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 13620: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 13621: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 13622: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 13623: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 13624: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 13625: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 13859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 13860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 13861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 13862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 13863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 13864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 13865: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 13866: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 13867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 13868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 13869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 13870: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 13871: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 13872: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 13873: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 13874: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 14085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 14086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 14087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 14088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 14089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 14090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 14091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 14092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 14093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 14094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 14095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 14096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 14097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 14098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 14099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 14100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.25s leader 5, trace 14607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.25s leader 5, trace 14608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 14651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 14652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 14653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 14654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 14655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 14656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 14657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 14658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 14659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 14660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 14661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 14662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 14663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 14664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 14665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 14666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 14901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 14902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 14903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 14904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 14905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 14906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 14907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 14908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 14909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 14910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 14911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 14912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 14913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 14914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 14915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 14916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 15298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 15299: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 15300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 15301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 15302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 15303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 15304: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 15305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 15306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 15307: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 15308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 15309: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 15310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 15311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 15312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 15313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 16538: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 16539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 16540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 16541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 16542: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 16543: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 16544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 16545: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 16546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 16547: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 16548: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 16549: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 16550: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 16551: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 16864: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 16865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 16866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 16867: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 16868: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 16869: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 16870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 16871: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 16872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 16873: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 16874: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 16875: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 16876: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 16877: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 17053: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 17054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 17055: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 17056: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 17057: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 17058: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 17059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 17060: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 17061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 17062: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 17063: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 17064: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 17065: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 17066: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.85s leader 5, trace 17158: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.85s leader 5, trace 17159: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 17243: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 17244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 17245: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 17246: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 17247: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 17248: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 17249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 17250: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 17251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 17252: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 17253: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 17254: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 17255: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 17256: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 17589: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 17590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 17591: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 17592: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 17593: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 17594: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 17595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 17596: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 17597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 17598: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 17599: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 17600: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 17601: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 17602: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 17820: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 17821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 17822: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 17823: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 17824: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 17825: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 17826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 17827: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 17828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 17829: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 17830: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 17831: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 17832: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 17833: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 18107: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 18108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 18109: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 18110: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 18111: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 18112: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 18113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 18114: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 18115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 18116: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 18117: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 18118: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 18119: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 18120: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 18353: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 18354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 18355: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 18356: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 18357: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 18358: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 18359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 18360: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 18361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 18362: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 18363: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 18364: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 18365: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 18366: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 18590: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 18591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 18592: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 18593: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 18594: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 18595: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 18596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 18597: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 18598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 18599: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 18600: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 18601: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 18602: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 18603: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 18824: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 18825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 18826: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 18827: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 18828: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 18829: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 18830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 18831: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 18832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 18833: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 18834: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 18835: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 18836: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 18837: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 19037: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 19038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 19039: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 19040: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 19041: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 19042: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 19043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 19044: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 19045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 19046: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 19047: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 19048: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 19049: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 19050: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 19240: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 19241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 19242: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 19243: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 19244: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 19245: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 19246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 19247: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 19248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 19249: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 19250: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 19251: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 19252: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 19253: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 19431: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 19432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 19433: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 19434: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 19435: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 19436: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 19437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 19438: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 19439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 19440: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 19441: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 19442: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 19443: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 19444: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 19636: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 19637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 19638: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 19639: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 19640: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 19641: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 19642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 19643: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 19644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 19645: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 19646: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 19647: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 19648: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 19649: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 19840: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 19841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 19842: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 19843: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 19844: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 19845: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 19846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 19847: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 19848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 19849: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 19850: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 19851: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 19852: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 19853: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 20031: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 20032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 20033: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 20034: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 20035: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 20036: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 20037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 20038: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 20039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 20040: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 20041: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 20042: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 20043: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 20044: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 20228: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 20229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 20230: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 20231: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 20232: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 20233: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 20234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 20235: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 20236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 20237: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 20238: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 20239: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 20240: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 20241: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 20310: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 20434: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 20435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 20436: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 20437: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 20438: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 20439: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 20440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 20441: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 20442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 20443: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 20444: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 20445: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 20446: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 20447: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 20716: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 20717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 20718: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 20719: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 20720: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 20721: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 20722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 20723: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 20724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 20725: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 20726: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 20727: estimate 1.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 20728: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 20729: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 21005: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 21006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 21007: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 21008: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 21009: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 21010: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 21011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 21012: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 21013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 21014: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 21015: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 21016: estimate 1.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 21017: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 21018: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 21246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 21247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 21248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 21249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 21250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 21251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 21252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 21253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 21254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 21255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 21256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 21257: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 21258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 21259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 21549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 21550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 21551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 21552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 21553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 21554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 21555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 21556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 21557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 21558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 21559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 21560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 21561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 21562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 288.50s leader 5, trace 21832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 288.50s leader 5, trace 21833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 21894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 21895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 21896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 21897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 21898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 21899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 21900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 21901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 21902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 21903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 21904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 21905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 21906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 21907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 22195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 22196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 22197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 22198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 22199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 22200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 22201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 22202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 22203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 22204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 22205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 22206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 22207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 22208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 22433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 22434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 22435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 22436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 22437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 22438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 22439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 22440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 22441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 22442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 22443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 22444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 22445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 22446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 22924: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 22925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 22926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 22927: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 22928: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 22929: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 22930: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 22931: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 22932: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 22933: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 22934: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 22935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 22936: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 23185: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 23186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 23187: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 23188: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 23189: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 23190: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 23191: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 23192: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 23193: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 23194: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 23195: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 23196: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 23197: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 23392: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 23393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 23394: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 23395: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 23396: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 23397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 23398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 23399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 23400: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 23401: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 23402: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 23403: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 23404: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.10s leader 5, trace 23469: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.10s leader 5, trace 23470: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 23595: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 23596: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 23597: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 23598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 23599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 23600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 23601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 23602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 23603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 23604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 23605: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 23606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 23607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 23809: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 23810: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 23811: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 23812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 23813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 23814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 23815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 23816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 23817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 23818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 23819: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 23820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 23821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 24034: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 24035: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 24036: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 24037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 24038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 24039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 24040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 24041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 24042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 24043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 24044: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 24045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 24046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 24253: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 24254: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 24255: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 24256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 24257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 24258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 24259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 24260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 24261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 24262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 24263: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 24264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 24265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 24437: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 24438: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 24439: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 24440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 24441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 24442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 24443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 24444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 24445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 24446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 24447: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 24448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 24449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 24634: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 24635: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 24636: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 24637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 24638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 24639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 24640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 24641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 24642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 24643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 24644: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 24645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 24646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 24834: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 24835: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 24836: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 24837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 24838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 24839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 24840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 24841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 24842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 24843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 24844: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 24845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 24846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 25029: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 25030: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 25031: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 25032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 25033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 25034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 25035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 25036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 25037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 25038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 25039: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 25040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 25041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 25225: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 25226: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 25227: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 25228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 25229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 25230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 25231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 25232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 25233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 25234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 25235: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 25236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 25237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Ash killed in action
- 1: Cole killed in action
- 1: Vale incapacitated
- 1: Reed killed in action
- 1: Soren incapacitated
- 1: Tern killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
