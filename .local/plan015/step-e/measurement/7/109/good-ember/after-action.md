# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/7/109/good-ember/battle-109-1789673784049891297`

## Battle summary

**Ember** · 360 s · 308 shots.

### Turning points

- 22.8s, squad 4: contact (events line 224). First recorded contact.
- 42.3s, squad 0: withdrawal ([trace 3478](#trace-3478)). 61.5s, squad 0: advanced tactically.
- 46.7s, squad 0: help call ([trace 4053](#trace-4053)). No completion observed before termination.
- 146.9s, squad 0: help call ([trace 9076](#trace-9076)). No completion observed before termination.
- 151.2s, squad 0: withdrawal ([trace 9286](#trace-9286)). 172.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 231.2s, squad 0: withdrawal ([trace 12415](#trace-12415)). 251.3s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 4 shots, 3/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 304 shots, 0/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 11.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 951](#trace-951)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 31.4s, squad 0 chose took cover and returned fire ([trace 2097](#trace-2097)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 950](#trace-950)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3275016915707186, 'next_transition': 971}.
- 52.7s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.152653 retreat threshold=0.220000 initiative=requires intent ([trace 4266](#trace-4266)). Following evidence: None.

### Communication

254 matched deliveries (mean 0.25s, max 6.30s); 241 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 22.80s, squad 4, contact, evidence events line 224: First recorded contact; .
- 42.30s, squad 0, withdrawal, evidence 3478: BreakContact: believed ratio at least two without superiority; 61.5s, squad 0: advanced tactically.
- 46.70s, squad 0, help call, evidence 4053: NeedSupport; No completion observed before termination.
- 146.95s, squad 0, help call, evidence 9076: NeedSupport; No completion observed before termination.
- 151.25s, squad 0, withdrawal, evidence 9286: BreakContact: believed ratio at least two without superiority; 172.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 231.25s, squad 0, withdrawal, evidence 12415: BreakContact: believed ratio at least two without superiority; 251.3s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.16655134335406, 'next_transition': 502}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.16655134335406, 'next_transition': 502}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.16655134335406, 'next_transition': 502}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
<a id="trace-409"></a>
<a id="trace-428"></a>
<a id="trace-504"></a>
<a id="trace-518"></a>
<a id="trace-542"></a>
<a id="trace-562"></a>
<a id="trace-575"></a>
<a id="trace-592"></a>
<a id="trace-614"></a>
<a id="trace-635"></a>
<a id="trace-646"></a>
<a id="trace-654"></a>
<a id="trace-736"></a>
<a id="trace-745"></a>
<a id="trace-947"></a>
<a id="trace-973"></a>
<a id="trace-996"></a>
<a id="trace-1014"></a>
<a id="trace-1034"></a>
<a id="trace-1052"></a>
<a id="trace-1078"></a>
<a id="trace-1095"></a>
<a id="trace-1176"></a>
<a id="trace-1191"></a>
<a id="trace-1214"></a>
<a id="trace-1233"></a>
<a id="trace-1381"></a>
<a id="trace-1399"></a>
<a id="trace-1427"></a>
<a id="trace-1443"></a>
<a id="trace-1464"></a>
<a id="trace-1484"></a>
<a id="trace-1565"></a>
<a id="trace-1589"></a>
<a id="trace-1608"></a>
<a id="trace-1631"></a>
<a id="trace-1657"></a>
<a id="trace-1673"></a>
<a id="trace-1767"></a>
<a id="trace-1782"></a>
<a id="trace-1800"></a>
<a id="trace-1811"></a>
<a id="trace-1891"></a>
<a id="trace-1902"></a>
<a id="trace-1920"></a>
<a id="trace-1929"></a>
<a id="trace-1943"></a>
<a id="trace-1952"></a>
<a id="trace-1965"></a>
<a id="trace-1976"></a>
<a id="trace-1985"></a>
<a id="trace-1994"></a>
<a id="trace-2071"></a>
<a id="trace-2081"></a>
<a id="trace-2093"></a>
<a id="trace-2290"></a>
<a id="trace-2306"></a>
<a id="trace-2330"></a>
<a id="trace-2341"></a>
<a id="trace-2354"></a>
<a id="trace-2381"></a>
<a id="trace-2402"></a>
<a id="trace-2485"></a>
<a id="trace-2495"></a>
<a id="trace-2515"></a>
<a id="trace-2527"></a>
<a id="trace-2650"></a>
<a id="trace-2659"></a>
<a id="trace-2934"></a>
<a id="trace-3200"></a>
<a id="trace-3224"></a>
<a id="trace-3255"></a>
<a id="trace-3338"></a>
<a id="trace-3362"></a>
<a id="trace-3405"></a>
<a id="trace-3448"></a>
<a id="trace-3472"></a>
<a id="trace-3838"></a>
<a id="trace-3863"></a>
<a id="trace-3892"></a>
<a id="trace-3916"></a>
<a id="trace-3930"></a>
<a id="trace-4012"></a>
<a id="trace-4026"></a>
<a id="trace-4046"></a>
<a id="trace-4059"></a>
<a id="trace-4073"></a>
<a id="trace-4084"></a>
<a id="trace-4098"></a>
<a id="trace-4113"></a>
<a id="trace-4125"></a>
<a id="trace-4132"></a>
<a id="trace-4210"></a>
<a id="trace-4224"></a>
<a id="trace-4236"></a>
<a id="trace-4241"></a>
<a id="trace-4260"></a>
<a id="trace-4278"></a>
<a id="trace-4293"></a>
<a id="trace-4299"></a>
<a id="trace-4319"></a>
<a id="trace-4328"></a>
<a id="trace-4410"></a>
<a id="trace-4419"></a>
<a id="trace-4452"></a>
<a id="trace-4591"></a>
<a id="trace-4624"></a>
<a id="trace-4664"></a>
<a id="trace-4712"></a>
<a id="trace-4729"></a>
<a id="trace-4750"></a>
<a id="trace-4768"></a>
<a id="trace-4845"></a>
<a id="trace-4857"></a>
<a id="trace-4866"></a>
<a id="trace-5005"></a>
<a id="trace-5021"></a>
<a id="trace-5031"></a>
<a id="trace-5041"></a>
<a id="trace-5051"></a>
<a id="trace-5070"></a>
<a id="trace-5080"></a>
<a id="trace-5151"></a>
<a id="trace-5162"></a>
<a id="trace-5280"></a>
<a id="trace-5286"></a>
<a id="trace-5305"></a>
<a id="trace-5318"></a>
<a id="trace-5333"></a>
<a id="trace-5346"></a>
<a id="trace-5352"></a>
<a id="trace-5428"></a>
<a id="trace-5435"></a>
<a id="trace-5447"></a>
<a id="trace-5560"></a>
<a id="trace-5576"></a>
<a id="trace-5588"></a>
<a id="trace-5610"></a>
<a id="trace-5618"></a>
<a id="trace-5638"></a>
<a id="trace-5648"></a>
<a id="trace-5723"></a>
<a id="trace-5730"></a>
<a id="trace-5747"></a>
<a id="trace-5755"></a>
<a id="trace-5770"></a>
<a id="trace-5782"></a>
<a id="trace-5795"></a>
<a id="trace-5803"></a>
<a id="trace-5815"></a>
<a id="trace-5821"></a>
<a id="trace-5897"></a>
<a id="trace-5919"></a>
<a id="trace-5942"></a>
<a id="trace-5962"></a>
<a id="trace-5975"></a>
<a id="trace-5983"></a>
<a id="trace-6000"></a>
<a id="trace-6007"></a>
<a id="trace-6016"></a>
<a id="trace-6022"></a>
<a id="trace-6094"></a>
<a id="trace-6099"></a>
<a id="trace-6109"></a>
<a id="trace-6121"></a>
<a id="trace-6240"></a>
<a id="trace-6249"></a>
<a id="trace-6269"></a>
<a id="trace-6287"></a>
<a id="trace-6302"></a>
<a id="trace-6314"></a>
<a id="trace-6392"></a>
<a id="trace-6399"></a>
<a id="trace-6409"></a>
<a id="trace-6415"></a>
<a id="trace-6429"></a>
<a id="trace-6438"></a>
<a id="trace-6485"></a>
<a id="trace-6498"></a>
<a id="trace-6522"></a>
<a id="trace-6530"></a>
<a id="trace-6605"></a>
<a id="trace-6620"></a>
<a id="trace-6630"></a>
<a id="trace-6637"></a>
<a id="trace-6647"></a>
<a id="trace-6654"></a>
<a id="trace-6664"></a>
<a id="trace-6672"></a>
<a id="trace-6685"></a>
<a id="trace-6692"></a>
<a id="trace-6769"></a>
<a id="trace-6777"></a>
<a id="trace-6793"></a>
<a id="trace-6803"></a>
<a id="trace-6816"></a>
<a id="trace-6830"></a>
<a id="trace-6844"></a>
<a id="trace-6850"></a>
<a id="trace-6866"></a>
<a id="trace-6874"></a>
<a id="trace-6951"></a>
<a id="trace-6961"></a>
<a id="trace-6974"></a>
<a id="trace-6980"></a>
<a id="trace-6993"></a>
<a id="trace-7003"></a>
<a id="trace-7018"></a>
<a id="trace-7029"></a>
<a id="trace-7049"></a>
<a id="trace-7056"></a>
<a id="trace-7189"></a>
<a id="trace-7202"></a>
<a id="trace-7210"></a>
<a id="trace-7215"></a>
<a id="trace-7230"></a>
<a id="trace-7239"></a>
<a id="trace-7253"></a>
<a id="trace-7266"></a>
<a id="trace-7282"></a>
<a id="trace-7288"></a>
<a id="trace-7362"></a>
<a id="trace-7370"></a>
<a id="trace-7383"></a>
<a id="trace-7391"></a>
<a id="trace-7412"></a>
<a id="trace-7420"></a>
<a id="trace-7439"></a>
<a id="trace-7445"></a>
<a id="trace-7458"></a>
<a id="trace-7470"></a>
<a id="trace-7544"></a>
<a id="trace-7663"></a>
<a id="trace-7683"></a>
<a id="trace-7710"></a>
<a id="trace-7719"></a>
<a id="trace-7734"></a>
<a id="trace-7744"></a>
<a id="trace-7761"></a>
<a id="trace-7771"></a>
<a id="trace-7851"></a>
<a id="trace-7862"></a>
<a id="trace-7876"></a>
<a id="trace-7884"></a>
<a id="trace-7899"></a>
<a id="trace-8011"></a>
<a id="trace-8029"></a>
<a id="trace-8050"></a>
<a id="trace-8062"></a>
<a id="trace-8074"></a>
<a id="trace-8157"></a>
<a id="trace-8166"></a>
<a id="trace-8179"></a>
<a id="trace-8190"></a>
<a id="trace-8206"></a>
<a id="trace-8219"></a>
<a id="trace-8233"></a>
<a id="trace-8241"></a>
<a id="trace-8373"></a>
<a id="trace-8381"></a>
<a id="trace-8458"></a>
<a id="trace-8469"></a>
<a id="trace-8478"></a>
<a id="trace-8486"></a>
<a id="trace-8500"></a>
<a id="trace-8508"></a>
<a id="trace-8520"></a>
<a id="trace-8532"></a>
<a id="trace-8542"></a>
<a id="trace-8549"></a>
<a id="trace-8625"></a>
<a id="trace-8642"></a>
<a id="trace-8652"></a>
<a id="trace-8659"></a>
<a id="trace-8678"></a>
<a id="trace-8685"></a>
<a id="trace-8696"></a>
<a id="trace-8759"></a>
<a id="trace-8774"></a>
<a id="trace-8791"></a>
<a id="trace-8861"></a>
<a id="trace-8871"></a>
<a id="trace-9060"></a>
<a id="trace-9070"></a>
<a id="trace-9144"></a>
<a id="trace-9151"></a>
<a id="trace-9171"></a>
<a id="trace-9188"></a>
<a id="trace-9196"></a>
<a id="trace-9203"></a>
<a id="trace-9278"></a>
<a id="trace-9284"></a>
<a id="trace-9387"></a>
<a id="trace-9391"></a>
<a id="trace-9413"></a>
<a id="trace-9428"></a>
<a id="trace-9438"></a>
<a id="trace-9446"></a>
<a id="trace-9460"></a>
<a id="trace-9465"></a>
<a id="trace-9536"></a>
<a id="trace-9543"></a>
<a id="trace-9554"></a>
<a id="trace-9565"></a>
<a id="trace-9575"></a>
<a id="trace-9581"></a>
<a id="trace-9595"></a>
<a id="trace-9602"></a>
<a id="trace-9617"></a>
<a id="trace-9622"></a>
<a id="trace-9697"></a>
<a id="trace-9713"></a>
<a id="trace-9721"></a>
<a id="trace-9731"></a>
<a id="trace-9743"></a>
<a id="trace-9756"></a>
<a id="trace-9820"></a>
<a id="trace-9831"></a>
<a id="trace-9851"></a>
<a id="trace-9862"></a>
<a id="trace-9937"></a>
<a id="trace-9950"></a>
<a id="trace-9963"></a>
<a id="trace-9969"></a>
<a id="trace-9982"></a>
<a id="trace-9997"></a>
<a id="trace-10011"></a>
<a id="trace-10027"></a>
<a id="trace-10036"></a>
<a id="trace-10042"></a>
<a id="trace-10120"></a>
<a id="trace-10127"></a>
<a id="trace-10138"></a>
<a id="trace-10144"></a>
<a id="trace-10157"></a>
<a id="trace-10175"></a>
<a id="trace-10184"></a>
<a id="trace-10199"></a>
<a id="trace-10224"></a>
<a id="trace-10238"></a>
<a id="trace-10309"></a>
<a id="trace-10319"></a>
<a id="trace-10328"></a>
<a id="trace-10334"></a>
<a id="trace-10344"></a>
<a id="trace-10349"></a>
<a id="trace-10358"></a>
<a id="trace-10365"></a>
<a id="trace-10377"></a>
<a id="trace-10384"></a>
<a id="trace-10455"></a>
<a id="trace-10468"></a>
<a id="trace-10477"></a>
<a id="trace-10483"></a>
<a id="trace-10492"></a>
<a id="trace-10498"></a>
<a id="trace-10508"></a>
<a id="trace-10515"></a>
<a id="trace-10525"></a>
<a id="trace-10530"></a>
<a id="trace-10607"></a>
<a id="trace-10615"></a>
<a id="trace-10624"></a>
<a id="trace-10633"></a>
<a id="trace-10639"></a>
<a id="trace-10650"></a>
<a id="trace-10658"></a>
<a id="trace-10672"></a>
<a id="trace-10677"></a>
<a id="trace-10747"></a>
<a id="trace-10753"></a>
<a id="trace-10762"></a>
<a id="trace-10770"></a>
<a id="trace-10778"></a>
<a id="trace-10785"></a>
<a id="trace-10794"></a>
<a id="trace-10801"></a>
<a id="trace-10814"></a>
<a id="trace-10820"></a>
<a id="trace-10893"></a>
<a id="trace-10901"></a>
<a id="trace-10910"></a>
<a id="trace-10915"></a>
<a id="trace-10932"></a>
<a id="trace-10939"></a>
<a id="trace-11005"></a>
<a id="trace-11017"></a>
<a id="trace-11029"></a>
<a id="trace-11041"></a>
<a id="trace-11119"></a>
<a id="trace-11135"></a>
<a id="trace-11146"></a>
<a id="trace-11153"></a>
<a id="trace-11169"></a>
<a id="trace-11175"></a>
<a id="trace-11187"></a>
<a id="trace-11197"></a>
<a id="trace-11211"></a>
<a id="trace-11226"></a>
<a id="trace-11296"></a>
<a id="trace-11303"></a>
<a id="trace-11317"></a>
<a id="trace-11326"></a>
<a id="trace-11340"></a>
<a id="trace-11346"></a>
<a id="trace-11361"></a>
<a id="trace-11374"></a>
<a id="trace-11385"></a>
<a id="trace-11396"></a>
<a id="trace-11478"></a>
<a id="trace-11488"></a>
<a id="trace-11497"></a>
<a id="trace-11579"></a>
<a id="trace-11593"></a>
<a id="trace-11608"></a>
<a id="trace-11624"></a>
<a id="trace-11633"></a>
<a id="trace-11649"></a>
<a id="trace-11657"></a>
<a id="trace-11728"></a>
<a id="trace-11737"></a>
<a id="trace-11751"></a>
<a id="trace-11767"></a>
<a id="trace-11775"></a>
<a id="trace-11783"></a>
<a id="trace-11805"></a>
<a id="trace-11813"></a>
<a id="trace-11825"></a>
<a id="trace-11831"></a>
<a id="trace-11908"></a>
<a id="trace-11921"></a>
<a id="trace-11929"></a>
<a id="trace-11937"></a>
<a id="trace-11953"></a>
<a id="trace-11962"></a>
<a id="trace-11973"></a>
<a id="trace-11982"></a>
<a id="trace-11999"></a>
<a id="trace-12012"></a>
<a id="trace-12087"></a>
<a id="trace-12100"></a>
<a id="trace-12116"></a>
<a id="trace-12121"></a>
<a id="trace-12135"></a>
<a id="trace-12275"></a>
<a id="trace-12288"></a>
<a id="trace-12306"></a>
<a id="trace-12318"></a>
<a id="trace-12323"></a>
<a id="trace-12403"></a>
<a id="trace-12411"></a>
<a id="trace-12463"></a>
<a id="trace-12467"></a>
<a id="trace-12483"></a>
<a id="trace-12492"></a>
<a id="trace-12500"></a>
<a id="trace-12507"></a>
<a id="trace-12520"></a>
<a id="trace-12525"></a>
<a id="trace-12594"></a>
<a id="trace-12600"></a>
<a id="trace-12612"></a>
<a id="trace-12625"></a>
<a id="trace-12635"></a>
<a id="trace-12639"></a>
<a id="trace-12653"></a>
<a id="trace-12660"></a>
<a id="trace-12668"></a>
<a id="trace-12673"></a>
<a id="trace-12745"></a>
<a id="trace-12761"></a>
<a id="trace-12772"></a>
<a id="trace-12778"></a>
<a id="trace-12793"></a>
<a id="trace-12807"></a>
<a id="trace-12814"></a>
<a id="trace-12825"></a>
<a id="trace-12838"></a>
<a id="trace-12850"></a>
<a id="trace-12921"></a>
<a id="trace-12927"></a>
<a id="trace-12941"></a>
<a id="trace-12946"></a>
<a id="trace-12956"></a>
<a id="trace-12962"></a>
<a id="trace-12973"></a>
<a id="trace-12989"></a>
<a id="trace-12997"></a>
<a id="trace-13004"></a>
<a id="trace-13077"></a>
<a id="trace-13086"></a>
<a id="trace-13101"></a>
<a id="trace-13109"></a>
<a id="trace-13130"></a>
<a id="trace-13142"></a>
<a id="trace-13151"></a>
<a id="trace-13161"></a>
<a id="trace-13172"></a>
<a id="trace-13179"></a>
<a id="trace-13247"></a>
<a id="trace-13255"></a>
<a id="trace-13269"></a>
<a id="trace-13275"></a>
<a id="trace-13289"></a>
<a id="trace-13305"></a>
<a id="trace-13319"></a>
<a id="trace-13324"></a>
<a id="trace-13332"></a>
<a id="trace-13337"></a>
<a id="trace-13411"></a>
<a id="trace-13420"></a>
<a id="trace-13431"></a>
<a id="trace-13438"></a>
<a id="trace-13450"></a>
<a id="trace-13459"></a>
<a id="trace-13468"></a>
<a id="trace-13476"></a>
<a id="trace-13503"></a>
<a id="trace-13581"></a>
<a id="trace-13588"></a>
<a id="trace-13603"></a>
<a id="trace-13610"></a>
<a id="trace-13618"></a>
<a id="trace-13629"></a>
<a id="trace-13641"></a>
<a id="trace-13647"></a>
<a id="trace-13660"></a>
<a id="trace-13667"></a>
<a id="trace-13742"></a>
<a id="trace-13751"></a>
<a id="trace-13764"></a>
<a id="trace-13769"></a>
<a id="trace-13783"></a>
<a id="trace-13793"></a>
<a id="trace-13805"></a>
<a id="trace-13812"></a>
<a id="trace-13824"></a>
<a id="trace-13829"></a>
<a id="trace-13898"></a>
<a id="trace-13905"></a>
<a id="trace-13919"></a>
<a id="trace-13927"></a>
<a id="trace-13944"></a>
<a id="trace-13949"></a>
<a id="trace-13963"></a>
<a id="trace-13974"></a>
<a id="trace-13984"></a>
<a id="trace-13990"></a>
<a id="trace-14061"></a>
<a id="trace-14069"></a>
<a id="trace-14082"></a>
<a id="trace-14087"></a>
<a id="trace-14102"></a>
<a id="trace-14108"></a>
<a id="trace-14118"></a>
<a id="trace-14123"></a>
<a id="trace-14139"></a>
<a id="trace-14148"></a>
<a id="trace-14221"></a>
<a id="trace-14233"></a>
<a id="trace-14247"></a>
<a id="trace-14252"></a>
<a id="trace-14261"></a>
<a id="trace-14267"></a>
<a id="trace-14281"></a>
<a id="trace-14288"></a>
<a id="trace-14302"></a>
<a id="trace-14307"></a>
<a id="trace-14380"></a>
<a id="trace-14390"></a>
<a id="trace-14399"></a>
<a id="trace-14405"></a>
<a id="trace-14417"></a>
<a id="trace-14427"></a>
<a id="trace-14446"></a>
<a id="trace-14451"></a>
<a id="trace-14465"></a>
<a id="trace-14470"></a>
<a id="trace-14538"></a>
<a id="trace-14544"></a>
<a id="trace-14556"></a>
<a id="trace-14566"></a>
<a id="trace-14580"></a>
<a id="trace-14587"></a>
<a id="trace-14601"></a>
<a id="trace-14606"></a>
<a id="trace-14615"></a>
<a id="trace-14622"></a>
<a id="trace-14700"></a>
<a id="trace-14710"></a>
<a id="trace-14724"></a>
<a id="trace-14730"></a>
<a id="trace-14743"></a>
<a id="trace-14751"></a>
<a id="trace-14760"></a>
<a id="trace-14769"></a>
<a id="trace-14781"></a>
<a id="trace-14788"></a>
<a id="trace-14861"></a>
<a id="trace-14868"></a>
<a id="trace-14882"></a>
<a id="trace-14887"></a>
<a id="trace-14901"></a>
<a id="trace-14909"></a>
<a id="trace-14921"></a>
<a id="trace-14930"></a>
<a id="trace-14942"></a>
<a id="trace-14950"></a>
<a id="trace-15023"></a>
<a id="trace-15029"></a>
<a id="trace-15038"></a>
<a id="trace-15043"></a>
<a id="trace-15057"></a>
<a id="trace-15066"></a>
<a id="trace-15079"></a>
<a id="trace-15084"></a>
<a id="trace-15098"></a>
<a id="trace-15109"></a>
<a id="trace-15180"></a>
<a id="trace-15188"></a>
<a id="trace-15200"></a>
<a id="trace-15207"></a>
<a id="trace-15222"></a>
<a id="trace-15228"></a>
<a id="trace-15244"></a>
<a id="trace-15249"></a>
<a id="trace-15258"></a>
<a id="trace-15263"></a>
<a id="trace-15337"></a>
<a id="trace-15347"></a>
<a id="trace-15359"></a>
<a id="trace-15372"></a>
<a id="trace-15386"></a>
<a id="trace-15392"></a>
<a id="trace-15403"></a>
<a id="trace-15409"></a>
<a id="trace-15423"></a>
<a id="trace-15430"></a>
<a id="trace-15503"></a>
<a id="trace-15509"></a>
<a id="trace-15521"></a>
<a id="trace-15528"></a>
<a id="trace-15537"></a>
<a id="trace-15545"></a>
<a id="trace-15560"></a>
<a id="trace-15567"></a>
<a id="trace-15586"></a>
<a id="trace-15594"></a>
<a id="trace-15670"></a>
<a id="trace-15676"></a>
<a id="trace-15684"></a>
<a id="trace-15689"></a>
<a id="trace-15700"></a>
<a id="trace-15710"></a>
<a id="trace-15723"></a>
<a id="trace-15730"></a>
<a id="trace-15744"></a>
<a id="trace-15751"></a>
<a id="trace-15878"></a>
<a id="trace-15890"></a>
<a id="trace-15908"></a>
<a id="trace-15920"></a>
<a id="trace-15935"></a>
<a id="trace-15942"></a>
<a id="trace-15955"></a>
<a id="trace-15963"></a>
<a id="trace-15973"></a>
<a id="trace-15981"></a>
<a id="trace-16055"></a>
<a id="trace-16064"></a>
<a id="trace-16078"></a>
<a id="trace-16141"></a>
<a id="trace-16154"></a>
<a id="trace-16168"></a>
<a id="trace-16183"></a>
<a id="trace-16189"></a>
<a id="trace-16210"></a>
<a id="trace-16220"></a>
<a id="trace-16294"></a>
<a id="trace-16303"></a>
<a id="trace-16317"></a>
<a id="trace-16322"></a>
<a id="trace-16334"></a>
<a id="trace-16399"></a>
<a id="trace-16416"></a>
<a id="trace-16425"></a>
<a id="trace-16442"></a>
<a id="trace-16448"></a>
<a id="trace-16528"></a>
<a id="trace-16545"></a>
<a id="trace-16554"></a>
<a id="trace-16562"></a>
<a id="trace-16576"></a>
<a id="trace-16585"></a>
<a id="trace-16598"></a>
<a id="trace-16605"></a>
<a id="trace-16620"></a>
<a id="trace-16625"></a>
<a id="trace-16751"></a>
<a id="trace-16760"></a>
<a id="trace-16774"></a>
<a id="trace-16790"></a>
<a id="trace-16805"></a>
<a id="trace-16817"></a>
<a id="trace-16835"></a>
<a id="trace-16841"></a>
<a id="trace-16853"></a>
<a id="trace-16861"></a>
- 1.60s–359.80s (×713), actor 37, squad 4 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48299101370162295, 'next_transition': 351}.
<a id="trace-502"></a>
<a id="trace-516"></a>
<a id="trace-540"></a>
<a id="trace-560"></a>
<a id="trace-573"></a>
<a id="trace-590"></a>
<a id="trace-612"></a>
<a id="trace-633"></a>
<a id="trace-734"></a>
<a id="trace-743"></a>
- 5.20s–10.70s (×10), actor 5, squad 0 (trace 502): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 435. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.220008320035685, 'next_transition': 516}.
<a id="trace-749"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 749): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 656. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36162161238151275, 'next_transition': 945}.
<a id="trace-945"></a>
- 11.20s–11.20s (×1), actor 5, squad 0 (trace 945): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 659. Next observer evidence: None.
<a id="trace-115"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 115): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3275016915707186, 'next_transition': 971}.
<a id="trace-950"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 950): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 950. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3275016915707186, 'next_transition': 971}.
<a id="trace-951"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 951): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 951. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3275016915707186, 'next_transition': 971}.
<a id="trace-971"></a>
<a id="trace-994"></a>
<a id="trace-1012"></a>
<a id="trace-1032"></a>
<a id="trace-1076"></a>
<a id="trace-1174"></a>
<a id="trace-1189"></a>
<a id="trace-1212"></a>
- 11.70s–16.25s (×8), actor 5, squad 0 (trace 971): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 951. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6224809664584973, 'next_transition': 994}.
<a id="trace-1234"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 1234): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1099. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8300017429441489, 'next_transition': 1379}.
<a id="trace-1235"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 1235): received platoon directive. Knowledge: actor memory at 15.00s, trace 1099. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8300017429441489, 'next_transition': 1379}.
<a id="trace-1379"></a>
<a id="trace-1441"></a>
<a id="trace-1462"></a>
<a id="trace-1563"></a>
<a id="trace-1587"></a>
<a id="trace-1606"></a>
<a id="trace-1629"></a>
<a id="trace-1655"></a>
- 17.25s–22.25s (×8), actor 5, squad 0 (trace 1379): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1102. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.575336064707469, 'next_transition': 1441}.
<a id="trace-1681"></a>
- 22.95s–22.95s (×1), actor 0, squad 0 (trace 1681): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1489. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020992950271724944, 'next_transition': 1780}.
<a id="trace-1780"></a>
<a id="trace-1798"></a>
<a id="trace-1809"></a>
<a id="trace-1900"></a>
<a id="trace-1918"></a>
<a id="trace-1941"></a>
<a id="trace-1950"></a>
<a id="trace-1963"></a>
<a id="trace-1974"></a>
<a id="trace-1983"></a>
<a id="trace-1992"></a>
<a id="trace-2069"></a>
<a id="trace-2079"></a>
<a id="trace-2091"></a>
- 23.75s–31.25s (×14), actor 5, squad 0 (trace 1780): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1492. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31034888141715467, 'next_transition': 1798}.
<a id="trace-2097"></a>
- 31.35s–31.35s (×1), actor 0, squad 0 (trace 2097): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 1995. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.170000870912802, 'next_transition': 2288}.
<a id="trace-2098"></a>
- 31.35s–31.35s (×1), actor 0, squad 0 (trace 2098): bounding overwatch. Knowledge: actor memory at 30.00s, trace 1995. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.170000870912802, 'next_transition': 2288}.
<a id="trace-2099"></a>
- 31.35s–31.35s (×1), actor 0, squad 0 (trace 2099): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 1995. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.170000870912802, 'next_transition': 2288}.
<a id="trace-2288"></a>
<a id="trace-2328"></a>
<a id="trace-2352"></a>
<a id="trace-2379"></a>
- 31.75s–34.25s (×4), actor 5, squad 0 (trace 2288): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1998. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4243407929234342, 'next_transition': 2328}.
<a id="trace-2476"></a>
- 35.15s–35.15s (×1), actor 0, squad 0 (trace 2476): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 2406. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25499990954791424, 'next_transition': 2493}.
<a id="trace-2493"></a>
<a id="trace-2513"></a>
- 35.75s–36.25s (×2), actor 5, squad 0 (trace 2493): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2409. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12750022570786124, 'next_transition': 2513}.
<a id="trace-2533"></a>
- 37.10s–37.10s (×1), actor 0, squad 0 (trace 2533): MoveTactically. Knowledge: actor memory at 35.00s, trace 2406. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750744546775455, 'next_transition': 2648}.
<a id="trace-2534"></a>
- 37.10s–37.10s (×1), actor 0, squad 0 (trace 2534): contact cover complete: assessment resumes closure. Knowledge: actor memory at 35.00s, trace 2406. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750744546775455, 'next_transition': 2648}.
<a id="trace-2648"></a>
- 37.25s–37.25s (×1), actor 5, squad 0 (trace 2648): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2409. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13083389851257968, 'next_transition': 2666}.
<a id="trace-2666"></a>
- 38.10s–38.10s (×1), actor 0, squad 0 (trace 2666): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 2406. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08899432868946698, 'next_transition': 2932}.
<a id="trace-2667"></a>
- 38.10s–38.10s (×1), actor 0, squad 0 (trace 2667): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2406. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08899432868946698, 'next_transition': 2932}.
<a id="trace-2932"></a>
- 38.25s–38.25s (×1), actor 5, squad 0 (trace 2932): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2409. Next observer evidence: {'until': 38.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1645431736714478, 'next_transition': 2941}.
<a id="trace-2941"></a>
- 38.40s–38.40s (×1), actor 0, squad 0 (trace 2941): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2406. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1550942242026145, 'next_transition': 3198}.
<a id="trace-3198"></a>
<a id="trace-3222"></a>
<a id="trace-3253"></a>
<a id="trace-3360"></a>
<a id="trace-3446"></a>
<a id="trace-3470"></a>
- 38.75s–42.25s (×6), actor 5, squad 0 (trace 3198): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2409. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.366655390468336, 'next_transition': 3222}.
<a id="trace-3478"></a>
- 42.30s–42.30s (×1), actor 0, squad 0 (trace 3478): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 3260. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25786421360112227, 'next_transition': 3836}.
<a id="trace-3479"></a>
- 42.30s–42.30s (×1), actor 0, squad 0 (trace 3479): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 3260. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25786421360112227, 'next_transition': 3836}.
<a id="trace-3836"></a>
<a id="trace-3861"></a>
<a id="trace-3890"></a>
<a id="trace-3914"></a>
<a id="trace-3928"></a>
<a id="trace-4044"></a>
- 42.75s–46.25s (×6), actor 5, squad 0 (trace 3836): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3263. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2698820177884293, 'next_transition': 3861}.
<a id="trace-4053"></a>
- 46.70s–46.70s (×1), actor 0, squad 0 (trace 4053): NeedSupport. Knowledge: actor memory at 45.00s, trace 3938. Next observer evidence: None.
<a id="trace-4057"></a>
<a id="trace-4082"></a>
<a id="trace-4096"></a>
<a id="trace-4111"></a>
<a id="trace-4208"></a>
<a id="trace-4239"></a>
- 46.75s–51.75s (×6), actor 5, squad 0 (trace 4057): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3941. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4408825509973677, 'next_transition': 4082}.
<a id="trace-440"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (events line 440): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4266"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 4266): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.152653 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 4266. Next observer evidence: None.
<a id="trace-4267"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 4267): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.152653 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 4267. Next observer evidence: None.
<a id="trace-4276"></a>
<a id="trace-4291"></a>
- 52.75s–53.25s (×2), actor 5, squad 0 (trace 4276): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.65s, trace 4267. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.032685257323713, 'next_transition': 4291}.
<a id="trace-4400"></a>
- 55.20s–55.20s (×1), actor 0, squad 0 (trace 4400): support established: element delivered fire on threat area. Knowledge: actor memory at 55.00s, trace 4330. Next observer evidence: None.
<a id="trace-4401"></a>
- 55.20s–55.20s (×1), actor 0, squad 0 (trace 4401): Fixing. Knowledge: actor memory at 55.00s, trace 4330. Next observer evidence: None.
<a id="trace-4408"></a>
<a id="trace-4417"></a>
<a id="trace-4450"></a>
- 55.25s–56.25s (×3), actor 5, squad 0 (trace 4408): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 4333. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4417}.
<a id="trace-4464"></a>
- 56.45s–56.45s (×1), actor 0, squad 0 (trace 4464): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 4330. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5836361573680454, 'next_transition': 4622}.
<a id="trace-4465"></a>
- 56.45s–56.45s (×1), actor 0, squad 0 (trace 4465): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 4330. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5836361573680454, 'next_transition': 4622}.
<a id="trace-4622"></a>
<a id="trace-4710"></a>
<a id="trace-4727"></a>
<a id="trace-4748"></a>
<a id="trace-4766"></a>
<a id="trace-4855"></a>
<a id="trace-4864"></a>
- 57.25s–61.25s (×7), actor 5, squad 0 (trace 4622): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 4333. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.05472053054091008, 'next_transition': 4710}.
<a id="trace-4867"></a>
- 61.25s–61.25s (×1), actor 1, squad 0 (trace 4867): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 60.00s, trace 4772. Next observer evidence: {'until': 61.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3161642914703218, 'next_transition': 4869}.
<a id="trace-4869"></a>
- 61.50s–61.50s (×1), actor 1, squad 0 (trace 4869): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 4772. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2744879403376808, 'next_transition': 5019}.
<a id="trace-4873"></a>
- 61.50s–61.50s (×1), actor 1, squad 0 (trace 4873): MoveTactically. Knowledge: actor memory at 60.00s, trace 4772. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2744879403376808, 'next_transition': 5019}.
<a id="trace-4874"></a>
- 61.50s–61.50s (×1), actor 1, squad 0 (trace 4874): Reorganise complete. Knowledge: actor memory at 60.00s, trace 4772. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2744879403376808, 'next_transition': 5019}.
<a id="trace-5019"></a>
<a id="trace-5049"></a>
<a id="trace-5068"></a>
<a id="trace-5078"></a>
- 62.25s–64.75s (×4), actor 5, squad 0 (trace 5019): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 4774. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.26632122769828, 'next_transition': 5049}.
<a id="trace-5165"></a>
- 65.90s–65.90s (×1), actor 1, squad 0 (trace 5165): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 65.00s, trace 5085. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6502806795333513, 'next_transition': 5303}.
<a id="trace-5303"></a>
<a id="trace-5316"></a>
<a id="trace-5344"></a>
<a id="trace-5350"></a>
<a id="trace-5426"></a>
<a id="trace-5433"></a>
<a id="trace-5445"></a>
- 67.75s–71.25s (×7), actor 5, squad 0 (trace 5303): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 5087. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5982942362602082, 'next_transition': 5316}.
<a id="trace-5452"></a>
- 71.65s–71.65s (×1), actor 1, squad 0 (trace 5452): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 70.00s, trace 5353. Next observer evidence: None.
<a id="trace-5558"></a>
<a id="trace-5574"></a>
<a id="trace-5616"></a>
<a id="trace-5636"></a>
<a id="trace-5646"></a>
<a id="trace-5721"></a>
<a id="trace-5728"></a>
<a id="trace-5745"></a>
<a id="trace-5753"></a>
<a id="trace-5768"></a>
<a id="trace-5780"></a>
<a id="trace-5801"></a>
<a id="trace-5813"></a>
<a id="trace-5819"></a>
<a id="trace-5895"></a>
- 71.75s–80.25s (×15), actor 5, squad 0 (trace 5558): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 5355. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.598324037961981, 'next_transition': 5574}.
<a id="trace-5899"></a>
- 80.40s–80.40s (×1), actor 1, squad 0 (trace 5899): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 80.00s, trace 5824. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07345378707731816, 'next_transition': 5917}.
<a id="trace-5917"></a>
<a id="trace-5940"></a>
<a id="trace-5960"></a>
<a id="trace-5973"></a>
<a id="trace-5981"></a>
<a id="trace-5998"></a>
<a id="trace-6005"></a>
<a id="trace-6014"></a>
<a id="trace-6092"></a>
<a id="trace-6107"></a>
<a id="trace-6119"></a>
- 80.75s–86.75s (×11), actor 5, squad 0 (trace 5917): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 5826. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8503071952590353, 'next_transition': 5940}.
<a id="trace-6127"></a>
- 87.15s–87.15s (×1), actor 1, squad 0 (trace 6127): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 6024. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07344032203088412, 'next_transition': 6238}.
<a id="trace-6128"></a>
- 87.15s–87.15s (×1), actor 1, squad 0 (trace 6128): MoveTactically. Knowledge: actor memory at 85.00s, trace 6024. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07344032203088412, 'next_transition': 6238}.
<a id="trace-6129"></a>
- 87.15s–87.15s (×1), actor 1, squad 0 (trace 6129): . Knowledge: actor memory at 85.00s, trace 6024. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07344032203088412, 'next_transition': 6238}.
<a id="trace-6238"></a>
<a id="trace-6247"></a>
<a id="trace-6267"></a>
<a id="trace-6300"></a>
<a id="trace-6312"></a>
<a id="trace-6397"></a>
<a id="trace-6413"></a>
<a id="trace-6427"></a>
- 87.25s–92.25s (×8), actor 5, squad 0 (trace 6238): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 6026. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14688064406176893, 'next_transition': 6247}.
<a id="trace-6445"></a>
- 92.90s–92.90s (×1), actor 1, squad 0 (trace 6445): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 90.00s, trace 6318. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.109161772326548, 'next_transition': 6520}.
<a id="trace-6520"></a>
<a id="trace-6528"></a>
<a id="trace-6603"></a>
<a id="trace-6628"></a>
<a id="trace-6635"></a>
<a id="trace-6645"></a>
<a id="trace-6652"></a>
<a id="trace-6662"></a>
<a id="trace-6670"></a>
<a id="trace-6683"></a>
<a id="trace-6690"></a>
<a id="trace-6767"></a>
<a id="trace-6775"></a>
<a id="trace-6814"></a>
<a id="trace-6828"></a>
<a id="trace-6842"></a>
<a id="trace-6848"></a>
<a id="trace-6864"></a>
<a id="trace-6872"></a>
<a id="trace-6949"></a>
<a id="trace-6959"></a>
<a id="trace-6978"></a>
<a id="trace-7001"></a>
<a id="trace-7016"></a>
<a id="trace-7027"></a>
<a id="trace-7047"></a>
<a id="trace-7054"></a>
- 94.25s–109.75s (×27), actor 5, squad 0 (trace 6520): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 6320. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1468874246511251, 'next_transition': 6528}.
<a id="trace-7062"></a>
- 109.90s–109.90s (×1), actor 1, squad 0 (trace 7062): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 105.00s, trace 6880. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7187}.
<a id="trace-7187"></a>
<a id="trace-7200"></a>
<a id="trace-7237"></a>
<a id="trace-7251"></a>
<a id="trace-7264"></a>
<a id="trace-7280"></a>
<a id="trace-7360"></a>
<a id="trace-7381"></a>
<a id="trace-7389"></a>
<a id="trace-7410"></a>
<a id="trace-7418"></a>
<a id="trace-7437"></a>
<a id="trace-7443"></a>
<a id="trace-7456"></a>
- 110.25s–119.25s (×14), actor 5, squad 0 (trace 7187): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 7118. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7200}.
<a id="trace-7464"></a>
- 119.65s–119.65s (×1), actor 1, squad 0 (trace 7464): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 115.00s, trace 7292. Next observer evidence: {'until': 120.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7552}.
<a id="trace-7552"></a>
- 120.65s–120.65s (×1), actor 1, squad 0 (trace 7552): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 7471. Next observer evidence: None.
<a id="trace-7661"></a>
<a id="trace-7675"></a>
<a id="trace-7681"></a>
- 120.75s–121.75s (×3), actor 5, squad 0 (trace 7661): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 7473. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300209939486123, 'next_transition': 7675}.
<a id="trace-952"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (events line 952): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 122.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.761044001162151, 'next_transition': 7717}.
<a id="trace-7686"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (trace 7686): renew committed intent (75 s lifetime). Knowledge: actor memory at 121.80s, trace 7686. Next observer evidence: {'until': 122.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.761044001162151, 'next_transition': 7717}.
<a id="trace-7717"></a>
<a id="trace-7732"></a>
<a id="trace-7742"></a>
<a id="trace-7769"></a>
<a id="trace-7849"></a>
<a id="trace-7860"></a>
<a id="trace-7874"></a>
<a id="trace-7882"></a>
<a id="trace-7897"></a>
- 122.75s–127.25s (×9), actor 5, squad 0 (trace 7717): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 121.80s, trace 7686. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5983182165017299, 'next_transition': 7732}.
<a id="trace-7902"></a>
- 127.40s–127.40s (×1), actor 1, squad 0 (trace 7902): received platoon directive. Knowledge: actor memory at 125.00s, trace 7781. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19944308036948677, 'next_transition': 8009}.
<a id="trace-8009"></a>
<a id="trace-8027"></a>
<a id="trace-8048"></a>
<a id="trace-8060"></a>
<a id="trace-8072"></a>
<a id="trace-8155"></a>
<a id="trace-8164"></a>
<a id="trace-8177"></a>
<a id="trace-8188"></a>
<a id="trace-8204"></a>
<a id="trace-8217"></a>
<a id="trace-8239"></a>
- 127.75s–133.80s (×12), actor 5, squad 0 (trace 8009): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 7783. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5983122725063212, 'next_transition': 8027}.
<a id="trace-8249"></a>
- 134.15s–134.15s (×1), actor 1, squad 0 (trace 8249): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 8077. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8379}.
<a id="trace-8379"></a>
<a id="trace-8476"></a>
<a id="trace-8498"></a>
<a id="trace-8506"></a>
<a id="trace-8518"></a>
<a id="trace-8547"></a>
<a id="trace-8623"></a>
<a id="trace-8640"></a>
<a id="trace-8650"></a>
<a id="trace-8657"></a>
<a id="trace-8676"></a>
<a id="trace-8694"></a>
- 134.80s–143.30s (×12), actor 5, squad 0 (trace 8379): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 8079. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6862123583141702, 'next_transition': 8476}.
<a id="trace-8701"></a>
- 143.65s–143.65s (×1), actor 1, squad 0 (trace 8701): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 140.00s, trace 8552. Next observer evidence: {'until': 143.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8757}.
<a id="trace-8757"></a>
<a id="trace-8772"></a>
<a id="trace-8859"></a>
<a id="trace-8869"></a>
- 143.80s–145.80s (×4), actor 5, squad 0 (trace 8757): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 8554. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8772}.
<a id="trace-8879"></a>
- 145.85s–145.85s (×1), actor 1, squad 0 (trace 8879): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 8792. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149849639665355, 'next_transition': 9058}.
<a id="trace-8880"></a>
- 145.85s–145.85s (×1), actor 1, squad 0 (trace 8880): new contact inside 100 m. Knowledge: actor memory at 145.00s, trace 8792. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149849639665355, 'next_transition': 9058}.
<a id="trace-9058"></a>
- 146.30s–146.30s (×1), actor 5, squad 0 (trace 9058): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 8794. Next observer evidence: {'until': 146.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875879716736484, 'next_transition': 9074}.
<a id="trace-9074"></a>
- 146.95s–146.95s (×1), actor 1, squad 0 (trace 9074): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 145.00s, trace 8792. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150100763170127, 'next_transition': 9089}.
<a id="trace-9076"></a>
- 146.95s–146.95s (×1), actor 1, squad 0 (trace 9076): NeedSupport. Knowledge: actor memory at 145.00s, trace 8792. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150100763170127, 'next_transition': 9089}.
<a id="trace-9089"></a>
- 147.25s–147.25s (×1), actor 1, squad 0 (trace 9089): Reorganise: completed/failed drill. Knowledge: actor memory at 145.00s, trace 8792. Next observer evidence: None.
<a id="trace-9092"></a>
- 147.25s–147.25s (×1), actor 1, squad 0 (trace 9092): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 8792. Next observer evidence: None.
<a id="trace-9093"></a>
- 147.25s–147.25s (×1), actor 1, squad 0 (trace 9093): Reorganise complete: known contact. Knowledge: actor memory at 145.00s, trace 8792. Next observer evidence: None.
<a id="trace-9142"></a>
<a id="trace-9149"></a>
<a id="trace-9194"></a>
<a id="trace-9201"></a>
<a id="trace-9276"></a>
<a id="trace-9282"></a>
- 147.30s–150.80s (×6), actor 5, squad 0 (trace 9142): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 8794. Next observer evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07873368481787187, 'next_transition': 9149}.
<a id="trace-9286"></a>
- 151.25s–151.25s (×1), actor 1, squad 0 (trace 9286): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 150.00s, trace 9204. Next observer evidence: None.
<a id="trace-9287"></a>
- 151.25s–151.25s (×1), actor 1, squad 0 (trace 9287): rearward bound: one stationary suppressing element. Knowledge: actor memory at 150.00s, trace 9204. Next observer evidence: None.
<a id="trace-9385"></a>
<a id="trace-9389"></a>
<a id="trace-9411"></a>
<a id="trace-9426"></a>
<a id="trace-9436"></a>
<a id="trace-9444"></a>
<a id="trace-9463"></a>
<a id="trace-9534"></a>
<a id="trace-9541"></a>
<a id="trace-9552"></a>
<a id="trace-9563"></a>
<a id="trace-9573"></a>
<a id="trace-9593"></a>
<a id="trace-9600"></a>
<a id="trace-9695"></a>
<a id="trace-9711"></a>
<a id="trace-9719"></a>
<a id="trace-9729"></a>
<a id="trace-9754"></a>
- 151.30s–162.80s (×19), actor 5, squad 0 (trace 9385): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 9205. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8662759375626241, 'next_transition': 9389}.
<a id="trace-9758"></a>
- 162.85s–162.85s (×1), actor 1, squad 0 (trace 9758): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 9623. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9818}.
<a id="trace-9759"></a>
- 162.85s–162.85s (×1), actor 1, squad 0 (trace 9759): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 9623. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9818}.
<a id="trace-9818"></a>
<a id="trace-9829"></a>
<a id="trace-9849"></a>
<a id="trace-9860"></a>
<a id="trace-9935"></a>
<a id="trace-9961"></a>
<a id="trace-9967"></a>
<a id="trace-9980"></a>
<a id="trace-9995"></a>
<a id="trace-10009"></a>
<a id="trace-10025"></a>
<a id="trace-10040"></a>
<a id="trace-10125"></a>
<a id="trace-10142"></a>
<a id="trace-10155"></a>
- 163.30s–172.30s (×15), actor 5, squad 0 (trace 9818): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 9624. Next observer evidence: {'until': 163.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9829}.
<a id="trace-10161"></a>
- 172.60s–172.60s (×1), actor 1, squad 0 (trace 10161): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 170.00s, trace 10049. Next observer evidence: {'until': 172.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24927898513985008, 'next_transition': 10173}.
<a id="trace-10173"></a>
<a id="trace-10197"></a>
<a id="trace-10236"></a>
<a id="trace-10307"></a>
<a id="trace-10326"></a>
<a id="trace-10342"></a>
<a id="trace-10347"></a>
<a id="trace-10356"></a>
<a id="trace-10363"></a>
<a id="trace-10375"></a>
<a id="trace-10382"></a>
<a id="trace-10453"></a>
<a id="trace-10466"></a>
<a id="trace-10475"></a>
<a id="trace-10481"></a>
<a id="trace-10496"></a>
<a id="trace-10506"></a>
<a id="trace-10513"></a>
<a id="trace-10528"></a>
<a id="trace-10597"></a>
<a id="trace-10605"></a>
<a id="trace-10613"></a>
<a id="trace-10622"></a>
<a id="trace-10631"></a>
<a id="trace-10648"></a>
<a id="trace-10670"></a>
<a id="trace-10745"></a>
<a id="trace-10751"></a>
- 172.80s–190.80s (×28), actor 5, squad 0 (trace 10173): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 10050. Next observer evidence: {'until': 173.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.034039148968167, 'next_transition': 10197}.
<a id="trace-1393"></a>
- 190.85s–190.85s (×1), actor 5, squad 0 (events line 1393): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10755"></a>
- 190.85s–190.85s (×1), actor 5, squad 0 (trace 10755): renew committed intent (75 s lifetime). Knowledge: actor memory at 190.85s, trace 10755. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10760}.
<a id="trace-10760"></a>
<a id="trace-10768"></a>
<a id="trace-10776"></a>
<a id="trace-10783"></a>
<a id="trace-10792"></a>
<a id="trace-10812"></a>
<a id="trace-10891"></a>
<a id="trace-10899"></a>
- 191.30s–195.80s (×8), actor 5, squad 0 (trace 10760): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.85s, trace 10755. Next observer evidence: {'until': 191.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10768}.
<a id="trace-10918"></a>
- 197.25s–197.25s (×1), actor 1, squad 0 (trace 10918): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 195.00s, trace 10822. Next observer evidence: None.
<a id="trace-10919"></a>
- 197.25s–197.25s (×1), actor 1, squad 0 (trace 10919): MoveTactically. Knowledge: actor memory at 195.00s, trace 10822. Next observer evidence: None.
<a id="trace-10920"></a>
- 197.25s–197.25s (×1), actor 1, squad 0 (trace 10920): traveling overwatch. Knowledge: actor memory at 195.00s, trace 10822. Next observer evidence: None.
<a id="trace-10921"></a>
- 197.25s–197.25s (×1), actor 1, squad 0 (trace 10921): . Knowledge: actor memory at 195.00s, trace 10822. Next observer evidence: None.
<a id="trace-10930"></a>
<a id="trace-10937"></a>
- 197.30s–197.80s (×2), actor 5, squad 0 (trace 10930): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 10823. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10937}.
<a id="trace-10946"></a>
- 198.25s–198.25s (×1), actor 1, squad 0 (trace 10946): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 195.00s, trace 10822. Next observer evidence: None.
<a id="trace-11003"></a>
<a id="trace-11015"></a>
<a id="trace-11027"></a>
<a id="trace-11039"></a>
<a id="trace-11117"></a>
<a id="trace-11133"></a>
<a id="trace-11151"></a>
<a id="trace-11167"></a>
<a id="trace-11173"></a>
<a id="trace-11185"></a>
<a id="trace-11209"></a>
<a id="trace-11224"></a>
<a id="trace-11294"></a>
<a id="trace-11324"></a>
<a id="trace-11338"></a>
<a id="trace-11344"></a>
<a id="trace-11372"></a>
<a id="trace-11383"></a>
<a id="trace-11394"></a>
<a id="trace-11476"></a>
<a id="trace-11486"></a>
<a id="trace-11495"></a>
- 198.30s–211.30s (×22), actor 5, squad 0 (trace 11003): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 10823. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11015}.
<a id="trace-11501"></a>
- 211.45s–211.45s (×1), actor 1, squad 0 (trace 11501): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 210.00s, trace 11398. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11577}.
<a id="trace-11577"></a>
<a id="trace-11591"></a>
<a id="trace-11606"></a>
<a id="trace-11622"></a>
<a id="trace-11631"></a>
<a id="trace-11647"></a>
<a id="trace-11655"></a>
<a id="trace-11726"></a>
<a id="trace-11735"></a>
<a id="trace-11749"></a>
<a id="trace-11765"></a>
<a id="trace-11781"></a>
<a id="trace-11803"></a>
<a id="trace-11811"></a>
<a id="trace-11906"></a>
<a id="trace-11919"></a>
<a id="trace-11927"></a>
<a id="trace-11935"></a>
<a id="trace-11960"></a>
<a id="trace-11971"></a>
<a id="trace-11997"></a>
<a id="trace-12010"></a>
<a id="trace-12085"></a>
<a id="trace-12098"></a>
<a id="trace-12114"></a>
<a id="trace-12119"></a>
- 211.80s–226.80s (×26), actor 5, squad 0 (trace 11577): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 11399. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11591}.
<a id="trace-12128"></a>
- 227.05s–227.05s (×1), actor 1, squad 0 (trace 12128): matching received arrivals: deployment leg complete. Knowledge: actor memory at 225.00s, trace 12014. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09179935137298069, 'next_transition': 12133}.
<a id="trace-12133"></a>
- 227.30s–227.30s (×1), actor 5, squad 0 (trace 12133): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 12015. Next observer evidence: {'until': 227.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06885022884856681, 'next_transition': 12140}.
<a id="trace-12140"></a>
- 227.65s–227.65s (×1), actor 1, squad 0 (trace 12140): Reorganise: completed/failed drill. Knowledge: actor memory at 225.00s, trace 12014. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12273}.
<a id="trace-12143"></a>
- 227.65s–227.65s (×1), actor 1, squad 0 (trace 12143): ReactToContact: cover and return fire. Knowledge: actor memory at 225.00s, trace 12014. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12273}.
<a id="trace-12144"></a>
- 227.65s–227.65s (×1), actor 1, squad 0 (trace 12144): bounding overwatch. Knowledge: actor memory at 225.00s, trace 12014. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12273}.
<a id="trace-12145"></a>
- 227.65s–227.65s (×1), actor 1, squad 0 (trace 12145): Reorganise complete: known contact. Knowledge: actor memory at 225.00s, trace 12014. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12273}.
<a id="trace-12273"></a>
<a id="trace-12304"></a>
<a id="trace-12316"></a>
<a id="trace-12321"></a>
<a id="trace-12401"></a>
<a id="trace-12409"></a>
- 227.80s–230.80s (×6), actor 5, squad 0 (trace 12273): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 12015. Next observer evidence: {'until': 228.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34606625267923685, 'next_transition': 12304}.
<a id="trace-12415"></a>
- 231.25s–231.25s (×1), actor 1, squad 0 (trace 12415): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 230.00s, trace 12332. Next observer evidence: {'until': 231.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12465}.
<a id="trace-12416"></a>
- 231.25s–231.25s (×1), actor 1, squad 0 (trace 12416): rearward bound: one stationary suppressing element. Knowledge: actor memory at 230.00s, trace 12332. Next observer evidence: {'until': 231.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12465}.
<a id="trace-12465"></a>
<a id="trace-12481"></a>
<a id="trace-12498"></a>
<a id="trace-12505"></a>
<a id="trace-12518"></a>
<a id="trace-12523"></a>
<a id="trace-12592"></a>
<a id="trace-12610"></a>
<a id="trace-12623"></a>
<a id="trace-12633"></a>
<a id="trace-12651"></a>
<a id="trace-12658"></a>
<a id="trace-12671"></a>
<a id="trace-12743"></a>
<a id="trace-12759"></a>
<a id="trace-12770"></a>
<a id="trace-12776"></a>
<a id="trace-12791"></a>
- 231.80s–242.30s (×18), actor 5, squad 0 (trace 12465): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 12333. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26250488833543606, 'next_transition': 12481}.
<a id="trace-12800"></a>
- 242.65s–242.65s (×1), actor 1, squad 0 (trace 12800): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 240.00s, trace 12674. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199985441507632, 'next_transition': 12805}.
<a id="trace-12801"></a>
- 242.65s–242.65s (×1), actor 1, squad 0 (trace 12801): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 240.00s, trace 12674. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199985441507632, 'next_transition': 12805}.
<a id="trace-12805"></a>
<a id="trace-12823"></a>
<a id="trace-12836"></a>
<a id="trace-12944"></a>
<a id="trace-12954"></a>
<a id="trace-12960"></a>
<a id="trace-12987"></a>
<a id="trace-13002"></a>
<a id="trace-13084"></a>
- 242.80s–250.80s (×9), actor 5, squad 0 (trace 12805): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 12675. Next observer evidence: {'until': 243.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.100058279064284, 'next_transition': 12823}.
<a id="trace-13102"></a>
- 251.30s–251.30s (×1), actor 1, squad 0 (trace 13102): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 250.00s, trace 13005. Next observer evidence: {'until': 251.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.260033188354734, 'next_transition': 13107}.
<a id="trace-13107"></a>
<a id="trace-13140"></a>
<a id="trace-13149"></a>
<a id="trace-13159"></a>
<a id="trace-13177"></a>
<a id="trace-13245"></a>
<a id="trace-13253"></a>
<a id="trace-13267"></a>
<a id="trace-13303"></a>
<a id="trace-13317"></a>
<a id="trace-13322"></a>
<a id="trace-13335"></a>
- 251.80s–259.80s (×12), actor 5, squad 0 (trace 13107): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 13006. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11101819710669221, 'next_transition': 13140}.
<a id="trace-13339"></a>
- 259.90s–259.90s (×1), actor 5, squad 0 (trace 13339): renew committed intent (75 s lifetime). Knowledge: actor memory at 259.90s, trace 13339. Next observer evidence: None.
<a id="trace-1813"></a>
- 259.90s–259.90s (×1), actor 5, squad 0 (events line 1813): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13409}.
<a id="trace-13409"></a>
<a id="trace-13429"></a>
<a id="trace-13436"></a>
<a id="trace-13457"></a>
<a id="trace-13466"></a>
<a id="trace-13474"></a>
<a id="trace-13501"></a>
- 260.30s–264.80s (×7), actor 5, squad 0 (trace 13409): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 13342. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13429}.
<a id="trace-13571"></a>
- 265.25s–265.25s (×1), actor 1, squad 0 (trace 13571): MoveTactically. Knowledge: actor memory at 265.00s, trace 13508. Next observer evidence: None.
<a id="trace-13572"></a>
- 265.25s–265.25s (×1), actor 1, squad 0 (trace 13572): traveling overwatch. Knowledge: actor memory at 265.00s, trace 13508. Next observer evidence: None.
<a id="trace-13573"></a>
- 265.25s–265.25s (×1), actor 1, squad 0 (trace 13573): received platoon directive. Knowledge: actor memory at 265.00s, trace 13508. Next observer evidence: None.
<a id="trace-13582"></a>
- 265.30s–265.30s (×1), actor 1, squad 0 (trace 13582): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 265.00s, trace 13508. Next observer evidence: {'until': 265.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13586}.
<a id="trace-13586"></a>
<a id="trace-13601"></a>
<a id="trace-13608"></a>
<a id="trace-13616"></a>
<a id="trace-13627"></a>
<a id="trace-13639"></a>
<a id="trace-13665"></a>
<a id="trace-13740"></a>
<a id="trace-13762"></a>
<a id="trace-13767"></a>
<a id="trace-13781"></a>
<a id="trace-13791"></a>
<a id="trace-13803"></a>
<a id="trace-13810"></a>
<a id="trace-13822"></a>
<a id="trace-13827"></a>
<a id="trace-13896"></a>
<a id="trace-13903"></a>
<a id="trace-13917"></a>
<a id="trace-13925"></a>
<a id="trace-13942"></a>
<a id="trace-13961"></a>
<a id="trace-13972"></a>
<a id="trace-13982"></a>
<a id="trace-14067"></a>
<a id="trace-14080"></a>
<a id="trace-14085"></a>
<a id="trace-14100"></a>
<a id="trace-14106"></a>
<a id="trace-14116"></a>
<a id="trace-14121"></a>
<a id="trace-14137"></a>
<a id="trace-14146"></a>
<a id="trace-14231"></a>
<a id="trace-14245"></a>
<a id="trace-14250"></a>
<a id="trace-14259"></a>
<a id="trace-14265"></a>
<a id="trace-14279"></a>
<a id="trace-14286"></a>
<a id="trace-14300"></a>
<a id="trace-14305"></a>
<a id="trace-14378"></a>
<a id="trace-14388"></a>
<a id="trace-14415"></a>
<a id="trace-14425"></a>
<a id="trace-14444"></a>
<a id="trace-14449"></a>
<a id="trace-14463"></a>
<a id="trace-14468"></a>
<a id="trace-14554"></a>
<a id="trace-14564"></a>
<a id="trace-14578"></a>
<a id="trace-14599"></a>
<a id="trace-14604"></a>
<a id="trace-14613"></a>
<a id="trace-14620"></a>
<a id="trace-14698"></a>
<a id="trace-14708"></a>
<a id="trace-14722"></a>
<a id="trace-14728"></a>
<a id="trace-14741"></a>
<a id="trace-14749"></a>
<a id="trace-14758"></a>
<a id="trace-14767"></a>
<a id="trace-14779"></a>
<a id="trace-14786"></a>
<a id="trace-14859"></a>
<a id="trace-14880"></a>
<a id="trace-14885"></a>
<a id="trace-14907"></a>
<a id="trace-14919"></a>
<a id="trace-14940"></a>
<a id="trace-14948"></a>
<a id="trace-15027"></a>
<a id="trace-15036"></a>
<a id="trace-15041"></a>
<a id="trace-15055"></a>
<a id="trace-15077"></a>
<a id="trace-15082"></a>
<a id="trace-15096"></a>
<a id="trace-15107"></a>
<a id="trace-15178"></a>
<a id="trace-15186"></a>
<a id="trace-15205"></a>
<a id="trace-15220"></a>
<a id="trace-15226"></a>
<a id="trace-15242"></a>
<a id="trace-15247"></a>
<a id="trace-15256"></a>
<a id="trace-15261"></a>
<a id="trace-15335"></a>
<a id="trace-15345"></a>
<a id="trace-15357"></a>
<a id="trace-15370"></a>
<a id="trace-15384"></a>
<a id="trace-15390"></a>
<a id="trace-15401"></a>
<a id="trace-15421"></a>
<a id="trace-15428"></a>
<a id="trace-15501"></a>
<a id="trace-15507"></a>
<a id="trace-15519"></a>
<a id="trace-15526"></a>
<a id="trace-15535"></a>
<a id="trace-15543"></a>
<a id="trace-15558"></a>
- 265.80s–328.30s (×107), actor 5, squad 0 (trace 13586): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 13509. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13601}.
<a id="trace-15577"></a>
- 328.90s–328.90s (×1), actor 5, squad 0 (trace 15577): renew committed intent (75 s lifetime). Knowledge: actor memory at 328.90s, trace 15577. Next observer evidence: None.
<a id="trace-2249"></a>
- 328.90s–328.90s (×1), actor 5, squad 0 (events line 2249): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 329.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15584}.
<a id="trace-15584"></a>
<a id="trace-15592"></a>
<a id="trace-15668"></a>
<a id="trace-15674"></a>
<a id="trace-15687"></a>
<a id="trace-15698"></a>
<a id="trace-15708"></a>
<a id="trace-15721"></a>
<a id="trace-15728"></a>
<a id="trace-15742"></a>
<a id="trace-15749"></a>
- 329.30s–334.80s (×11), actor 5, squad 0 (trace 15584): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 328.90s, trace 15577. Next observer evidence: {'until': 329.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15592}.
<a id="trace-15753"></a>
- 334.90s–334.90s (×1), actor 1, squad 0 (trace 15753): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 330.00s, trace 15596. Next observer evidence: {'until': 335.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15876}.
<a id="trace-15754"></a>
- 334.90s–334.90s (×1), actor 1, squad 0 (trace 15754): MoveTactically. Knowledge: actor memory at 330.00s, trace 15596. Next observer evidence: {'until': 335.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15876}.
<a id="trace-15755"></a>
- 334.90s–334.90s (×1), actor 1, squad 0 (trace 15755): traveling. Knowledge: actor memory at 330.00s, trace 15596. Next observer evidence: {'until': 335.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15876}.
<a id="trace-15756"></a>
- 334.90s–334.90s (×1), actor 1, squad 0 (trace 15756): . Knowledge: actor memory at 330.00s, trace 15596. Next observer evidence: {'until': 335.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15876}.
<a id="trace-15876"></a>
<a id="trace-15888"></a>
<a id="trace-15906"></a>
<a id="trace-15918"></a>
<a id="trace-15933"></a>
<a id="trace-15940"></a>
<a id="trace-15953"></a>
<a id="trace-15961"></a>
<a id="trace-15971"></a>
<a id="trace-15979"></a>
<a id="trace-16053"></a>
<a id="trace-16062"></a>
<a id="trace-16076"></a>
- 335.30s–341.30s (×13), actor 5, squad 0 (trace 15876): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 335.00s, trace 15812. Next observer evidence: {'until': 335.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099999999999985, 'next_transition': 15888}.
<a id="trace-16083"></a>
- 341.65s–341.65s (×1), actor 1, squad 0 (trace 16083): matching received arrivals: traveling stage complete. Knowledge: actor memory at 340.00s, trace 15982. Next observer evidence: {'until': 341.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.419999999999997, 'next_transition': 16139}.
<a id="trace-16139"></a>
<a id="trace-16152"></a>
- 341.80s–342.30s (×2), actor 5, squad 0 (trace 16139): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 340.00s, trace 15983. Next observer evidence: {'until': 342.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400000000000034, 'next_transition': 16152}.
<a id="trace-2341"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (events line 2341): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16163"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (trace 16163): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 342.70s, trace 16163. Next observer evidence: {'until': 343.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.889999999999991, 'next_transition': 16181}.
<a id="trace-16164"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (trace 16164): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 342.70s, trace 16164. Next observer evidence: {'until': 343.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.889999999999991, 'next_transition': 16181}.
<a id="trace-16181"></a>
<a id="trace-16187"></a>
<a id="trace-16208"></a>
<a id="trace-16218"></a>
<a id="trace-16301"></a>
<a id="trace-16315"></a>
<a id="trace-16320"></a>
- 343.30s–346.80s (×7), actor 5, squad 0 (trace 16181): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 342.70s, trace 16164. Next observer evidence: {'until': 343.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.706666666666673, 'next_transition': 16187}.
<a id="trace-16338"></a>
- 347.65s–347.65s (×1), actor 1, squad 0 (trace 16338): matching received arrivals: deployment leg complete. Knowledge: actor memory at 345.00s, trace 16226. Next observer evidence: None.
<a id="trace-16339"></a>
- 347.70s–347.70s (×1), actor 1, squad 0 (trace 16339): Reorganise: completed/failed drill. Knowledge: actor memory at 345.00s, trace 16226. Next observer evidence: {'until': 347.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16397}.
<a id="trace-16341"></a>
- 347.70s–347.70s (×1), actor 1, squad 0 (trace 16341): MoveTactically. Knowledge: actor memory at 345.00s, trace 16226. Next observer evidence: {'until': 347.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16397}.
<a id="trace-16342"></a>
- 347.70s–347.70s (×1), actor 1, squad 0 (trace 16342): Reorganise complete. Knowledge: actor memory at 345.00s, trace 16226. Next observer evidence: {'until': 347.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16397}.
<a id="trace-16397"></a>
<a id="trace-16414"></a>
<a id="trace-16440"></a>
<a id="trace-16446"></a>
<a id="trace-16526"></a>
<a id="trace-16543"></a>
<a id="trace-16560"></a>
<a id="trace-16574"></a>
<a id="trace-16583"></a>
<a id="trace-16603"></a>
<a id="trace-16618"></a>
<a id="trace-16623"></a>
- 347.80s–354.80s (×12), actor 5, squad 0 (trace 16397): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 16227. Next observer evidence: {'until': 348.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16414}.
<a id="trace-16627"></a>
- 354.85s–354.85s (×1), actor 1, squad 0 (trace 16627): matching received arrivals: traveling stage complete. Knowledge: actor memory at 350.00s, trace 16454. Next observer evidence: {'until': 355.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400170159123093, 'next_transition': 16749}.
<a id="trace-16749"></a>
<a id="trace-16758"></a>
<a id="trace-16772"></a>
<a id="trace-16788"></a>
<a id="trace-16803"></a>
<a id="trace-16839"></a>
<a id="trace-16851"></a>
<a id="trace-16859"></a>
- 355.30s–359.80s (×8), actor 5, squad 0 (trace 16749): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 355.00s, trace 16683. Next observer evidence: {'until': 355.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5224646629870584, 'next_transition': 16758}.

## Net delivery

254 matched order/radio deliveries; 241 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.251s; maximum 6.300s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1821: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1822: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1823: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1824: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 1995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 1997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2001: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2002: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2003: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2004: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2005: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2006: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2412: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2413: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2414: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2415: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2416: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2417: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 3260: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3266: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3267: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3268: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3269: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3270: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3271: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3938: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3942: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3944: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3945: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3946: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3947: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3948: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3949: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 4136: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 4137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 4138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 4139: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 4140: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 4141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 4142: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 4143: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 4144: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 4145: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 4146: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 4147: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 4266: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 4267: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 4330: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 4331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 4332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 4333: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 4334: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 4335: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 4336: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 4337: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 4338: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 4339: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 4340: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 4341: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 4772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 4773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4774: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4775: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 4776: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4777: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4778: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 4779: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4780: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4781: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 4782: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 5085: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 5086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 5087: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 5088: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 5089: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 5090: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 5091: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 5092: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 5093: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 5094: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 5095: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 5353: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 5354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 5355: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 5356: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 5357: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 5358: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 5359: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 5360: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 5361: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 5362: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 5363: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 5652: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 5653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 5654: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 5655: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 5656: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 5657: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 5658: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 5659: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 5660: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 5661: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 5662: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 5824: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 5825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5826: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5827: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 5828: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5829: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5830: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 5831: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5832: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5833: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 5834: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 6024: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 6025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 6026: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 6027: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 6028: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 6029: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 6030: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 6031: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 6032: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 6033: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 6034: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 6318: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 6319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 6320: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 6321: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 6322: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 6323: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 6324: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 6325: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 6326: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 6327: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 6328: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 6535: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 6536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 6537: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 6538: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 6539: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 6540: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 6541: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 6542: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 6543: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 6544: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 6545: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 6693: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 6694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 6695: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 6696: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 6697: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 6698: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 6699: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 6700: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 6701: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 6702: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 6703: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 6880: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 6881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6882: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 6883: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 6884: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 6885: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6886: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 6887: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6888: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6889: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 6890: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 7116: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 7117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 7118: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 7119: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 7120: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 7121: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 7122: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 7123: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 7124: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 7125: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 7126: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 7292: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 7293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 7294: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 7295: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 7296: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 7297: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 7298: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 7299: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 7300: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 7301: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 7302: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 7471: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 7472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 7473: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 7474: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 7475: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 7476: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 7477: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 7478: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 7479: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 7480: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 7481: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 7686: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 7781: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 7782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 7783: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 7784: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 7785: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 7786: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 7787: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 7788: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 7789: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 7790: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 7791: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 8077: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 8078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 8079: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 8080: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 8081: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 8082: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 8083: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 8084: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 8085: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 8086: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 8087: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 8385: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 8386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 8387: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 8388: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 8389: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 8390: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 8391: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 8392: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 8393: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 8394: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 8395: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 8552: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 8553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 8554: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 8555: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 8556: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 8557: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 8558: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 8559: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 8560: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 8561: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 8562: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 8792: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 8793: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 8794: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 8795: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 8796: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 8797: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 8798: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 8799: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 8800: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 8801: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 8802: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 9204: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 9205: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 9206: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 9207: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 9208: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 9209: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 9210: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 9211: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 9212: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 9213: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 9466: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 9467: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 9468: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 9469: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 9470: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 9471: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 9472: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 9473: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 9474: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 9475: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 9623: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 9624: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 9625: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 9626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 9627: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 9628: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 9629: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 9630: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 9631: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 9632: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 9864: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 9865: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 9866: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 9867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 9868: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 9869: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 9870: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 9871: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 9872: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 9873: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 10049: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 10050: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 10051: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 10052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 10053: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 10054: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 10055: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 10056: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 10057: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 10058: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 10240: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 10241: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 10242: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 10243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 10244: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 10245: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 10246: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 10247: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 10248: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 10249: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 10385: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 10386: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 10387: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 10388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 10389: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 10390: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 10391: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 10392: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 10393: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 10394: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 10532: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 10533: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 10534: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 10535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 10536: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 10537: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 10538: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 10539: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 10540: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 10541: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 10678: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 10679: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 10680: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 10681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 10682: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 10683: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 10684: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 10685: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 10686: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 10687: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.85s leader 5, trace 10755: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 10822: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 10823: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 10824: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 10825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 10826: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 10827: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 10828: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 10829: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 10830: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 10831: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 11045: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 11046: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 11047: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 11048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 11049: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 11050: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 11051: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 11052: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 11053: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 11054: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 11227: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 11228: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 11229: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 11230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 11231: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 11232: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 11233: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 11234: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 11235: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 11236: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 11398: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 11399: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 11400: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 11401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 11402: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 11403: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 11404: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 11405: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 11406: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 11407: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 11660: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 11661: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 11662: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 11663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 11664: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 11665: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 11666: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 11667: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 11668: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 11669: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 11832: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 11833: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 11834: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 11835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 11836: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 11837: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 11838: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 11839: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 11840: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 11841: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 12014: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 12015: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 12016: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 12017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 12018: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 12019: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 12020: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 12021: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 12022: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 12023: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 12332: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 12333: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 12334: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 12335: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 12336: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 12337: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 12338: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 12339: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 12340: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 12527: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 12528: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 12529: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 12530: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 12531: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 12532: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 12533: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 12534: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 12535: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 12674: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 12675: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 12676: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 12677: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 12678: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 12679: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 12680: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 12681: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 12682: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 12856: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 12857: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 12858: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 12859: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 12860: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 12861: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 12862: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 12863: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 12864: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 13005: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 13006: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 13007: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 13008: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 13009: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 13010: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 13011: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 13012: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 13013: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 13180: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 13181: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 13182: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 13183: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 13184: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 13185: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 13186: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 13187: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 13188: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.90s leader 5, trace 13339: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 13341: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 13342: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 13343: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 13344: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 13345: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 13346: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 13347: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 13348: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 13349: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 13508: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 13509: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 13510: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 13511: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 13512: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 13513: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 13514: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 13515: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 13516: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 13669: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 13670: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 13671: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 13672: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 13673: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 13674: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 13675: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 13676: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 13677: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 13832: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 13833: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 13834: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 13835: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 13836: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 13837: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 13838: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 13839: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 13840: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 13991: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 13992: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 13993: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 13994: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 13995: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 13996: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 13997: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 13998: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 13999: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 14153: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 14154: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 14155: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 14156: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 14157: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 14158: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 14159: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 14160: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 14161: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 14310: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 14311: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 14312: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 14313: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 14314: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 14315: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 14316: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 14317: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 14318: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 14471: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 14472: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 14473: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 14474: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 14475: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 14476: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 14477: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 14478: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 14479: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 14624: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 14625: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 14626: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 14627: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 14628: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 14629: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 14630: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 14631: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 14632: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 14795: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 14796: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 14797: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 14798: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 14799: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 14800: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 14801: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 14802: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 14803: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 14951: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 14952: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 14953: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 14954: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 14955: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 14956: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 14957: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 14958: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 14959: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 15110: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 15111: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 15112: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 15113: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 15114: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 15115: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 15116: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 15117: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 15118: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 15265: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 15266: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 15267: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 15268: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 15269: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 15270: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 15271: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 15272: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 15273: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 15435: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 15436: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 15437: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 15438: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 15439: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 15440: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 15441: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 15442: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 15443: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 328.90s leader 5, trace 15577: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 15596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 15597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 15598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 15599: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 15600: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 15601: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 15602: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 15603: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 15604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 15811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 15812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 15813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 15814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 15815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 15816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 15817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 15818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 15819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 15982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 15983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 15984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 15985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 15986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 15987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 15988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 15989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 15990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.70s leader 5, trace 16163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.70s leader 5, trace 16164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 16226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 16227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 16228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 16229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 16230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 16231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 16232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 16233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 16234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 16454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 16455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 16456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 16457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 16458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 16459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 16460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 16461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 16462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 16682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 16683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 16684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 16685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 16686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 16687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 16688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 16689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 16690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 16863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 16864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 16865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 16866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 16867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 16868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 16869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 16870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 16871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Tern incapacitated
- 1: Reed incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
