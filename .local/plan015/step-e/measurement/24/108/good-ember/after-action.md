# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/24/108/good-ember/battle-108-1789674205593235507`

## Battle summary

**Ember** · 360 s · 387 shots.

### Turning points

- 14.6s, squad 1: contact (events line 169). First recorded contact.
- 19.9s, squad 1: withdrawal ([trace 5512](#trace-5512)). 56.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 38.6s, squad 1: help call ([trace 11923](#trace-11923)). No completion observed before termination.
- 41.9s, squad 0: help call ([trace 12439](#trace-12439)). No completion observed before termination.
- 52.8s, squad 0: withdrawal ([trace 14414](#trace-14414)). 95.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 203.3s, squad 0: assault ([trace 26863](#trace-26863)). 203.7s, squad 0: advanced tactically.
- 260.2s, squad 0: assault ([trace 31252](#trace-31252)). 269.2s, squad 0: took cover and returned fire.
- 266.2s, squad 0: help call ([trace 31734](#trace-31734)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 71 shots, 7/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 7 shots, 2/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 220 shots, 3/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 89 shots, 2/2 lost.

### Decisions and attribution

At 16.8s, squad 0 chose took cover and returned fire ([trace 3489](#trace-3489)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 203.7s, squad 0 chose advanced tactically ([trace 27035](#trace-27035)), followed by 1 shots and 0 own casualties; estimate 7.4 against 0 distinct squad-reported contacts; At 0.1s, squad 1 chose advanced tactically ([trace 327](#trace-327)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1388](#trace-1388)). Following evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.459775089592279, 'next_transition': 1815}.
- 26.6s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=4.578256 retreat threshold=0.220000 initiative=requires intent ([trace 6790](#trace-6790)). Following evidence: {'until': 26.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1378156853430063, 'next_transition': 6816}.

### Communication

339 matched deliveries (mean 0.50s, max 5.25s); 307 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.55s, squad 1, contact, evidence events line 169: First recorded contact; .
- 19.85s, squad 1, withdrawal, evidence 5512: BreakContact: believed ratio at least two without superiority; 56.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 38.60s, squad 1, help call, evidence 11923: NeedSupport; No completion observed before termination.
- 41.90s, squad 0, help call, evidence 12439: NeedSupport; No completion observed before termination.
- 52.80s, squad 0, withdrawal, evidence 14414: BreakContact: believed ratio at least two without superiority; 95.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 203.30s, squad 0, assault, evidence 26863: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 203.7s, squad 0: advanced tactically.
- 260.20s, squad 0, assault, evidence 31252: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 269.2s, squad 0: took cover and returned fire.
- 266.20s, squad 0, help call, evidence 31734: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.473244002080488, 'next_transition': 927}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.473244002080488, 'next_transition': 927}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.473244002080488, 'next_transition': 927}.
<a id="trace-327"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 327): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.190705964343916, 'next_transition': 1125}.
<a id="trace-328"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 328): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.190705964343916, 'next_transition': 1125}.
<a id="trace-329"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 329): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.190705964343916, 'next_transition': 1125}.
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
<a id="trace-697"></a>
<a id="trace-699"></a>
<a id="trace-723"></a>
<a id="trace-725"></a>
<a id="trace-805"></a>
<a id="trace-807"></a>
<a id="trace-825"></a>
<a id="trace-827"></a>
<a id="trace-854"></a>
<a id="trace-856"></a>
<a id="trace-884"></a>
<a id="trace-886"></a>
<a id="trace-903"></a>
<a id="trace-905"></a>
<a id="trace-929"></a>
<a id="trace-931"></a>
<a id="trace-958"></a>
<a id="trace-960"></a>
<a id="trace-985"></a>
<a id="trace-987"></a>
<a id="trace-1014"></a>
<a id="trace-1016"></a>
<a id="trace-1031"></a>
<a id="trace-1033"></a>
<a id="trace-1122"></a>
<a id="trace-1124"></a>
<a id="trace-1283"></a>
<a id="trace-1285"></a>
<a id="trace-1306"></a>
<a id="trace-1308"></a>
<a id="trace-1328"></a>
<a id="trace-1330"></a>
<a id="trace-1363"></a>
<a id="trace-1365"></a>
<a id="trace-1382"></a>
<a id="trace-1384"></a>
<a id="trace-1734"></a>
<a id="trace-1736"></a>
<a id="trace-1757"></a>
<a id="trace-1759"></a>
<a id="trace-1798"></a>
<a id="trace-1800"></a>
<a id="trace-2017"></a>
<a id="trace-2019"></a>
<a id="trace-2303"></a>
<a id="trace-2305"></a>
<a id="trace-2747"></a>
<a id="trace-2749"></a>
<a id="trace-3011"></a>
<a id="trace-3013"></a>
<a id="trace-3486"></a>
<a id="trace-3488"></a>
<a id="trace-3945"></a>
<a id="trace-3947"></a>
<a id="trace-4825"></a>
<a id="trace-4827"></a>
<a id="trace-4890"></a>
<a id="trace-4892"></a>
<a id="trace-4952"></a>
<a id="trace-4954"></a>
<a id="trace-5444"></a>
<a id="trace-5446"></a>
<a id="trace-5498"></a>
<a id="trace-5500"></a>
<a id="trace-5801"></a>
<a id="trace-5803"></a>
<a id="trace-6302"></a>
<a id="trace-6304"></a>
<a id="trace-6337"></a>
<a id="trace-6339"></a>
<a id="trace-6413"></a>
<a id="trace-6415"></a>
<a id="trace-6454"></a>
<a id="trace-6456"></a>
<a id="trace-6489"></a>
<a id="trace-6491"></a>
<a id="trace-6542"></a>
<a id="trace-6544"></a>
<a id="trace-6568"></a>
<a id="trace-6570"></a>
<a id="trace-6606"></a>
<a id="trace-6608"></a>
<a id="trace-6636"></a>
<a id="trace-6638"></a>
<a id="trace-6727"></a>
<a id="trace-6729"></a>
<a id="trace-6745"></a>
<a id="trace-6747"></a>
<a id="trace-6781"></a>
<a id="trace-6783"></a>
<a id="trace-6803"></a>
<a id="trace-6805"></a>
<a id="trace-7277"></a>
<a id="trace-7279"></a>
<a id="trace-7296"></a>
<a id="trace-7298"></a>
<a id="trace-7342"></a>
<a id="trace-7344"></a>
<a id="trace-7371"></a>
<a id="trace-7373"></a>
<a id="trace-7389"></a>
<a id="trace-7391"></a>
<a id="trace-7419"></a>
<a id="trace-7421"></a>
<a id="trace-7523"></a>
<a id="trace-7525"></a>
<a id="trace-7558"></a>
<a id="trace-7560"></a>
<a id="trace-7607"></a>
<a id="trace-7609"></a>
<a id="trace-7642"></a>
<a id="trace-7644"></a>
<a id="trace-7700"></a>
<a id="trace-7702"></a>
<a id="trace-7762"></a>
<a id="trace-7764"></a>
<a id="trace-7825"></a>
<a id="trace-7827"></a>
<a id="trace-10946"></a>
<a id="trace-10948"></a>
<a id="trace-11018"></a>
<a id="trace-11020"></a>
<a id="trace-11210"></a>
<a id="trace-11212"></a>
<a id="trace-11401"></a>
<a id="trace-11403"></a>
<a id="trace-11466"></a>
<a id="trace-11468"></a>
<a id="trace-11554"></a>
<a id="trace-11556"></a>
<a id="trace-11649"></a>
<a id="trace-11651"></a>
<a id="trace-11730"></a>
<a id="trace-11732"></a>
<a id="trace-11805"></a>
<a id="trace-11807"></a>
<a id="trace-11879"></a>
<a id="trace-11881"></a>
<a id="trace-11958"></a>
<a id="trace-11960"></a>
<a id="trace-12030"></a>
<a id="trace-12032"></a>
<a id="trace-12109"></a>
<a id="trace-12111"></a>
<a id="trace-12249"></a>
<a id="trace-12251"></a>
<a id="trace-12320"></a>
<a id="trace-12322"></a>
<a id="trace-12384"></a>
<a id="trace-12386"></a>
<a id="trace-12430"></a>
<a id="trace-12432"></a>
<a id="trace-12486"></a>
<a id="trace-12488"></a>
<a id="trace-12532"></a>
<a id="trace-12534"></a>
<a id="trace-12577"></a>
<a id="trace-12579"></a>
<a id="trace-12613"></a>
<a id="trace-12615"></a>
<a id="trace-12656"></a>
<a id="trace-12658"></a>
<a id="trace-12699"></a>
<a id="trace-12701"></a>
<a id="trace-12794"></a>
<a id="trace-12796"></a>
<a id="trace-12825"></a>
<a id="trace-12827"></a>
<a id="trace-12853"></a>
<a id="trace-12855"></a>
<a id="trace-12875"></a>
<a id="trace-12877"></a>
<a id="trace-13271"></a>
<a id="trace-13273"></a>
<a id="trace-13292"></a>
<a id="trace-13294"></a>
<a id="trace-13323"></a>
<a id="trace-13325"></a>
<a id="trace-13352"></a>
<a id="trace-13354"></a>
<a id="trace-13994"></a>
<a id="trace-13996"></a>
<a id="trace-14016"></a>
<a id="trace-14018"></a>
<a id="trace-14119"></a>
<a id="trace-14121"></a>
<a id="trace-14177"></a>
<a id="trace-14179"></a>
<a id="trace-14223"></a>
<a id="trace-14225"></a>
<a id="trace-14266"></a>
<a id="trace-14268"></a>
<a id="trace-14336"></a>
<a id="trace-14338"></a>
<a id="trace-14403"></a>
<a id="trace-14405"></a>
<a id="trace-14939"></a>
<a id="trace-14941"></a>
<a id="trace-15001"></a>
<a id="trace-15003"></a>
<a id="trace-15072"></a>
<a id="trace-15074"></a>
<a id="trace-15136"></a>
<a id="trace-15138"></a>
<a id="trace-15265"></a>
<a id="trace-15267"></a>
<a id="trace-15341"></a>
<a id="trace-15343"></a>
<a id="trace-15428"></a>
<a id="trace-15430"></a>
<a id="trace-15480"></a>
<a id="trace-15482"></a>
<a id="trace-15529"></a>
<a id="trace-15531"></a>
<a id="trace-15573"></a>
<a id="trace-15575"></a>
<a id="trace-15605"></a>
<a id="trace-15607"></a>
<a id="trace-15631"></a>
<a id="trace-15633"></a>
<a id="trace-15654"></a>
<a id="trace-15656"></a>
<a id="trace-15679"></a>
<a id="trace-15681"></a>
<a id="trace-15766"></a>
<a id="trace-15768"></a>
<a id="trace-15794"></a>
<a id="trace-15796"></a>
<a id="trace-15814"></a>
<a id="trace-15816"></a>
<a id="trace-15832"></a>
<a id="trace-15834"></a>
<a id="trace-15854"></a>
<a id="trace-15856"></a>
<a id="trace-15877"></a>
<a id="trace-15879"></a>
<a id="trace-15901"></a>
<a id="trace-15903"></a>
<a id="trace-15918"></a>
<a id="trace-15920"></a>
<a id="trace-15957"></a>
<a id="trace-15959"></a>
<a id="trace-15995"></a>
<a id="trace-15997"></a>
<a id="trace-16099"></a>
<a id="trace-16101"></a>
<a id="trace-16162"></a>
<a id="trace-16164"></a>
<a id="trace-16219"></a>
<a id="trace-16221"></a>
<a id="trace-16263"></a>
<a id="trace-16265"></a>
<a id="trace-16297"></a>
<a id="trace-16299"></a>
<a id="trace-16516"></a>
<a id="trace-16518"></a>
<a id="trace-16569"></a>
<a id="trace-16571"></a>
<a id="trace-16636"></a>
<a id="trace-16638"></a>
<a id="trace-16674"></a>
<a id="trace-16676"></a>
<a id="trace-16772"></a>
<a id="trace-16774"></a>
<a id="trace-16811"></a>
<a id="trace-16813"></a>
<a id="trace-16844"></a>
<a id="trace-16846"></a>
<a id="trace-16872"></a>
<a id="trace-16874"></a>
<a id="trace-16900"></a>
<a id="trace-16902"></a>
<a id="trace-16915"></a>
<a id="trace-16917"></a>
<a id="trace-16939"></a>
<a id="trace-16941"></a>
<a id="trace-16954"></a>
<a id="trace-16956"></a>
<a id="trace-16977"></a>
<a id="trace-16979"></a>
<a id="trace-17004"></a>
<a id="trace-17006"></a>
<a id="trace-17088"></a>
<a id="trace-17090"></a>
<a id="trace-17103"></a>
<a id="trace-17105"></a>
<a id="trace-17126"></a>
<a id="trace-17128"></a>
<a id="trace-17145"></a>
<a id="trace-17147"></a>
<a id="trace-17171"></a>
<a id="trace-17173"></a>
<a id="trace-17186"></a>
<a id="trace-17188"></a>
<a id="trace-17213"></a>
<a id="trace-17215"></a>
<a id="trace-17231"></a>
<a id="trace-17233"></a>
<a id="trace-17250"></a>
<a id="trace-17252"></a>
<a id="trace-17270"></a>
<a id="trace-17272"></a>
<a id="trace-17358"></a>
<a id="trace-17360"></a>
<a id="trace-17373"></a>
<a id="trace-17375"></a>
<a id="trace-17396"></a>
<a id="trace-17398"></a>
<a id="trace-17408"></a>
<a id="trace-17410"></a>
<a id="trace-17436"></a>
<a id="trace-17438"></a>
<a id="trace-17453"></a>
<a id="trace-17455"></a>
<a id="trace-17472"></a>
<a id="trace-17474"></a>
<a id="trace-17486"></a>
<a id="trace-17488"></a>
<a id="trace-17507"></a>
<a id="trace-17509"></a>
<a id="trace-17522"></a>
<a id="trace-17524"></a>
<a id="trace-17610"></a>
<a id="trace-17612"></a>
<a id="trace-17621"></a>
<a id="trace-17623"></a>
<a id="trace-17641"></a>
<a id="trace-17643"></a>
<a id="trace-17865"></a>
<a id="trace-17867"></a>
<a id="trace-17889"></a>
<a id="trace-17891"></a>
<a id="trace-17911"></a>
<a id="trace-17913"></a>
<a id="trace-17938"></a>
<a id="trace-17940"></a>
<a id="trace-17955"></a>
<a id="trace-17957"></a>
<a id="trace-17994"></a>
<a id="trace-17996"></a>
<a id="trace-18017"></a>
<a id="trace-18019"></a>
<a id="trace-18104"></a>
<a id="trace-18106"></a>
<a id="trace-18124"></a>
<a id="trace-18126"></a>
<a id="trace-18146"></a>
<a id="trace-18148"></a>
<a id="trace-18159"></a>
<a id="trace-18161"></a>
<a id="trace-18185"></a>
<a id="trace-18187"></a>
<a id="trace-18201"></a>
<a id="trace-18203"></a>
<a id="trace-18227"></a>
<a id="trace-18229"></a>
<a id="trace-18238"></a>
<a id="trace-18240"></a>
<a id="trace-18262"></a>
<a id="trace-18264"></a>
<a id="trace-18278"></a>
<a id="trace-18280"></a>
<a id="trace-18357"></a>
<a id="trace-18359"></a>
<a id="trace-18388"></a>
<a id="trace-18390"></a>
<a id="trace-18419"></a>
<a id="trace-18421"></a>
<a id="trace-18446"></a>
<a id="trace-18448"></a>
<a id="trace-18483"></a>
<a id="trace-18485"></a>
<a id="trace-18503"></a>
<a id="trace-18505"></a>
<a id="trace-18549"></a>
<a id="trace-18551"></a>
<a id="trace-18582"></a>
<a id="trace-18584"></a>
<a id="trace-18604"></a>
<a id="trace-18606"></a>
<a id="trace-18612"></a>
<a id="trace-18614"></a>
<a id="trace-18698"></a>
<a id="trace-18700"></a>
<a id="trace-18722"></a>
<a id="trace-18724"></a>
<a id="trace-18795"></a>
<a id="trace-18797"></a>
<a id="trace-18931"></a>
<a id="trace-18933"></a>
<a id="trace-18962"></a>
<a id="trace-18964"></a>
<a id="trace-18996"></a>
<a id="trace-18998"></a>
<a id="trace-19040"></a>
<a id="trace-19042"></a>
<a id="trace-19052"></a>
<a id="trace-19054"></a>
<a id="trace-19100"></a>
<a id="trace-19102"></a>
<a id="trace-19127"></a>
<a id="trace-19129"></a>
<a id="trace-19210"></a>
<a id="trace-19212"></a>
<a id="trace-19221"></a>
<a id="trace-19223"></a>
<a id="trace-19244"></a>
<a id="trace-19246"></a>
<a id="trace-19255"></a>
<a id="trace-19257"></a>
<a id="trace-19275"></a>
<a id="trace-19277"></a>
<a id="trace-19285"></a>
<a id="trace-19287"></a>
<a id="trace-19311"></a>
<a id="trace-19313"></a>
<a id="trace-19321"></a>
<a id="trace-19323"></a>
<a id="trace-19349"></a>
<a id="trace-19351"></a>
<a id="trace-19359"></a>
<a id="trace-19361"></a>
<a id="trace-19444"></a>
<a id="trace-19446"></a>
<a id="trace-19470"></a>
<a id="trace-19472"></a>
<a id="trace-19553"></a>
<a id="trace-19555"></a>
<a id="trace-19571"></a>
<a id="trace-19573"></a>
<a id="trace-19592"></a>
<a id="trace-19594"></a>
<a id="trace-19611"></a>
<a id="trace-19613"></a>
<a id="trace-19637"></a>
<a id="trace-19639"></a>
<a id="trace-19655"></a>
<a id="trace-19657"></a>
<a id="trace-19673"></a>
<a id="trace-19675"></a>
<a id="trace-19685"></a>
<a id="trace-19687"></a>
<a id="trace-19759"></a>
<a id="trace-19761"></a>
<a id="trace-19772"></a>
<a id="trace-19774"></a>
<a id="trace-19793"></a>
<a id="trace-19795"></a>
<a id="trace-19806"></a>
<a id="trace-19808"></a>
<a id="trace-19823"></a>
<a id="trace-19825"></a>
<a id="trace-19837"></a>
<a id="trace-19839"></a>
<a id="trace-19948"></a>
<a id="trace-19950"></a>
<a id="trace-19961"></a>
<a id="trace-19963"></a>
<a id="trace-19973"></a>
<a id="trace-19975"></a>
<a id="trace-19986"></a>
<a id="trace-19988"></a>
<a id="trace-20063"></a>
<a id="trace-20065"></a>
<a id="trace-20076"></a>
<a id="trace-20078"></a>
<a id="trace-20097"></a>
<a id="trace-20099"></a>
<a id="trace-20110"></a>
<a id="trace-20112"></a>
<a id="trace-20126"></a>
<a id="trace-20128"></a>
<a id="trace-20134"></a>
<a id="trace-20136"></a>
<a id="trace-20152"></a>
<a id="trace-20154"></a>
<a id="trace-20165"></a>
<a id="trace-20167"></a>
<a id="trace-20179"></a>
<a id="trace-20181"></a>
<a id="trace-20190"></a>
<a id="trace-20192"></a>
<a id="trace-20267"></a>
<a id="trace-20269"></a>
<a id="trace-20283"></a>
<a id="trace-20285"></a>
<a id="trace-20360"></a>
<a id="trace-20362"></a>
<a id="trace-20374"></a>
<a id="trace-20376"></a>
<a id="trace-20392"></a>
<a id="trace-20394"></a>
<a id="trace-20402"></a>
<a id="trace-20404"></a>
<a id="trace-20421"></a>
<a id="trace-20423"></a>
<a id="trace-20436"></a>
<a id="trace-20438"></a>
<a id="trace-20450"></a>
<a id="trace-20452"></a>
<a id="trace-20466"></a>
<a id="trace-20468"></a>
<a id="trace-20542"></a>
<a id="trace-20544"></a>
<a id="trace-20554"></a>
<a id="trace-20556"></a>
<a id="trace-20576"></a>
<a id="trace-20578"></a>
<a id="trace-20590"></a>
<a id="trace-20592"></a>
<a id="trace-20607"></a>
<a id="trace-20609"></a>
<a id="trace-20620"></a>
<a id="trace-20622"></a>
<a id="trace-20642"></a>
<a id="trace-20644"></a>
<a id="trace-20655"></a>
<a id="trace-20657"></a>
<a id="trace-20668"></a>
<a id="trace-20670"></a>
<a id="trace-20680"></a>
<a id="trace-20682"></a>
<a id="trace-20754"></a>
<a id="trace-20756"></a>
<a id="trace-20766"></a>
<a id="trace-20768"></a>
<a id="trace-20873"></a>
<a id="trace-20875"></a>
<a id="trace-20889"></a>
<a id="trace-20891"></a>
<a id="trace-20907"></a>
<a id="trace-20909"></a>
<a id="trace-20922"></a>
<a id="trace-20924"></a>
<a id="trace-20943"></a>
<a id="trace-20945"></a>
<a id="trace-20956"></a>
<a id="trace-20958"></a>
<a id="trace-20971"></a>
<a id="trace-20973"></a>
<a id="trace-20982"></a>
<a id="trace-20984"></a>
<a id="trace-21057"></a>
<a id="trace-21059"></a>
<a id="trace-21068"></a>
<a id="trace-21070"></a>
<a id="trace-21082"></a>
<a id="trace-21084"></a>
<a id="trace-21097"></a>
<a id="trace-21099"></a>
<a id="trace-21170"></a>
<a id="trace-21172"></a>
<a id="trace-21185"></a>
<a id="trace-21187"></a>
<a id="trace-21220"></a>
<a id="trace-21222"></a>
<a id="trace-21240"></a>
<a id="trace-21242"></a>
<a id="trace-21421"></a>
<a id="trace-21423"></a>
<a id="trace-21445"></a>
<a id="trace-21447"></a>
<a id="trace-21532"></a>
<a id="trace-21534"></a>
<a id="trace-21686"></a>
<a id="trace-21688"></a>
<a id="trace-21847"></a>
<a id="trace-21849"></a>
<a id="trace-22005"></a>
<a id="trace-22007"></a>
<a id="trace-22096"></a>
<a id="trace-22098"></a>
<a id="trace-22120"></a>
<a id="trace-22122"></a>
<a id="trace-22142"></a>
<a id="trace-22144"></a>
<a id="trace-22159"></a>
<a id="trace-22161"></a>
<a id="trace-22172"></a>
<a id="trace-22174"></a>
<a id="trace-22186"></a>
<a id="trace-22188"></a>
<a id="trace-22270"></a>
<a id="trace-22272"></a>
<a id="trace-22285"></a>
<a id="trace-22287"></a>
<a id="trace-22302"></a>
<a id="trace-22304"></a>
<a id="trace-22317"></a>
<a id="trace-22319"></a>
<a id="trace-22337"></a>
<a id="trace-22339"></a>
<a id="trace-22359"></a>
<a id="trace-22361"></a>
<a id="trace-22381"></a>
<a id="trace-22383"></a>
<a id="trace-22394"></a>
<a id="trace-22396"></a>
<a id="trace-22414"></a>
<a id="trace-22416"></a>
<a id="trace-22426"></a>
<a id="trace-22428"></a>
<a id="trace-22500"></a>
<a id="trace-22502"></a>
<a id="trace-22560"></a>
<a id="trace-22562"></a>
<a id="trace-22577"></a>
<a id="trace-22579"></a>
<a id="trace-22599"></a>
<a id="trace-22601"></a>
<a id="trace-22622"></a>
<a id="trace-22624"></a>
<a id="trace-22635"></a>
<a id="trace-22637"></a>
<a id="trace-22663"></a>
<a id="trace-22665"></a>
<a id="trace-22672"></a>
<a id="trace-22674"></a>
<a id="trace-22682"></a>
<a id="trace-22684"></a>
<a id="trace-22692"></a>
<a id="trace-22694"></a>
<a id="trace-22764"></a>
<a id="trace-22766"></a>
<a id="trace-22779"></a>
<a id="trace-22781"></a>
<a id="trace-22789"></a>
<a id="trace-22791"></a>
<a id="trace-22801"></a>
<a id="trace-22803"></a>
<a id="trace-22819"></a>
<a id="trace-22821"></a>
<a id="trace-22833"></a>
<a id="trace-22835"></a>
<a id="trace-22849"></a>
<a id="trace-22851"></a>
<a id="trace-22856"></a>
<a id="trace-22858"></a>
<a id="trace-22973"></a>
<a id="trace-22975"></a>
<a id="trace-22989"></a>
<a id="trace-22991"></a>
<a id="trace-23060"></a>
<a id="trace-23062"></a>
<a id="trace-23078"></a>
<a id="trace-23080"></a>
<a id="trace-23090"></a>
<a id="trace-23092"></a>
<a id="trace-23105"></a>
<a id="trace-23107"></a>
<a id="trace-23122"></a>
<a id="trace-23124"></a>
<a id="trace-23135"></a>
<a id="trace-23137"></a>
<a id="trace-23152"></a>
<a id="trace-23154"></a>
<a id="trace-23168"></a>
<a id="trace-23170"></a>
<a id="trace-23180"></a>
<a id="trace-23182"></a>
<a id="trace-23192"></a>
<a id="trace-23194"></a>
<a id="trace-23272"></a>
<a id="trace-23274"></a>
<a id="trace-23287"></a>
<a id="trace-23289"></a>
<a id="trace-23296"></a>
<a id="trace-23298"></a>
<a id="trace-23308"></a>
<a id="trace-23310"></a>
<a id="trace-23326"></a>
<a id="trace-23328"></a>
<a id="trace-23343"></a>
<a id="trace-23345"></a>
<a id="trace-23357"></a>
<a id="trace-23359"></a>
<a id="trace-23366"></a>
<a id="trace-23368"></a>
<a id="trace-23384"></a>
<a id="trace-23386"></a>
<a id="trace-23392"></a>
<a id="trace-23394"></a>
<a id="trace-23462"></a>
<a id="trace-23464"></a>
<a id="trace-23474"></a>
<a id="trace-23476"></a>
<a id="trace-23687"></a>
<a id="trace-23689"></a>
<a id="trace-23707"></a>
<a id="trace-23709"></a>
<a id="trace-23829"></a>
<a id="trace-23831"></a>
<a id="trace-23850"></a>
<a id="trace-23852"></a>
<a id="trace-23867"></a>
<a id="trace-23869"></a>
<a id="trace-23883"></a>
<a id="trace-23885"></a>
<a id="trace-23895"></a>
<a id="trace-23897"></a>
<a id="trace-23904"></a>
<a id="trace-23906"></a>
<a id="trace-23976"></a>
<a id="trace-23978"></a>
<a id="trace-23984"></a>
<a id="trace-23986"></a>
<a id="trace-23994"></a>
<a id="trace-23996"></a>
<a id="trace-24005"></a>
<a id="trace-24007"></a>
<a id="trace-24017"></a>
<a id="trace-24019"></a>
<a id="trace-24033"></a>
<a id="trace-24035"></a>
<a id="trace-24049"></a>
<a id="trace-24051"></a>
<a id="trace-24059"></a>
<a id="trace-24061"></a>
<a id="trace-24075"></a>
<a id="trace-24077"></a>
<a id="trace-24089"></a>
<a id="trace-24091"></a>
<a id="trace-24159"></a>
<a id="trace-24161"></a>
<a id="trace-24171"></a>
<a id="trace-24173"></a>
<a id="trace-24186"></a>
<a id="trace-24188"></a>
<a id="trace-24197"></a>
<a id="trace-24199"></a>
<a id="trace-24211"></a>
<a id="trace-24213"></a>
<a id="trace-24221"></a>
<a id="trace-24223"></a>
<a id="trace-24239"></a>
<a id="trace-24241"></a>
<a id="trace-24254"></a>
<a id="trace-24256"></a>
<a id="trace-24268"></a>
<a id="trace-24270"></a>
<a id="trace-24283"></a>
<a id="trace-24285"></a>
<a id="trace-24359"></a>
<a id="trace-24361"></a>
<a id="trace-24370"></a>
<a id="trace-24372"></a>
<a id="trace-24382"></a>
<a id="trace-24384"></a>
<a id="trace-24671"></a>
<a id="trace-24673"></a>
<a id="trace-24697"></a>
<a id="trace-24699"></a>
<a id="trace-24722"></a>
<a id="trace-24724"></a>
<a id="trace-24739"></a>
<a id="trace-24741"></a>
<a id="trace-24750"></a>
<a id="trace-24752"></a>
<a id="trace-24770"></a>
<a id="trace-24772"></a>
<a id="trace-24780"></a>
<a id="trace-24782"></a>
<a id="trace-24850"></a>
<a id="trace-24852"></a>
<a id="trace-24861"></a>
<a id="trace-24863"></a>
<a id="trace-25217"></a>
<a id="trace-25219"></a>
<a id="trace-25238"></a>
<a id="trace-25240"></a>
<a id="trace-25259"></a>
<a id="trace-25261"></a>
<a id="trace-25284"></a>
<a id="trace-25286"></a>
<a id="trace-25312"></a>
<a id="trace-25314"></a>
<a id="trace-25333"></a>
<a id="trace-25335"></a>
<a id="trace-25351"></a>
<a id="trace-25353"></a>
<a id="trace-25797"></a>
<a id="trace-25799"></a>
<a id="trace-25877"></a>
<a id="trace-25879"></a>
<a id="trace-25908"></a>
<a id="trace-25910"></a>
<a id="trace-25925"></a>
<a id="trace-25927"></a>
<a id="trace-25945"></a>
<a id="trace-25947"></a>
<a id="trace-25974"></a>
<a id="trace-25976"></a>
<a id="trace-25990"></a>
<a id="trace-25992"></a>
<a id="trace-26012"></a>
<a id="trace-26014"></a>
<a id="trace-27504"></a>
<a id="trace-27506"></a>
<a id="trace-27520"></a>
<a id="trace-27522"></a>
<a id="trace-27548"></a>
<a id="trace-27550"></a>
<a id="trace-27632"></a>
<a id="trace-27634"></a>
<a id="trace-27641"></a>
<a id="trace-27643"></a>
<a id="trace-27667"></a>
<a id="trace-27669"></a>
<a id="trace-27892"></a>
<a id="trace-27894"></a>
<a id="trace-27913"></a>
<a id="trace-27915"></a>
<a id="trace-28131"></a>
<a id="trace-28133"></a>
<a id="trace-28155"></a>
<a id="trace-28157"></a>
<a id="trace-28171"></a>
<a id="trace-28173"></a>
<a id="trace-28187"></a>
<a id="trace-28189"></a>
<a id="trace-28200"></a>
<a id="trace-28202"></a>
<a id="trace-28274"></a>
<a id="trace-28276"></a>
<a id="trace-28283"></a>
<a id="trace-28285"></a>
<a id="trace-28296"></a>
<a id="trace-28298"></a>
<a id="trace-28308"></a>
<a id="trace-28310"></a>
<a id="trace-28323"></a>
<a id="trace-28325"></a>
<a id="trace-28335"></a>
<a id="trace-28337"></a>
<a id="trace-28354"></a>
<a id="trace-28356"></a>
<a id="trace-28363"></a>
<a id="trace-28365"></a>
<a id="trace-28375"></a>
<a id="trace-28377"></a>
<a id="trace-28383"></a>
<a id="trace-28385"></a>
<a id="trace-28454"></a>
<a id="trace-28456"></a>
<a id="trace-28460"></a>
<a id="trace-28462"></a>
<a id="trace-28676"></a>
<a id="trace-28678"></a>
<a id="trace-28692"></a>
<a id="trace-28694"></a>
<a id="trace-28706"></a>
<a id="trace-28708"></a>
<a id="trace-28714"></a>
<a id="trace-28716"></a>
<a id="trace-28732"></a>
<a id="trace-28734"></a>
<a id="trace-28740"></a>
<a id="trace-28742"></a>
<a id="trace-28752"></a>
<a id="trace-28754"></a>
<a id="trace-28762"></a>
<a id="trace-28764"></a>
<a id="trace-28832"></a>
<a id="trace-28834"></a>
<a id="trace-28839"></a>
<a id="trace-28841"></a>
<a id="trace-28848"></a>
<a id="trace-28850"></a>
<a id="trace-28860"></a>
<a id="trace-28862"></a>
<a id="trace-28870"></a>
<a id="trace-28872"></a>
<a id="trace-28878"></a>
<a id="trace-28880"></a>
<a id="trace-28891"></a>
<a id="trace-28893"></a>
<a id="trace-28898"></a>
<a id="trace-28900"></a>
<a id="trace-28909"></a>
<a id="trace-28911"></a>
<a id="trace-28918"></a>
<a id="trace-28920"></a>
<a id="trace-28997"></a>
<a id="trace-28999"></a>
<a id="trace-29006"></a>
<a id="trace-29008"></a>
<a id="trace-29018"></a>
<a id="trace-29020"></a>
<a id="trace-29028"></a>
<a id="trace-29030"></a>
<a id="trace-29039"></a>
<a id="trace-29041"></a>
<a id="trace-29047"></a>
<a id="trace-29049"></a>
<a id="trace-29061"></a>
<a id="trace-29063"></a>
<a id="trace-29068"></a>
<a id="trace-29070"></a>
<a id="trace-29080"></a>
<a id="trace-29082"></a>
<a id="trace-29086"></a>
<a id="trace-29088"></a>
<a id="trace-29157"></a>
<a id="trace-29159"></a>
<a id="trace-29165"></a>
<a id="trace-29167"></a>
<a id="trace-29178"></a>
<a id="trace-29180"></a>
<a id="trace-29195"></a>
<a id="trace-29197"></a>
<a id="trace-29209"></a>
<a id="trace-29211"></a>
<a id="trace-29217"></a>
<a id="trace-29219"></a>
<a id="trace-29233"></a>
<a id="trace-29235"></a>
<a id="trace-29239"></a>
<a id="trace-29241"></a>
<a id="trace-29253"></a>
<a id="trace-29255"></a>
<a id="trace-29259"></a>
<a id="trace-29261"></a>
<a id="trace-29329"></a>
<a id="trace-29331"></a>
<a id="trace-29335"></a>
<a id="trace-29337"></a>
<a id="trace-29345"></a>
<a id="trace-29347"></a>
<a id="trace-29357"></a>
<a id="trace-29359"></a>
<a id="trace-29369"></a>
<a id="trace-29371"></a>
<a id="trace-29380"></a>
<a id="trace-29382"></a>
<a id="trace-29402"></a>
<a id="trace-29404"></a>
<a id="trace-29409"></a>
<a id="trace-29411"></a>
<a id="trace-29420"></a>
<a id="trace-29422"></a>
<a id="trace-29629"></a>
<a id="trace-29631"></a>
<a id="trace-29701"></a>
<a id="trace-29703"></a>
<a id="trace-29715"></a>
<a id="trace-29717"></a>
<a id="trace-29724"></a>
<a id="trace-29726"></a>
<a id="trace-29738"></a>
<a id="trace-29740"></a>
<a id="trace-29752"></a>
<a id="trace-29754"></a>
<a id="trace-29762"></a>
<a id="trace-29764"></a>
<a id="trace-29778"></a>
<a id="trace-29780"></a>
<a id="trace-29788"></a>
<a id="trace-29790"></a>
<a id="trace-29804"></a>
<a id="trace-29806"></a>
<a id="trace-29821"></a>
<a id="trace-29823"></a>
<a id="trace-29895"></a>
<a id="trace-29897"></a>
<a id="trace-29911"></a>
<a id="trace-29913"></a>
<a id="trace-29927"></a>
<a id="trace-29929"></a>
<a id="trace-29947"></a>
<a id="trace-29949"></a>
<a id="trace-29960"></a>
<a id="trace-29962"></a>
<a id="trace-29968"></a>
<a id="trace-29970"></a>
<a id="trace-29986"></a>
<a id="trace-29988"></a>
<a id="trace-29998"></a>
<a id="trace-30000"></a>
<a id="trace-30017"></a>
<a id="trace-30019"></a>
<a id="trace-30023"></a>
<a id="trace-30025"></a>
<a id="trace-30093"></a>
<a id="trace-30095"></a>
<a id="trace-30105"></a>
<a id="trace-30107"></a>
<a id="trace-30593"></a>
<a id="trace-30595"></a>
<a id="trace-30608"></a>
<a id="trace-30610"></a>
<a id="trace-30625"></a>
<a id="trace-30627"></a>
<a id="trace-30654"></a>
<a id="trace-30656"></a>
<a id="trace-30676"></a>
<a id="trace-30678"></a>
<a id="trace-30686"></a>
<a id="trace-30688"></a>
<a id="trace-30709"></a>
<a id="trace-30711"></a>
<a id="trace-30730"></a>
<a id="trace-30732"></a>
<a id="trace-30805"></a>
<a id="trace-30807"></a>
<a id="trace-30820"></a>
<a id="trace-30822"></a>
<a id="trace-30839"></a>
<a id="trace-30841"></a>
<a id="trace-30858"></a>
<a id="trace-30860"></a>
<a id="trace-30878"></a>
<a id="trace-30880"></a>
<a id="trace-30892"></a>
<a id="trace-30894"></a>
<a id="trace-30917"></a>
<a id="trace-30919"></a>
<a id="trace-30935"></a>
<a id="trace-30937"></a>
<a id="trace-30951"></a>
<a id="trace-30953"></a>
<a id="trace-30961"></a>
<a id="trace-30963"></a>
<a id="trace-31480"></a>
<a id="trace-31482"></a>
<a id="trace-31495"></a>
<a id="trace-31497"></a>
<a id="trace-31511"></a>
<a id="trace-31513"></a>
<a id="trace-31523"></a>
<a id="trace-31525"></a>
<a id="trace-31544"></a>
<a id="trace-31546"></a>
<a id="trace-31559"></a>
<a id="trace-31561"></a>
<a id="trace-31580"></a>
<a id="trace-31582"></a>
<a id="trace-31595"></a>
<a id="trace-31597"></a>
<a id="trace-31618"></a>
<a id="trace-31620"></a>
<a id="trace-31632"></a>
<a id="trace-31634"></a>
<a id="trace-31714"></a>
<a id="trace-31716"></a>
<a id="trace-31726"></a>
<a id="trace-31728"></a>
<a id="trace-31750"></a>
<a id="trace-31752"></a>
<a id="trace-31768"></a>
<a id="trace-31770"></a>
<a id="trace-31786"></a>
<a id="trace-31788"></a>
<a id="trace-31801"></a>
<a id="trace-31803"></a>
<a id="trace-31822"></a>
<a id="trace-31824"></a>
<a id="trace-31839"></a>
<a id="trace-31841"></a>
<a id="trace-32061"></a>
<a id="trace-32063"></a>
<a id="trace-32073"></a>
<a id="trace-32075"></a>
<a id="trace-32151"></a>
<a id="trace-32153"></a>
<a id="trace-32167"></a>
<a id="trace-32169"></a>
<a id="trace-32183"></a>
<a id="trace-32185"></a>
<a id="trace-32203"></a>
<a id="trace-32205"></a>
<a id="trace-32231"></a>
<a id="trace-32233"></a>
<a id="trace-32248"></a>
<a id="trace-32250"></a>
<a id="trace-32276"></a>
<a id="trace-32278"></a>
<a id="trace-32290"></a>
<a id="trace-32292"></a>
<a id="trace-32307"></a>
<a id="trace-32309"></a>
<a id="trace-32315"></a>
<a id="trace-32317"></a>
<a id="trace-32388"></a>
<a id="trace-32390"></a>
<a id="trace-32398"></a>
<a id="trace-32400"></a>
<a id="trace-32416"></a>
<a id="trace-32418"></a>
<a id="trace-32429"></a>
<a id="trace-32431"></a>
<a id="trace-32448"></a>
<a id="trace-32450"></a>
<a id="trace-32460"></a>
<a id="trace-32462"></a>
<a id="trace-32482"></a>
<a id="trace-32484"></a>
<a id="trace-32490"></a>
<a id="trace-32492"></a>
<a id="trace-32510"></a>
<a id="trace-32512"></a>
<a id="trace-32520"></a>
<a id="trace-32522"></a>
<a id="trace-32595"></a>
<a id="trace-32597"></a>
<a id="trace-32610"></a>
<a id="trace-32612"></a>
<a id="trace-32627"></a>
<a id="trace-32629"></a>
<a id="trace-32638"></a>
<a id="trace-32640"></a>
<a id="trace-32654"></a>
<a id="trace-32656"></a>
<a id="trace-32673"></a>
<a id="trace-32675"></a>
<a id="trace-32689"></a>
<a id="trace-32691"></a>
<a id="trace-32699"></a>
<a id="trace-32701"></a>
<a id="trace-32719"></a>
<a id="trace-32721"></a>
<a id="trace-32732"></a>
<a id="trace-32734"></a>
<a id="trace-32807"></a>
<a id="trace-32809"></a>
<a id="trace-32824"></a>
<a id="trace-32826"></a>
<a id="trace-32838"></a>
<a id="trace-32840"></a>
<a id="trace-32848"></a>
<a id="trace-32850"></a>
<a id="trace-32872"></a>
<a id="trace-32874"></a>
<a id="trace-32890"></a>
<a id="trace-32892"></a>
<a id="trace-32900"></a>
<a id="trace-32902"></a>
<a id="trace-32924"></a>
<a id="trace-32926"></a>
<a id="trace-32932"></a>
<a id="trace-32934"></a>
<a id="trace-33008"></a>
<a id="trace-33010"></a>
<a id="trace-33020"></a>
<a id="trace-33022"></a>
<a id="trace-33035"></a>
<a id="trace-33037"></a>
<a id="trace-33046"></a>
<a id="trace-33048"></a>
<a id="trace-33062"></a>
<a id="trace-33064"></a>
<a id="trace-33078"></a>
<a id="trace-33080"></a>
<a id="trace-33097"></a>
<a id="trace-33099"></a>
<a id="trace-33107"></a>
<a id="trace-33109"></a>
<a id="trace-33125"></a>
<a id="trace-33127"></a>
<a id="trace-33141"></a>
<a id="trace-33143"></a>
<a id="trace-33208"></a>
<a id="trace-33210"></a>
<a id="trace-33218"></a>
<a id="trace-33220"></a>
<a id="trace-33233"></a>
<a id="trace-33235"></a>
<a id="trace-33245"></a>
<a id="trace-33247"></a>
<a id="trace-33260"></a>
<a id="trace-33262"></a>
<a id="trace-33271"></a>
<a id="trace-33273"></a>
<a id="trace-33290"></a>
<a id="trace-33292"></a>
<a id="trace-33299"></a>
<a id="trace-33301"></a>
<a id="trace-33311"></a>
<a id="trace-33313"></a>
<a id="trace-33320"></a>
<a id="trace-33322"></a>
<a id="trace-33387"></a>
<a id="trace-33389"></a>
<a id="trace-33396"></a>
<a id="trace-33398"></a>
<a id="trace-33412"></a>
<a id="trace-33414"></a>
<a id="trace-33421"></a>
<a id="trace-33423"></a>
<a id="trace-33438"></a>
<a id="trace-33440"></a>
<a id="trace-33451"></a>
<a id="trace-33453"></a>
<a id="trace-33465"></a>
<a id="trace-33467"></a>
<a id="trace-33478"></a>
<a id="trace-33480"></a>
<a id="trace-33489"></a>
<a id="trace-33491"></a>
<a id="trace-33498"></a>
<a id="trace-33500"></a>
<a id="trace-33563"></a>
<a id="trace-33565"></a>
<a id="trace-33571"></a>
<a id="trace-33573"></a>
<a id="trace-33585"></a>
<a id="trace-33587"></a>
<a id="trace-33594"></a>
<a id="trace-33596"></a>
<a id="trace-33612"></a>
<a id="trace-33614"></a>
<a id="trace-33621"></a>
<a id="trace-33623"></a>
<a id="trace-33636"></a>
<a id="trace-33638"></a>
<a id="trace-33648"></a>
<a id="trace-33650"></a>
<a id="trace-33662"></a>
<a id="trace-33664"></a>
<a id="trace-33670"></a>
<a id="trace-33672"></a>
<a id="trace-33736"></a>
<a id="trace-33738"></a>
<a id="trace-33744"></a>
<a id="trace-33746"></a>
<a id="trace-33753"></a>
<a id="trace-33755"></a>
<a id="trace-33763"></a>
<a id="trace-33765"></a>
<a id="trace-33777"></a>
<a id="trace-33779"></a>
<a id="trace-33786"></a>
<a id="trace-33788"></a>
<a id="trace-33803"></a>
<a id="trace-33805"></a>
<a id="trace-33810"></a>
<a id="trace-33812"></a>
<a id="trace-33823"></a>
<a id="trace-33825"></a>
<a id="trace-33832"></a>
<a id="trace-33834"></a>
<a id="trace-33894"></a>
<a id="trace-33896"></a>
<a id="trace-33903"></a>
<a id="trace-33905"></a>
<a id="trace-33912"></a>
<a id="trace-33914"></a>
<a id="trace-33919"></a>
<a id="trace-33921"></a>
<a id="trace-33925"></a>
<a id="trace-33927"></a>
<a id="trace-33933"></a>
<a id="trace-33935"></a>
<a id="trace-33941"></a>
<a id="trace-33943"></a>
<a id="trace-33946"></a>
<a id="trace-33948"></a>
<a id="trace-33953"></a>
<a id="trace-33955"></a>
<a id="trace-33958"></a>
<a id="trace-33960"></a>
<a id="trace-34014"></a>
<a id="trace-34016"></a>
<a id="trace-34020"></a>
<a id="trace-34022"></a>
<a id="trace-34028"></a>
<a id="trace-34033"></a>
<a id="trace-34037"></a>
<a id="trace-34042"></a>
<a id="trace-34048"></a>
<a id="trace-34051"></a>
<a id="trace-34056"></a>
<a id="trace-34059"></a>
<a id="trace-34113"></a>
<a id="trace-34119"></a>
<a id="trace-34124"></a>
<a id="trace-34129"></a>
<a id="trace-34133"></a>
<a id="trace-34137"></a>
<a id="trace-34143"></a>
<a id="trace-34146"></a>
<a id="trace-34151"></a>
<a id="trace-34154"></a>
<a id="trace-34208"></a>
<a id="trace-34215"></a>
<a id="trace-34220"></a>
<a id="trace-34225"></a>
<a id="trace-34229"></a>
<a id="trace-34233"></a>
<a id="trace-34239"></a>
<a id="trace-34242"></a>
<a id="trace-34247"></a>
<a id="trace-34250"></a>
<a id="trace-34304"></a>
<a id="trace-34310"></a>
<a id="trace-34315"></a>
<a id="trace-34323"></a>
<a id="trace-34327"></a>
<a id="trace-34332"></a>
<a id="trace-34340"></a>
<a id="trace-34342"></a>
<a id="trace-34347"></a>
<a id="trace-34349"></a>
<a id="trace-34403"></a>
<a id="trace-34409"></a>
<a id="trace-34414"></a>
<a id="trace-34420"></a>
<a id="trace-34424"></a>
<a id="trace-34429"></a>
<a id="trace-34438"></a>
<a id="trace-34440"></a>
<a id="trace-34446"></a>
<a id="trace-34450"></a>
<a id="trace-34504"></a>
<a id="trace-34510"></a>
<a id="trace-34515"></a>
<a id="trace-34520"></a>
<a id="trace-34524"></a>
<a id="trace-34528"></a>
<a id="trace-34535"></a>
<a id="trace-34537"></a>
<a id="trace-34543"></a>
<a id="trace-34546"></a>
<a id="trace-34602"></a>
<a id="trace-34609"></a>
<a id="trace-34616"></a>
<a id="trace-34621"></a>
<a id="trace-34625"></a>
<a id="trace-34629"></a>
<a id="trace-34635"></a>
<a id="trace-34637"></a>
<a id="trace-34642"></a>
<a id="trace-34644"></a>
<a id="trace-34699"></a>
<a id="trace-34705"></a>
<a id="trace-34712"></a>
<a id="trace-34719"></a>
<a id="trace-34724"></a>
<a id="trace-34730"></a>
<a id="trace-34736"></a>
<a id="trace-34738"></a>
<a id="trace-34743"></a>
<a id="trace-34745"></a>
- 1.60s–359.80s (×1352), actor 37, squad 4 (trace 570): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079367292524973, 'next_transition': 598}.
<a id="trace-927"></a>
<a id="trace-956"></a>
<a id="trace-981"></a>
<a id="trace-983"></a>
<a id="trace-1010"></a>
<a id="trace-1012"></a>
<a id="trace-1027"></a>
<a id="trace-1029"></a>
<a id="trace-1118"></a>
<a id="trace-1120"></a>
<a id="trace-1279"></a>
<a id="trace-1281"></a>
<a id="trace-1302"></a>
<a id="trace-1304"></a>
- 7.70s–11.20s (×14), actor 5, squad 0 (trace 927): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 737. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5212368046120436, 'next_transition': 956}.
<a id="trace-1125"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1125): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1047. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.435368006668213, 'next_transition': 139}.
<a id="trace-1126"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1126): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1047. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.435368006668213, 'next_transition': 139}.
<a id="trace-139"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 139): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.459775089592279, 'next_transition': 1815}.
<a id="trace-1388"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1388): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1388. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.459775089592279, 'next_transition': 1815}.
<a id="trace-1389"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1389): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1389. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.459775089592279, 'next_transition': 1815}.
<a id="trace-1390"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1390): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1039. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724798762976573, 'next_transition': 1730}.
<a id="trace-1391"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1391): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1039. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724798762976573, 'next_transition': 1730}.
<a id="trace-1730"></a>
<a id="trace-1732"></a>
<a id="trace-1794"></a>
<a id="trace-1796"></a>
<a id="trace-2013"></a>
<a id="trace-2015"></a>
<a id="trace-2299"></a>
<a id="trace-2301"></a>
<a id="trace-2743"></a>
<a id="trace-2745"></a>
<a id="trace-3007"></a>
<a id="trace-3009"></a>
<a id="trace-3482"></a>
<a id="trace-3484"></a>
- 13.20s–16.75s (×14), actor 5, squad 0 (trace 1730): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.75s, trace 1389. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1812418015708555, 'next_transition': 1794}.
<a id="trace-1815"></a>
- 14.55s–14.55s (×1), actor 8, squad 1 (trace 1815): ReactToContact: cover and return fire. Knowledge: actor memory at 10.00s, trace 1047. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875073203146131, 'next_transition': 2027}.
<a id="trace-1816"></a>
- 14.55s–14.55s (×1), actor 8, squad 1 (trace 1816): bounding overwatch. Knowledge: actor memory at 10.00s, trace 1047. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875073203146131, 'next_transition': 2027}.
<a id="trace-1817"></a>
<a id="trace-2027"></a>
<a id="trace-2313"></a>
<a id="trace-2514"></a>
<a id="trace-2784"></a>
<a id="trace-3015"></a>
<a id="trace-3243"></a>
- 14.55s–16.50s (×7), actor 8, squad 1 (trace 1817): new contact inside 100 m. Knowledge: actor memory at 10.00s, trace 1047. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875073203146131, 'next_transition': 2027}.
<a id="trace-3489"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 3489): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2220. Next observer evidence: {'until': 17.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9449943686307054, 'next_transition': 3941}.
<a id="trace-3490"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 3490): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2220. Next observer evidence: {'until': 17.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9449943686307054, 'next_transition': 3941}.
<a id="trace-3491"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 3491): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2220. Next observer evidence: {'until': 17.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9449943686307054, 'next_transition': 3941}.
<a id="trace-3941"></a>
<a id="trace-3943"></a>
- 17.25s–17.25s (×2), actor 5, squad 0 (trace 3941): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2225. Next observer evidence: None.
<a id="trace-3951"></a>
<a id="trace-4392"></a>
- 17.35s–17.70s (×2), actor 0, squad 0 (trace 3951): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2220. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6818111688282169, 'next_transition': 4392}.
<a id="trace-4821"></a>
<a id="trace-4823"></a>
<a id="trace-4948"></a>
<a id="trace-4950"></a>
- 17.75s–18.75s (×4), actor 5, squad 0 (trace 4821): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2225. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.109815820463686, 'next_transition': 4948}.
<a id="trace-4955"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 4955): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2220. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.667256249948057, 'next_transition': 5440}.
<a id="trace-5440"></a>
<a id="trace-5442"></a>
<a id="trace-5494"></a>
<a id="trace-5496"></a>
<a id="trace-5797"></a>
<a id="trace-5799"></a>
- 19.25s–20.25s (×6), actor 5, squad 0 (trace 5440): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2225. Next observer evidence: {'until': 19.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5709423424816438, 'next_transition': 5494}.
<a id="trace-5512"></a>
- 19.85s–19.85s (×1), actor 8, squad 1 (trace 5512): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 15.00s, trace 2228. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.815380238942186, 'next_transition': 475}.
<a id="trace-5513"></a>
- 19.85s–19.85s (×1), actor 8, squad 1 (trace 5513): rearward bound: one stationary suppressing element. Knowledge: actor memory at 15.00s, trace 2228. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.815380238942186, 'next_transition': 475}.
<a id="trace-5804"></a>
- 20.25s–20.25s (×1), actor 0, squad 0 (trace 5804): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 5687. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5129763160738006, 'next_transition': 6298}.
<a id="trace-6298"></a>
<a id="trace-6300"></a>
<a id="trace-6409"></a>
<a id="trace-6411"></a>
<a id="trace-6538"></a>
<a id="trace-6540"></a>
- 20.75s–23.25s (×6), actor 5, squad 0 (trace 6298): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5692. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9253768718288733, 'next_transition': 6409}.
<a id="trace-6573"></a>
- 23.75s–23.75s (×1), actor 0, squad 0 (trace 6573): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 5687. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.245048000797175, 'next_transition': 6602}.
<a id="trace-6602"></a>
<a id="trace-6604"></a>
<a id="trace-6632"></a>
<a id="trace-6634"></a>
<a id="trace-6723"></a>
<a id="trace-6725"></a>
<a id="trace-6741"></a>
<a id="trace-6743"></a>
- 24.25s–25.75s (×8), actor 5, squad 0 (trace 6602): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5692. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750450489589157, 'next_transition': 6632}.
<a id="trace-474"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 474): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-475"></a>
- 26.55s–26.55s (×1), actor 5, squad 1 (events line 475): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6790"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 6790): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=4.578256 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 6790. Next observer evidence: {'until': 26.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1378156853430063, 'next_transition': 6816}.
<a id="trace-6791"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 6791): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=4.578256 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 6791. Next observer evidence: {'until': 26.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1378156853430063, 'next_transition': 6816}.
<a id="trace-6792"></a>
- 26.55s–26.55s (×1), actor 5, squad 1 (trace 6792): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=4.578256 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 6792. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.198484080098972, 'next_transition': 11220}.
<a id="trace-6793"></a>
- 26.55s–26.55s (×1), actor 5, squad 1 (trace 6793): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=4.578256 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 6793. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.198484080098972, 'next_transition': 11220}.
<a id="trace-6816"></a>
- 26.85s–26.85s (×1), actor 0, squad 0 (trace 6816): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 6645. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.032046250000000054, 'next_transition': 7273}.
<a id="trace-7273"></a>
<a id="trace-7275"></a>
<a id="trace-7338"></a>
<a id="trace-7340"></a>
<a id="trace-7415"></a>
<a id="trace-7417"></a>
<a id="trace-7519"></a>
<a id="trace-7521"></a>
- 27.25s–30.25s (×8), actor 5, squad 0 (trace 7273): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 6793. Next observer evidence: {'until': 28.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.16187341804728927, 'next_transition': 7338}.
<a id="trace-7534"></a>
- 30.45s–30.45s (×1), actor 0, squad 0 (trace 7534): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 7437. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14204158281887366, 'next_transition': 7554}.
<a id="trace-7554"></a>
<a id="trace-7556"></a>
<a id="trace-7638"></a>
<a id="trace-7640"></a>
<a id="trace-7696"></a>
<a id="trace-7698"></a>
<a id="trace-7821"></a>
<a id="trace-7823"></a>
- 30.75s–33.25s (×8), actor 5, squad 0 (trace 7554): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 7442. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31106415652455555, 'next_transition': 7638}.
<a id="trace-7859"></a>
- 33.55s–33.55s (×1), actor 0, squad 0 (trace 7859): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 7437. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14713340215753087, 'next_transition': 10942}.
<a id="trace-10526"></a>
- 33.55s–33.55s (×1), actor 0, squad 0 (trace 10526): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 30.00s, trace 7437. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14713340215753087, 'next_transition': 10942}.
<a id="trace-10527"></a>
- 33.55s–33.55s (×1), actor 0, squad 0 (trace 10527): MoveTactically. Knowledge: actor memory at 30.00s, trace 7437. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14713340215753087, 'next_transition': 10942}.
<a id="trace-10528"></a>
- 33.55s–33.55s (×1), actor 0, squad 0 (trace 10528): contact cover complete: assessment resumes closure. Knowledge: actor memory at 30.00s, trace 7437. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14713340215753087, 'next_transition': 10942}.
<a id="trace-10942"></a>
<a id="trace-10944"></a>
<a id="trace-11014"></a>
<a id="trace-11016"></a>
- 33.75s–34.25s (×4), actor 5, squad 0 (trace 10942): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 7442. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27416091357449596, 'next_transition': 11014}.
<a id="trace-11047"></a>
- 34.40s–34.40s (×1), actor 0, squad 0 (trace 11047): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 30.00s, trace 7437. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07888197606968561, 'next_transition': 11206}.
<a id="trace-11206"></a>
<a id="trace-11208"></a>
<a id="trace-11397"></a>
<a id="trace-11399"></a>
<a id="trace-11462"></a>
<a id="trace-11464"></a>
<a id="trace-11645"></a>
<a id="trace-11647"></a>
<a id="trace-11726"></a>
<a id="trace-11728"></a>
<a id="trace-11875"></a>
<a id="trace-11877"></a>
<a id="trace-11954"></a>
<a id="trace-11956"></a>
<a id="trace-12105"></a>
<a id="trace-12107"></a>
<a id="trace-12245"></a>
<a id="trace-12247"></a>
<a id="trace-12316"></a>
<a id="trace-12318"></a>
<a id="trace-12380"></a>
<a id="trace-12382"></a>
<a id="trace-12426"></a>
<a id="trace-12428"></a>
- 34.75s–41.75s (×24), actor 5, squad 0 (trace 11206): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 7442. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9635850352299283, 'next_transition': 11397}.
<a id="trace-11220"></a>
- 34.80s–34.80s (×1), actor 8, squad 1 (trace 11220): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 30.00s, trace 7445. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.394965962965851, 'next_transition': 11923}.
<a id="trace-11221"></a>
- 34.80s–34.80s (×1), actor 8, squad 1 (trace 11221): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 30.00s, trace 7445. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.394965962965851, 'next_transition': 11923}.
<a id="trace-11923"></a>
- 38.60s–38.60s (×1), actor 8, squad 1 (trace 11923): NeedSupport. Knowledge: actor memory at 35.00s, trace 11300. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.760035078350118, 'next_transition': 12883}.
<a id="trace-12439"></a>
- 41.90s–41.90s (×1), actor 0, squad 0 (trace 12439): NeedSupport. Knowledge: actor memory at 40.00s, trace 12138. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5517779955071871, 'next_transition': 12482}.
<a id="trace-12482"></a>
<a id="trace-12484"></a>
<a id="trace-12528"></a>
<a id="trace-12530"></a>
<a id="trace-12573"></a>
<a id="trace-12575"></a>
<a id="trace-12609"></a>
<a id="trace-12611"></a>
<a id="trace-12821"></a>
<a id="trace-12823"></a>
<a id="trace-12849"></a>
<a id="trace-12851"></a>
<a id="trace-12871"></a>
<a id="trace-12873"></a>
- 42.25s–46.75s (×14), actor 5, squad 0 (trace 12482): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 12143. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42529676218250917, 'next_transition': 12528}.
<a id="trace-12883"></a>
- 46.80s–46.80s (×1), actor 8, squad 1 (trace 12883): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 12726. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.151148689468153, 'next_transition': 15413}.
<a id="trace-12890"></a>
- 46.80s–46.80s (×1), actor 8, squad 1 (trace 12890): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 12726. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.151148689468153, 'next_transition': 15413}.
<a id="trace-12952"></a>
- 47.10s–47.10s (×1), actor 0, squad 0 (trace 12952): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 45.00s, trace 12718. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13267}.
<a id="trace-13267"></a>
<a id="trace-13269"></a>
<a id="trace-13288"></a>
<a id="trace-13290"></a>
<a id="trace-13348"></a>
<a id="trace-13350"></a>
- 47.25s–48.75s (×6), actor 5, squad 0 (trace 13267): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 12723. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13288}.
<a id="trace-13368"></a>
- 49.10s–49.10s (×1), actor 0, squad 0 (trace 13368): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 12718. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07002500000000023, 'next_transition': 13990}.
<a id="trace-13369"></a>
- 49.10s–49.10s (×1), actor 0, squad 0 (trace 13369): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 12718. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07002500000000023, 'next_transition': 13990}.
<a id="trace-13990"></a>
<a id="trace-13992"></a>
<a id="trace-14012"></a>
<a id="trace-14014"></a>
<a id="trace-14115"></a>
<a id="trace-14117"></a>
<a id="trace-14173"></a>
<a id="trace-14175"></a>
<a id="trace-14219"></a>
<a id="trace-14221"></a>
<a id="trace-14332"></a>
<a id="trace-14334"></a>
<a id="trace-14399"></a>
<a id="trace-14401"></a>
- 49.25s–52.75s (×14), actor 5, squad 0 (trace 13990): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 12723. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03547499999999992, 'next_transition': 14012}.
<a id="trace-14414"></a>
- 52.80s–52.80s (×1), actor 0, squad 0 (trace 14414): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 14032. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11962726508796225, 'next_transition': 14935}.
<a id="trace-14415"></a>
- 52.80s–52.80s (×1), actor 0, squad 0 (trace 14415): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 14032. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11962726508796225, 'next_transition': 14935}.
<a id="trace-14935"></a>
<a id="trace-14937"></a>
<a id="trace-14997"></a>
<a id="trace-14999"></a>
<a id="trace-15068"></a>
<a id="trace-15070"></a>
<a id="trace-15132"></a>
<a id="trace-15134"></a>
<a id="trace-15337"></a>
<a id="trace-15339"></a>
<a id="trace-15424"></a>
<a id="trace-15426"></a>
<a id="trace-15476"></a>
<a id="trace-15478"></a>
<a id="trace-15525"></a>
<a id="trace-15527"></a>
<a id="trace-15569"></a>
<a id="trace-15571"></a>
<a id="trace-15601"></a>
<a id="trace-15603"></a>
<a id="trace-15627"></a>
<a id="trace-15629"></a>
<a id="trace-15650"></a>
<a id="trace-15652"></a>
<a id="trace-15675"></a>
<a id="trace-15677"></a>
<a id="trace-15762"></a>
<a id="trace-15764"></a>
<a id="trace-15790"></a>
<a id="trace-15792"></a>
<a id="trace-15810"></a>
<a id="trace-15812"></a>
<a id="trace-15828"></a>
<a id="trace-15830"></a>
<a id="trace-15850"></a>
<a id="trace-15852"></a>
<a id="trace-15873"></a>
<a id="trace-15875"></a>
<a id="trace-15897"></a>
<a id="trace-15899"></a>
<a id="trace-15914"></a>
<a id="trace-15916"></a>
<a id="trace-15953"></a>
<a id="trace-15955"></a>
<a id="trace-15991"></a>
<a id="trace-15993"></a>
<a id="trace-16095"></a>
<a id="trace-16097"></a>
<a id="trace-16117"></a>
<a id="trace-16119"></a>
<a id="trace-16259"></a>
<a id="trace-16261"></a>
<a id="trace-16293"></a>
<a id="trace-16295"></a>
- 53.25s–67.75s (×54), actor 5, squad 0 (trace 14935): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 14037. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00019124999999997616, 'next_transition': 14997}.
<a id="trace-15413"></a>
- 56.20s–56.20s (×1), actor 8, squad 1 (trace 15413): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 55.00s, trace 15175. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0474791604556044, 'next_transition': 1499}.
<a id="trace-16325"></a>
- 68.00s–68.00s (×1), actor 0, squad 0 (trace 16325): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 16018. Next observer evidence: {'until': 69.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.19715369241101202, 'next_transition': 16632}.
<a id="trace-16326"></a>
- 68.00s–68.00s (×1), actor 0, squad 0 (trace 16326): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 16018. Next observer evidence: {'until': 69.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.19715369241101202, 'next_transition': 16632}.
<a id="trace-16632"></a>
<a id="trace-16634"></a>
<a id="trace-16670"></a>
<a id="trace-16672"></a>
<a id="trace-16768"></a>
<a id="trace-16770"></a>
<a id="trace-16807"></a>
<a id="trace-16809"></a>
<a id="trace-16840"></a>
<a id="trace-16842"></a>
<a id="trace-16896"></a>
<a id="trace-16898"></a>
<a id="trace-16935"></a>
<a id="trace-16937"></a>
<a id="trace-16950"></a>
<a id="trace-16952"></a>
<a id="trace-16973"></a>
<a id="trace-16975"></a>
<a id="trace-17000"></a>
<a id="trace-17002"></a>
<a id="trace-17084"></a>
<a id="trace-17086"></a>
<a id="trace-17099"></a>
<a id="trace-17101"></a>
<a id="trace-17122"></a>
<a id="trace-17124"></a>
<a id="trace-17141"></a>
<a id="trace-17143"></a>
<a id="trace-17167"></a>
<a id="trace-17169"></a>
<a id="trace-17182"></a>
<a id="trace-17184"></a>
<a id="trace-17227"></a>
<a id="trace-17229"></a>
<a id="trace-17354"></a>
<a id="trace-17356"></a>
<a id="trace-17392"></a>
<a id="trace-17394"></a>
<a id="trace-17432"></a>
<a id="trace-17434"></a>
<a id="trace-17449"></a>
<a id="trace-17451"></a>
<a id="trace-17468"></a>
<a id="trace-17470"></a>
<a id="trace-17482"></a>
<a id="trace-17484"></a>
<a id="trace-17503"></a>
<a id="trace-17505"></a>
<a id="trace-17518"></a>
<a id="trace-17520"></a>
<a id="trace-17606"></a>
<a id="trace-17608"></a>
- 69.25s–85.25s (×52), actor 5, squad 0 (trace 16632): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 16023. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2495544553504209, 'next_transition': 16670}.
<a id="trace-17649"></a>
- 86.30s–86.30s (×1), actor 0, squad 0 (trace 17649): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 17533. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11339756846075849, 'next_transition': 17861}.
<a id="trace-17696"></a>
- 86.30s–86.30s (×1), actor 0, squad 0 (trace 17696): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 17533. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11339756846075849, 'next_transition': 17861}.
<a id="trace-17861"></a>
<a id="trace-17863"></a>
<a id="trace-17907"></a>
<a id="trace-17909"></a>
<a id="trace-17934"></a>
<a id="trace-17936"></a>
<a id="trace-17990"></a>
<a id="trace-17992"></a>
<a id="trace-18013"></a>
<a id="trace-18015"></a>
<a id="trace-18100"></a>
<a id="trace-18102"></a>
<a id="trace-18120"></a>
<a id="trace-18122"></a>
<a id="trace-18142"></a>
<a id="trace-18144"></a>
<a id="trace-18155"></a>
<a id="trace-18157"></a>
<a id="trace-18181"></a>
<a id="trace-18183"></a>
<a id="trace-18197"></a>
<a id="trace-18199"></a>
<a id="trace-18223"></a>
<a id="trace-18225"></a>
<a id="trace-18234"></a>
<a id="trace-18236"></a>
<a id="trace-18274"></a>
<a id="trace-18276"></a>
- 86.75s–94.75s (×28), actor 5, squad 0 (trace 17861): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 17538. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17425729976711335, 'next_transition': 17907}.
<a id="trace-18360"></a>
- 95.30s–95.30s (×1), actor 0, squad 0 (trace 18360): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 95.00s, trace 18284. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.558885697614097, 'next_transition': 1498}.
<a id="trace-1498"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (events line 1498): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1499"></a>
- 95.65s–95.65s (×1), actor 5, squad 1 (events line 1499): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18375"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (trace 18375): renew committed intent (75 s lifetime). Knowledge: actor memory at 95.65s, trace 18375. Next observer evidence: None.
<a id="trace-18376"></a>
- 95.65s–95.65s (×1), actor 5, squad 1 (trace 18376): renew committed intent (75 s lifetime). Knowledge: actor memory at 95.65s, trace 18376. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18705}.
<a id="trace-18384"></a>
<a id="trace-18386"></a>
<a id="trace-18415"></a>
<a id="trace-18417"></a>
<a id="trace-18442"></a>
<a id="trace-18444"></a>
<a id="trace-18479"></a>
<a id="trace-18481"></a>
<a id="trace-18499"></a>
<a id="trace-18501"></a>
<a id="trace-18545"></a>
<a id="trace-18547"></a>
<a id="trace-18578"></a>
<a id="trace-18580"></a>
<a id="trace-18600"></a>
<a id="trace-18602"></a>
<a id="trace-18791"></a>
<a id="trace-18793"></a>
- 95.75s–101.25s (×18), actor 5, squad 0 (trace 18384): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.65s, trace 18376. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8224543477682963, 'next_transition': 18415}.
<a id="trace-18705"></a>
- 100.70s–100.70s (×1), actor 8, squad 1 (trace 18705): MoveTactically. Knowledge: actor memory at 100.00s, trace 18631. Next observer evidence: None.
<a id="trace-18706"></a>
- 100.70s–100.70s (×1), actor 8, squad 1 (trace 18706): received platoon directive. Knowledge: actor memory at 100.00s, trace 18631. Next observer evidence: None.
<a id="trace-18725"></a>
- 100.75s–100.75s (×1), actor 8, squad 1 (trace 18725): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 100.00s, trace 18631. Next observer evidence: {'until': 111, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.000009840933465, 'next_transition': 19480}.
<a id="trace-18804"></a>
- 101.55s–101.55s (×1), actor 0, squad 0 (trace 18804): MoveTactically. Knowledge: actor memory at 100.00s, trace 18623. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18927}.
<a id="trace-18805"></a>
- 101.55s–101.55s (×1), actor 0, squad 0 (trace 18805): received platoon directive. Knowledge: actor memory at 100.00s, trace 18623. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18927}.
<a id="trace-18927"></a>
<a id="trace-18929"></a>
<a id="trace-18958"></a>
<a id="trace-18960"></a>
<a id="trace-18992"></a>
<a id="trace-18994"></a>
<a id="trace-19048"></a>
<a id="trace-19050"></a>
<a id="trace-19096"></a>
<a id="trace-19098"></a>
<a id="trace-19240"></a>
<a id="trace-19242"></a>
<a id="trace-19271"></a>
<a id="trace-19273"></a>
<a id="trace-19281"></a>
<a id="trace-19283"></a>
<a id="trace-19307"></a>
<a id="trace-19309"></a>
<a id="trace-19345"></a>
<a id="trace-19347"></a>
<a id="trace-19355"></a>
<a id="trace-19357"></a>
<a id="trace-19466"></a>
<a id="trace-19468"></a>
<a id="trace-19549"></a>
<a id="trace-19551"></a>
<a id="trace-19567"></a>
<a id="trace-19569"></a>
<a id="trace-19607"></a>
<a id="trace-19609"></a>
<a id="trace-19633"></a>
<a id="trace-19635"></a>
<a id="trace-19651"></a>
<a id="trace-19653"></a>
<a id="trace-19669"></a>
<a id="trace-19671"></a>
<a id="trace-19755"></a>
<a id="trace-19757"></a>
<a id="trace-19768"></a>
<a id="trace-19770"></a>
<a id="trace-19789"></a>
<a id="trace-19791"></a>
<a id="trace-19819"></a>
<a id="trace-19821"></a>
<a id="trace-19833"></a>
<a id="trace-19835"></a>
<a id="trace-19946"></a>
<a id="trace-19984"></a>
<a id="trace-20061"></a>
<a id="trace-20072"></a>
<a id="trace-20074"></a>
<a id="trace-20093"></a>
<a id="trace-20095"></a>
<a id="trace-20106"></a>
<a id="trace-20108"></a>
<a id="trace-20122"></a>
<a id="trace-20124"></a>
<a id="trace-20148"></a>
<a id="trace-20150"></a>
<a id="trace-20161"></a>
<a id="trace-20163"></a>
<a id="trace-20175"></a>
<a id="trace-20177"></a>
<a id="trace-20186"></a>
<a id="trace-20188"></a>
<a id="trace-20279"></a>
<a id="trace-20281"></a>
<a id="trace-20356"></a>
<a id="trace-20358"></a>
<a id="trace-20370"></a>
<a id="trace-20372"></a>
<a id="trace-20388"></a>
<a id="trace-20390"></a>
<a id="trace-20398"></a>
<a id="trace-20400"></a>
<a id="trace-20432"></a>
<a id="trace-20434"></a>
<a id="trace-20446"></a>
<a id="trace-20448"></a>
<a id="trace-20462"></a>
<a id="trace-20464"></a>
<a id="trace-20538"></a>
<a id="trace-20540"></a>
<a id="trace-20572"></a>
<a id="trace-20574"></a>
<a id="trace-20586"></a>
<a id="trace-20588"></a>
<a id="trace-20603"></a>
<a id="trace-20605"></a>
<a id="trace-20638"></a>
<a id="trace-20640"></a>
<a id="trace-20651"></a>
<a id="trace-20653"></a>
<a id="trace-20676"></a>
<a id="trace-20678"></a>
<a id="trace-20762"></a>
<a id="trace-20764"></a>
<a id="trace-20869"></a>
<a id="trace-20871"></a>
<a id="trace-20885"></a>
<a id="trace-20887"></a>
- 101.75s–136.80s (×101), actor 5, squad 0 (trace 18927): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 18628. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18958}.
<a id="trace-19480"></a>
- 111.00s–111.00s (×1), actor 8, squad 1 (trace 19480): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 110.00s, trace 19376. Next observer evidence: None.
<a id="trace-19488"></a>
- 111.05s–111.05s (×1), actor 8, squad 1 (trace 19488): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 19376. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.14998951668191, 'next_transition': 19849}.
<a id="trace-19849"></a>
- 118.20s–118.20s (×1), actor 8, squad 1 (trace 19849): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 115.00s, trace 19695. Next observer evidence: {'until': 126, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.584058994830997, 'next_transition': 20298}.
<a id="trace-20298"></a>
- 126.15s–126.15s (×1), actor 8, squad 1 (trace 20298): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 125.00s, trace 20203. Next observer evidence: {'until': 136, 'shots': 4, 'casualties': 1, 'mean_displacement': 12.575450779101079, 'next_transition': 20773}.
<a id="trace-20773"></a>
- 136.10s–136.10s (×1), actor 9, squad 1 (trace 20773): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 135.00s, trace 20692. Next observer evidence: {'until': 137, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8899712947291027, 'next_transition': 1749}.
<a id="trace-1748"></a>
- 137.10s–137.10s (×1), actor 5, squad 0 (events line 1748): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1749"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (events line 1749): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20894"></a>
- 137.10s–137.10s (×1), actor 5, squad 0 (trace 20894): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.572746 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 137.10s, trace 20894. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20918}.
<a id="trace-20895"></a>
- 137.10s–137.10s (×1), actor 5, squad 0 (trace 20895): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.572746 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 137.10s, trace 20895. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20918}.
<a id="trace-20896"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (trace 20896): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.572746 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 137.10s, trace 20896. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.373730895153372, 'next_transition': 21106}.
<a id="trace-20897"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (trace 20897): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.572746 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 137.10s, trace 20897. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.373730895153372, 'next_transition': 21106}.
<a id="trace-20918"></a>
<a id="trace-20920"></a>
<a id="trace-20939"></a>
<a id="trace-20941"></a>
<a id="trace-20952"></a>
<a id="trace-20954"></a>
<a id="trace-20969"></a>
<a id="trace-20980"></a>
<a id="trace-21055"></a>
<a id="trace-21066"></a>
<a id="trace-21080"></a>
<a id="trace-21093"></a>
<a id="trace-21095"></a>
<a id="trace-21166"></a>
<a id="trace-21168"></a>
- 137.80s–142.30s (×15), actor 5, squad 0 (trace 20918): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 137.10s, trace 20897. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20939}.
<a id="trace-21106"></a>
- 142.25s–142.25s (×1), actor 9, squad 1 (trace 21106): traveling overwatch. Knowledge: actor memory at 140.00s, trace 20996. Next observer evidence: {'until': 145.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.979396368136335, 'next_transition': 21545}.
<a id="trace-21107"></a>
- 142.25s–142.25s (×1), actor 9, squad 1 (trace 21107): current contact unknown for 10 s. Knowledge: actor memory at 140.00s, trace 20996. Next observer evidence: {'until': 145.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.979396368136335, 'next_transition': 21545}.
<a id="trace-21191"></a>
- 143.05s–143.05s (×1), actor 1, squad 0 (trace 21191): received platoon directive. Knowledge: actor memory at 140.00s, trace 20989. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21216}.
<a id="trace-21216"></a>
<a id="trace-21218"></a>
<a id="trace-21236"></a>
<a id="trace-21238"></a>
- 143.30s–143.80s (×4), actor 5, squad 0 (trace 21216): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 20993. Next observer evidence: {'until': 143.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21236}.
<a id="trace-21246"></a>
- 144.05s–144.05s (×1), actor 1, squad 0 (trace 21246): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 140.00s, trace 20989. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.022498981389869895, 'next_transition': 21441}.
<a id="trace-21441"></a>
<a id="trace-21443"></a>
<a id="trace-21528"></a>
<a id="trace-21530"></a>
<a id="trace-21843"></a>
<a id="trace-21845"></a>
<a id="trace-22001"></a>
<a id="trace-22003"></a>
<a id="trace-22092"></a>
<a id="trace-22094"></a>
<a id="trace-22138"></a>
<a id="trace-22140"></a>
<a id="trace-22155"></a>
<a id="trace-22157"></a>
<a id="trace-22182"></a>
<a id="trace-22184"></a>
<a id="trace-22266"></a>
<a id="trace-22268"></a>
<a id="trace-22281"></a>
<a id="trace-22283"></a>
<a id="trace-22298"></a>
<a id="trace-22300"></a>
<a id="trace-22355"></a>
<a id="trace-22357"></a>
<a id="trace-22377"></a>
<a id="trace-22379"></a>
<a id="trace-22390"></a>
<a id="trace-22392"></a>
<a id="trace-22412"></a>
<a id="trace-22424"></a>
<a id="trace-22498"></a>
- 144.80s–155.30s (×31), actor 5, squad 0 (trace 21441): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 20993. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22501475616045516, 'next_transition': 21528}.
<a id="trace-21545"></a>
- 145.65s–145.65s (×1), actor 9, squad 1 (trace 21545): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 21458. Next observer evidence: None.
<a id="trace-21546"></a>
- 145.65s–145.65s (×1), actor 9, squad 1 (trace 21546): bounding overwatch. Knowledge: actor memory at 145.00s, trace 21458. Next observer evidence: None.
<a id="trace-21547"></a>
<a id="trace-21614"></a>
<a id="trace-21692"></a>
<a id="trace-21764"></a>
<a id="trace-21850"></a>
<a id="trace-21915"></a>
<a id="trace-22009"></a>
- 145.65s–146.85s (×7), actor 9, squad 1 (trace 21547): new contact inside 100 m. Knowledge: actor memory at 145.00s, trace 21458. Next observer evidence: None.
<a id="trace-22508"></a>
- 155.70s–155.70s (×1), actor 1, squad 0 (trace 22508): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 155.00s, trace 22435. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22558}.
<a id="trace-22558"></a>
<a id="trace-22575"></a>
<a id="trace-22597"></a>
<a id="trace-22620"></a>
<a id="trace-22661"></a>
<a id="trace-22670"></a>
<a id="trace-22680"></a>
<a id="trace-22690"></a>
<a id="trace-22762"></a>
<a id="trace-22777"></a>
<a id="trace-22787"></a>
<a id="trace-22817"></a>
<a id="trace-22831"></a>
<a id="trace-22847"></a>
- 155.80s–163.30s (×14), actor 5, squad 0 (trace 22558): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 22439. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22575}.
<a id="trace-22861"></a>
- 164.10s–164.10s (×1), actor 1, squad 0 (trace 22861): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 160.00s, trace 22696. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22971}.
<a id="trace-22971"></a>
<a id="trace-23058"></a>
<a id="trace-23076"></a>
<a id="trace-23120"></a>
<a id="trace-23133"></a>
<a id="trace-23150"></a>
<a id="trace-23166"></a>
<a id="trace-23190"></a>
<a id="trace-23270"></a>
<a id="trace-23285"></a>
<a id="trace-23306"></a>
<a id="trace-23324"></a>
<a id="trace-23341"></a>
<a id="trace-23355"></a>
<a id="trace-23382"></a>
<a id="trace-23390"></a>
<a id="trace-23460"></a>
<a id="trace-23472"></a>
- 164.30s–175.80s (×18), actor 5, squad 0 (trace 22971): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 22700. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4433276148866706, 'next_transition': 23058}.
<a id="trace-23480"></a>
- 176.10s–176.10s (×1), actor 1, squad 0 (trace 23480): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 175.00s, trace 23397. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06479992759507161, 'next_transition': 23685}.
<a id="trace-23685"></a>
<a id="trace-23705"></a>
- 176.30s–176.80s (×2), actor 5, squad 0 (trace 23685): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 23401. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2844124963094493, 'next_transition': 23705}.
<a id="trace-23719"></a>
- 177.10s–177.10s (×1), actor 1, squad 0 (trace 23719): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 175.00s, trace 23397. Next observer evidence: {'until': 177.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5668304849620143, 'next_transition': 23848}.
<a id="trace-23848"></a>
<a id="trace-23865"></a>
<a id="trace-23893"></a>
<a id="trace-23902"></a>
<a id="trace-23974"></a>
<a id="trace-23982"></a>
<a id="trace-23992"></a>
<a id="trace-24003"></a>
<a id="trace-24015"></a>
<a id="trace-24031"></a>
<a id="trace-24047"></a>
<a id="trace-24057"></a>
<a id="trace-24073"></a>
<a id="trace-24087"></a>
<a id="trace-24157"></a>
<a id="trace-24169"></a>
<a id="trace-24184"></a>
<a id="trace-24195"></a>
<a id="trace-24209"></a>
<a id="trace-24237"></a>
<a id="trace-24252"></a>
<a id="trace-24266"></a>
<a id="trace-24281"></a>
- 177.80s–189.80s (×23), actor 5, squad 0 (trace 23848): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 23401. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12960100079136133, 'next_transition': 23865}.
<a id="trace-24303"></a>
- 190.10s–190.10s (×1), actor 1, squad 0 (trace 24303): movement clock expired: request actual-position arrival certification; retain stage and generation. Knowledge: actor memory at 190.00s, trace 24288. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.064800060531592, 'next_transition': 24357}.
<a id="trace-24357"></a>
<a id="trace-24368"></a>
<a id="trace-24380"></a>
- 190.30s–191.30s (×3), actor 5, squad 0 (trace 24357): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 24292. Next observer evidence: {'until': 190.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19440018159477498, 'next_transition': 24368}.
<a id="trace-24387"></a>
- 191.35s–191.35s (×1), actor 1, squad 0 (trace 24387): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 190.00s, trace 24288. Next observer evidence: {'until': 191.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.064800060531592, 'next_transition': 24669}.
<a id="trace-24651"></a>
- 191.35s–191.35s (×1), actor 1, squad 0 (trace 24651): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 190.00s, trace 24288. Next observer evidence: {'until': 191.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.064800060531592, 'next_transition': 24669}.
<a id="trace-24669"></a>
<a id="trace-24695"></a>
<a id="trace-24720"></a>
<a id="trace-24737"></a>
<a id="trace-24748"></a>
<a id="trace-24768"></a>
<a id="trace-24778"></a>
<a id="trace-24848"></a>
<a id="trace-24859"></a>
- 191.80s–195.80s (×9), actor 5, squad 0 (trace 24669): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 24292. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24695}.
<a id="trace-24870"></a>
- 196.20s–196.20s (×1), actor 1, squad 0 (trace 24870): ReactToContact: cover and return fire. Knowledge: actor memory at 195.00s, trace 24785. Next observer evidence: None.
<a id="trace-24871"></a>
- 196.20s–196.20s (×1), actor 1, squad 0 (trace 24871): new contact inside 100 m. Knowledge: actor memory at 195.00s, trace 24785. Next observer evidence: None.
<a id="trace-25215"></a>
<a id="trace-25236"></a>
<a id="trace-25310"></a>
<a id="trace-25331"></a>
<a id="trace-25349"></a>
- 196.30s–199.30s (×5), actor 5, squad 0 (trace 25215): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 24789. Next observer evidence: {'until': 196.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.63000415534551, 'next_transition': 25236}.
<a id="trace-25360"></a>
- 199.55s–199.55s (×1), actor 1, squad 0 (trace 25360): new contact inside 100 m. Knowledge: actor memory at 195.00s, trace 24785. Next observer evidence: {'until': 199.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36000064245400704, 'next_transition': 25795}.
<a id="trace-25795"></a>
<a id="trace-25906"></a>
<a id="trace-25923"></a>
<a id="trace-25943"></a>
<a id="trace-25972"></a>
<a id="trace-25988"></a>
<a id="trace-26010"></a>
- 199.80s–203.30s (×7), actor 5, squad 0 (trace 25795): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 24789. Next observer evidence: {'until': 200.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9899971995025518, 'next_transition': 25906}.
<a id="trace-26017"></a>
- 203.30s–203.30s (×1), actor 1, squad 0 (trace 26017): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 200.00s, trace 25802. Next observer evidence: {'until': 203.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05316865996785861, 'next_transition': 27029}.
<a id="trace-26019"></a>
- 203.30s–203.30s (×1), actor 1, squad 0 (trace 26019): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 200.00s, trace 25802. Next observer evidence: {'until': 203.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05316865996785861, 'next_transition': 27029}.
<a id="trace-26863"></a>
- 203.30s–203.30s (×1), actor 1, squad 0 (trace 26863): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 200.00s, trace 25802. Next observer evidence: {'until': 203.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05316865996785861, 'next_transition': 27029}.
<a id="trace-26864"></a>
- 203.30s–203.30s (×1), actor 1, squad 0 (trace 26864): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 200.00s, trace 25802. Next observer evidence: {'until': 203.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05316865996785861, 'next_transition': 27029}.
<a id="trace-27017"></a>
- 203.30s–203.30s (×1), actor 1, squad 0 (trace 27017): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 200.00s, trace 25802. Next observer evidence: {'until': 203.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05316865996785861, 'next_transition': 27029}.
<a id="trace-27018"></a>
- 203.30s–203.30s (×1), actor 1, squad 0 (trace 27018): Assaulting. Knowledge: actor memory at 200.00s, trace 25802. Next observer evidence: {'until': 203.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05316865996785861, 'next_transition': 27029}.
<a id="trace-27029"></a>
- 203.65s–203.65s (×1), actor 1, squad 0 (trace 27029): Reorganise: completed/failed drill. Knowledge: actor memory at 200.00s, trace 25802. Next observer evidence: {'until': 203.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.09983154985886077, 'next_transition': 27502}.
<a id="trace-27035"></a>
- 203.65s–203.65s (×1), actor 1, squad 0 (trace 27035): MoveTactically. Knowledge: actor memory at 200.00s, trace 25802. Next observer evidence: {'until': 203.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.09983154985886077, 'next_transition': 27502}.
<a id="trace-27036"></a>
- 203.65s–203.65s (×1), actor 1, squad 0 (trace 27036): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 200.00s, trace 25802. Next observer evidence: {'until': 203.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.09983154985886077, 'next_transition': 27502}.
<a id="trace-27502"></a>
<a id="trace-27546"></a>
<a id="trace-27630"></a>
<a id="trace-27639"></a>
- 203.80s–205.80s (×4), actor 5, squad 0 (trace 27502): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 25806. Next observer evidence: {'until': 204.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5715650177198005, 'next_transition': 27546}.
<a id="trace-2172"></a>
- 206.15s–206.15s (×1), actor 5, squad 0 (events line 2172): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27654"></a>
- 206.15s–206.15s (×1), actor 5, squad 0 (trace 27654): renew committed intent (75 s lifetime). Knowledge: actor memory at 206.15s, trace 27654. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000037387378567, 'next_transition': 27665}.
<a id="trace-27665"></a>
- 206.30s–206.30s (×1), actor 5, squad 0 (trace 27665): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 206.15s, trace 27654. Next observer evidence: None.
<a id="trace-27680"></a>
- 206.35s–206.35s (×1), actor 1, squad 0 (trace 27680): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 205.00s, trace 27567. Next observer evidence: {'until': 206.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5940475507578894, 'next_transition': 27890}.
<a id="trace-27875"></a>
- 206.35s–206.35s (×1), actor 1, squad 0 (trace 27875): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 205.00s, trace 27567. Next observer evidence: {'until': 206.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5940475507578894, 'next_transition': 27890}.
<a id="trace-27890"></a>
<a id="trace-27911"></a>
- 206.80s–207.30s (×2), actor 5, squad 0 (trace 27890): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 206.15s, trace 27654. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10397512076881127, 'next_transition': 27911}.
<a id="trace-27919"></a>
- 207.35s–207.35s (×1), actor 1, squad 0 (trace 27919): recovering: retry accepted element corridor in column. Knowledge: actor memory at 205.00s, trace 27567. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1463864879351916, 'next_transition': 28129}.
<a id="trace-28114"></a>
- 207.35s–207.35s (×1), actor 1, squad 0 (trace 28114): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 205.00s, trace 27567. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1463864879351916, 'next_transition': 28129}.
<a id="trace-28129"></a>
- 207.80s–207.80s (×1), actor 5, squad 0 (trace 28129): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 206.15s, trace 27654. Next observer evidence: None.
<a id="trace-28137"></a>
- 207.85s–207.85s (×1), actor 1, squad 0 (trace 28137): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 205.00s, trace 27567. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625153789209039, 'next_transition': 28153}.
<a id="trace-28153"></a>
<a id="trace-28185"></a>
<a id="trace-28272"></a>
<a id="trace-28281"></a>
<a id="trace-28294"></a>
<a id="trace-28306"></a>
<a id="trace-28321"></a>
<a id="trace-28333"></a>
<a id="trace-28361"></a>
<a id="trace-28373"></a>
<a id="trace-28381"></a>
<a id="trace-28452"></a>
- 208.30s–215.30s (×12), actor 5, squad 0 (trace 28153): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 206.15s, trace 27654. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8191049748528832, 'next_transition': 28185}.
<a id="trace-28463"></a>
- 215.95s–215.95s (×1), actor 1, squad 0 (trace 28463): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 215.00s, trace 28389. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20116753781915778, 'next_transition': 28670}.
<a id="trace-28658"></a>
- 215.95s–215.95s (×1), actor 1, squad 0 (trace 28658): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 215.00s, trace 28389. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20116753781915778, 'next_transition': 28670}.
<a id="trace-28670"></a>
- 216.25s–216.25s (×1), actor 1, squad 0 (trace 28670): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 215.00s, trace 28389. Next observer evidence: {'until': 216.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09875000000000005, 'next_transition': 28690}.
<a id="trace-28690"></a>
<a id="trace-28704"></a>
<a id="trace-28712"></a>
<a id="trace-28730"></a>
<a id="trace-28750"></a>
<a id="trace-28760"></a>
<a id="trace-28830"></a>
<a id="trace-28837"></a>
<a id="trace-28858"></a>
<a id="trace-28876"></a>
<a id="trace-28889"></a>
<a id="trace-28896"></a>
<a id="trace-28907"></a>
<a id="trace-28916"></a>
<a id="trace-28995"></a>
<a id="trace-29004"></a>
<a id="trace-29016"></a>
<a id="trace-29037"></a>
<a id="trace-29045"></a>
<a id="trace-29059"></a>
<a id="trace-29066"></a>
<a id="trace-29084"></a>
<a id="trace-29163"></a>
<a id="trace-29176"></a>
<a id="trace-29193"></a>
<a id="trace-29207"></a>
<a id="trace-29215"></a>
- 216.80s–232.80s (×27), actor 5, squad 0 (trace 28690): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 28392. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28704}.
<a id="trace-2257"></a>
- 233.80s–233.80s (×1), actor 5, squad 0 (events line 2257): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29251}.
<a id="trace-29237"></a>
- 233.80s–233.80s (×1), actor 5, squad 0 (trace 29237): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 29094. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29251}.
<a id="trace-29242"></a>
- 233.80s–233.80s (×1), actor 5, squad 0 (trace 29242): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.203461 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 233.80s, trace 29242. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29251}.
<a id="trace-29243"></a>
- 233.80s–233.80s (×1), actor 5, squad 0 (trace 29243): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.203461 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 233.80s, trace 29243. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29251}.
<a id="trace-29251"></a>
<a id="trace-29257"></a>
<a id="trace-29327"></a>
<a id="trace-29343"></a>
<a id="trace-29355"></a>
<a id="trace-29367"></a>
<a id="trace-29378"></a>
<a id="trace-29400"></a>
<a id="trace-29407"></a>
<a id="trace-29418"></a>
- 234.30s–239.30s (×10), actor 5, squad 0 (trace 29251): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 233.80s, trace 29243. Next observer evidence: {'until': 234.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29257}.
<a id="trace-29425"></a>
- 239.55s–239.55s (×1), actor 1, squad 0 (trace 29425): received platoon directive. Knowledge: actor memory at 235.00s, trace 29264. Next observer evidence: {'until': 239.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29627}.
<a id="trace-29620"></a>
- 239.55s–239.55s (×1), actor 1, squad 0 (trace 29620): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 235.00s, trace 29264. Next observer evidence: {'until': 239.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29627}.
<a id="trace-29627"></a>
<a id="trace-29699"></a>
<a id="trace-29713"></a>
<a id="trace-29736"></a>
<a id="trace-29750"></a>
<a id="trace-29786"></a>
<a id="trace-29802"></a>
<a id="trace-29819"></a>
<a id="trace-29893"></a>
<a id="trace-29909"></a>
<a id="trace-29925"></a>
<a id="trace-29958"></a>
<a id="trace-29984"></a>
<a id="trace-29996"></a>
<a id="trace-30015"></a>
<a id="trace-30021"></a>
<a id="trace-30091"></a>
<a id="trace-30103"></a>
- 239.80s–250.80s (×18), actor 5, squad 0 (trace 29627): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 29267. Next observer evidence: {'until': 240.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29699}.
<a id="trace-30110"></a>
- 250.95s–250.95s (×1), actor 1, squad 0 (trace 30110): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 250.00s, trace 30028. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17474778258965112, 'next_transition': 30255}.
<a id="trace-30255"></a>
- 251.20s–251.20s (×1), actor 1, squad 0 (trace 30255): ReactToContact: cover and return fire. Knowledge: actor memory at 250.00s, trace 30028. Next observer evidence: None.
<a id="trace-30256"></a>
- 251.20s–251.20s (×1), actor 1, squad 0 (trace 30256): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 250.00s, trace 30028. Next observer evidence: None.
<a id="trace-30591"></a>
<a id="trace-30606"></a>
<a id="trace-30623"></a>
<a id="trace-30652"></a>
<a id="trace-30674"></a>
<a id="trace-30684"></a>
<a id="trace-30707"></a>
<a id="trace-30728"></a>
- 251.30s–254.80s (×8), actor 5, squad 0 (trace 30591): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 30031. Next observer evidence: {'until': 251.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5583763485589127, 'next_transition': 30606}.
<a id="trace-30736"></a>
- 254.90s–254.90s (×1), actor 1, squad 0 (trace 30736): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 250.00s, trace 30028. Next observer evidence: {'until': 255.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9069540070709617, 'next_transition': 30803}.
<a id="trace-30803"></a>
<a id="trace-30818"></a>
<a id="trace-30856"></a>
<a id="trace-30876"></a>
<a id="trace-30890"></a>
<a id="trace-30915"></a>
<a id="trace-30933"></a>
<a id="trace-30959"></a>
- 255.30s–259.80s (×8), actor 5, squad 0 (trace 30803): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 30742. Next observer evidence: {'until': 255.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.087514410565036, 'next_transition': 30818}.
<a id="trace-30984"></a>
- 260.20s–260.20s (×1), actor 1, squad 0 (trace 30984): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 260.00s, trace 30965. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6530709256456464, 'next_transition': 31493}.
<a id="trace-31252"></a>
- 260.20s–260.20s (×1), actor 1, squad 0 (trace 31252): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 260.00s, trace 30965. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6530709256456464, 'next_transition': 31493}.
<a id="trace-31253"></a>
- 260.20s–260.20s (×1), actor 1, squad 0 (trace 31253): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 260.00s, trace 30965. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6530709256456464, 'next_transition': 31493}.
<a id="trace-31421"></a>
- 260.20s–260.20s (×1), actor 1, squad 0 (trace 31421): Assaulting. Knowledge: actor memory at 260.00s, trace 30965. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6530709256456464, 'next_transition': 31493}.
<a id="trace-31493"></a>
<a id="trace-31509"></a>
<a id="trace-31557"></a>
<a id="trace-31578"></a>
<a id="trace-31593"></a>
<a id="trace-31616"></a>
<a id="trace-31630"></a>
- 260.80s–264.80s (×7), actor 5, squad 0 (trace 31493): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 30968. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44432305846307185, 'next_transition': 31509}.
<a id="trace-31734"></a>
- 266.20s–266.20s (×1), actor 1, squad 0 (trace 31734): NeedSupport. Knowledge: actor memory at 265.00s, trace 31643. Next observer evidence: None.
<a id="trace-31748"></a>
<a id="trace-31766"></a>
<a id="trace-31799"></a>
- 266.30s–267.80s (×3), actor 5, squad 0 (trace 31748): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 31646. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.061160000000000284, 'next_transition': 31766}.
<a id="trace-31831"></a>
- 268.50s–268.50s (×1), actor 1, squad 0 (trace 31831): InsufficientStrength: frozen element failed; Reorganise before retirement assessment. Knowledge: actor memory at 265.00s, trace 31643. Next observer evidence: {'until': 268.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299952449475603, 'next_transition': 31837}.
<a id="trace-31837"></a>
- 268.80s–268.80s (×1), actor 5, squad 0 (trace 31837): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 31646. Next observer evidence: {'until': 269.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.629992144252614, 'next_transition': 31853}.
<a id="trace-31853"></a>
- 269.20s–269.20s (×1), actor 1, squad 0 (trace 31853): Reorganise: completed/failed drill. Knowledge: actor memory at 265.00s, trace 31643. Next observer evidence: None.
<a id="trace-31856"></a>
- 269.20s–269.20s (×1), actor 1, squad 0 (trace 31856): ReactToContact: cover and return fire. Knowledge: actor memory at 265.00s, trace 31643. Next observer evidence: None.
<a id="trace-31857"></a>
- 269.20s–269.20s (×1), actor 1, squad 0 (trace 31857): Reorganise complete: known contact. Knowledge: actor memory at 265.00s, trace 31643. Next observer evidence: None.
<a id="trace-32059"></a>
<a id="trace-32071"></a>
<a id="trace-32165"></a>
<a id="trace-32201"></a>
<a id="trace-32229"></a>
<a id="trace-32246"></a>
- 269.30s–272.80s (×6), actor 5, squad 0 (trace 32059): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 31646. Next observer evidence: {'until': 269.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8195259046863477, 'next_transition': 32071}.
<a id="trace-32258"></a>
- 272.90s–272.90s (×1), actor 1, squad 0 (trace 32258): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 270.00s, trace 32083. Next observer evidence: {'until': 273.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8115620258247964, 'next_transition': 32274}.
<a id="trace-32260"></a>
- 272.90s–272.90s (×1), actor 1, squad 0 (trace 32260): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 270.00s, trace 32083. Next observer evidence: {'until': 273.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8115620258247964, 'next_transition': 32274}.
<a id="trace-32274"></a>
<a id="trace-32288"></a>
<a id="trace-32305"></a>
<a id="trace-32313"></a>
<a id="trace-32386"></a>
<a id="trace-32414"></a>
<a id="trace-32427"></a>
<a id="trace-32446"></a>
<a id="trace-32458"></a>
<a id="trace-32480"></a>
<a id="trace-32488"></a>
<a id="trace-32508"></a>
<a id="trace-32518"></a>
<a id="trace-32593"></a>
<a id="trace-32625"></a>
<a id="trace-32652"></a>
<a id="trace-32671"></a>
<a id="trace-32687"></a>
<a id="trace-32697"></a>
<a id="trace-32717"></a>
<a id="trace-32730"></a>
<a id="trace-32805"></a>
<a id="trace-32822"></a>
<a id="trace-32836"></a>
<a id="trace-32846"></a>
<a id="trace-32859"></a>
<a id="trace-32870"></a>
<a id="trace-32888"></a>
<a id="trace-32898"></a>
- 273.30s–288.80s (×29), actor 5, squad 0 (trace 32274): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 32085. Next observer evidence: {'until': 273.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9675610756008881, 'next_transition': 32288}.
<a id="trace-2899"></a>
- 289.00s–289.00s (×1), actor 5, squad 0 (events line 2899): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000103822494667, 'next_transition': 32922}.
<a id="trace-32909"></a>
- 289.00s–289.00s (×1), actor 5, squad 0 (trace 32909): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.659543 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 289.00s, trace 32909. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000103822494667, 'next_transition': 32922}.
<a id="trace-32910"></a>
- 289.00s–289.00s (×1), actor 5, squad 0 (trace 32910): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.659543 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 289.00s, trace 32910. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000103822494667, 'next_transition': 32922}.
<a id="trace-32922"></a>
<a id="trace-32930"></a>
<a id="trace-33006"></a>
<a id="trace-33033"></a>
<a id="trace-33044"></a>
<a id="trace-33139"></a>
<a id="trace-33216"></a>
<a id="trace-33231"></a>
<a id="trace-33256"></a>
<a id="trace-33286"></a>
<a id="trace-33307"></a>
<a id="trace-33383"></a>
<a id="trace-33434"></a>
<a id="trace-33461"></a>
<a id="trace-33559"></a>
<a id="trace-33581"></a>
<a id="trace-33608"></a>
<a id="trace-33632"></a>
- 289.30s–308.30s (×18), actor 5, squad 0 (trace 32922): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 289.00s, trace 32910. Next observer evidence: {'until': 289.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6726665058553586, 'next_transition': 32930}.
<a id="trace-33653"></a>
- 308.80s–308.80s (×1), actor 4, squad 0 (trace 33653): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 305.00s, trace 33505. Next observer evidence: {'until': 309.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33658}.
<a id="trace-33654"></a>
- 308.80s–308.80s (×1), actor 4, squad 0 (trace 33654): ; retain held slots. Knowledge: actor memory at 305.00s, trace 33505. Next observer evidence: {'until': 309.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33658}.
<a id="trace-33658"></a>
<a id="trace-33732"></a>
<a id="trace-33774"></a>
<a id="trace-33891"></a>
- 309.30s–315.30s (×4), actor 5, squad 0 (trace 33658): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 33506. Next observer evidence: {'until': 310.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.045099999999999696, 'next_transition': 33732}.

## Net delivery

339 matched order/radio deliveries; 307 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.496s; maximum 5.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2228: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2236: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2237: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2239: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 5687: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 5688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 5689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 5690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 5691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 5692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 5693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 5694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 5695: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 5696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 5697: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 5698: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 5699: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 5700: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 5701: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 5702: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 5703: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 5704: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 5705: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 5706: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 6645: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 6646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 6647: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 6648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 6649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 6650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 6651: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 6652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 6653: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 6654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 6655: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 6656: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 6657: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 6658: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 6659: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 6660: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 6661: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 6662: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 6663: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 6664: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 6790: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 6791: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 6792: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 6793: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 7437: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7438: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7439: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 7440: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7442: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7443: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 7445: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 7446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7447: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7448: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7449: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7450: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7451: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7452: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7453: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7454: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7455: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7456: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 11292: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 11293: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 11294: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 11295: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 11296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 11297: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 11298: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 11299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 11300: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 11301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 11302: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 11303: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 11304: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 11305: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 11306: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 11307: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 11308: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 11309: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 11310: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 12138: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 12139: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 12140: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 12141: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 12142: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 12143: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 12144: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 12145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 12146: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 12147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 12148: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 12149: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 12150: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 12151: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 12152: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 12153: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 12154: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 12155: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 12156: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 12718: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 12719: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 12720: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 12721: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 12722: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 12723: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 12724: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 12725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 12726: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 12727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 12728: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 12729: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 12730: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 12731: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 12732: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 12733: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 12734: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 12735: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 12736: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 14032: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 14033: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 14034: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 14035: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 14036: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 14037: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 14038: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 14039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 14040: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 14041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 14042: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 14043: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 14044: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 14045: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 14046: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 14047: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 14048: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 14049: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 14050: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 15167: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 15168: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 15169: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 15170: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 15171: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 15172: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 15173: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 15174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 15175: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 15176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 15177: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 15178: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 15179: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 15180: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 15181: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 15182: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 15183: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 15184: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 15185: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 15687: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 15688: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 15689: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 15690: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 15691: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 15692: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 15693: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 15694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 15695: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 15696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 15697: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 15698: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 15699: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 15700: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 15701: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 15702: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 15703: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 15704: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 15705: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 16018: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 16019: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 16020: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 16021: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 16022: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 16023: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 16024: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 16025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 16026: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 16027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 16028: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 16029: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 16030: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 16031: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 16032: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 16033: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 16034: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 16035: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 16686: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 16687: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 16688: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 16689: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 16690: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 16691: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 16692: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 16693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 16694: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 16695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 16696: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 16697: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 16698: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 16699: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 16700: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 16701: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 16702: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 16703: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 17011: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 17012: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 17013: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 17014: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 17015: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 17016: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 17017: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 17018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 17019: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 17020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 17021: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 17022: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 17023: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 17024: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 17025: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 17026: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 17027: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 17028: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 17278: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 17279: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 17280: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 17281: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 17282: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 17283: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 17284: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 17285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 17286: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 17287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 17288: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 17289: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 17290: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 17291: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 17292: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 17293: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 17294: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 17295: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 17533: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 17534: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 17535: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 17536: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 17537: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 17538: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 17539: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 17540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 17541: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 17542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 17543: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 17544: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 17545: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 17546: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 17547: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 17548: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 17549: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 17550: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 18023: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 18024: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 18025: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 18026: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 18027: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 18028: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 18029: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 18030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 18031: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 18032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 18033: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 18034: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 18035: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 18036: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 18037: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 18038: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 18039: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 18040: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 18284: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 18285: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 18286: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 18287: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 18288: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 18289: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 18290: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 18291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 18292: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 18293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 18294: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 18295: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 18296: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 18297: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 18298: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 18299: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 18300: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 18301: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 18375: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 18376: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 18623: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 18624: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 18625: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 18626: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 18627: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 18628: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 18629: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 18630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 18631: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 18632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 18633: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 18634: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 18635: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 18636: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 18637: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 18638: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 18639: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 18640: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 19138: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 19139: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 19140: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 19141: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 19142: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 19143: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 19144: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 19145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 19146: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 19147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 19148: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 19149: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 19150: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 19151: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 19152: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 19153: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 19154: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 19155: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 19368: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 19369: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 19370: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 19371: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 19372: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 19373: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 19374: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 19375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 19376: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 19377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 19378: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 19379: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 19380: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 19381: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 19382: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 19383: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 19384: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 19385: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 19688: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 19689: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 19690: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 19691: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 19692: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 19693: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 19694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 19695: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 19696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 19697: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 19698: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 19699: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 19700: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 19701: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 19702: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 19703: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 19704: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 19994: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 19995: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 19996: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 19997: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 19998: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 19999: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 20000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 20001: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 20002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 20003: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 20004: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 20005: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 20006: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 20007: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 20008: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 20009: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 20010: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 20196: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 20197: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 20198: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 20199: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 20200: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 20201: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 20202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 20203: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 20204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 20205: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 20206: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 20207: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 20208: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 20209: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 20210: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 20211: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 20212: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 20469: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 20470: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 20471: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 20472: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 20473: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 20474: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 20475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 20476: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 20477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 20478: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 20479: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 20480: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 20481: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 20482: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 20483: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 20484: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 20685: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 20686: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 20687: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 20688: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 20689: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 20690: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 20691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 20692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 20693: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 20694: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 20695: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 20696: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 20697: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 20698: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 20699: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.10s leader 5, trace 20894: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.10s leader 5, trace 20895: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.10s leader 5, trace 20896: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.10s leader 5, trace 20897: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 20989: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 20990: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 20991: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 20992: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 20993: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 20994: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 20995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 20996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 20997: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 20998: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 20999: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 21000: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 21001: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 21002: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 21003: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 21451: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 21452: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 21453: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 21454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 21455: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 21456: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 21457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 21458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 21459: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 21460: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 21461: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 21462: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 21463: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 21464: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 21465: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 22192: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 22193: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 22194: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 22195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 22196: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 22197: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 22198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 22199: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 22200: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 22201: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 22202: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 22203: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 22204: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 22205: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 22435: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 22436: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 22437: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 22438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 22439: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 22440: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 22441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 22442: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 22443: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 22444: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 22445: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 22446: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 22447: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 22448: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 22696: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 22697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 22698: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 22699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 22700: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 22701: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 22702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 22703: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 22704: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 22705: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 22706: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 22707: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 22708: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 22709: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 22994: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 22995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 22996: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 22997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 22998: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 22999: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 23000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 23001: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 23002: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 23003: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 23004: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 23005: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 23006: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 23007: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 23203: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 23204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 23205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 23206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 23207: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 23208: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 23209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 23210: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 23211: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 23212: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 23213: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 23214: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 23215: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 23216: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 23397: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 23398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 23399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 23400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 23401: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 23402: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 23403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 23404: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 23405: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 23406: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 23407: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 23408: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 23409: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 23410: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 23907: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 23908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 23909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 23910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 23911: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 23912: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 23913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 23914: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 23915: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 23916: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 23917: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 23918: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 23919: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 23920: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 24093: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 24094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 24095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 24096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 24097: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 24098: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 24099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 24100: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 24101: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 24102: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 24103: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 24104: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 24105: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 24106: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 24288: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 24289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 24290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 24291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 24292: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 24293: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 24294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 24295: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 24296: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 24297: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 24298: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 24299: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 24300: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 24301: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 24785: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 24786: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 24787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 24788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 24789: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 24790: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 24791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 24792: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 24793: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 24794: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 24795: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 24796: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 24797: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 24798: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 25802: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 25803: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 25804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 25805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 25806: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 25807: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 25808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 25809: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 25810: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 25811: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 25812: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 25813: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 25814: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 25815: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 27567: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 27568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 27569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 27570: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 27571: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 27572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 27573: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 27574: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 27575: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 27576: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 27577: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 27578: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 27579: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 206.15s leader 5, trace 27654: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 28209: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 28210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 28211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 28212: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 28213: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 28214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 28215: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 28216: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 28217: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 28218: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 28219: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 28220: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 28221: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 28389: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 28390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 28391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 28392: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 28393: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 28394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 28395: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 28396: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 28397: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 28398: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 28399: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 28400: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 28401: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 28767: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 28768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 28769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 28770: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 28771: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 28772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 28773: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 28774: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 28775: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 28776: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 28777: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 28778: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 28779: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 28926: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 28927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 28928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 28929: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 28930: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 28931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 28932: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 28933: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 28934: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 28935: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 28936: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 28937: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 28938: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 29091: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 29092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 29093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 29094: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 29095: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 29096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 29097: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 29098: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 29099: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 29100: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 29101: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 29102: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 29103: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.80s leader 5, trace 29242: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.80s leader 5, trace 29243: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 29264: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 29265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 29266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 29267: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 29268: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 29269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 29270: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 29271: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 29272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 29273: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 29274: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 29275: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 29276: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 29634: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 29635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 29636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 29637: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 29638: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 29639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 29640: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 29641: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 29642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 29643: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 29644: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 29645: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 29646: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 29830: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 29831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 29832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 29833: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 29834: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 29835: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 29836: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 29837: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 29838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 29839: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 29840: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 29841: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 29842: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 30028: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 30029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 30030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 30031: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 30032: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 30033: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 30034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 30035: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 30036: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 30037: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 30038: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 30039: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 30739: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 30740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 30741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 30742: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 30743: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 30744: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 30745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 30746: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 30747: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 30748: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 30749: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 30750: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 30965: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 30966: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 30967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 30968: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 30969: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 30970: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 30971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 30972: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 30973: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 30974: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 30975: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 30976: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 31643: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 31644: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 31645: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 31646: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 31647: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 31648: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 31649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 31650: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 31651: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 31652: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 31653: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 31654: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 32083: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 32084: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 32085: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 32086: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 32087: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 32088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 32089: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 32090: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 32091: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 32092: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 32093: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 32320: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 32321: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 32322: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 32323: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 32324: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 32325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 32326: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 32327: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 32328: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 32329: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 32330: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 32526: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 32527: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 32528: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 32529: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 32530: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 32531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 32532: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 32533: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 32534: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 32535: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 32536: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 32744: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 32745: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 32746: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 32747: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 32748: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 32749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 32750: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 32751: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 32752: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 32753: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 32754: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.00s leader 5, trace 32909: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.00s leader 5, trace 32910: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 32940: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 32941: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 32942: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 32943: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 32944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 32945: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 32946: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 32947: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 32948: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 33147: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 33148: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 33149: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 33150: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 33151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 33152: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 33153: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 33154: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 33155: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 33325: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 33326: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 33327: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 33328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 33329: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 33330: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 33331: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 33332: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 33505: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 33506: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 33507: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 33508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 33509: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 33510: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 33511: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 33512: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 33675: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 33676: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 33677: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 33678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 33679: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 33680: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 33681: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 33682: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 33836: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 33837: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 33838: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 33839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 33840: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 33841: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 33842: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 33961: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 33962: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 33963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 33964: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 33965: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 33966: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 34060: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 34061: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 34062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 34063: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 34064: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 34065: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 34155: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 34156: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 34157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 34158: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 34159: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 34160: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 34251: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 34252: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 34253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 34254: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 34255: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 34256: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 34350: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 34351: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 34352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 34353: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 34354: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 34355: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 34451: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 34452: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 34453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 34454: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 34455: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 34456: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 34549: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 34550: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 34551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 34552: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 34553: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 34554: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 34646: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 34647: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 34648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 34649: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 34650: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 34651: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 34746: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 34747: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 34748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 34749: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 34750: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 34751: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Pike killed in action
- 1: Bram incapacitated
- 1: Vale killed in action
- 1: Voss incapacitated
- 1: Bren incapacitated
- 1: Cole killed in action
- 1: Soren incapacitated
- 1: Reed incapacitated
- 1: Ash incapacitated
- 1: Renn incapacitated
- 1: Rook incapacitated
- 1: Moss incapacitated
- 1: Quill killed in action
- 1: Tern incapacitated

## Outcome attribution

- 207.85s, evidence 28137: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625153789209039, 'next_transition': 28153}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 216.25s, evidence 28670: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 216.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09875000000000005, 'next_transition': 28690}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
