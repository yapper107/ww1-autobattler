# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/25/108/good-ember/battle-108-1789674229691269225`

## Battle summary

**Ember** · 360 s · 54 shots.

### Turning points

- 24.2s, squad 4: contact (events line 260). First recorded contact.
- 32.5s, squad 0: withdrawal ([trace 2196](#trace-2196)). 67.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 50.9s, squad 0: help call ([trace 3803](#trace-3803)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 1 shots, 1/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 53 shots, 0/4 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 13.8s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 770](#trace-770)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 32.5s, squad 0 chose broke contact ([trace 2196](#trace-2196)), followed by 0 shots and 0 own casualties; estimate 5.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 13.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 769](#trace-769)). Following evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.889979664471283, 'next_transition': 793}.
- 41.4s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.039534 retreat threshold=0.220000 initiative=requires intent ([trace 3037](#trace-3037)). Following evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0773427725529237, 'next_transition': 3062}.

### Communication

86 matched deliveries (mean 0.23s, max 5.15s); 241 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 24.20s, squad 4, contact, evidence events line 260: First recorded contact; .
- 32.55s, squad 0, withdrawal, evidence 2196: BreakContact: believed ratio at least two without superiority; 67.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 50.85s, squad 0, help call, evidence 3803: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.496683039587388, 'next_transition': 458}.
<a id="trace-12"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 12): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.496683039587388, 'next_transition': 458}.
<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.496683039587388, 'next_transition': 458}.
<a id="trace-211"></a>
<a id="trace-232"></a>
<a id="trace-240"></a>
<a id="trace-253"></a>
<a id="trace-258"></a>
<a id="trace-276"></a>
<a id="trace-287"></a>
<a id="trace-361"></a>
<a id="trace-368"></a>
<a id="trace-387"></a>
<a id="trace-395"></a>
<a id="trace-408"></a>
<a id="trace-417"></a>
<a id="trace-437"></a>
<a id="trace-460"></a>
<a id="trace-473"></a>
<a id="trace-481"></a>
<a id="trace-564"></a>
<a id="trace-572"></a>
<a id="trace-690"></a>
<a id="trace-704"></a>
<a id="trace-722"></a>
<a id="trace-739"></a>
<a id="trace-755"></a>
<a id="trace-767"></a>
<a id="trace-795"></a>
<a id="trace-808"></a>
<a id="trace-892"></a>
<a id="trace-902"></a>
<a id="trace-924"></a>
<a id="trace-939"></a>
<a id="trace-953"></a>
<a id="trace-963"></a>
<a id="trace-983"></a>
<a id="trace-993"></a>
<a id="trace-1137"></a>
<a id="trace-1148"></a>
<a id="trace-1233"></a>
<a id="trace-1257"></a>
<a id="trace-1275"></a>
<a id="trace-1291"></a>
<a id="trace-1317"></a>
<a id="trace-1324"></a>
<a id="trace-1342"></a>
<a id="trace-1350"></a>
<a id="trace-1416"></a>
<a id="trace-1431"></a>
<a id="trace-1511"></a>
<a id="trace-1518"></a>
<a id="trace-1545"></a>
<a id="trace-1553"></a>
<a id="trace-1687"></a>
<a id="trace-1690"></a>
<a id="trace-1700"></a>
<a id="trace-1706"></a>
<a id="trace-1974"></a>
<a id="trace-1991"></a>
<a id="trace-2069"></a>
<a id="trace-2087"></a>
<a id="trace-2120"></a>
<a id="trace-2133"></a>
<a id="trace-2176"></a>
<a id="trace-2389"></a>
<a id="trace-2399"></a>
<a id="trace-2415"></a>
<a id="trace-2452"></a>
<a id="trace-2474"></a>
<a id="trace-2565"></a>
<a id="trace-2583"></a>
<a id="trace-2604"></a>
<a id="trace-2655"></a>
<a id="trace-2689"></a>
<a id="trace-2715"></a>
<a id="trace-2774"></a>
<a id="trace-2822"></a>
<a id="trace-2863"></a>
<a id="trace-2890"></a>
<a id="trace-2996"></a>
<a id="trace-3021"></a>
<a id="trace-3036"></a>
<a id="trace-3064"></a>
<a id="trace-3105"></a>
<a id="trace-3144"></a>
<a id="trace-3180"></a>
<a id="trace-3211"></a>
<a id="trace-3262"></a>
<a id="trace-3318"></a>
<a id="trace-3404"></a>
<a id="trace-3496"></a>
<a id="trace-3551"></a>
<a id="trace-3588"></a>
<a id="trace-3617"></a>
<a id="trace-3643"></a>
<a id="trace-3676"></a>
<a id="trace-3694"></a>
<a id="trace-3706"></a>
<a id="trace-3711"></a>
<a id="trace-3793"></a>
<a id="trace-3802"></a>
<a id="trace-3815"></a>
<a id="trace-3820"></a>
<a id="trace-3834"></a>
<a id="trace-3845"></a>
<a id="trace-3853"></a>
<a id="trace-3859"></a>
<a id="trace-3875"></a>
<a id="trace-3884"></a>
<a id="trace-3957"></a>
<a id="trace-3962"></a>
<a id="trace-3981"></a>
<a id="trace-3994"></a>
<a id="trace-4006"></a>
<a id="trace-4012"></a>
<a id="trace-4032"></a>
<a id="trace-4116"></a>
<a id="trace-4135"></a>
<a id="trace-4142"></a>
<a id="trace-4228"></a>
<a id="trace-4248"></a>
<a id="trace-4266"></a>
<a id="trace-4275"></a>
<a id="trace-4296"></a>
<a id="trace-4308"></a>
<a id="trace-4320"></a>
<a id="trace-4328"></a>
<a id="trace-4345"></a>
<a id="trace-4354"></a>
<a id="trace-4436"></a>
<a id="trace-4461"></a>
<a id="trace-4473"></a>
<a id="trace-4545"></a>
<a id="trace-4558"></a>
<a id="trace-4581"></a>
<a id="trace-4601"></a>
<a id="trace-4622"></a>
<a id="trace-4631"></a>
<a id="trace-4725"></a>
<a id="trace-4732"></a>
<a id="trace-4748"></a>
<a id="trace-4755"></a>
<a id="trace-4774"></a>
<a id="trace-4785"></a>
<a id="trace-4801"></a>
<a id="trace-4811"></a>
<a id="trace-4833"></a>
<a id="trace-4844"></a>
<a id="trace-4929"></a>
<a id="trace-4938"></a>
<a id="trace-4954"></a>
<a id="trace-4963"></a>
<a id="trace-4979"></a>
<a id="trace-4988"></a>
<a id="trace-5006"></a>
<a id="trace-5020"></a>
<a id="trace-5031"></a>
<a id="trace-5037"></a>
<a id="trace-5122"></a>
<a id="trace-5132"></a>
<a id="trace-5149"></a>
<a id="trace-5159"></a>
<a id="trace-5180"></a>
<a id="trace-5189"></a>
<a id="trace-5206"></a>
<a id="trace-5215"></a>
<a id="trace-5234"></a>
<a id="trace-5246"></a>
<a id="trace-5327"></a>
<a id="trace-5332"></a>
<a id="trace-5410"></a>
<a id="trace-5425"></a>
<a id="trace-5436"></a>
<a id="trace-5452"></a>
<a id="trace-5476"></a>
<a id="trace-5485"></a>
<a id="trace-5508"></a>
<a id="trace-5521"></a>
<a id="trace-5606"></a>
<a id="trace-5617"></a>
<a id="trace-5631"></a>
<a id="trace-5639"></a>
<a id="trace-5655"></a>
<a id="trace-5666"></a>
<a id="trace-5682"></a>
<a id="trace-5691"></a>
<a id="trace-5711"></a>
<a id="trace-5719"></a>
<a id="trace-5800"></a>
<a id="trace-5808"></a>
<a id="trace-5831"></a>
<a id="trace-5843"></a>
<a id="trace-5859"></a>
<a id="trace-5865"></a>
<a id="trace-5882"></a>
<a id="trace-5891"></a>
<a id="trace-5903"></a>
<a id="trace-5911"></a>
<a id="trace-5993"></a>
<a id="trace-6001"></a>
<a id="trace-6014"></a>
<a id="trace-6019"></a>
<a id="trace-6035"></a>
<a id="trace-6041"></a>
<a id="trace-6047"></a>
<a id="trace-6058"></a>
<a id="trace-6198"></a>
<a id="trace-6206"></a>
<a id="trace-6283"></a>
<a id="trace-6294"></a>
<a id="trace-6303"></a>
<a id="trace-6308"></a>
<a id="trace-6319"></a>
<a id="trace-6323"></a>
<a id="trace-6332"></a>
<a id="trace-6340"></a>
<a id="trace-6352"></a>
<a id="trace-6357"></a>
<a id="trace-6431"></a>
<a id="trace-6438"></a>
<a id="trace-6445"></a>
<a id="trace-6449"></a>
<a id="trace-6455"></a>
<a id="trace-6457"></a>
<a id="trace-6462"></a>
<a id="trace-6465"></a>
<a id="trace-6473"></a>
<a id="trace-6478"></a>
<a id="trace-6553"></a>
<a id="trace-6558"></a>
<a id="trace-6567"></a>
<a id="trace-6576"></a>
<a id="trace-6589"></a>
<a id="trace-6596"></a>
<a id="trace-6607"></a>
<a id="trace-6612"></a>
<a id="trace-6621"></a>
<a id="trace-6631"></a>
<a id="trace-6704"></a>
<a id="trace-6714"></a>
<a id="trace-6726"></a>
<a id="trace-6732"></a>
<a id="trace-6744"></a>
<a id="trace-6749"></a>
<a id="trace-6761"></a>
<a id="trace-6768"></a>
<a id="trace-6779"></a>
<a id="trace-6786"></a>
<a id="trace-6859"></a>
<a id="trace-6869"></a>
<a id="trace-6880"></a>
<a id="trace-6889"></a>
<a id="trace-6903"></a>
<a id="trace-6911"></a>
<a id="trace-6922"></a>
<a id="trace-6929"></a>
<a id="trace-6941"></a>
<a id="trace-6947"></a>
<a id="trace-7022"></a>
<a id="trace-7028"></a>
<a id="trace-7040"></a>
<a id="trace-7049"></a>
<a id="trace-7059"></a>
<a id="trace-7067"></a>
<a id="trace-7079"></a>
<a id="trace-7085"></a>
<a id="trace-7098"></a>
<a id="trace-7107"></a>
<a id="trace-7183"></a>
<a id="trace-7190"></a>
<a id="trace-7203"></a>
<a id="trace-7209"></a>
<a id="trace-7218"></a>
<a id="trace-7227"></a>
<a id="trace-7236"></a>
<a id="trace-7245"></a>
<a id="trace-7256"></a>
<a id="trace-7262"></a>
<a id="trace-7339"></a>
<a id="trace-7349"></a>
<a id="trace-7364"></a>
<a id="trace-7372"></a>
<a id="trace-7383"></a>
<a id="trace-7389"></a>
<a id="trace-7399"></a>
<a id="trace-7408"></a>
<a id="trace-7416"></a>
<a id="trace-7425"></a>
<a id="trace-7499"></a>
<a id="trace-7506"></a>
<a id="trace-7519"></a>
<a id="trace-7527"></a>
<a id="trace-7541"></a>
<a id="trace-7547"></a>
<a id="trace-7558"></a>
<a id="trace-7565"></a>
<a id="trace-7577"></a>
<a id="trace-7586"></a>
<a id="trace-7659"></a>
<a id="trace-7669"></a>
<a id="trace-7681"></a>
<a id="trace-7686"></a>
<a id="trace-7697"></a>
<a id="trace-7704"></a>
<a id="trace-7717"></a>
<a id="trace-7725"></a>
<a id="trace-7737"></a>
<a id="trace-7743"></a>
<a id="trace-7817"></a>
<a id="trace-7831"></a>
<a id="trace-7842"></a>
<a id="trace-7851"></a>
<a id="trace-7861"></a>
<a id="trace-7866"></a>
<a id="trace-7877"></a>
<a id="trace-7885"></a>
<a id="trace-7897"></a>
<a id="trace-7904"></a>
<a id="trace-7981"></a>
<a id="trace-7989"></a>
<a id="trace-8001"></a>
<a id="trace-8010"></a>
<a id="trace-8021"></a>
<a id="trace-8031"></a>
<a id="trace-8041"></a>
<a id="trace-8046"></a>
<a id="trace-8057"></a>
<a id="trace-8063"></a>
<a id="trace-8140"></a>
<a id="trace-8147"></a>
<a id="trace-8160"></a>
<a id="trace-8165"></a>
<a id="trace-8177"></a>
<a id="trace-8187"></a>
<a id="trace-8196"></a>
<a id="trace-8206"></a>
<a id="trace-8217"></a>
<a id="trace-8223"></a>
<a id="trace-8299"></a>
<a id="trace-8307"></a>
<a id="trace-8320"></a>
<a id="trace-8326"></a>
<a id="trace-8338"></a>
<a id="trace-8344"></a>
<a id="trace-8355"></a>
<a id="trace-8365"></a>
<a id="trace-8374"></a>
<a id="trace-8383"></a>
<a id="trace-8458"></a>
<a id="trace-8465"></a>
<a id="trace-8479"></a>
<a id="trace-8489"></a>
<a id="trace-8500"></a>
<a id="trace-8506"></a>
<a id="trace-8517"></a>
<a id="trace-8523"></a>
<a id="trace-8533"></a>
<a id="trace-8545"></a>
<a id="trace-8620"></a>
<a id="trace-8630"></a>
<a id="trace-8642"></a>
<a id="trace-8649"></a>
<a id="trace-8660"></a>
<a id="trace-8667"></a>
<a id="trace-8683"></a>
<a id="trace-8689"></a>
<a id="trace-8700"></a>
<a id="trace-8706"></a>
<a id="trace-8781"></a>
<a id="trace-8791"></a>
<a id="trace-8803"></a>
<a id="trace-8814"></a>
<a id="trace-8824"></a>
<a id="trace-8829"></a>
<a id="trace-8841"></a>
<a id="trace-8848"></a>
<a id="trace-8860"></a>
<a id="trace-8869"></a>
<a id="trace-8945"></a>
<a id="trace-8952"></a>
<a id="trace-8964"></a>
<a id="trace-8974"></a>
<a id="trace-8983"></a>
<a id="trace-8993"></a>
<a id="trace-9005"></a>
<a id="trace-9011"></a>
<a id="trace-9022"></a>
<a id="trace-9029"></a>
<a id="trace-9106"></a>
<a id="trace-9113"></a>
<a id="trace-9126"></a>
<a id="trace-9133"></a>
<a id="trace-9144"></a>
<a id="trace-9153"></a>
<a id="trace-9163"></a>
<a id="trace-9172"></a>
<a id="trace-9183"></a>
<a id="trace-9189"></a>
<a id="trace-9265"></a>
<a id="trace-9273"></a>
<a id="trace-9287"></a>
<a id="trace-9293"></a>
<a id="trace-9304"></a>
<a id="trace-9311"></a>
<a id="trace-9321"></a>
<a id="trace-9330"></a>
<a id="trace-9341"></a>
<a id="trace-9351"></a>
<a id="trace-9426"></a>
<a id="trace-9433"></a>
<a id="trace-9447"></a>
<a id="trace-9456"></a>
<a id="trace-9471"></a>
<a id="trace-9477"></a>
<a id="trace-9488"></a>
<a id="trace-9493"></a>
<a id="trace-9503"></a>
<a id="trace-9512"></a>
<a id="trace-9585"></a>
<a id="trace-9599"></a>
<a id="trace-9611"></a>
<a id="trace-9618"></a>
<a id="trace-9629"></a>
<a id="trace-9638"></a>
<a id="trace-9651"></a>
<a id="trace-9657"></a>
<a id="trace-9668"></a>
<a id="trace-9674"></a>
<a id="trace-9748"></a>
<a id="trace-9758"></a>
<a id="trace-9768"></a>
<a id="trace-9777"></a>
<a id="trace-9790"></a>
<a id="trace-9797"></a>
<a id="trace-9809"></a>
<a id="trace-9815"></a>
<a id="trace-9828"></a>
<a id="trace-9836"></a>
<a id="trace-9911"></a>
<a id="trace-9918"></a>
<a id="trace-9929"></a>
<a id="trace-9938"></a>
<a id="trace-9946"></a>
<a id="trace-9956"></a>
<a id="trace-9966"></a>
<a id="trace-9972"></a>
<a id="trace-9984"></a>
<a id="trace-9994"></a>
<a id="trace-10071"></a>
<a id="trace-10079"></a>
<a id="trace-10094"></a>
<a id="trace-10099"></a>
<a id="trace-10109"></a>
<a id="trace-10118"></a>
<a id="trace-10127"></a>
<a id="trace-10136"></a>
<a id="trace-10145"></a>
<a id="trace-10151"></a>
<a id="trace-10226"></a>
<a id="trace-10234"></a>
<a id="trace-10249"></a>
<a id="trace-10258"></a>
<a id="trace-10271"></a>
<a id="trace-10277"></a>
<a id="trace-10288"></a>
<a id="trace-10297"></a>
<a id="trace-10306"></a>
<a id="trace-10315"></a>
<a id="trace-10392"></a>
<a id="trace-10398"></a>
<a id="trace-10411"></a>
<a id="trace-10418"></a>
<a id="trace-10431"></a>
<a id="trace-10437"></a>
<a id="trace-10452"></a>
<a id="trace-10459"></a>
<a id="trace-10470"></a>
<a id="trace-10481"></a>
<a id="trace-10555"></a>
<a id="trace-10565"></a>
<a id="trace-10576"></a>
<a id="trace-10582"></a>
<a id="trace-10593"></a>
<a id="trace-10599"></a>
<a id="trace-10610"></a>
<a id="trace-10617"></a>
<a id="trace-10628"></a>
<a id="trace-10636"></a>
<a id="trace-10713"></a>
<a id="trace-10724"></a>
<a id="trace-10737"></a>
<a id="trace-10745"></a>
<a id="trace-10755"></a>
<a id="trace-10760"></a>
<a id="trace-10771"></a>
<a id="trace-10778"></a>
<a id="trace-10790"></a>
<a id="trace-10796"></a>
<a id="trace-10872"></a>
<a id="trace-10879"></a>
<a id="trace-10892"></a>
<a id="trace-10902"></a>
<a id="trace-10914"></a>
<a id="trace-10926"></a>
<a id="trace-10936"></a>
<a id="trace-10942"></a>
<a id="trace-10953"></a>
<a id="trace-10960"></a>
<a id="trace-11036"></a>
<a id="trace-11043"></a>
<a id="trace-11055"></a>
<a id="trace-11061"></a>
<a id="trace-11071"></a>
<a id="trace-11082"></a>
<a id="trace-11091"></a>
<a id="trace-11101"></a>
<a id="trace-11115"></a>
<a id="trace-11122"></a>
<a id="trace-11196"></a>
<a id="trace-11204"></a>
<a id="trace-11218"></a>
<a id="trace-11223"></a>
<a id="trace-11233"></a>
<a id="trace-11242"></a>
<a id="trace-11252"></a>
<a id="trace-11261"></a>
<a id="trace-11271"></a>
<a id="trace-11281"></a>
<a id="trace-11355"></a>
<a id="trace-11362"></a>
<a id="trace-11380"></a>
<a id="trace-11387"></a>
<a id="trace-11398"></a>
<a id="trace-11405"></a>
<a id="trace-11415"></a>
<a id="trace-11421"></a>
<a id="trace-11431"></a>
<a id="trace-11440"></a>
<a id="trace-11512"></a>
<a id="trace-11522"></a>
<a id="trace-11535"></a>
<a id="trace-11541"></a>
<a id="trace-11554"></a>
<a id="trace-11565"></a>
<a id="trace-11578"></a>
<a id="trace-11584"></a>
<a id="trace-11595"></a>
<a id="trace-11601"></a>
<a id="trace-11675"></a>
<a id="trace-11684"></a>
<a id="trace-11695"></a>
<a id="trace-11704"></a>
<a id="trace-11714"></a>
<a id="trace-11721"></a>
<a id="trace-11733"></a>
<a id="trace-11741"></a>
<a id="trace-11756"></a>
<a id="trace-11764"></a>
<a id="trace-11839"></a>
<a id="trace-11846"></a>
<a id="trace-11858"></a>
<a id="trace-11866"></a>
<a id="trace-11875"></a>
<a id="trace-11884"></a>
<a id="trace-11894"></a>
<a id="trace-11900"></a>
<a id="trace-11912"></a>
<a id="trace-11919"></a>
<a id="trace-11996"></a>
<a id="trace-12006"></a>
<a id="trace-12019"></a>
<a id="trace-12026"></a>
<a id="trace-12047"></a>
<a id="trace-12056"></a>
<a id="trace-12065"></a>
<a id="trace-12075"></a>
<a id="trace-12081"></a>
<a id="trace-12159"></a>
<a id="trace-12167"></a>
<a id="trace-12181"></a>
<a id="trace-12188"></a>
<a id="trace-12202"></a>
<a id="trace-12208"></a>
<a id="trace-12217"></a>
<a id="trace-12229"></a>
<a id="trace-12237"></a>
<a id="trace-12246"></a>
<a id="trace-12319"></a>
<a id="trace-12327"></a>
<a id="trace-12340"></a>
<a id="trace-12347"></a>
<a id="trace-12360"></a>
<a id="trace-12365"></a>
<a id="trace-12377"></a>
<a id="trace-12384"></a>
<a id="trace-12396"></a>
<a id="trace-12405"></a>
<a id="trace-12480"></a>
<a id="trace-12491"></a>
<a id="trace-12503"></a>
<a id="trace-12508"></a>
<a id="trace-12519"></a>
<a id="trace-12526"></a>
<a id="trace-12538"></a>
<a id="trace-12543"></a>
<a id="trace-12554"></a>
<a id="trace-12560"></a>
<a id="trace-12635"></a>
<a id="trace-12648"></a>
<a id="trace-12658"></a>
<a id="trace-12667"></a>
<a id="trace-12679"></a>
<a id="trace-12684"></a>
<a id="trace-12695"></a>
<a id="trace-12701"></a>
<a id="trace-12712"></a>
<a id="trace-12718"></a>
<a id="trace-12793"></a>
<a id="trace-12801"></a>
<a id="trace-12813"></a>
<a id="trace-12823"></a>
<a id="trace-12834"></a>
<a id="trace-12842"></a>
<a id="trace-12853"></a>
<a id="trace-12858"></a>
<a id="trace-12870"></a>
<a id="trace-12880"></a>
<a id="trace-12955"></a>
<a id="trace-12962"></a>
<a id="trace-12975"></a>
<a id="trace-12981"></a>
<a id="trace-12992"></a>
<a id="trace-13003"></a>
<a id="trace-13012"></a>
<a id="trace-13022"></a>
<a id="trace-13032"></a>
<a id="trace-13039"></a>
<a id="trace-13113"></a>
<a id="trace-13121"></a>
<a id="trace-13139"></a>
<a id="trace-13145"></a>
<a id="trace-13156"></a>
<a id="trace-13162"></a>
<a id="trace-13173"></a>
<a id="trace-13183"></a>
<a id="trace-13192"></a>
<a id="trace-13202"></a>
<a id="trace-13278"></a>
<a id="trace-13285"></a>
<a id="trace-13298"></a>
<a id="trace-13305"></a>
<a id="trace-13317"></a>
<a id="trace-13326"></a>
<a id="trace-13338"></a>
<a id="trace-13343"></a>
<a id="trace-13353"></a>
<a id="trace-13361"></a>
<a id="trace-13435"></a>
<a id="trace-13445"></a>
<a id="trace-13458"></a>
<a id="trace-13463"></a>
<a id="trace-13476"></a>
<a id="trace-13483"></a>
<a id="trace-13495"></a>
<a id="trace-13501"></a>
<a id="trace-13512"></a>
<a id="trace-13519"></a>
<a id="trace-13595"></a>
<a id="trace-13606"></a>
<a id="trace-13617"></a>
<a id="trace-13626"></a>
<a id="trace-13636"></a>
<a id="trace-13642"></a>
<a id="trace-13653"></a>
<a id="trace-13662"></a>
<a id="trace-13673"></a>
<a id="trace-13679"></a>
<a id="trace-13754"></a>
<a id="trace-13762"></a>
<a id="trace-13774"></a>
<a id="trace-13783"></a>
<a id="trace-13794"></a>
<a id="trace-13804"></a>
<a id="trace-13813"></a>
<a id="trace-13820"></a>
<a id="trace-13831"></a>
<a id="trace-13838"></a>
<a id="trace-13919"></a>
<a id="trace-13925"></a>
<a id="trace-13938"></a>
<a id="trace-13944"></a>
<a id="trace-13954"></a>
<a id="trace-13964"></a>
<a id="trace-13973"></a>
<a id="trace-13986"></a>
<a id="trace-13996"></a>
<a id="trace-14002"></a>
<a id="trace-14078"></a>
<a id="trace-14087"></a>
<a id="trace-14102"></a>
<a id="trace-14110"></a>
<a id="trace-14121"></a>
<a id="trace-14126"></a>
<a id="trace-14136"></a>
<a id="trace-14145"></a>
<a id="trace-14153"></a>
<a id="trace-14162"></a>
<a id="trace-14238"></a>
<a id="trace-14245"></a>
<a id="trace-14258"></a>
<a id="trace-14265"></a>
<a id="trace-14277"></a>
<a id="trace-14284"></a>
<a id="trace-14297"></a>
<a id="trace-14303"></a>
<a id="trace-14313"></a>
<a id="trace-14322"></a>
- 1.60s–359.80s (×715), actor 37, squad 4 (trace 211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6015889861122742, 'next_transition': 232}.
<a id="trace-458"></a>
<a id="trace-471"></a>
<a id="trace-479"></a>
<a id="trace-562"></a>
<a id="trace-570"></a>
- 8.70s–10.70s (×5), actor 5, squad 0 (trace 458): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 293. Next observer evidence: {'until': 9, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450155296787555, 'next_transition': 471}.
<a id="trace-577"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 577): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 484. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250912527143685, 'next_transition': 688}.
<a id="trace-688"></a>
<a id="trace-753"></a>
- 11.20s–13.20s (×2), actor 5, squad 0 (trace 688): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 486. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.8196640441445977, 'next_transition': 753}.
<a id="trace-142"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (events line 142): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.889979664471283, 'next_transition': 793}.
<a id="trace-769"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 769): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 769. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.889979664471283, 'next_transition': 793}.
<a id="trace-770"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 770): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 770. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.889979664471283, 'next_transition': 793}.
<a id="trace-793"></a>
<a id="trace-806"></a>
<a id="trace-890"></a>
<a id="trace-900"></a>
<a id="trace-922"></a>
<a id="trace-937"></a>
<a id="trace-951"></a>
<a id="trace-961"></a>
<a id="trace-991"></a>
- 14.20s–18.75s (×9), actor 5, squad 0 (trace 793): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 13.75s, trace 770. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8662340082816917, 'next_transition': 806}.
<a id="trace-999"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 999): traveling overwatch. Knowledge: actor memory at 15.00s, trace 814. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5306053709454532, 'next_transition': 1135}.
<a id="trace-1000"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 1000): received platoon directive. Knowledge: actor memory at 15.00s, trace 814. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5306053709454532, 'next_transition': 1135}.
<a id="trace-1135"></a>
<a id="trace-1146"></a>
<a id="trace-1231"></a>
<a id="trace-1255"></a>
<a id="trace-1289"></a>
<a id="trace-1340"></a>
- 19.25s–23.25s (×6), actor 5, squad 0 (trace 1135): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 816. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449890142487035, 'next_transition': 1146}.
<a id="trace-1366"></a>
- 24.15s–24.15s (×1), actor 0, squad 0 (trace 1366): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1154. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.314995091759786, 'next_transition': 1414}.
<a id="trace-1414"></a>
<a id="trace-1429"></a>
<a id="trace-1509"></a>
<a id="trace-1516"></a>
- 24.25s–25.75s (×4), actor 5, squad 0 (trace 1414): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1156. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3380550876785271, 'next_transition': 1429}.
<a id="trace-1556"></a>
- 27.15s–27.15s (×1), actor 0, squad 0 (trace 1556): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 25.00s, trace 1438. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1685}.
<a id="trace-1685"></a>
<a id="trace-1698"></a>
- 27.25s–28.25s (×2), actor 5, squad 0 (trace 1685): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1440. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35436703138307035, 'next_transition': 1698}.
<a id="trace-1707"></a>
- 29.00s–29.00s (×1), actor 0, squad 0 (trace 1707): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 1438. Next observer evidence: None.
<a id="trace-1708"></a>
- 29.00s–29.00s (×1), actor 0, squad 0 (trace 1708): bounding overwatch. Knowledge: actor memory at 25.00s, trace 1438. Next observer evidence: None.
<a id="trace-1709"></a>
<a id="trace-1837"></a>
- 29.00s–29.05s (×2), actor 0, squad 0 (trace 1709): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 1438. Next observer evidence: None.
<a id="trace-1989"></a>
<a id="trace-2067"></a>
<a id="trace-2085"></a>
<a id="trace-2131"></a>
<a id="trace-2174"></a>
- 29.75s–32.25s (×5), actor 5, squad 0 (trace 1989): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1440. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06655086851424288, 'next_transition': 2067}.
<a id="trace-2196"></a>
- 32.55s–32.55s (×1), actor 0, squad 0 (trace 2196): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 30.00s, trace 1996. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5199951332287981, 'next_transition': 2397}.
<a id="trace-2197"></a>
- 32.55s–32.55s (×1), actor 0, squad 0 (trace 2197): rearward bound: one stationary suppressing element. Knowledge: actor memory at 30.00s, trace 1996. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5199951332287981, 'next_transition': 2397}.
<a id="trace-2397"></a>
<a id="trace-2413"></a>
<a id="trace-2450"></a>
<a id="trace-2472"></a>
<a id="trace-2563"></a>
<a id="trace-2581"></a>
<a id="trace-2653"></a>
<a id="trace-2687"></a>
<a id="trace-2772"></a>
<a id="trace-2820"></a>
<a id="trace-2888"></a>
<a id="trace-2994"></a>
<a id="trace-3019"></a>
<a id="trace-3034"></a>
- 33.25s–41.25s (×14), actor 5, squad 0 (trace 2397): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1998. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2413}.
<a id="trace-449"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (events line 449): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3037"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (trace 3037): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.039534 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 41.35s, trace 3037. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0773427725529237, 'next_transition': 3062}.
<a id="trace-3038"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (trace 3038): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.039534 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 41.35s, trace 3038. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0773427725529237, 'next_transition': 3062}.
<a id="trace-3062"></a>
<a id="trace-3103"></a>
<a id="trace-3142"></a>
<a id="trace-3178"></a>
<a id="trace-3209"></a>
- 41.75s–43.75s (×5), actor 5, squad 0 (trace 3062): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 41.35s, trace 3038. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.420806681040536, 'next_transition': 3103}.
<a id="trace-3426"></a>
- 45.60s–45.60s (×1), actor 0, squad 0 (trace 3426): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 3332. Next observer evidence: None.
<a id="trace-3427"></a>
- 45.60s–45.60s (×1), actor 0, squad 0 (trace 3427): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 3332. Next observer evidence: None.
<a id="trace-3494"></a>
<a id="trace-3549"></a>
<a id="trace-3586"></a>
<a id="trace-3615"></a>
<a id="trace-3641"></a>
<a id="trace-3692"></a>
<a id="trace-3704"></a>
<a id="trace-3709"></a>
<a id="trace-3791"></a>
<a id="trace-3800"></a>
- 45.75s–50.75s (×10), actor 5, squad 0 (trace 3494): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3334. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9457861934239936, 'next_transition': 3549}.
<a id="trace-3803"></a>
- 50.85s–50.85s (×1), actor 0, squad 0 (trace 3803): NeedSupport. Knowledge: actor memory at 50.00s, trace 3713. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499813144287075, 'next_transition': 3813}.
<a id="trace-3813"></a>
<a id="trace-3832"></a>
<a id="trace-3843"></a>
<a id="trace-3851"></a>
<a id="trace-3857"></a>
<a id="trace-3873"></a>
<a id="trace-3882"></a>
<a id="trace-3960"></a>
<a id="trace-3979"></a>
<a id="trace-3992"></a>
<a id="trace-4004"></a>
<a id="trace-4010"></a>
<a id="trace-4030"></a>
- 51.25s–58.25s (×13), actor 5, squad 0 (trace 3813): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 3715. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875016709069576, 'next_transition': 3832}.
<a id="trace-4034"></a>
- 58.35s–58.35s (×1), actor 0, squad 0 (trace 4034): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 3887. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300377294650492, 'next_transition': 4114}.
<a id="trace-4056"></a>
- 58.35s–58.35s (×1), actor 0, squad 0 (trace 4056): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 3887. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300377294650492, 'next_transition': 4114}.
<a id="trace-4114"></a>
<a id="trace-4133"></a>
<a id="trace-4140"></a>
<a id="trace-4226"></a>
<a id="trace-4246"></a>
<a id="trace-4264"></a>
<a id="trace-4273"></a>
<a id="trace-4294"></a>
<a id="trace-4306"></a>
<a id="trace-4318"></a>
<a id="trace-4326"></a>
<a id="trace-4343"></a>
<a id="trace-4352"></a>
<a id="trace-4434"></a>
<a id="trace-4442"></a>
- 58.75s–65.75s (×15), actor 5, squad 0 (trace 4114): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3889. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23029771016924228, 'next_transition': 4133}.
<a id="trace-4478"></a>
- 67.00s–67.00s (×1), actor 0, squad 0 (trace 4478): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 65.00s, trace 4364. Next observer evidence: None.
<a id="trace-4482"></a>
- 67.05s–67.05s (×1), actor 0, squad 0 (trace 4482): MoveTactically. Knowledge: actor memory at 65.00s, trace 4364. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748549536385995, 'next_transition': 4543}.
<a id="trace-4483"></a>
- 67.05s–67.05s (×1), actor 0, squad 0 (trace 4483): traveling overwatch. Knowledge: actor memory at 65.00s, trace 4364. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748549536385995, 'next_transition': 4543}.
<a id="trace-4484"></a>
- 67.05s–67.05s (×1), actor 0, squad 0 (trace 4484): received platoon directive. Knowledge: actor memory at 65.00s, trace 4364. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748549536385995, 'next_transition': 4543}.
<a id="trace-4543"></a>
<a id="trace-4556"></a>
<a id="trace-4620"></a>
<a id="trace-4629"></a>
<a id="trace-4723"></a>
<a id="trace-4730"></a>
<a id="trace-4746"></a>
<a id="trace-4772"></a>
<a id="trace-4799"></a>
<a id="trace-4809"></a>
<a id="trace-4831"></a>
<a id="trace-4842"></a>
<a id="trace-4927"></a>
<a id="trace-4936"></a>
<a id="trace-4952"></a>
<a id="trace-4961"></a>
<a id="trace-4977"></a>
<a id="trace-4986"></a>
<a id="trace-5018"></a>
<a id="trace-5120"></a>
<a id="trace-5147"></a>
<a id="trace-5178"></a>
<a id="trace-5187"></a>
<a id="trace-5204"></a>
<a id="trace-5213"></a>
<a id="trace-5232"></a>
<a id="trace-5244"></a>
<a id="trace-5325"></a>
- 67.25s–85.25s (×28), actor 5, squad 0 (trace 4543): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 4366. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499590175905406, 'next_transition': 4556}.
<a id="trace-5337"></a>
- 85.95s–85.95s (×1), actor 0, squad 0 (trace 5337): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 85.00s, trace 5254. Next observer evidence: {'until': 86, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31502554342849465, 'next_transition': 5341}.
<a id="trace-5341"></a>
- 86.00s–86.00s (×1), actor 0, squad 0 (trace 5341): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 5254. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449775757649936, 'next_transition': 5423}.
<a id="trace-5423"></a>
<a id="trace-5450"></a>
<a id="trace-5474"></a>
<a id="trace-5506"></a>
<a id="trace-5519"></a>
<a id="trace-5604"></a>
<a id="trace-5615"></a>
<a id="trace-5629"></a>
<a id="trace-5637"></a>
<a id="trace-5653"></a>
<a id="trace-5664"></a>
<a id="trace-5680"></a>
<a id="trace-5689"></a>
<a id="trace-5717"></a>
<a id="trace-5806"></a>
<a id="trace-5829"></a>
<a id="trace-5841"></a>
<a id="trace-5857"></a>
<a id="trace-5863"></a>
<a id="trace-5880"></a>
<a id="trace-5889"></a>
<a id="trace-5901"></a>
<a id="trace-6012"></a>
<a id="trace-6017"></a>
<a id="trace-6033"></a>
<a id="trace-6039"></a>
<a id="trace-6056"></a>
- 86.75s–103.75s (×27), actor 5, squad 0 (trace 5423): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 5256. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.220664186984206, 'next_transition': 5450}.
<a id="trace-6064"></a>
- 104.15s–104.15s (×1), actor 0, squad 0 (trace 6064): ReactToContact: cover and return fire. Knowledge: actor memory at 100.00s, trace 5918. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07187383225138338, 'next_transition': 6196}.
<a id="trace-6065"></a>
- 104.15s–104.15s (×1), actor 0, squad 0 (trace 6065): bounding overwatch. Knowledge: actor memory at 100.00s, trace 5918. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07187383225138338, 'next_transition': 6196}.
<a id="trace-6066"></a>
- 104.15s–104.15s (×1), actor 0, squad 0 (trace 6066): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 100.00s, trace 5918. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07187383225138338, 'next_transition': 6196}.
<a id="trace-6196"></a>
<a id="trace-6301"></a>
<a id="trace-6317"></a>
<a id="trace-6321"></a>
<a id="trace-6330"></a>
- 104.25s–108.25s (×5), actor 5, squad 0 (trace 6196): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 5920. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.7312948826285304, 'next_transition': 6301}.
<a id="trace-6333"></a>
- 108.25s–108.25s (×1), actor 1, squad 0 (trace 6333): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 105.00s, trace 6213. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0500362597019135, 'next_transition': 6350}.
<a id="trace-6350"></a>
<a id="trace-6355"></a>
- 109.25s–109.75s (×2), actor 5, squad 0 (trace 6350): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 6214. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400027195723178, 'next_transition': 6355}.
<a id="trace-1047"></a>
- 110.45s–110.45s (×1), actor 5, squad 0 (events line 1047): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000135978616004, 'next_transition': 6436}.
<a id="trace-6432"></a>
- 110.45s–110.45s (×1), actor 5, squad 0 (trace 6432): renew committed intent (75 s lifetime). Knowledge: actor memory at 110.45s, trace 6432. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000135978616004, 'next_transition': 6436}.
<a id="trace-6436"></a>
<a id="trace-6443"></a>
<a id="trace-6447"></a>
- 110.75s–111.75s (×3), actor 5, squad 0 (trace 6436): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.45s, trace 6432. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.26000407937595, 'next_transition': 6443}.
<a id="trace-6474"></a>
- 114.25s–114.25s (×1), actor 1, squad 0 (trace 6474): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 110.00s, trace 6358. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1000058402299504, 'next_transition': 6551}.
<a id="trace-6551"></a>
<a id="trace-6556"></a>
<a id="trace-6565"></a>
- 115.25s–116.25s (×3), actor 5, squad 0 (trace 6551): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6482. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7477104342665747, 'next_transition': 6556}.
<a id="trace-6568"></a>
- 116.40s–116.40s (×1), actor 1, squad 0 (trace 6568): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 115.00s, trace 6481. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6587}.
<a id="trace-6569"></a>
- 116.40s–116.40s (×1), actor 1, squad 0 (trace 6569): ; retain contact cover stage. Knowledge: actor memory at 115.00s, trace 6481. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6587}.
<a id="trace-6587"></a>
<a id="trace-6594"></a>
<a id="trace-6605"></a>
<a id="trace-6629"></a>
<a id="trace-6702"></a>
<a id="trace-6712"></a>
<a id="trace-6724"></a>
<a id="trace-6730"></a>
<a id="trace-6742"></a>
<a id="trace-6759"></a>
<a id="trace-6766"></a>
<a id="trace-6777"></a>
<a id="trace-6784"></a>
<a id="trace-6867"></a>
<a id="trace-6878"></a>
<a id="trace-6887"></a>
<a id="trace-6901"></a>
<a id="trace-6909"></a>
<a id="trace-6927"></a>
<a id="trace-6939"></a>
<a id="trace-6945"></a>
<a id="trace-7020"></a>
<a id="trace-7038"></a>
<a id="trace-7047"></a>
<a id="trace-7057"></a>
<a id="trace-7077"></a>
<a id="trace-7083"></a>
<a id="trace-7105"></a>
<a id="trace-7188"></a>
<a id="trace-7201"></a>
<a id="trace-7207"></a>
<a id="trace-7225"></a>
<a id="trace-7234"></a>
<a id="trace-7243"></a>
<a id="trace-7254"></a>
<a id="trace-7260"></a>
<a id="trace-7337"></a>
<a id="trace-7347"></a>
<a id="trace-7362"></a>
<a id="trace-7370"></a>
<a id="trace-7381"></a>
<a id="trace-7397"></a>
<a id="trace-7406"></a>
<a id="trace-7423"></a>
<a id="trace-7497"></a>
<a id="trace-7517"></a>
<a id="trace-7525"></a>
<a id="trace-7539"></a>
<a id="trace-7556"></a>
<a id="trace-7563"></a>
<a id="trace-7584"></a>
<a id="trace-7657"></a>
<a id="trace-7667"></a>
<a id="trace-7679"></a>
<a id="trace-7702"></a>
<a id="trace-7715"></a>
<a id="trace-7723"></a>
<a id="trace-7735"></a>
<a id="trace-7741"></a>
<a id="trace-7815"></a>
<a id="trace-7829"></a>
<a id="trace-7840"></a>
<a id="trace-7849"></a>
<a id="trace-7859"></a>
<a id="trace-7875"></a>
<a id="trace-7883"></a>
<a id="trace-7895"></a>
<a id="trace-7902"></a>
<a id="trace-7979"></a>
<a id="trace-7987"></a>
<a id="trace-7999"></a>
<a id="trace-8019"></a>
<a id="trace-8029"></a>
<a id="trace-8039"></a>
<a id="trace-8055"></a>
<a id="trace-8138"></a>
<a id="trace-8145"></a>
<a id="trace-8175"></a>
<a id="trace-8185"></a>
<a id="trace-8194"></a>
<a id="trace-8204"></a>
<a id="trace-8221"></a>
<a id="trace-8297"></a>
<a id="trace-8305"></a>
<a id="trace-8324"></a>
<a id="trace-8336"></a>
<a id="trace-8342"></a>
<a id="trace-8353"></a>
<a id="trace-8372"></a>
<a id="trace-8381"></a>
<a id="trace-8456"></a>
<a id="trace-8463"></a>
<a id="trace-8477"></a>
<a id="trace-8487"></a>
<a id="trace-8504"></a>
<a id="trace-8515"></a>
<a id="trace-8531"></a>
- 117.25s–179.30s (×97), actor 5, squad 0 (trace 6587): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6482. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6594}.
<a id="trace-1526"></a>
- 179.55s–179.55s (×1), actor 5, squad 0 (events line 1526): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8543}.
<a id="trace-8539"></a>
- 179.55s–179.55s (×1), actor 5, squad 0 (trace 8539): renew committed intent (75 s lifetime). Knowledge: actor memory at 179.55s, trace 8539. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8543}.
<a id="trace-8543"></a>
<a id="trace-8618"></a>
<a id="trace-8628"></a>
<a id="trace-8640"></a>
<a id="trace-8647"></a>
<a id="trace-8658"></a>
<a id="trace-8665"></a>
<a id="trace-8681"></a>
<a id="trace-8687"></a>
<a id="trace-8698"></a>
<a id="trace-8704"></a>
<a id="trace-8779"></a>
<a id="trace-8789"></a>
<a id="trace-8801"></a>
<a id="trace-8812"></a>
<a id="trace-8822"></a>
<a id="trace-8839"></a>
<a id="trace-8846"></a>
<a id="trace-8858"></a>
<a id="trace-8867"></a>
<a id="trace-8943"></a>
<a id="trace-8950"></a>
<a id="trace-8962"></a>
<a id="trace-8972"></a>
<a id="trace-8981"></a>
<a id="trace-8991"></a>
<a id="trace-9003"></a>
<a id="trace-9009"></a>
<a id="trace-9020"></a>
<a id="trace-9027"></a>
<a id="trace-9104"></a>
<a id="trace-9111"></a>
<a id="trace-9124"></a>
<a id="trace-9131"></a>
<a id="trace-9161"></a>
<a id="trace-9170"></a>
<a id="trace-9181"></a>
<a id="trace-9187"></a>
<a id="trace-9271"></a>
<a id="trace-9285"></a>
<a id="trace-9291"></a>
<a id="trace-9302"></a>
<a id="trace-9309"></a>
<a id="trace-9319"></a>
<a id="trace-9328"></a>
<a id="trace-9349"></a>
<a id="trace-9424"></a>
<a id="trace-9431"></a>
<a id="trace-9445"></a>
<a id="trace-9454"></a>
- 179.80s–206.80s (×50), actor 5, squad 0 (trace 8543): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 179.55s, trace 8539. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8618}.
<a id="trace-1737"></a>
- 207.15s–207.15s (×1), actor 5, squad 0 (events line 1737): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9461"></a>
- 207.15s–207.15s (×1), actor 5, squad 0 (trace 9461): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 207.15s, trace 9461. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9469}.
<a id="trace-9462"></a>
- 207.15s–207.15s (×1), actor 5, squad 0 (trace 9462): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 207.15s, trace 9462. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9469}.
<a id="trace-9469"></a>
<a id="trace-9475"></a>
<a id="trace-9486"></a>
<a id="trace-9501"></a>
<a id="trace-9583"></a>
<a id="trace-9597"></a>
<a id="trace-9609"></a>
<a id="trace-9616"></a>
<a id="trace-9627"></a>
- 207.30s–212.30s (×9), actor 5, squad 0 (trace 9469): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 207.15s, trace 9462. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9475}.
<a id="trace-9633"></a>
- 212.50s–212.50s (×1), actor 1, squad 0 (trace 9633): received platoon directive; retain contact cover stage. Knowledge: actor memory at 210.00s, trace 9513. Next observer evidence: {'until': 212.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9636}.
<a id="trace-9636"></a>
<a id="trace-9655"></a>
<a id="trace-9666"></a>
<a id="trace-9672"></a>
<a id="trace-9746"></a>
<a id="trace-9775"></a>
<a id="trace-9788"></a>
<a id="trace-9795"></a>
<a id="trace-9807"></a>
<a id="trace-9826"></a>
<a id="trace-9834"></a>
<a id="trace-9909"></a>
<a id="trace-9916"></a>
<a id="trace-9936"></a>
<a id="trace-9954"></a>
<a id="trace-9964"></a>
<a id="trace-9970"></a>
<a id="trace-9982"></a>
<a id="trace-9992"></a>
<a id="trace-10069"></a>
<a id="trace-10077"></a>
<a id="trace-10092"></a>
<a id="trace-10107"></a>
<a id="trace-10116"></a>
<a id="trace-10125"></a>
<a id="trace-10134"></a>
<a id="trace-10149"></a>
<a id="trace-10232"></a>
<a id="trace-10247"></a>
<a id="trace-10256"></a>
<a id="trace-10269"></a>
<a id="trace-10275"></a>
<a id="trace-10295"></a>
<a id="trace-10304"></a>
- 212.80s–234.30s (×34), actor 5, squad 0 (trace 9636): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 9514. Next observer evidence: {'until': 213.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9655}.
<a id="trace-1948"></a>
- 234.80s–234.80s (×1), actor 5, squad 0 (events line 1948): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10390}.
<a id="trace-10313"></a>
- 234.80s–234.80s (×1), actor 5, squad 0 (trace 10313): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 10156. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10390}.
<a id="trace-10316"></a>
- 234.80s–234.80s (×1), actor 5, squad 0 (trace 10316): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 234.80s, trace 10316. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10390}.
<a id="trace-10317"></a>
- 234.80s–234.80s (×1), actor 5, squad 0 (trace 10317): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 234.80s, trace 10317. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10390}.
<a id="trace-10390"></a>
<a id="trace-10409"></a>
<a id="trace-10416"></a>
<a id="trace-10429"></a>
<a id="trace-10435"></a>
<a id="trace-10450"></a>
<a id="trace-10457"></a>
<a id="trace-10468"></a>
<a id="trace-10479"></a>
- 235.30s–239.80s (×9), actor 5, squad 0 (trace 10390): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 10321. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10409}.
<a id="trace-10491"></a>
- 240.15s–240.15s (×1), actor 1, squad 0 (trace 10491): received platoon directive; retain contact cover stage. Knowledge: actor memory at 240.00s, trace 10482. Next observer evidence: {'until': 240.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10553}.
<a id="trace-10553"></a>
<a id="trace-10563"></a>
<a id="trace-10580"></a>
<a id="trace-10591"></a>
<a id="trace-10615"></a>
<a id="trace-10626"></a>
<a id="trace-10634"></a>
<a id="trace-10711"></a>
<a id="trace-10722"></a>
<a id="trace-10735"></a>
<a id="trace-10753"></a>
<a id="trace-10769"></a>
<a id="trace-10776"></a>
<a id="trace-10788"></a>
<a id="trace-10794"></a>
<a id="trace-10870"></a>
<a id="trace-10877"></a>
<a id="trace-10890"></a>
<a id="trace-10900"></a>
<a id="trace-10912"></a>
<a id="trace-10924"></a>
<a id="trace-10934"></a>
<a id="trace-10940"></a>
<a id="trace-10951"></a>
<a id="trace-10958"></a>
<a id="trace-11034"></a>
<a id="trace-11041"></a>
<a id="trace-11059"></a>
<a id="trace-11069"></a>
<a id="trace-11080"></a>
<a id="trace-11089"></a>
<a id="trace-11099"></a>
<a id="trace-11120"></a>
<a id="trace-11202"></a>
<a id="trace-11216"></a>
- 240.30s–261.30s (×35), actor 5, squad 0 (trace 10553): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 10483. Next observer evidence: {'until': 240.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10563}.
<a id="trace-11235"></a>
- 262.40s–262.40s (×1), actor 5, squad 0 (trace 11235): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 262.40s, trace 11235. Next observer evidence: {'until': 262.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2159}.
<a id="trace-11236"></a>
- 262.40s–262.40s (×1), actor 5, squad 0 (trace 11236): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 262.40s, trace 11236. Next observer evidence: {'until': 262.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2159}.
<a id="trace-2159"></a>
- 262.40s–262.40s (×1), actor 5, squad 0 (events line 2159): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 262.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11240}.
<a id="trace-11240"></a>
<a id="trace-11250"></a>
<a id="trace-11259"></a>
<a id="trace-11269"></a>
<a id="trace-11279"></a>
<a id="trace-11378"></a>
<a id="trace-11385"></a>
- 262.80s–266.80s (×7), actor 5, squad 0 (trace 11240): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 262.40s, trace 11236. Next observer evidence: {'until': 263.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11250}.
<a id="trace-11401"></a>
- 267.75s–267.75s (×1), actor 1, squad 0 (trace 11401): received platoon directive; retain contact cover stage. Knowledge: actor memory at 265.00s, trace 11283. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11403}.
<a id="trace-11403"></a>
<a id="trace-11419"></a>
<a id="trace-11429"></a>
<a id="trace-11438"></a>
<a id="trace-11520"></a>
<a id="trace-11539"></a>
<a id="trace-11552"></a>
<a id="trace-11563"></a>
<a id="trace-11576"></a>
<a id="trace-11582"></a>
<a id="trace-11593"></a>
<a id="trace-11599"></a>
<a id="trace-11673"></a>
<a id="trace-11693"></a>
<a id="trace-11702"></a>
<a id="trace-11712"></a>
<a id="trace-11719"></a>
<a id="trace-11731"></a>
<a id="trace-11739"></a>
<a id="trace-11754"></a>
<a id="trace-11762"></a>
<a id="trace-11837"></a>
<a id="trace-11856"></a>
<a id="trace-11873"></a>
<a id="trace-11882"></a>
<a id="trace-11892"></a>
<a id="trace-11898"></a>
<a id="trace-11910"></a>
<a id="trace-11917"></a>
<a id="trace-11994"></a>
<a id="trace-12004"></a>
<a id="trace-12017"></a>
<a id="trace-12024"></a>
<a id="trace-12037"></a>
<a id="trace-12045"></a>
<a id="trace-12054"></a>
<a id="trace-12063"></a>
<a id="trace-12073"></a>
<a id="trace-12079"></a>
- 267.80s–289.80s (×39), actor 5, squad 0 (trace 11403): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 11284. Next observer evidence: {'until': 268.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11419}.
<a id="trace-2370"></a>
- 290.00s–290.00s (×1), actor 5, squad 0 (events line 2370): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12157}.
<a id="trace-12092"></a>
- 290.00s–290.00s (×1), actor 5, squad 0 (trace 12092): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 290.00s, trace 12092. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12157}.
<a id="trace-12093"></a>
- 290.00s–290.00s (×1), actor 5, squad 0 (trace 12093): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 290.00s, trace 12093. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12157}.
<a id="trace-12157"></a>
<a id="trace-12179"></a>
<a id="trace-12186"></a>
<a id="trace-12200"></a>
<a id="trace-12206"></a>
<a id="trace-12244"></a>
- 290.30s–294.80s (×6), actor 5, squad 0 (trace 12157): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 12093. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12179}.
<a id="trace-12320"></a>
- 295.35s–295.35s (×1), actor 1, squad 0 (trace 12320): received platoon directive; retain contact cover stage. Knowledge: actor memory at 295.00s, trace 12248. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12325}.
<a id="trace-12325"></a>
<a id="trace-12338"></a>
<a id="trace-12345"></a>
<a id="trace-12358"></a>
<a id="trace-12375"></a>
<a id="trace-12382"></a>
<a id="trace-12394"></a>
<a id="trace-12478"></a>
<a id="trace-12489"></a>
<a id="trace-12501"></a>
<a id="trace-12517"></a>
<a id="trace-12524"></a>
<a id="trace-12536"></a>
<a id="trace-12558"></a>
<a id="trace-12633"></a>
<a id="trace-12646"></a>
<a id="trace-12677"></a>
<a id="trace-12716"></a>
<a id="trace-12791"></a>
<a id="trace-12799"></a>
<a id="trace-12811"></a>
<a id="trace-12821"></a>
<a id="trace-12832"></a>
<a id="trace-12851"></a>
<a id="trace-12868"></a>
<a id="trace-12878"></a>
<a id="trace-12960"></a>
<a id="trace-12973"></a>
<a id="trace-12979"></a>
<a id="trace-12990"></a>
- 295.80s–317.30s (×30), actor 5, squad 0 (trace 12325): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 12249. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12338}.
<a id="trace-2581"></a>
- 317.60s–317.60s (×1), actor 5, squad 0 (events line 2581): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12997"></a>
- 317.60s–317.60s (×1), actor 5, squad 0 (trace 12997): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 317.60s, trace 12997. Next observer evidence: {'until': 319.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13030}.
<a id="trace-12998"></a>
- 317.60s–317.60s (×1), actor 5, squad 0 (trace 12998): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 317.60s, trace 12998. Next observer evidence: {'until': 319.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13030}.
<a id="trace-13030"></a>
<a id="trace-13037"></a>
<a id="trace-13119"></a>
<a id="trace-13137"></a>
<a id="trace-13143"></a>
<a id="trace-13154"></a>
<a id="trace-13160"></a>
- 319.30s–322.80s (×7), actor 5, squad 0 (trace 13030): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 317.60s, trace 12998. Next observer evidence: {'until': 319.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13037}.
<a id="trace-13165"></a>
- 322.95s–322.95s (×1), actor 1, squad 0 (trace 13165): received platoon directive; retain contact cover stage. Knowledge: actor memory at 320.00s, trace 13043. Next observer evidence: {'until': 323.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13171}.
<a id="trace-13171"></a>
<a id="trace-13181"></a>
<a id="trace-13190"></a>
<a id="trace-13200"></a>
<a id="trace-13276"></a>
<a id="trace-13283"></a>
<a id="trace-13303"></a>
<a id="trace-13315"></a>
<a id="trace-13324"></a>
<a id="trace-13336"></a>
<a id="trace-13351"></a>
<a id="trace-13433"></a>
<a id="trace-13443"></a>
<a id="trace-13456"></a>
<a id="trace-13474"></a>
<a id="trace-13481"></a>
<a id="trace-13499"></a>
<a id="trace-13510"></a>
<a id="trace-13517"></a>
<a id="trace-13593"></a>
<a id="trace-13604"></a>
<a id="trace-13615"></a>
<a id="trace-13624"></a>
<a id="trace-13640"></a>
<a id="trace-13660"></a>
<a id="trace-13677"></a>
<a id="trace-13752"></a>
<a id="trace-13760"></a>
<a id="trace-13772"></a>
<a id="trace-13781"></a>
<a id="trace-13802"></a>
<a id="trace-13818"></a>
<a id="trace-13829"></a>
- 323.30s–344.30s (×33), actor 5, squad 0 (trace 13171): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.00s, trace 13044. Next observer evidence: {'until': 323.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13181}.
<a id="trace-2795"></a>
- 345.20s–345.20s (×1), actor 5, squad 0 (events line 2795): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13852"></a>
- 345.20s–345.20s (×1), actor 5, squad 0 (trace 13852): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 345.20s, trace 13852. Next observer evidence: None.
<a id="trace-13853"></a>
- 345.20s–345.20s (×1), actor 5, squad 0 (trace 13853): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 345.20s, trace 13853. Next observer evidence: None.
<a id="trace-13917"></a>
<a id="trace-13936"></a>
<a id="trace-13942"></a>
<a id="trace-13952"></a>
<a id="trace-13962"></a>
<a id="trace-13971"></a>
<a id="trace-13984"></a>
<a id="trace-13994"></a>
<a id="trace-14000"></a>
<a id="trace-14076"></a>
- 345.30s–350.30s (×10), actor 5, squad 0 (trace 13917): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.20s, trace 13853. Next observer evidence: {'until': 346.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13936}.
<a id="trace-14081"></a>
- 350.55s–350.55s (×1), actor 1, squad 0 (trace 14081): received platoon directive; retain contact cover stage. Knowledge: actor memory at 350.00s, trace 14006. Next observer evidence: {'until': 350.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14085}.
<a id="trace-14085"></a>
<a id="trace-14100"></a>
<a id="trace-14108"></a>
<a id="trace-14119"></a>
<a id="trace-14134"></a>
<a id="trace-14160"></a>
<a id="trace-14256"></a>
<a id="trace-14275"></a>
<a id="trace-14282"></a>
<a id="trace-14295"></a>
<a id="trace-14301"></a>
<a id="trace-14311"></a>
<a id="trace-14320"></a>
- 350.80s–359.80s (×13), actor 5, squad 0 (trace 14085): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 350.00s, trace 14007. Next observer evidence: {'until': 351.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14100}.

## Net delivery

86 matched order/radio deliveries; 241 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.233s; maximum 5.150s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1444: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1445: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 1996: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2000: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2001: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2002: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2003: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2485: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2488: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2489: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2490: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2491: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2492: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 2899: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2901: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2902: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2903: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2904: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2905: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2906: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.35s leader 5, trace 3037: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.35s leader 5, trace 3038: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3332: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3334: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3335: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3336: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3337: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3338: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3339: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 3713: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3715: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3716: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3717: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3718: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3719: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3720: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 3887: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3889: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3890: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3891: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3892: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3893: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3894: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 4149: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 4150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4151: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4152: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4153: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4154: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4155: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4156: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 4364: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4366: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4367: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4368: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4369: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4370: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4371: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 4642: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4644: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4645: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4646: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4647: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4648: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4649: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 4848: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4850: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4851: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4852: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4853: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4854: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4855: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 5043: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 5044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5045: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5046: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5047: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5048: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5049: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5050: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 5254: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5256: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5257: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5258: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5259: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5260: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5261: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 5523: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5525: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5526: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5527: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5528: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5529: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5530: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 5728: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5730: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5731: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5732: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5733: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5734: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5735: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 5918: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5920: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5921: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5922: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5923: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5924: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5925: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 6212: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 6213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6214: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 6215: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 6216: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6217: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6218: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6219: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6359: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6360: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6361: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6362: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6363: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6364: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.45s leader 5, trace 6432: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6482: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6483: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6484: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6485: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6486: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6487: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6633: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6634: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6635: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6636: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6637: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6638: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6790: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6791: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6792: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6793: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6794: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6795: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 6949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6950: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6951: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6952: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6953: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6954: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6955: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7111: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 7112: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 7113: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7114: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7115: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7116: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7269: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 7270: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7271: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7272: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7273: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7274: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7428: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 7429: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7430: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7431: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7432: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7433: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7588: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7589: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7590: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7591: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7592: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7593: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 7746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7747: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 7748: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7749: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7750: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7751: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7752: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 7906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 7907: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 7908: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 7909: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 7910: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 7911: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 7912: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 8066: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 8067: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 8068: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 8069: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8070: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8071: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 8228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 8229: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 8230: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 8231: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 8232: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 8233: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 8234: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 8386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 8387: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 8388: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 8389: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 8390: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 8391: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 8392: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 179.55s leader 5, trace 8539: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 8546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 8547: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 8548: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 8549: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 8550: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 8551: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 8552: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 8709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 8710: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 8711: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 8712: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 8713: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 8714: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 8715: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 8871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 8872: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 8873: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 8874: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 8875: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 8876: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 8877: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 9031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 9032: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 9033: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 9034: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 9035: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 9036: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 9037: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 9195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 9196: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 9197: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 9198: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 9199: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 9200: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 9201: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 9354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 9355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 9356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 9357: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 9358: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 9359: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 9360: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 207.15s leader 5, trace 9461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 207.15s leader 5, trace 9462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 9513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 9514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 9515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 9516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 9517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 9518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 9519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 9677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 9678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 9679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 9680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 9681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 9682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 9683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 9838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 9839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 9840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 9841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 9842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 9843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 9844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 9996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 9997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 9998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 9999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 10000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 10001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 10002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 10155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 10156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 10157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 10158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 10159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 10160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 10161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 234.80s leader 5, trace 10316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 234.80s leader 5, trace 10317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 10320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 10321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 10322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 10323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 10324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 10325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 10326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 10482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 10483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 10484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 10485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 10486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 10487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 10488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 10641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 10642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 10643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 10644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 10645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 10646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 10647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 10798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 10799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 10800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 10801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 10802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 10803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 10804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 10962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 10963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 10964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 10965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 10966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 10967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 10968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 11126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 11127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 11128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 11129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 11130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 11131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 11132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 262.40s leader 5, trace 11235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 262.40s leader 5, trace 11236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 11283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 11284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 11285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 11286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 11287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 11288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 11289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 11441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 11442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 11443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 11444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 11445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 11446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 11447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 11604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 11605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 11606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 11607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 11608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 11609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 11610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 11766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 11767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 11768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 11769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 11770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 11771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 11772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 11921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 11922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 11923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 11924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 11925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 11926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 11927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 12085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 12086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 12087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 12088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 12089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 12090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 12091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 12092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 12093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 12248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 12249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 12250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 12251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 12252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 12253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 12254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 12406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 12407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 12408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 12409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 12410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 12411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 12412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 12564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 12565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 12566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 12567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 12568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 12569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 12570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 12720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 12721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 12722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 12723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 12724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 12725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 12726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 12882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 12883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 12884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 12885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 12886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 12887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 12888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 317.60s leader 5, trace 12997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 317.60s leader 5, trace 12998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 13043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 13044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 13045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 13046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 13047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 13048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 13049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 13204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 13205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 13206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 13207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 13208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 13209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 13210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 13362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 13363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 13364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 13365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 13366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 13367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 13368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 13524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 13525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 13526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 13527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 13528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 13529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 13530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 13681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 13682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 13683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 13684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 13685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 13686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 13687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 13840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 13841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 13842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 13843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 13844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 13845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 13846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.20s leader 5, trace 13852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.20s leader 5, trace 13853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 14006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 14007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 14008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 14009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 14010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 14011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 14012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 14165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 14166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 14167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 14168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 14169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 14170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 14171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 14323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 14324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 14325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 14326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 14327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 14328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 14329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
