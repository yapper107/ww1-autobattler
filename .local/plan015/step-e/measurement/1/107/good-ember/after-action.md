# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/1/107/good-ember/battle-107-1789673632548236095`

## Battle summary

**Ember** · 360 s · 320 shots.

### Turning points

- 28.9s, squad 4: contact (events line 325). First recorded contact.
- 49.5s, squad 0: help call ([trace 5657](#trace-5657)). No completion observed before termination.
- 56.0s, squad 0: withdrawal ([trace 9082](#trace-9082)). 87.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 67.6s, squad 0: help call ([trace 13925](#trace-13925)). No completion observed before termination.
- 70.6s, squad 1: help call ([trace 14358](#trace-14358)). No completion observed before termination.
- 72.1s, squad 1: help call ([trace 14650](#trace-14650)). No completion observed before termination.
- 164.1s, squad 0: help call ([trace 20704](#trace-20704)). No completion observed before termination.
- 168.7s, squad 0: withdrawal ([trace 21139](#trace-21139)). 198.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 239.7s, squad 0: withdrawal ([trace 23910](#trace-23910)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 0 shots, 5/8 lost.
- **1** — FightHere; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 4 shots, 4/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 206 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 110 shots, 0/4 lost.

### Decisions and attribution

At 62.9s, squad 1 chose prepared a base of fire ([trace 10777](#trace-10777)), followed by 0 shots and 1 own casualties; estimate 12.2 against 0 distinct squad-reported contacts; At 62.9s, squad 1 chose advanced tactically ([trace 13584](#trace-13584)), followed by 0 shots and 1 own casualties; estimate 12.2 against 0 distinct squad-reported contacts; At 109.3s, squad 1 chose took cover and returned fire ([trace 17469](#trace-17469)), followed by 0 shots and 1 own casualties; estimate 13.8 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1430](#trace-1430)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1454}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1432](#trace-1432)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09017565968708079, 'next_transition': 1831}.

### Communication

245 matched deliveries (mean 0.53s, max 5.60s); 307 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 28.90s, squad 4, contact, evidence events line 325: First recorded contact; .
- 49.45s, squad 0, help call, evidence 5657: NeedSupport; No completion observed before termination.
- 56.00s, squad 0, withdrawal, evidence 9082: BreakContact: believed ratio at least two without superiority; 87.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 67.55s, squad 0, help call, evidence 13925: NeedSupport; No completion observed before termination.
- 70.55s, squad 1, help call, evidence 14358: NeedSupport; No completion observed before termination.
- 72.10s, squad 1, help call, evidence 14650: NeedSupport; No completion observed before termination.
- 164.10s, squad 0, help call, evidence 20704: NeedSupport; No completion observed before termination.
- 168.65s, squad 0, withdrawal, evidence 21139: BreakContact: believed ratio at least two without superiority; 198.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 239.70s, squad 0, withdrawal, evidence 23910: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.947738194207906, 'next_transition': 982}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.947738194207906, 'next_transition': 982}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.947738194207906, 'next_transition': 982}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.265921351346186, 'next_transition': 152}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.265921351346186, 'next_transition': 152}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.265921351346186, 'next_transition': 152}.
<a id="trace-703"></a>
<a id="trace-705"></a>
<a id="trace-730"></a>
<a id="trace-732"></a>
<a id="trace-767"></a>
<a id="trace-769"></a>
<a id="trace-794"></a>
<a id="trace-796"></a>
<a id="trace-818"></a>
<a id="trace-820"></a>
<a id="trace-843"></a>
<a id="trace-845"></a>
<a id="trace-874"></a>
<a id="trace-876"></a>
<a id="trace-986"></a>
<a id="trace-988"></a>
<a id="trace-1017"></a>
<a id="trace-1019"></a>
<a id="trace-1058"></a>
<a id="trace-1060"></a>
<a id="trace-1083"></a>
<a id="trace-1085"></a>
<a id="trace-1117"></a>
<a id="trace-1119"></a>
<a id="trace-1151"></a>
<a id="trace-1153"></a>
<a id="trace-1190"></a>
<a id="trace-1192"></a>
<a id="trace-1211"></a>
<a id="trace-1213"></a>
<a id="trace-1230"></a>
<a id="trace-1232"></a>
<a id="trace-1323"></a>
<a id="trace-1325"></a>
<a id="trace-1343"></a>
<a id="trace-1345"></a>
<a id="trace-1365"></a>
<a id="trace-1367"></a>
<a id="trace-1393"></a>
<a id="trace-1395"></a>
<a id="trace-1427"></a>
<a id="trace-1429"></a>
<a id="trace-1458"></a>
<a id="trace-1460"></a>
<a id="trace-1801"></a>
<a id="trace-1803"></a>
<a id="trace-1827"></a>
<a id="trace-1829"></a>
<a id="trace-2072"></a>
<a id="trace-2074"></a>
<a id="trace-2097"></a>
<a id="trace-2099"></a>
<a id="trace-2193"></a>
<a id="trace-2195"></a>
<a id="trace-2231"></a>
<a id="trace-2233"></a>
<a id="trace-2269"></a>
<a id="trace-2271"></a>
<a id="trace-2307"></a>
<a id="trace-2309"></a>
<a id="trace-2329"></a>
<a id="trace-2331"></a>
<a id="trace-2556"></a>
<a id="trace-2558"></a>
<a id="trace-2591"></a>
<a id="trace-2593"></a>
<a id="trace-2628"></a>
<a id="trace-2630"></a>
<a id="trace-2670"></a>
<a id="trace-2672"></a>
<a id="trace-2696"></a>
<a id="trace-2698"></a>
<a id="trace-2812"></a>
<a id="trace-2814"></a>
<a id="trace-2844"></a>
<a id="trace-2846"></a>
<a id="trace-2879"></a>
<a id="trace-2881"></a>
<a id="trace-2914"></a>
<a id="trace-2916"></a>
<a id="trace-2952"></a>
<a id="trace-2954"></a>
<a id="trace-2973"></a>
<a id="trace-2975"></a>
<a id="trace-3009"></a>
<a id="trace-3011"></a>
<a id="trace-3300"></a>
<a id="trace-3302"></a>
<a id="trace-3332"></a>
<a id="trace-3334"></a>
<a id="trace-3358"></a>
<a id="trace-3360"></a>
<a id="trace-3457"></a>
<a id="trace-3459"></a>
<a id="trace-3472"></a>
<a id="trace-3474"></a>
<a id="trace-3527"></a>
<a id="trace-3529"></a>
<a id="trace-3555"></a>
<a id="trace-3557"></a>
<a id="trace-3584"></a>
<a id="trace-3586"></a>
<a id="trace-3604"></a>
<a id="trace-3606"></a>
<a id="trace-3631"></a>
<a id="trace-3633"></a>
<a id="trace-3654"></a>
<a id="trace-3656"></a>
<a id="trace-3669"></a>
<a id="trace-3671"></a>
<a id="trace-3689"></a>
<a id="trace-3691"></a>
<a id="trace-3790"></a>
<a id="trace-3792"></a>
<a id="trace-3799"></a>
<a id="trace-3801"></a>
<a id="trace-3822"></a>
<a id="trace-3824"></a>
<a id="trace-3833"></a>
<a id="trace-3835"></a>
<a id="trace-3858"></a>
<a id="trace-3860"></a>
<a id="trace-4038"></a>
<a id="trace-4040"></a>
<a id="trace-4056"></a>
<a id="trace-4058"></a>
<a id="trace-4078"></a>
<a id="trace-4080"></a>
<a id="trace-4109"></a>
<a id="trace-4111"></a>
<a id="trace-4122"></a>
<a id="trace-4124"></a>
<a id="trace-4212"></a>
<a id="trace-4214"></a>
<a id="trace-4234"></a>
<a id="trace-4236"></a>
<a id="trace-4256"></a>
<a id="trace-4258"></a>
<a id="trace-4277"></a>
<a id="trace-4279"></a>
<a id="trace-4298"></a>
<a id="trace-4300"></a>
<a id="trace-4312"></a>
<a id="trace-4314"></a>
<a id="trace-4331"></a>
<a id="trace-4333"></a>
<a id="trace-4350"></a>
<a id="trace-4352"></a>
<a id="trace-4371"></a>
<a id="trace-4373"></a>
<a id="trace-4387"></a>
<a id="trace-4389"></a>
<a id="trace-4482"></a>
<a id="trace-4484"></a>
<a id="trace-4502"></a>
<a id="trace-4504"></a>
<a id="trace-4523"></a>
<a id="trace-4525"></a>
<a id="trace-4536"></a>
<a id="trace-4538"></a>
<a id="trace-4560"></a>
<a id="trace-4562"></a>
<a id="trace-4572"></a>
<a id="trace-4574"></a>
<a id="trace-4588"></a>
<a id="trace-4590"></a>
<a id="trace-4603"></a>
<a id="trace-4605"></a>
<a id="trace-4624"></a>
<a id="trace-4626"></a>
<a id="trace-4644"></a>
<a id="trace-4646"></a>
<a id="trace-5108"></a>
<a id="trace-5110"></a>
<a id="trace-5131"></a>
<a id="trace-5133"></a>
<a id="trace-5160"></a>
<a id="trace-5162"></a>
<a id="trace-5186"></a>
<a id="trace-5188"></a>
<a id="trace-5205"></a>
<a id="trace-5207"></a>
<a id="trace-5229"></a>
<a id="trace-5231"></a>
<a id="trace-5587"></a>
<a id="trace-5589"></a>
<a id="trace-5614"></a>
<a id="trace-5616"></a>
<a id="trace-5647"></a>
<a id="trace-5649"></a>
<a id="trace-5680"></a>
<a id="trace-5682"></a>
<a id="trace-6025"></a>
<a id="trace-6027"></a>
<a id="trace-6865"></a>
<a id="trace-6867"></a>
<a id="trace-7303"></a>
<a id="trace-7305"></a>
<a id="trace-7355"></a>
<a id="trace-7357"></a>
<a id="trace-7860"></a>
<a id="trace-7862"></a>
<a id="trace-8161"></a>
<a id="trace-8163"></a>
<a id="trace-8685"></a>
<a id="trace-8687"></a>
<a id="trace-8750"></a>
<a id="trace-8752"></a>
<a id="trace-8823"></a>
<a id="trace-8825"></a>
<a id="trace-8888"></a>
<a id="trace-8890"></a>
<a id="trace-9020"></a>
<a id="trace-9022"></a>
<a id="trace-9070"></a>
<a id="trace-9072"></a>
<a id="trace-9285"></a>
<a id="trace-9287"></a>
<a id="trace-9321"></a>
<a id="trace-9323"></a>
<a id="trace-9824"></a>
<a id="trace-9826"></a>
<a id="trace-9867"></a>
<a id="trace-9869"></a>
<a id="trace-9918"></a>
<a id="trace-9920"></a>
<a id="trace-9964"></a>
<a id="trace-9966"></a>
<a id="trace-10486"></a>
<a id="trace-10488"></a>
<a id="trace-10548"></a>
<a id="trace-10550"></a>
<a id="trace-10657"></a>
<a id="trace-10659"></a>
<a id="trace-10681"></a>
<a id="trace-10683"></a>
<a id="trace-10712"></a>
<a id="trace-10714"></a>
<a id="trace-10734"></a>
<a id="trace-10736"></a>
<a id="trace-10752"></a>
<a id="trace-10754"></a>
<a id="trace-10768"></a>
<a id="trace-10770"></a>
<a id="trace-13677"></a>
<a id="trace-13679"></a>
<a id="trace-13695"></a>
<a id="trace-13697"></a>
<a id="trace-13722"></a>
<a id="trace-13724"></a>
<a id="trace-13743"></a>
<a id="trace-13745"></a>
<a id="trace-13827"></a>
<a id="trace-13829"></a>
<a id="trace-13848"></a>
<a id="trace-13850"></a>
<a id="trace-13865"></a>
<a id="trace-13867"></a>
<a id="trace-13890"></a>
<a id="trace-13892"></a>
<a id="trace-13910"></a>
<a id="trace-13912"></a>
<a id="trace-14055"></a>
<a id="trace-14057"></a>
<a id="trace-14082"></a>
<a id="trace-14084"></a>
<a id="trace-14098"></a>
<a id="trace-14100"></a>
<a id="trace-14124"></a>
<a id="trace-14126"></a>
<a id="trace-14144"></a>
<a id="trace-14146"></a>
<a id="trace-14345"></a>
<a id="trace-14347"></a>
<a id="trace-14369"></a>
<a id="trace-14371"></a>
<a id="trace-14625"></a>
<a id="trace-14627"></a>
<a id="trace-14643"></a>
<a id="trace-14645"></a>
<a id="trace-14673"></a>
<a id="trace-14675"></a>
<a id="trace-14695"></a>
<a id="trace-14697"></a>
<a id="trace-14722"></a>
<a id="trace-14724"></a>
<a id="trace-14736"></a>
<a id="trace-14738"></a>
<a id="trace-14763"></a>
<a id="trace-14765"></a>
<a id="trace-14779"></a>
<a id="trace-14781"></a>
<a id="trace-14859"></a>
<a id="trace-14861"></a>
<a id="trace-15115"></a>
<a id="trace-15117"></a>
<a id="trace-15134"></a>
<a id="trace-15136"></a>
<a id="trace-15320"></a>
<a id="trace-15322"></a>
<a id="trace-15349"></a>
<a id="trace-15351"></a>
<a id="trace-15382"></a>
<a id="trace-15384"></a>
<a id="trace-15650"></a>
<a id="trace-15652"></a>
<a id="trace-15677"></a>
<a id="trace-15679"></a>
<a id="trace-15703"></a>
<a id="trace-15705"></a>
<a id="trace-15721"></a>
<a id="trace-15723"></a>
<a id="trace-15816"></a>
<a id="trace-15818"></a>
<a id="trace-15834"></a>
<a id="trace-15836"></a>
<a id="trace-16097"></a>
<a id="trace-16099"></a>
<a id="trace-16124"></a>
<a id="trace-16126"></a>
<a id="trace-16159"></a>
<a id="trace-16161"></a>
<a id="trace-16182"></a>
<a id="trace-16184"></a>
<a id="trace-16206"></a>
<a id="trace-16208"></a>
<a id="trace-16224"></a>
<a id="trace-16226"></a>
<a id="trace-16250"></a>
<a id="trace-16252"></a>
<a id="trace-16271"></a>
<a id="trace-16273"></a>
<a id="trace-16356"></a>
<a id="trace-16358"></a>
<a id="trace-16372"></a>
<a id="trace-16374"></a>
<a id="trace-16394"></a>
<a id="trace-16396"></a>
<a id="trace-16412"></a>
<a id="trace-16414"></a>
<a id="trace-16436"></a>
<a id="trace-16438"></a>
<a id="trace-16455"></a>
<a id="trace-16457"></a>
<a id="trace-16489"></a>
<a id="trace-16491"></a>
<a id="trace-16516"></a>
<a id="trace-16518"></a>
<a id="trace-16549"></a>
<a id="trace-16551"></a>
<a id="trace-16571"></a>
<a id="trace-16573"></a>
<a id="trace-16656"></a>
<a id="trace-16658"></a>
<a id="trace-16682"></a>
<a id="trace-16684"></a>
<a id="trace-16702"></a>
<a id="trace-16704"></a>
<a id="trace-16717"></a>
<a id="trace-16719"></a>
<a id="trace-16737"></a>
<a id="trace-16739"></a>
<a id="trace-16752"></a>
<a id="trace-16754"></a>
<a id="trace-16772"></a>
<a id="trace-16774"></a>
<a id="trace-16787"></a>
<a id="trace-16789"></a>
<a id="trace-16802"></a>
<a id="trace-16804"></a>
<a id="trace-16817"></a>
<a id="trace-16819"></a>
<a id="trace-16887"></a>
<a id="trace-16889"></a>
<a id="trace-16899"></a>
<a id="trace-16901"></a>
<a id="trace-16914"></a>
<a id="trace-16916"></a>
<a id="trace-16924"></a>
<a id="trace-16926"></a>
<a id="trace-16944"></a>
<a id="trace-16946"></a>
<a id="trace-16953"></a>
<a id="trace-16955"></a>
<a id="trace-16971"></a>
<a id="trace-16973"></a>
<a id="trace-16984"></a>
<a id="trace-16986"></a>
<a id="trace-17003"></a>
<a id="trace-17005"></a>
<a id="trace-17017"></a>
<a id="trace-17019"></a>
<a id="trace-17091"></a>
<a id="trace-17093"></a>
<a id="trace-17101"></a>
<a id="trace-17103"></a>
<a id="trace-17116"></a>
<a id="trace-17118"></a>
<a id="trace-17126"></a>
<a id="trace-17128"></a>
<a id="trace-17147"></a>
<a id="trace-17149"></a>
<a id="trace-17158"></a>
<a id="trace-17160"></a>
<a id="trace-17177"></a>
<a id="trace-17179"></a>
<a id="trace-17247"></a>
<a id="trace-17249"></a>
<a id="trace-17267"></a>
<a id="trace-17269"></a>
<a id="trace-17279"></a>
<a id="trace-17281"></a>
<a id="trace-17354"></a>
<a id="trace-17356"></a>
<a id="trace-17364"></a>
<a id="trace-17366"></a>
<a id="trace-17378"></a>
<a id="trace-17380"></a>
<a id="trace-17386"></a>
<a id="trace-17388"></a>
<a id="trace-17406"></a>
<a id="trace-17408"></a>
<a id="trace-17416"></a>
<a id="trace-17418"></a>
<a id="trace-17433"></a>
<a id="trace-17435"></a>
<a id="trace-17445"></a>
<a id="trace-17447"></a>
<a id="trace-17465"></a>
<a id="trace-17467"></a>
<a id="trace-17600"></a>
<a id="trace-17602"></a>
<a id="trace-17675"></a>
<a id="trace-17677"></a>
<a id="trace-17688"></a>
<a id="trace-17690"></a>
<a id="trace-17701"></a>
<a id="trace-17703"></a>
<a id="trace-17709"></a>
<a id="trace-17711"></a>
<a id="trace-17724"></a>
<a id="trace-17726"></a>
<a id="trace-17734"></a>
<a id="trace-17736"></a>
<a id="trace-17748"></a>
<a id="trace-17750"></a>
<a id="trace-17762"></a>
<a id="trace-17764"></a>
<a id="trace-17776"></a>
<a id="trace-17778"></a>
<a id="trace-17791"></a>
<a id="trace-17793"></a>
<a id="trace-17863"></a>
<a id="trace-17865"></a>
<a id="trace-17875"></a>
<a id="trace-17877"></a>
<a id="trace-17888"></a>
<a id="trace-17890"></a>
<a id="trace-17896"></a>
<a id="trace-17898"></a>
<a id="trace-17911"></a>
<a id="trace-17913"></a>
<a id="trace-17919"></a>
<a id="trace-17921"></a>
<a id="trace-17933"></a>
<a id="trace-17935"></a>
<a id="trace-17946"></a>
<a id="trace-17948"></a>
<a id="trace-17960"></a>
<a id="trace-17962"></a>
<a id="trace-17973"></a>
<a id="trace-17975"></a>
<a id="trace-18045"></a>
<a id="trace-18047"></a>
<a id="trace-18055"></a>
<a id="trace-18057"></a>
<a id="trace-18066"></a>
<a id="trace-18068"></a>
<a id="trace-18072"></a>
<a id="trace-18074"></a>
<a id="trace-18085"></a>
<a id="trace-18087"></a>
<a id="trace-18092"></a>
<a id="trace-18094"></a>
<a id="trace-18106"></a>
<a id="trace-18108"></a>
<a id="trace-18117"></a>
<a id="trace-18119"></a>
<a id="trace-18129"></a>
<a id="trace-18131"></a>
<a id="trace-18139"></a>
<a id="trace-18141"></a>
<a id="trace-18207"></a>
<a id="trace-18209"></a>
<a id="trace-18215"></a>
<a id="trace-18217"></a>
<a id="trace-18224"></a>
<a id="trace-18226"></a>
<a id="trace-18229"></a>
<a id="trace-18231"></a>
<a id="trace-18242"></a>
<a id="trace-18244"></a>
<a id="trace-18249"></a>
<a id="trace-18251"></a>
<a id="trace-18261"></a>
<a id="trace-18263"></a>
<a id="trace-18395"></a>
<a id="trace-18397"></a>
<a id="trace-18408"></a>
<a id="trace-18410"></a>
<a id="trace-18429"></a>
<a id="trace-18431"></a>
<a id="trace-18505"></a>
<a id="trace-18507"></a>
<a id="trace-18515"></a>
<a id="trace-18517"></a>
<a id="trace-18535"></a>
<a id="trace-18537"></a>
<a id="trace-18545"></a>
<a id="trace-18547"></a>
<a id="trace-18572"></a>
<a id="trace-18574"></a>
<a id="trace-18604"></a>
<a id="trace-18606"></a>
<a id="trace-18617"></a>
<a id="trace-18619"></a>
<a id="trace-18629"></a>
<a id="trace-18631"></a>
<a id="trace-18649"></a>
<a id="trace-18651"></a>
<a id="trace-18659"></a>
<a id="trace-18661"></a>
<a id="trace-18732"></a>
<a id="trace-18734"></a>
<a id="trace-18741"></a>
<a id="trace-18743"></a>
<a id="trace-18756"></a>
<a id="trace-18758"></a>
<a id="trace-18769"></a>
<a id="trace-18771"></a>
<a id="trace-18784"></a>
<a id="trace-18786"></a>
<a id="trace-18959"></a>
<a id="trace-18961"></a>
<a id="trace-18982"></a>
<a id="trace-18984"></a>
<a id="trace-19012"></a>
<a id="trace-19014"></a>
<a id="trace-19037"></a>
<a id="trace-19039"></a>
<a id="trace-19050"></a>
<a id="trace-19052"></a>
<a id="trace-19132"></a>
<a id="trace-19134"></a>
<a id="trace-19150"></a>
<a id="trace-19152"></a>
<a id="trace-19162"></a>
<a id="trace-19164"></a>
<a id="trace-19173"></a>
<a id="trace-19175"></a>
<a id="trace-19190"></a>
<a id="trace-19192"></a>
<a id="trace-19198"></a>
<a id="trace-19200"></a>
<a id="trace-19213"></a>
<a id="trace-19215"></a>
<a id="trace-19225"></a>
<a id="trace-19227"></a>
<a id="trace-19248"></a>
<a id="trace-19250"></a>
<a id="trace-19265"></a>
<a id="trace-19267"></a>
<a id="trace-19342"></a>
<a id="trace-19344"></a>
<a id="trace-19353"></a>
<a id="trace-19355"></a>
<a id="trace-19381"></a>
<a id="trace-19383"></a>
<a id="trace-19395"></a>
<a id="trace-19397"></a>
<a id="trace-19409"></a>
<a id="trace-19411"></a>
<a id="trace-19418"></a>
<a id="trace-19420"></a>
<a id="trace-19438"></a>
<a id="trace-19440"></a>
<a id="trace-19457"></a>
<a id="trace-19459"></a>
<a id="trace-19469"></a>
<a id="trace-19471"></a>
<a id="trace-19478"></a>
<a id="trace-19480"></a>
<a id="trace-19552"></a>
<a id="trace-19554"></a>
<a id="trace-19568"></a>
<a id="trace-19570"></a>
<a id="trace-19588"></a>
<a id="trace-19590"></a>
<a id="trace-19595"></a>
<a id="trace-19597"></a>
<a id="trace-19903"></a>
<a id="trace-19905"></a>
<a id="trace-19935"></a>
<a id="trace-19937"></a>
<a id="trace-19956"></a>
<a id="trace-19958"></a>
<a id="trace-19971"></a>
<a id="trace-19973"></a>
<a id="trace-19989"></a>
<a id="trace-19991"></a>
<a id="trace-20003"></a>
<a id="trace-20005"></a>
<a id="trace-20074"></a>
<a id="trace-20076"></a>
<a id="trace-20086"></a>
<a id="trace-20088"></a>
<a id="trace-20101"></a>
<a id="trace-20103"></a>
<a id="trace-20115"></a>
<a id="trace-20117"></a>
<a id="trace-20126"></a>
<a id="trace-20128"></a>
<a id="trace-20143"></a>
<a id="trace-20145"></a>
<a id="trace-20165"></a>
<a id="trace-20167"></a>
<a id="trace-20188"></a>
<a id="trace-20190"></a>
<a id="trace-20218"></a>
<a id="trace-20220"></a>
<a id="trace-20234"></a>
<a id="trace-20236"></a>
<a id="trace-20309"></a>
<a id="trace-20311"></a>
<a id="trace-20324"></a>
<a id="trace-20326"></a>
<a id="trace-20338"></a>
<a id="trace-20340"></a>
<a id="trace-20351"></a>
<a id="trace-20353"></a>
<a id="trace-20639"></a>
<a id="trace-20641"></a>
<a id="trace-20655"></a>
<a id="trace-20657"></a>
<a id="trace-20675"></a>
<a id="trace-20677"></a>
<a id="trace-20688"></a>
<a id="trace-20690"></a>
<a id="trace-20724"></a>
<a id="trace-20726"></a>
<a id="trace-20956"></a>
<a id="trace-20958"></a>
<a id="trace-21032"></a>
<a id="trace-21034"></a>
<a id="trace-21049"></a>
<a id="trace-21051"></a>
<a id="trace-21070"></a>
<a id="trace-21072"></a>
<a id="trace-21084"></a>
<a id="trace-21086"></a>
<a id="trace-21099"></a>
<a id="trace-21101"></a>
<a id="trace-21111"></a>
<a id="trace-21113"></a>
<a id="trace-21130"></a>
<a id="trace-21132"></a>
<a id="trace-21315"></a>
<a id="trace-21317"></a>
<a id="trace-21336"></a>
<a id="trace-21338"></a>
<a id="trace-21355"></a>
<a id="trace-21357"></a>
<a id="trace-21427"></a>
<a id="trace-21429"></a>
<a id="trace-21445"></a>
<a id="trace-21447"></a>
<a id="trace-21464"></a>
<a id="trace-21466"></a>
<a id="trace-21478"></a>
<a id="trace-21480"></a>
<a id="trace-21502"></a>
<a id="trace-21504"></a>
<a id="trace-21519"></a>
<a id="trace-21521"></a>
<a id="trace-21532"></a>
<a id="trace-21534"></a>
<a id="trace-21546"></a>
<a id="trace-21548"></a>
<a id="trace-21561"></a>
<a id="trace-21563"></a>
<a id="trace-21575"></a>
<a id="trace-21577"></a>
<a id="trace-21648"></a>
<a id="trace-21650"></a>
<a id="trace-21660"></a>
<a id="trace-21662"></a>
<a id="trace-21678"></a>
<a id="trace-21680"></a>
<a id="trace-21693"></a>
<a id="trace-21695"></a>
<a id="trace-21706"></a>
<a id="trace-21708"></a>
<a id="trace-21723"></a>
<a id="trace-21725"></a>
<a id="trace-21736"></a>
<a id="trace-21738"></a>
<a id="trace-21752"></a>
<a id="trace-21754"></a>
<a id="trace-21772"></a>
<a id="trace-21774"></a>
<a id="trace-21787"></a>
<a id="trace-21789"></a>
<a id="trace-21860"></a>
<a id="trace-21862"></a>
<a id="trace-21874"></a>
<a id="trace-21876"></a>
<a id="trace-21893"></a>
<a id="trace-21895"></a>
<a id="trace-21904"></a>
<a id="trace-21906"></a>
<a id="trace-21919"></a>
<a id="trace-21921"></a>
<a id="trace-21935"></a>
<a id="trace-21937"></a>
<a id="trace-21951"></a>
<a id="trace-21953"></a>
<a id="trace-21963"></a>
<a id="trace-21965"></a>
<a id="trace-21982"></a>
<a id="trace-21984"></a>
<a id="trace-21996"></a>
<a id="trace-21998"></a>
<a id="trace-22065"></a>
<a id="trace-22067"></a>
<a id="trace-22084"></a>
<a id="trace-22086"></a>
<a id="trace-22102"></a>
<a id="trace-22104"></a>
<a id="trace-22111"></a>
<a id="trace-22113"></a>
<a id="trace-22129"></a>
<a id="trace-22131"></a>
<a id="trace-22144"></a>
<a id="trace-22146"></a>
<a id="trace-22164"></a>
<a id="trace-22166"></a>
<a id="trace-22179"></a>
<a id="trace-22181"></a>
<a id="trace-22195"></a>
<a id="trace-22197"></a>
<a id="trace-22210"></a>
<a id="trace-22212"></a>
<a id="trace-22284"></a>
<a id="trace-22286"></a>
<a id="trace-22297"></a>
<a id="trace-22299"></a>
<a id="trace-22309"></a>
<a id="trace-22311"></a>
<a id="trace-22318"></a>
<a id="trace-22320"></a>
<a id="trace-22336"></a>
<a id="trace-22338"></a>
<a id="trace-22345"></a>
<a id="trace-22347"></a>
<a id="trace-22359"></a>
<a id="trace-22361"></a>
<a id="trace-22375"></a>
<a id="trace-22377"></a>
<a id="trace-22391"></a>
<a id="trace-22393"></a>
<a id="trace-22402"></a>
<a id="trace-22404"></a>
<a id="trace-22469"></a>
<a id="trace-22471"></a>
<a id="trace-22478"></a>
<a id="trace-22480"></a>
<a id="trace-22489"></a>
<a id="trace-22491"></a>
<a id="trace-22496"></a>
<a id="trace-22498"></a>
<a id="trace-22507"></a>
<a id="trace-22509"></a>
<a id="trace-22516"></a>
<a id="trace-22518"></a>
<a id="trace-22529"></a>
<a id="trace-22531"></a>
<a id="trace-22539"></a>
<a id="trace-22541"></a>
<a id="trace-22555"></a>
<a id="trace-22557"></a>
<a id="trace-22568"></a>
<a id="trace-22570"></a>
<a id="trace-22633"></a>
<a id="trace-22635"></a>
<a id="trace-22642"></a>
<a id="trace-22644"></a>
<a id="trace-22656"></a>
<a id="trace-22658"></a>
<a id="trace-22665"></a>
<a id="trace-22667"></a>
<a id="trace-22676"></a>
<a id="trace-22678"></a>
<a id="trace-22684"></a>
<a id="trace-22686"></a>
<a id="trace-22695"></a>
<a id="trace-22697"></a>
<a id="trace-22710"></a>
<a id="trace-22712"></a>
<a id="trace-22730"></a>
<a id="trace-22732"></a>
<a id="trace-22742"></a>
<a id="trace-22744"></a>
<a id="trace-22808"></a>
<a id="trace-22810"></a>
<a id="trace-22816"></a>
<a id="trace-22818"></a>
<a id="trace-22827"></a>
<a id="trace-22829"></a>
<a id="trace-22834"></a>
<a id="trace-22836"></a>
<a id="trace-22844"></a>
<a id="trace-22846"></a>
<a id="trace-22853"></a>
<a id="trace-22855"></a>
<a id="trace-22865"></a>
<a id="trace-22867"></a>
<a id="trace-22875"></a>
<a id="trace-22877"></a>
<a id="trace-22888"></a>
<a id="trace-22890"></a>
<a id="trace-22899"></a>
<a id="trace-22901"></a>
<a id="trace-22970"></a>
<a id="trace-22972"></a>
<a id="trace-22986"></a>
<a id="trace-22988"></a>
<a id="trace-23000"></a>
<a id="trace-23002"></a>
<a id="trace-23006"></a>
<a id="trace-23008"></a>
<a id="trace-23019"></a>
<a id="trace-23021"></a>
<a id="trace-23027"></a>
<a id="trace-23029"></a>
<a id="trace-23038"></a>
<a id="trace-23040"></a>
<a id="trace-23047"></a>
<a id="trace-23049"></a>
<a id="trace-23057"></a>
<a id="trace-23059"></a>
<a id="trace-23067"></a>
<a id="trace-23069"></a>
<a id="trace-23134"></a>
<a id="trace-23136"></a>
<a id="trace-23146"></a>
<a id="trace-23148"></a>
<a id="trace-23158"></a>
<a id="trace-23160"></a>
<a id="trace-23169"></a>
<a id="trace-23171"></a>
<a id="trace-23188"></a>
<a id="trace-23190"></a>
<a id="trace-23195"></a>
<a id="trace-23197"></a>
<a id="trace-23207"></a>
<a id="trace-23209"></a>
<a id="trace-23219"></a>
<a id="trace-23221"></a>
<a id="trace-23228"></a>
<a id="trace-23230"></a>
<a id="trace-23238"></a>
<a id="trace-23240"></a>
<a id="trace-23303"></a>
<a id="trace-23305"></a>
<a id="trace-23311"></a>
<a id="trace-23313"></a>
<a id="trace-23323"></a>
<a id="trace-23325"></a>
<a id="trace-23332"></a>
<a id="trace-23334"></a>
<a id="trace-23344"></a>
<a id="trace-23346"></a>
<a id="trace-23353"></a>
<a id="trace-23355"></a>
<a id="trace-23369"></a>
<a id="trace-23371"></a>
<a id="trace-23379"></a>
<a id="trace-23381"></a>
<a id="trace-23396"></a>
<a id="trace-23398"></a>
<a id="trace-23408"></a>
<a id="trace-23410"></a>
<a id="trace-23476"></a>
<a id="trace-23478"></a>
<a id="trace-23485"></a>
<a id="trace-23487"></a>
<a id="trace-23496"></a>
<a id="trace-23498"></a>
<a id="trace-23502"></a>
<a id="trace-23504"></a>
<a id="trace-23513"></a>
<a id="trace-23515"></a>
<a id="trace-23522"></a>
<a id="trace-23524"></a>
<a id="trace-23535"></a>
<a id="trace-23537"></a>
<a id="trace-23543"></a>
<a id="trace-23545"></a>
<a id="trace-23557"></a>
<a id="trace-23559"></a>
<a id="trace-23567"></a>
<a id="trace-23569"></a>
<a id="trace-23639"></a>
<a id="trace-23641"></a>
<a id="trace-23656"></a>
<a id="trace-23658"></a>
<a id="trace-23668"></a>
<a id="trace-23670"></a>
<a id="trace-23678"></a>
<a id="trace-23680"></a>
<a id="trace-23688"></a>
<a id="trace-23690"></a>
<a id="trace-23696"></a>
<a id="trace-23698"></a>
<a id="trace-23707"></a>
<a id="trace-23709"></a>
<a id="trace-23716"></a>
<a id="trace-23718"></a>
<a id="trace-23726"></a>
<a id="trace-23728"></a>
<a id="trace-23741"></a>
<a id="trace-23743"></a>
<a id="trace-23806"></a>
<a id="trace-23808"></a>
<a id="trace-23818"></a>
<a id="trace-23820"></a>
<a id="trace-23829"></a>
<a id="trace-23831"></a>
<a id="trace-23843"></a>
<a id="trace-23845"></a>
<a id="trace-23861"></a>
<a id="trace-23863"></a>
<a id="trace-23870"></a>
<a id="trace-23872"></a>
<a id="trace-23884"></a>
<a id="trace-23886"></a>
<a id="trace-23893"></a>
<a id="trace-23895"></a>
<a id="trace-23902"></a>
<a id="trace-23904"></a>
<a id="trace-23967"></a>
<a id="trace-23969"></a>
<a id="trace-24035"></a>
<a id="trace-24037"></a>
<a id="trace-24055"></a>
<a id="trace-24057"></a>
<a id="trace-24066"></a>
<a id="trace-24068"></a>
<a id="trace-24073"></a>
<a id="trace-24075"></a>
<a id="trace-24094"></a>
<a id="trace-24096"></a>
<a id="trace-24107"></a>
<a id="trace-24109"></a>
<a id="trace-24128"></a>
<a id="trace-24130"></a>
<a id="trace-24146"></a>
<a id="trace-24148"></a>
<a id="trace-24162"></a>
<a id="trace-24164"></a>
<a id="trace-24177"></a>
<a id="trace-24179"></a>
<a id="trace-24245"></a>
<a id="trace-24247"></a>
<a id="trace-24255"></a>
<a id="trace-24257"></a>
<a id="trace-24270"></a>
<a id="trace-24272"></a>
<a id="trace-24277"></a>
<a id="trace-24279"></a>
<a id="trace-24287"></a>
<a id="trace-24289"></a>
<a id="trace-24296"></a>
<a id="trace-24298"></a>
<a id="trace-24315"></a>
<a id="trace-24317"></a>
<a id="trace-24339"></a>
<a id="trace-24341"></a>
<a id="trace-24349"></a>
<a id="trace-24351"></a>
<a id="trace-24364"></a>
<a id="trace-24366"></a>
<a id="trace-24447"></a>
<a id="trace-24449"></a>
<a id="trace-24455"></a>
<a id="trace-24457"></a>
<a id="trace-24466"></a>
<a id="trace-24468"></a>
<a id="trace-24481"></a>
<a id="trace-24483"></a>
<a id="trace-24493"></a>
<a id="trace-24495"></a>
<a id="trace-24515"></a>
<a id="trace-24517"></a>
<a id="trace-24527"></a>
<a id="trace-24529"></a>
<a id="trace-24536"></a>
<a id="trace-24538"></a>
<a id="trace-24555"></a>
<a id="trace-24557"></a>
<a id="trace-24568"></a>
<a id="trace-24570"></a>
<a id="trace-24637"></a>
<a id="trace-24639"></a>
<a id="trace-24647"></a>
<a id="trace-24649"></a>
<a id="trace-24664"></a>
<a id="trace-24666"></a>
<a id="trace-24671"></a>
<a id="trace-24673"></a>
<a id="trace-24688"></a>
<a id="trace-24690"></a>
<a id="trace-24698"></a>
<a id="trace-24700"></a>
<a id="trace-24713"></a>
<a id="trace-24715"></a>
<a id="trace-24722"></a>
<a id="trace-24724"></a>
<a id="trace-24733"></a>
<a id="trace-24735"></a>
<a id="trace-24741"></a>
<a id="trace-24743"></a>
<a id="trace-24806"></a>
<a id="trace-24808"></a>
<a id="trace-24816"></a>
<a id="trace-24818"></a>
<a id="trace-24828"></a>
<a id="trace-24830"></a>
<a id="trace-24833"></a>
<a id="trace-24835"></a>
<a id="trace-24847"></a>
<a id="trace-24849"></a>
<a id="trace-24855"></a>
<a id="trace-24857"></a>
<a id="trace-24873"></a>
<a id="trace-24875"></a>
<a id="trace-24890"></a>
<a id="trace-24892"></a>
<a id="trace-24902"></a>
<a id="trace-24904"></a>
<a id="trace-24914"></a>
<a id="trace-24916"></a>
<a id="trace-24980"></a>
<a id="trace-24982"></a>
<a id="trace-24989"></a>
<a id="trace-24991"></a>
<a id="trace-24998"></a>
<a id="trace-25000"></a>
<a id="trace-25004"></a>
<a id="trace-25006"></a>
<a id="trace-25013"></a>
<a id="trace-25015"></a>
<a id="trace-25024"></a>
<a id="trace-25026"></a>
<a id="trace-25035"></a>
<a id="trace-25037"></a>
<a id="trace-25047"></a>
<a id="trace-25049"></a>
<a id="trace-25058"></a>
<a id="trace-25060"></a>
<a id="trace-25074"></a>
<a id="trace-25076"></a>
<a id="trace-25148"></a>
<a id="trace-25150"></a>
<a id="trace-25159"></a>
<a id="trace-25161"></a>
<a id="trace-25171"></a>
<a id="trace-25173"></a>
<a id="trace-25177"></a>
<a id="trace-25179"></a>
<a id="trace-25186"></a>
<a id="trace-25188"></a>
<a id="trace-25196"></a>
<a id="trace-25198"></a>
<a id="trace-25206"></a>
<a id="trace-25208"></a>
<a id="trace-25216"></a>
<a id="trace-25218"></a>
<a id="trace-25228"></a>
<a id="trace-25230"></a>
<a id="trace-25237"></a>
<a id="trace-25239"></a>
<a id="trace-25309"></a>
<a id="trace-25311"></a>
<a id="trace-25319"></a>
<a id="trace-25321"></a>
<a id="trace-25336"></a>
<a id="trace-25338"></a>
<a id="trace-25350"></a>
<a id="trace-25352"></a>
<a id="trace-25361"></a>
<a id="trace-25363"></a>
<a id="trace-25370"></a>
<a id="trace-25372"></a>
<a id="trace-25384"></a>
<a id="trace-25386"></a>
<a id="trace-25393"></a>
<a id="trace-25395"></a>
<a id="trace-25403"></a>
<a id="trace-25405"></a>
<a id="trace-25410"></a>
<a id="trace-25412"></a>
<a id="trace-25478"></a>
<a id="trace-25480"></a>
<a id="trace-25487"></a>
<a id="trace-25489"></a>
<a id="trace-25499"></a>
<a id="trace-25501"></a>
<a id="trace-25509"></a>
<a id="trace-25511"></a>
<a id="trace-25519"></a>
<a id="trace-25521"></a>
<a id="trace-25534"></a>
<a id="trace-25536"></a>
<a id="trace-25554"></a>
<a id="trace-25556"></a>
<a id="trace-25563"></a>
<a id="trace-25565"></a>
<a id="trace-25574"></a>
<a id="trace-25576"></a>
<a id="trace-25586"></a>
<a id="trace-25588"></a>
<a id="trace-25653"></a>
<a id="trace-25655"></a>
<a id="trace-25662"></a>
<a id="trace-25664"></a>
<a id="trace-25671"></a>
<a id="trace-25673"></a>
<a id="trace-25677"></a>
<a id="trace-25679"></a>
<a id="trace-25687"></a>
<a id="trace-25689"></a>
<a id="trace-25699"></a>
<a id="trace-25701"></a>
<a id="trace-25713"></a>
<a id="trace-25715"></a>
<a id="trace-25722"></a>
<a id="trace-25724"></a>
<a id="trace-25737"></a>
<a id="trace-25739"></a>
<a id="trace-25746"></a>
<a id="trace-25748"></a>
<a id="trace-25821"></a>
<a id="trace-25823"></a>
<a id="trace-25832"></a>
<a id="trace-25834"></a>
<a id="trace-25847"></a>
<a id="trace-25849"></a>
<a id="trace-25853"></a>
<a id="trace-25855"></a>
<a id="trace-25861"></a>
<a id="trace-25863"></a>
<a id="trace-25871"></a>
<a id="trace-25873"></a>
<a id="trace-25881"></a>
<a id="trace-25883"></a>
<a id="trace-25891"></a>
<a id="trace-25893"></a>
<a id="trace-25902"></a>
<a id="trace-25904"></a>
<a id="trace-25910"></a>
<a id="trace-25912"></a>
<a id="trace-25980"></a>
<a id="trace-25982"></a>
<a id="trace-25989"></a>
<a id="trace-25991"></a>
<a id="trace-26007"></a>
<a id="trace-26009"></a>
<a id="trace-26021"></a>
<a id="trace-26023"></a>
<a id="trace-26032"></a>
<a id="trace-26034"></a>
<a id="trace-26045"></a>
<a id="trace-26047"></a>
<a id="trace-26055"></a>
<a id="trace-26057"></a>
<a id="trace-26063"></a>
<a id="trace-26065"></a>
<a id="trace-26073"></a>
<a id="trace-26075"></a>
<a id="trace-26080"></a>
<a id="trace-26082"></a>
<a id="trace-26146"></a>
<a id="trace-26148"></a>
<a id="trace-26157"></a>
<a id="trace-26159"></a>
<a id="trace-26168"></a>
<a id="trace-26170"></a>
<a id="trace-26178"></a>
<a id="trace-26180"></a>
<a id="trace-26188"></a>
<a id="trace-26190"></a>
<a id="trace-26205"></a>
<a id="trace-26207"></a>
<a id="trace-26222"></a>
<a id="trace-26224"></a>
<a id="trace-26233"></a>
<a id="trace-26235"></a>
<a id="trace-26246"></a>
<a id="trace-26248"></a>
<a id="trace-26254"></a>
<a id="trace-26256"></a>
<a id="trace-26320"></a>
<a id="trace-26322"></a>
<a id="trace-26329"></a>
<a id="trace-26331"></a>
<a id="trace-26339"></a>
<a id="trace-26341"></a>
<a id="trace-26346"></a>
<a id="trace-26348"></a>
<a id="trace-26359"></a>
<a id="trace-26361"></a>
<a id="trace-26369"></a>
<a id="trace-26371"></a>
<a id="trace-26382"></a>
<a id="trace-26384"></a>
<a id="trace-26392"></a>
<a id="trace-26394"></a>
<a id="trace-26409"></a>
<a id="trace-26411"></a>
<a id="trace-26425"></a>
<a id="trace-26427"></a>
<a id="trace-26493"></a>
<a id="trace-26495"></a>
<a id="trace-26501"></a>
<a id="trace-26503"></a>
<a id="trace-26514"></a>
<a id="trace-26516"></a>
<a id="trace-26522"></a>
<a id="trace-26524"></a>
<a id="trace-26533"></a>
<a id="trace-26535"></a>
<a id="trace-26542"></a>
<a id="trace-26544"></a>
<a id="trace-26553"></a>
<a id="trace-26555"></a>
<a id="trace-26562"></a>
<a id="trace-26564"></a>
<a id="trace-26574"></a>
<a id="trace-26576"></a>
<a id="trace-26586"></a>
<a id="trace-26588"></a>
<a id="trace-26652"></a>
<a id="trace-26654"></a>
<a id="trace-26667"></a>
<a id="trace-26669"></a>
<a id="trace-26686"></a>
<a id="trace-26688"></a>
<a id="trace-26692"></a>
<a id="trace-26694"></a>
<a id="trace-26704"></a>
<a id="trace-26706"></a>
<a id="trace-26717"></a>
<a id="trace-26719"></a>
<a id="trace-26727"></a>
<a id="trace-26729"></a>
<a id="trace-26736"></a>
<a id="trace-26738"></a>
<a id="trace-26746"></a>
<a id="trace-26748"></a>
<a id="trace-26754"></a>
<a id="trace-26756"></a>
<a id="trace-26821"></a>
<a id="trace-26823"></a>
<a id="trace-26832"></a>
<a id="trace-26834"></a>
<a id="trace-26845"></a>
<a id="trace-26847"></a>
<a id="trace-26852"></a>
<a id="trace-26854"></a>
<a id="trace-26868"></a>
<a id="trace-26870"></a>
<a id="trace-26879"></a>
<a id="trace-26881"></a>
<a id="trace-26899"></a>
<a id="trace-26901"></a>
<a id="trace-26910"></a>
<a id="trace-26912"></a>
<a id="trace-26929"></a>
<a id="trace-26931"></a>
<a id="trace-26994"></a>
<a id="trace-26996"></a>
<a id="trace-27003"></a>
<a id="trace-27005"></a>
<a id="trace-27012"></a>
<a id="trace-27014"></a>
<a id="trace-27019"></a>
<a id="trace-27021"></a>
<a id="trace-27031"></a>
<a id="trace-27033"></a>
<a id="trace-27039"></a>
<a id="trace-27041"></a>
<a id="trace-27055"></a>
<a id="trace-27057"></a>
<a id="trace-27064"></a>
<a id="trace-27066"></a>
<a id="trace-27080"></a>
<a id="trace-27082"></a>
<a id="trace-27095"></a>
<a id="trace-27097"></a>
<a id="trace-27163"></a>
<a id="trace-27165"></a>
<a id="trace-27176"></a>
<a id="trace-27178"></a>
<a id="trace-27184"></a>
<a id="trace-27186"></a>
<a id="trace-27190"></a>
<a id="trace-27192"></a>
<a id="trace-27200"></a>
<a id="trace-27202"></a>
<a id="trace-27209"></a>
<a id="trace-27211"></a>
<a id="trace-27221"></a>
<a id="trace-27223"></a>
<a id="trace-27232"></a>
<a id="trace-27234"></a>
<a id="trace-27242"></a>
<a id="trace-27244"></a>
<a id="trace-27253"></a>
<a id="trace-27255"></a>
<a id="trace-27320"></a>
<a id="trace-27322"></a>
<a id="trace-27351"></a>
<a id="trace-27353"></a>
<a id="trace-27359"></a>
<a id="trace-27361"></a>
<a id="trace-27372"></a>
<a id="trace-27374"></a>
<a id="trace-27380"></a>
<a id="trace-27382"></a>
<a id="trace-27391"></a>
<a id="trace-27393"></a>
<a id="trace-27401"></a>
<a id="trace-27403"></a>
<a id="trace-27411"></a>
<a id="trace-27413"></a>
<a id="trace-27419"></a>
<a id="trace-27421"></a>
<a id="trace-27487"></a>
<a id="trace-27489"></a>
<a id="trace-27497"></a>
<a id="trace-27499"></a>
<a id="trace-27510"></a>
<a id="trace-27512"></a>
<a id="trace-27517"></a>
<a id="trace-27519"></a>
<a id="trace-27534"></a>
<a id="trace-27536"></a>
<a id="trace-27551"></a>
<a id="trace-27553"></a>
<a id="trace-27563"></a>
<a id="trace-27565"></a>
<a id="trace-27572"></a>
<a id="trace-27574"></a>
<a id="trace-27586"></a>
<a id="trace-27588"></a>
<a id="trace-27594"></a>
<a id="trace-27596"></a>
<a id="trace-27660"></a>
<a id="trace-27662"></a>
<a id="trace-27677"></a>
<a id="trace-27679"></a>
<a id="trace-27682"></a>
<a id="trace-27684"></a>
<a id="trace-27694"></a>
<a id="trace-27696"></a>
<a id="trace-27707"></a>
<a id="trace-27709"></a>
<a id="trace-27717"></a>
<a id="trace-27719"></a>
<a id="trace-27732"></a>
<a id="trace-27734"></a>
<a id="trace-27751"></a>
<a id="trace-27753"></a>
<a id="trace-27759"></a>
<a id="trace-27761"></a>
<a id="trace-27826"></a>
<a id="trace-27828"></a>
<a id="trace-27839"></a>
<a id="trace-27841"></a>
<a id="trace-27848"></a>
<a id="trace-27850"></a>
<a id="trace-27854"></a>
<a id="trace-27856"></a>
<a id="trace-27864"></a>
<a id="trace-27866"></a>
<a id="trace-27873"></a>
<a id="trace-27875"></a>
<a id="trace-27884"></a>
<a id="trace-27886"></a>
<a id="trace-27896"></a>
<a id="trace-27898"></a>
<a id="trace-27909"></a>
<a id="trace-27911"></a>
<a id="trace-27918"></a>
<a id="trace-27920"></a>
<a id="trace-27992"></a>
<a id="trace-27994"></a>
<a id="trace-28003"></a>
<a id="trace-28005"></a>
<a id="trace-28020"></a>
<a id="trace-28022"></a>
<a id="trace-28028"></a>
<a id="trace-28030"></a>
<a id="trace-28047"></a>
<a id="trace-28049"></a>
<a id="trace-28057"></a>
<a id="trace-28059"></a>
<a id="trace-28067"></a>
<a id="trace-28069"></a>
<a id="trace-28076"></a>
<a id="trace-28078"></a>
<a id="trace-28085"></a>
<a id="trace-28087"></a>
- 1.60s–359.80s (×1424), actor 37, squad 4 (trace 703): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49288929108387786, 'next_transition': 730}.
<a id="trace-982"></a>
<a id="trace-984"></a>
<a id="trace-1079"></a>
<a id="trace-1081"></a>
<a id="trace-1113"></a>
<a id="trace-1115"></a>
<a id="trace-1147"></a>
<a id="trace-1149"></a>
<a id="trace-1186"></a>
<a id="trace-1188"></a>
<a id="trace-1226"></a>
<a id="trace-1228"></a>
<a id="trace-1319"></a>
<a id="trace-1321"></a>
<a id="trace-1339"></a>
<a id="trace-1341"></a>
<a id="trace-1361"></a>
<a id="trace-1363"></a>
<a id="trace-1389"></a>
<a id="trace-1391"></a>
<a id="trace-1423"></a>
<a id="trace-1425"></a>
- 5.70s–12.20s (×22), actor 5, squad 0 (trace 982): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 889. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.6489407662820055, 'next_transition': 1079}.
<a id="trace-151"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 151): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1454}.
<a id="trace-152"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 152): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09017565968708079, 'next_transition': 1831}.
<a id="trace-1430"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1430): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1430. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1454}.
<a id="trace-1431"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1431): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1431. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1454}.
<a id="trace-1432"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1432): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1432. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09017565968708079, 'next_transition': 1831}.
<a id="trace-1433"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1433): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1433. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09017565968708079, 'next_transition': 1831}.
<a id="trace-1454"></a>
<a id="trace-1456"></a>
- 12.70s–12.70s (×2), actor 5, squad 0 (trace 1454): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1433. Next observer evidence: None.
<a id="trace-1463"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1463): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1240. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724836511721874, 'next_transition': 1797}.
<a id="trace-1797"></a>
<a id="trace-1799"></a>
<a id="trace-1823"></a>
<a id="trace-1825"></a>
<a id="trace-2189"></a>
<a id="trace-2191"></a>
<a id="trace-2265"></a>
<a id="trace-2267"></a>
<a id="trace-2552"></a>
<a id="trace-2554"></a>
<a id="trace-2624"></a>
<a id="trace-2626"></a>
<a id="trace-2666"></a>
<a id="trace-2668"></a>
<a id="trace-2692"></a>
<a id="trace-2694"></a>
<a id="trace-2808"></a>
<a id="trace-2810"></a>
<a id="trace-2840"></a>
<a id="trace-2842"></a>
<a id="trace-2910"></a>
<a id="trace-2912"></a>
<a id="trace-2948"></a>
<a id="trace-2950"></a>
<a id="trace-2969"></a>
<a id="trace-2971"></a>
<a id="trace-3005"></a>
<a id="trace-3007"></a>
- 13.20s–23.25s (×28), actor 5, squad 0 (trace 1797): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1433. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4134564417349163, 'next_transition': 1823}.
<a id="trace-1831"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1831): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1248. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.704733154623797, 'next_transition': 2349}.
<a id="trace-2349"></a>
- 17.60s–17.60s (×1), actor 8, squad 1 (trace 2349): received platoon directive. Knowledge: actor memory at 15.00s, trace 2119. Next observer evidence: {'until': 27, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.916900378167437, 'next_transition': 3567}.
<a id="trace-3013"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 3013): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2712. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15751107302345385, 'next_transition': 3296}.
<a id="trace-3014"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 3014): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2712. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15751107302345385, 'next_transition': 3296}.
<a id="trace-3296"></a>
<a id="trace-3298"></a>
<a id="trace-3328"></a>
<a id="trace-3330"></a>
<a id="trace-3453"></a>
<a id="trace-3455"></a>
<a id="trace-3468"></a>
<a id="trace-3470"></a>
<a id="trace-3523"></a>
<a id="trace-3525"></a>
<a id="trace-3551"></a>
<a id="trace-3553"></a>
<a id="trace-3580"></a>
<a id="trace-3582"></a>
<a id="trace-3600"></a>
<a id="trace-3602"></a>
<a id="trace-3627"></a>
<a id="trace-3629"></a>
<a id="trace-3650"></a>
<a id="trace-3652"></a>
<a id="trace-3786"></a>
<a id="trace-3788"></a>
- 23.75s–30.25s (×22), actor 5, squad 0 (trace 3296): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2717. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4921718377480659, 'next_transition': 3328}.
<a id="trace-3567"></a>
- 27.00s–27.00s (×1), actor 8, squad 1 (trace 3567): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 3378. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 411}.
<a id="trace-3866"></a>
- 32.65s–32.65s (×1), actor 0, squad 0 (trace 3866): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 3697. Next observer evidence: None.
<a id="trace-4034"></a>
<a id="trace-4036"></a>
<a id="trace-4074"></a>
<a id="trace-4076"></a>
<a id="trace-4208"></a>
<a id="trace-4210"></a>
<a id="trace-4230"></a>
<a id="trace-4232"></a>
<a id="trace-4252"></a>
<a id="trace-4254"></a>
<a id="trace-4273"></a>
<a id="trace-4275"></a>
<a id="trace-4294"></a>
<a id="trace-4296"></a>
<a id="trace-4308"></a>
<a id="trace-4310"></a>
<a id="trace-4346"></a>
<a id="trace-4348"></a>
<a id="trace-4367"></a>
<a id="trace-4369"></a>
<a id="trace-4383"></a>
<a id="trace-4385"></a>
<a id="trace-4478"></a>
<a id="trace-4480"></a>
<a id="trace-4498"></a>
<a id="trace-4500"></a>
<a id="trace-4519"></a>
<a id="trace-4521"></a>
<a id="trace-4558"></a>
<a id="trace-4570"></a>
<a id="trace-4586"></a>
<a id="trace-4640"></a>
<a id="trace-4642"></a>
<a id="trace-5104"></a>
<a id="trace-5106"></a>
<a id="trace-5127"></a>
<a id="trace-5129"></a>
<a id="trace-5156"></a>
<a id="trace-5158"></a>
<a id="trace-5182"></a>
<a id="trace-5184"></a>
<a id="trace-5201"></a>
<a id="trace-5203"></a>
- 32.75s–47.25s (×43), actor 5, squad 0 (trace 4034): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3702. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9162248332340048, 'next_transition': 4074}.
<a id="trace-411"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (events line 411): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4393"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 4393): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 4393. Next observer evidence: {'until': 45, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4674}.
<a id="trace-4394"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 4394): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 4394. Next observer evidence: {'until': 45, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4674}.
<a id="trace-4674"></a>
- 45.00s–45.00s (×1), actor 8, squad 1 (trace 4674): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 4658. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.601742016929668, 'next_transition': 6030}.
<a id="trace-4679"></a>
- 45.00s–45.00s (×1), actor 8, squad 1 (trace 4679): MoveTactically. Knowledge: actor memory at 45.00s, trace 4658. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.601742016929668, 'next_transition': 6030}.
<a id="trace-4680"></a>
- 45.00s–45.00s (×1), actor 8, squad 1 (trace 4680): traveling overwatch. Knowledge: actor memory at 45.00s, trace 4658. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.601742016929668, 'next_transition': 6030}.
<a id="trace-4681"></a>
- 45.00s–45.00s (×1), actor 8, squad 1 (trace 4681): Reorganise complete. Knowledge: actor memory at 45.00s, trace 4658. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.601742016929668, 'next_transition': 6030}.
<a id="trace-5238"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 5238): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 4651. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17838717957328407, 'next_transition': 5610}.
<a id="trace-5239"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 5239): bounding overwatch. Knowledge: actor memory at 45.00s, trace 4651. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17838717957328407, 'next_transition': 5610}.
<a id="trace-5240"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 5240): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 4651. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17838717957328407, 'next_transition': 5610}.
<a id="trace-5610"></a>
<a id="trace-5612"></a>
<a id="trace-5643"></a>
<a id="trace-5645"></a>
- 48.75s–49.25s (×4), actor 5, squad 0 (trace 5610): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4655. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9607598416400508, 'next_transition': 5643}.
<a id="trace-5655"></a>
- 49.45s–49.45s (×1), actor 1, squad 0 (trace 5655): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 45.00s, trace 4651. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3828744957992991, 'next_transition': 5676}.
<a id="trace-5657"></a>
- 49.45s–49.45s (×1), actor 1, squad 0 (trace 5657): NeedSupport. Knowledge: actor memory at 45.00s, trace 4651. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3828744957992991, 'next_transition': 5676}.
<a id="trace-5676"></a>
<a id="trace-5678"></a>
- 49.75s–49.75s (×2), actor 5, squad 0 (trace 5676): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4655. Next observer evidence: {'until': 50, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5365248598908817, 'next_transition': 5763}.
<a id="trace-5763"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 5763): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 5694. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999477677312273, 'next_transition': 6021}.
<a id="trace-5768"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 5768): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 5694. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999477677312273, 'next_transition': 6021}.
<a id="trace-5769"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 5769): Reorganise complete: known contact. Knowledge: actor memory at 50.00s, trace 5694. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999477677312273, 'next_transition': 6021}.
<a id="trace-6021"></a>
<a id="trace-6023"></a>
<a id="trace-6861"></a>
<a id="trace-6863"></a>
<a id="trace-7299"></a>
<a id="trace-7301"></a>
<a id="trace-7351"></a>
<a id="trace-7353"></a>
<a id="trace-7856"></a>
<a id="trace-7858"></a>
- 50.25s–52.25s (×10), actor 5, squad 0 (trace 6021): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 5697. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.400067491812982, 'next_transition': 6861}.
<a id="trace-6030"></a>
- 50.25s–50.25s (×1), actor 8, squad 1 (trace 6030): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 5700. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300025456595321, 'next_transition': 6454}.
<a id="trace-6031"></a>
- 50.25s–50.25s (×1), actor 8, squad 1 (trace 6031): bounding overwatch. Knowledge: actor memory at 50.00s, trace 5700. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300025456595321, 'next_transition': 6454}.
<a id="trace-6032"></a>
<a id="trace-6454"></a>
<a id="trace-6882"></a>
<a id="trace-7372"></a>
<a id="trace-8179"></a>
- 50.25s–52.90s (×5), actor 8, squad 1 (trace 6032): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 5700. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300025456595321, 'next_transition': 6454}.
<a id="trace-7871"></a>
- 52.35s–52.35s (×1), actor 1, squad 0 (trace 7871): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 50.00s, trace 5694. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999559974225923, 'next_transition': 8157}.
<a id="trace-8157"></a>
<a id="trace-8159"></a>
<a id="trace-8681"></a>
<a id="trace-8683"></a>
<a id="trace-8819"></a>
<a id="trace-8821"></a>
<a id="trace-8884"></a>
<a id="trace-8886"></a>
<a id="trace-9016"></a>
<a id="trace-9018"></a>
<a id="trace-9066"></a>
<a id="trace-9068"></a>
- 52.75s–55.75s (×12), actor 5, squad 0 (trace 8157): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 5697. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.873652950011953, 'next_transition': 8681}.
<a id="trace-9082"></a>
- 56.00s–56.00s (×1), actor 1, squad 0 (trace 9082): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 55.00s, trace 8914. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500723726380846, 'next_transition': 9281}.
<a id="trace-9083"></a>
- 56.00s–56.00s (×1), actor 1, squad 0 (trace 9083): rearward bound: one stationary suppressing element. Knowledge: actor memory at 55.00s, trace 8914. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500723726380846, 'next_transition': 9281}.
<a id="trace-9281"></a>
<a id="trace-9283"></a>
<a id="trace-9820"></a>
<a id="trace-9822"></a>
<a id="trace-9863"></a>
<a id="trace-9865"></a>
<a id="trace-9914"></a>
<a id="trace-9916"></a>
<a id="trace-9960"></a>
<a id="trace-9962"></a>
<a id="trace-10544"></a>
<a id="trace-10546"></a>
<a id="trace-10653"></a>
<a id="trace-10655"></a>
<a id="trace-10708"></a>
<a id="trace-10710"></a>
<a id="trace-10730"></a>
<a id="trace-10732"></a>
<a id="trace-10748"></a>
<a id="trace-10750"></a>
<a id="trace-10764"></a>
<a id="trace-10766"></a>
<a id="trace-13673"></a>
<a id="trace-13675"></a>
<a id="trace-13691"></a>
<a id="trace-13693"></a>
<a id="trace-13718"></a>
<a id="trace-13720"></a>
<a id="trace-13739"></a>
<a id="trace-13741"></a>
<a id="trace-13823"></a>
<a id="trace-13825"></a>
<a id="trace-13844"></a>
<a id="trace-13846"></a>
<a id="trace-13861"></a>
<a id="trace-13863"></a>
<a id="trace-13886"></a>
<a id="trace-13888"></a>
<a id="trace-13906"></a>
<a id="trace-13908"></a>
- 56.25s–67.25s (×40), actor 5, squad 0 (trace 9281): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 8917. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5775063982329545, 'next_transition': 9820}.
<a id="trace-9296"></a>
- 56.40s–56.40s (×1), actor 8, squad 1 (trace 9296): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 8920. Next observer evidence: {'until': 57, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9333}.
<a id="trace-9333"></a>
- 57.00s–57.00s (×1), actor 8, squad 1 (trace 9333): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 55.00s, trace 8920. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0013629586384039322, 'next_transition': 9978}.
<a id="trace-9978"></a>
- 58.80s–58.80s (×1), actor 8, squad 1 (trace 9978): new contact inside 100 m. Knowledge: actor memory at 55.00s, trace 8920. Next observer evidence: {'until': 62.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.45707500068369533, 'next_transition': 10775}.
<a id="trace-10775"></a>
- 62.85s–62.85s (×1), actor 8, squad 1 (trace 10775): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 10576. Next observer evidence: {'until': 67.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 5.737697844519602, 'next_transition': 887}.
<a id="trace-10777"></a>
- 62.85s–62.85s (×1), actor 8, squad 1 (trace 10777): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 10576. Next observer evidence: {'until': 67.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 5.737697844519602, 'next_transition': 887}.
<a id="trace-13583"></a>
- 62.85s–62.85s (×1), actor 8, squad 1 (trace 13583): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 60.00s, trace 10576. Next observer evidence: {'until': 67.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 5.737697844519602, 'next_transition': 887}.
<a id="trace-13584"></a>
- 62.85s–62.85s (×1), actor 8, squad 1 (trace 13584): MoveTactically. Knowledge: actor memory at 60.00s, trace 10576. Next observer evidence: {'until': 67.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 5.737697844519602, 'next_transition': 887}.
<a id="trace-13585"></a>
- 62.85s–62.85s (×1), actor 8, squad 1 (trace 13585): contact cover complete: assessment resumes closure. Knowledge: actor memory at 60.00s, trace 10576. Next observer evidence: {'until': 67.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 5.737697844519602, 'next_transition': 887}.
<a id="trace-886"></a>
- 67.45s–67.45s (×1), actor 5, squad 0 (events line 886): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-887"></a>
- 67.45s–67.45s (×1), actor 5, squad 1 (events line 887): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13917"></a>
- 67.45s–67.45s (×1), actor 5, squad 0 (trace 13917): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.436551 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.45s, trace 13917. Next observer evidence: None.
<a id="trace-13918"></a>
- 67.45s–67.45s (×1), actor 5, squad 0 (trace 13918): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.436551 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.45s, trace 13918. Next observer evidence: None.
<a id="trace-13919"></a>
- 67.45s–67.45s (×1), actor 5, squad 1 (trace 13919): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.436551 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.45s, trace 13919. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2623569207030301, 'next_transition': 13933}.
<a id="trace-13920"></a>
- 67.45s–67.45s (×1), actor 5, squad 1 (trace 13920): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.436551 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.45s, trace 13920. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2623569207030301, 'next_transition': 13933}.
<a id="trace-13925"></a>
- 67.55s–67.55s (×1), actor 1, squad 0 (trace 13925): NeedSupport. Knowledge: actor memory at 65.00s, trace 13755. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10399481003342852, 'next_transition': 14051}.
<a id="trace-13933"></a>
- 67.70s–67.70s (×1), actor 9, squad 1 (trace 13933): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 65.00s, trace 13761. Next observer evidence: {'until': 70, 'shots': 0, 'casualties': 1, 'mean_displacement': 3.9821226150286777, 'next_transition': 14174}.
<a id="trace-14051"></a>
<a id="trace-14053"></a>
<a id="trace-14078"></a>
<a id="trace-14080"></a>
<a id="trace-14094"></a>
<a id="trace-14096"></a>
<a id="trace-14120"></a>
<a id="trace-14122"></a>
<a id="trace-14140"></a>
<a id="trace-14142"></a>
<a id="trace-14343"></a>
<a id="trace-14367"></a>
<a id="trace-14623"></a>
<a id="trace-14641"></a>
<a id="trace-14671"></a>
<a id="trace-14718"></a>
<a id="trace-14720"></a>
<a id="trace-14775"></a>
<a id="trace-14777"></a>
<a id="trace-14855"></a>
<a id="trace-14857"></a>
<a id="trace-15130"></a>
<a id="trace-15132"></a>
- 67.75s–76.25s (×23), actor 5, squad 0 (trace 14051): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 67.45s, trace 13920. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31258739615683667, 'next_transition': 14078}.
<a id="trace-14174"></a>
- 70.10s–70.10s (×1), actor 9, squad 1 (trace 14174): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 70.00s, trace 14158. Next observer evidence: {'until': 70.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07726413932090322, 'next_transition': 14356}.
<a id="trace-14292"></a>
- 70.10s–70.10s (×1), actor 9, squad 1 (trace 14292): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 70.00s, trace 14158. Next observer evidence: {'until': 70.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07726413932090322, 'next_transition': 14356}.
<a id="trace-14356"></a>
- 70.55s–70.55s (×1), actor 9, squad 1 (trace 14356): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 70.00s, trace 14158. Next observer evidence: {'until': 70.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14375}.
<a id="trace-14358"></a>
- 70.55s–70.55s (×1), actor 9, squad 1 (trace 14358): NeedSupport. Knowledge: actor memory at 70.00s, trace 14158. Next observer evidence: {'until': 70.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14375}.
<a id="trace-14375"></a>
- 70.85s–70.85s (×1), actor 9, squad 1 (trace 14375): Reorganise: completed/failed drill. Knowledge: actor memory at 70.00s, trace 14158. Next observer evidence: {'until': 72, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2773380122446054, 'next_transition': 14650}.
<a id="trace-14378"></a>
- 70.85s–70.85s (×1), actor 9, squad 1 (trace 14378): MoveTactically. Knowledge: actor memory at 70.00s, trace 14158. Next observer evidence: {'until': 72, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2773380122446054, 'next_transition': 14650}.
<a id="trace-14379"></a>
- 70.85s–70.85s (×1), actor 9, squad 1 (trace 14379): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 70.00s, trace 14158. Next observer evidence: {'until': 72, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2773380122446054, 'next_transition': 14650}.
<a id="trace-14650"></a>
- 72.10s–72.10s (×1), actor 9, squad 1 (trace 14650): NeedSupport. Knowledge: actor memory at 70.00s, trace 14158. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.997783392597427, 'next_transition': 14865}.
<a id="trace-14865"></a>
- 75.30s–75.30s (×1), actor 9, squad 1 (trace 14865): ReactToContact: cover and return fire. Knowledge: actor memory at 75.00s, trace 14790. Next observer evidence: {'until': 77.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.021801953562098, 'next_transition': 15388}.
<a id="trace-14866"></a>
<a id="trace-15388"></a>
<a id="trace-15856"></a>
- 75.30s–81.15s (×3), actor 9, squad 1 (trace 14866): new contact inside 100 m. Knowledge: actor memory at 75.00s, trace 14790. Next observer evidence: {'until': 77.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.021801953562098, 'next_transition': 15388}.
<a id="trace-15142"></a>
- 76.45s–76.45s (×1), actor 1, squad 0 (trace 15142): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 14784. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15316}.
<a id="trace-15149"></a>
- 76.45s–76.45s (×1), actor 1, squad 0 (trace 15149): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 14784. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15316}.
<a id="trace-15316"></a>
<a id="trace-15318"></a>
<a id="trace-15345"></a>
<a id="trace-15347"></a>
<a id="trace-15378"></a>
<a id="trace-15380"></a>
<a id="trace-15646"></a>
<a id="trace-15648"></a>
<a id="trace-15673"></a>
<a id="trace-15675"></a>
<a id="trace-15699"></a>
<a id="trace-15701"></a>
<a id="trace-15717"></a>
<a id="trace-15719"></a>
<a id="trace-15812"></a>
<a id="trace-15814"></a>
<a id="trace-15830"></a>
<a id="trace-15832"></a>
<a id="trace-16120"></a>
<a id="trace-16122"></a>
<a id="trace-16155"></a>
<a id="trace-16157"></a>
<a id="trace-16178"></a>
<a id="trace-16180"></a>
<a id="trace-16246"></a>
<a id="trace-16248"></a>
<a id="trace-16267"></a>
<a id="trace-16269"></a>
<a id="trace-16352"></a>
<a id="trace-16354"></a>
<a id="trace-16368"></a>
<a id="trace-16370"></a>
<a id="trace-16390"></a>
<a id="trace-16392"></a>
<a id="trace-16432"></a>
<a id="trace-16434"></a>
<a id="trace-16451"></a>
<a id="trace-16453"></a>
- 76.75s–87.75s (×38), actor 5, squad 0 (trace 15316): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 14787. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5249786330191956, 'next_transition': 15345}.
<a id="trace-16304"></a>
- 85.10s–85.10s (×1), actor 9, squad 1 (trace 16304): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 85.00s, trace 16289. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.166137382414508, 'next_transition': 16676}.
<a id="trace-16463"></a>
- 87.85s–87.85s (×1), actor 1, squad 0 (trace 16463): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 85.00s, trace 16283. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1512012248995063, 'next_transition': 16485}.
<a id="trace-16485"></a>
<a id="trace-16487"></a>
<a id="trace-16512"></a>
<a id="trace-16514"></a>
<a id="trace-16545"></a>
<a id="trace-16547"></a>
<a id="trace-16567"></a>
<a id="trace-16569"></a>
<a id="trace-16652"></a>
<a id="trace-16654"></a>
<a id="trace-16678"></a>
<a id="trace-16680"></a>
<a id="trace-16698"></a>
<a id="trace-16700"></a>
<a id="trace-16713"></a>
<a id="trace-16715"></a>
<a id="trace-16733"></a>
<a id="trace-16735"></a>
<a id="trace-16748"></a>
<a id="trace-16750"></a>
<a id="trace-16768"></a>
<a id="trace-16770"></a>
<a id="trace-16813"></a>
<a id="trace-16815"></a>
<a id="trace-16895"></a>
<a id="trace-16897"></a>
<a id="trace-16910"></a>
<a id="trace-16912"></a>
<a id="trace-16920"></a>
<a id="trace-16922"></a>
<a id="trace-16940"></a>
<a id="trace-16942"></a>
<a id="trace-16967"></a>
<a id="trace-16969"></a>
<a id="trace-16999"></a>
<a id="trace-17001"></a>
<a id="trace-17013"></a>
<a id="trace-17015"></a>
<a id="trace-17087"></a>
<a id="trace-17089"></a>
<a id="trace-17112"></a>
<a id="trace-17114"></a>
<a id="trace-17143"></a>
<a id="trace-17145"></a>
<a id="trace-17154"></a>
<a id="trace-17156"></a>
<a id="trace-17173"></a>
<a id="trace-17175"></a>
<a id="trace-17243"></a>
<a id="trace-17245"></a>
<a id="trace-17263"></a>
<a id="trace-17265"></a>
<a id="trace-17275"></a>
<a id="trace-17277"></a>
<a id="trace-17350"></a>
<a id="trace-17352"></a>
<a id="trace-17360"></a>
<a id="trace-17362"></a>
<a id="trace-17374"></a>
<a id="trace-17376"></a>
<a id="trace-17382"></a>
<a id="trace-17384"></a>
<a id="trace-17402"></a>
<a id="trace-17404"></a>
<a id="trace-17412"></a>
<a id="trace-17414"></a>
<a id="trace-17429"></a>
<a id="trace-17431"></a>
<a id="trace-17441"></a>
<a id="trace-17443"></a>
- 88.25s–108.75s (×70), actor 5, squad 0 (trace 16485): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 16286. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.151198380769181, 'next_transition': 16512}.
<a id="trace-16676"></a>
- 90.70s–90.70s (×1), actor 9, squad 1 (trace 16676): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 90.00s, trace 16583. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.0042500031864574, 'next_transition': 17185}.
<a id="trace-17185"></a>
- 103.60s–103.60s (×1), actor 9, squad 1 (trace 17185): MoveTactically. Knowledge: actor memory at 100.00s, trace 17028. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.221301098357534, 'next_transition': 17469}.
<a id="trace-17186"></a>
- 103.60s–103.60s (×1), actor 9, squad 1 (trace 17186): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 100.00s, trace 17028. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.221301098357534, 'next_transition': 17469}.
<a id="trace-1428"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (events line 1428): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17461}.
<a id="trace-17448"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 17448): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.842445 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 108.95s, trace 17448. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17461}.
<a id="trace-17449"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 17449): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.842445 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 108.95s, trace 17449. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17461}.
<a id="trace-17461"></a>
<a id="trace-17463"></a>
<a id="trace-17596"></a>
<a id="trace-17598"></a>
<a id="trace-17671"></a>
<a id="trace-17673"></a>
<a id="trace-17684"></a>
<a id="trace-17686"></a>
<a id="trace-17697"></a>
<a id="trace-17699"></a>
<a id="trace-17705"></a>
<a id="trace-17707"></a>
<a id="trace-17720"></a>
<a id="trace-17722"></a>
<a id="trace-17730"></a>
<a id="trace-17732"></a>
<a id="trace-17744"></a>
<a id="trace-17746"></a>
<a id="trace-17758"></a>
<a id="trace-17760"></a>
<a id="trace-17772"></a>
<a id="trace-17774"></a>
<a id="trace-17787"></a>
<a id="trace-17789"></a>
<a id="trace-17859"></a>
<a id="trace-17861"></a>
<a id="trace-17871"></a>
<a id="trace-17873"></a>
<a id="trace-17884"></a>
<a id="trace-17886"></a>
<a id="trace-17909"></a>
<a id="trace-17931"></a>
<a id="trace-17944"></a>
<a id="trace-17958"></a>
<a id="trace-17971"></a>
<a id="trace-18043"></a>
<a id="trace-18053"></a>
<a id="trace-18064"></a>
<a id="trace-18070"></a>
<a id="trace-18083"></a>
<a id="trace-18090"></a>
- 109.25s–122.75s (×41), actor 5, squad 0 (trace 17461): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.95s, trace 17449. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17596}.
<a id="trace-17469"></a>
- 109.30s–109.30s (×1), actor 9, squad 1 (trace 17469): ReactToContact: cover and return fire. Knowledge: actor memory at 105.00s, trace 17289. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.46889999999999965, 'next_transition': None}.
<a id="trace-17470"></a>
- 109.30s–109.30s (×1), actor 9, squad 1 (trace 17470): new contact inside 100 m. Knowledge: actor memory at 105.00s, trace 17289. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.46889999999999965, 'next_transition': None}.
<a id="trace-1472"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (events line 1472): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18115}.
<a id="trace-18095"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (trace 18095): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.706585 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 122.80s, trace 18095. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18115}.
<a id="trace-18096"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (trace 18096): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.706585 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 122.80s, trace 18096. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18115}.
<a id="trace-18115"></a>
<a id="trace-18127"></a>
<a id="trace-18205"></a>
<a id="trace-18213"></a>
<a id="trace-18222"></a>
<a id="trace-18240"></a>
<a id="trace-18247"></a>
<a id="trace-18259"></a>
- 123.75s–128.30s (×8), actor 5, squad 0 (trace 18115): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 122.80s, trace 18096. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18127}.
<a id="trace-18268"></a>
- 128.65s–128.65s (×1), actor 1, squad 0 (trace 18268): MoveTactically. Knowledge: actor memory at 125.00s, trace 18143. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18393}.
<a id="trace-18269"></a>
- 128.65s–128.65s (×1), actor 1, squad 0 (trace 18269): received platoon directive. Knowledge: actor memory at 125.00s, trace 18143. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18393}.
<a id="trace-18393"></a>
<a id="trace-18406"></a>
<a id="trace-18427"></a>
<a id="trace-18503"></a>
<a id="trace-18513"></a>
<a id="trace-18543"></a>
<a id="trace-18570"></a>
<a id="trace-18602"></a>
<a id="trace-18615"></a>
<a id="trace-18730"></a>
<a id="trace-18739"></a>
<a id="trace-18754"></a>
<a id="trace-18767"></a>
<a id="trace-18782"></a>
- 128.80s–137.30s (×14), actor 5, squad 0 (trace 18393): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 18146. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18406}.
<a id="trace-18787"></a>
- 137.30s–137.30s (×1), actor 1, squad 0 (trace 18787): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 135.00s, trace 18665. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9017745122143564, 'next_transition': 18957}.
<a id="trace-18957"></a>
<a id="trace-19010"></a>
<a id="trace-19048"></a>
<a id="trace-19148"></a>
<a id="trace-19160"></a>
<a id="trace-19188"></a>
<a id="trace-19211"></a>
<a id="trace-19246"></a>
<a id="trace-19351"></a>
<a id="trace-19393"></a>
<a id="trace-19407"></a>
<a id="trace-19416"></a>
<a id="trace-19436"></a>
<a id="trace-19455"></a>
<a id="trace-19467"></a>
<a id="trace-19476"></a>
<a id="trace-19550"></a>
<a id="trace-19593"></a>
- 137.80s–151.80s (×18), actor 5, squad 0 (trace 18957): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 18668. Next observer evidence: {'until': 138.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5251975886018, 'next_transition': 19010}.
<a id="trace-19613"></a>
- 152.05s–152.05s (×1), actor 1, squad 0 (trace 19613): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 150.00s, trace 19483. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19901}.
<a id="trace-19901"></a>
<a id="trace-19933"></a>
<a id="trace-19954"></a>
<a id="trace-19969"></a>
<a id="trace-20001"></a>
<a id="trace-20072"></a>
<a id="trace-20084"></a>
<a id="trace-20099"></a>
<a id="trace-20113"></a>
<a id="trace-20124"></a>
<a id="trace-20141"></a>
<a id="trace-20163"></a>
<a id="trace-20186"></a>
<a id="trace-20232"></a>
<a id="trace-20307"></a>
<a id="trace-20322"></a>
<a id="trace-20336"></a>
<a id="trace-20349"></a>
- 152.30s–161.80s (×18), actor 5, squad 0 (trace 19901): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 19486. Next observer evidence: {'until': 152.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500066722001829, 'next_transition': 19933}.
<a id="trace-20354"></a>
- 162.00s–162.00s (×1), actor 1, squad 0 (trace 20354): ReactToContact: cover and return fire. Knowledge: actor memory at 160.00s, trace 20239. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.050437245008029416, 'next_transition': 20637}.
<a id="trace-20355"></a>
- 162.00s–162.00s (×1), actor 1, squad 0 (trace 20355): new contact inside 100 m. Knowledge: actor memory at 160.00s, trace 20239. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.050437245008029416, 'next_transition': 20637}.
<a id="trace-20637"></a>
<a id="trace-20653"></a>
<a id="trace-20673"></a>
<a id="trace-20686"></a>
- 162.30s–163.80s (×4), actor 5, squad 0 (trace 20637): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 20241. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.15222086114805194, 'next_transition': 20653}.
<a id="trace-20702"></a>
- 164.10s–164.10s (×1), actor 1, squad 0 (trace 20702): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 160.00s, trace 20239. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750700500295214, 'next_transition': 20722}.
<a id="trace-20704"></a>
- 164.10s–164.10s (×1), actor 1, squad 0 (trace 20704): NeedSupport. Knowledge: actor memory at 160.00s, trace 20239. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750700500295214, 'next_transition': 20722}.
<a id="trace-20722"></a>
- 164.30s–164.30s (×1), actor 5, squad 0 (trace 20722): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 20241. Next observer evidence: None.
<a id="trace-20729"></a>
- 164.35s–164.35s (×1), actor 1, squad 0 (trace 20729): Reorganise: completed/failed drill. Knowledge: actor memory at 160.00s, trace 20239. Next observer evidence: {'until': 164.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300093447696173, 'next_transition': 20954}.
<a id="trace-20732"></a>
- 164.35s–164.35s (×1), actor 1, squad 0 (trace 20732): ReactToContact: cover and return fire. Knowledge: actor memory at 160.00s, trace 20239. Next observer evidence: {'until': 164.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300093447696173, 'next_transition': 20954}.
<a id="trace-20733"></a>
- 164.35s–164.35s (×1), actor 1, squad 0 (trace 20733): Reorganise complete: known contact. Knowledge: actor memory at 160.00s, trace 20239. Next observer evidence: {'until': 164.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300093447696173, 'next_transition': 20954}.
<a id="trace-20954"></a>
<a id="trace-21030"></a>
<a id="trace-21047"></a>
<a id="trace-21068"></a>
<a id="trace-21082"></a>
<a id="trace-21097"></a>
<a id="trace-21128"></a>
- 164.80s–168.30s (×7), actor 5, squad 0 (trace 20954): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 20241. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0631239058932611, 'next_transition': 21030}.
<a id="trace-21139"></a>
- 168.65s–168.65s (×1), actor 1, squad 0 (trace 21139): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 165.00s, trace 20962. Next observer evidence: {'until': 168.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47252000087707147, 'next_transition': 21313}.
<a id="trace-21140"></a>
- 168.65s–168.65s (×1), actor 1, squad 0 (trace 21140): rearward bound: one stationary suppressing element. Knowledge: actor memory at 165.00s, trace 20962. Next observer evidence: {'until': 168.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47252000087707147, 'next_transition': 21313}.
<a id="trace-21313"></a>
<a id="trace-21334"></a>
<a id="trace-21425"></a>
<a id="trace-21443"></a>
<a id="trace-21462"></a>
<a id="trace-21476"></a>
<a id="trace-21500"></a>
<a id="trace-21517"></a>
<a id="trace-21530"></a>
<a id="trace-21544"></a>
<a id="trace-21573"></a>
<a id="trace-21646"></a>
<a id="trace-21658"></a>
<a id="trace-21676"></a>
<a id="trace-21691"></a>
<a id="trace-21704"></a>
<a id="trace-21734"></a>
<a id="trace-21750"></a>
<a id="trace-21770"></a>
<a id="trace-21785"></a>
<a id="trace-21858"></a>
<a id="trace-21872"></a>
<a id="trace-21891"></a>
<a id="trace-21902"></a>
<a id="trace-21933"></a>
<a id="trace-21949"></a>
<a id="trace-21961"></a>
<a id="trace-21980"></a>
<a id="trace-22063"></a>
<a id="trace-22082"></a>
<a id="trace-22100"></a>
<a id="trace-22109"></a>
<a id="trace-22127"></a>
- 168.80s–187.30s (×33), actor 5, squad 0 (trace 21313): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 20964. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2442168958074333, 'next_transition': 21334}.
<a id="trace-22135"></a>
- 187.45s–187.45s (×1), actor 1, squad 0 (trace 22135): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 185.00s, trace 22003. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5638122587302619, 'next_transition': 22177}.
<a id="trace-22136"></a>
- 187.45s–187.45s (×1), actor 1, squad 0 (trace 22136): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 185.00s, trace 22003. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5638122587302619, 'next_transition': 22177}.
<a id="trace-22177"></a>
<a id="trace-22193"></a>
- 188.80s–189.30s (×2), actor 5, squad 0 (trace 22177): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 22004. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200086163137349, 'next_transition': 22193}.
<a id="trace-22200"></a>
- 189.35s–189.35s (×1), actor 5, squad 0 (trace 22200): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 189.35s, trace 22200. Next observer evidence: {'until': 189.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299949065049825, 'next_transition': 22208}.
<a id="trace-22208"></a>
<a id="trace-22282"></a>
<a id="trace-22295"></a>
<a id="trace-22307"></a>
- 189.80s–191.30s (×4), actor 5, squad 0 (trace 22208): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 189.35s, trace 22200. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000579493356777, 'next_transition': 22282}.
<a id="trace-1997"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (events line 1997): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22322"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (trace 22322): renew committed intent (75 s lifetime). Knowledge: actor memory at 191.85s, trace 22322. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000626603791424, 'next_transition': 22334}.
<a id="trace-22334"></a>
<a id="trace-22343"></a>
<a id="trace-22357"></a>
<a id="trace-22373"></a>
<a id="trace-22467"></a>
<a id="trace-22476"></a>
<a id="trace-22487"></a>
<a id="trace-22494"></a>
<a id="trace-22514"></a>
<a id="trace-22537"></a>
- 192.30s–198.80s (×10), actor 5, squad 0 (trace 22334): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 191.85s, trace 22322. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299974687868022, 'next_transition': 22343}.
<a id="trace-22542"></a>
- 198.80s–198.80s (×1), actor 1, squad 0 (trace 22542): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 195.00s, trace 22408. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200120236374194, 'next_transition': 22553}.
<a id="trace-22553"></a>
<a id="trace-22631"></a>
<a id="trace-22640"></a>
<a id="trace-22663"></a>
<a id="trace-22674"></a>
<a id="trace-22682"></a>
<a id="trace-22693"></a>
<a id="trace-22708"></a>
<a id="trace-22728"></a>
<a id="trace-22740"></a>
<a id="trace-22806"></a>
<a id="trace-22825"></a>
<a id="trace-22832"></a>
<a id="trace-22842"></a>
<a id="trace-22851"></a>
<a id="trace-22863"></a>
<a id="trace-22873"></a>
<a id="trace-22897"></a>
<a id="trace-22968"></a>
<a id="trace-22998"></a>
<a id="trace-23004"></a>
<a id="trace-23017"></a>
<a id="trace-23025"></a>
<a id="trace-23036"></a>
<a id="trace-23045"></a>
<a id="trace-23055"></a>
<a id="trace-23065"></a>
<a id="trace-23132"></a>
<a id="trace-23156"></a>
<a id="trace-23186"></a>
<a id="trace-23205"></a>
<a id="trace-23226"></a>
<a id="trace-23236"></a>
<a id="trace-23301"></a>
<a id="trace-23321"></a>
<a id="trace-23330"></a>
<a id="trace-23351"></a>
<a id="trace-23367"></a>
<a id="trace-23394"></a>
<a id="trace-23406"></a>
<a id="trace-23474"></a>
<a id="trace-23483"></a>
<a id="trace-23494"></a>
<a id="trace-23511"></a>
<a id="trace-23520"></a>
<a id="trace-23533"></a>
<a id="trace-23555"></a>
<a id="trace-23565"></a>
<a id="trace-23637"></a>
<a id="trace-23654"></a>
<a id="trace-23666"></a>
<a id="trace-23676"></a>
<a id="trace-23686"></a>
<a id="trace-23694"></a>
<a id="trace-23705"></a>
<a id="trace-23714"></a>
<a id="trace-23724"></a>
- 199.30s–234.30s (×57), actor 5, squad 0 (trace 22553): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 22409. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.049979995449649, 'next_transition': 22631}.
<a id="trace-2153"></a>
- 234.35s–234.35s (×1), actor 5, squad 0 (events line 2153): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23729"></a>
- 234.35s–234.35s (×1), actor 5, squad 0 (trace 23729): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.213005 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 234.35s, trace 23729. Next observer evidence: {'until': 234.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23739}.
<a id="trace-23730"></a>
- 234.35s–234.35s (×1), actor 5, squad 0 (trace 23730): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.213005 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 234.35s, trace 23730. Next observer evidence: {'until': 234.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23739}.
<a id="trace-23739"></a>
<a id="trace-23804"></a>
<a id="trace-23827"></a>
<a id="trace-23841"></a>
<a id="trace-23859"></a>
<a id="trace-23882"></a>
<a id="trace-23891"></a>
<a id="trace-23900"></a>
- 234.80s–239.30s (×8), actor 5, squad 0 (trace 23739): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 234.35s, trace 23730. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23804}.
<a id="trace-23910"></a>
- 239.70s–239.70s (×1), actor 1, squad 0 (trace 23910): Withdraw to received rally. Knowledge: actor memory at 235.00s, trace 23745. Next observer evidence: {'until': 239.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23965}.
<a id="trace-23911"></a>
- 239.70s–239.70s (×1), actor 1, squad 0 (trace 23911): rearward bound: one stationary suppressing element. Knowledge: actor memory at 235.00s, trace 23745. Next observer evidence: {'until': 239.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23965}.
<a id="trace-23965"></a>
<a id="trace-24033"></a>
<a id="trace-24053"></a>
<a id="trace-24064"></a>
<a id="trace-24092"></a>
- 239.80s–242.30s (×5), actor 5, squad 0 (trace 23965): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 23746. Next observer evidence: {'until': 240.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24033}.
<a id="trace-2190"></a>
- 242.60s–242.60s (×1), actor 5, squad 0 (events line 2190): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24101"></a>
- 242.60s–242.60s (×1), actor 5, squad 0 (trace 24101): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.220019 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 242.60s, trace 24101. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000000000000085, 'next_transition': 24105}.
<a id="trace-24102"></a>
- 242.60s–242.60s (×1), actor 5, squad 0 (trace 24102): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.220019 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 242.60s, trace 24102. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000000000000085, 'next_transition': 24105}.
<a id="trace-24105"></a>
<a id="trace-24126"></a>
<a id="trace-24144"></a>
<a id="trace-24160"></a>
<a id="trace-24175"></a>
<a id="trace-24268"></a>
<a id="trace-24275"></a>
<a id="trace-24294"></a>
<a id="trace-24313"></a>
<a id="trace-24337"></a>
<a id="trace-24362"></a>
<a id="trace-24445"></a>
- 242.80s–250.30s (×12), actor 5, squad 0 (trace 24105): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 242.60s, trace 24102. Next observer evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199999999999993, 'next_transition': 24126}.
<a id="trace-24474"></a>
- 251.65s–251.65s (×1), actor 1, squad 0 (trace 24474): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 250.00s, trace 24372. Next observer evidence: {'until': 251.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200000000264543, 'next_transition': 24479}.
<a id="trace-24475"></a>
- 251.65s–251.65s (×1), actor 1, squad 0 (trace 24475): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 250.00s, trace 24372. Next observer evidence: {'until': 251.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200000000264543, 'next_transition': 24479}.
<a id="trace-24479"></a>
<a id="trace-24513"></a>
<a id="trace-24525"></a>
<a id="trace-24534"></a>
<a id="trace-24553"></a>
<a id="trace-24566"></a>
<a id="trace-24645"></a>
<a id="trace-24662"></a>
<a id="trace-24686"></a>
<a id="trace-24711"></a>
<a id="trace-24720"></a>
<a id="trace-24731"></a>
<a id="trace-24814"></a>
<a id="trace-24826"></a>
<a id="trace-24845"></a>
<a id="trace-24871"></a>
<a id="trace-24888"></a>
<a id="trace-24900"></a>
<a id="trace-24912"></a>
<a id="trace-24978"></a>
<a id="trace-24987"></a>
<a id="trace-25002"></a>
<a id="trace-25022"></a>
<a id="trace-25033"></a>
<a id="trace-25056"></a>
<a id="trace-25072"></a>
<a id="trace-25146"></a>
<a id="trace-25157"></a>
<a id="trace-25175"></a>
<a id="trace-25184"></a>
<a id="trace-25194"></a>
<a id="trace-25204"></a>
<a id="trace-25214"></a>
<a id="trace-25226"></a>
<a id="trace-25235"></a>
<a id="trace-25307"></a>
<a id="trace-25317"></a>
<a id="trace-25334"></a>
<a id="trace-25348"></a>
<a id="trace-25359"></a>
<a id="trace-25368"></a>
<a id="trace-25382"></a>
<a id="trace-25391"></a>
<a id="trace-25401"></a>
<a id="trace-25476"></a>
<a id="trace-25485"></a>
<a id="trace-25497"></a>
<a id="trace-25507"></a>
<a id="trace-25517"></a>
<a id="trace-25532"></a>
<a id="trace-25552"></a>
<a id="trace-25561"></a>
<a id="trace-25572"></a>
<a id="trace-25584"></a>
<a id="trace-25651"></a>
<a id="trace-25660"></a>
<a id="trace-25675"></a>
<a id="trace-25685"></a>
<a id="trace-25697"></a>
<a id="trace-25711"></a>
<a id="trace-25735"></a>
<a id="trace-25819"></a>
<a id="trace-25830"></a>
<a id="trace-25845"></a>
<a id="trace-25851"></a>
<a id="trace-25869"></a>
<a id="trace-25879"></a>
<a id="trace-25889"></a>
<a id="trace-25908"></a>
<a id="trace-25987"></a>
<a id="trace-26005"></a>
<a id="trace-26019"></a>
<a id="trace-26030"></a>
<a id="trace-26043"></a>
<a id="trace-26053"></a>
<a id="trace-26071"></a>
<a id="trace-26155"></a>
<a id="trace-26166"></a>
<a id="trace-26176"></a>
<a id="trace-26186"></a>
<a id="trace-26203"></a>
<a id="trace-26231"></a>
<a id="trace-26244"></a>
<a id="trace-26252"></a>
<a id="trace-26318"></a>
<a id="trace-26337"></a>
<a id="trace-26344"></a>
<a id="trace-26357"></a>
<a id="trace-26367"></a>
<a id="trace-26390"></a>
<a id="trace-26407"></a>
- 251.80s–309.30s (×91), actor 5, squad 0 (trace 24479): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 24373. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.785000000099597, 'next_transition': 24513}.
<a id="trace-26412"></a>
- 309.35s–309.35s (×1), actor 1, squad 0 (trace 26412): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 305.00s, trace 26257. Next observer evidence: {'until': 310.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26491}.
<a id="trace-26491"></a>
<a id="trace-26512"></a>
- 310.30s–311.30s (×2), actor 5, squad 0 (trace 26491): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 310.00s, trace 26429. Next observer evidence: {'until': 311.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26512}.
<a id="trace-2492"></a>
- 311.60s–311.60s (×1), actor 5, squad 0 (events line 2492): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26517"></a>
- 311.60s–311.60s (×1), actor 5, squad 0 (trace 26517): renew committed intent (75 s lifetime). Knowledge: actor memory at 311.60s, trace 26517. Next observer evidence: {'until': 311.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26520}.
<a id="trace-26520"></a>
<a id="trace-26531"></a>
<a id="trace-26540"></a>
<a id="trace-26551"></a>
<a id="trace-26560"></a>
<a id="trace-26572"></a>
<a id="trace-26584"></a>
<a id="trace-26665"></a>
<a id="trace-26684"></a>
<a id="trace-26690"></a>
<a id="trace-26702"></a>
<a id="trace-26715"></a>
<a id="trace-26725"></a>
<a id="trace-26734"></a>
<a id="trace-26744"></a>
<a id="trace-26752"></a>
<a id="trace-26819"></a>
<a id="trace-26843"></a>
<a id="trace-26850"></a>
<a id="trace-26866"></a>
<a id="trace-26877"></a>
<a id="trace-26897"></a>
<a id="trace-26908"></a>
<a id="trace-26921"></a>
<a id="trace-26927"></a>
<a id="trace-27010"></a>
<a id="trace-27017"></a>
<a id="trace-27029"></a>
<a id="trace-27053"></a>
<a id="trace-27062"></a>
<a id="trace-27161"></a>
<a id="trace-27174"></a>
<a id="trace-27188"></a>
<a id="trace-27198"></a>
<a id="trace-27207"></a>
<a id="trace-27219"></a>
<a id="trace-27230"></a>
<a id="trace-27240"></a>
<a id="trace-27318"></a>
<a id="trace-27349"></a>
<a id="trace-27357"></a>
<a id="trace-27370"></a>
<a id="trace-27389"></a>
<a id="trace-27399"></a>
<a id="trace-27485"></a>
<a id="trace-27495"></a>
<a id="trace-27508"></a>
<a id="trace-27515"></a>
<a id="trace-27532"></a>
<a id="trace-27549"></a>
<a id="trace-27561"></a>
<a id="trace-27570"></a>
<a id="trace-27584"></a>
<a id="trace-27592"></a>
<a id="trace-27667"></a>
<a id="trace-27675"></a>
<a id="trace-27692"></a>
<a id="trace-27705"></a>
<a id="trace-27730"></a>
<a id="trace-27757"></a>
<a id="trace-27837"></a>
<a id="trace-27846"></a>
<a id="trace-27852"></a>
<a id="trace-27862"></a>
<a id="trace-27871"></a>
<a id="trace-27882"></a>
<a id="trace-27894"></a>
<a id="trace-27916"></a>
<a id="trace-27990"></a>
<a id="trace-28001"></a>
<a id="trace-28018"></a>
<a id="trace-28026"></a>
<a id="trace-28045"></a>
<a id="trace-28055"></a>
<a id="trace-28065"></a>
<a id="trace-28074"></a>
<a id="trace-28083"></a>
- 311.80s–359.80s (×77), actor 5, squad 0 (trace 26520): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 311.60s, trace 26517. Next observer evidence: {'until': 312.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26531}.

## Net delivery

245 matched order/radio deliveries; 307 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.534s; maximum 5.600s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 3707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 3708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3709: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3710: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3711: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3712: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3713: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3714: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3715: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3717: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3718: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 3719: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 3720: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 4142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 4143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4144: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4145: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4146: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4147: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4148: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4149: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4150: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4151: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4152: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4153: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 4154: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 4155: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 4393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 4394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 4405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 4406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 4407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 4408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4409: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4410: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4411: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4412: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4413: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4414: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4415: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4416: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 4417: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 4418: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 4419: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 4420: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 4652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 4653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 4658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 4659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 4660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 4661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4662: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4663: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 4664: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 4665: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4666: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4667: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4668: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4669: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 4670: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 4671: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 4672: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 4673: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 5694: estimate 14.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 5695: estimate 15.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 5696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 5697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 5698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 5699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 5700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 5701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 5702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 5703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 5704: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 5705: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 5706: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 5707: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 5708: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 5709: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 5710: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 5711: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 5712: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 5713: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 5714: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 5715: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8914: estimate 14.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 8915: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8917: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8918: estimate 15.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 8920: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 8921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 8922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 8923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8924: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8925: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8926: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8927: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8928: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8929: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8930: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8931: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 8932: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 8933: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 8934: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 8935: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 10570: estimate 16.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 10571: estimate 14.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 10572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 10573: estimate 14.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 10574: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 10575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 10576: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 10577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 10578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 10579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 10580: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 10581: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 10582: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 10583: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 10584: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 10585: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 10586: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 10587: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 10588: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 10589: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 10590: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 10591: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 13755: estimate 16.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 13756: estimate 14.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 13757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 13758: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 13759: estimate 16.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 13760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 13761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 13762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 13763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 13764: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 13765: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 13766: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 13767: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 13768: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 13769: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 13770: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 13771: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 13772: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 13773: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 13774: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 13775: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.45s leader 5, trace 13917: estimate 13.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.45s leader 5, trace 13918: estimate 13.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.45s leader 5, trace 13919: estimate 13.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.45s leader 5, trace 13920: estimate 13.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 14152: estimate 15.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 14153: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 14154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 14155: estimate 15.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 14156: estimate 16.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 14157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 14158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 14159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 14160: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 14161: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 14162: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 14163: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 14164: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 14165: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 14166: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 14167: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 14168: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 14169: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 14170: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 14171: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 14784: estimate 15.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 14785: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 14786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 14787: estimate 16.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 14788: estimate 16.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 14789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 14790: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 14791: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 14792: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 14793: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 14794: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 14795: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 14796: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 14797: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 14798: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 14799: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 14800: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 14801: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 14802: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 14803: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 15736: estimate 15.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 15737: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 15738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 15739: estimate 15.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 15740: estimate 16.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 15741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 15742: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 15743: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 15744: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 15745: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 15746: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 15747: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 15748: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 15749: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 15750: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 15751: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 15752: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 15753: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 15754: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 15755: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 16283: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 16284: estimate 13.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 16285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 16286: estimate 15.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 16287: estimate 16.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 16288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 16289: estimate 14.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 16290: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 16291: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 16292: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 16293: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 16294: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 16295: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 16296: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 16297: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 16298: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 16299: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 16300: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 16301: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 16302: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 16577: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 16578: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 16579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 16580: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 16581: estimate 16.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 16582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 16583: estimate 14.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 16584: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 16585: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 16586: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 16587: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 16588: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 16589: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 16590: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 16591: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 16592: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 16593: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 16594: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 16595: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 16596: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 16820: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 16821: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 16822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 16823: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 16824: estimate 16.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 16825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 16826: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 16827: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 16828: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 16829: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 16830: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 16831: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 16832: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 16833: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 16834: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 16835: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 16836: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 16837: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 16838: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 17022: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 17023: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 17024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 17025: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 17026: estimate 16.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 17027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 17028: estimate 13.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 17029: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 17030: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 17031: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 17032: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 17033: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 17034: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 17035: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 17036: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 17037: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 17038: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 17039: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 17040: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 17283: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 17284: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 17285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 17286: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 17287: estimate 15.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 17288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 17289: estimate 13.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 17290: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 17291: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 17292: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 17293: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 17294: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 17295: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 17296: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 17297: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 17298: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 17299: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 17300: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 17301: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 17448: estimate 14.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 17449: estimate 14.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 17607: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 17608: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 17609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 17610: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 17611: estimate 15.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 17612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 17613: estimate 16.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 17614: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 17615: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 17616: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 17617: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 17618: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 17619: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 17620: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 17621: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 17622: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 17623: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 17624: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 17625: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 17797: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 17798: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 17799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 17800: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 17801: estimate 15.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 17802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 17803: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 17804: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 17805: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 17806: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 17807: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 17808: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 17809: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 17810: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 17811: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 17812: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 17813: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 17814: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 17979: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 17980: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 17981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 17982: estimate 14.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 17983: estimate 15.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 17984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 17985: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 17986: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 17987: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 17988: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 17989: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 17990: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 17991: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 17992: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 17993: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 17994: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 17995: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 17996: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.80s leader 5, trace 18095: estimate 14.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.80s leader 5, trace 18096: estimate 14.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 18143: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 18144: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 18145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 18146: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 18147: estimate 14.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 18148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 18149: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 18150: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 18151: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 18152: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 18153: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 18154: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 18155: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 18156: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 18157: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 18158: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 18159: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 18160: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 18437: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 18438: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 18439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 18440: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 18441: estimate 14.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 18442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 18443: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 18444: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 18445: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 18446: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 18447: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 18448: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 18449: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 18450: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 18451: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 18452: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 18453: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 18454: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 18665: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 18666: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 18667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 18668: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 18669: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 18670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 18671: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 18672: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 18673: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 18674: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 18675: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 18676: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 18677: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 18678: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 18679: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 18680: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 18681: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 18682: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 19061: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 19062: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 19063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 19064: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 19065: estimate 14.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 19066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 19067: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 19068: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 19069: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 19070: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 19071: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 19072: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 19073: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 19074: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 19075: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 19076: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 19077: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 19078: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 19270: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 19271: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 19272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 19273: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 19274: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 19275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 19276: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 19277: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 19278: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 19279: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 19280: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 19281: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 19282: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 19283: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 19284: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 19285: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 19286: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 19287: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 19483: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 19484: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 19485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 19486: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 19487: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 19488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 19489: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 19490: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 19491: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 19492: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 19493: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 19494: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 19495: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 19496: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 19497: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 19498: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 19499: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 19500: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 20009: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 20010: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 20011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 20012: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 20013: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 20014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 20015: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 20016: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 20017: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 20018: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 20019: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 20020: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 20021: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 20022: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 20023: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 20024: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 20025: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 20026: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 20239: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 20240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 20241: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 20242: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 20243: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 20244: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 20245: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 20246: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 20247: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 20248: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 20249: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 20250: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 20251: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 20252: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 20253: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 20254: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 20255: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 20962: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 20963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 20964: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 20965: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 20966: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 20967: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 20968: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 20969: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 20970: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 20971: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 20972: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 20973: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 20974: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 20975: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 20976: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 20977: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 21363: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 21364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 21365: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 21366: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 21367: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 21368: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 21369: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 21370: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 21371: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 21372: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 21373: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 21374: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 21375: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 21376: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 21377: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 21378: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 21580: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 21581: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 21582: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 21583: estimate 14.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 21584: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 21585: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 21586: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 21587: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 21588: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 21589: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 21590: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 21591: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 21592: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 21593: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 21594: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 21595: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 21793: estimate 13.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 21794: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 21795: estimate 15.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 21796: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 21797: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 21798: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 21799: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 21800: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 21801: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 21802: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 21803: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 21804: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 21805: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 21806: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 21807: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 22003: estimate 13.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 22004: estimate 14.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 22005: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 22006: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 22007: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 22008: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 22009: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 22010: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 22011: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 22012: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 22013: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 22014: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 22015: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 22016: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 22017: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 189.35s leader 5, trace 22200: estimate 14.50; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 22216: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 22217: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 22218: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 22219: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 22220: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 22221: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 22222: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 22223: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 22224: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 22225: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 22226: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 22227: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 22228: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 22229: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 22230: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.85s leader 5, trace 22322: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 22408: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 22409: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 22410: estimate 13.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 22411: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 22412: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 22413: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 22414: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 22415: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 22416: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 22417: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 22418: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 22419: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 22420: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 22421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 22572: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 22573: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 22574: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 22575: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 22576: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 22577: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 22578: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 22579: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 22580: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 22581: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 22582: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 22583: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 22584: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 22585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 22745: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 22746: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 22747: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 22748: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 22749: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 22750: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 22751: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 22752: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 22753: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 22754: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 22755: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 22756: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 22757: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 22758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 22902: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 22903: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 22904: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 22905: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 22906: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 22907: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 22908: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 22909: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 22910: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 22911: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 22912: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 22913: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 22914: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 22915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 23072: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 23073: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 23074: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 23075: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 23076: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 23077: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 23078: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 23079: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 23080: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 23081: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 23082: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 23083: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 23084: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 23085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 23242: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 23243: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 23244: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 23245: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 23246: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 23247: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 23248: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 23249: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 23250: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 23251: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 23252: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 23253: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 23254: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 23255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 23411: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 23412: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 23413: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 23414: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 23415: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 23416: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 23417: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 23418: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 23419: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 23420: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 23421: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 23422: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 23423: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 23424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 23576: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 23577: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 23578: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 23579: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 23580: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 23581: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 23582: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 23583: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 23584: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 23585: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 23586: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 23587: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 23588: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 23589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 234.35s leader 5, trace 23729: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 234.35s leader 5, trace 23730: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 23745: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 23746: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 23747: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 23748: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 23749: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 23750: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 23751: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 23752: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 23753: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 23754: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 23755: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 23756: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 23757: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 23758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 23970: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 23971: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 23972: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 23973: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 23974: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 23975: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 23976: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 23977: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 23978: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 23979: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 23980: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 23981: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 23982: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 23983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 242.60s leader 5, trace 24101: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 242.60s leader 5, trace 24102: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 24185: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 24186: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 24187: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 24188: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 24189: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 24190: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 24191: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 24192: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 24193: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 24194: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 24195: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 24196: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 24197: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 24198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 24372: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 24373: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 24374: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 24375: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 24376: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 24377: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 24378: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 24379: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 24380: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 24381: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 24382: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 24383: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 24384: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 24385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 24571: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 24572: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 24573: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 24574: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 24575: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 24576: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 24577: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 24578: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 24579: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 24580: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 24581: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 24582: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 24583: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 24584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 24744: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 24745: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 24746: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 24747: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 24748: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 24749: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 24750: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 24751: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 24752: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 24753: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 24754: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 24755: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 24756: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 24757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 24917: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 24918: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 24919: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 24920: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 24921: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 24922: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 24923: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 24924: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 24925: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 24926: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 24927: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 24928: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 24929: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 24930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 25077: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 25078: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 25079: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 25080: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 25081: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 25082: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 25083: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 25084: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 25085: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 25086: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 25087: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 25088: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 25089: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 25090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 25240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 25241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 25242: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 25243: estimate 1.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 25244: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 25245: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 25246: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 25247: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 25248: estimate 1.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 25249: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 25250: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 25251: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 25252: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 25253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 25413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 25414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 25415: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 25416: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 25417: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 25418: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 25419: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 25420: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 25421: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 25422: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 25423: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 25424: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 25425: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 25426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 25589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 25590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 25591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 25592: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 25593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 25594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 25595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 25596: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 25597: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 25598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 25599: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 25600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 25601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 25602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 25757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 25758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 25759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 25760: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 25761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 25762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 25763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 25764: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 25765: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 25766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 25767: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 25768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 25769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 25770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 25917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 25918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 25919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 25920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 25921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 25922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 25923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 25924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 25925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 25926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 25927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 25928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 25929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 25930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 26083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 26084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 26085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 26086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 26087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 26088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 26089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 26090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 26091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 26092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 26093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 26094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 26095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 26096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 26257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 26258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 26259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 26260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 26261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 26262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 26263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 26264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 26265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 26266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 26267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 26268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 26269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 26270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 26428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 26429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 26430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 26431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 26432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 26433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 26434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 26435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 26436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 26437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 26438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 26439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 26440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 26441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 311.60s leader 5, trace 26517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 26589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 26590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 26591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 26592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 26593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 26594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 26595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 26596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 26597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 26598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 26599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 26600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 26601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 26602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 26758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 26759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 26760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 26761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 26762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 26763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 26764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 26765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 26766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 26767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 26768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 26769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 26770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 26771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 26932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 26933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 26934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 26935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 26936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 26937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 26938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 26939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 26940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 26941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 26942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 26943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 26944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 26945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 27098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 27099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 27100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 27101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 27102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 27103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 27104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 27105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 27106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 27107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 27108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 27109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 27110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 27111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 27257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 27258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 27259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 27260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 27261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 27262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 27263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 27264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 27265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 27266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 27267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 27268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 27269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 27270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 27422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 27423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 27424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 27425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 27426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 27427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 27428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 27429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 27430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 27431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 27432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 27433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 27434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 27435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 27597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 27598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 27599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 27600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 27601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 27602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 27603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 27604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 27605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 27606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 27607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 27608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 27609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 27610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 27764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 27765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 27766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 27767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 27768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 27769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 27770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 27771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 27772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 27773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 27774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 27775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 27776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 27777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 27921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 27922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 27923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 27924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 27925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 27926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 27927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 27928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 27929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 27930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 27931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 27932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 27933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 27934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 28088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 28089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 28090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 28091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 28092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 28093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 28094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 28095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 28096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 28097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 28098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 28099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 28100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 28101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Soren killed in action
- 1: Bren incapacitated
- 1: Ellis killed in action
- 1: Dane incapacitated
- 1: Cole incapacitated
- 1: Ash killed in action
- 1: Reed killed in action
- 1: Tern killed in action
- 1: Voss killed in action

## Outcome attribution

- 234.35s, evidence 2153: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 234.35s, evidence 23729: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.213005 retreat threshold=0.220000 initiative=requires intent. Following evidence: {'until': 234.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23739}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 234.35s, evidence 23730: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.213005 retreat threshold=0.220000 initiative=requires intent. Following evidence: {'until': 234.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23739}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
