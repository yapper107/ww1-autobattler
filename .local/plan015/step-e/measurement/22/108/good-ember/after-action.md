# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/22/108/good-ember/battle-108-1789674158048033178`

## Battle summary

**Ember** · 360 s · 951 shots.

### Turning points

- 27.7s, squad 4: contact (events line 255). First recorded contact.
- 54.0s, squad 0: help call ([trace 8911](#trace-8911)). No completion observed before termination.
- 60.5s, squad 0: withdrawal ([trace 10616](#trace-10616)). 103.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 178.8s, squad 0: help call ([trace 21767](#trace-21767)). No completion observed before termination.
- 292.0s, squad 1: withdrawal ([trace 31297](#trace-31297)). 312.0s, squad 1: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 76 shots, 6/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 0 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 816 shots, 3/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 59 shots, 0/2 lost.

### Decisions and attribution

At 34.5s, squad 1 chose took cover and returned fire ([trace 3444](#trace-3444)), followed by 0 shots and 1 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 0.1s, squad 1 chose advanced tactically ([trace 333](#trace-333)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1691](#trace-1691)). Following evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.175532530922496, 'next_transition': 2155}.
- 26.6s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 2844](#trace-2844)). Following evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49031174285844137, 'next_transition': 2885}.

### Communication

263 matched deliveries (mean 0.38s, max 5.95s); 437 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 27.70s, squad 4, contact, evidence events line 255: First recorded contact; .
- 53.95s, squad 0, help call, evidence 8911: NeedSupport; No completion observed before termination.
- 60.50s, squad 0, withdrawal, evidence 10616: BreakContact: believed ratio at least two without superiority; 103.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 178.80s, squad 0, help call, evidence 21767: NeedSupport; No completion observed before termination.
- 291.95s, squad 1, withdrawal, evidence 31297: BreakContact: believed ratio at least two without superiority; 312.0s, squad 1: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.770514545580504, 'next_transition': 936}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.770514545580504, 'next_transition': 936}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.770514545580504, 'next_transition': 936}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004694246443457, 'next_transition': 1128}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004694246443457, 'next_transition': 1128}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004694246443457, 'next_transition': 1128}.
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
<a id="trace-815"></a>
<a id="trace-817"></a>
<a id="trace-837"></a>
<a id="trace-839"></a>
<a id="trace-866"></a>
<a id="trace-868"></a>
<a id="trace-895"></a>
<a id="trace-897"></a>
<a id="trace-916"></a>
<a id="trace-918"></a>
<a id="trace-938"></a>
<a id="trace-940"></a>
<a id="trace-966"></a>
<a id="trace-968"></a>
<a id="trace-990"></a>
<a id="trace-992"></a>
<a id="trace-1017"></a>
<a id="trace-1019"></a>
<a id="trace-1034"></a>
<a id="trace-1036"></a>
<a id="trace-1124"></a>
<a id="trace-1126"></a>
<a id="trace-1249"></a>
<a id="trace-1251"></a>
<a id="trace-1586"></a>
<a id="trace-1588"></a>
<a id="trace-1616"></a>
<a id="trace-1618"></a>
<a id="trace-1655"></a>
<a id="trace-1657"></a>
<a id="trace-1684"></a>
<a id="trace-1686"></a>
<a id="trace-1718"></a>
<a id="trace-1720"></a>
<a id="trace-1747"></a>
<a id="trace-1749"></a>
<a id="trace-1783"></a>
<a id="trace-1785"></a>
<a id="trace-1812"></a>
<a id="trace-1814"></a>
<a id="trace-1898"></a>
<a id="trace-1900"></a>
<a id="trace-1927"></a>
<a id="trace-1929"></a>
<a id="trace-1962"></a>
<a id="trace-1964"></a>
<a id="trace-1998"></a>
<a id="trace-2000"></a>
<a id="trace-2021"></a>
<a id="trace-2023"></a>
<a id="trace-2047"></a>
<a id="trace-2049"></a>
<a id="trace-2075"></a>
<a id="trace-2077"></a>
<a id="trace-2103"></a>
<a id="trace-2105"></a>
<a id="trace-2130"></a>
<a id="trace-2132"></a>
<a id="trace-2150"></a>
<a id="trace-2152"></a>
<a id="trace-2329"></a>
<a id="trace-2331"></a>
<a id="trace-2360"></a>
<a id="trace-2362"></a>
<a id="trace-2378"></a>
<a id="trace-2380"></a>
<a id="trace-2400"></a>
<a id="trace-2402"></a>
<a id="trace-2427"></a>
<a id="trace-2429"></a>
<a id="trace-2440"></a>
<a id="trace-2442"></a>
<a id="trace-2460"></a>
<a id="trace-2462"></a>
<a id="trace-2478"></a>
<a id="trace-2480"></a>
<a id="trace-2661"></a>
<a id="trace-2663"></a>
<a id="trace-2685"></a>
<a id="trace-2687"></a>
<a id="trace-2778"></a>
<a id="trace-2780"></a>
<a id="trace-2803"></a>
<a id="trace-2805"></a>
<a id="trace-2828"></a>
<a id="trace-2830"></a>
<a id="trace-2866"></a>
<a id="trace-2868"></a>
<a id="trace-2889"></a>
<a id="trace-2891"></a>
<a id="trace-2960"></a>
<a id="trace-2962"></a>
<a id="trace-2991"></a>
<a id="trace-2993"></a>
<a id="trace-3011"></a>
<a id="trace-3013"></a>
<a id="trace-3033"></a>
<a id="trace-3035"></a>
<a id="trace-3049"></a>
<a id="trace-3051"></a>
<a id="trace-3141"></a>
<a id="trace-3143"></a>
<a id="trace-3157"></a>
<a id="trace-3159"></a>
<a id="trace-3175"></a>
<a id="trace-3177"></a>
<a id="trace-3187"></a>
<a id="trace-3189"></a>
<a id="trace-3210"></a>
<a id="trace-3212"></a>
<a id="trace-3225"></a>
<a id="trace-3227"></a>
<a id="trace-3243"></a>
<a id="trace-3245"></a>
<a id="trace-3415"></a>
<a id="trace-3417"></a>
<a id="trace-3434"></a>
<a id="trace-3436"></a>
<a id="trace-3579"></a>
<a id="trace-3581"></a>
<a id="trace-3677"></a>
<a id="trace-3679"></a>
<a id="trace-3689"></a>
<a id="trace-3691"></a>
<a id="trace-3903"></a>
<a id="trace-3905"></a>
<a id="trace-3931"></a>
<a id="trace-3933"></a>
<a id="trace-4150"></a>
<a id="trace-4152"></a>
<a id="trace-4194"></a>
<a id="trace-4196"></a>
<a id="trace-4235"></a>
<a id="trace-4237"></a>
<a id="trace-4486"></a>
<a id="trace-4488"></a>
<a id="trace-4531"></a>
<a id="trace-4533"></a>
<a id="trace-4580"></a>
<a id="trace-4582"></a>
<a id="trace-4696"></a>
<a id="trace-4698"></a>
<a id="trace-4719"></a>
<a id="trace-4721"></a>
<a id="trace-4762"></a>
<a id="trace-4764"></a>
<a id="trace-4824"></a>
<a id="trace-4826"></a>
<a id="trace-4870"></a>
<a id="trace-4872"></a>
<a id="trace-4928"></a>
<a id="trace-4930"></a>
<a id="trace-4986"></a>
<a id="trace-4988"></a>
<a id="trace-5044"></a>
<a id="trace-5046"></a>
<a id="trace-5111"></a>
<a id="trace-5113"></a>
<a id="trace-5170"></a>
<a id="trace-5172"></a>
<a id="trace-5285"></a>
<a id="trace-5287"></a>
<a id="trace-8382"></a>
<a id="trace-8384"></a>
<a id="trace-8440"></a>
<a id="trace-8442"></a>
<a id="trace-8478"></a>
<a id="trace-8480"></a>
<a id="trace-8502"></a>
<a id="trace-8504"></a>
<a id="trace-8519"></a>
<a id="trace-8521"></a>
<a id="trace-8553"></a>
<a id="trace-8555"></a>
<a id="trace-8576"></a>
<a id="trace-8578"></a>
<a id="trace-8614"></a>
<a id="trace-8616"></a>
<a id="trace-8630"></a>
<a id="trace-8632"></a>
<a id="trace-8726"></a>
<a id="trace-8728"></a>
<a id="trace-8743"></a>
<a id="trace-8745"></a>
<a id="trace-8772"></a>
<a id="trace-8774"></a>
<a id="trace-8793"></a>
<a id="trace-8795"></a>
<a id="trace-8830"></a>
<a id="trace-8832"></a>
<a id="trace-8853"></a>
<a id="trace-8855"></a>
<a id="trace-8879"></a>
<a id="trace-8881"></a>
<a id="trace-8900"></a>
<a id="trace-8902"></a>
<a id="trace-8943"></a>
<a id="trace-8945"></a>
<a id="trace-9470"></a>
<a id="trace-9472"></a>
<a id="trace-9572"></a>
<a id="trace-9574"></a>
<a id="trace-9594"></a>
<a id="trace-9596"></a>
<a id="trace-9632"></a>
<a id="trace-9634"></a>
<a id="trace-9669"></a>
<a id="trace-9671"></a>
<a id="trace-10303"></a>
<a id="trace-10305"></a>
<a id="trace-10333"></a>
<a id="trace-10335"></a>
<a id="trace-10380"></a>
<a id="trace-10382"></a>
<a id="trace-10417"></a>
<a id="trace-10419"></a>
<a id="trace-10462"></a>
<a id="trace-10464"></a>
<a id="trace-10489"></a>
<a id="trace-10491"></a>
<a id="trace-10599"></a>
<a id="trace-10601"></a>
<a id="trace-11153"></a>
<a id="trace-11155"></a>
<a id="trace-11186"></a>
<a id="trace-11188"></a>
<a id="trace-11215"></a>
<a id="trace-11217"></a>
<a id="trace-11262"></a>
<a id="trace-11264"></a>
<a id="trace-11285"></a>
<a id="trace-11287"></a>
<a id="trace-11324"></a>
<a id="trace-11326"></a>
<a id="trace-11347"></a>
<a id="trace-11349"></a>
<a id="trace-11392"></a>
<a id="trace-11394"></a>
<a id="trace-11413"></a>
<a id="trace-11415"></a>
<a id="trace-11505"></a>
<a id="trace-11507"></a>
<a id="trace-11544"></a>
<a id="trace-11546"></a>
<a id="trace-11568"></a>
<a id="trace-11570"></a>
<a id="trace-11593"></a>
<a id="trace-11595"></a>
<a id="trace-11610"></a>
<a id="trace-11612"></a>
<a id="trace-11637"></a>
<a id="trace-11639"></a>
<a id="trace-11657"></a>
<a id="trace-11659"></a>
<a id="trace-11682"></a>
<a id="trace-11684"></a>
<a id="trace-11695"></a>
<a id="trace-11697"></a>
<a id="trace-11786"></a>
<a id="trace-11788"></a>
<a id="trace-11800"></a>
<a id="trace-11802"></a>
<a id="trace-11821"></a>
<a id="trace-11823"></a>
<a id="trace-11837"></a>
<a id="trace-11839"></a>
<a id="trace-11865"></a>
<a id="trace-11867"></a>
<a id="trace-11880"></a>
<a id="trace-11882"></a>
<a id="trace-11909"></a>
<a id="trace-11911"></a>
<a id="trace-11924"></a>
<a id="trace-11926"></a>
<a id="trace-11951"></a>
<a id="trace-11953"></a>
<a id="trace-11963"></a>
<a id="trace-11965"></a>
<a id="trace-12046"></a>
<a id="trace-12048"></a>
<a id="trace-12062"></a>
<a id="trace-12064"></a>
<a id="trace-12084"></a>
<a id="trace-12086"></a>
<a id="trace-12098"></a>
<a id="trace-12100"></a>
<a id="trace-12123"></a>
<a id="trace-12125"></a>
<a id="trace-12243"></a>
<a id="trace-12245"></a>
<a id="trace-12266"></a>
<a id="trace-12268"></a>
<a id="trace-12289"></a>
<a id="trace-12291"></a>
<a id="trace-12319"></a>
<a id="trace-12321"></a>
<a id="trace-12329"></a>
<a id="trace-12331"></a>
<a id="trace-12420"></a>
<a id="trace-12422"></a>
<a id="trace-12440"></a>
<a id="trace-12442"></a>
<a id="trace-12463"></a>
<a id="trace-12465"></a>
<a id="trace-12475"></a>
<a id="trace-12477"></a>
<a id="trace-12499"></a>
<a id="trace-12501"></a>
<a id="trace-12513"></a>
<a id="trace-12515"></a>
<a id="trace-12531"></a>
<a id="trace-12533"></a>
<a id="trace-12545"></a>
<a id="trace-12547"></a>
<a id="trace-12569"></a>
<a id="trace-12571"></a>
<a id="trace-12584"></a>
<a id="trace-12586"></a>
<a id="trace-12670"></a>
<a id="trace-12672"></a>
<a id="trace-12681"></a>
<a id="trace-12683"></a>
<a id="trace-12703"></a>
<a id="trace-12705"></a>
<a id="trace-12721"></a>
<a id="trace-12723"></a>
<a id="trace-12737"></a>
<a id="trace-12739"></a>
<a id="trace-12749"></a>
<a id="trace-12751"></a>
<a id="trace-12771"></a>
<a id="trace-12773"></a>
<a id="trace-12784"></a>
<a id="trace-12786"></a>
<a id="trace-12809"></a>
<a id="trace-12811"></a>
<a id="trace-12823"></a>
<a id="trace-12825"></a>
<a id="trace-12915"></a>
<a id="trace-12917"></a>
<a id="trace-12930"></a>
<a id="trace-12932"></a>
<a id="trace-12949"></a>
<a id="trace-12951"></a>
<a id="trace-12964"></a>
<a id="trace-12966"></a>
<a id="trace-12988"></a>
<a id="trace-12990"></a>
<a id="trace-13006"></a>
<a id="trace-13008"></a>
<a id="trace-13032"></a>
<a id="trace-13034"></a>
<a id="trace-13051"></a>
<a id="trace-13053"></a>
<a id="trace-13078"></a>
<a id="trace-13080"></a>
<a id="trace-13091"></a>
<a id="trace-13093"></a>
<a id="trace-13175"></a>
<a id="trace-13177"></a>
<a id="trace-13190"></a>
<a id="trace-13192"></a>
<a id="trace-13213"></a>
<a id="trace-13215"></a>
<a id="trace-13387"></a>
<a id="trace-13389"></a>
<a id="trace-13421"></a>
<a id="trace-13423"></a>
<a id="trace-13448"></a>
<a id="trace-13450"></a>
<a id="trace-13473"></a>
<a id="trace-13475"></a>
<a id="trace-13498"></a>
<a id="trace-13500"></a>
<a id="trace-13535"></a>
<a id="trace-13537"></a>
<a id="trace-13553"></a>
<a id="trace-13555"></a>
<a id="trace-13638"></a>
<a id="trace-13640"></a>
<a id="trace-13652"></a>
<a id="trace-13654"></a>
<a id="trace-13676"></a>
<a id="trace-13678"></a>
<a id="trace-13691"></a>
<a id="trace-13693"></a>
<a id="trace-13720"></a>
<a id="trace-13722"></a>
<a id="trace-13740"></a>
<a id="trace-13742"></a>
<a id="trace-13768"></a>
<a id="trace-13770"></a>
<a id="trace-13786"></a>
<a id="trace-13788"></a>
<a id="trace-13819"></a>
<a id="trace-13821"></a>
<a id="trace-13852"></a>
<a id="trace-13854"></a>
<a id="trace-13939"></a>
<a id="trace-13941"></a>
<a id="trace-13959"></a>
<a id="trace-13961"></a>
<a id="trace-13997"></a>
<a id="trace-13999"></a>
<a id="trace-14014"></a>
<a id="trace-14016"></a>
<a id="trace-14040"></a>
<a id="trace-14042"></a>
<a id="trace-14052"></a>
<a id="trace-14054"></a>
<a id="trace-14081"></a>
<a id="trace-14083"></a>
<a id="trace-14097"></a>
<a id="trace-14099"></a>
<a id="trace-14123"></a>
<a id="trace-14125"></a>
<a id="trace-14136"></a>
<a id="trace-14138"></a>
<a id="trace-14221"></a>
<a id="trace-14223"></a>
<a id="trace-14237"></a>
<a id="trace-14239"></a>
<a id="trace-14252"></a>
<a id="trace-14254"></a>
<a id="trace-14269"></a>
<a id="trace-14271"></a>
<a id="trace-14287"></a>
<a id="trace-14289"></a>
<a id="trace-14301"></a>
<a id="trace-14303"></a>
<a id="trace-14323"></a>
<a id="trace-14325"></a>
<a id="trace-14339"></a>
<a id="trace-14341"></a>
<a id="trace-14360"></a>
<a id="trace-14362"></a>
<a id="trace-14374"></a>
<a id="trace-14376"></a>
<a id="trace-14457"></a>
<a id="trace-14459"></a>
<a id="trace-14468"></a>
<a id="trace-14470"></a>
<a id="trace-14486"></a>
<a id="trace-14488"></a>
<a id="trace-14498"></a>
<a id="trace-14500"></a>
<a id="trace-14513"></a>
<a id="trace-14515"></a>
<a id="trace-14529"></a>
<a id="trace-14531"></a>
<a id="trace-14550"></a>
<a id="trace-14552"></a>
<a id="trace-14559"></a>
<a id="trace-14561"></a>
<a id="trace-14583"></a>
<a id="trace-14585"></a>
<a id="trace-14598"></a>
<a id="trace-14600"></a>
<a id="trace-14679"></a>
<a id="trace-14681"></a>
<a id="trace-14698"></a>
<a id="trace-14700"></a>
<a id="trace-14718"></a>
<a id="trace-14720"></a>
<a id="trace-14729"></a>
<a id="trace-14731"></a>
<a id="trace-14748"></a>
<a id="trace-14750"></a>
<a id="trace-14761"></a>
<a id="trace-14763"></a>
<a id="trace-14779"></a>
<a id="trace-14781"></a>
<a id="trace-14796"></a>
<a id="trace-14798"></a>
<a id="trace-14817"></a>
<a id="trace-14819"></a>
<a id="trace-14831"></a>
<a id="trace-14833"></a>
<a id="trace-14912"></a>
<a id="trace-14914"></a>
<a id="trace-14927"></a>
<a id="trace-14929"></a>
<a id="trace-14948"></a>
<a id="trace-14950"></a>
<a id="trace-14960"></a>
<a id="trace-14962"></a>
<a id="trace-14982"></a>
<a id="trace-14984"></a>
<a id="trace-14998"></a>
<a id="trace-15000"></a>
<a id="trace-15016"></a>
<a id="trace-15018"></a>
<a id="trace-15045"></a>
<a id="trace-15047"></a>
<a id="trace-15064"></a>
<a id="trace-15066"></a>
<a id="trace-15249"></a>
<a id="trace-15251"></a>
<a id="trace-15342"></a>
<a id="trace-15344"></a>
<a id="trace-15360"></a>
<a id="trace-15362"></a>
<a id="trace-15390"></a>
<a id="trace-15392"></a>
<a id="trace-15414"></a>
<a id="trace-15416"></a>
<a id="trace-15448"></a>
<a id="trace-15450"></a>
<a id="trace-15470"></a>
<a id="trace-15472"></a>
<a id="trace-15492"></a>
<a id="trace-15494"></a>
<a id="trace-15506"></a>
<a id="trace-15508"></a>
<a id="trace-15536"></a>
<a id="trace-15538"></a>
<a id="trace-15557"></a>
<a id="trace-15559"></a>
<a id="trace-15644"></a>
<a id="trace-15646"></a>
<a id="trace-15660"></a>
<a id="trace-15662"></a>
<a id="trace-15689"></a>
<a id="trace-15691"></a>
<a id="trace-15707"></a>
<a id="trace-15709"></a>
<a id="trace-15728"></a>
<a id="trace-15730"></a>
<a id="trace-15743"></a>
<a id="trace-15745"></a>
<a id="trace-15771"></a>
<a id="trace-15773"></a>
<a id="trace-15789"></a>
<a id="trace-15791"></a>
<a id="trace-15817"></a>
<a id="trace-15819"></a>
<a id="trace-15830"></a>
<a id="trace-15832"></a>
<a id="trace-15922"></a>
<a id="trace-15924"></a>
<a id="trace-15945"></a>
<a id="trace-15947"></a>
<a id="trace-15968"></a>
<a id="trace-15970"></a>
<a id="trace-15992"></a>
<a id="trace-15994"></a>
<a id="trace-16019"></a>
<a id="trace-16021"></a>
<a id="trace-16029"></a>
<a id="trace-16031"></a>
<a id="trace-16055"></a>
<a id="trace-16057"></a>
<a id="trace-16076"></a>
<a id="trace-16078"></a>
<a id="trace-16101"></a>
<a id="trace-16103"></a>
<a id="trace-16121"></a>
<a id="trace-16123"></a>
<a id="trace-16208"></a>
<a id="trace-16210"></a>
<a id="trace-16218"></a>
<a id="trace-16220"></a>
<a id="trace-16244"></a>
<a id="trace-16246"></a>
<a id="trace-16263"></a>
<a id="trace-16265"></a>
<a id="trace-16280"></a>
<a id="trace-16282"></a>
<a id="trace-16562"></a>
<a id="trace-16564"></a>
<a id="trace-16602"></a>
<a id="trace-16604"></a>
<a id="trace-16630"></a>
<a id="trace-16632"></a>
<a id="trace-16648"></a>
<a id="trace-16650"></a>
<a id="trace-16670"></a>
<a id="trace-16672"></a>
<a id="trace-16764"></a>
<a id="trace-16766"></a>
<a id="trace-16777"></a>
<a id="trace-16779"></a>
<a id="trace-16800"></a>
<a id="trace-16802"></a>
<a id="trace-16811"></a>
<a id="trace-16813"></a>
<a id="trace-16841"></a>
<a id="trace-16843"></a>
<a id="trace-16865"></a>
<a id="trace-16867"></a>
<a id="trace-16887"></a>
<a id="trace-16889"></a>
<a id="trace-16906"></a>
<a id="trace-16908"></a>
<a id="trace-16936"></a>
<a id="trace-16938"></a>
<a id="trace-16950"></a>
<a id="trace-16952"></a>
<a id="trace-17037"></a>
<a id="trace-17039"></a>
<a id="trace-17063"></a>
<a id="trace-17065"></a>
<a id="trace-17092"></a>
<a id="trace-17094"></a>
<a id="trace-17113"></a>
<a id="trace-17115"></a>
<a id="trace-17241"></a>
<a id="trace-17243"></a>
<a id="trace-17257"></a>
<a id="trace-17259"></a>
<a id="trace-17304"></a>
<a id="trace-17306"></a>
<a id="trace-17321"></a>
<a id="trace-17323"></a>
<a id="trace-17346"></a>
<a id="trace-17348"></a>
<a id="trace-17368"></a>
<a id="trace-17370"></a>
<a id="trace-17450"></a>
<a id="trace-17452"></a>
<a id="trace-17467"></a>
<a id="trace-17469"></a>
<a id="trace-17484"></a>
<a id="trace-17486"></a>
<a id="trace-17500"></a>
<a id="trace-17502"></a>
<a id="trace-17520"></a>
<a id="trace-17522"></a>
<a id="trace-17532"></a>
<a id="trace-17534"></a>
<a id="trace-17555"></a>
<a id="trace-17557"></a>
<a id="trace-17997"></a>
<a id="trace-17999"></a>
<a id="trace-18019"></a>
<a id="trace-18021"></a>
<a id="trace-18047"></a>
<a id="trace-18049"></a>
<a id="trace-18136"></a>
<a id="trace-18138"></a>
<a id="trace-18155"></a>
<a id="trace-18157"></a>
<a id="trace-18181"></a>
<a id="trace-18183"></a>
<a id="trace-18206"></a>
<a id="trace-18208"></a>
<a id="trace-18226"></a>
<a id="trace-18228"></a>
<a id="trace-18249"></a>
<a id="trace-18251"></a>
<a id="trace-18284"></a>
<a id="trace-18286"></a>
<a id="trace-18317"></a>
<a id="trace-18319"></a>
<a id="trace-18334"></a>
<a id="trace-18336"></a>
<a id="trace-18356"></a>
<a id="trace-18358"></a>
<a id="trace-18444"></a>
<a id="trace-18446"></a>
<a id="trace-18464"></a>
<a id="trace-18466"></a>
<a id="trace-18489"></a>
<a id="trace-18491"></a>
<a id="trace-18505"></a>
<a id="trace-18507"></a>
<a id="trace-21433"></a>
<a id="trace-21435"></a>
<a id="trace-21457"></a>
<a id="trace-21459"></a>
<a id="trace-21483"></a>
<a id="trace-21485"></a>
<a id="trace-21506"></a>
<a id="trace-21508"></a>
<a id="trace-21527"></a>
<a id="trace-21529"></a>
<a id="trace-21543"></a>
<a id="trace-21545"></a>
<a id="trace-21623"></a>
<a id="trace-21625"></a>
<a id="trace-21646"></a>
<a id="trace-21648"></a>
<a id="trace-21671"></a>
<a id="trace-21673"></a>
<a id="trace-21689"></a>
<a id="trace-21691"></a>
<a id="trace-21708"></a>
<a id="trace-21710"></a>
<a id="trace-21725"></a>
<a id="trace-21727"></a>
<a id="trace-21744"></a>
<a id="trace-21746"></a>
<a id="trace-21762"></a>
<a id="trace-21764"></a>
<a id="trace-21799"></a>
<a id="trace-21801"></a>
<a id="trace-22198"></a>
<a id="trace-22200"></a>
<a id="trace-22285"></a>
<a id="trace-22287"></a>
<a id="trace-22307"></a>
<a id="trace-22309"></a>
<a id="trace-22334"></a>
<a id="trace-22336"></a>
<a id="trace-22365"></a>
<a id="trace-22367"></a>
<a id="trace-22398"></a>
<a id="trace-22400"></a>
<a id="trace-22416"></a>
<a id="trace-22418"></a>
<a id="trace-22452"></a>
<a id="trace-22454"></a>
<a id="trace-22484"></a>
<a id="trace-22486"></a>
<a id="trace-22501"></a>
<a id="trace-22503"></a>
<a id="trace-22533"></a>
<a id="trace-22535"></a>
<a id="trace-23133"></a>
<a id="trace-23135"></a>
<a id="trace-23164"></a>
<a id="trace-23166"></a>
<a id="trace-23187"></a>
<a id="trace-23189"></a>
<a id="trace-23206"></a>
<a id="trace-23208"></a>
<a id="trace-23226"></a>
<a id="trace-23228"></a>
<a id="trace-23238"></a>
<a id="trace-23240"></a>
<a id="trace-23256"></a>
<a id="trace-23258"></a>
<a id="trace-23276"></a>
<a id="trace-23278"></a>
<a id="trace-23288"></a>
<a id="trace-23290"></a>
<a id="trace-23301"></a>
<a id="trace-23303"></a>
<a id="trace-23375"></a>
<a id="trace-23377"></a>
<a id="trace-23387"></a>
<a id="trace-23389"></a>
<a id="trace-23415"></a>
<a id="trace-23417"></a>
<a id="trace-23429"></a>
<a id="trace-23431"></a>
<a id="trace-23905"></a>
<a id="trace-23907"></a>
<a id="trace-23937"></a>
<a id="trace-23939"></a>
<a id="trace-23968"></a>
<a id="trace-23970"></a>
<a id="trace-23978"></a>
<a id="trace-23980"></a>
<a id="trace-24004"></a>
<a id="trace-24006"></a>
<a id="trace-24023"></a>
<a id="trace-24025"></a>
<a id="trace-24096"></a>
<a id="trace-24098"></a>
<a id="trace-24112"></a>
<a id="trace-24114"></a>
<a id="trace-24136"></a>
<a id="trace-24138"></a>
<a id="trace-24154"></a>
<a id="trace-24156"></a>
<a id="trace-24170"></a>
<a id="trace-24172"></a>
<a id="trace-27320"></a>
<a id="trace-27322"></a>
<a id="trace-27348"></a>
<a id="trace-27350"></a>
<a id="trace-27369"></a>
<a id="trace-27371"></a>
<a id="trace-27389"></a>
<a id="trace-27391"></a>
<a id="trace-27407"></a>
<a id="trace-27409"></a>
<a id="trace-27491"></a>
<a id="trace-27493"></a>
<a id="trace-27507"></a>
<a id="trace-27509"></a>
<a id="trace-27522"></a>
<a id="trace-27524"></a>
<a id="trace-27536"></a>
<a id="trace-27538"></a>
<a id="trace-27557"></a>
<a id="trace-27559"></a>
<a id="trace-27570"></a>
<a id="trace-27572"></a>
<a id="trace-27588"></a>
<a id="trace-27590"></a>
<a id="trace-27604"></a>
<a id="trace-27606"></a>
<a id="trace-27617"></a>
<a id="trace-27619"></a>
<a id="trace-27635"></a>
<a id="trace-27637"></a>
<a id="trace-27714"></a>
<a id="trace-27716"></a>
<a id="trace-27725"></a>
<a id="trace-27727"></a>
<a id="trace-27746"></a>
<a id="trace-27748"></a>
<a id="trace-27765"></a>
<a id="trace-27767"></a>
<a id="trace-27780"></a>
<a id="trace-27782"></a>
<a id="trace-27792"></a>
<a id="trace-27794"></a>
<a id="trace-27811"></a>
<a id="trace-27813"></a>
<a id="trace-27821"></a>
<a id="trace-27823"></a>
<a id="trace-27836"></a>
<a id="trace-27838"></a>
<a id="trace-27848"></a>
<a id="trace-27850"></a>
<a id="trace-27924"></a>
<a id="trace-27926"></a>
<a id="trace-27936"></a>
<a id="trace-27938"></a>
<a id="trace-27954"></a>
<a id="trace-27956"></a>
<a id="trace-27968"></a>
<a id="trace-27970"></a>
<a id="trace-27996"></a>
<a id="trace-27998"></a>
<a id="trace-28016"></a>
<a id="trace-28018"></a>
<a id="trace-28036"></a>
<a id="trace-28038"></a>
<a id="trace-28051"></a>
<a id="trace-28053"></a>
<a id="trace-28073"></a>
<a id="trace-28075"></a>
<a id="trace-28086"></a>
<a id="trace-28088"></a>
<a id="trace-28161"></a>
<a id="trace-28163"></a>
<a id="trace-28173"></a>
<a id="trace-28175"></a>
<a id="trace-28186"></a>
<a id="trace-28188"></a>
<a id="trace-28198"></a>
<a id="trace-28200"></a>
<a id="trace-28217"></a>
<a id="trace-28219"></a>
<a id="trace-28229"></a>
<a id="trace-28231"></a>
<a id="trace-28250"></a>
<a id="trace-28252"></a>
<a id="trace-28264"></a>
<a id="trace-28266"></a>
<a id="trace-28283"></a>
<a id="trace-28285"></a>
<a id="trace-28295"></a>
<a id="trace-28297"></a>
<a id="trace-28373"></a>
<a id="trace-28375"></a>
<a id="trace-28384"></a>
<a id="trace-28386"></a>
<a id="trace-28403"></a>
<a id="trace-28405"></a>
<a id="trace-28418"></a>
<a id="trace-28420"></a>
<a id="trace-28432"></a>
<a id="trace-28434"></a>
<a id="trace-28443"></a>
<a id="trace-28445"></a>
<a id="trace-28462"></a>
<a id="trace-28464"></a>
<a id="trace-28476"></a>
<a id="trace-28478"></a>
<a id="trace-28498"></a>
<a id="trace-28500"></a>
<a id="trace-28516"></a>
<a id="trace-28518"></a>
<a id="trace-28596"></a>
<a id="trace-28598"></a>
<a id="trace-28609"></a>
<a id="trace-28611"></a>
<a id="trace-28631"></a>
<a id="trace-28633"></a>
<a id="trace-28641"></a>
<a id="trace-28643"></a>
<a id="trace-28659"></a>
<a id="trace-28661"></a>
<a id="trace-28672"></a>
<a id="trace-28674"></a>
<a id="trace-28697"></a>
<a id="trace-28699"></a>
<a id="trace-28712"></a>
<a id="trace-28714"></a>
<a id="trace-28727"></a>
<a id="trace-28729"></a>
<a id="trace-28747"></a>
<a id="trace-28749"></a>
<a id="trace-28824"></a>
<a id="trace-28826"></a>
<a id="trace-28839"></a>
<a id="trace-28841"></a>
<a id="trace-28858"></a>
<a id="trace-28860"></a>
<a id="trace-28874"></a>
<a id="trace-28876"></a>
<a id="trace-28893"></a>
<a id="trace-28895"></a>
<a id="trace-28909"></a>
<a id="trace-28911"></a>
<a id="trace-28922"></a>
<a id="trace-28924"></a>
<a id="trace-28938"></a>
<a id="trace-28940"></a>
<a id="trace-28959"></a>
<a id="trace-28961"></a>
<a id="trace-28974"></a>
<a id="trace-28976"></a>
<a id="trace-29047"></a>
<a id="trace-29049"></a>
<a id="trace-29060"></a>
<a id="trace-29062"></a>
<a id="trace-29083"></a>
<a id="trace-29085"></a>
<a id="trace-29099"></a>
<a id="trace-29101"></a>
<a id="trace-29118"></a>
<a id="trace-29120"></a>
<a id="trace-29131"></a>
<a id="trace-29133"></a>
<a id="trace-29150"></a>
<a id="trace-29152"></a>
<a id="trace-29162"></a>
<a id="trace-29164"></a>
<a id="trace-29180"></a>
<a id="trace-29182"></a>
<a id="trace-29195"></a>
<a id="trace-29197"></a>
<a id="trace-29272"></a>
<a id="trace-29274"></a>
<a id="trace-29285"></a>
<a id="trace-29287"></a>
<a id="trace-29300"></a>
<a id="trace-29302"></a>
<a id="trace-29311"></a>
<a id="trace-29313"></a>
<a id="trace-29326"></a>
<a id="trace-29328"></a>
<a id="trace-29337"></a>
<a id="trace-29339"></a>
<a id="trace-29352"></a>
<a id="trace-29354"></a>
<a id="trace-29365"></a>
<a id="trace-29367"></a>
<a id="trace-29387"></a>
<a id="trace-29389"></a>
<a id="trace-29402"></a>
<a id="trace-29404"></a>
<a id="trace-29477"></a>
<a id="trace-29479"></a>
<a id="trace-29487"></a>
<a id="trace-29489"></a>
<a id="trace-29503"></a>
<a id="trace-29505"></a>
<a id="trace-29512"></a>
<a id="trace-29514"></a>
<a id="trace-29527"></a>
<a id="trace-29529"></a>
<a id="trace-29538"></a>
<a id="trace-29540"></a>
<a id="trace-29553"></a>
<a id="trace-29555"></a>
<a id="trace-29566"></a>
<a id="trace-29568"></a>
<a id="trace-29585"></a>
<a id="trace-29587"></a>
<a id="trace-29599"></a>
<a id="trace-29601"></a>
<a id="trace-29673"></a>
<a id="trace-29675"></a>
<a id="trace-29683"></a>
<a id="trace-29685"></a>
<a id="trace-29700"></a>
<a id="trace-29702"></a>
<a id="trace-29714"></a>
<a id="trace-29716"></a>
<a id="trace-29728"></a>
<a id="trace-29730"></a>
<a id="trace-29740"></a>
<a id="trace-29742"></a>
<a id="trace-29756"></a>
<a id="trace-29758"></a>
<a id="trace-29769"></a>
<a id="trace-29771"></a>
<a id="trace-29789"></a>
<a id="trace-29791"></a>
<a id="trace-29801"></a>
<a id="trace-29803"></a>
<a id="trace-29874"></a>
<a id="trace-29876"></a>
<a id="trace-29886"></a>
<a id="trace-29888"></a>
<a id="trace-29900"></a>
<a id="trace-29902"></a>
<a id="trace-29913"></a>
<a id="trace-29915"></a>
<a id="trace-29928"></a>
<a id="trace-29930"></a>
<a id="trace-29941"></a>
<a id="trace-29943"></a>
<a id="trace-29960"></a>
<a id="trace-29962"></a>
<a id="trace-29972"></a>
<a id="trace-29974"></a>
<a id="trace-29989"></a>
<a id="trace-29991"></a>
<a id="trace-30003"></a>
<a id="trace-30005"></a>
<a id="trace-30073"></a>
<a id="trace-30075"></a>
<a id="trace-30086"></a>
<a id="trace-30088"></a>
<a id="trace-30103"></a>
<a id="trace-30105"></a>
<a id="trace-30114"></a>
<a id="trace-30116"></a>
<a id="trace-30126"></a>
<a id="trace-30128"></a>
<a id="trace-30138"></a>
<a id="trace-30140"></a>
<a id="trace-30155"></a>
<a id="trace-30157"></a>
<a id="trace-30167"></a>
<a id="trace-30169"></a>
<a id="trace-30185"></a>
<a id="trace-30187"></a>
<a id="trace-30202"></a>
<a id="trace-30204"></a>
<a id="trace-30272"></a>
<a id="trace-30274"></a>
<a id="trace-30282"></a>
<a id="trace-30284"></a>
<a id="trace-30301"></a>
<a id="trace-30303"></a>
<a id="trace-30314"></a>
<a id="trace-30316"></a>
<a id="trace-30328"></a>
<a id="trace-30330"></a>
<a id="trace-30342"></a>
<a id="trace-30344"></a>
<a id="trace-30360"></a>
<a id="trace-30362"></a>
<a id="trace-30373"></a>
<a id="trace-30375"></a>
<a id="trace-30395"></a>
<a id="trace-30397"></a>
<a id="trace-30411"></a>
<a id="trace-30413"></a>
<a id="trace-30486"></a>
<a id="trace-30488"></a>
<a id="trace-30503"></a>
<a id="trace-30505"></a>
<a id="trace-30522"></a>
<a id="trace-30524"></a>
<a id="trace-30533"></a>
<a id="trace-30535"></a>
<a id="trace-30551"></a>
<a id="trace-30553"></a>
<a id="trace-30564"></a>
<a id="trace-30566"></a>
<a id="trace-30582"></a>
<a id="trace-30584"></a>
<a id="trace-30597"></a>
<a id="trace-30599"></a>
<a id="trace-30616"></a>
<a id="trace-30618"></a>
<a id="trace-30631"></a>
<a id="trace-30633"></a>
<a id="trace-30710"></a>
<a id="trace-30712"></a>
<a id="trace-30723"></a>
<a id="trace-30725"></a>
<a id="trace-30743"></a>
<a id="trace-30745"></a>
<a id="trace-30754"></a>
<a id="trace-30756"></a>
<a id="trace-30770"></a>
<a id="trace-30772"></a>
<a id="trace-30782"></a>
<a id="trace-30784"></a>
<a id="trace-30802"></a>
<a id="trace-30804"></a>
<a id="trace-30809"></a>
<a id="trace-30811"></a>
<a id="trace-30824"></a>
<a id="trace-30826"></a>
<a id="trace-30833"></a>
<a id="trace-30835"></a>
<a id="trace-30900"></a>
<a id="trace-30902"></a>
<a id="trace-30906"></a>
<a id="trace-30908"></a>
<a id="trace-30919"></a>
<a id="trace-30921"></a>
<a id="trace-30925"></a>
<a id="trace-30927"></a>
<a id="trace-30936"></a>
<a id="trace-30938"></a>
<a id="trace-30943"></a>
<a id="trace-30945"></a>
<a id="trace-30965"></a>
<a id="trace-30967"></a>
<a id="trace-30978"></a>
<a id="trace-30980"></a>
<a id="trace-30998"></a>
<a id="trace-31000"></a>
<a id="trace-31009"></a>
<a id="trace-31011"></a>
<a id="trace-31077"></a>
<a id="trace-31079"></a>
<a id="trace-31083"></a>
<a id="trace-31085"></a>
<a id="trace-31096"></a>
<a id="trace-31098"></a>
<a id="trace-31105"></a>
<a id="trace-31107"></a>
<a id="trace-31127"></a>
<a id="trace-31129"></a>
<a id="trace-31142"></a>
<a id="trace-31144"></a>
<a id="trace-31159"></a>
<a id="trace-31161"></a>
<a id="trace-31181"></a>
<a id="trace-31183"></a>
<a id="trace-31190"></a>
<a id="trace-31192"></a>
<a id="trace-31260"></a>
<a id="trace-31262"></a>
<a id="trace-31268"></a>
<a id="trace-31270"></a>
<a id="trace-31285"></a>
<a id="trace-31287"></a>
<a id="trace-31293"></a>
<a id="trace-31295"></a>
<a id="trace-31361"></a>
<a id="trace-31363"></a>
<a id="trace-31371"></a>
<a id="trace-31373"></a>
<a id="trace-31383"></a>
<a id="trace-31385"></a>
<a id="trace-31397"></a>
<a id="trace-31399"></a>
<a id="trace-31410"></a>
<a id="trace-31412"></a>
<a id="trace-31420"></a>
<a id="trace-31422"></a>
<a id="trace-31490"></a>
<a id="trace-31492"></a>
<a id="trace-31499"></a>
<a id="trace-31501"></a>
<a id="trace-31514"></a>
<a id="trace-31516"></a>
<a id="trace-31524"></a>
<a id="trace-31526"></a>
<a id="trace-31539"></a>
<a id="trace-31541"></a>
<a id="trace-31552"></a>
<a id="trace-31554"></a>
<a id="trace-31563"></a>
<a id="trace-31565"></a>
<a id="trace-31573"></a>
<a id="trace-31575"></a>
<a id="trace-31587"></a>
<a id="trace-31589"></a>
<a id="trace-31597"></a>
<a id="trace-31599"></a>
<a id="trace-31667"></a>
<a id="trace-31669"></a>
<a id="trace-31676"></a>
<a id="trace-31678"></a>
<a id="trace-31691"></a>
<a id="trace-31693"></a>
<a id="trace-31701"></a>
<a id="trace-31703"></a>
<a id="trace-31718"></a>
<a id="trace-31720"></a>
<a id="trace-31728"></a>
<a id="trace-31730"></a>
<a id="trace-31749"></a>
<a id="trace-31751"></a>
<a id="trace-31758"></a>
<a id="trace-31760"></a>
<a id="trace-31773"></a>
<a id="trace-31775"></a>
<a id="trace-31784"></a>
<a id="trace-31786"></a>
<a id="trace-31855"></a>
<a id="trace-31857"></a>
<a id="trace-31861"></a>
<a id="trace-31863"></a>
<a id="trace-31875"></a>
<a id="trace-31877"></a>
<a id="trace-31881"></a>
<a id="trace-31883"></a>
<a id="trace-31894"></a>
<a id="trace-31896"></a>
<a id="trace-31902"></a>
<a id="trace-31904"></a>
<a id="trace-31915"></a>
<a id="trace-31917"></a>
<a id="trace-31923"></a>
<a id="trace-31925"></a>
<a id="trace-31938"></a>
<a id="trace-31940"></a>
<a id="trace-31947"></a>
<a id="trace-31949"></a>
<a id="trace-32017"></a>
<a id="trace-32019"></a>
<a id="trace-32023"></a>
<a id="trace-32025"></a>
<a id="trace-32039"></a>
<a id="trace-32041"></a>
<a id="trace-32047"></a>
<a id="trace-32049"></a>
<a id="trace-32063"></a>
<a id="trace-32065"></a>
<a id="trace-32075"></a>
<a id="trace-32077"></a>
<a id="trace-32089"></a>
<a id="trace-32091"></a>
<a id="trace-32100"></a>
<a id="trace-32102"></a>
<a id="trace-32112"></a>
<a id="trace-32114"></a>
<a id="trace-32121"></a>
<a id="trace-32123"></a>
<a id="trace-32192"></a>
<a id="trace-32194"></a>
<a id="trace-32200"></a>
<a id="trace-32202"></a>
<a id="trace-32213"></a>
<a id="trace-32215"></a>
<a id="trace-32222"></a>
<a id="trace-32224"></a>
<a id="trace-32235"></a>
<a id="trace-32237"></a>
<a id="trace-32243"></a>
<a id="trace-32245"></a>
<a id="trace-32254"></a>
<a id="trace-32256"></a>
<a id="trace-32260"></a>
<a id="trace-32262"></a>
<a id="trace-32270"></a>
<a id="trace-32272"></a>
<a id="trace-32277"></a>
<a id="trace-32279"></a>
<a id="trace-32343"></a>
<a id="trace-32345"></a>
<a id="trace-32347"></a>
<a id="trace-32349"></a>
<a id="trace-32359"></a>
<a id="trace-32361"></a>
<a id="trace-32366"></a>
<a id="trace-32368"></a>
<a id="trace-32376"></a>
<a id="trace-32378"></a>
<a id="trace-32383"></a>
<a id="trace-32385"></a>
<a id="trace-32395"></a>
<a id="trace-32397"></a>
<a id="trace-32402"></a>
<a id="trace-32404"></a>
<a id="trace-32416"></a>
<a id="trace-32418"></a>
<a id="trace-32423"></a>
<a id="trace-32425"></a>
<a id="trace-32490"></a>
<a id="trace-32492"></a>
<a id="trace-32494"></a>
<a id="trace-32496"></a>
<a id="trace-32505"></a>
<a id="trace-32507"></a>
<a id="trace-32512"></a>
<a id="trace-32514"></a>
<a id="trace-32528"></a>
<a id="trace-32530"></a>
<a id="trace-32534"></a>
<a id="trace-32536"></a>
<a id="trace-32546"></a>
<a id="trace-32548"></a>
<a id="trace-32552"></a>
<a id="trace-32554"></a>
<a id="trace-32564"></a>
<a id="trace-32566"></a>
<a id="trace-32570"></a>
<a id="trace-32572"></a>
<a id="trace-32639"></a>
<a id="trace-32641"></a>
<a id="trace-32648"></a>
<a id="trace-32650"></a>
<a id="trace-32661"></a>
<a id="trace-32663"></a>
<a id="trace-32667"></a>
<a id="trace-32669"></a>
<a id="trace-32682"></a>
<a id="trace-32684"></a>
<a id="trace-32689"></a>
<a id="trace-32691"></a>
<a id="trace-32702"></a>
<a id="trace-32704"></a>
<a id="trace-32712"></a>
<a id="trace-32714"></a>
<a id="trace-32724"></a>
<a id="trace-32726"></a>
<a id="trace-32730"></a>
<a id="trace-32732"></a>
<a id="trace-32795"></a>
<a id="trace-32797"></a>
<a id="trace-32800"></a>
<a id="trace-32802"></a>
<a id="trace-32812"></a>
<a id="trace-32814"></a>
<a id="trace-32820"></a>
<a id="trace-32822"></a>
<a id="trace-32834"></a>
<a id="trace-32836"></a>
<a id="trace-32842"></a>
<a id="trace-32844"></a>
<a id="trace-32854"></a>
<a id="trace-32856"></a>
<a id="trace-32864"></a>
<a id="trace-32866"></a>
<a id="trace-32879"></a>
<a id="trace-32881"></a>
<a id="trace-32891"></a>
<a id="trace-32893"></a>
<a id="trace-32963"></a>
<a id="trace-32965"></a>
<a id="trace-32970"></a>
<a id="trace-32972"></a>
<a id="trace-32984"></a>
<a id="trace-32986"></a>
<a id="trace-32989"></a>
<a id="trace-32991"></a>
<a id="trace-33002"></a>
<a id="trace-33004"></a>
<a id="trace-33009"></a>
<a id="trace-33011"></a>
<a id="trace-33021"></a>
<a id="trace-33023"></a>
<a id="trace-33027"></a>
<a id="trace-33029"></a>
<a id="trace-33044"></a>
<a id="trace-33046"></a>
<a id="trace-33050"></a>
<a id="trace-33052"></a>
<a id="trace-33118"></a>
<a id="trace-33120"></a>
<a id="trace-33123"></a>
<a id="trace-33125"></a>
<a id="trace-33136"></a>
<a id="trace-33138"></a>
<a id="trace-33141"></a>
<a id="trace-33143"></a>
<a id="trace-33156"></a>
<a id="trace-33158"></a>
<a id="trace-33163"></a>
<a id="trace-33165"></a>
<a id="trace-33173"></a>
<a id="trace-33175"></a>
<a id="trace-33179"></a>
<a id="trace-33181"></a>
<a id="trace-33192"></a>
<a id="trace-33194"></a>
<a id="trace-33198"></a>
<a id="trace-33200"></a>
<a id="trace-33265"></a>
<a id="trace-33267"></a>
<a id="trace-33272"></a>
<a id="trace-33274"></a>
<a id="trace-33283"></a>
<a id="trace-33285"></a>
<a id="trace-33288"></a>
<a id="trace-33290"></a>
<a id="trace-33302"></a>
<a id="trace-33304"></a>
<a id="trace-33309"></a>
<a id="trace-33311"></a>
<a id="trace-33321"></a>
<a id="trace-33323"></a>
<a id="trace-33331"></a>
<a id="trace-33333"></a>
<a id="trace-33342"></a>
<a id="trace-33344"></a>
<a id="trace-33349"></a>
<a id="trace-33351"></a>
<a id="trace-33416"></a>
<a id="trace-33418"></a>
<a id="trace-33423"></a>
<a id="trace-33425"></a>
<a id="trace-33446"></a>
<a id="trace-33448"></a>
<a id="trace-33454"></a>
<a id="trace-33456"></a>
<a id="trace-33471"></a>
<a id="trace-33473"></a>
<a id="trace-33479"></a>
<a id="trace-33481"></a>
<a id="trace-33492"></a>
<a id="trace-33494"></a>
<a id="trace-33499"></a>
<a id="trace-33501"></a>
<a id="trace-33509"></a>
<a id="trace-33511"></a>
<a id="trace-33516"></a>
<a id="trace-33518"></a>
- 1.60s–359.80s (×1430), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079399801950799, 'next_transition': 608}.
<a id="trace-936"></a>
<a id="trace-964"></a>
<a id="trace-986"></a>
<a id="trace-988"></a>
<a id="trace-1013"></a>
<a id="trace-1015"></a>
<a id="trace-1030"></a>
<a id="trace-1032"></a>
<a id="trace-1120"></a>
<a id="trace-1122"></a>
<a id="trace-1245"></a>
<a id="trace-1247"></a>
- 7.70s–10.70s (×12), actor 5, squad 0 (trace 936): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44249880807623715, 'next_transition': 964}.
<a id="trace-1128"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1128): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1049. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.825143900539384, 'next_transition': 157}.
<a id="trace-1260"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1260): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1041. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3787567941685801, 'next_transition': 1582}.
<a id="trace-1582"></a>
<a id="trace-1584"></a>
<a id="trace-1714"></a>
<a id="trace-1716"></a>
<a id="trace-1779"></a>
<a id="trace-1781"></a>
<a id="trace-1808"></a>
<a id="trace-1810"></a>
<a id="trace-1894"></a>
<a id="trace-1896"></a>
<a id="trace-1923"></a>
<a id="trace-1925"></a>
<a id="trace-1958"></a>
<a id="trace-1960"></a>
<a id="trace-1994"></a>
<a id="trace-1996"></a>
<a id="trace-2017"></a>
<a id="trace-2019"></a>
<a id="trace-2043"></a>
<a id="trace-2045"></a>
<a id="trace-2099"></a>
<a id="trace-2101"></a>
<a id="trace-2126"></a>
<a id="trace-2128"></a>
<a id="trace-2146"></a>
<a id="trace-2148"></a>
<a id="trace-2325"></a>
<a id="trace-2327"></a>
<a id="trace-2356"></a>
<a id="trace-2358"></a>
<a id="trace-2396"></a>
<a id="trace-2398"></a>
<a id="trace-2456"></a>
<a id="trace-2458"></a>
- 11.20s–23.25s (×34), actor 5, squad 0 (trace 1582): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1046. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.484986935680935, 'next_transition': 1714}.
<a id="trace-157"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 157): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.175532530922496, 'next_transition': 2155}.
<a id="trace-1691"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1691): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1691. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.175532530922496, 'next_transition': 2155}.
<a id="trace-1692"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1692): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1692. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.175532530922496, 'next_transition': 2155}.
<a id="trace-2155"></a>
- 19.80s–19.80s (×1), actor 8, squad 1 (trace 2155): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1829. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.731082453338448, 'next_transition': 2899}.
<a id="trace-2156"></a>
- 19.80s–19.80s (×1), actor 8, squad 1 (trace 2156): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1829. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.731082453338448, 'next_transition': 2899}.
<a id="trace-2487"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 2487): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2248. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2657}.
<a id="trace-2488"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 2488): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2248. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2657}.
<a id="trace-2657"></a>
<a id="trace-2659"></a>
<a id="trace-2681"></a>
<a id="trace-2683"></a>
<a id="trace-2774"></a>
<a id="trace-2776"></a>
<a id="trace-2799"></a>
<a id="trace-2801"></a>
- 24.25s–25.75s (×8), actor 5, squad 0 (trace 2657): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2253. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2681}.
<a id="trace-248"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 248): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2844"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 2844): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 2844. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49031174285844137, 'next_transition': 2885}.
<a id="trace-2845"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 2845): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 2845. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49031174285844137, 'next_transition': 2885}.
<a id="trace-2885"></a>
<a id="trace-2887"></a>
<a id="trace-2987"></a>
<a id="trace-2989"></a>
<a id="trace-3045"></a>
<a id="trace-3047"></a>
<a id="trace-3137"></a>
<a id="trace-3139"></a>
<a id="trace-3153"></a>
<a id="trace-3155"></a>
<a id="trace-3183"></a>
<a id="trace-3185"></a>
<a id="trace-3206"></a>
<a id="trace-3208"></a>
<a id="trace-3239"></a>
<a id="trace-3241"></a>
- 27.25s–33.25s (×16), actor 5, squad 0 (trace 2885): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 2845. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39375052847781994, 'next_transition': 2987}.
<a id="trace-2899"></a>
- 27.60s–27.60s (×1), actor 8, squad 1 (trace 2899): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 2703. Next observer evidence: {'until': 34.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2959122581795415, 'next_transition': 3444}.
<a id="trace-3252"></a>
- 33.70s–33.70s (×1), actor 0, squad 0 (trace 3252): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 3053. Next observer evidence: None.
<a id="trace-3411"></a>
<a id="trace-3413"></a>
<a id="trace-3430"></a>
<a id="trace-3432"></a>
<a id="trace-3575"></a>
<a id="trace-3577"></a>
<a id="trace-3673"></a>
<a id="trace-3675"></a>
<a id="trace-3685"></a>
<a id="trace-3687"></a>
- 33.75s–35.75s (×10), actor 5, squad 0 (trace 3411): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3058. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3430}.
<a id="trace-3444"></a>
- 34.50s–34.50s (×1), actor 8, squad 1 (trace 3444): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 3061. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 4201}.
<a id="trace-3445"></a>
- 34.50s–34.50s (×1), actor 8, squad 1 (trace 3445): bounding overwatch. Knowledge: actor memory at 30.00s, trace 3061. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 4201}.
<a id="trace-3446"></a>
- 34.50s–34.50s (×1), actor 8, squad 1 (trace 3446): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 3061. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 4201}.
<a id="trace-3708"></a>
- 36.20s–36.20s (×1), actor 0, squad 0 (trace 3708): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 3595. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3772191606811603, 'next_transition': 3927}.
<a id="trace-3709"></a>
- 36.20s–36.20s (×1), actor 0, squad 0 (trace 3709): bounding overwatch. Knowledge: actor memory at 35.00s, trace 3595. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3772191606811603, 'next_transition': 3927}.
<a id="trace-3710"></a>
- 36.20s–36.20s (×1), actor 0, squad 0 (trace 3710): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3595. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3772191606811603, 'next_transition': 3927}.
<a id="trace-3927"></a>
<a id="trace-3929"></a>
- 36.75s–36.75s (×2), actor 5, squad 0 (trace 3927): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3600. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6337986332889719, 'next_transition': 3948}.
<a id="trace-3948"></a>
- 37.00s–37.00s (×1), actor 0, squad 0 (trace 3948): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3595. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18726890654134545, 'next_transition': 4146}.
<a id="trace-4146"></a>
<a id="trace-4148"></a>
<a id="trace-4231"></a>
<a id="trace-4233"></a>
- 37.25s–38.25s (×4), actor 5, squad 0 (trace 4146): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3600. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.777332817391194, 'next_transition': 4231}.
<a id="trace-4201"></a>
- 37.85s–37.85s (×1), actor 9, squad 1 (trace 4201): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 3603. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5056}.
<a id="trace-4251"></a>
- 38.50s–38.50s (×1), actor 0, squad 0 (trace 4251): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 3595. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14250709710958234, 'next_transition': 4482}.
<a id="trace-4482"></a>
<a id="trace-4484"></a>
<a id="trace-4576"></a>
<a id="trace-4578"></a>
<a id="trace-4694"></a>
<a id="trace-4717"></a>
<a id="trace-4760"></a>
<a id="trace-4822"></a>
<a id="trace-4868"></a>
- 38.75s–42.25s (×9), actor 5, squad 0 (trace 4482): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3600. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7124987864858829, 'next_transition': 4576}.
<a id="trace-4883"></a>
- 42.30s–42.30s (×1), actor 0, squad 0 (trace 4883): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 4602. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1695832921060681, 'next_transition': 4926}.
<a id="trace-4926"></a>
<a id="trace-4984"></a>
<a id="trace-5040"></a>
<a id="trace-5042"></a>
- 42.75s–43.75s (×4), actor 5, squad 0 (trace 4926): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4607. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1916480587824037, 'next_transition': 4984}.
<a id="trace-5056"></a>
- 43.80s–43.80s (×1), actor 9, squad 1 (trace 5056): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 40.00s, trace 4610. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 622}.
<a id="trace-5292"></a>
- 45.30s–45.30s (×1), actor 0, squad 0 (trace 5292): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 5193. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21869223223536813, 'next_transition': 8378}.
<a id="trace-8071"></a>
- 45.30s–45.30s (×1), actor 0, squad 0 (trace 8071): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 5193. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21869223223536813, 'next_transition': 8378}.
<a id="trace-8072"></a>
- 45.30s–45.30s (×1), actor 0, squad 0 (trace 8072): MoveTactically. Knowledge: actor memory at 45.00s, trace 5193. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21869223223536813, 'next_transition': 8378}.
<a id="trace-8073"></a>
- 45.30s–45.30s (×1), actor 0, squad 0 (trace 8073): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 5193. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21869223223536813, 'next_transition': 8378}.
<a id="trace-8378"></a>
<a id="trace-8380"></a>
<a id="trace-8436"></a>
<a id="trace-8438"></a>
<a id="trace-8474"></a>
<a id="trace-8476"></a>
<a id="trace-8498"></a>
<a id="trace-8500"></a>
<a id="trace-8515"></a>
<a id="trace-8517"></a>
<a id="trace-8572"></a>
<a id="trace-8574"></a>
<a id="trace-8610"></a>
<a id="trace-8612"></a>
<a id="trace-8626"></a>
<a id="trace-8628"></a>
<a id="trace-8722"></a>
<a id="trace-8724"></a>
<a id="trace-8739"></a>
<a id="trace-8741"></a>
<a id="trace-8768"></a>
<a id="trace-8770"></a>
<a id="trace-8826"></a>
<a id="trace-8828"></a>
<a id="trace-8849"></a>
<a id="trace-8851"></a>
<a id="trace-8875"></a>
<a id="trace-8877"></a>
<a id="trace-8896"></a>
<a id="trace-8898"></a>
- 45.75s–53.75s (×30), actor 5, squad 0 (trace 8378): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5198. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8436}.
<a id="trace-8911"></a>
- 53.95s–53.95s (×1), actor 0, squad 0 (trace 8911): NeedSupport. Knowledge: actor memory at 50.00s, trace 8643. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4380094519280585, 'next_transition': 621}.
<a id="trace-621"></a>
- 54.15s–54.15s (×1), actor 5, squad 0 (events line 621): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-622"></a>
- 54.15s–54.15s (×1), actor 5, squad 1 (events line 622): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8925"></a>
- 54.15s–54.15s (×1), actor 5, squad 0 (trace 8925): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.836427 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 54.15s, trace 8925. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43888780914742576, 'next_transition': 8939}.
<a id="trace-8926"></a>
- 54.15s–54.15s (×1), actor 5, squad 0 (trace 8926): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.836427 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 54.15s, trace 8926. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43888780914742576, 'next_transition': 8939}.
<a id="trace-8927"></a>
- 54.15s–54.15s (×1), actor 5, squad 1 (trace 8927): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.836427 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 54.15s, trace 8927. Next observer evidence: {'until': 58.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10434}.
<a id="trace-8928"></a>
- 54.15s–54.15s (×1), actor 5, squad 1 (trace 8928): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.836427 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 54.15s, trace 8928. Next observer evidence: {'until': 58.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10434}.
<a id="trace-8939"></a>
<a id="trace-8941"></a>
- 54.25s–54.25s (×2), actor 5, squad 0 (trace 8939): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 54.15s, trace 8928. Next observer evidence: {'until': 54.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4345335586342963, 'next_transition': 8948}.
<a id="trace-8948"></a>
- 54.45s–54.45s (×1), actor 0, squad 0 (trace 8948): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 8643. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42763312707782064, 'next_transition': 9466}.
<a id="trace-8949"></a>
- 54.45s–54.45s (×1), actor 0, squad 0 (trace 8949): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 8643. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42763312707782064, 'next_transition': 9466}.
<a id="trace-9466"></a>
<a id="trace-9468"></a>
<a id="trace-9590"></a>
<a id="trace-9592"></a>
<a id="trace-9628"></a>
<a id="trace-9630"></a>
<a id="trace-9665"></a>
<a id="trace-9667"></a>
- 54.75s–56.75s (×8), actor 5, squad 0 (trace 9466): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 54.15s, trace 8928. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.428084887954019, 'next_transition': 9590}.
<a id="trace-9682"></a>
- 57.00s–57.00s (×1), actor 0, squad 0 (trace 9682): new contact inside 100 m. Knowledge: actor memory at 55.00s, trace 9487. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4275977314616643, 'next_transition': 10299}.
<a id="trace-10299"></a>
<a id="trace-10301"></a>
<a id="trace-10329"></a>
<a id="trace-10331"></a>
<a id="trace-10376"></a>
<a id="trace-10378"></a>
<a id="trace-10413"></a>
<a id="trace-10415"></a>
<a id="trace-10458"></a>
<a id="trace-10460"></a>
<a id="trace-10485"></a>
<a id="trace-10487"></a>
<a id="trace-10595"></a>
<a id="trace-10597"></a>
- 57.25s–60.25s (×14), actor 5, squad 0 (trace 10299): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 9492. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8575145576362343, 'next_transition': 10329}.
<a id="trace-10434"></a>
- 58.90s–58.90s (×1), actor 9, squad 1 (trace 10434): new contact inside 100 m. Knowledge: actor memory at 55.00s, trace 9495. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11249}.
<a id="trace-10616"></a>
- 60.50s–60.50s (×1), actor 0, squad 0 (trace 10616): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 60.00s, trace 10504. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37248292446063763, 'next_transition': 11149}.
<a id="trace-10617"></a>
- 60.50s–60.50s (×1), actor 0, squad 0 (trace 10617): rearward bound: one stationary suppressing element. Knowledge: actor memory at 60.00s, trace 10504. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37248292446063763, 'next_transition': 11149}.
<a id="trace-11149"></a>
<a id="trace-11151"></a>
<a id="trace-11182"></a>
<a id="trace-11184"></a>
<a id="trace-11211"></a>
<a id="trace-11213"></a>
<a id="trace-11258"></a>
<a id="trace-11260"></a>
<a id="trace-11281"></a>
<a id="trace-11283"></a>
<a id="trace-11320"></a>
<a id="trace-11322"></a>
<a id="trace-11343"></a>
<a id="trace-11345"></a>
<a id="trace-11388"></a>
<a id="trace-11390"></a>
<a id="trace-11409"></a>
<a id="trace-11411"></a>
<a id="trace-11501"></a>
<a id="trace-11503"></a>
<a id="trace-11519"></a>
<a id="trace-11521"></a>
<a id="trace-11589"></a>
<a id="trace-11591"></a>
<a id="trace-11606"></a>
<a id="trace-11608"></a>
<a id="trace-11678"></a>
<a id="trace-11680"></a>
<a id="trace-11691"></a>
<a id="trace-11693"></a>
<a id="trace-11782"></a>
<a id="trace-11784"></a>
<a id="trace-11796"></a>
<a id="trace-11798"></a>
<a id="trace-11817"></a>
<a id="trace-11819"></a>
<a id="trace-11861"></a>
<a id="trace-11863"></a>
<a id="trace-11905"></a>
<a id="trace-11907"></a>
<a id="trace-11920"></a>
<a id="trace-11922"></a>
<a id="trace-11947"></a>
<a id="trace-11949"></a>
<a id="trace-11959"></a>
<a id="trace-11961"></a>
<a id="trace-12044"></a>
<a id="trace-12060"></a>
<a id="trace-12082"></a>
<a id="trace-12096"></a>
<a id="trace-12121"></a>
- 60.75s–77.25s (×51), actor 5, squad 0 (trace 11149): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 10509. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2817870093387025, 'next_transition': 11182}.
<a id="trace-11249"></a>
- 62.20s–62.20s (×1), actor 9, squad 1 (trace 11249): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 10512. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2538}.
<a id="trace-11251"></a>
- 62.20s–62.20s (×1), actor 9, squad 1 (trace 11251): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 60.00s, trace 10512. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2538}.
<a id="trace-12129"></a>
- 77.65s–77.65s (×1), actor 1, squad 0 (trace 12129): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 11970. Next observer evidence: None.
<a id="trace-12130"></a>
- 77.65s–77.65s (×1), actor 1, squad 0 (trace 12130): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 11970. Next observer evidence: None.
<a id="trace-12241"></a>
- 77.75s–77.75s (×1), actor 5, squad 0 (trace 12241): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 11974. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7521734139334573, 'next_transition': 12258}.
<a id="trace-12258"></a>
- 78.20s–78.20s (×1), actor 5, squad 0 (trace 12258): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 78.20s, trace 12258. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21441815973156494, 'next_transition': 12287}.
<a id="trace-12287"></a>
<a id="trace-12418"></a>
<a id="trace-12459"></a>
<a id="trace-12461"></a>
<a id="trace-12495"></a>
<a id="trace-12497"></a>
<a id="trace-12509"></a>
<a id="trace-12511"></a>
<a id="trace-12527"></a>
<a id="trace-12529"></a>
<a id="trace-12541"></a>
<a id="trace-12543"></a>
<a id="trace-12565"></a>
<a id="trace-12567"></a>
<a id="trace-12580"></a>
<a id="trace-12582"></a>
<a id="trace-12666"></a>
<a id="trace-12668"></a>
<a id="trace-12717"></a>
<a id="trace-12719"></a>
<a id="trace-12745"></a>
<a id="trace-12747"></a>
<a id="trace-12767"></a>
<a id="trace-12769"></a>
<a id="trace-12805"></a>
<a id="trace-12807"></a>
<a id="trace-12819"></a>
<a id="trace-12821"></a>
<a id="trace-12911"></a>
<a id="trace-12913"></a>
<a id="trace-12926"></a>
<a id="trace-12928"></a>
<a id="trace-12945"></a>
<a id="trace-12947"></a>
<a id="trace-12960"></a>
<a id="trace-12962"></a>
<a id="trace-12984"></a>
<a id="trace-12986"></a>
<a id="trace-13002"></a>
<a id="trace-13004"></a>
<a id="trace-13028"></a>
<a id="trace-13030"></a>
<a id="trace-13047"></a>
<a id="trace-13049"></a>
<a id="trace-13087"></a>
<a id="trace-13089"></a>
<a id="trace-13186"></a>
<a id="trace-13188"></a>
<a id="trace-13209"></a>
<a id="trace-13211"></a>
- 78.75s–96.25s (×50), actor 5, squad 0 (trace 12287): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 78.20s, trace 12258. Next observer evidence: {'until': 80.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.8706993970071242, 'next_transition': 12418}.
<a id="trace-13216"></a>
- 96.25s–96.25s (×1), actor 1, squad 0 (trace 13216): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 95.00s, trace 13100. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13383}.
<a id="trace-13217"></a>
- 96.25s–96.25s (×1), actor 1, squad 0 (trace 13217): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 95.00s, trace 13100. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13383}.
<a id="trace-13383"></a>
<a id="trace-13385"></a>
<a id="trace-13417"></a>
<a id="trace-13419"></a>
<a id="trace-13444"></a>
<a id="trace-13446"></a>
<a id="trace-13469"></a>
<a id="trace-13471"></a>
<a id="trace-13494"></a>
<a id="trace-13496"></a>
<a id="trace-13531"></a>
<a id="trace-13533"></a>
<a id="trace-13672"></a>
<a id="trace-13674"></a>
<a id="trace-13687"></a>
<a id="trace-13689"></a>
<a id="trace-13716"></a>
<a id="trace-13718"></a>
<a id="trace-13736"></a>
<a id="trace-13738"></a>
- 96.75s–102.75s (×20), actor 5, squad 0 (trace 13383): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 13104. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5174905853258754, 'next_transition': 13417}.
<a id="trace-13751"></a>
- 103.20s–103.20s (×1), actor 1, squad 0 (trace 13751): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 100.00s, trace 13561. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5399916386491374, 'next_transition': 13782}.
<a id="trace-13782"></a>
<a id="trace-13784"></a>
<a id="trace-13815"></a>
<a id="trace-13817"></a>
<a id="trace-13993"></a>
<a id="trace-13995"></a>
<a id="trace-14036"></a>
<a id="trace-14038"></a>
<a id="trace-14048"></a>
<a id="trace-14050"></a>
<a id="trace-14077"></a>
<a id="trace-14079"></a>
<a id="trace-14119"></a>
<a id="trace-14121"></a>
<a id="trace-14132"></a>
<a id="trace-14134"></a>
<a id="trace-14233"></a>
<a id="trace-14235"></a>
<a id="trace-14248"></a>
<a id="trace-14250"></a>
<a id="trace-14265"></a>
<a id="trace-14267"></a>
<a id="trace-14297"></a>
<a id="trace-14299"></a>
<a id="trace-14319"></a>
<a id="trace-14321"></a>
<a id="trace-14335"></a>
<a id="trace-14337"></a>
<a id="trace-14356"></a>
<a id="trace-14358"></a>
<a id="trace-14453"></a>
<a id="trace-14455"></a>
<a id="trace-14464"></a>
<a id="trace-14466"></a>
<a id="trace-14482"></a>
<a id="trace-14484"></a>
<a id="trace-14509"></a>
<a id="trace-14511"></a>
<a id="trace-14525"></a>
<a id="trace-14527"></a>
<a id="trace-14546"></a>
<a id="trace-14548"></a>
<a id="trace-14594"></a>
<a id="trace-14596"></a>
<a id="trace-14675"></a>
<a id="trace-14677"></a>
<a id="trace-14694"></a>
<a id="trace-14696"></a>
<a id="trace-14714"></a>
<a id="trace-14716"></a>
<a id="trace-14725"></a>
<a id="trace-14727"></a>
<a id="trace-14744"></a>
<a id="trace-14746"></a>
<a id="trace-14775"></a>
<a id="trace-14777"></a>
- 103.75s–123.25s (×56), actor 5, squad 0 (trace 13782): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 13565. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5400064224516921, 'next_transition': 13815}.
<a id="trace-2537"></a>
- 123.30s–123.30s (×1), actor 5, squad 0 (events line 2537): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14792}.
<a id="trace-2538"></a>
- 123.30s–123.30s (×1), actor 5, squad 1 (events line 2538): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17267}.
<a id="trace-14782"></a>
- 123.30s–123.30s (×1), actor 5, squad 0 (trace 14782): renew committed intent (75 s lifetime). Knowledge: actor memory at 123.30s, trace 14782. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14792}.
<a id="trace-14783"></a>
- 123.30s–123.30s (×1), actor 5, squad 1 (trace 14783): renew committed intent (75 s lifetime). Knowledge: actor memory at 123.30s, trace 14783. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17267}.
<a id="trace-14792"></a>
<a id="trace-14794"></a>
<a id="trace-14813"></a>
<a id="trace-14815"></a>
<a id="trace-14827"></a>
<a id="trace-14829"></a>
<a id="trace-14923"></a>
<a id="trace-14925"></a>
<a id="trace-14944"></a>
<a id="trace-14946"></a>
<a id="trace-14956"></a>
<a id="trace-14958"></a>
<a id="trace-14978"></a>
<a id="trace-14980"></a>
<a id="trace-14994"></a>
<a id="trace-14996"></a>
- 123.75s–127.75s (×16), actor 5, squad 0 (trace 14792): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 123.30s, trace 14783. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14813}.
<a id="trace-15023"></a>
- 128.65s–128.65s (×1), actor 1, squad 0 (trace 15023): MoveTactically. Knowledge: actor memory at 125.00s, trace 14839. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15041}.
<a id="trace-15024"></a>
- 128.65s–128.65s (×1), actor 1, squad 0 (trace 15024): traveling overwatch. Knowledge: actor memory at 125.00s, trace 14839. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15041}.
<a id="trace-15025"></a>
- 128.65s–128.65s (×1), actor 1, squad 0 (trace 15025): received platoon directive. Knowledge: actor memory at 125.00s, trace 14839. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15041}.
<a id="trace-15041"></a>
<a id="trace-15043"></a>
<a id="trace-15060"></a>
<a id="trace-15062"></a>
- 128.80s–129.30s (×4), actor 5, squad 0 (trace 15041): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 14843. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15060}.
<a id="trace-15082"></a>
- 129.65s–129.65s (×1), actor 1, squad 0 (trace 15082): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 125.00s, trace 14839. Next observer evidence: {'until': 129.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15245}.
<a id="trace-15245"></a>
<a id="trace-15247"></a>
<a id="trace-15338"></a>
<a id="trace-15340"></a>
<a id="trace-15386"></a>
<a id="trace-15388"></a>
<a id="trace-15410"></a>
<a id="trace-15412"></a>
<a id="trace-15444"></a>
<a id="trace-15446"></a>
<a id="trace-15488"></a>
<a id="trace-15490"></a>
<a id="trace-15502"></a>
<a id="trace-15504"></a>
<a id="trace-15553"></a>
<a id="trace-15555"></a>
<a id="trace-15656"></a>
<a id="trace-15658"></a>
<a id="trace-15685"></a>
<a id="trace-15687"></a>
<a id="trace-15703"></a>
<a id="trace-15705"></a>
<a id="trace-15739"></a>
<a id="trace-15741"></a>
<a id="trace-15767"></a>
<a id="trace-15769"></a>
<a id="trace-15785"></a>
<a id="trace-15787"></a>
<a id="trace-15813"></a>
<a id="trace-15815"></a>
<a id="trace-15826"></a>
<a id="trace-15828"></a>
<a id="trace-15918"></a>
<a id="trace-15920"></a>
<a id="trace-15941"></a>
<a id="trace-15943"></a>
<a id="trace-15964"></a>
<a id="trace-15966"></a>
<a id="trace-15988"></a>
<a id="trace-15990"></a>
<a id="trace-16015"></a>
<a id="trace-16017"></a>
<a id="trace-16051"></a>
<a id="trace-16053"></a>
<a id="trace-16072"></a>
<a id="trace-16074"></a>
<a id="trace-16117"></a>
<a id="trace-16119"></a>
<a id="trace-16204"></a>
<a id="trace-16206"></a>
<a id="trace-16240"></a>
<a id="trace-16242"></a>
<a id="trace-16259"></a>
<a id="trace-16261"></a>
<a id="trace-16276"></a>
<a id="trace-16278"></a>
- 129.80s–147.30s (×56), actor 5, squad 0 (trace 15245): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 14843. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15338}.
<a id="trace-16285"></a>
- 147.45s–147.45s (×1), actor 1, squad 0 (trace 16285): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 145.00s, trace 16128. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.02248876313510705, 'next_transition': 16598}.
<a id="trace-16598"></a>
<a id="trace-16600"></a>
<a id="trace-16626"></a>
<a id="trace-16628"></a>
<a id="trace-16666"></a>
<a id="trace-16668"></a>
<a id="trace-16760"></a>
<a id="trace-16762"></a>
<a id="trace-16773"></a>
<a id="trace-16775"></a>
<a id="trace-16796"></a>
<a id="trace-16798"></a>
<a id="trace-16861"></a>
<a id="trace-16863"></a>
<a id="trace-16883"></a>
<a id="trace-16885"></a>
<a id="trace-16902"></a>
<a id="trace-16904"></a>
<a id="trace-16932"></a>
<a id="trace-16934"></a>
<a id="trace-16946"></a>
<a id="trace-16948"></a>
<a id="trace-17033"></a>
<a id="trace-17035"></a>
<a id="trace-17059"></a>
<a id="trace-17061"></a>
<a id="trace-17088"></a>
<a id="trace-17090"></a>
<a id="trace-17109"></a>
<a id="trace-17111"></a>
- 148.30s–156.80s (×30), actor 5, squad 0 (trace 16598): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 16132. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.539978193263, 'next_transition': 16626}.
<a id="trace-17121"></a>
- 156.90s–156.90s (×1), actor 1, squad 0 (trace 17121): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 155.00s, trace 16960. Next observer evidence: {'until': 157.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.36000903616777263, 'next_transition': 17237}.
<a id="trace-17237"></a>
<a id="trace-17239"></a>
<a id="trace-17300"></a>
<a id="trace-17302"></a>
<a id="trace-17317"></a>
<a id="trace-17319"></a>
<a id="trace-17342"></a>
<a id="trace-17344"></a>
<a id="trace-17364"></a>
<a id="trace-17366"></a>
<a id="trace-17446"></a>
<a id="trace-17448"></a>
<a id="trace-17463"></a>
<a id="trace-17465"></a>
<a id="trace-17480"></a>
<a id="trace-17482"></a>
<a id="trace-17516"></a>
<a id="trace-17518"></a>
<a id="trace-17528"></a>
<a id="trace-17530"></a>
<a id="trace-17551"></a>
<a id="trace-17553"></a>
- 157.30s–163.30s (×22), actor 5, squad 0 (trace 17237): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 16964. Next observer evidence: {'until': 158.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5699095216219152, 'next_transition': 17300}.
<a id="trace-17267"></a>
- 157.85s–157.85s (×1), actor 9, squad 1 (trace 17267): MoveTactically. Knowledge: actor memory at 155.00s, trace 16967. Next observer evidence: None.
<a id="trace-17268"></a>
- 157.85s–157.85s (×1), actor 9, squad 1 (trace 17268): traveling overwatch. Knowledge: actor memory at 155.00s, trace 16967. Next observer evidence: None.
<a id="trace-17269"></a>
- 157.85s–157.85s (×1), actor 9, squad 1 (trace 17269): current contact unknown for 10 s. Knowledge: actor memory at 155.00s, trace 16967. Next observer evidence: None.
<a id="trace-17273"></a>
- 157.90s–157.90s (×1), actor 9, squad 1 (trace 17273): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 155.00s, trace 16967. Next observer evidence: {'until': 187.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4131}.
<a id="trace-17563"></a>
- 163.70s–163.70s (×1), actor 1, squad 0 (trace 17563): ReactToContact: cover and return fire. Knowledge: actor memory at 160.00s, trace 17372. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4273713261595729, 'next_transition': 18015}.
<a id="trace-17564"></a>
- 163.70s–163.70s (×1), actor 1, squad 0 (trace 17564): bounding overwatch. Knowledge: actor memory at 160.00s, trace 17372. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4273713261595729, 'next_transition': 18015}.
<a id="trace-17565"></a>
- 163.70s–163.70s (×1), actor 1, squad 0 (trace 17565): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 160.00s, trace 17372. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4273713261595729, 'next_transition': 18015}.
<a id="trace-18015"></a>
<a id="trace-18017"></a>
<a id="trace-18132"></a>
<a id="trace-18134"></a>
<a id="trace-18151"></a>
<a id="trace-18153"></a>
<a id="trace-18222"></a>
<a id="trace-18224"></a>
- 164.30s–167.30s (×8), actor 5, squad 0 (trace 18015): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 17376. Next observer evidence: {'until': 165.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.111508712179009, 'next_transition': 18132}.
<a id="trace-18231"></a>
- 167.40s–167.40s (×1), actor 1, squad 0 (trace 18231): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 165.00s, trace 18056. Next observer evidence: {'until': 167.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2849175309915628, 'next_transition': 18245}.
<a id="trace-18245"></a>
<a id="trace-18247"></a>
<a id="trace-18280"></a>
<a id="trace-18282"></a>
<a id="trace-18313"></a>
<a id="trace-18315"></a>
<a id="trace-18352"></a>
<a id="trace-18354"></a>
<a id="trace-18440"></a>
<a id="trace-18442"></a>
<a id="trace-18460"></a>
<a id="trace-18462"></a>
<a id="trace-18501"></a>
<a id="trace-18503"></a>
- 167.80s–171.80s (×14), actor 5, squad 0 (trace 18245): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 18060. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3212896287652498, 'next_transition': 18280}.
<a id="trace-18515"></a>
- 172.05s–172.05s (×1), actor 1, squad 0 (trace 18515): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 170.00s, trace 18370. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10818253499547005, 'next_transition': 21429}.
<a id="trace-21152"></a>
- 172.05s–172.05s (×1), actor 1, squad 0 (trace 21152): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 170.00s, trace 18370. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10818253499547005, 'next_transition': 21429}.
<a id="trace-21153"></a>
- 172.05s–172.05s (×1), actor 1, squad 0 (trace 21153): MoveTactically. Knowledge: actor memory at 170.00s, trace 18370. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10818253499547005, 'next_transition': 21429}.
<a id="trace-21154"></a>
- 172.05s–172.05s (×1), actor 1, squad 0 (trace 21154): contact cover complete: assessment resumes closure. Knowledge: actor memory at 170.00s, trace 18370. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10818253499547005, 'next_transition': 21429}.
<a id="trace-21429"></a>
<a id="trace-21431"></a>
<a id="trace-21453"></a>
<a id="trace-21455"></a>
<a id="trace-21479"></a>
<a id="trace-21481"></a>
<a id="trace-21523"></a>
<a id="trace-21525"></a>
<a id="trace-21539"></a>
<a id="trace-21541"></a>
<a id="trace-21619"></a>
<a id="trace-21621"></a>
<a id="trace-21642"></a>
<a id="trace-21644"></a>
<a id="trace-21667"></a>
<a id="trace-21669"></a>
<a id="trace-21685"></a>
<a id="trace-21687"></a>
<a id="trace-21721"></a>
<a id="trace-21723"></a>
<a id="trace-21740"></a>
<a id="trace-21742"></a>
- 172.30s–178.30s (×22), actor 5, squad 0 (trace 21429): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 18374. Next observer evidence: {'until': 172.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4078673738589748, 'next_transition': 21453}.
<a id="trace-21767"></a>
- 178.80s–178.80s (×1), actor 1, squad 0 (trace 21767): NeedSupport. Knowledge: actor memory at 175.00s, trace 21550. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12088143657547797, 'next_transition': 21795}.
<a id="trace-21795"></a>
<a id="trace-21797"></a>
- 179.30s–179.30s (×2), actor 5, squad 0 (trace 21795): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 21554. Next observer evidence: {'until': 179.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1208660572218702, 'next_transition': 21818}.
<a id="trace-21818"></a>
- 179.70s–179.70s (×1), actor 1, squad 0 (trace 21818): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 175.00s, trace 21550. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08273488514096426, 'next_transition': 22194}.
<a id="trace-22194"></a>
<a id="trace-22196"></a>
<a id="trace-22281"></a>
<a id="trace-22283"></a>
<a id="trace-22303"></a>
<a id="trace-22305"></a>
<a id="trace-22330"></a>
<a id="trace-22332"></a>
<a id="trace-22361"></a>
<a id="trace-22363"></a>
<a id="trace-22394"></a>
<a id="trace-22396"></a>
<a id="trace-22412"></a>
<a id="trace-22414"></a>
<a id="trace-22448"></a>
<a id="trace-22450"></a>
<a id="trace-22480"></a>
<a id="trace-22482"></a>
- 179.80s–183.80s (×18), actor 5, squad 0 (trace 22194): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 21554. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18611503783709063, 'next_transition': 22281}.
<a id="trace-22490"></a>
- 184.25s–184.25s (×1), actor 2, squad 0 (trace 22490): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 180.00s, trace 22204. Next observer evidence: None.
<a id="trace-22497"></a>
<a id="trace-22499"></a>
<a id="trace-22529"></a>
<a id="trace-22531"></a>
- 184.30s–184.80s (×4), actor 5, squad 0 (trace 22497): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 22207. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19291631677394275, 'next_transition': 22529}.
<a id="trace-22621"></a>
- 185.25s–185.25s (×1), actor 2, squad 0 (trace 22621): Reorganise: completed/failed drill. Knowledge: actor memory at 185.00s, trace 22548. Next observer evidence: None.
<a id="trace-22626"></a>
- 185.25s–185.25s (×1), actor 2, squad 0 (trace 22626): MoveTactically. Knowledge: actor memory at 185.00s, trace 22548. Next observer evidence: None.
<a id="trace-22627"></a>
- 185.25s–185.25s (×1), actor 2, squad 0 (trace 22627): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 185.00s, trace 22548. Next observer evidence: None.
<a id="trace-23129"></a>
<a id="trace-23131"></a>
<a id="trace-23160"></a>
<a id="trace-23162"></a>
<a id="trace-23183"></a>
<a id="trace-23185"></a>
<a id="trace-23202"></a>
<a id="trace-23204"></a>
<a id="trace-23222"></a>
<a id="trace-23224"></a>
<a id="trace-23254"></a>
<a id="trace-23274"></a>
<a id="trace-23286"></a>
<a id="trace-23299"></a>
<a id="trace-23373"></a>
<a id="trace-23385"></a>
<a id="trace-23413"></a>
<a id="trace-23427"></a>
- 185.30s–191.80s (×18), actor 5, squad 0 (trace 23129): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 22551. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24998642899188825, 'next_transition': 23160}.
<a id="trace-23434"></a>
- 191.80s–191.80s (×1), actor 3, squad 0 (trace 23434): ReactToContact: cover and return fire. Knowledge: actor memory at 190.00s, trace 23306. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20988081573847506, 'next_transition': 23903}.
<a id="trace-23435"></a>
- 191.80s–191.80s (×1), actor 3, squad 0 (trace 23435): new contact inside 100 m. Knowledge: actor memory at 190.00s, trace 23306. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20988081573847506, 'next_transition': 23903}.
<a id="trace-23903"></a>
<a id="trace-23935"></a>
<a id="trace-23966"></a>
<a id="trace-23976"></a>
<a id="trace-24002"></a>
<a id="trace-24021"></a>
<a id="trace-24094"></a>
- 192.30s–195.30s (×7), actor 5, squad 0 (trace 23903): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 23308. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3975129577665246, 'next_transition': 23935}.
<a id="trace-4131"></a>
- 192.35s–192.35s (×1), actor 5, squad 1 (events line 4131): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23910"></a>
<a id="trace-30109"></a>
- 192.35s–261.40s (×2), actor 5, squad 1 (trace 23910): renew committed intent (75 s lifetime). Knowledge: actor memory at 192.35s, trace 23910. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30109}.
<a id="trace-24105"></a>
- 195.70s–195.70s (×1), actor 3, squad 0 (trace 24105): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 195.00s, trace 24028. Next observer evidence: {'until': 195.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22852109321618208, 'next_transition': 24108}.
<a id="trace-24108"></a>
<a id="trace-24110"></a>
<a id="trace-24132"></a>
<a id="trace-24134"></a>
<a id="trace-24150"></a>
<a id="trace-24152"></a>
- 195.80s–196.80s (×6), actor 5, squad 0 (trace 24108): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 24030. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2856515684633508, 'next_transition': 24132}.
<a id="trace-24178"></a>
- 197.45s–197.45s (×1), actor 3, squad 0 (trace 24178): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 195.00s, trace 24028. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17613502406960407, 'next_transition': 27344}.
<a id="trace-27227"></a>
- 197.45s–197.45s (×1), actor 3, squad 0 (trace 27227): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 195.00s, trace 24028. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17613502406960407, 'next_transition': 27344}.
<a id="trace-27228"></a>
- 197.45s–197.45s (×1), actor 3, squad 0 (trace 27228): MoveTactically. Knowledge: actor memory at 195.00s, trace 24028. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17613502406960407, 'next_transition': 27344}.
<a id="trace-27229"></a>
- 197.45s–197.45s (×1), actor 3, squad 0 (trace 27229): contact cover complete: assessment resumes closure. Knowledge: actor memory at 195.00s, trace 24028. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17613502406960407, 'next_transition': 27344}.
<a id="trace-27311"></a>
- 197.45s–197.45s (×1), actor 3, squad 0 (trace 27311): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 195.00s, trace 24028. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17613502406960407, 'next_transition': 27344}.
<a id="trace-27344"></a>
<a id="trace-27346"></a>
- 198.30s–198.30s (×2), actor 5, squad 0 (trace 27344): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 24030. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39499156593846524, 'next_transition': 27365}.
<a id="trace-27353"></a>
- 198.30s–198.30s (×1), actor 3, squad 0 (trace 27353): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 195.00s, trace 24028. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39499156593846524, 'next_transition': 27365}.
<a id="trace-27354"></a>
- 198.30s–198.30s (×1), actor 3, squad 0 (trace 27354): ; retain held slots. Knowledge: actor memory at 195.00s, trace 24028. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39499156593846524, 'next_transition': 27365}.
<a id="trace-27365"></a>
<a id="trace-27367"></a>
<a id="trace-27385"></a>
<a id="trace-27387"></a>
<a id="trace-27403"></a>
<a id="trace-27405"></a>
<a id="trace-27503"></a>
<a id="trace-27505"></a>
<a id="trace-27518"></a>
<a id="trace-27520"></a>
<a id="trace-27532"></a>
<a id="trace-27534"></a>
<a id="trace-27553"></a>
<a id="trace-27555"></a>
<a id="trace-27566"></a>
<a id="trace-27568"></a>
<a id="trace-27584"></a>
<a id="trace-27586"></a>
<a id="trace-27600"></a>
<a id="trace-27602"></a>
<a id="trace-27631"></a>
<a id="trace-27633"></a>
<a id="trace-27710"></a>
<a id="trace-27712"></a>
<a id="trace-27721"></a>
<a id="trace-27723"></a>
- 198.80s–205.80s (×26), actor 5, squad 0 (trace 27365): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 24030. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3974630061356915, 'next_transition': 27385}.
<a id="trace-4417"></a>
- 206.15s–206.15s (×1), actor 5, squad 0 (events line 4417): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27734"></a>
- 206.15s–206.15s (×1), actor 5, squad 0 (trace 27734): renew committed intent (75 s lifetime). Knowledge: actor memory at 206.15s, trace 27734. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200808094685556, 'next_transition': 27742}.
<a id="trace-27742"></a>
<a id="trace-27744"></a>
<a id="trace-27761"></a>
<a id="trace-27763"></a>
<a id="trace-27776"></a>
<a id="trace-27778"></a>
<a id="trace-27788"></a>
<a id="trace-27790"></a>
<a id="trace-27807"></a>
<a id="trace-27809"></a>
<a id="trace-27832"></a>
<a id="trace-27834"></a>
<a id="trace-27920"></a>
<a id="trace-27922"></a>
<a id="trace-27932"></a>
<a id="trace-27934"></a>
<a id="trace-27950"></a>
<a id="trace-27952"></a>
<a id="trace-27964"></a>
<a id="trace-27966"></a>
<a id="trace-27992"></a>
<a id="trace-27994"></a>
<a id="trace-28012"></a>
<a id="trace-28014"></a>
<a id="trace-28047"></a>
<a id="trace-28049"></a>
<a id="trace-28069"></a>
<a id="trace-28071"></a>
<a id="trace-28082"></a>
<a id="trace-28084"></a>
<a id="trace-28157"></a>
<a id="trace-28159"></a>
<a id="trace-28194"></a>
<a id="trace-28196"></a>
<a id="trace-28213"></a>
<a id="trace-28215"></a>
<a id="trace-28225"></a>
<a id="trace-28227"></a>
<a id="trace-28246"></a>
<a id="trace-28248"></a>
<a id="trace-28279"></a>
<a id="trace-28281"></a>
<a id="trace-28291"></a>
<a id="trace-28293"></a>
<a id="trace-28369"></a>
<a id="trace-28371"></a>
<a id="trace-28380"></a>
<a id="trace-28382"></a>
<a id="trace-28414"></a>
<a id="trace-28416"></a>
<a id="trace-28439"></a>
<a id="trace-28441"></a>
<a id="trace-28458"></a>
<a id="trace-28460"></a>
<a id="trace-28472"></a>
<a id="trace-28474"></a>
<a id="trace-28494"></a>
<a id="trace-28496"></a>
<a id="trace-28512"></a>
<a id="trace-28514"></a>
<a id="trace-28592"></a>
<a id="trace-28594"></a>
<a id="trace-28605"></a>
<a id="trace-28607"></a>
<a id="trace-28627"></a>
<a id="trace-28629"></a>
<a id="trace-28655"></a>
<a id="trace-28657"></a>
<a id="trace-28668"></a>
<a id="trace-28670"></a>
<a id="trace-28693"></a>
<a id="trace-28695"></a>
<a id="trace-28708"></a>
<a id="trace-28710"></a>
<a id="trace-28743"></a>
<a id="trace-28745"></a>
<a id="trace-28835"></a>
<a id="trace-28837"></a>
<a id="trace-28854"></a>
<a id="trace-28856"></a>
<a id="trace-28870"></a>
<a id="trace-28872"></a>
<a id="trace-28889"></a>
<a id="trace-28891"></a>
<a id="trace-28905"></a>
<a id="trace-28907"></a>
<a id="trace-28934"></a>
<a id="trace-28936"></a>
<a id="trace-28955"></a>
<a id="trace-28957"></a>
<a id="trace-28970"></a>
<a id="trace-28972"></a>
<a id="trace-29043"></a>
<a id="trace-29045"></a>
<a id="trace-29079"></a>
<a id="trace-29081"></a>
<a id="trace-29095"></a>
<a id="trace-29097"></a>
<a id="trace-29114"></a>
<a id="trace-29116"></a>
<a id="trace-29127"></a>
<a id="trace-29129"></a>
<a id="trace-29146"></a>
<a id="trace-29148"></a>
<a id="trace-29158"></a>
<a id="trace-29160"></a>
<a id="trace-29176"></a>
<a id="trace-29178"></a>
<a id="trace-29191"></a>
<a id="trace-29193"></a>
<a id="trace-29268"></a>
<a id="trace-29270"></a>
<a id="trace-29281"></a>
<a id="trace-29283"></a>
<a id="trace-29307"></a>
<a id="trace-29309"></a>
<a id="trace-29322"></a>
<a id="trace-29324"></a>
<a id="trace-29361"></a>
<a id="trace-29363"></a>
<a id="trace-29383"></a>
<a id="trace-29385"></a>
<a id="trace-29398"></a>
<a id="trace-29400"></a>
<a id="trace-29473"></a>
<a id="trace-29475"></a>
<a id="trace-29483"></a>
<a id="trace-29485"></a>
<a id="trace-29499"></a>
<a id="trace-29501"></a>
<a id="trace-29523"></a>
<a id="trace-29525"></a>
<a id="trace-29549"></a>
<a id="trace-29551"></a>
<a id="trace-29562"></a>
<a id="trace-29564"></a>
<a id="trace-29581"></a>
<a id="trace-29583"></a>
<a id="trace-29595"></a>
<a id="trace-29597"></a>
<a id="trace-29669"></a>
<a id="trace-29671"></a>
<a id="trace-29679"></a>
<a id="trace-29681"></a>
<a id="trace-29696"></a>
<a id="trace-29698"></a>
<a id="trace-29710"></a>
<a id="trace-29712"></a>
<a id="trace-29724"></a>
<a id="trace-29726"></a>
<a id="trace-29736"></a>
<a id="trace-29738"></a>
<a id="trace-29752"></a>
<a id="trace-29754"></a>
<a id="trace-29765"></a>
<a id="trace-29767"></a>
<a id="trace-29785"></a>
<a id="trace-29787"></a>
<a id="trace-29797"></a>
<a id="trace-29799"></a>
<a id="trace-29870"></a>
<a id="trace-29872"></a>
<a id="trace-29882"></a>
<a id="trace-29884"></a>
<a id="trace-29909"></a>
<a id="trace-29911"></a>
<a id="trace-29924"></a>
<a id="trace-29926"></a>
<a id="trace-29937"></a>
<a id="trace-29939"></a>
<a id="trace-29956"></a>
<a id="trace-29958"></a>
<a id="trace-29968"></a>
<a id="trace-29970"></a>
<a id="trace-29999"></a>
<a id="trace-30001"></a>
<a id="trace-30082"></a>
<a id="trace-30084"></a>
<a id="trace-30099"></a>
<a id="trace-30101"></a>
<a id="trace-30134"></a>
<a id="trace-30136"></a>
<a id="trace-30151"></a>
<a id="trace-30153"></a>
<a id="trace-30163"></a>
<a id="trace-30165"></a>
<a id="trace-30181"></a>
<a id="trace-30183"></a>
<a id="trace-30198"></a>
<a id="trace-30200"></a>
<a id="trace-30297"></a>
<a id="trace-30299"></a>
<a id="trace-30310"></a>
<a id="trace-30312"></a>
<a id="trace-30338"></a>
<a id="trace-30340"></a>
<a id="trace-30369"></a>
<a id="trace-30371"></a>
<a id="trace-30391"></a>
<a id="trace-30393"></a>
<a id="trace-30407"></a>
<a id="trace-30409"></a>
<a id="trace-30499"></a>
<a id="trace-30501"></a>
<a id="trace-30529"></a>
<a id="trace-30531"></a>
<a id="trace-30547"></a>
<a id="trace-30549"></a>
<a id="trace-30560"></a>
<a id="trace-30562"></a>
<a id="trace-30578"></a>
<a id="trace-30580"></a>
<a id="trace-30593"></a>
<a id="trace-30595"></a>
<a id="trace-30612"></a>
<a id="trace-30614"></a>
<a id="trace-30627"></a>
<a id="trace-30629"></a>
- 206.30s–274.80s (×218), actor 5, squad 0 (trace 27742): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 206.15s, trace 27734. Next observer evidence: {'until': 206.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5513025285715837, 'next_transition': 27761}.
<a id="trace-5778"></a>
- 261.40s–261.40s (×1), actor 5, squad 1 (events line 5778): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 288.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31149}.
<a id="trace-6101"></a>
- 275.20s–275.20s (×1), actor 5, squad 0 (events line 6101): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30655"></a>
- 275.20s–275.20s (×1), actor 5, squad 0 (trace 30655): renew committed intent (75 s lifetime). Knowledge: actor memory at 275.20s, trace 30655. Next observer evidence: None.
<a id="trace-30706"></a>
<a id="trace-30708"></a>
<a id="trace-30739"></a>
<a id="trace-30741"></a>
<a id="trace-30750"></a>
<a id="trace-30752"></a>
<a id="trace-30766"></a>
<a id="trace-30768"></a>
<a id="trace-30778"></a>
<a id="trace-30780"></a>
<a id="trace-30797"></a>
<a id="trace-30819"></a>
<a id="trace-30896"></a>
<a id="trace-30914"></a>
<a id="trace-30916"></a>
<a id="trace-30931"></a>
<a id="trace-30933"></a>
<a id="trace-30959"></a>
<a id="trace-30961"></a>
<a id="trace-30992"></a>
<a id="trace-30994"></a>
<a id="trace-31071"></a>
<a id="trace-31073"></a>
<a id="trace-31090"></a>
<a id="trace-31092"></a>
<a id="trace-31112"></a>
<a id="trace-31114"></a>
<a id="trace-31136"></a>
<a id="trace-31138"></a>
<a id="trace-31175"></a>
<a id="trace-31177"></a>
<a id="trace-31254"></a>
<a id="trace-31256"></a>
<a id="trace-31279"></a>
<a id="trace-31281"></a>
<a id="trace-31355"></a>
<a id="trace-31357"></a>
<a id="trace-31378"></a>
<a id="trace-31404"></a>
<a id="trace-31406"></a>
<a id="trace-31485"></a>
<a id="trace-31508"></a>
<a id="trace-31510"></a>
<a id="trace-31533"></a>
<a id="trace-31535"></a>
<a id="trace-31581"></a>
<a id="trace-31583"></a>
<a id="trace-31661"></a>
<a id="trace-31663"></a>
<a id="trace-31685"></a>
<a id="trace-31687"></a>
<a id="trace-31714"></a>
<a id="trace-31744"></a>
<a id="trace-31769"></a>
<a id="trace-31849"></a>
<a id="trace-31851"></a>
<a id="trace-31869"></a>
<a id="trace-31871"></a>
<a id="trace-31888"></a>
<a id="trace-31890"></a>
<a id="trace-31932"></a>
<a id="trace-31934"></a>
<a id="trace-32012"></a>
<a id="trace-32033"></a>
<a id="trace-32035"></a>
<a id="trace-32057"></a>
<a id="trace-32059"></a>
<a id="trace-32083"></a>
<a id="trace-32085"></a>
<a id="trace-32186"></a>
<a id="trace-32188"></a>
<a id="trace-32230"></a>
<a id="trace-32249"></a>
<a id="trace-32353"></a>
<a id="trace-32355"></a>
<a id="trace-32371"></a>
<a id="trace-32389"></a>
<a id="trace-32391"></a>
<a id="trace-32410"></a>
<a id="trace-32412"></a>
<a id="trace-32485"></a>
<a id="trace-32500"></a>
<a id="trace-32523"></a>
<a id="trace-32540"></a>
<a id="trace-32542"></a>
<a id="trace-32559"></a>
<a id="trace-32633"></a>
<a id="trace-32635"></a>
<a id="trace-32655"></a>
<a id="trace-32657"></a>
<a id="trace-32677"></a>
<a id="trace-32696"></a>
<a id="trace-32698"></a>
<a id="trace-32718"></a>
<a id="trace-32720"></a>
<a id="trace-32806"></a>
<a id="trace-32808"></a>
<a id="trace-32830"></a>
<a id="trace-32848"></a>
<a id="trace-32850"></a>
<a id="trace-32873"></a>
<a id="trace-32875"></a>
<a id="trace-32959"></a>
<a id="trace-32978"></a>
<a id="trace-32980"></a>
<a id="trace-32996"></a>
<a id="trace-32998"></a>
<a id="trace-33015"></a>
<a id="trace-33017"></a>
- 275.30s–343.30s (×109), actor 5, squad 0 (trace 30706): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.20s, trace 30655. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10250432533556816, 'next_transition': 30739}.
<a id="trace-31149"></a>
- 288.65s–288.65s (×1), actor 9, squad 1 (trace 31149): ReactToContact: cover and return fire. Knowledge: actor memory at 285.00s, trace 31017. Next observer evidence: {'until': 291.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31297}.
<a id="trace-31150"></a>
- 288.65s–288.65s (×1), actor 9, squad 1 (trace 31150): bounding overwatch. Knowledge: actor memory at 285.00s, trace 31017. Next observer evidence: {'until': 291.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31297}.
<a id="trace-31151"></a>
- 288.65s–288.65s (×1), actor 9, squad 1 (trace 31151): new contact inside 100 m. Knowledge: actor memory at 285.00s, trace 31017. Next observer evidence: {'until': 291.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31297}.
<a id="trace-31297"></a>
- 291.95s–291.95s (×1), actor 9, squad 1 (trace 31297): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 290.00s, trace 31197. Next observer evidence: {'until': 302.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.924862692739648, 'next_transition': 31734}.
<a id="trace-31298"></a>
- 291.95s–291.95s (×1), actor 9, squad 1 (trace 31298): rearward bound: one stationary suppressing element. Knowledge: actor memory at 290.00s, trace 31197. Next observer evidence: {'until': 302.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.924862692739648, 'next_transition': 31734}.
<a id="trace-31734"></a>
- 302.90s–302.90s (×1), actor 9, squad 1 (trace 31734): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 300.00s, trace 31607. Next observer evidence: {'until': 312, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32053}.
<a id="trace-31735"></a>
- 302.90s–302.90s (×1), actor 9, squad 1 (trace 31735): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 300.00s, trace 31607. Next observer evidence: {'until': 312, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32053}.
<a id="trace-32053"></a>
- 312.00s–312.00s (×1), actor 9, squad 1 (trace 32053): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 310.00s, trace 31957. Next observer evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32642}.
<a id="trace-32642"></a>
- 330.40s–330.40s (×1), actor 5, squad 1 (trace 32642): renew committed intent (75 s lifetime). Knowledge: actor memory at 330.40s, trace 32642. Next observer evidence: {'until': 330.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7329}.
<a id="trace-7329"></a>
- 330.40s–330.40s (×1), actor 5, squad 1 (events line 7329): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-33032"></a>
- 344.05s–344.05s (×1), actor 3, squad 0 (trace 33032): current contact unknown for 10 s; retain held slots. Knowledge: actor memory at 340.00s, trace 32897. Next observer evidence: {'until': 344.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7634}.
<a id="trace-7634"></a>
- 344.20s–344.20s (×1), actor 5, squad 0 (events line 7634): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-33035"></a>
- 344.20s–344.20s (×1), actor 5, squad 0 (trace 33035): renew committed intent (75 s lifetime). Knowledge: actor memory at 344.20s, trace 33035. Next observer evidence: None.
<a id="trace-33038"></a>
<a id="trace-33040"></a>
<a id="trace-33113"></a>
<a id="trace-33132"></a>
<a id="trace-33151"></a>
<a id="trace-33169"></a>
<a id="trace-33186"></a>
<a id="trace-33188"></a>
<a id="trace-33261"></a>
<a id="trace-33279"></a>
<a id="trace-33296"></a>
<a id="trace-33298"></a>
<a id="trace-33316"></a>
<a id="trace-33338"></a>
<a id="trace-33411"></a>
<a id="trace-33440"></a>
<a id="trace-33442"></a>
<a id="trace-33465"></a>
<a id="trace-33467"></a>
<a id="trace-33486"></a>
<a id="trace-33488"></a>
<a id="trace-33504"></a>
- 344.30s–359.30s (×22), actor 5, squad 0 (trace 33038): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 344.20s, trace 33035. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33113}.

## Net delivery

263 matched order/radio deliveries; 437 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.377s; maximum 5.950s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 2844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 2845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3063: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3064: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3065: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3066: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3067: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3068: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3069: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3070: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3071: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3072: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 3603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3604: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3605: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3606: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3607: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3608: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3609: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3610: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3611: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 3612: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 3613: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4602: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 4610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4611: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4612: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4613: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4614: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4615: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4616: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4617: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4618: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 4619: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 4620: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 5193: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 5196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5199: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 5201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 5202: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5203: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5204: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5205: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5206: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5207: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5208: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5209: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 5210: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 5211: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 8643: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 8644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 8645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 8646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 8647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 8648: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 8649: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 8650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 8651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 8652: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 8653: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 8654: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 8655: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 8656: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 8657: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 8658: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 8659: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 8660: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 8661: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.15s leader 5, trace 8925: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.15s leader 5, trace 8926: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.15s leader 5, trace 8927: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.15s leader 5, trace 8928: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 9487: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 9488: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 9489: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 9490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 9491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 9492: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 9493: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 9494: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 9495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 9496: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 9497: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 9498: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 9499: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 9500: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 9501: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 9502: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 9503: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 9504: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 9505: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 10504: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 10505: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 10506: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 10507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 10508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 10509: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 10510: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 10511: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 10512: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 10513: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 10514: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 10515: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 10516: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 10517: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 10518: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 10519: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 10520: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 10521: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 10522: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 11425: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 11426: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 11427: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 11428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 11429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 11430: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 11431: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 11432: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 11433: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 11434: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 11435: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 11436: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 11437: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 11438: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 11439: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 11440: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 11441: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 11442: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 11443: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 11703: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 11704: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 11705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 11706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 11707: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 11708: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 11709: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 11710: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 11711: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 11712: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 11713: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 11714: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 11715: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 11716: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 11717: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 11718: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 11719: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 11720: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 11970: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 11971: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 11972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 11973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 11974: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 11975: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 11976: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 11977: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 11978: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 11979: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 11980: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 11981: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 11982: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 11983: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 11984: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 11985: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 11986: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 11987: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 78.20s leader 5, trace 12258: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 12341: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 12342: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 12343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 12344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 12345: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 12346: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 12347: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 12348: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 12349: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 12350: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 12351: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 12352: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 12353: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 12354: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 12355: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 12356: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 12357: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 12358: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 12596: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 12597: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 12598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 12599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 12600: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 12601: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 12602: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 12603: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 12604: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 12605: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 12606: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 12607: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 12608: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 12609: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 12610: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 12611: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 12612: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 12613: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 12831: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 12832: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 12833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 12834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 12835: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 12836: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 12837: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 12838: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 12839: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 12840: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 12841: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 12842: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 12843: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 12844: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 12845: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 12846: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 12847: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 12848: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 13100: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 13101: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 13102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 13103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 13104: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 13105: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 13106: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 13107: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 13108: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 13109: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 13110: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 13111: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 13112: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 13113: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 13114: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 13115: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 13116: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 13117: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 13561: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 13562: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 13563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 13564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 13565: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 13566: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 13567: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 13568: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 13569: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 13570: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 13571: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 13572: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 13573: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 13574: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 13575: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 13576: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 13577: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 13578: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 13863: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 13864: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 13865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 13866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 13867: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 13868: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 13869: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 13870: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 13871: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 13872: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 13873: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 13874: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 13875: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 13876: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 13877: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 13878: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 13879: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 13880: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 14144: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 14145: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 14146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 14147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 14148: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 14149: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 14150: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 14151: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 14152: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 14153: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 14154: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 14155: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 14156: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 14157: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 14158: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 14159: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 14160: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 14161: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 14381: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 14382: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 14383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 14384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 14385: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 14386: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 14387: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 14388: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 14389: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 14390: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 14391: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 14392: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 14393: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 14394: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 14395: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 14396: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 14397: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 14398: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 14604: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 14605: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 14606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 14607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 14608: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 14609: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 14610: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 14611: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 14612: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 14613: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 14614: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 14615: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 14616: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 14617: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 14618: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 14619: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 14620: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 14621: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.30s leader 5, trace 14782: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.30s leader 5, trace 14783: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 14839: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 14840: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 14841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 14842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 14843: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 14844: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 14845: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 14846: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 14847: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 14848: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 14849: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 14850: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 14851: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 14852: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 14853: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 14854: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 14855: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 14856: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 15264: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 15265: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 15266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 15267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 15268: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 15269: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 15270: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 15271: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 15272: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 15273: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 15274: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 15275: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 15276: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 15277: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 15278: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 15279: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 15280: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 15281: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 15564: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 15565: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 15566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 15567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 15568: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 15569: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 15570: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 15571: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 15572: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 15573: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 15574: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 15575: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 15576: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 15577: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 15578: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 15579: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 15580: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 15581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 15839: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 15840: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 15841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 15842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 15843: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 15844: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 15845: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 15846: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 15847: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 15848: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 15849: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 15850: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 15851: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 15852: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 15853: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 15854: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 15855: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 15856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 16128: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 16129: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 16130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 16131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 16132: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 16133: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 16134: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 16135: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 16136: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 16137: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 16138: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 16139: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 16140: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 16141: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 16142: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 16143: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 16144: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 16145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 16674: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 16675: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 16676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 16677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 16678: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 16679: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 16680: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 16681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 16682: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 16683: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 16684: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 16685: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 16686: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 16687: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 16688: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 16689: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 16690: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 16691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 16960: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 16961: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 16962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 16963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 16964: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 16965: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 16966: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 16967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 16968: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 16969: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 16970: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 16971: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 16972: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 16973: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 16974: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 16975: estimate 1.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 16976: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 16977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 17372: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 17373: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 17374: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 17375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 17376: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 17377: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 17378: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 17379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 17380: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 17381: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 17382: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 17383: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 17384: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 17385: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 17386: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 17387: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 17388: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 17389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 18056: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 18057: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 18058: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 18059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 18060: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 18061: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 18062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 18063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 18064: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 18065: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 18066: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 18067: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 18068: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 18069: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 18070: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 18071: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 18072: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 18073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 18370: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 18371: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 18372: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 18373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 18374: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 18375: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 18376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 18377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 18378: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 18379: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 18380: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 18381: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 18382: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 18383: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 18384: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 18385: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 18386: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 18387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 21550: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 21551: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 21552: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 21553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 21554: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 21555: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 21556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 21557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 21558: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 21559: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 21560: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 21561: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 21562: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 21563: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 21564: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 21565: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 21566: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 21567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 22203: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 22204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 22205: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 22206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 22207: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 22208: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 22209: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 22210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 22211: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 22212: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 22213: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 22214: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 22215: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 22216: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 22217: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 22218: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 22219: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 22220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 22548: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 22549: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 22550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 22551: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 22552: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 22553: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 22554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 22555: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 22556: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 22557: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 22558: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 22559: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 22560: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 22561: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 22562: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 22563: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 22564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 23306: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 23307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 23308: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 23309: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 23310: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 23311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 23312: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 23313: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 23314: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 23315: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 23316: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 23317: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 23318: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 23319: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 23320: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 23321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.35s leader 5, trace 23910: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 24028: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 24029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 24030: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 24031: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 24032: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 24033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 24034: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 24035: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 24036: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 24037: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 24038: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 24039: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 24040: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 24041: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 24042: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 24043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 27414: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 27415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 27416: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 27417: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 27418: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 27419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 27420: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 27421: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 27422: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 27423: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 27424: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 27425: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 27426: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 27427: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 27428: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 27429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 27642: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 27643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 27644: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 27645: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 27646: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 27647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 27648: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 27649: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 27650: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 27651: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 27652: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 27653: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 27654: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 27655: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 27656: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 27657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 206.15s leader 5, trace 27734: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 27853: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 27854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 27855: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 27856: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 27857: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 27858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 27859: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 27860: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 27861: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 27862: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 27863: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 27864: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 27865: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 27866: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 27867: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 27868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 28092: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 28093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 28094: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 28095: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 28096: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 28097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 28098: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 28099: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 28100: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 28101: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 28102: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 28103: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 28104: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 28105: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 28106: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 28107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 28302: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 28303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 28304: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 28305: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 28306: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 28307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 28308: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 28309: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 28310: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 28311: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 28312: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 28313: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 28314: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 28315: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 28316: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 28317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 28525: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 28526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 28527: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 28528: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 28529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 28530: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 28531: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 28532: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 28533: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 28534: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 28535: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 28536: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 28537: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 28538: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 28539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 28755: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 28756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 28757: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 28758: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 28759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 28760: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 28761: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 28762: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 28763: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 28764: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 28765: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 28766: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 28767: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 28768: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 28769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 28979: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 28980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 28981: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 28982: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 28983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 28984: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 28985: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 28986: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 28987: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 28988: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 28989: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 28990: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 28991: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 28992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 29203: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 29204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 29205: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 29206: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 29207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 29208: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 29209: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 29210: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 29211: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 29212: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 29213: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 29214: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 29215: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 29216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 29409: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 29410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 29411: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 29412: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 29413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 29414: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 29415: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 29416: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 29417: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 29418: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 29419: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 29420: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 29421: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 29422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 29605: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 29606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 29607: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 29608: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 29609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 29610: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 29611: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 29612: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 29613: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 29614: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 29615: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 29616: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 29617: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 29618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 29806: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 29807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 29808: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 29809: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 29810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 29811: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 29812: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 29813: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 29814: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 29815: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 29816: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 29817: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 29818: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 29819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 30008: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 30009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 30010: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 30011: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 30012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 30013: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 30014: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 30015: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 30016: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 30017: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 30018: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 30019: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 30020: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 30021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.40s leader 5, trace 30109: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 30207: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 30208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 30209: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 30210: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 30211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 30212: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 30213: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 30214: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 30215: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 30216: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 30217: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 30218: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 30219: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 30220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 30418: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 30419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 30420: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 30421: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 30422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 30423: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 30424: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 30425: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 30426: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 30427: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 30428: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 30429: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 30430: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 30431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 30641: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 30642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 30643: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 30644: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 30645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 30646: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 30647: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 30648: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 30649: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 30650: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 30651: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 30652: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 30653: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 30654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.20s leader 5, trace 30655: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 30839: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 30840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 30841: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 30842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 30843: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 30844: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 30845: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 30846: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 30847: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 30848: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 30849: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 30850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 31014: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 31015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 31016: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 31017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 31018: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 31019: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 31020: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 31021: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 31022: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 31023: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 31024: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 31025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 31194: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 31195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 31196: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 31197: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 31198: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 31199: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 31200: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 31201: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 31202: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 31203: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 31204: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 31205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 31427: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 31428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 31429: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 31430: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 31431: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 31432: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 31433: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 31434: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 31435: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 31436: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 31437: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 31438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 31604: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 31605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 31606: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 31607: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 31608: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 31609: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 31610: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 31611: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 31612: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 31613: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 31614: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 31615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 31791: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 31792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 31793: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 31794: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 31795: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 31796: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 31797: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 31798: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 31799: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 31800: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 31801: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 31802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 31954: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 31955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 31956: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 31957: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 31958: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 31959: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 31960: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 31961: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 31962: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 31963: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 31964: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 31965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 32128: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 32129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 32130: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 32131: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 32132: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 32133: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 32134: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 32135: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 32136: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 32137: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 32138: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 32139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 32282: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 32283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 32284: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 32285: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 32286: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 32287: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 32288: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 32289: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 32290: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 32291: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 32292: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 32293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 3, trace 32428: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 32429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 32430: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 32431: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 32432: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 32433: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 32434: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 32435: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 32436: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 32437: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 32438: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 32439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 3, trace 32575: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 32576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 32577: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 32578: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 32579: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 32580: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 32581: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 32582: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 32583: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 32584: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 32585: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 32586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.40s leader 5, trace 32642: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 3, trace 32734: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 32735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 32736: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 32737: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 32738: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 32739: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 32740: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 32741: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 32742: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 32743: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 32744: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 32745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 3, trace 32897: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 32898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 32899: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 32900: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 32901: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 32902: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 32903: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 32904: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 32905: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 32906: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 32907: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 32908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 344.20s leader 5, trace 33035: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 3, trace 33054: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 33055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 33056: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 33057: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 33058: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 33059: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 33060: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 33061: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 33062: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 33063: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 33064: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 33065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 3, trace 33203: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 33204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 33205: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 33206: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 33207: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 33208: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 33209: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 33210: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 33211: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 33212: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 33213: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 33214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 3, trace 33353: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 33354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 33355: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 33356: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 33357: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 33358: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 33359: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 33360: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 33361: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 33362: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 33363: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 33364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 3, trace 33520: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 33521: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 33522: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 33523: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 33524: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 33525: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 33526: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 33527: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 33528: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 33529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren killed in action
- 1: Vale incapacitated
- 1: Rook killed in action
- 1: Soren killed in action
- 1: Reed killed in action
- 1: Voss incapacitated
- 1: Moss incapacitated
- 1: Kest killed in action
- 1: Bram incapacitated
- 1: Tern killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
