# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/19/109/good-ember/battle-109-1789674086993582861`

## Battle summary

**Ember** · 360 s · 297 shots.

### Turning points

- 18.1s, squad 1: contact (events line 247). First recorded contact.
- 26.1s, squad 1: withdrawal ([trace 9063](#trace-9063)). 81.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 45.9s, squad 1: help call ([trace 17584](#trace-17584)). No completion observed before termination.
- 51.5s, squad 0: help call ([trace 18368](#trace-18368)). 129.7s, squad 1: answered a neighbour with support by fire.
- 62.1s, squad 0: withdrawal ([trace 19462](#trace-19462)). 97.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 123.7s, squad 0: help call ([trace 28462](#trace-28462)). 129.7s, squad 1: answered a neighbour with support by fire.
- 129.7s, squad 1: help answer ([trace 28846](#trace-28846)). 130.0s, squad 1: advanced tactically.
- 129.8s, squad 0: withdrawal ([trace 31580](#trace-31580)). 149.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 132.4s, squad 0: help call ([trace 31918](#trace-31918)). 182.7s, squad 1: answered a neighbour with support by fire.
- 139.2s, squad 1: withdrawal ([trace 32420](#trace-32420)). 166.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 4 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, prepared a base of fire and 3 further drill types; withdrew; 27 shots, 6/8 lost.
- **1** — FightHere; chose prepared a base of fire, answered a neighbour with support by fire and 3 further drill types; withdrew; 18 shots, 2/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 185 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 67 shots, 0/4 lost.

### Decisions and attribution

At 44.9s, squad 0 chose prepared a base of fire ([trace 14431](#trace-14431)), followed by 1 shots and 1 own casualties; estimate 12.8 against 0 distinct squad-reported contacts; At 44.9s, squad 0 chose advanced tactically ([trace 17110](#trace-17110)), followed by 1 shots and 1 own casualties; estimate 12.8 against 0 distinct squad-reported contacts; At 121.8s, squad 1 chose FightHere: nearest known group ([trace 28384](#trace-28384)), followed by 0 shots and 1 own casualties; estimate 13.8 against 6 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1362](#trace-1362)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5764903618200308, 'next_transition': 1391}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1364](#trace-1364)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0198252098905507, 'next_transition': 1836}.

### Communication

340 matched deliveries (mean 0.59s, max 6.65s); 285 explicit drops; 5 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.05s, squad 1, contact, evidence events line 247: First recorded contact; .
- 26.10s, squad 1, withdrawal, evidence 9063: BreakContact: believed ratio at least two without superiority; 81.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 45.85s, squad 1, help call, evidence 17584: NeedSupport; No completion observed before termination.
- 51.55s, squad 0, help call, evidence 18368: NeedSupport; 129.7s, squad 1: answered a neighbour with support by fire.
- 62.10s, squad 0, withdrawal, evidence 19462: BreakContact: believed ratio at least two without superiority; 97.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 123.70s, squad 0, help call, evidence 28462: NeedSupport; 129.7s, squad 1: answered a neighbour with support by fire.
- 129.70s, squad 1, help answer, evidence 28846: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 130.0s, squad 1: advanced tactically.
- 129.75s, squad 0, withdrawal, evidence 31580: BreakContact: believed ratio at least two without superiority; 149.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 132.40s, squad 0, help call, evidence 31918: NeedSupport; 182.7s, squad 1: answered a neighbour with support by fire.
- 139.25s, squad 1, withdrawal, evidence 32420: BreakContact: believed ratio at least two without superiority; 166.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 182.70s, squad 1, help answer, evidence 34528: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 210.8s, squad 1: advanced tactically.
- 209.75s, squad 1, help call, evidence 37008: NeedSupport; No completion observed before termination.
- 300.60s, squad 1, withdrawal, evidence 41442: BreakContact: believed ratio at least two without superiority; 330.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 315.80s, squad 0, withdrawal, evidence 42239: BreakContact: believed ratio at least two without superiority; 335.9s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.091786683016842, 'next_transition': 942}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.091786683016842, 'next_transition': 942}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.091786683016842, 'next_transition': 942}.
<a id="trace-319"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 319): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.309582739232795, 'next_transition': 143}.
<a id="trace-320"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 320): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.309582739232795, 'next_transition': 143}.
<a id="trace-321"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 321): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.309582739232795, 'next_transition': 143}.
<a id="trace-686"></a>
<a id="trace-688"></a>
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-755"></a>
<a id="trace-757"></a>
<a id="trace-779"></a>
<a id="trace-781"></a>
<a id="trace-805"></a>
<a id="trace-807"></a>
<a id="trace-828"></a>
<a id="trace-830"></a>
<a id="trace-861"></a>
<a id="trace-863"></a>
<a id="trace-946"></a>
<a id="trace-948"></a>
<a id="trace-979"></a>
<a id="trace-981"></a>
<a id="trace-1010"></a>
<a id="trace-1012"></a>
<a id="trace-1055"></a>
<a id="trace-1057"></a>
<a id="trace-1077"></a>
<a id="trace-1079"></a>
<a id="trace-1112"></a>
<a id="trace-1114"></a>
<a id="trace-1146"></a>
<a id="trace-1148"></a>
<a id="trace-1186"></a>
<a id="trace-1188"></a>
<a id="trace-1203"></a>
<a id="trace-1205"></a>
<a id="trace-1225"></a>
<a id="trace-1227"></a>
<a id="trace-1316"></a>
<a id="trace-1318"></a>
<a id="trace-1338"></a>
<a id="trace-1340"></a>
<a id="trace-1358"></a>
<a id="trace-1360"></a>
<a id="trace-1395"></a>
<a id="trace-1397"></a>
<a id="trace-1428"></a>
<a id="trace-1430"></a>
<a id="trace-1453"></a>
<a id="trace-1455"></a>
<a id="trace-1808"></a>
<a id="trace-1810"></a>
<a id="trace-1832"></a>
<a id="trace-1834"></a>
<a id="trace-2204"></a>
<a id="trace-2206"></a>
<a id="trace-2229"></a>
<a id="trace-2231"></a>
<a id="trace-2323"></a>
<a id="trace-2325"></a>
<a id="trace-2363"></a>
<a id="trace-2365"></a>
<a id="trace-2398"></a>
<a id="trace-2400"></a>
<a id="trace-2432"></a>
<a id="trace-2434"></a>
<a id="trace-2848"></a>
<a id="trace-2850"></a>
<a id="trace-2879"></a>
<a id="trace-2881"></a>
<a id="trace-3322"></a>
<a id="trace-3324"></a>
<a id="trace-3744"></a>
<a id="trace-3746"></a>
<a id="trace-5006"></a>
<a id="trace-5008"></a>
<a id="trace-5505"></a>
<a id="trace-5507"></a>
<a id="trace-5658"></a>
<a id="trace-5660"></a>
<a id="trace-5759"></a>
<a id="trace-5761"></a>
<a id="trace-6270"></a>
<a id="trace-6272"></a>
<a id="trace-7242"></a>
<a id="trace-7244"></a>
<a id="trace-7761"></a>
<a id="trace-7763"></a>
<a id="trace-8234"></a>
<a id="trace-8236"></a>
<a id="trace-8299"></a>
<a id="trace-8301"></a>
<a id="trace-8389"></a>
<a id="trace-8391"></a>
<a id="trace-8467"></a>
<a id="trace-8469"></a>
<a id="trace-8516"></a>
<a id="trace-8518"></a>
<a id="trace-8624"></a>
<a id="trace-8626"></a>
<a id="trace-8641"></a>
<a id="trace-8643"></a>
<a id="trace-9454"></a>
<a id="trace-9456"></a>
<a id="trace-9470"></a>
<a id="trace-9472"></a>
<a id="trace-9516"></a>
<a id="trace-9518"></a>
<a id="trace-9554"></a>
<a id="trace-9556"></a>
<a id="trace-9602"></a>
<a id="trace-9604"></a>
<a id="trace-9663"></a>
<a id="trace-9665"></a>
<a id="trace-9717"></a>
<a id="trace-9719"></a>
<a id="trace-12580"></a>
<a id="trace-12582"></a>
<a id="trace-12691"></a>
<a id="trace-12693"></a>
<a id="trace-12738"></a>
<a id="trace-12740"></a>
<a id="trace-12793"></a>
<a id="trace-12795"></a>
<a id="trace-12809"></a>
<a id="trace-12811"></a>
<a id="trace-12837"></a>
<a id="trace-12839"></a>
<a id="trace-12877"></a>
<a id="trace-12879"></a>
<a id="trace-12914"></a>
<a id="trace-12916"></a>
<a id="trace-12938"></a>
<a id="trace-12940"></a>
<a id="trace-12959"></a>
<a id="trace-12961"></a>
<a id="trace-12980"></a>
<a id="trace-12982"></a>
<a id="trace-13069"></a>
<a id="trace-13071"></a>
<a id="trace-13095"></a>
<a id="trace-13097"></a>
<a id="trace-13127"></a>
<a id="trace-13129"></a>
<a id="trace-13578"></a>
<a id="trace-13580"></a>
<a id="trace-13610"></a>
<a id="trace-13612"></a>
<a id="trace-13644"></a>
<a id="trace-13646"></a>
<a id="trace-13704"></a>
<a id="trace-13706"></a>
<a id="trace-13893"></a>
<a id="trace-13895"></a>
<a id="trace-13936"></a>
<a id="trace-13938"></a>
<a id="trace-13985"></a>
<a id="trace-13987"></a>
<a id="trace-14103"></a>
<a id="trace-14105"></a>
<a id="trace-14153"></a>
<a id="trace-14155"></a>
<a id="trace-14203"></a>
<a id="trace-14205"></a>
<a id="trace-14244"></a>
<a id="trace-14246"></a>
<a id="trace-14294"></a>
<a id="trace-14296"></a>
<a id="trace-14327"></a>
<a id="trace-14329"></a>
<a id="trace-14358"></a>
<a id="trace-14360"></a>
<a id="trace-14375"></a>
<a id="trace-14377"></a>
<a id="trace-14402"></a>
<a id="trace-14404"></a>
<a id="trace-14423"></a>
<a id="trace-14425"></a>
<a id="trace-17555"></a>
<a id="trace-17557"></a>
<a id="trace-17576"></a>
<a id="trace-17578"></a>
<a id="trace-17603"></a>
<a id="trace-17605"></a>
<a id="trace-17629"></a>
<a id="trace-17631"></a>
<a id="trace-17651"></a>
<a id="trace-17653"></a>
<a id="trace-17672"></a>
<a id="trace-17674"></a>
<a id="trace-18137"></a>
<a id="trace-18139"></a>
<a id="trace-18171"></a>
<a id="trace-18173"></a>
<a id="trace-18201"></a>
<a id="trace-18203"></a>
<a id="trace-18211"></a>
<a id="trace-18213"></a>
<a id="trace-18301"></a>
<a id="trace-18303"></a>
<a id="trace-18328"></a>
<a id="trace-18330"></a>
<a id="trace-18347"></a>
<a id="trace-18349"></a>
<a id="trace-18396"></a>
<a id="trace-18398"></a>
<a id="trace-18437"></a>
<a id="trace-18439"></a>
<a id="trace-18457"></a>
<a id="trace-18459"></a>
<a id="trace-18483"></a>
<a id="trace-18485"></a>
<a id="trace-18912"></a>
<a id="trace-18914"></a>
<a id="trace-18936"></a>
<a id="trace-18938"></a>
<a id="trace-18969"></a>
<a id="trace-18971"></a>
<a id="trace-19073"></a>
<a id="trace-19075"></a>
<a id="trace-19110"></a>
<a id="trace-19112"></a>
<a id="trace-19137"></a>
<a id="trace-19139"></a>
<a id="trace-19162"></a>
<a id="trace-19164"></a>
<a id="trace-19183"></a>
<a id="trace-19185"></a>
<a id="trace-19207"></a>
<a id="trace-19209"></a>
<a id="trace-19238"></a>
<a id="trace-19240"></a>
<a id="trace-19262"></a>
<a id="trace-19264"></a>
<a id="trace-19282"></a>
<a id="trace-19284"></a>
<a id="trace-19298"></a>
<a id="trace-19300"></a>
<a id="trace-19391"></a>
<a id="trace-19393"></a>
<a id="trace-19409"></a>
<a id="trace-19411"></a>
<a id="trace-19433"></a>
<a id="trace-19435"></a>
<a id="trace-19451"></a>
<a id="trace-19453"></a>
<a id="trace-19731"></a>
<a id="trace-19733"></a>
<a id="trace-19742"></a>
<a id="trace-19744"></a>
<a id="trace-19773"></a>
<a id="trace-19775"></a>
<a id="trace-19796"></a>
<a id="trace-19798"></a>
<a id="trace-19819"></a>
<a id="trace-19821"></a>
<a id="trace-19836"></a>
<a id="trace-19838"></a>
<a id="trace-19930"></a>
<a id="trace-19932"></a>
<a id="trace-20008"></a>
<a id="trace-20010"></a>
<a id="trace-20035"></a>
<a id="trace-20037"></a>
<a id="trace-20070"></a>
<a id="trace-20072"></a>
<a id="trace-20118"></a>
<a id="trace-20120"></a>
<a id="trace-20146"></a>
<a id="trace-20148"></a>
<a id="trace-20165"></a>
<a id="trace-20167"></a>
<a id="trace-20184"></a>
<a id="trace-20186"></a>
<a id="trace-20201"></a>
<a id="trace-20203"></a>
<a id="trace-20285"></a>
<a id="trace-20287"></a>
<a id="trace-20306"></a>
<a id="trace-20308"></a>
<a id="trace-20332"></a>
<a id="trace-20334"></a>
<a id="trace-20375"></a>
<a id="trace-20377"></a>
<a id="trace-20404"></a>
<a id="trace-20406"></a>
<a id="trace-20431"></a>
<a id="trace-20433"></a>
<a id="trace-20478"></a>
<a id="trace-20480"></a>
<a id="trace-20522"></a>
<a id="trace-20524"></a>
<a id="trace-20563"></a>
<a id="trace-20565"></a>
<a id="trace-20614"></a>
<a id="trace-20616"></a>
<a id="trace-20724"></a>
<a id="trace-20726"></a>
<a id="trace-20762"></a>
<a id="trace-20764"></a>
<a id="trace-20811"></a>
<a id="trace-20813"></a>
<a id="trace-20844"></a>
<a id="trace-20846"></a>
<a id="trace-20871"></a>
<a id="trace-20873"></a>
<a id="trace-21054"></a>
<a id="trace-21056"></a>
<a id="trace-21079"></a>
<a id="trace-21081"></a>
<a id="trace-21104"></a>
<a id="trace-21106"></a>
<a id="trace-21263"></a>
<a id="trace-21265"></a>
<a id="trace-21282"></a>
<a id="trace-21284"></a>
<a id="trace-21394"></a>
<a id="trace-21396"></a>
<a id="trace-21422"></a>
<a id="trace-21424"></a>
<a id="trace-21451"></a>
<a id="trace-21453"></a>
<a id="trace-21479"></a>
<a id="trace-21481"></a>
<a id="trace-21520"></a>
<a id="trace-21522"></a>
<a id="trace-21547"></a>
<a id="trace-21549"></a>
<a id="trace-21582"></a>
<a id="trace-21584"></a>
<a id="trace-21602"></a>
<a id="trace-21604"></a>
<a id="trace-21648"></a>
<a id="trace-21650"></a>
<a id="trace-21666"></a>
<a id="trace-21668"></a>
<a id="trace-21757"></a>
<a id="trace-21759"></a>
<a id="trace-21773"></a>
<a id="trace-21775"></a>
<a id="trace-21798"></a>
<a id="trace-21800"></a>
<a id="trace-21830"></a>
<a id="trace-21832"></a>
<a id="trace-22027"></a>
<a id="trace-22029"></a>
<a id="trace-22053"></a>
<a id="trace-22055"></a>
<a id="trace-22088"></a>
<a id="trace-22090"></a>
<a id="trace-22115"></a>
<a id="trace-22117"></a>
<a id="trace-22161"></a>
<a id="trace-22163"></a>
<a id="trace-22187"></a>
<a id="trace-22189"></a>
<a id="trace-22279"></a>
<a id="trace-22281"></a>
<a id="trace-22306"></a>
<a id="trace-22308"></a>
<a id="trace-22328"></a>
<a id="trace-22330"></a>
<a id="trace-22349"></a>
<a id="trace-22351"></a>
<a id="trace-22378"></a>
<a id="trace-22380"></a>
<a id="trace-22396"></a>
<a id="trace-22398"></a>
<a id="trace-22417"></a>
<a id="trace-22419"></a>
<a id="trace-22426"></a>
<a id="trace-22428"></a>
<a id="trace-22508"></a>
<a id="trace-22510"></a>
<a id="trace-22522"></a>
<a id="trace-22524"></a>
<a id="trace-22611"></a>
<a id="trace-22613"></a>
<a id="trace-22629"></a>
<a id="trace-22631"></a>
<a id="trace-22654"></a>
<a id="trace-22656"></a>
<a id="trace-22729"></a>
<a id="trace-22731"></a>
<a id="trace-22758"></a>
<a id="trace-22760"></a>
<a id="trace-22780"></a>
<a id="trace-22782"></a>
<a id="trace-22806"></a>
<a id="trace-22808"></a>
<a id="trace-24392"></a>
<a id="trace-24394"></a>
<a id="trace-24409"></a>
<a id="trace-24411"></a>
<a id="trace-24432"></a>
<a id="trace-24434"></a>
<a id="trace-24519"></a>
<a id="trace-24521"></a>
<a id="trace-24528"></a>
<a id="trace-24530"></a>
<a id="trace-24555"></a>
<a id="trace-24557"></a>
<a id="trace-24571"></a>
<a id="trace-24573"></a>
<a id="trace-24591"></a>
<a id="trace-24593"></a>
<a id="trace-24605"></a>
<a id="trace-24607"></a>
<a id="trace-24620"></a>
<a id="trace-24622"></a>
<a id="trace-24631"></a>
<a id="trace-24633"></a>
<a id="trace-24645"></a>
<a id="trace-24647"></a>
<a id="trace-24657"></a>
<a id="trace-24659"></a>
<a id="trace-24734"></a>
<a id="trace-24736"></a>
<a id="trace-24741"></a>
<a id="trace-24743"></a>
<a id="trace-24756"></a>
<a id="trace-24758"></a>
<a id="trace-24771"></a>
<a id="trace-24773"></a>
<a id="trace-24787"></a>
<a id="trace-24789"></a>
<a id="trace-24959"></a>
<a id="trace-24961"></a>
<a id="trace-24986"></a>
<a id="trace-24988"></a>
<a id="trace-25003"></a>
<a id="trace-25005"></a>
<a id="trace-25026"></a>
<a id="trace-25028"></a>
<a id="trace-25039"></a>
<a id="trace-25041"></a>
<a id="trace-25131"></a>
<a id="trace-25133"></a>
<a id="trace-25141"></a>
<a id="trace-25143"></a>
<a id="trace-25163"></a>
<a id="trace-25165"></a>
<a id="trace-25179"></a>
<a id="trace-25181"></a>
<a id="trace-25202"></a>
<a id="trace-25204"></a>
<a id="trace-25223"></a>
<a id="trace-25225"></a>
<a id="trace-27606"></a>
<a id="trace-27608"></a>
<a id="trace-27621"></a>
<a id="trace-27623"></a>
<a id="trace-27665"></a>
<a id="trace-27667"></a>
<a id="trace-27709"></a>
<a id="trace-27711"></a>
<a id="trace-27832"></a>
<a id="trace-27834"></a>
<a id="trace-27860"></a>
<a id="trace-27862"></a>
<a id="trace-27918"></a>
<a id="trace-27920"></a>
<a id="trace-27964"></a>
<a id="trace-27966"></a>
<a id="trace-28009"></a>
<a id="trace-28011"></a>
<a id="trace-28042"></a>
<a id="trace-28044"></a>
<a id="trace-28086"></a>
<a id="trace-28088"></a>
<a id="trace-28119"></a>
<a id="trace-28121"></a>
<a id="trace-28152"></a>
<a id="trace-28154"></a>
<a id="trace-28193"></a>
<a id="trace-28195"></a>
<a id="trace-28300"></a>
<a id="trace-28302"></a>
<a id="trace-28329"></a>
<a id="trace-28331"></a>
<a id="trace-28377"></a>
<a id="trace-28379"></a>
<a id="trace-28413"></a>
<a id="trace-28415"></a>
<a id="trace-28427"></a>
<a id="trace-28429"></a>
<a id="trace-28445"></a>
<a id="trace-28447"></a>
<a id="trace-28469"></a>
<a id="trace-28471"></a>
<a id="trace-28614"></a>
<a id="trace-28616"></a>
<a id="trace-28631"></a>
<a id="trace-28633"></a>
<a id="trace-28711"></a>
<a id="trace-28713"></a>
<a id="trace-28723"></a>
<a id="trace-28725"></a>
<a id="trace-28741"></a>
<a id="trace-28743"></a>
<a id="trace-28755"></a>
<a id="trace-28757"></a>
<a id="trace-28773"></a>
<a id="trace-28775"></a>
<a id="trace-28782"></a>
<a id="trace-28784"></a>
<a id="trace-28797"></a>
<a id="trace-28799"></a>
<a id="trace-28813"></a>
<a id="trace-28815"></a>
<a id="trace-28833"></a>
<a id="trace-28835"></a>
<a id="trace-31638"></a>
<a id="trace-31640"></a>
<a id="trace-31824"></a>
<a id="trace-31826"></a>
<a id="trace-31847"></a>
<a id="trace-31849"></a>
<a id="trace-31863"></a>
<a id="trace-31865"></a>
<a id="trace-31885"></a>
<a id="trace-31887"></a>
<a id="trace-31908"></a>
<a id="trace-31910"></a>
<a id="trace-31938"></a>
<a id="trace-31940"></a>
<a id="trace-31954"></a>
<a id="trace-31956"></a>
<a id="trace-31971"></a>
<a id="trace-31973"></a>
<a id="trace-31990"></a>
<a id="trace-31992"></a>
<a id="trace-32005"></a>
<a id="trace-32007"></a>
<a id="trace-32078"></a>
<a id="trace-32080"></a>
<a id="trace-32095"></a>
<a id="trace-32097"></a>
<a id="trace-32292"></a>
<a id="trace-32294"></a>
<a id="trace-32312"></a>
<a id="trace-32314"></a>
<a id="trace-32335"></a>
<a id="trace-32337"></a>
<a id="trace-32362"></a>
<a id="trace-32364"></a>
<a id="trace-32387"></a>
<a id="trace-32389"></a>
<a id="trace-32401"></a>
<a id="trace-32403"></a>
<a id="trace-32656"></a>
<a id="trace-32658"></a>
<a id="trace-32667"></a>
<a id="trace-32669"></a>
<a id="trace-32752"></a>
<a id="trace-32754"></a>
<a id="trace-32773"></a>
<a id="trace-32775"></a>
<a id="trace-32797"></a>
<a id="trace-32799"></a>
<a id="trace-32815"></a>
<a id="trace-32817"></a>
<a id="trace-32834"></a>
<a id="trace-32836"></a>
<a id="trace-32850"></a>
<a id="trace-32852"></a>
<a id="trace-32863"></a>
<a id="trace-32865"></a>
<a id="trace-32881"></a>
<a id="trace-32883"></a>
<a id="trace-32903"></a>
<a id="trace-32905"></a>
<a id="trace-32918"></a>
<a id="trace-32920"></a>
<a id="trace-32992"></a>
<a id="trace-32994"></a>
<a id="trace-33007"></a>
<a id="trace-33009"></a>
<a id="trace-33017"></a>
<a id="trace-33019"></a>
<a id="trace-33033"></a>
<a id="trace-33035"></a>
<a id="trace-33044"></a>
<a id="trace-33046"></a>
<a id="trace-33056"></a>
<a id="trace-33058"></a>
<a id="trace-33068"></a>
<a id="trace-33070"></a>
<a id="trace-33078"></a>
<a id="trace-33080"></a>
<a id="trace-33093"></a>
<a id="trace-33095"></a>
<a id="trace-33103"></a>
<a id="trace-33105"></a>
<a id="trace-33180"></a>
<a id="trace-33182"></a>
<a id="trace-33193"></a>
<a id="trace-33195"></a>
<a id="trace-33208"></a>
<a id="trace-33210"></a>
<a id="trace-33321"></a>
<a id="trace-33323"></a>
<a id="trace-33341"></a>
<a id="trace-33343"></a>
<a id="trace-33356"></a>
<a id="trace-33358"></a>
<a id="trace-33378"></a>
<a id="trace-33380"></a>
<a id="trace-33391"></a>
<a id="trace-33393"></a>
<a id="trace-33413"></a>
<a id="trace-33415"></a>
<a id="trace-33419"></a>
<a id="trace-33421"></a>
<a id="trace-33499"></a>
<a id="trace-33501"></a>
<a id="trace-33508"></a>
<a id="trace-33510"></a>
<a id="trace-33529"></a>
<a id="trace-33531"></a>
<a id="trace-33540"></a>
<a id="trace-33542"></a>
<a id="trace-33560"></a>
<a id="trace-33562"></a>
<a id="trace-33567"></a>
<a id="trace-33569"></a>
<a id="trace-33586"></a>
<a id="trace-33588"></a>
<a id="trace-33596"></a>
<a id="trace-33598"></a>
<a id="trace-33613"></a>
<a id="trace-33615"></a>
<a id="trace-33619"></a>
<a id="trace-33621"></a>
<a id="trace-33698"></a>
<a id="trace-33700"></a>
<a id="trace-33703"></a>
<a id="trace-33705"></a>
<a id="trace-33725"></a>
<a id="trace-33727"></a>
<a id="trace-33738"></a>
<a id="trace-33740"></a>
<a id="trace-33758"></a>
<a id="trace-33760"></a>
<a id="trace-33771"></a>
<a id="trace-33773"></a>
<a id="trace-33794"></a>
<a id="trace-33796"></a>
<a id="trace-33801"></a>
<a id="trace-33803"></a>
<a id="trace-33818"></a>
<a id="trace-33820"></a>
<a id="trace-33826"></a>
<a id="trace-33828"></a>
<a id="trace-33906"></a>
<a id="trace-33908"></a>
<a id="trace-33914"></a>
<a id="trace-33916"></a>
<a id="trace-33934"></a>
<a id="trace-33936"></a>
<a id="trace-33943"></a>
<a id="trace-33945"></a>
<a id="trace-33966"></a>
<a id="trace-33968"></a>
<a id="trace-33981"></a>
<a id="trace-33983"></a>
<a id="trace-34008"></a>
<a id="trace-34010"></a>
<a id="trace-34022"></a>
<a id="trace-34024"></a>
<a id="trace-34041"></a>
<a id="trace-34043"></a>
<a id="trace-34047"></a>
<a id="trace-34049"></a>
<a id="trace-34125"></a>
<a id="trace-34127"></a>
<a id="trace-34134"></a>
<a id="trace-34136"></a>
<a id="trace-34147"></a>
<a id="trace-34149"></a>
<a id="trace-34158"></a>
<a id="trace-34160"></a>
<a id="trace-34175"></a>
<a id="trace-34177"></a>
<a id="trace-34182"></a>
<a id="trace-34184"></a>
<a id="trace-34195"></a>
<a id="trace-34197"></a>
<a id="trace-34202"></a>
<a id="trace-34204"></a>
<a id="trace-34215"></a>
<a id="trace-34217"></a>
<a id="trace-34225"></a>
<a id="trace-34227"></a>
<a id="trace-34296"></a>
<a id="trace-34298"></a>
<a id="trace-34303"></a>
<a id="trace-34305"></a>
<a id="trace-34316"></a>
<a id="trace-34318"></a>
<a id="trace-34326"></a>
<a id="trace-34328"></a>
<a id="trace-34350"></a>
<a id="trace-34352"></a>
<a id="trace-34359"></a>
<a id="trace-34361"></a>
<a id="trace-34372"></a>
<a id="trace-34374"></a>
<a id="trace-34380"></a>
<a id="trace-34382"></a>
<a id="trace-34394"></a>
<a id="trace-34396"></a>
<a id="trace-34403"></a>
<a id="trace-34405"></a>
<a id="trace-34473"></a>
<a id="trace-34475"></a>
<a id="trace-34482"></a>
<a id="trace-34484"></a>
<a id="trace-34496"></a>
<a id="trace-34498"></a>
<a id="trace-34503"></a>
<a id="trace-34505"></a>
<a id="trace-34518"></a>
<a id="trace-34520"></a>
<a id="trace-36064"></a>
<a id="trace-36066"></a>
<a id="trace-36082"></a>
<a id="trace-36084"></a>
<a id="trace-36097"></a>
<a id="trace-36099"></a>
<a id="trace-36113"></a>
<a id="trace-36115"></a>
<a id="trace-36125"></a>
<a id="trace-36127"></a>
<a id="trace-36205"></a>
<a id="trace-36207"></a>
<a id="trace-36220"></a>
<a id="trace-36222"></a>
<a id="trace-36227"></a>
<a id="trace-36229"></a>
<a id="trace-36243"></a>
<a id="trace-36245"></a>
<a id="trace-36250"></a>
<a id="trace-36252"></a>
<a id="trace-36270"></a>
<a id="trace-36272"></a>
<a id="trace-36279"></a>
<a id="trace-36281"></a>
<a id="trace-36294"></a>
<a id="trace-36296"></a>
<a id="trace-36304"></a>
<a id="trace-36306"></a>
<a id="trace-36377"></a>
<a id="trace-36379"></a>
<a id="trace-36383"></a>
<a id="trace-36385"></a>
<a id="trace-36394"></a>
<a id="trace-36396"></a>
<a id="trace-36401"></a>
<a id="trace-36403"></a>
<a id="trace-36414"></a>
<a id="trace-36416"></a>
<a id="trace-36426"></a>
<a id="trace-36428"></a>
<a id="trace-36439"></a>
<a id="trace-36441"></a>
<a id="trace-36446"></a>
<a id="trace-36448"></a>
<a id="trace-36460"></a>
<a id="trace-36462"></a>
<a id="trace-36472"></a>
<a id="trace-36474"></a>
<a id="trace-36543"></a>
<a id="trace-36545"></a>
<a id="trace-36553"></a>
<a id="trace-36555"></a>
<a id="trace-36568"></a>
<a id="trace-36570"></a>
<a id="trace-36573"></a>
<a id="trace-36575"></a>
<a id="trace-36587"></a>
<a id="trace-36589"></a>
<a id="trace-36598"></a>
<a id="trace-36600"></a>
<a id="trace-36613"></a>
<a id="trace-36615"></a>
<a id="trace-36620"></a>
<a id="trace-36622"></a>
<a id="trace-36635"></a>
<a id="trace-36637"></a>
<a id="trace-36645"></a>
<a id="trace-36647"></a>
<a id="trace-36715"></a>
<a id="trace-36717"></a>
<a id="trace-36726"></a>
<a id="trace-36728"></a>
<a id="trace-36744"></a>
<a id="trace-36746"></a>
<a id="trace-36754"></a>
<a id="trace-36756"></a>
<a id="trace-36769"></a>
<a id="trace-36771"></a>
<a id="trace-36779"></a>
<a id="trace-36781"></a>
<a id="trace-36795"></a>
<a id="trace-36797"></a>
<a id="trace-36803"></a>
<a id="trace-36805"></a>
<a id="trace-36814"></a>
<a id="trace-36816"></a>
<a id="trace-36827"></a>
<a id="trace-36829"></a>
<a id="trace-36897"></a>
<a id="trace-36899"></a>
<a id="trace-36907"></a>
<a id="trace-36909"></a>
<a id="trace-36924"></a>
<a id="trace-36926"></a>
<a id="trace-36938"></a>
<a id="trace-36940"></a>
<a id="trace-36954"></a>
<a id="trace-36956"></a>
<a id="trace-36970"></a>
<a id="trace-36972"></a>
<a id="trace-36982"></a>
<a id="trace-36984"></a>
<a id="trace-36990"></a>
<a id="trace-36992"></a>
<a id="trace-37000"></a>
<a id="trace-37002"></a>
<a id="trace-37015"></a>
<a id="trace-37017"></a>
<a id="trace-37092"></a>
<a id="trace-37094"></a>
<a id="trace-37212"></a>
<a id="trace-37214"></a>
<a id="trace-37232"></a>
<a id="trace-37234"></a>
<a id="trace-37243"></a>
<a id="trace-37245"></a>
<a id="trace-37264"></a>
<a id="trace-37266"></a>
<a id="trace-37280"></a>
<a id="trace-37282"></a>
<a id="trace-37297"></a>
<a id="trace-37299"></a>
<a id="trace-37312"></a>
<a id="trace-37314"></a>
<a id="trace-37330"></a>
<a id="trace-37332"></a>
<a id="trace-37341"></a>
<a id="trace-37343"></a>
<a id="trace-37417"></a>
<a id="trace-37419"></a>
<a id="trace-37427"></a>
<a id="trace-37429"></a>
<a id="trace-37442"></a>
<a id="trace-37444"></a>
<a id="trace-37455"></a>
<a id="trace-37457"></a>
<a id="trace-37470"></a>
<a id="trace-37472"></a>
<a id="trace-37482"></a>
<a id="trace-37484"></a>
<a id="trace-37499"></a>
<a id="trace-37501"></a>
<a id="trace-37507"></a>
<a id="trace-37509"></a>
<a id="trace-37520"></a>
<a id="trace-37522"></a>
<a id="trace-37530"></a>
<a id="trace-37532"></a>
<a id="trace-37602"></a>
<a id="trace-37604"></a>
<a id="trace-37611"></a>
<a id="trace-37613"></a>
<a id="trace-37625"></a>
<a id="trace-37627"></a>
<a id="trace-37635"></a>
<a id="trace-37637"></a>
<a id="trace-37647"></a>
<a id="trace-37649"></a>
<a id="trace-37656"></a>
<a id="trace-37658"></a>
<a id="trace-37669"></a>
<a id="trace-37671"></a>
<a id="trace-37734"></a>
<a id="trace-37736"></a>
<a id="trace-37746"></a>
<a id="trace-37748"></a>
<a id="trace-37810"></a>
<a id="trace-37812"></a>
<a id="trace-37888"></a>
<a id="trace-37890"></a>
<a id="trace-37898"></a>
<a id="trace-37900"></a>
<a id="trace-37917"></a>
<a id="trace-37919"></a>
<a id="trace-37929"></a>
<a id="trace-37931"></a>
<a id="trace-37944"></a>
<a id="trace-37946"></a>
<a id="trace-37960"></a>
<a id="trace-37962"></a>
<a id="trace-37974"></a>
<a id="trace-37976"></a>
<a id="trace-37985"></a>
<a id="trace-37987"></a>
<a id="trace-37999"></a>
<a id="trace-38001"></a>
<a id="trace-38009"></a>
<a id="trace-38011"></a>
<a id="trace-38079"></a>
<a id="trace-38081"></a>
<a id="trace-38087"></a>
<a id="trace-38089"></a>
<a id="trace-38100"></a>
<a id="trace-38102"></a>
<a id="trace-38107"></a>
<a id="trace-38109"></a>
<a id="trace-38122"></a>
<a id="trace-38124"></a>
<a id="trace-38133"></a>
<a id="trace-38135"></a>
<a id="trace-38145"></a>
<a id="trace-38147"></a>
<a id="trace-38154"></a>
<a id="trace-38156"></a>
<a id="trace-38170"></a>
<a id="trace-38172"></a>
<a id="trace-38178"></a>
<a id="trace-38180"></a>
<a id="trace-38248"></a>
<a id="trace-38250"></a>
<a id="trace-38256"></a>
<a id="trace-38258"></a>
<a id="trace-38272"></a>
<a id="trace-38274"></a>
<a id="trace-38279"></a>
<a id="trace-38281"></a>
<a id="trace-38292"></a>
<a id="trace-38294"></a>
<a id="trace-38301"></a>
<a id="trace-38303"></a>
<a id="trace-38315"></a>
<a id="trace-38317"></a>
<a id="trace-38322"></a>
<a id="trace-38324"></a>
<a id="trace-38395"></a>
<a id="trace-38397"></a>
<a id="trace-38410"></a>
<a id="trace-38412"></a>
<a id="trace-38485"></a>
<a id="trace-38487"></a>
<a id="trace-38501"></a>
<a id="trace-38503"></a>
<a id="trace-38516"></a>
<a id="trace-38518"></a>
<a id="trace-38525"></a>
<a id="trace-38527"></a>
<a id="trace-38537"></a>
<a id="trace-38539"></a>
<a id="trace-38550"></a>
<a id="trace-38552"></a>
<a id="trace-38560"></a>
<a id="trace-38562"></a>
<a id="trace-38568"></a>
<a id="trace-38570"></a>
<a id="trace-38579"></a>
<a id="trace-38581"></a>
<a id="trace-38587"></a>
<a id="trace-38589"></a>
<a id="trace-38715"></a>
<a id="trace-38717"></a>
<a id="trace-38725"></a>
<a id="trace-38727"></a>
<a id="trace-38749"></a>
<a id="trace-38751"></a>
<a id="trace-38762"></a>
<a id="trace-38764"></a>
<a id="trace-38780"></a>
<a id="trace-38782"></a>
<a id="trace-38793"></a>
<a id="trace-38795"></a>
<a id="trace-38808"></a>
<a id="trace-38810"></a>
<a id="trace-38818"></a>
<a id="trace-38820"></a>
<a id="trace-38844"></a>
<a id="trace-38846"></a>
<a id="trace-38854"></a>
<a id="trace-38856"></a>
<a id="trace-38922"></a>
<a id="trace-38924"></a>
<a id="trace-38934"></a>
<a id="trace-38936"></a>
<a id="trace-38946"></a>
<a id="trace-38948"></a>
<a id="trace-38962"></a>
<a id="trace-38964"></a>
<a id="trace-38979"></a>
<a id="trace-38981"></a>
<a id="trace-38997"></a>
<a id="trace-38999"></a>
<a id="trace-39016"></a>
<a id="trace-39018"></a>
<a id="trace-39023"></a>
<a id="trace-39025"></a>
<a id="trace-39055"></a>
<a id="trace-39057"></a>
<a id="trace-39063"></a>
<a id="trace-39065"></a>
<a id="trace-39193"></a>
<a id="trace-39195"></a>
<a id="trace-39206"></a>
<a id="trace-39208"></a>
<a id="trace-39222"></a>
<a id="trace-39224"></a>
<a id="trace-39235"></a>
<a id="trace-39237"></a>
<a id="trace-39250"></a>
<a id="trace-39252"></a>
<a id="trace-39259"></a>
<a id="trace-39261"></a>
<a id="trace-39274"></a>
<a id="trace-39276"></a>
<a id="trace-39282"></a>
<a id="trace-39284"></a>
<a id="trace-39298"></a>
<a id="trace-39300"></a>
<a id="trace-39304"></a>
<a id="trace-39306"></a>
<a id="trace-39384"></a>
<a id="trace-39386"></a>
<a id="trace-39394"></a>
<a id="trace-39396"></a>
<a id="trace-39407"></a>
<a id="trace-39409"></a>
<a id="trace-39415"></a>
<a id="trace-39417"></a>
<a id="trace-39430"></a>
<a id="trace-39432"></a>
<a id="trace-39440"></a>
<a id="trace-39442"></a>
<a id="trace-39457"></a>
<a id="trace-39459"></a>
<a id="trace-39468"></a>
<a id="trace-39470"></a>
<a id="trace-39490"></a>
<a id="trace-39492"></a>
<a id="trace-39616"></a>
<a id="trace-39618"></a>
<a id="trace-39627"></a>
<a id="trace-39629"></a>
<a id="trace-39641"></a>
<a id="trace-39643"></a>
<a id="trace-39661"></a>
<a id="trace-39663"></a>
<a id="trace-39678"></a>
<a id="trace-39680"></a>
<a id="trace-39690"></a>
<a id="trace-39692"></a>
<a id="trace-39702"></a>
<a id="trace-39704"></a>
<a id="trace-39712"></a>
<a id="trace-39714"></a>
<a id="trace-39722"></a>
<a id="trace-39724"></a>
<a id="trace-39729"></a>
<a id="trace-39731"></a>
<a id="trace-39804"></a>
<a id="trace-39806"></a>
<a id="trace-39812"></a>
<a id="trace-39814"></a>
<a id="trace-39825"></a>
<a id="trace-39827"></a>
<a id="trace-39837"></a>
<a id="trace-39839"></a>
<a id="trace-39852"></a>
<a id="trace-39854"></a>
<a id="trace-39865"></a>
<a id="trace-39867"></a>
<a id="trace-39885"></a>
<a id="trace-39887"></a>
<a id="trace-39901"></a>
<a id="trace-39903"></a>
<a id="trace-39912"></a>
<a id="trace-39914"></a>
<a id="trace-39918"></a>
<a id="trace-39920"></a>
<a id="trace-39987"></a>
<a id="trace-39989"></a>
<a id="trace-39994"></a>
<a id="trace-39996"></a>
<a id="trace-40007"></a>
<a id="trace-40009"></a>
<a id="trace-40019"></a>
<a id="trace-40021"></a>
<a id="trace-40037"></a>
<a id="trace-40039"></a>
<a id="trace-40047"></a>
<a id="trace-40049"></a>
<a id="trace-40062"></a>
<a id="trace-40064"></a>
<a id="trace-40114"></a>
<a id="trace-40116"></a>
<a id="trace-40134"></a>
<a id="trace-40136"></a>
<a id="trace-40204"></a>
<a id="trace-40206"></a>
<a id="trace-40288"></a>
<a id="trace-40290"></a>
<a id="trace-40297"></a>
<a id="trace-40299"></a>
<a id="trace-40314"></a>
<a id="trace-40316"></a>
<a id="trace-40322"></a>
<a id="trace-40324"></a>
<a id="trace-40337"></a>
<a id="trace-40339"></a>
<a id="trace-40347"></a>
<a id="trace-40349"></a>
<a id="trace-40359"></a>
<a id="trace-40361"></a>
<a id="trace-40368"></a>
<a id="trace-40370"></a>
<a id="trace-40381"></a>
<a id="trace-40383"></a>
<a id="trace-40393"></a>
<a id="trace-40395"></a>
<a id="trace-40465"></a>
<a id="trace-40467"></a>
<a id="trace-40473"></a>
<a id="trace-40475"></a>
<a id="trace-40493"></a>
<a id="trace-40495"></a>
<a id="trace-40501"></a>
<a id="trace-40503"></a>
<a id="trace-40519"></a>
<a id="trace-40521"></a>
<a id="trace-40531"></a>
<a id="trace-40533"></a>
<a id="trace-40541"></a>
<a id="trace-40543"></a>
<a id="trace-40633"></a>
<a id="trace-40635"></a>
<a id="trace-40646"></a>
<a id="trace-40648"></a>
<a id="trace-40651"></a>
<a id="trace-40653"></a>
<a id="trace-40726"></a>
<a id="trace-40728"></a>
<a id="trace-40730"></a>
<a id="trace-40732"></a>
<a id="trace-40749"></a>
<a id="trace-40751"></a>
<a id="trace-40757"></a>
<a id="trace-40759"></a>
<a id="trace-40777"></a>
<a id="trace-40779"></a>
<a id="trace-40784"></a>
<a id="trace-40786"></a>
<a id="trace-40803"></a>
<a id="trace-40805"></a>
<a id="trace-40813"></a>
<a id="trace-40815"></a>
<a id="trace-40830"></a>
<a id="trace-40832"></a>
<a id="trace-40834"></a>
<a id="trace-40836"></a>
<a id="trace-40905"></a>
<a id="trace-40907"></a>
<a id="trace-40911"></a>
<a id="trace-40913"></a>
<a id="trace-41082"></a>
<a id="trace-41084"></a>
<a id="trace-41095"></a>
<a id="trace-41097"></a>
<a id="trace-41269"></a>
<a id="trace-41271"></a>
<a id="trace-41294"></a>
<a id="trace-41296"></a>
<a id="trace-41307"></a>
<a id="trace-41309"></a>
<a id="trace-41327"></a>
<a id="trace-41329"></a>
<a id="trace-41339"></a>
<a id="trace-41341"></a>
<a id="trace-41350"></a>
<a id="trace-41352"></a>
<a id="trace-41425"></a>
<a id="trace-41427"></a>
<a id="trace-41550"></a>
<a id="trace-41552"></a>
<a id="trace-41568"></a>
<a id="trace-41570"></a>
<a id="trace-41582"></a>
<a id="trace-41584"></a>
<a id="trace-41610"></a>
<a id="trace-41612"></a>
<a id="trace-41618"></a>
<a id="trace-41620"></a>
<a id="trace-41633"></a>
<a id="trace-41635"></a>
<a id="trace-41648"></a>
<a id="trace-41650"></a>
<a id="trace-41668"></a>
<a id="trace-41670"></a>
<a id="trace-41675"></a>
<a id="trace-41677"></a>
<a id="trace-41748"></a>
<a id="trace-41750"></a>
<a id="trace-41757"></a>
<a id="trace-41759"></a>
<a id="trace-41774"></a>
<a id="trace-41776"></a>
<a id="trace-41786"></a>
<a id="trace-41788"></a>
<a id="trace-41804"></a>
<a id="trace-41806"></a>
<a id="trace-41814"></a>
<a id="trace-41816"></a>
<a id="trace-41830"></a>
<a id="trace-41832"></a>
<a id="trace-41842"></a>
<a id="trace-41844"></a>
<a id="trace-41857"></a>
<a id="trace-41859"></a>
<a id="trace-41866"></a>
<a id="trace-41868"></a>
<a id="trace-41939"></a>
<a id="trace-41941"></a>
<a id="trace-41947"></a>
<a id="trace-41949"></a>
<a id="trace-41963"></a>
<a id="trace-41965"></a>
<a id="trace-41976"></a>
<a id="trace-41978"></a>
<a id="trace-41999"></a>
<a id="trace-42001"></a>
<a id="trace-42084"></a>
<a id="trace-42086"></a>
<a id="trace-42105"></a>
<a id="trace-42107"></a>
<a id="trace-42116"></a>
<a id="trace-42118"></a>
<a id="trace-42136"></a>
<a id="trace-42138"></a>
<a id="trace-42145"></a>
<a id="trace-42147"></a>
<a id="trace-42227"></a>
<a id="trace-42229"></a>
<a id="trace-42236"></a>
<a id="trace-42238"></a>
<a id="trace-42304"></a>
<a id="trace-42306"></a>
<a id="trace-42316"></a>
<a id="trace-42318"></a>
<a id="trace-42334"></a>
<a id="trace-42336"></a>
<a id="trace-42340"></a>
<a id="trace-42342"></a>
<a id="trace-42352"></a>
<a id="trace-42354"></a>
<a id="trace-42369"></a>
<a id="trace-42371"></a>
<a id="trace-42386"></a>
<a id="trace-42388"></a>
<a id="trace-42392"></a>
<a id="trace-42394"></a>
<a id="trace-42463"></a>
<a id="trace-42465"></a>
<a id="trace-42473"></a>
<a id="trace-42475"></a>
<a id="trace-42487"></a>
<a id="trace-42489"></a>
<a id="trace-42503"></a>
<a id="trace-42505"></a>
<a id="trace-42518"></a>
<a id="trace-42520"></a>
<a id="trace-42527"></a>
<a id="trace-42529"></a>
<a id="trace-42541"></a>
<a id="trace-42543"></a>
<a id="trace-42557"></a>
<a id="trace-42559"></a>
<a id="trace-42573"></a>
<a id="trace-42575"></a>
<a id="trace-42580"></a>
<a id="trace-42582"></a>
<a id="trace-42656"></a>
<a id="trace-42658"></a>
<a id="trace-42663"></a>
<a id="trace-42665"></a>
<a id="trace-42680"></a>
<a id="trace-42682"></a>
<a id="trace-42696"></a>
<a id="trace-42698"></a>
<a id="trace-42712"></a>
<a id="trace-42714"></a>
<a id="trace-42723"></a>
<a id="trace-42725"></a>
<a id="trace-42796"></a>
<a id="trace-42798"></a>
<a id="trace-42813"></a>
<a id="trace-42815"></a>
<a id="trace-42826"></a>
<a id="trace-42828"></a>
<a id="trace-42842"></a>
<a id="trace-42844"></a>
<a id="trace-42917"></a>
<a id="trace-42919"></a>
<a id="trace-42930"></a>
<a id="trace-42932"></a>
<a id="trace-42949"></a>
<a id="trace-42951"></a>
<a id="trace-42966"></a>
<a id="trace-42968"></a>
<a id="trace-42992"></a>
<a id="trace-42994"></a>
<a id="trace-43007"></a>
<a id="trace-43009"></a>
<a id="trace-43023"></a>
<a id="trace-43025"></a>
<a id="trace-43035"></a>
<a id="trace-43037"></a>
<a id="trace-43050"></a>
<a id="trace-43052"></a>
<a id="trace-43056"></a>
<a id="trace-43058"></a>
<a id="trace-43129"></a>
<a id="trace-43131"></a>
<a id="trace-43135"></a>
<a id="trace-43137"></a>
<a id="trace-43161"></a>
<a id="trace-43163"></a>
<a id="trace-43175"></a>
<a id="trace-43177"></a>
<a id="trace-43199"></a>
<a id="trace-43201"></a>
<a id="trace-43204"></a>
<a id="trace-43206"></a>
<a id="trace-43216"></a>
<a id="trace-43218"></a>
<a id="trace-43232"></a>
<a id="trace-43234"></a>
<a id="trace-43244"></a>
<a id="trace-43246"></a>
<a id="trace-43251"></a>
<a id="trace-43253"></a>
<a id="trace-43319"></a>
<a id="trace-43321"></a>
<a id="trace-43323"></a>
<a id="trace-43325"></a>
<a id="trace-43335"></a>
<a id="trace-43337"></a>
<a id="trace-43346"></a>
<a id="trace-43348"></a>
<a id="trace-43365"></a>
<a id="trace-43367"></a>
<a id="trace-43379"></a>
<a id="trace-43381"></a>
<a id="trace-43396"></a>
<a id="trace-43398"></a>
<a id="trace-43404"></a>
<a id="trace-43406"></a>
<a id="trace-43414"></a>
<a id="trace-43416"></a>
<a id="trace-43420"></a>
<a id="trace-43422"></a>
<a id="trace-43488"></a>
<a id="trace-43490"></a>
<a id="trace-43493"></a>
<a id="trace-43495"></a>
<a id="trace-43508"></a>
<a id="trace-43510"></a>
<a id="trace-43516"></a>
<a id="trace-43518"></a>
<a id="trace-43534"></a>
<a id="trace-43536"></a>
<a id="trace-43540"></a>
<a id="trace-43542"></a>
<a id="trace-43556"></a>
<a id="trace-43558"></a>
<a id="trace-43621"></a>
<a id="trace-43623"></a>
<a id="trace-43637"></a>
<a id="trace-43639"></a>
<a id="trace-43642"></a>
<a id="trace-43644"></a>
<a id="trace-43717"></a>
<a id="trace-43719"></a>
<a id="trace-43721"></a>
<a id="trace-43723"></a>
<a id="trace-43736"></a>
<a id="trace-43738"></a>
<a id="trace-43743"></a>
<a id="trace-43745"></a>
<a id="trace-43782"></a>
<a id="trace-43784"></a>
<a id="trace-43792"></a>
<a id="trace-43794"></a>
<a id="trace-43809"></a>
<a id="trace-43811"></a>
<a id="trace-43821"></a>
<a id="trace-43823"></a>
<a id="trace-43832"></a>
<a id="trace-43834"></a>
<a id="trace-43841"></a>
<a id="trace-43843"></a>
<a id="trace-43910"></a>
<a id="trace-43912"></a>
<a id="trace-43917"></a>
<a id="trace-43919"></a>
<a id="trace-43931"></a>
<a id="trace-43933"></a>
<a id="trace-43943"></a>
<a id="trace-43945"></a>
<a id="trace-43959"></a>
<a id="trace-43961"></a>
<a id="trace-43967"></a>
<a id="trace-43969"></a>
<a id="trace-43982"></a>
<a id="trace-43984"></a>
<a id="trace-43992"></a>
<a id="trace-43994"></a>
<a id="trace-44004"></a>
<a id="trace-44006"></a>
<a id="trace-44016"></a>
<a id="trace-44018"></a>
- 1.60s–359.80s (×1426), actor 37, squad 4 (trace 686): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3989038537848636, 'next_transition': 713}.
<a id="trace-942"></a>
<a id="trace-944"></a>
<a id="trace-975"></a>
<a id="trace-977"></a>
<a id="trace-1006"></a>
<a id="trace-1008"></a>
<a id="trace-1051"></a>
<a id="trace-1053"></a>
<a id="trace-1073"></a>
<a id="trace-1075"></a>
<a id="trace-1108"></a>
<a id="trace-1110"></a>
<a id="trace-1142"></a>
<a id="trace-1144"></a>
<a id="trace-1182"></a>
<a id="trace-1184"></a>
<a id="trace-1312"></a>
<a id="trace-1314"></a>
<a id="trace-1334"></a>
<a id="trace-1336"></a>
<a id="trace-1354"></a>
<a id="trace-1356"></a>
- 5.20s–11.20s (×22), actor 5, squad 0 (trace 942): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 874. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600097816038809, 'next_transition': 975}.
<a id="trace-142"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 142): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5764903618200308, 'next_transition': 1391}.
<a id="trace-143"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 143): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0198252098905507, 'next_transition': 1836}.
<a id="trace-1362"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1362): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1362. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5764903618200308, 'next_transition': 1391}.
<a id="trace-1363"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1363): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1363. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5764903618200308, 'next_transition': 1391}.
<a id="trace-1364"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1364): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1364. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0198252098905507, 'next_transition': 1836}.
<a id="trace-1365"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1365): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1365. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0198252098905507, 'next_transition': 1836}.
<a id="trace-1391"></a>
<a id="trace-1393"></a>
<a id="trace-1424"></a>
<a id="trace-1426"></a>
<a id="trace-1449"></a>
<a id="trace-1451"></a>
- 11.70s–12.70s (×6), actor 5, squad 0 (trace 1391): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1365. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36283351056701046, 'next_transition': 1424}.
<a id="trace-1458"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1458): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1233. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725091777417795, 'next_transition': 1804}.
<a id="trace-1459"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1459): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1233. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725091777417795, 'next_transition': 1804}.
<a id="trace-1804"></a>
<a id="trace-1806"></a>
<a id="trace-2200"></a>
<a id="trace-2202"></a>
<a id="trace-2319"></a>
<a id="trace-2321"></a>
<a id="trace-2359"></a>
<a id="trace-2361"></a>
<a id="trace-2394"></a>
<a id="trace-2396"></a>
- 13.20s–16.25s (×10), actor 5, squad 0 (trace 1804): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1365. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3978118690917825, 'next_transition': 2200}.
<a id="trace-1836"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1836): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1241. Next observer evidence: {'until': 18, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.501272346715826, 'next_transition': 2918}.
<a id="trace-1837"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1837): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1241. Next observer evidence: {'until': 18, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.501272346715826, 'next_transition': 2918}.
<a id="trace-2435"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2435): received platoon directive. Knowledge: actor memory at 15.00s, trace 2243. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3927125752297516, 'next_transition': 2844}.
<a id="trace-2844"></a>
<a id="trace-2846"></a>
<a id="trace-3740"></a>
<a id="trace-3742"></a>
- 17.25s–18.75s (×4), actor 5, squad 0 (trace 2844): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2248. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.227412629082642, 'next_transition': 3740}.
<a id="trace-2918"></a>
- 18.10s–18.10s (×1), actor 8, squad 1 (trace 2918): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2251. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299840714817593, 'next_transition': 3337}.
<a id="trace-2919"></a>
- 18.10s–18.10s (×1), actor 8, squad 1 (trace 2919): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2251. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299840714817593, 'next_transition': 3337}.
<a id="trace-2920"></a>
<a id="trace-3337"></a>
<a id="trace-4176"></a>
<a id="trace-6294"></a>
<a id="trace-7312"></a>
- 18.10s–22.20s (×5), actor 8, squad 1 (trace 2920): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2251. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299840714817593, 'next_transition': 3337}.
<a id="trace-3747"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 3747): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2243. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5561024804142017, 'next_transition': 4567}.
<a id="trace-3748"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 3748): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2243. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5561024804142017, 'next_transition': 4567}.
<a id="trace-3749"></a>
<a id="trace-4567"></a>
- 18.75s–19.00s (×2), actor 0, squad 0 (trace 3749): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2243. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5561024804142017, 'next_transition': 4567}.
<a id="trace-5002"></a>
<a id="trace-5004"></a>
- 19.25s–19.25s (×2), actor 5, squad 0 (trace 5002): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2248. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3037230970898595, 'next_transition': 5654}.
<a id="trace-5009"></a>
- 19.25s–19.25s (×1), actor 0, squad 0 (trace 5009): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2243. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3037230970898595, 'next_transition': 5654}.
<a id="trace-5654"></a>
<a id="trace-5656"></a>
<a id="trace-5755"></a>
<a id="trace-5757"></a>
- 20.25s–20.75s (×4), actor 5, squad 0 (trace 5654): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5542. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7781256534924286, 'next_transition': 5755}.
<a id="trace-5782"></a>
- 21.00s–21.00s (×1), actor 0, squad 0 (trace 5782): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 5537. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725092526566803, 'next_transition': 6266}.
<a id="trace-6266"></a>
<a id="trace-6268"></a>
- 21.25s–21.25s (×2), actor 5, squad 0 (trace 6266): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5542. Next observer evidence: {'until': 21.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47247818917335527, 'next_transition': 6746}.
<a id="trace-6746"></a>
- 21.50s–21.50s (×1), actor 0, squad 0 (trace 6746): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 5537. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725092526566804, 'next_transition': 7238}.
<a id="trace-7238"></a>
<a id="trace-7240"></a>
<a id="trace-7757"></a>
<a id="trace-7759"></a>
- 21.75s–22.25s (×4), actor 5, squad 0 (trace 7238): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5542. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9849693155949901, 'next_transition': 7757}.
<a id="trace-7764"></a>
- 22.25s–22.25s (×1), actor 0, squad 0 (trace 7764): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 5537. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8651595385463433, 'next_transition': 8385}.
<a id="trace-8385"></a>
<a id="trace-8387"></a>
<a id="trace-8463"></a>
<a id="trace-8465"></a>
<a id="trace-8512"></a>
<a id="trace-8514"></a>
<a id="trace-8637"></a>
<a id="trace-8639"></a>
- 23.75s–25.75s (×8), actor 5, squad 0 (trace 8385): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5542. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087580824513355, 'next_transition': 8463}.
<a id="trace-8649"></a>
- 25.85s–25.85s (×1), actor 0, squad 0 (trace 8649): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 8543. Next observer evidence: {'until': 26, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14818911639361998, 'next_transition': 8664}.
<a id="trace-8664"></a>
- 26.10s–26.10s (×1), actor 0, squad 0 (trace 8664): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 8543. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574997279645731, 'next_transition': 9450}.
<a id="trace-9063"></a>
- 26.10s–26.10s (×1), actor 8, squad 1 (trace 9063): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 8551. Next observer evidence: {'until': 38.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.9676124671621515, 'next_transition': 13724}.
<a id="trace-9064"></a>
- 26.10s–26.10s (×1), actor 8, squad 1 (trace 9064): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 8551. Next observer evidence: {'until': 38.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.9676124671621515, 'next_transition': 13724}.
<a id="trace-9450"></a>
<a id="trace-9452"></a>
<a id="trace-9512"></a>
<a id="trace-9514"></a>
<a id="trace-9550"></a>
<a id="trace-9552"></a>
<a id="trace-9598"></a>
<a id="trace-9600"></a>
<a id="trace-9659"></a>
<a id="trace-9661"></a>
<a id="trace-9713"></a>
<a id="trace-9715"></a>
- 26.25s–29.25s (×12), actor 5, squad 0 (trace 9450): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 8548. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5799729969934784, 'next_transition': 9512}.
<a id="trace-9752"></a>
- 29.70s–29.70s (×1), actor 0, squad 0 (trace 9752): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 8543. Next observer evidence: None.
<a id="trace-9754"></a>
- 29.70s–29.70s (×1), actor 0, squad 0 (trace 9754): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 25.00s, trace 8543. Next observer evidence: None.
<a id="trace-12410"></a>
- 29.70s–29.70s (×1), actor 0, squad 0 (trace 12410): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 25.00s, trace 8543. Next observer evidence: None.
<a id="trace-12411"></a>
- 29.70s–29.70s (×1), actor 0, squad 0 (trace 12411): MoveTactically. Knowledge: actor memory at 25.00s, trace 8543. Next observer evidence: None.
<a id="trace-12412"></a>
- 29.70s–29.70s (×1), actor 0, squad 0 (trace 12412): contact cover complete: assessment resumes closure. Knowledge: actor memory at 25.00s, trace 8543. Next observer evidence: None.
<a id="trace-12576"></a>
<a id="trace-12578"></a>
<a id="trace-12687"></a>
<a id="trace-12689"></a>
<a id="trace-12734"></a>
<a id="trace-12736"></a>
<a id="trace-12789"></a>
<a id="trace-12791"></a>
<a id="trace-12805"></a>
<a id="trace-12807"></a>
<a id="trace-12873"></a>
<a id="trace-12875"></a>
<a id="trace-12934"></a>
<a id="trace-12936"></a>
<a id="trace-12955"></a>
<a id="trace-12957"></a>
<a id="trace-13091"></a>
<a id="trace-13093"></a>
<a id="trace-13123"></a>
<a id="trace-13125"></a>
- 29.75s–36.25s (×20), actor 5, squad 0 (trace 12576): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 8548. Next observer evidence: {'until': 30.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2362498806911075, 'next_transition': 12687}.
<a id="trace-13151"></a>
- 36.55s–36.55s (×1), actor 0, squad 0 (trace 13151): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 12991. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3682268224622829, 'next_transition': 13606}.
<a id="trace-13152"></a>
- 36.55s–36.55s (×1), actor 0, squad 0 (trace 13152): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 12991. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3682268224622829, 'next_transition': 13606}.
<a id="trace-13606"></a>
<a id="trace-13608"></a>
<a id="trace-13700"></a>
<a id="trace-13702"></a>
<a id="trace-13889"></a>
<a id="trace-13891"></a>
- 37.25s–38.75s (×6), actor 5, squad 0 (trace 13606): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 12996. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2832173491535537, 'next_transition': 13700}.
<a id="trace-13724"></a>
- 38.45s–38.45s (×1), actor 8, squad 1 (trace 13724): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 12999. Next observer evidence: {'until': 45.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 9.565841673724671, 'next_transition': 17584}.
<a id="trace-13725"></a>
- 38.45s–38.45s (×1), actor 8, squad 1 (trace 13725): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 12999. Next observer evidence: {'until': 45.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 9.565841673724671, 'next_transition': 17584}.
<a id="trace-917"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 917): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13901"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 13901): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.726058 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 13901. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5379766605362016, 'next_transition': 13932}.
<a id="trace-13902"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 13902): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.726058 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 13902. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5379766605362016, 'next_transition': 13932}.
<a id="trace-13932"></a>
<a id="trace-13934"></a>
<a id="trace-13981"></a>
<a id="trace-13983"></a>
- 39.25s–39.75s (×4), actor 5, squad 0 (trace 13932): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 13902. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4567897180617263, 'next_transition': 13981}.
<a id="trace-14108"></a>
- 40.25s–40.25s (×1), actor 0, squad 0 (trace 14108): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 14009. Next observer evidence: {'until': 40.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4132258667605189, 'next_transition': 14149}.
<a id="trace-14149"></a>
<a id="trace-14151"></a>
<a id="trace-14240"></a>
<a id="trace-14242"></a>
<a id="trace-14290"></a>
<a id="trace-14292"></a>
<a id="trace-14323"></a>
<a id="trace-14325"></a>
<a id="trace-14354"></a>
<a id="trace-14356"></a>
<a id="trace-14371"></a>
<a id="trace-14373"></a>
<a id="trace-14398"></a>
<a id="trace-14400"></a>
<a id="trace-14419"></a>
<a id="trace-14421"></a>
- 40.75s–44.75s (×16), actor 5, squad 0 (trace 14149): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 14014. Next observer evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9088250027397629, 'next_transition': 14240}.
<a id="trace-14431"></a>
- 44.85s–44.85s (×1), actor 0, squad 0 (trace 14431): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 14009. Next observer evidence: {'until': 46.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.3272030271256219, 'next_transition': 17599}.
<a id="trace-17109"></a>
- 44.85s–44.85s (×1), actor 0, squad 0 (trace 17109): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 14009. Next observer evidence: {'until': 46.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.3272030271256219, 'next_transition': 17599}.
<a id="trace-17110"></a>
- 44.85s–44.85s (×1), actor 0, squad 0 (trace 17110): MoveTactically. Knowledge: actor memory at 40.00s, trace 14009. Next observer evidence: {'until': 46.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.3272030271256219, 'next_transition': 17599}.
<a id="trace-17111"></a>
- 44.85s–44.85s (×1), actor 0, squad 0 (trace 17111): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 14009. Next observer evidence: {'until': 46.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.3272030271256219, 'next_transition': 17599}.
<a id="trace-17584"></a>
- 45.85s–45.85s (×1), actor 8, squad 1 (trace 17584): NeedSupport. Knowledge: actor memory at 45.00s, trace 17487. Next observer evidence: {'until': 65.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 15.06638086122674, 'next_transition': 19935}.
<a id="trace-17599"></a>
<a id="trace-17601"></a>
<a id="trace-17625"></a>
<a id="trace-17627"></a>
<a id="trace-17668"></a>
<a id="trace-17670"></a>
- 46.25s–47.75s (×6), actor 5, squad 0 (trace 17599): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 17484. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4163988572006893, 'next_transition': 17625}.
<a id="trace-17680"></a>
- 47.95s–47.95s (×1), actor 1, squad 0 (trace 17680): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 17480. Next observer evidence: {'until': 48.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21611376517735023, 'next_transition': 18133}.
<a id="trace-17681"></a>
- 47.95s–47.95s (×1), actor 1, squad 0 (trace 17681): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 17480. Next observer evidence: {'until': 48.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21611376517735023, 'next_transition': 18133}.
<a id="trace-18133"></a>
<a id="trace-18135"></a>
<a id="trace-18167"></a>
<a id="trace-18169"></a>
<a id="trace-18297"></a>
<a id="trace-18299"></a>
- 48.25s–50.25s (×6), actor 5, squad 0 (trace 18133): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 17484. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18216858534537142, 'next_transition': 18167}.
<a id="trace-18366"></a>
- 51.55s–51.55s (×1), actor 1, squad 0 (trace 18366): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 18224. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1933141757791077, 'next_transition': 18394}.
<a id="trace-18368"></a>
- 51.55s–51.55s (×1), actor 1, squad 0 (trace 18368): NeedSupport. Knowledge: actor memory at 50.00s, trace 18224. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1933141757791077, 'next_transition': 18394}.
<a id="trace-18394"></a>
<a id="trace-18455"></a>
<a id="trace-18481"></a>
- 51.75s–53.25s (×3), actor 5, squad 0 (trace 18394): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 18228. Next observer evidence: {'until': 52.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.6111134372796415, 'next_transition': 18455}.
<a id="trace-18497"></a>
- 53.35s–53.35s (×1), actor 1, squad 0 (trace 18497): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 50.00s, trace 18224. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5712104262881043, 'next_transition': 18510}.
<a id="trace-18510"></a>
- 53.60s–53.60s (×1), actor 1, squad 0 (trace 18510): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 18224. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.499234624879632, 'next_transition': 19069}.
<a id="trace-18515"></a>
- 53.60s–53.60s (×1), actor 1, squad 0 (trace 18515): MoveTactically. Knowledge: actor memory at 50.00s, trace 18224. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.499234624879632, 'next_transition': 19069}.
<a id="trace-18516"></a>
- 53.60s–53.60s (×1), actor 1, squad 0 (trace 18516): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 50.00s, trace 18224. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.499234624879632, 'next_transition': 19069}.
<a id="trace-19069"></a>
<a id="trace-19071"></a>
<a id="trace-19106"></a>
<a id="trace-19108"></a>
<a id="trace-19133"></a>
<a id="trace-19135"></a>
<a id="trace-19179"></a>
<a id="trace-19181"></a>
<a id="trace-19234"></a>
<a id="trace-19236"></a>
<a id="trace-19258"></a>
<a id="trace-19260"></a>
<a id="trace-19278"></a>
<a id="trace-19280"></a>
<a id="trace-19294"></a>
<a id="trace-19296"></a>
<a id="trace-19405"></a>
<a id="trace-19407"></a>
<a id="trace-19429"></a>
<a id="trace-19431"></a>
- 55.25s–61.25s (×20), actor 5, squad 0 (trace 19069): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 18991. Next observer evidence: {'until': 55.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08565948800852215, 'next_transition': 19106}.
<a id="trace-19462"></a>
- 62.10s–62.10s (×1), actor 1, squad 0 (trace 19462): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 60.00s, trace 19313. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519920629830982, 'next_transition': 19727}.
<a id="trace-19463"></a>
- 62.10s–62.10s (×1), actor 1, squad 0 (trace 19463): rearward bound: one stationary suppressing element. Knowledge: actor memory at 60.00s, trace 19313. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519920629830982, 'next_transition': 19727}.
<a id="trace-19727"></a>
<a id="trace-19729"></a>
<a id="trace-19792"></a>
<a id="trace-19794"></a>
<a id="trace-19815"></a>
<a id="trace-19817"></a>
<a id="trace-19832"></a>
<a id="trace-19834"></a>
<a id="trace-20004"></a>
<a id="trace-20006"></a>
<a id="trace-20031"></a>
<a id="trace-20033"></a>
- 62.25s–66.25s (×12), actor 5, squad 0 (trace 19727): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 19316. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1884365781441293, 'next_transition': 19792}.
<a id="trace-19935"></a>
- 65.25s–65.25s (×1), actor 8, squad 1 (trace 19935): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 19860. Next observer evidence: {'until': 77.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.500018770809843, 'next_transition': 20887}.
<a id="trace-19942"></a>
- 65.25s–65.25s (×1), actor 8, squad 1 (trace 19942): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 19860. Next observer evidence: {'until': 77.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.500018770809843, 'next_transition': 20887}.
<a id="trace-1306"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (events line 1306): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20045"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 20045): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.323785 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 20045. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3325382036500457, 'next_transition': 20093}.
<a id="trace-20046"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 20046): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.323785 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 20046. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3325382036500457, 'next_transition': 20093}.
<a id="trace-20093"></a>
<a id="trace-20095"></a>
<a id="trace-20114"></a>
<a id="trace-20116"></a>
<a id="trace-20142"></a>
<a id="trace-20144"></a>
<a id="trace-20180"></a>
<a id="trace-20182"></a>
<a id="trace-20197"></a>
<a id="trace-20199"></a>
<a id="trace-20281"></a>
<a id="trace-20283"></a>
<a id="trace-20302"></a>
<a id="trace-20304"></a>
<a id="trace-20328"></a>
<a id="trace-20330"></a>
<a id="trace-20371"></a>
<a id="trace-20373"></a>
<a id="trace-20400"></a>
<a id="trace-20402"></a>
<a id="trace-20518"></a>
<a id="trace-20520"></a>
<a id="trace-20559"></a>
<a id="trace-20561"></a>
<a id="trace-20610"></a>
<a id="trace-20612"></a>
<a id="trace-20720"></a>
<a id="trace-20722"></a>
<a id="trace-20758"></a>
<a id="trace-20760"></a>
<a id="trace-20807"></a>
<a id="trace-20809"></a>
<a id="trace-20840"></a>
<a id="trace-20842"></a>
<a id="trace-20867"></a>
<a id="trace-20869"></a>
<a id="trace-21050"></a>
<a id="trace-21052"></a>
<a id="trace-21100"></a>
<a id="trace-21102"></a>
- 67.25s–78.75s (×40), actor 5, squad 0 (trace 20093): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.45s, trace 20046. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6854325637364909, 'next_transition': 20114}.
<a id="trace-20887"></a>
- 77.50s–77.50s (×1), actor 8, squad 1 (trace 20887): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 20640. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.94526196952686, 'next_transition': 1511}.
<a id="trace-20888"></a>
- 77.50s–77.50s (×1), actor 8, squad 1 (trace 20888): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 20640. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.94526196952686, 'next_transition': 1511}.
<a id="trace-21117"></a>
- 79.05s–79.05s (×1), actor 1, squad 0 (trace 21117): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 20635. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600060268109844, 'next_transition': 21259}.
<a id="trace-21139"></a>
- 79.05s–79.05s (×1), actor 1, squad 0 (trace 21139): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 20635. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600060268109844, 'next_transition': 21259}.
<a id="trace-21259"></a>
<a id="trace-21261"></a>
<a id="trace-21278"></a>
<a id="trace-21280"></a>
<a id="trace-21390"></a>
<a id="trace-21392"></a>
<a id="trace-21418"></a>
<a id="trace-21420"></a>
<a id="trace-21447"></a>
<a id="trace-21449"></a>
<a id="trace-21475"></a>
<a id="trace-21477"></a>
<a id="trace-21516"></a>
<a id="trace-21518"></a>
<a id="trace-21543"></a>
<a id="trace-21545"></a>
<a id="trace-21578"></a>
<a id="trace-21580"></a>
<a id="trace-21598"></a>
<a id="trace-21600"></a>
<a id="trace-21644"></a>
<a id="trace-21646"></a>
<a id="trace-21753"></a>
<a id="trace-21755"></a>
<a id="trace-21794"></a>
<a id="trace-21796"></a>
- 79.25s–86.25s (×26), actor 5, squad 0 (trace 21259): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 20638. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519996875315523, 'next_transition': 21278}.
<a id="trace-1511"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (events line 1511): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21400"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 21400): renew committed intent (75 s lifetime). Knowledge: actor memory at 80.30s, trace 21400. Next observer evidence: {'until': 81.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.3058104909372767, 'next_transition': 21457}.
<a id="trace-21457"></a>
- 81.40s–81.40s (×1), actor 8, squad 1 (trace 21457): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 80.00s, trace 21305. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.156175645975251, 'next_transition': 21804}.
<a id="trace-21804"></a>
- 86.35s–86.35s (×1), actor 8, squad 1 (trace 21804): MoveTactically. Knowledge: actor memory at 85.00s, trace 21685. Next observer evidence: {'until': 87, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3969149014666113, 'next_transition': 21856}.
<a id="trace-21805"></a>
- 86.35s–86.35s (×1), actor 8, squad 1 (trace 21805): received platoon directive. Knowledge: actor memory at 85.00s, trace 21685. Next observer evidence: {'until': 87, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3969149014666113, 'next_transition': 21856}.
<a id="trace-21818"></a>
- 86.40s–86.40s (×1), actor 1, squad 0 (trace 21818): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 21680. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37799385579521905, 'next_transition': 21826}.
<a id="trace-21826"></a>
<a id="trace-21828"></a>
<a id="trace-22023"></a>
<a id="trace-22025"></a>
<a id="trace-22049"></a>
<a id="trace-22051"></a>
<a id="trace-22084"></a>
<a id="trace-22086"></a>
<a id="trace-22157"></a>
<a id="trace-22159"></a>
<a id="trace-22183"></a>
<a id="trace-22185"></a>
<a id="trace-22302"></a>
<a id="trace-22304"></a>
<a id="trace-22345"></a>
<a id="trace-22347"></a>
<a id="trace-22374"></a>
<a id="trace-22376"></a>
- 86.75s–92.25s (×18), actor 5, squad 0 (trace 21826): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 21683. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9765098304127099, 'next_transition': 22023}.
<a id="trace-21856"></a>
- 87.10s–87.10s (×1), actor 8, squad 1 (trace 21856): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 21685. Next observer evidence: {'until': 95.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.370734067063916, 'next_transition': 22618}.
<a id="trace-22435"></a>
- 93.85s–93.85s (×1), actor 1, squad 0 (trace 22435): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 22203. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24375514481750038, 'next_transition': 22502}.
<a id="trace-22436"></a>
- 93.85s–93.85s (×1), actor 1, squad 0 (trace 22436): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 22203. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24375514481750038, 'next_transition': 22502}.
<a id="trace-22502"></a>
<a id="trace-22504"></a>
<a id="trace-22606"></a>
<a id="trace-22650"></a>
<a id="trace-22753"></a>
- 94.25s–97.25s (×5), actor 5, squad 0 (trace 22502): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 22206. Next observer evidence: {'until': 95.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2551615341798213, 'next_transition': 22606}.
<a id="trace-22618"></a>
- 95.50s–95.50s (×1), actor 8, squad 1 (trace 22618): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 95.00s, trace 22540. Next observer evidence: {'until': 96.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22664}.
<a id="trace-22664"></a>
- 96.50s–96.50s (×1), actor 8, squad 1 (trace 22664): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 22540. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.999998002389772, 'next_transition': 24760}.
<a id="trace-22769"></a>
- 97.45s–97.45s (×1), actor 1, squad 0 (trace 22769): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 95.00s, trace 22536. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45360391378382103, 'next_transition': 22800}.
<a id="trace-22800"></a>
<a id="trace-22802"></a>
- 98.25s–98.25s (×2), actor 5, squad 0 (trace 22800): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 22539. Next observer evidence: {'until': 98.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05669418510746971, 'next_transition': 22815}.
<a id="trace-22815"></a>
- 98.40s–98.40s (×1), actor 1, squad 0 (trace 22815): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 95.00s, trace 22536. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45360391378382103, 'next_transition': 24404}.
<a id="trace-22816"></a>
- 98.40s–98.40s (×1), actor 1, squad 0 (trace 22816): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 95.00s, trace 22536. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45360391378382103, 'next_transition': 24404}.
<a id="trace-24404"></a>
<a id="trace-24514"></a>
<a id="trace-24549"></a>
<a id="trace-24551"></a>
<a id="trace-24585"></a>
<a id="trace-24587"></a>
<a id="trace-24614"></a>
<a id="trace-24616"></a>
<a id="trace-24639"></a>
<a id="trace-24641"></a>
<a id="trace-24728"></a>
<a id="trace-24730"></a>
<a id="trace-24750"></a>
<a id="trace-24752"></a>
<a id="trace-24783"></a>
- 99.25s–107.25s (×15), actor 5, squad 0 (trace 24404): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 22539. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1591865188096155, 'next_transition': 24514}.
<a id="trace-24760"></a>
- 106.30s–106.30s (×1), actor 8, squad 1 (trace 24760): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 105.00s, trace 24669. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24790}.
<a id="trace-24790"></a>
- 107.30s–107.30s (×1), actor 8, squad 1 (trace 24790): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 105.00s, trace 24669. Next observer evidence: {'until': 107.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17242941809621665, 'next_transition': 1771}.
<a id="trace-1770"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (events line 1770): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300038994156418, 'next_transition': 24981}.
<a id="trace-1771"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (events line 1771): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.090904017757653, 'next_transition': 25251}.
<a id="trace-24966"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (trace 24966): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.280348 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 24966. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300038994156418, 'next_transition': 24981}.
<a id="trace-24967"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (trace 24967): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.280348 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 24967. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300038994156418, 'next_transition': 24981}.
<a id="trace-24968"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 24968): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.280348 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 24968. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.090904017757653, 'next_transition': 25251}.
<a id="trace-24969"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 24969): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.280348 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 24969. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.090904017757653, 'next_transition': 25251}.
<a id="trace-24981"></a>
<a id="trace-25125"></a>
<a id="trace-25127"></a>
<a id="trace-25157"></a>
<a id="trace-25159"></a>
<a id="trace-25196"></a>
<a id="trace-25198"></a>
<a id="trace-27600"></a>
<a id="trace-27602"></a>
<a id="trace-27659"></a>
<a id="trace-27661"></a>
<a id="trace-27826"></a>
<a id="trace-27828"></a>
<a id="trace-27912"></a>
<a id="trace-27914"></a>
<a id="trace-28003"></a>
<a id="trace-28005"></a>
<a id="trace-28080"></a>
<a id="trace-28082"></a>
<a id="trace-28146"></a>
<a id="trace-28148"></a>
<a id="trace-28294"></a>
<a id="trace-28296"></a>
<a id="trace-28348"></a>
<a id="trace-28350"></a>
<a id="trace-28407"></a>
<a id="trace-28409"></a>
<a id="trace-28439"></a>
<a id="trace-28441"></a>
- 108.25s–123.25s (×29), actor 5, squad 0 (trace 24981): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 107.95s, trace 24969. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.929303807066062, 'next_transition': 25125}.
<a id="trace-25251"></a>
- 113.20s–113.20s (×1), actor 8, squad 1 (trace 25251): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 110.00s, trace 25059. Next observer evidence: {'until': 121.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.671042814978673, 'next_transition': 2057}.
<a id="trace-25252"></a>
- 113.20s–113.20s (×1), actor 8, squad 1 (trace 25252): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 110.00s, trace 25059. Next observer evidence: {'until': 121.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.671042814978673, 'next_transition': 2057}.
<a id="trace-2057"></a>
- 121.80s–121.80s (×1), actor 5, squad 1 (events line 2057): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 129.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 11.129574828136159, 'next_transition': 28846}.
<a id="trace-28383"></a>
- 121.80s–121.80s (×1), actor 5, squad 1 (trace 28383): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.266147 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 121.80s, trace 28383. Next observer evidence: {'until': 129.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 11.129574828136159, 'next_transition': 28846}.
<a id="trace-28384"></a>
- 121.80s–121.80s (×1), actor 5, squad 1 (trace 28384): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.266147 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 121.80s, trace 28384. Next observer evidence: {'until': 129.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 11.129574828136159, 'next_transition': 28846}.
<a id="trace-28461"></a>
- 123.70s–123.70s (×1), actor 1, squad 0 (trace 28461): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 120.00s, trace 28215. Next observer evidence: None.
<a id="trace-28462"></a>
- 123.70s–123.70s (×1), actor 1, squad 0 (trace 28462): NeedSupport. Knowledge: actor memory at 120.00s, trace 28215. Next observer evidence: None.
<a id="trace-28477"></a>
- 123.75s–123.75s (×1), actor 1, squad 0 (trace 28477): Reorganise: completed/failed drill. Knowledge: actor memory at 120.00s, trace 28215. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.07833947054075346, 'next_transition': 28608}.
<a id="trace-28480"></a>
- 123.75s–123.75s (×1), actor 1, squad 0 (trace 28480): ReactToContact: cover and return fire. Knowledge: actor memory at 120.00s, trace 28215. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.07833947054075346, 'next_transition': 28608}.
<a id="trace-28481"></a>
- 123.75s–123.75s (×1), actor 1, squad 0 (trace 28481): Reorganise complete: known contact. Knowledge: actor memory at 120.00s, trace 28215. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.07833947054075346, 'next_transition': 28608}.
<a id="trace-28608"></a>
<a id="trace-28610"></a>
<a id="trace-28705"></a>
<a id="trace-28707"></a>
- 124.25s–125.25s (×4), actor 5, squad 0 (trace 28608): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 121.80s, trace 28384. Next observer evidence: {'until': 125.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.5749953817392617, 'next_transition': 28705}.
<a id="trace-28729"></a>
- 126.15s–126.15s (×1), actor 1, squad 0 (trace 28729): new contact inside 100 m. Knowledge: actor memory at 125.00s, trace 28642. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149848964633073, 'next_transition': 28735}.
<a id="trace-28735"></a>
<a id="trace-28737"></a>
<a id="trace-28768"></a>
<a id="trace-28791"></a>
<a id="trace-28793"></a>
<a id="trace-28827"></a>
<a id="trace-28829"></a>
- 126.25s–129.30s (×7), actor 5, squad 0 (trace 28735): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 28643. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749811506808584, 'next_transition': 28768}.
<a id="trace-28846"></a>
- 129.70s–129.70s (×1), actor 8, squad 1 (trace 28846): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 125.00s, trace 28644. Next observer evidence: {'until': 130, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31665}.
<a id="trace-28847"></a>
- 129.70s–129.70s (×1), actor 8, squad 1 (trace 28847): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 125.00s, trace 28644. Next observer evidence: {'until': 130, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31665}.
<a id="trace-31577"></a>
- 129.75s–129.75s (×1), actor 1, squad 0 (trace 31577): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 125.00s, trace 28642. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449886904085159, 'next_transition': 31820}.
<a id="trace-31580"></a>
- 129.75s–129.75s (×1), actor 1, squad 0 (trace 31580): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 125.00s, trace 28642. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449886904085159, 'next_transition': 31820}.
<a id="trace-31581"></a>
- 129.75s–129.75s (×1), actor 1, squad 0 (trace 31581): rearward bound: one stationary suppressing element. Knowledge: actor memory at 125.00s, trace 28642. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449886904085159, 'next_transition': 31820}.
<a id="trace-31665"></a>
- 130.00s–130.00s (×1), actor 8, squad 1 (trace 31665): MoveTactically. Knowledge: actor memory at 130.00s, trace 31647. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.48385304055407, 'next_transition': 32101}.
<a id="trace-31666"></a>
- 130.00s–130.00s (×1), actor 8, squad 1 (trace 31666): received platoon directive. Knowledge: actor memory at 130.00s, trace 31647. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.48385304055407, 'next_transition': 32101}.
<a id="trace-31820"></a>
<a id="trace-31858"></a>
<a id="trace-31902"></a>
<a id="trace-31904"></a>
- 130.30s–132.30s (×4), actor 5, squad 0 (trace 31820): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 31646. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1986874461885275, 'next_transition': 31858}.
<a id="trace-31918"></a>
- 132.40s–132.40s (×1), actor 1, squad 0 (trace 31918): NeedSupport. Knowledge: actor memory at 130.00s, trace 31645. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1646383165003327, 'next_transition': 31950}.
<a id="trace-31950"></a>
<a id="trace-31984"></a>
<a id="trace-31986"></a>
<a id="trace-32288"></a>
<a id="trace-32329"></a>
<a id="trace-32331"></a>
<a id="trace-32381"></a>
<a id="trace-32383"></a>
<a id="trace-32651"></a>
<a id="trace-32746"></a>
<a id="trace-32748"></a>
<a id="trace-32791"></a>
<a id="trace-32793"></a>
<a id="trace-32858"></a>
<a id="trace-32898"></a>
<a id="trace-32987"></a>
- 133.30s–145.30s (×16), actor 5, squad 0 (trace 31950): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 31646. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7089459842987513, 'next_transition': 31984}.
<a id="trace-32101"></a>
- 135.90s–135.90s (×1), actor 8, squad 1 (trace 32101): ReactToContact: cover and return fire. Knowledge: actor memory at 135.00s, trace 32016. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4155067419703998, 'next_transition': 32417}.
<a id="trace-32102"></a>
- 135.90s–135.90s (×1), actor 8, squad 1 (trace 32102): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 135.00s, trace 32016. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4155067419703998, 'next_transition': 32417}.
<a id="trace-32417"></a>
- 139.25s–139.25s (×1), actor 8, squad 1 (trace 32417): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 135.00s, trace 32016. Next observer evidence: {'until': 151.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 10.567188906124223, 'next_transition': 33211}.
<a id="trace-32420"></a>
- 139.25s–139.25s (×1), actor 8, squad 1 (trace 32420): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 135.00s, trace 32016. Next observer evidence: {'until': 151.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 10.567188906124223, 'next_transition': 33211}.
<a id="trace-32421"></a>
- 139.25s–139.25s (×1), actor 8, squad 1 (trace 32421): rearward bound: one stationary suppressing element. Knowledge: actor memory at 135.00s, trace 32016. Next observer evidence: {'until': 151.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 10.567188906124223, 'next_transition': 33211}.
<a id="trace-33002"></a>
- 145.65s–145.65s (×1), actor 1, squad 0 (trace 33002): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 145.00s, trace 32925. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449871123459841, 'next_transition': 33013}.
<a id="trace-33003"></a>
- 145.65s–145.65s (×1), actor 1, squad 0 (trace 33003): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 145.00s, trace 32925. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449871123459841, 'next_transition': 33013}.
<a id="trace-33013"></a>
<a id="trace-33087"></a>
<a id="trace-33089"></a>
- 146.30s–149.30s (×3), actor 5, squad 0 (trace 33013): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 32926. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1262012157836767, 'next_transition': 33087}.
<a id="trace-33106"></a>
- 149.80s–149.80s (×1), actor 1, squad 0 (trace 33106): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 145.00s, trace 32925. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33176}.
<a id="trace-33176"></a>
<a id="trace-33202"></a>
<a id="trace-33204"></a>
<a id="trace-33335"></a>
<a id="trace-33337"></a>
<a id="trace-33374"></a>
<a id="trace-33409"></a>
<a id="trace-33525"></a>
<a id="trace-33555"></a>
<a id="trace-33581"></a>
<a id="trace-33607"></a>
<a id="trace-33609"></a>
<a id="trace-33692"></a>
<a id="trace-33694"></a>
<a id="trace-33719"></a>
<a id="trace-33721"></a>
<a id="trace-33754"></a>
<a id="trace-33790"></a>
<a id="trace-33812"></a>
<a id="trace-33814"></a>
<a id="trace-33900"></a>
<a id="trace-33902"></a>
<a id="trace-33928"></a>
<a id="trace-33930"></a>
<a id="trace-33960"></a>
<a id="trace-33962"></a>
<a id="trace-34002"></a>
<a id="trace-34004"></a>
<a id="trace-34036"></a>
<a id="trace-34121"></a>
<a id="trace-34143"></a>
<a id="trace-34170"></a>
<a id="trace-34191"></a>
<a id="trace-34209"></a>
<a id="trace-34211"></a>
<a id="trace-34291"></a>
<a id="trace-34310"></a>
<a id="trace-34312"></a>
- 150.30s–176.30s (×38), actor 5, squad 0 (trace 33176): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 33113. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33202}.
<a id="trace-33211"></a>
- 151.35s–151.35s (×1), actor 8, squad 1 (trace 33211): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 33114. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.623439519098074, 'next_transition': 33921}.
<a id="trace-33212"></a>
- 151.35s–151.35s (×1), actor 8, squad 1 (trace 33212): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 33114. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.623439519098074, 'next_transition': 33921}.
<a id="trace-33921"></a>
- 166.20s–166.20s (×1), actor 8, squad 1 (trace 33921): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 165.00s, trace 33835. Next observer evidence: {'until': 177, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.793810282400301, 'next_transition': 2430}.
<a id="trace-2429"></a>
- 177.05s–177.05s (×1), actor 5, squad 0 (events line 2429): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34346}.
<a id="trace-2430"></a>
- 177.05s–177.05s (×1), actor 5, squad 1 (events line 2430): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 182.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34528}.
<a id="trace-34334"></a>
- 177.05s–177.05s (×1), actor 5, squad 0 (trace 34334): renew committed intent (75 s lifetime). Knowledge: actor memory at 177.05s, trace 34334. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34346}.
<a id="trace-34335"></a>
- 177.05s–177.05s (×1), actor 5, squad 1 (trace 34335): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.856124 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 177.05s, trace 34335. Next observer evidence: {'until': 182.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34528}.
<a id="trace-34336"></a>
- 177.05s–177.05s (×1), actor 5, squad 1 (trace 34336): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.856124 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 177.05s, trace 34336. Next observer evidence: {'until': 182.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34528}.
<a id="trace-34346"></a>
<a id="trace-34366"></a>
<a id="trace-34368"></a>
<a id="trace-34388"></a>
<a id="trace-34390"></a>
<a id="trace-34467"></a>
<a id="trace-34469"></a>
<a id="trace-34492"></a>
<a id="trace-34512"></a>
<a id="trace-34514"></a>
<a id="trace-36076"></a>
<a id="trace-36078"></a>
<a id="trace-36107"></a>
<a id="trace-36109"></a>
<a id="trace-36189"></a>
<a id="trace-36191"></a>
<a id="trace-36215"></a>
<a id="trace-36237"></a>
<a id="trace-36239"></a>
<a id="trace-36264"></a>
<a id="trace-36266"></a>
<a id="trace-36288"></a>
<a id="trace-36290"></a>
<a id="trace-36371"></a>
<a id="trace-36373"></a>
<a id="trace-36388"></a>
<a id="trace-36390"></a>
<a id="trace-36408"></a>
<a id="trace-36410"></a>
<a id="trace-36455"></a>
<a id="trace-36537"></a>
<a id="trace-36539"></a>
<a id="trace-36564"></a>
<a id="trace-36581"></a>
<a id="trace-36583"></a>
<a id="trace-36607"></a>
<a id="trace-36609"></a>
<a id="trace-36629"></a>
<a id="trace-36631"></a>
<a id="trace-36709"></a>
<a id="trace-36711"></a>
<a id="trace-36739"></a>
<a id="trace-36765"></a>
<a id="trace-36789"></a>
<a id="trace-36791"></a>
<a id="trace-36808"></a>
<a id="trace-36810"></a>
<a id="trace-36892"></a>
<a id="trace-36918"></a>
<a id="trace-36920"></a>
<a id="trace-36950"></a>
<a id="trace-36978"></a>
<a id="trace-37086"></a>
<a id="trace-37088"></a>
<a id="trace-37228"></a>
<a id="trace-37260"></a>
<a id="trace-37291"></a>
<a id="trace-37293"></a>
<a id="trace-37324"></a>
<a id="trace-37326"></a>
<a id="trace-37411"></a>
<a id="trace-37413"></a>
<a id="trace-37436"></a>
<a id="trace-37438"></a>
<a id="trace-37465"></a>
<a id="trace-37493"></a>
<a id="trace-37495"></a>
<a id="trace-37515"></a>
<a id="trace-37596"></a>
<a id="trace-37598"></a>
<a id="trace-37619"></a>
<a id="trace-37621"></a>
<a id="trace-37641"></a>
<a id="trace-37643"></a>
<a id="trace-37663"></a>
<a id="trace-37665"></a>
<a id="trace-37882"></a>
<a id="trace-37884"></a>
<a id="trace-37911"></a>
<a id="trace-37913"></a>
<a id="trace-37970"></a>
<a id="trace-37993"></a>
<a id="trace-37995"></a>
<a id="trace-38073"></a>
<a id="trace-38075"></a>
<a id="trace-38094"></a>
<a id="trace-38096"></a>
<a id="trace-38117"></a>
<a id="trace-38139"></a>
<a id="trace-38141"></a>
<a id="trace-38164"></a>
<a id="trace-38166"></a>
<a id="trace-38242"></a>
<a id="trace-38244"></a>
<a id="trace-38266"></a>
<a id="trace-38268"></a>
<a id="trace-38287"></a>
<a id="trace-38311"></a>
<a id="trace-38389"></a>
<a id="trace-38391"></a>
<a id="trace-38479"></a>
<a id="trace-38481"></a>
<a id="trace-38510"></a>
<a id="trace-38512"></a>
<a id="trace-38532"></a>
<a id="trace-38556"></a>
<a id="trace-38574"></a>
<a id="trace-38710"></a>
- 177.30s–245.30s (×108), actor 5, squad 0 (trace 34346): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 177.05s, trace 34336. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34366}.
<a id="trace-34528"></a>
- 182.70s–182.70s (×1), actor 8, squad 1 (trace 34528): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 180.00s, trace 34410. Next observer evidence: {'until': 204.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 23.357152016101537, 'next_transition': 2599}.
<a id="trace-34529"></a>
- 182.70s–182.70s (×1), actor 8, squad 1 (trace 34529): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 180.00s, trace 34410. Next observer evidence: {'until': 204.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 23.357152016101537, 'next_transition': 2599}.
<a id="trace-2599"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (events line 2599): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-36821"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (trace 36821): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.948160 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 204.65s, trace 36821. Next observer evidence: {'until': 209.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.5620256449862606, 'next_transition': 37007}.
<a id="trace-36822"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (trace 36822): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.948160 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 204.65s, trace 36822. Next observer evidence: {'until': 209.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.5620256449862606, 'next_transition': 37007}.
<a id="trace-37007"></a>
- 209.75s–209.75s (×1), actor 9, squad 1 (trace 37007): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 205.00s, trace 36837. Next observer evidence: {'until': 210.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37098}.
<a id="trace-37008"></a>
- 209.75s–209.75s (×1), actor 9, squad 1 (trace 37008): NeedSupport. Knowledge: actor memory at 205.00s, trace 36837. Next observer evidence: {'until': 210.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37098}.
<a id="trace-37098"></a>
- 210.75s–210.75s (×1), actor 9, squad 1 (trace 37098): Reorganise: completed/failed drill. Knowledge: actor memory at 210.00s, trace 37028. Next observer evidence: {'until': 223.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.128582568550915, 'next_transition': 37675}.
<a id="trace-37101"></a>
- 210.75s–210.75s (×1), actor 9, squad 1 (trace 37101): MoveTactically. Knowledge: actor memory at 210.00s, trace 37028. Next observer evidence: {'until': 223.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.128582568550915, 'next_transition': 37675}.
<a id="trace-37102"></a>
- 210.75s–210.75s (×1), actor 9, squad 1 (trace 37102): traveling. Knowledge: actor memory at 210.00s, trace 37028. Next observer evidence: {'until': 223.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.128582568550915, 'next_transition': 37675}.
<a id="trace-37103"></a>
- 210.75s–210.75s (×1), actor 9, squad 1 (trace 37103): Reorganise complete. Knowledge: actor memory at 210.00s, trace 37028. Next observer evidence: {'until': 223.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.128582568550915, 'next_transition': 37675}.
<a id="trace-37675"></a>
- 223.70s–223.70s (×1), actor 9, squad 1 (trace 37675): bounding overwatch. Knowledge: actor memory at 220.00s, trace 37537. Next observer evidence: {'until': 224.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1340012363671603, 'next_transition': 37755}.
<a id="trace-37676"></a>
- 223.70s–223.70s (×1), actor 9, squad 1 (trace 37676): matching received arrivals: traveling stage complete. Knowledge: actor memory at 220.00s, trace 37537. Next observer evidence: {'until': 224.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1340012363671603, 'next_transition': 37755}.
<a id="trace-37755"></a>
- 224.70s–224.70s (×1), actor 9, squad 1 (trace 37755): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 220.00s, trace 37537. Next observer evidence: {'until': 238, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.716655003021224, 'next_transition': 38306}.
<a id="trace-38306"></a>
- 238.10s–238.10s (×1), actor 9, squad 1 (trace 38306): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 235.00s, trace 38185. Next observer evidence: {'until': 239, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38332}.
<a id="trace-38332"></a>
- 239.10s–239.10s (×1), actor 9, squad 1 (trace 38332): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 235.00s, trace 38185. Next observer evidence: {'until': 244.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.505008522572155, 'next_transition': 38590}.
<a id="trace-38590"></a>
- 244.80s–244.80s (×1), actor 9, squad 1 (trace 38590): current contact unknown for 10 s. Knowledge: actor memory at 240.00s, trace 38417. Next observer evidence: {'until': 246, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.888253925826715, 'next_transition': 2765}.
<a id="trace-2764"></a>
- 246.10s–246.10s (×1), actor 5, squad 0 (events line 2764): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2765"></a>
- 246.10s–246.10s (×1), actor 5, squad 1 (events line 2765): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-38731"></a>
- 246.10s–246.10s (×1), actor 5, squad 0 (trace 38731): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.850381 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 246.10s, trace 38731. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38743}.
<a id="trace-38732"></a>
- 246.10s–246.10s (×1), actor 5, squad 0 (trace 38732): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.850381 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 246.10s, trace 38732. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38743}.
<a id="trace-38733"></a>
- 246.10s–246.10s (×1), actor 5, squad 1 (trace 38733): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.850381 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 246.10s, trace 38733. Next observer evidence: {'until': 247.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3251415845443321, 'next_transition': 38788}.
<a id="trace-38734"></a>
- 246.10s–246.10s (×1), actor 5, squad 1 (trace 38734): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.850381 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 246.10s, trace 38734. Next observer evidence: {'until': 247.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3251415845443321, 'next_transition': 38788}.
<a id="trace-38743"></a>
<a id="trace-38745"></a>
<a id="trace-38774"></a>
<a id="trace-38776"></a>
<a id="trace-38803"></a>
<a id="trace-38840"></a>
<a id="trace-38917"></a>
<a id="trace-38940"></a>
<a id="trace-38942"></a>
- 246.30s–251.30s (×9), actor 5, squad 0 (trace 38743): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 246.10s, trace 38734. Next observer evidence: {'until': 247.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38774}.
<a id="trace-38788"></a>
- 247.70s–247.70s (×1), actor 9, squad 1 (trace 38788): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 245.00s, trace 38648. Next observer evidence: {'until': 248.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38813}.
<a id="trace-38813"></a>
- 248.70s–248.70s (×1), actor 9, squad 1 (trace 38813): matching received arrivals: deployment leg complete. Knowledge: actor memory at 245.00s, trace 38648. Next observer evidence: {'until': 249, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38827}.
<a id="trace-38827"></a>
- 249.15s–249.15s (×1), actor 9, squad 1 (trace 38827): Reorganise: completed/failed drill. Knowledge: actor memory at 245.00s, trace 38648. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39000}.
<a id="trace-38830"></a>
- 249.15s–249.15s (×1), actor 9, squad 1 (trace 38830): ReactToContact: cover and return fire. Knowledge: actor memory at 245.00s, trace 38648. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39000}.
<a id="trace-38831"></a>
- 249.15s–249.15s (×1), actor 9, squad 1 (trace 38831): Reorganise complete: known contact. Knowledge: actor memory at 245.00s, trace 38648. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39000}.
<a id="trace-38949"></a>
- 251.65s–251.65s (×1), actor 1, squad 0 (trace 38949): ReactToContact: cover and return fire. Knowledge: actor memory at 250.00s, trace 38860. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38973}.
<a id="trace-38950"></a>
- 251.65s–251.65s (×1), actor 1, squad 0 (trace 38950): new contact inside 100 m. Knowledge: actor memory at 250.00s, trace 38860. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38973}.
<a id="trace-38973"></a>
<a id="trace-38975"></a>
<a id="trace-39010"></a>
<a id="trace-39012"></a>
<a id="trace-39051"></a>
- 252.30s–254.30s (×5), actor 5, squad 0 (trace 38973): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 38861. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39010}.
<a id="trace-39000"></a>
- 252.85s–252.85s (×1), actor 9, squad 1 (trace 39000): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 250.00s, trace 38862. Next observer evidence: {'until': 253.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39028}.
<a id="trace-39001"></a>
- 252.85s–252.85s (×1), actor 9, squad 1 (trace 39001): ; retain contact cover stage. Knowledge: actor memory at 250.00s, trace 38862. Next observer evidence: {'until': 253.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39028}.
<a id="trace-39028"></a>
- 253.85s–253.85s (×1), actor 9, squad 1 (trace 39028): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 250.00s, trace 38862. Next observer evidence: None.
<a id="trace-39030"></a>
- 253.85s–253.85s (×1), actor 9, squad 1 (trace 39030): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 250.00s, trace 38862. Next observer evidence: None.
<a id="trace-39033"></a>
- 253.90s–253.90s (×1), actor 9, squad 1 (trace 39033): MoveTactically. Knowledge: actor memory at 250.00s, trace 38862. Next observer evidence: {'until': 254.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39067}.
<a id="trace-39034"></a>
- 253.90s–253.90s (×1), actor 9, squad 1 (trace 39034): received platoon directive. Knowledge: actor memory at 250.00s, trace 38862. Next observer evidence: {'until': 254.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39067}.
<a id="trace-39067"></a>
- 254.90s–254.90s (×1), actor 9, squad 1 (trace 39067): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 250.00s, trace 38862. Next observer evidence: {'until': 263.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.000017339288513, 'next_transition': 39472}.
<a id="trace-39182"></a>
- 255.25s–255.25s (×1), actor 1, squad 0 (trace 39182): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 255.00s, trace 39122. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39216}.
<a id="trace-39184"></a>
- 255.25s–255.25s (×1), actor 1, squad 0 (trace 39184): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 255.00s, trace 39122. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39216}.
<a id="trace-39216"></a>
<a id="trace-39218"></a>
<a id="trace-39244"></a>
<a id="trace-39246"></a>
<a id="trace-39268"></a>
<a id="trace-39270"></a>
<a id="trace-39292"></a>
<a id="trace-39294"></a>
<a id="trace-39380"></a>
<a id="trace-39401"></a>
<a id="trace-39403"></a>
<a id="trace-39424"></a>
<a id="trace-39426"></a>
<a id="trace-39451"></a>
<a id="trace-39453"></a>
<a id="trace-39482"></a>
<a id="trace-39484"></a>
<a id="trace-39610"></a>
<a id="trace-39612"></a>
<a id="trace-39635"></a>
<a id="trace-39637"></a>
<a id="trace-39672"></a>
<a id="trace-39674"></a>
<a id="trace-39696"></a>
<a id="trace-39698"></a>
<a id="trace-39798"></a>
<a id="trace-39800"></a>
<a id="trace-39821"></a>
<a id="trace-39846"></a>
<a id="trace-39848"></a>
<a id="trace-39879"></a>
<a id="trace-39881"></a>
- 256.30s–273.30s (×32), actor 5, squad 0 (trace 39216): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 39123. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39244}.
<a id="trace-39472"></a>
- 263.90s–263.90s (×1), actor 9, squad 1 (trace 39472): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 260.00s, trace 39319. Next observer evidence: {'until': 264.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39496}.
<a id="trace-39496"></a>
- 264.90s–264.90s (×1), actor 9, squad 1 (trace 39496): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 260.00s, trace 39319. Next observer evidence: {'until': 278.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.000024713496426, 'next_transition': 40065}.
<a id="trace-3273"></a>
- 273.70s–273.70s (×1), actor 5, squad 0 (events line 3273): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-39895"></a>
- 273.70s–273.70s (×1), actor 5, squad 0 (trace 39895): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.019888 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 273.70s, trace 39895. Next observer evidence: {'until': 274.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39907}.
<a id="trace-39896"></a>
- 273.70s–273.70s (×1), actor 5, squad 0 (trace 39896): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.019888 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 273.70s, trace 39896. Next observer evidence: {'until': 274.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39907}.
<a id="trace-39907"></a>
<a id="trace-39982"></a>
<a id="trace-40001"></a>
<a id="trace-40003"></a>
<a id="trace-40031"></a>
<a id="trace-40033"></a>
<a id="trace-40057"></a>
- 274.30s–278.30s (×7), actor 5, squad 0 (trace 39907): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 273.70s, trace 39896. Next observer evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39982}.
<a id="trace-40065"></a>
- 278.30s–278.30s (×1), actor 9, squad 1 (trace 40065): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 275.00s, trace 39925. Next observer evidence: {'until': 279.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40138}.
<a id="trace-40121"></a>
- 279.25s–279.25s (×1), actor 1, squad 0 (trace 40121): MoveTactically. Knowledge: actor memory at 275.00s, trace 39923. Next observer evidence: None.
<a id="trace-40122"></a>
- 279.25s–279.25s (×1), actor 1, squad 0 (trace 40122): received platoon directive. Knowledge: actor memory at 275.00s, trace 39923. Next observer evidence: None.
<a id="trace-40128"></a>
<a id="trace-40130"></a>
- 279.30s–279.30s (×2), actor 5, squad 0 (trace 40128): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 39924. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40282}.
<a id="trace-40137"></a>
- 279.30s–279.30s (×1), actor 1, squad 0 (trace 40137): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 275.00s, trace 39923. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40282}.
<a id="trace-40138"></a>
- 279.30s–279.30s (×1), actor 9, squad 1 (trace 40138): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 275.00s, trace 39925. Next observer evidence: {'until': 288.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.999968147128559, 'next_transition': 40545}.
<a id="trace-40282"></a>
<a id="trace-40284"></a>
<a id="trace-40310"></a>
<a id="trace-40332"></a>
<a id="trace-40353"></a>
<a id="trace-40355"></a>
<a id="trace-40375"></a>
<a id="trace-40377"></a>
<a id="trace-40461"></a>
<a id="trace-40487"></a>
<a id="trace-40489"></a>
<a id="trace-40515"></a>
<a id="trace-40537"></a>
<a id="trace-40641"></a>
<a id="trace-40720"></a>
<a id="trace-40722"></a>
<a id="trace-40743"></a>
<a id="trace-40745"></a>
<a id="trace-40771"></a>
<a id="trace-40773"></a>
<a id="trace-40797"></a>
<a id="trace-40799"></a>
<a id="trace-40824"></a>
<a id="trace-40826"></a>
<a id="trace-40900"></a>
<a id="trace-41077"></a>
<a id="trace-41263"></a>
<a id="trace-41265"></a>
<a id="trace-41303"></a>
<a id="trace-41419"></a>
<a id="trace-41421"></a>
<a id="trace-41562"></a>
<a id="trace-41564"></a>
<a id="trace-41605"></a>
<a id="trace-41628"></a>
<a id="trace-41662"></a>
<a id="trace-41664"></a>
<a id="trace-41742"></a>
<a id="trace-41744"></a>
<a id="trace-41768"></a>
<a id="trace-41770"></a>
<a id="trace-41799"></a>
<a id="trace-41824"></a>
<a id="trace-41826"></a>
<a id="trace-41851"></a>
<a id="trace-41853"></a>
<a id="trace-41933"></a>
<a id="trace-41935"></a>
<a id="trace-41959"></a>
- 280.30s–311.30s (×49), actor 5, squad 0 (trace 40282): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 40214. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40310}.
<a id="trace-40545"></a>
- 288.50s–288.50s (×1), actor 9, squad 1 (trace 40545): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 285.00s, trace 40401. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.880723477909223, 'next_transition': 40918}.
<a id="trace-40918"></a>
- 295.95s–295.95s (×1), actor 9, squad 1 (trace 40918): ReactToContact: cover and return fire. Knowledge: actor memory at 295.00s, trace 40844. Next observer evidence: {'until': 296.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0577021907181623, 'next_transition': 41098}.
<a id="trace-40919"></a>
<a id="trace-41098"></a>
- 295.95s–296.95s (×2), actor 9, squad 1 (trace 40919): new contact inside 100 m. Knowledge: actor memory at 295.00s, trace 40844. Next observer evidence: {'until': 296.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0577021907181623, 'next_transition': 41098}.
<a id="trace-41442"></a>
- 300.60s–300.60s (×1), actor 9, squad 1 (trace 41442): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 300.00s, trace 41358. Next observer evidence: {'until': 312.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.994585552826228, 'next_transition': 42006}.
<a id="trace-41443"></a>
- 300.60s–300.60s (×1), actor 9, squad 1 (trace 41443): rearward bound: one stationary suppressing element. Knowledge: actor memory at 300.00s, trace 41358. Next observer evidence: {'until': 312.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.994585552826228, 'next_transition': 42006}.
<a id="trace-41985"></a>
- 312.20s–312.20s (×1), actor 1, squad 0 (trace 41985): ReactToContact: cover and return fire. Knowledge: actor memory at 310.00s, trace 41873. Next observer evidence: None.
<a id="trace-41986"></a>
- 312.20s–312.20s (×1), actor 1, squad 0 (trace 41986): new contact inside 100 m. Knowledge: actor memory at 310.00s, trace 41873. Next observer evidence: None.
<a id="trace-41995"></a>
<a id="trace-42099"></a>
<a id="trace-42101"></a>
- 312.30s–313.30s (×3), actor 5, squad 0 (trace 41995): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 310.00s, trace 41874. Next observer evidence: {'until': 313.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42099}.
<a id="trace-42006"></a>
- 312.50s–312.50s (×1), actor 9, squad 1 (trace 42006): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 310.00s, trace 41875. Next observer evidence: {'until': 315, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1340019442664113, 'next_transition': 3575}.
<a id="trace-42028"></a>
- 312.50s–312.50s (×1), actor 9, squad 1 (trace 42028): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 310.00s, trace 41875. Next observer evidence: {'until': 315, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1340019442664113, 'next_transition': 3575}.
<a id="trace-3574"></a>
- 315.10s–315.10s (×1), actor 5, squad 0 (events line 3574): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3575"></a>
- 315.10s–315.10s (×1), actor 5, squad 1 (events line 3575): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-42172"></a>
- 315.10s–315.10s (×1), actor 5, squad 0 (trace 42172): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.917117 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 315.10s, trace 42172. Next observer evidence: {'until': 315.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42221}.
<a id="trace-42173"></a>
- 315.10s–315.10s (×1), actor 5, squad 0 (trace 42173): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.917117 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 315.10s, trace 42173. Next observer evidence: {'until': 315.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42221}.
<a id="trace-42174"></a>
- 315.10s–315.10s (×1), actor 5, squad 1 (trace 42174): renew committed intent (75 s lifetime). Knowledge: actor memory at 315.10s, trace 42174. Next observer evidence: {'until': 328, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.866007351199054, 'next_transition': 42729}.
<a id="trace-42221"></a>
<a id="trace-42223"></a>
- 315.30s–315.30s (×2), actor 5, squad 0 (trace 42221): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 315.10s, trace 42174. Next observer evidence: {'until': 315.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42239}.
<a id="trace-42239"></a>
- 315.80s–315.80s (×1), actor 1, squad 0 (trace 42239): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 315.00s, trace 42153. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42299}.
<a id="trace-42240"></a>
- 315.80s–315.80s (×1), actor 1, squad 0 (trace 42240): rearward bound: one stationary suppressing element. Knowledge: actor memory at 315.00s, trace 42153. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42299}.
<a id="trace-42299"></a>
<a id="trace-42328"></a>
<a id="trace-42330"></a>
<a id="trace-42347"></a>
<a id="trace-42380"></a>
<a id="trace-42382"></a>
<a id="trace-42458"></a>
<a id="trace-42481"></a>
<a id="trace-42483"></a>
<a id="trace-42536"></a>
<a id="trace-42569"></a>
<a id="trace-42650"></a>
<a id="trace-42652"></a>
<a id="trace-42674"></a>
<a id="trace-42676"></a>
<a id="trace-42707"></a>
<a id="trace-42792"></a>
<a id="trace-42822"></a>
<a id="trace-42911"></a>
<a id="trace-42913"></a>
<a id="trace-42943"></a>
<a id="trace-42945"></a>
- 316.30s–331.30s (×22), actor 5, squad 0 (trace 42299): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 315.10s, trace 42174. Next observer evidence: {'until': 317.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5670212099207578, 'next_transition': 42328}.
<a id="trace-42729"></a>
- 328.10s–328.10s (×1), actor 9, squad 1 (trace 42729): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 325.00s, trace 42589. Next observer evidence: {'until': 330.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.094704955824009, 'next_transition': 42933}.
<a id="trace-42730"></a>
- 328.10s–328.10s (×1), actor 9, squad 1 (trace 42730): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 325.00s, trace 42589. Next observer evidence: {'until': 330.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.094704955824009, 'next_transition': 42933}.
<a id="trace-42933"></a>
- 330.80s–330.80s (×1), actor 9, squad 1 (trace 42933): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 330.00s, trace 42849. Next observer evidence: {'until': 342.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39348135756223573, 'next_transition': 3707}.
<a id="trace-42958"></a>
- 331.65s–331.65s (×1), actor 1, squad 0 (trace 42958): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 330.00s, trace 42847. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17329457579509214, 'next_transition': 42986}.
<a id="trace-42959"></a>
- 331.65s–331.65s (×1), actor 1, squad 0 (trace 42959): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 330.00s, trace 42847. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17329457579509214, 'next_transition': 42986}.
<a id="trace-42986"></a>
<a id="trace-42988"></a>
<a id="trace-43018"></a>
<a id="trace-43045"></a>
<a id="trace-43123"></a>
<a id="trace-43125"></a>
- 332.30s–335.30s (×6), actor 5, squad 0 (trace 42986): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 42848. Next observer evidence: {'until': 333.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087369275690379, 'next_transition': 43018}.
<a id="trace-43139"></a>
- 335.85s–335.85s (×1), actor 1, squad 0 (trace 43139): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 335.00s, trace 43064. Next observer evidence: None.
<a id="trace-43142"></a>
- 335.90s–335.90s (×1), actor 1, squad 0 (trace 43142): MoveTactically. Knowledge: actor memory at 335.00s, trace 43064. Next observer evidence: None.
<a id="trace-43143"></a>
- 335.90s–335.90s (×1), actor 1, squad 0 (trace 43143): traveling overwatch. Knowledge: actor memory at 335.00s, trace 43064. Next observer evidence: None.
<a id="trace-43144"></a>
- 335.90s–335.90s (×1), actor 1, squad 0 (trace 43144): received platoon directive. Knowledge: actor memory at 335.00s, trace 43064. Next observer evidence: None.
<a id="trace-43148"></a>
- 335.95s–335.95s (×1), actor 1, squad 0 (trace 43148): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 335.00s, trace 43064. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 43156}.
<a id="trace-43156"></a>
<a id="trace-43193"></a>
<a id="trace-43195"></a>
<a id="trace-43210"></a>
<a id="trace-43212"></a>
<a id="trace-43240"></a>
<a id="trace-43314"></a>
<a id="trace-43331"></a>
<a id="trace-43359"></a>
<a id="trace-43361"></a>
<a id="trace-43390"></a>
<a id="trace-43392"></a>
<a id="trace-43408"></a>
<a id="trace-43410"></a>
<a id="trace-43482"></a>
<a id="trace-43484"></a>
<a id="trace-43502"></a>
<a id="trace-43504"></a>
<a id="trace-43528"></a>
<a id="trace-43530"></a>
<a id="trace-43550"></a>
<a id="trace-43552"></a>
<a id="trace-43632"></a>
<a id="trace-43713"></a>
<a id="trace-43730"></a>
<a id="trace-43732"></a>
<a id="trace-43778"></a>
<a id="trace-43803"></a>
<a id="trace-43805"></a>
<a id="trace-43826"></a>
<a id="trace-43828"></a>
<a id="trace-43906"></a>
<a id="trace-43926"></a>
<a id="trace-43954"></a>
<a id="trace-43976"></a>
<a id="trace-43978"></a>
<a id="trace-43998"></a>
<a id="trace-44000"></a>
- 336.30s–359.30s (×38), actor 5, squad 0 (trace 43156): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 335.00s, trace 43065. Next observer evidence: {'until': 337.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 43193}.
<a id="trace-3707"></a>
- 342.70s–342.70s (×1), actor 5, squad 1 (events line 3707): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-43375"></a>
- 342.70s–342.70s (×1), actor 5, squad 1 (trace 43375): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.000331 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 342.70s, trace 43375. Next observer evidence: {'until': 348.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 43560}.
<a id="trace-43376"></a>
- 342.70s–342.70s (×1), actor 5, squad 1 (trace 43376): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.000331 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 342.70s, trace 43376. Next observer evidence: {'until': 348.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 43560}.
<a id="trace-43560"></a>
- 348.45s–348.45s (×1), actor 9, squad 1 (trace 43560): MoveTactically. Knowledge: actor memory at 345.00s, trace 43427. Next observer evidence: {'until': 352, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.088235008803572, 'next_transition': 43751}.
<a id="trace-43561"></a>
- 348.45s–348.45s (×1), actor 9, squad 1 (trace 43561): received platoon directive. Knowledge: actor memory at 345.00s, trace 43427. Next observer evidence: {'until': 352, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.088235008803572, 'next_transition': 43751}.
<a id="trace-43751"></a>
- 352.15s–352.15s (×1), actor 9, squad 1 (trace 43751): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 350.00s, trace 43657. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.811973434126068, 'next_transition': None}.

## Net delivery

340 matched order/radio deliveries; 285 explicitly recorded losses; 5 unmatched orders (not classified as lost).
Matched delay: mean 0.591s; maximum 6.650s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 5537: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 5538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 5539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 5540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 5541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 5542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 5543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 5544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 5545: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 5546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 5547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 5548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 5549: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 5550: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 5551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 5552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 5553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 5554: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 5555: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 5556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 5557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 5558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 5559: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 5560: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 8543: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 8544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 8545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 8546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 8547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 8548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 8549: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 8550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 8551: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 8552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 8553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 8554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 8555: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 8556: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 8557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 8558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 8559: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 8560: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 8561: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 8562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 8563: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 8564: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 8565: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 8566: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 12596: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 12597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 12598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 12599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 12600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 12601: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 12602: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 12603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 12604: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 12605: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 12606: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 12607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 12608: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 12609: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 12610: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 12611: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 12612: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 12613: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 12614: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 12615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 12616: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 12617: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 12618: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 12619: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 12991: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 12992: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 12993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 12994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 12995: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 12996: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 12997: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 12998: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 12999: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 13000: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 13001: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 13002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 13003: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 13004: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 13005: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 13006: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 13007: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 13008: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 13009: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 13010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 13011: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 13012: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 13013: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 13014: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 13901: estimate 14.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 13902: estimate 14.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 14009: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 14010: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 14011: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 14012: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 14013: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 14014: estimate 14.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 14015: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 14016: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 14017: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 14018: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 14019: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 14020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 14021: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 14022: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 14023: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 14024: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 14025: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 14026: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 14027: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 14028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 14029: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 14030: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 14031: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 14032: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 17480: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 17481: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 17482: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 17483: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 17484: estimate 14.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 17485: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 17486: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 17487: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 17488: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 17489: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 17490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 17491: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 17492: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 17493: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 17494: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 17495: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 17496: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 17497: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 17498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 17499: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 17500: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 17501: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 17502: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 18224: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 18225: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 18226: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 18227: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 18228: estimate 14.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 18229: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 18230: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 18231: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 18232: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 18233: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 18234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 18235: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 18236: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 18237: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 18238: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 18239: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 18240: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 18241: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 18242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 18243: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 18244: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 18245: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 18246: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 18987: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 18988: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 18989: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 18990: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 18991: estimate 14.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 18992: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 18993: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 18994: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 18995: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 18996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 18997: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 18998: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 18999: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 19000: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 19001: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 19002: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 19003: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 19004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 19005: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 19006: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 19007: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 19008: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 19313: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 19314: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 19315: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 19316: estimate 14.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 19317: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 19318: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 19319: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 19320: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 19321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 19322: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 19323: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 19324: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 19325: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 19326: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 19327: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 19328: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 19329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 19330: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 19331: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 19332: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 19333: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 19855: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 19856: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 19857: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 19858: estimate 14.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 19859: estimate 13.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 19860: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 19861: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 19862: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 19863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 19864: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 19865: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 19866: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 19867: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 19868: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 19869: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 19870: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 19871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 19872: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 19873: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 19874: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 19875: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 20045: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 20046: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 20211: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 20212: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 20213: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 20214: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 20215: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 20216: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 20217: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 20218: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 20219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 20220: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 20221: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 20222: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 20223: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 20224: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 20225: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 20226: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 20227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 20228: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 20229: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 20230: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 20231: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 20635: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 20636: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 20637: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 20638: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 20639: estimate 13.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 20640: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 20641: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 20642: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 20643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 20644: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 20645: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 20646: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 20647: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 20648: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 20649: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 20650: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 20651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 20652: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 20653: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 20654: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 20655: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 21300: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 21301: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 21302: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 21303: estimate 14.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 21304: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 21305: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 21306: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 21307: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 21308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 21309: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 21310: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 21311: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 21312: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 21313: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 21314: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 21315: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 21316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 21317: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 21318: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 21319: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 21320: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 21400: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 21680: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 21681: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 21682: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 21683: estimate 14.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 21684: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 21685: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 21686: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 21687: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 21688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 21689: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 21690: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 21691: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 21692: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 21693: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 21694: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 21695: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 21696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 21697: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 21698: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 21699: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 21700: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 22203: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 22204: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 22205: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 22206: estimate 14.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 22207: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 22208: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 22209: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 22210: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 22211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 22212: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 22213: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 22214: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 22215: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 22216: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 22217: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 22218: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 22219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 22220: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 22221: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 22222: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 22223: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 22536: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 22537: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 22538: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 22539: estimate 14.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 22540: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 22541: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 22542: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 22543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 22544: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 22545: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 22546: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 22547: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 22548: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 22549: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 22550: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 22551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 22552: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 22553: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 22554: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 22555: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 24441: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 24442: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 24443: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 24444: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 24445: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 24446: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 24447: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 24448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 24449: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 24450: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 24451: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 24452: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 24453: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 24454: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 24455: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 24456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 24457: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 24458: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 24459: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 24460: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 24665: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 24666: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 24667: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 24668: estimate 13.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 24669: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 24670: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 24671: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 24672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 24673: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 24674: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 24675: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 24676: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 24677: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 24678: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 24679: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 24680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 24681: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 24682: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 24683: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 24684: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 24966: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 24967: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 24968: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 24969: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 25055: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 25056: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 25057: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 25058: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 25059: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 25060: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 10, trace 25061: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 25062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 25063: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 25064: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 25065: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 25066: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 25067: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 25068: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 25069: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 25070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 25071: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 25072: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 25073: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 25074: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 27739: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 27740: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 27741: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 27742: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 27743: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 27744: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 10, trace 27745: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 27746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 27747: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 27748: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 27749: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 27750: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 27751: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 27752: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 27753: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 27754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 27755: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 27756: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 27757: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 27758: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 28215: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 28216: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 28217: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 28218: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 28219: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 28220: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 10, trace 28221: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 28222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 28223: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 28224: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 28225: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 28226: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 28227: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 28228: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 28229: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 28230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 28231: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 28232: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 28233: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 28234: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 28383: estimate 13.82; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 28384: estimate 13.82; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 28642: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 28643: estimate 14.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 28644: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 28645: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 10, trace 28646: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 28647: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 28648: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 28649: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 28650: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 28651: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 28652: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 28653: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 28654: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 28655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 28656: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 28657: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 28658: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 28659: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 31645: estimate 13.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 31646: estimate 15.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 31647: estimate 13.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 31648: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 31649: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 31650: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 31651: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 31652: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 31653: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 31654: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 31655: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 31656: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 31657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 31658: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 31659: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 31660: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 31661: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 32014: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 32015: estimate 14.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 32016: estimate 13.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 32017: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 32018: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 32019: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 32020: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 32021: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 32022: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 32023: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 32024: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 32025: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 32026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 32027: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 32028: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 32029: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 32030: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 32681: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 32682: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 32683: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 32684: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 11, trace 32685: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 32686: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 32687: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 32688: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 32689: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 32690: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 32691: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 32692: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 32693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 32694: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 32695: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 32696: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 32697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 32925: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 32926: estimate 14.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 32927: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 32928: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 11, trace 32929: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 32930: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 32931: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 32932: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 32933: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 32934: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 32935: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 32936: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 32937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 32938: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 32939: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 32940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 32941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 33112: estimate 13.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 33113: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 33114: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 33115: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 11, trace 33116: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 33117: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 33118: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 33119: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 33120: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 33121: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 33122: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 33123: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 33124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 33125: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 33126: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 33127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 33128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 33431: estimate 13.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 33432: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 33433: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 33434: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 11, trace 33435: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 33436: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 33437: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 33438: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 33439: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 33440: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 33441: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 33442: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 33443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 33444: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 33445: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 33446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 33447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 33628: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 33629: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 8, trace 33630: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 33631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 11, trace 33632: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 33633: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 33634: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 33635: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 33636: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 33637: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 33638: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 33639: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 33640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 33641: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 33642: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 33643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 33644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 33833: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 33834: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 8, trace 33835: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 33836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 11, trace 33837: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 33838: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 33839: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 33840: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 33841: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 33842: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 33843: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 33844: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 33845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 33846: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 33847: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 33848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 33849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 34060: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 34061: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 8, trace 34062: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 34063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 11, trace 34064: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 34065: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 34066: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 34067: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 34068: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 34069: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 34070: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 34071: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 34072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 34073: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 34074: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 34075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 34076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 34232: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 34233: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 8, trace 34234: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 34235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 11, trace 34236: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 34237: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 34238: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 34239: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 34240: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 34241: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 34242: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 34243: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 34244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 34245: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 34246: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 34247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 34248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 34334: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 34335: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 34336: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 34408: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 34409: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 8, trace 34410: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 34411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 11, trace 34412: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 34413: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 34414: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 34415: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 34416: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 34417: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 34418: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 34419: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 34420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 34421: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 34422: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 34423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 34424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 36131: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 36132: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 8, trace 36133: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 36134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 11, trace 36135: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 36136: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 36137: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 36138: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 36139: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 36140: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 36141: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 36142: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 36143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 36144: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 36145: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 36146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 36147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 36310: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 36311: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 8, trace 36312: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 36313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 11, trace 36314: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 36315: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 36316: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 36317: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 36318: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 36319: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 36320: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 36321: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 36322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 36323: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 36324: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 36325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 36326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 36477: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 36478: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 8, trace 36479: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 36480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 11, trace 36481: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 36482: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 36483: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 36484: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 36485: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 36486: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 36487: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 36488: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 36489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 36490: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 36491: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 36492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 36493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 36651: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 36652: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 8, trace 36653: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 36654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 11, trace 36655: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 36656: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 36657: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 36658: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 36659: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 36660: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 36661: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 36662: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 36663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 36664: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 36665: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 36666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 36667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 204.65s leader 5, trace 36821: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 204.65s leader 5, trace 36822: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 36834: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 36835: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 8, trace 36836: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 36837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 11, trace 36838: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 36839: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 36840: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 36841: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 36842: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 36843: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 36844: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 36845: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 36846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 36847: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 36848: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 36849: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 36850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 37026: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 37027: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 37028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 11, trace 37029: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 37030: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 37031: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 37032: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 37033: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 37034: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 37035: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 37036: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 37037: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 37038: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 37039: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 37040: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 37041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 37349: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 37350: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 37351: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 11, trace 37352: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 37353: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 37354: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 37355: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 37356: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 37357: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 37358: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 37359: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 37360: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 37361: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 37362: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 37363: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 37364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 37535: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 37536: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 37537: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 11, trace 37538: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 37539: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 37540: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 37541: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 37542: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 37543: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 37544: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 37545: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 37546: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 37547: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 37548: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 37549: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 37550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 37816: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 37817: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 37818: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 11, trace 37819: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 37820: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 37821: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 37822: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 37823: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 37824: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 37825: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 37826: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 37827: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 37828: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 37829: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 37830: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 37831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 38014: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 38015: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 38016: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 11, trace 38017: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 38018: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 38019: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 38020: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 38021: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 38022: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 38023: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 38024: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 38025: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 38026: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 38027: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 38028: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 38029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 38183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 38184: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 38185: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 11, trace 38186: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 38187: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 38188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 38189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 38190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 38191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 38192: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 38193: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 38194: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 38195: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 38196: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 38197: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 38198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 38415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 38416: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 38417: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 11, trace 38418: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 38419: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 38420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 38421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 38422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 38423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 38424: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 38425: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 38426: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 38427: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 38428: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 38429: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 38430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 38646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 38647: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 38648: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 11, trace 38649: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 38650: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 38651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 38652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 38653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 38654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 38655: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 38656: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 38657: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 38658: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 38659: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 38660: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 38661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 246.10s leader 5, trace 38731: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 246.10s leader 5, trace 38732: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 246.10s leader 5, trace 38733: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 246.10s leader 5, trace 38734: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 38860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 38861: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 38862: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 11, trace 38863: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 38864: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 38865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 38866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 38867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 38868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 38869: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 38870: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 38871: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 38872: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 38873: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 38874: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 38875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 39122: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 39123: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 39124: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 11, trace 39125: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 39126: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 39127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 39128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 39129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 39130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 39131: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 39132: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 39133: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 39134: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 39135: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 39136: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 39137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 39317: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 39318: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 39319: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 11, trace 39320: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 39321: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 39322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 39323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 39324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 39325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 39326: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 39327: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 39328: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 39329: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 39330: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 39331: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 39332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 39550: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 39551: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 39552: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 11, trace 39553: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 39554: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 39555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 39556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 39557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 39558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 39559: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 39560: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 39561: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 39562: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 39563: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 39564: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 39565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 39735: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 39736: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 39737: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 11, trace 39738: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 39739: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 39740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 39741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 39742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 39743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 39744: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 39745: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 39746: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 39747: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 39748: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 39749: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 39750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.70s leader 5, trace 39895: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.70s leader 5, trace 39896: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 39923: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 39924: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 39925: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 11, trace 39926: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 39927: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 39928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 39929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 39930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 39931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 39932: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 39933: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 39934: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 39935: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 39936: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 39937: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 39938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 40213: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 40214: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 40215: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 11, trace 40216: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 40217: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 40218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 40219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 40220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 40221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 40222: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 40223: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 40224: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 40225: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 40226: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 40227: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 40228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 40399: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 40400: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 40401: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 11, trace 40402: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 40403: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 40404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 40405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 40406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 40407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 40408: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 40409: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 40410: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 40411: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 40412: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 40413: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 40414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 40661: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 40662: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 40663: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 11, trace 40664: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 40665: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 40666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 40667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 40668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 40669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 40670: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 40671: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 40672: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 40673: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 40674: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 40675: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 40676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 40842: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 40843: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 40844: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 11, trace 40845: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 40846: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 40847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 40848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 40849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 40850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 40851: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 40852: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 40853: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 40854: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 40855: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 40856: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 40857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 41356: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 41357: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 41358: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 11, trace 41359: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 41360: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 41361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 41362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 41363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 41364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 41365: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 41366: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 41367: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 41368: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 41369: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 41370: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 41371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 41682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 41683: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 41684: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 11, trace 41685: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 41686: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 41687: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 41688: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 41689: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 41690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 41691: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 41692: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 41693: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 41694: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 41695: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 41696: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 41697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 41873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 41874: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 41875: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 11, trace 41876: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 41877: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 41878: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 41879: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 41880: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 41881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 41882: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 41883: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 41884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 41885: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 41886: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 41887: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 41888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 42153: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 42154: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 42155: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 11, trace 42156: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 42157: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 42158: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 42159: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 42160: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 42161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 42162: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 42163: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 42164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 42165: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 42166: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 42167: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 42168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.10s leader 5, trace 42172: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.10s leader 5, trace 42173: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.10s leader 5, trace 42174: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 42397: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 42398: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 42399: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 11, trace 42400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 42401: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 42402: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 42403: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 42404: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 42405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 42406: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 42407: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 42408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 42409: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 42410: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 42411: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 42412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 42587: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 42588: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 42589: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 11, trace 42590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 42591: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 42592: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 42593: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 42594: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 42595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 42596: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 42597: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 42598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 42599: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 42600: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 42601: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 42602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 42847: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 42848: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 42849: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 11, trace 42850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 42851: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 42852: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 42853: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 42854: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 42855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 42856: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 42857: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 42858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 42859: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 42860: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 42861: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 42862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 43064: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 43065: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 43066: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 11, trace 43067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 43068: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 43069: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 43070: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 43071: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 43072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 43073: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 43074: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 43075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 43076: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 43077: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 43078: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 43079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 43257: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 43258: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 43259: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 11, trace 43260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 43261: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 43262: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 43263: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 43264: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 43265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 43266: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 43267: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 43268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 43269: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 43270: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 43271: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 43272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.70s leader 5, trace 43375: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.70s leader 5, trace 43376: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 43425: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 43426: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 43427: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 11, trace 43428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 43429: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 43430: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 43431: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 43432: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 43433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 43434: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 43435: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 43436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 43437: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 43438: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 43439: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 43440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 43655: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 43656: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 43657: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 11, trace 43658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 43659: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 43660: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 43661: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 43662: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 43663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 43664: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 43665: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 43666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 43667: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 43668: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 43669: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 43670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 43848: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 43849: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 43850: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 11, trace 43851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 43852: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 43853: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 43854: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 43855: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 43856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 43857: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 43858: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 43859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 43860: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 43861: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 43862: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 43863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 44023: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 44024: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 44025: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 11, trace 44026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 44027: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 44028: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 44029: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 44030: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 44031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 44032: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 44033: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 44034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 44035: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 44036: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 44037: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 44038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Reed killed in action
- 1: Ash incapacitated
- 1: Moss incapacitated
- 1: Tern killed in action
- 1: Soren incapacitated
- 1: Dane incapacitated
- 1: Bren incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
