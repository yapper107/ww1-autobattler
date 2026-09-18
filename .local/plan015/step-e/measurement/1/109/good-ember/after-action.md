# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/1/109/good-ember/battle-109-1789673652219493783`

## Battle summary

**Ember** · 360 s · 563 shots.

### Turning points

- 31.5s, squad 4: contact (events line 324). First recorded contact.
- 43.4s, squad 1: withdrawal ([trace 5380](#trace-5380)). 56.1s, squad 1: took cover and returned fire.
- 54.4s, squad 1: help call ([trace 6740](#trace-6740)). No completion observed before termination.
- 60.2s, squad 1: withdrawal ([trace 9425](#trace-9425)). 93.9s, squad 1: contact broken or rally reached: Occupy and report strength.
- 74.4s, squad 0: help call ([trace 15172](#trace-15172)). No completion observed before termination.
- 155.6s, squad 0: withdrawal ([trace 25867](#trace-25867)). 195.7s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 3 further drill types; withdrew; 29 shots, 6/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 6 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 329 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 199 shots, 0/4 lost.

### Decisions and attribution

At 36.2s, squad 1 chose took cover and returned fire ([trace 4242](#trace-4242)), followed by 0 shots and 1 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 60.2s, squad 1 chose broke contact ([trace 9425](#trace-9425)), followed by 1 shots and 0 own casualties; estimate 14.0 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1377](#trace-1377)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5671603415220604, 'next_transition': 1406}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1379](#trace-1379)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.019860085904038, 'next_transition': 1840}.

### Communication

209 matched deliveries (mean 0.45s, max 5.35s); 318 explicit drops; 4 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 31.50s, squad 4, contact, evidence events line 324: First recorded contact; .
- 43.40s, squad 1, withdrawal, evidence 5380: BreakContact: believed ratio at least two without superiority; 56.1s, squad 1: took cover and returned fire.
- 54.40s, squad 1, help call, evidence 6740: NeedSupport; No completion observed before termination.
- 60.25s, squad 1, withdrawal, evidence 9425: BreakContact: believed ratio at least two without superiority; 93.9s, squad 1: contact broken or rally reached: Occupy and report strength.
- 74.40s, squad 0, help call, evidence 15172: NeedSupport; No completion observed before termination.
- 155.55s, squad 0, withdrawal, evidence 25867: BreakContact: believed ratio at least two without superiority; 195.7s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.078269305746037, 'next_transition': 957}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.078269305746037, 'next_transition': 957}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.078269305746037, 'next_transition': 957}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.309475965578823, 'next_transition': 142}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.309475965578823, 'next_transition': 142}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.309475965578823, 'next_transition': 142}.
<a id="trace-703"></a>
<a id="trace-705"></a>
<a id="trace-730"></a>
<a id="trace-732"></a>
<a id="trace-771"></a>
<a id="trace-773"></a>
<a id="trace-794"></a>
<a id="trace-796"></a>
<a id="trace-820"></a>
<a id="trace-822"></a>
<a id="trace-843"></a>
<a id="trace-845"></a>
<a id="trace-876"></a>
<a id="trace-878"></a>
<a id="trace-961"></a>
<a id="trace-963"></a>
<a id="trace-994"></a>
<a id="trace-996"></a>
<a id="trace-1025"></a>
<a id="trace-1027"></a>
<a id="trace-1070"></a>
<a id="trace-1072"></a>
<a id="trace-1093"></a>
<a id="trace-1095"></a>
<a id="trace-1129"></a>
<a id="trace-1131"></a>
<a id="trace-1161"></a>
<a id="trace-1163"></a>
<a id="trace-1202"></a>
<a id="trace-1204"></a>
<a id="trace-1221"></a>
<a id="trace-1223"></a>
<a id="trace-1240"></a>
<a id="trace-1242"></a>
<a id="trace-1331"></a>
<a id="trace-1333"></a>
<a id="trace-1353"></a>
<a id="trace-1355"></a>
<a id="trace-1373"></a>
<a id="trace-1375"></a>
<a id="trace-1410"></a>
<a id="trace-1412"></a>
<a id="trace-1443"></a>
<a id="trace-1445"></a>
<a id="trace-1469"></a>
<a id="trace-1471"></a>
<a id="trace-1812"></a>
<a id="trace-1814"></a>
<a id="trace-1836"></a>
<a id="trace-1838"></a>
<a id="trace-2083"></a>
<a id="trace-2085"></a>
<a id="trace-2108"></a>
<a id="trace-2110"></a>
<a id="trace-2204"></a>
<a id="trace-2206"></a>
<a id="trace-2244"></a>
<a id="trace-2246"></a>
<a id="trace-2283"></a>
<a id="trace-2285"></a>
<a id="trace-2320"></a>
<a id="trace-2322"></a>
<a id="trace-2651"></a>
<a id="trace-2653"></a>
<a id="trace-2683"></a>
<a id="trace-2685"></a>
<a id="trace-2729"></a>
<a id="trace-2731"></a>
<a id="trace-2761"></a>
<a id="trace-2763"></a>
<a id="trace-2795"></a>
<a id="trace-2797"></a>
<a id="trace-2835"></a>
<a id="trace-2837"></a>
<a id="trace-2936"></a>
<a id="trace-2938"></a>
<a id="trace-2974"></a>
<a id="trace-2976"></a>
<a id="trace-3004"></a>
<a id="trace-3006"></a>
<a id="trace-3038"></a>
<a id="trace-3040"></a>
<a id="trace-3072"></a>
<a id="trace-3074"></a>
<a id="trace-3098"></a>
<a id="trace-3100"></a>
<a id="trace-3129"></a>
<a id="trace-3131"></a>
<a id="trace-3159"></a>
<a id="trace-3161"></a>
<a id="trace-3196"></a>
<a id="trace-3198"></a>
<a id="trace-3233"></a>
<a id="trace-3235"></a>
<a id="trace-3317"></a>
<a id="trace-3319"></a>
<a id="trace-3340"></a>
<a id="trace-3342"></a>
<a id="trace-3703"></a>
<a id="trace-3705"></a>
<a id="trace-3719"></a>
<a id="trace-3721"></a>
<a id="trace-3744"></a>
<a id="trace-3746"></a>
<a id="trace-3767"></a>
<a id="trace-3769"></a>
<a id="trace-3795"></a>
<a id="trace-3797"></a>
<a id="trace-3817"></a>
<a id="trace-3819"></a>
<a id="trace-3841"></a>
<a id="trace-3843"></a>
<a id="trace-3858"></a>
<a id="trace-3860"></a>
<a id="trace-3941"></a>
<a id="trace-3943"></a>
<a id="trace-3957"></a>
<a id="trace-3959"></a>
<a id="trace-3977"></a>
<a id="trace-3979"></a>
<a id="trace-3995"></a>
<a id="trace-3997"></a>
<a id="trace-4018"></a>
<a id="trace-4020"></a>
<a id="trace-4034"></a>
<a id="trace-4036"></a>
<a id="trace-4056"></a>
<a id="trace-4058"></a>
<a id="trace-4071"></a>
<a id="trace-4073"></a>
<a id="trace-4098"></a>
<a id="trace-4100"></a>
<a id="trace-4111"></a>
<a id="trace-4113"></a>
<a id="trace-4194"></a>
<a id="trace-4196"></a>
<a id="trace-4210"></a>
<a id="trace-4212"></a>
<a id="trace-4238"></a>
<a id="trace-4240"></a>
<a id="trace-4732"></a>
<a id="trace-4734"></a>
<a id="trace-4749"></a>
<a id="trace-4751"></a>
<a id="trace-4762"></a>
<a id="trace-4764"></a>
<a id="trace-4780"></a>
<a id="trace-4782"></a>
<a id="trace-4793"></a>
<a id="trace-4795"></a>
<a id="trace-4815"></a>
<a id="trace-4817"></a>
<a id="trace-5170"></a>
<a id="trace-5172"></a>
<a id="trace-5254"></a>
<a id="trace-5256"></a>
<a id="trace-5266"></a>
<a id="trace-5268"></a>
<a id="trace-5292"></a>
<a id="trace-5294"></a>
<a id="trace-5307"></a>
<a id="trace-5309"></a>
<a id="trace-5331"></a>
<a id="trace-5333"></a>
<a id="trace-5351"></a>
<a id="trace-5353"></a>
<a id="trace-5372"></a>
<a id="trace-5374"></a>
<a id="trace-5660"></a>
<a id="trace-5662"></a>
<a id="trace-5682"></a>
<a id="trace-5684"></a>
<a id="trace-5693"></a>
<a id="trace-5695"></a>
<a id="trace-6088"></a>
<a id="trace-6090"></a>
<a id="trace-6104"></a>
<a id="trace-6106"></a>
<a id="trace-6140"></a>
<a id="trace-6142"></a>
<a id="trace-6161"></a>
<a id="trace-6163"></a>
<a id="trace-6183"></a>
<a id="trace-6185"></a>
<a id="trace-6214"></a>
<a id="trace-6216"></a>
<a id="trace-6244"></a>
<a id="trace-6246"></a>
<a id="trace-6287"></a>
<a id="trace-6289"></a>
<a id="trace-6322"></a>
<a id="trace-6324"></a>
<a id="trace-6345"></a>
<a id="trace-6347"></a>
<a id="trace-6470"></a>
<a id="trace-6472"></a>
<a id="trace-6509"></a>
<a id="trace-6511"></a>
<a id="trace-6558"></a>
<a id="trace-6560"></a>
<a id="trace-6591"></a>
<a id="trace-6593"></a>
<a id="trace-6625"></a>
<a id="trace-6627"></a>
<a id="trace-6658"></a>
<a id="trace-6660"></a>
<a id="trace-6685"></a>
<a id="trace-6687"></a>
<a id="trace-6701"></a>
<a id="trace-6703"></a>
<a id="trace-6732"></a>
<a id="trace-6734"></a>
<a id="trace-6862"></a>
<a id="trace-6864"></a>
<a id="trace-7508"></a>
<a id="trace-7510"></a>
<a id="trace-7537"></a>
<a id="trace-7539"></a>
<a id="trace-7690"></a>
<a id="trace-7692"></a>
<a id="trace-8147"></a>
<a id="trace-8149"></a>
<a id="trace-8186"></a>
<a id="trace-8188"></a>
<a id="trace-8636"></a>
<a id="trace-8638"></a>
<a id="trace-8734"></a>
<a id="trace-8736"></a>
<a id="trace-8775"></a>
<a id="trace-8777"></a>
<a id="trace-8829"></a>
<a id="trace-8831"></a>
<a id="trace-9305"></a>
<a id="trace-9307"></a>
<a id="trace-9420"></a>
<a id="trace-9422"></a>
<a id="trace-9650"></a>
<a id="trace-9652"></a>
<a id="trace-9677"></a>
<a id="trace-9679"></a>
<a id="trace-9697"></a>
<a id="trace-9699"></a>
<a id="trace-9731"></a>
<a id="trace-9733"></a>
<a id="trace-9755"></a>
<a id="trace-9757"></a>
<a id="trace-9793"></a>
<a id="trace-9795"></a>
<a id="trace-13660"></a>
<a id="trace-13662"></a>
<a id="trace-13687"></a>
<a id="trace-13689"></a>
<a id="trace-13714"></a>
<a id="trace-13716"></a>
<a id="trace-13812"></a>
<a id="trace-13814"></a>
<a id="trace-13863"></a>
<a id="trace-13865"></a>
<a id="trace-13935"></a>
<a id="trace-13937"></a>
<a id="trace-13997"></a>
<a id="trace-13999"></a>
<a id="trace-14186"></a>
<a id="trace-14188"></a>
<a id="trace-14246"></a>
<a id="trace-14248"></a>
<a id="trace-14314"></a>
<a id="trace-14316"></a>
<a id="trace-14397"></a>
<a id="trace-14399"></a>
<a id="trace-14466"></a>
<a id="trace-14468"></a>
<a id="trace-14605"></a>
<a id="trace-14607"></a>
<a id="trace-14673"></a>
<a id="trace-14675"></a>
<a id="trace-14752"></a>
<a id="trace-14754"></a>
<a id="trace-14873"></a>
<a id="trace-14875"></a>
<a id="trace-14951"></a>
<a id="trace-14953"></a>
<a id="trace-15003"></a>
<a id="trace-15005"></a>
<a id="trace-15062"></a>
<a id="trace-15064"></a>
<a id="trace-15099"></a>
<a id="trace-15101"></a>
<a id="trace-15164"></a>
<a id="trace-15166"></a>
<a id="trace-15189"></a>
<a id="trace-15191"></a>
<a id="trace-15282"></a>
<a id="trace-15284"></a>
<a id="trace-15314"></a>
<a id="trace-15316"></a>
<a id="trace-15999"></a>
<a id="trace-16001"></a>
<a id="trace-16046"></a>
<a id="trace-16048"></a>
<a id="trace-16092"></a>
<a id="trace-16094"></a>
<a id="trace-16151"></a>
<a id="trace-16153"></a>
<a id="trace-16197"></a>
<a id="trace-16199"></a>
<a id="trace-16236"></a>
<a id="trace-16238"></a>
<a id="trace-16295"></a>
<a id="trace-16297"></a>
<a id="trace-16335"></a>
<a id="trace-16337"></a>
<a id="trace-16441"></a>
<a id="trace-16443"></a>
<a id="trace-16480"></a>
<a id="trace-16482"></a>
<a id="trace-16507"></a>
<a id="trace-16509"></a>
<a id="trace-16526"></a>
<a id="trace-16528"></a>
<a id="trace-16571"></a>
<a id="trace-16573"></a>
<a id="trace-16623"></a>
<a id="trace-16625"></a>
<a id="trace-16689"></a>
<a id="trace-16691"></a>
<a id="trace-16736"></a>
<a id="trace-16738"></a>
<a id="trace-16812"></a>
<a id="trace-16814"></a>
<a id="trace-16885"></a>
<a id="trace-16887"></a>
<a id="trace-17036"></a>
<a id="trace-17038"></a>
<a id="trace-17109"></a>
<a id="trace-17111"></a>
<a id="trace-17198"></a>
<a id="trace-17200"></a>
<a id="trace-17272"></a>
<a id="trace-17274"></a>
<a id="trace-17326"></a>
<a id="trace-17328"></a>
<a id="trace-17384"></a>
<a id="trace-17386"></a>
<a id="trace-17429"></a>
<a id="trace-17431"></a>
<a id="trace-17466"></a>
<a id="trace-17468"></a>
<a id="trace-17515"></a>
<a id="trace-17517"></a>
<a id="trace-17542"></a>
<a id="trace-17544"></a>
<a id="trace-17624"></a>
<a id="trace-17626"></a>
<a id="trace-17642"></a>
<a id="trace-17644"></a>
<a id="trace-17665"></a>
<a id="trace-17667"></a>
<a id="trace-17698"></a>
<a id="trace-17700"></a>
<a id="trace-17728"></a>
<a id="trace-17730"></a>
<a id="trace-19516"></a>
<a id="trace-19518"></a>
<a id="trace-19620"></a>
<a id="trace-19622"></a>
<a id="trace-19639"></a>
<a id="trace-19641"></a>
<a id="trace-19670"></a>
<a id="trace-19672"></a>
<a id="trace-19739"></a>
<a id="trace-19741"></a>
<a id="trace-19822"></a>
<a id="trace-19824"></a>
<a id="trace-19852"></a>
<a id="trace-19854"></a>
<a id="trace-19887"></a>
<a id="trace-19889"></a>
<a id="trace-19915"></a>
<a id="trace-19917"></a>
<a id="trace-19939"></a>
<a id="trace-19941"></a>
<a id="trace-19957"></a>
<a id="trace-19959"></a>
<a id="trace-19981"></a>
<a id="trace-19983"></a>
<a id="trace-19997"></a>
<a id="trace-19999"></a>
<a id="trace-20020"></a>
<a id="trace-20022"></a>
<a id="trace-20042"></a>
<a id="trace-20044"></a>
<a id="trace-20129"></a>
<a id="trace-20131"></a>
<a id="trace-20146"></a>
<a id="trace-20148"></a>
<a id="trace-20169"></a>
<a id="trace-20171"></a>
<a id="trace-20182"></a>
<a id="trace-20184"></a>
<a id="trace-20200"></a>
<a id="trace-20202"></a>
<a id="trace-20222"></a>
<a id="trace-20224"></a>
<a id="trace-20249"></a>
<a id="trace-20251"></a>
<a id="trace-20263"></a>
<a id="trace-20265"></a>
<a id="trace-20281"></a>
<a id="trace-20283"></a>
<a id="trace-20294"></a>
<a id="trace-20296"></a>
<a id="trace-20378"></a>
<a id="trace-20380"></a>
<a id="trace-20391"></a>
<a id="trace-20393"></a>
<a id="trace-20406"></a>
<a id="trace-20408"></a>
<a id="trace-20426"></a>
<a id="trace-20428"></a>
<a id="trace-20444"></a>
<a id="trace-20446"></a>
<a id="trace-20459"></a>
<a id="trace-20461"></a>
<a id="trace-20478"></a>
<a id="trace-20480"></a>
<a id="trace-20548"></a>
<a id="trace-20550"></a>
<a id="trace-20569"></a>
<a id="trace-20571"></a>
<a id="trace-20581"></a>
<a id="trace-20583"></a>
<a id="trace-20664"></a>
<a id="trace-20666"></a>
<a id="trace-20679"></a>
<a id="trace-20681"></a>
<a id="trace-20698"></a>
<a id="trace-20700"></a>
<a id="trace-20714"></a>
<a id="trace-20716"></a>
<a id="trace-20731"></a>
<a id="trace-20733"></a>
<a id="trace-20745"></a>
<a id="trace-20747"></a>
<a id="trace-20766"></a>
<a id="trace-20768"></a>
<a id="trace-20779"></a>
<a id="trace-20781"></a>
<a id="trace-20798"></a>
<a id="trace-20800"></a>
<a id="trace-20809"></a>
<a id="trace-20811"></a>
<a id="trace-20885"></a>
<a id="trace-20887"></a>
<a id="trace-20892"></a>
<a id="trace-20894"></a>
<a id="trace-20913"></a>
<a id="trace-20915"></a>
<a id="trace-20928"></a>
<a id="trace-20930"></a>
<a id="trace-20945"></a>
<a id="trace-20947"></a>
<a id="trace-20956"></a>
<a id="trace-20958"></a>
<a id="trace-20972"></a>
<a id="trace-20974"></a>
<a id="trace-20978"></a>
<a id="trace-20980"></a>
<a id="trace-20993"></a>
<a id="trace-20995"></a>
<a id="trace-21001"></a>
<a id="trace-21003"></a>
<a id="trace-21078"></a>
<a id="trace-21080"></a>
<a id="trace-21090"></a>
<a id="trace-21092"></a>
<a id="trace-21119"></a>
<a id="trace-21121"></a>
<a id="trace-21146"></a>
<a id="trace-21148"></a>
<a id="trace-21160"></a>
<a id="trace-21162"></a>
<a id="trace-21205"></a>
<a id="trace-21207"></a>
<a id="trace-21215"></a>
<a id="trace-21217"></a>
<a id="trace-21230"></a>
<a id="trace-21232"></a>
<a id="trace-21246"></a>
<a id="trace-21248"></a>
<a id="trace-21321"></a>
<a id="trace-21323"></a>
<a id="trace-21330"></a>
<a id="trace-21332"></a>
<a id="trace-21346"></a>
<a id="trace-21348"></a>
<a id="trace-21357"></a>
<a id="trace-21359"></a>
<a id="trace-21374"></a>
<a id="trace-21376"></a>
<a id="trace-21387"></a>
<a id="trace-21389"></a>
<a id="trace-21403"></a>
<a id="trace-21405"></a>
<a id="trace-21411"></a>
<a id="trace-21413"></a>
<a id="trace-21428"></a>
<a id="trace-21430"></a>
<a id="trace-21439"></a>
<a id="trace-21441"></a>
<a id="trace-21515"></a>
<a id="trace-21517"></a>
<a id="trace-21526"></a>
<a id="trace-21528"></a>
<a id="trace-21549"></a>
<a id="trace-21551"></a>
<a id="trace-21614"></a>
<a id="trace-21616"></a>
<a id="trace-21632"></a>
<a id="trace-21634"></a>
<a id="trace-21650"></a>
<a id="trace-21652"></a>
<a id="trace-21668"></a>
<a id="trace-21670"></a>
<a id="trace-21675"></a>
<a id="trace-21677"></a>
<a id="trace-21694"></a>
<a id="trace-21696"></a>
<a id="trace-21705"></a>
<a id="trace-21707"></a>
<a id="trace-21777"></a>
<a id="trace-21779"></a>
<a id="trace-21786"></a>
<a id="trace-21788"></a>
<a id="trace-21807"></a>
<a id="trace-21809"></a>
<a id="trace-22279"></a>
<a id="trace-22281"></a>
<a id="trace-22298"></a>
<a id="trace-22300"></a>
<a id="trace-22319"></a>
<a id="trace-22321"></a>
<a id="trace-22346"></a>
<a id="trace-22348"></a>
<a id="trace-22354"></a>
<a id="trace-22356"></a>
<a id="trace-22372"></a>
<a id="trace-22374"></a>
<a id="trace-22388"></a>
<a id="trace-22390"></a>
<a id="trace-22465"></a>
<a id="trace-22467"></a>
<a id="trace-22475"></a>
<a id="trace-22477"></a>
<a id="trace-22494"></a>
<a id="trace-22496"></a>
<a id="trace-22504"></a>
<a id="trace-22506"></a>
<a id="trace-22518"></a>
<a id="trace-22520"></a>
<a id="trace-25302"></a>
<a id="trace-25304"></a>
<a id="trace-25323"></a>
<a id="trace-25325"></a>
<a id="trace-25340"></a>
<a id="trace-25342"></a>
<a id="trace-25358"></a>
<a id="trace-25360"></a>
<a id="trace-25375"></a>
<a id="trace-25377"></a>
<a id="trace-25452"></a>
<a id="trace-25454"></a>
<a id="trace-25463"></a>
<a id="trace-25465"></a>
<a id="trace-25484"></a>
<a id="trace-25486"></a>
<a id="trace-25501"></a>
<a id="trace-25503"></a>
<a id="trace-25518"></a>
<a id="trace-25520"></a>
<a id="trace-25531"></a>
<a id="trace-25533"></a>
<a id="trace-25549"></a>
<a id="trace-25551"></a>
<a id="trace-25556"></a>
<a id="trace-25558"></a>
<a id="trace-25573"></a>
<a id="trace-25575"></a>
<a id="trace-25586"></a>
<a id="trace-25588"></a>
<a id="trace-25657"></a>
<a id="trace-25659"></a>
<a id="trace-25671"></a>
<a id="trace-25673"></a>
<a id="trace-25685"></a>
<a id="trace-25687"></a>
<a id="trace-25697"></a>
<a id="trace-25699"></a>
<a id="trace-25715"></a>
<a id="trace-25717"></a>
<a id="trace-25728"></a>
<a id="trace-25730"></a>
<a id="trace-25744"></a>
<a id="trace-25746"></a>
<a id="trace-25752"></a>
<a id="trace-25754"></a>
<a id="trace-25769"></a>
<a id="trace-25771"></a>
<a id="trace-25782"></a>
<a id="trace-25784"></a>
<a id="trace-25855"></a>
<a id="trace-25857"></a>
<a id="trace-26005"></a>
<a id="trace-26007"></a>
<a id="trace-26022"></a>
<a id="trace-26024"></a>
<a id="trace-26039"></a>
<a id="trace-26041"></a>
<a id="trace-26060"></a>
<a id="trace-26062"></a>
<a id="trace-26070"></a>
<a id="trace-26072"></a>
<a id="trace-26088"></a>
<a id="trace-26090"></a>
<a id="trace-26101"></a>
<a id="trace-26103"></a>
<a id="trace-26120"></a>
<a id="trace-26122"></a>
<a id="trace-26130"></a>
<a id="trace-26132"></a>
<a id="trace-26203"></a>
<a id="trace-26205"></a>
<a id="trace-26217"></a>
<a id="trace-26219"></a>
<a id="trace-26231"></a>
<a id="trace-26233"></a>
<a id="trace-26244"></a>
<a id="trace-26246"></a>
<a id="trace-26259"></a>
<a id="trace-26261"></a>
<a id="trace-26270"></a>
<a id="trace-26272"></a>
<a id="trace-26285"></a>
<a id="trace-26287"></a>
<a id="trace-26295"></a>
<a id="trace-26297"></a>
<a id="trace-26317"></a>
<a id="trace-26319"></a>
<a id="trace-26332"></a>
<a id="trace-26334"></a>
<a id="trace-26400"></a>
<a id="trace-26402"></a>
<a id="trace-26411"></a>
<a id="trace-26413"></a>
<a id="trace-26427"></a>
<a id="trace-26429"></a>
<a id="trace-26438"></a>
<a id="trace-26440"></a>
<a id="trace-26454"></a>
<a id="trace-26456"></a>
<a id="trace-26464"></a>
<a id="trace-26466"></a>
<a id="trace-26483"></a>
<a id="trace-26485"></a>
<a id="trace-26493"></a>
<a id="trace-26495"></a>
<a id="trace-26511"></a>
<a id="trace-26513"></a>
<a id="trace-26521"></a>
<a id="trace-26523"></a>
<a id="trace-26589"></a>
<a id="trace-26591"></a>
<a id="trace-26601"></a>
<a id="trace-26603"></a>
<a id="trace-26692"></a>
<a id="trace-26694"></a>
<a id="trace-26703"></a>
<a id="trace-26705"></a>
<a id="trace-26724"></a>
<a id="trace-26726"></a>
<a id="trace-26740"></a>
<a id="trace-26742"></a>
<a id="trace-26754"></a>
<a id="trace-26756"></a>
<a id="trace-26766"></a>
<a id="trace-26768"></a>
<a id="trace-26782"></a>
<a id="trace-26784"></a>
<a id="trace-26795"></a>
<a id="trace-26797"></a>
<a id="trace-26867"></a>
<a id="trace-26869"></a>
<a id="trace-26877"></a>
<a id="trace-26879"></a>
<a id="trace-26893"></a>
<a id="trace-26895"></a>
<a id="trace-26904"></a>
<a id="trace-26906"></a>
<a id="trace-26921"></a>
<a id="trace-26923"></a>
<a id="trace-26932"></a>
<a id="trace-26934"></a>
<a id="trace-26950"></a>
<a id="trace-26952"></a>
<a id="trace-26957"></a>
<a id="trace-26959"></a>
<a id="trace-26975"></a>
<a id="trace-26977"></a>
<a id="trace-26983"></a>
<a id="trace-26985"></a>
<a id="trace-27052"></a>
<a id="trace-27054"></a>
<a id="trace-27063"></a>
<a id="trace-27065"></a>
<a id="trace-27074"></a>
<a id="trace-27076"></a>
<a id="trace-27080"></a>
<a id="trace-27082"></a>
<a id="trace-27095"></a>
<a id="trace-27097"></a>
<a id="trace-27107"></a>
<a id="trace-27109"></a>
<a id="trace-27120"></a>
<a id="trace-27122"></a>
<a id="trace-27126"></a>
<a id="trace-27128"></a>
<a id="trace-27143"></a>
<a id="trace-27145"></a>
<a id="trace-27154"></a>
<a id="trace-27156"></a>
<a id="trace-27234"></a>
<a id="trace-27236"></a>
<a id="trace-27250"></a>
<a id="trace-27252"></a>
<a id="trace-27258"></a>
<a id="trace-27260"></a>
<a id="trace-27329"></a>
<a id="trace-27331"></a>
<a id="trace-27339"></a>
<a id="trace-27341"></a>
<a id="trace-27357"></a>
<a id="trace-27359"></a>
<a id="trace-27370"></a>
<a id="trace-27372"></a>
<a id="trace-27388"></a>
<a id="trace-27390"></a>
<a id="trace-27404"></a>
<a id="trace-27406"></a>
<a id="trace-27474"></a>
<a id="trace-27476"></a>
<a id="trace-27484"></a>
<a id="trace-27486"></a>
<a id="trace-27501"></a>
<a id="trace-27503"></a>
<a id="trace-27511"></a>
<a id="trace-27513"></a>
<a id="trace-27525"></a>
<a id="trace-27527"></a>
<a id="trace-27533"></a>
<a id="trace-27535"></a>
<a id="trace-27546"></a>
<a id="trace-27548"></a>
<a id="trace-27551"></a>
<a id="trace-27553"></a>
<a id="trace-27565"></a>
<a id="trace-27567"></a>
<a id="trace-27578"></a>
<a id="trace-27580"></a>
<a id="trace-27645"></a>
<a id="trace-27647"></a>
<a id="trace-27656"></a>
<a id="trace-27658"></a>
<a id="trace-27676"></a>
<a id="trace-27678"></a>
<a id="trace-27690"></a>
<a id="trace-27692"></a>
<a id="trace-27709"></a>
<a id="trace-27711"></a>
<a id="trace-27718"></a>
<a id="trace-27720"></a>
<a id="trace-27737"></a>
<a id="trace-27739"></a>
<a id="trace-27747"></a>
<a id="trace-27749"></a>
<a id="trace-27761"></a>
<a id="trace-27763"></a>
<a id="trace-27769"></a>
<a id="trace-27771"></a>
<a id="trace-27837"></a>
<a id="trace-27839"></a>
<a id="trace-27845"></a>
<a id="trace-27847"></a>
<a id="trace-27860"></a>
<a id="trace-27862"></a>
<a id="trace-27868"></a>
<a id="trace-27870"></a>
<a id="trace-27880"></a>
<a id="trace-27882"></a>
<a id="trace-27886"></a>
<a id="trace-27888"></a>
<a id="trace-27905"></a>
<a id="trace-27907"></a>
<a id="trace-27914"></a>
<a id="trace-27916"></a>
<a id="trace-27930"></a>
<a id="trace-27932"></a>
<a id="trace-27942"></a>
<a id="trace-27944"></a>
<a id="trace-28012"></a>
<a id="trace-28014"></a>
<a id="trace-28018"></a>
<a id="trace-28020"></a>
<a id="trace-28032"></a>
<a id="trace-28034"></a>
<a id="trace-28039"></a>
<a id="trace-28041"></a>
<a id="trace-28054"></a>
<a id="trace-28056"></a>
<a id="trace-28062"></a>
<a id="trace-28064"></a>
<a id="trace-28074"></a>
<a id="trace-28076"></a>
<a id="trace-28078"></a>
<a id="trace-28080"></a>
<a id="trace-28092"></a>
<a id="trace-28094"></a>
<a id="trace-28105"></a>
<a id="trace-28107"></a>
<a id="trace-28173"></a>
<a id="trace-28175"></a>
<a id="trace-28186"></a>
<a id="trace-28188"></a>
<a id="trace-28204"></a>
<a id="trace-28206"></a>
<a id="trace-28210"></a>
<a id="trace-28212"></a>
<a id="trace-28225"></a>
<a id="trace-28227"></a>
<a id="trace-28234"></a>
<a id="trace-28236"></a>
<a id="trace-28246"></a>
<a id="trace-28248"></a>
<a id="trace-28253"></a>
<a id="trace-28255"></a>
<a id="trace-28266"></a>
<a id="trace-28268"></a>
<a id="trace-28275"></a>
<a id="trace-28277"></a>
<a id="trace-28342"></a>
<a id="trace-28344"></a>
<a id="trace-28349"></a>
<a id="trace-28351"></a>
<a id="trace-28368"></a>
<a id="trace-28370"></a>
<a id="trace-28374"></a>
<a id="trace-28376"></a>
<a id="trace-28394"></a>
<a id="trace-28396"></a>
<a id="trace-28403"></a>
<a id="trace-28405"></a>
<a id="trace-28419"></a>
<a id="trace-28421"></a>
<a id="trace-28427"></a>
<a id="trace-28429"></a>
<a id="trace-28440"></a>
<a id="trace-28442"></a>
<a id="trace-28448"></a>
<a id="trace-28450"></a>
<a id="trace-28518"></a>
<a id="trace-28520"></a>
<a id="trace-28523"></a>
<a id="trace-28525"></a>
<a id="trace-28538"></a>
<a id="trace-28540"></a>
<a id="trace-28544"></a>
<a id="trace-28546"></a>
<a id="trace-28558"></a>
<a id="trace-28560"></a>
<a id="trace-28570"></a>
<a id="trace-28572"></a>
<a id="trace-28583"></a>
<a id="trace-28585"></a>
<a id="trace-28590"></a>
<a id="trace-28592"></a>
<a id="trace-28608"></a>
<a id="trace-28610"></a>
<a id="trace-28620"></a>
<a id="trace-28622"></a>
<a id="trace-28691"></a>
<a id="trace-28693"></a>
<a id="trace-28698"></a>
<a id="trace-28700"></a>
<a id="trace-28711"></a>
<a id="trace-28713"></a>
<a id="trace-28717"></a>
<a id="trace-28719"></a>
<a id="trace-28730"></a>
<a id="trace-28732"></a>
<a id="trace-28740"></a>
<a id="trace-28742"></a>
<a id="trace-28750"></a>
<a id="trace-28752"></a>
<a id="trace-28756"></a>
<a id="trace-28758"></a>
<a id="trace-28773"></a>
<a id="trace-28775"></a>
<a id="trace-28782"></a>
<a id="trace-28784"></a>
<a id="trace-28850"></a>
<a id="trace-28852"></a>
<a id="trace-28860"></a>
<a id="trace-28862"></a>
<a id="trace-28880"></a>
<a id="trace-28882"></a>
<a id="trace-28891"></a>
<a id="trace-28893"></a>
<a id="trace-28905"></a>
<a id="trace-28907"></a>
<a id="trace-28912"></a>
<a id="trace-28914"></a>
<a id="trace-28924"></a>
<a id="trace-28926"></a>
<a id="trace-28931"></a>
<a id="trace-28933"></a>
<a id="trace-28946"></a>
<a id="trace-28948"></a>
<a id="trace-28953"></a>
<a id="trace-28955"></a>
<a id="trace-29022"></a>
<a id="trace-29024"></a>
<a id="trace-29027"></a>
<a id="trace-29029"></a>
<a id="trace-29044"></a>
<a id="trace-29046"></a>
<a id="trace-29053"></a>
<a id="trace-29055"></a>
<a id="trace-29067"></a>
<a id="trace-29069"></a>
<a id="trace-29078"></a>
<a id="trace-29080"></a>
<a id="trace-29097"></a>
<a id="trace-29099"></a>
<a id="trace-29104"></a>
<a id="trace-29106"></a>
<a id="trace-29118"></a>
<a id="trace-29120"></a>
<a id="trace-29126"></a>
<a id="trace-29128"></a>
<a id="trace-29196"></a>
<a id="trace-29198"></a>
<a id="trace-29203"></a>
<a id="trace-29205"></a>
<a id="trace-29216"></a>
<a id="trace-29218"></a>
<a id="trace-29222"></a>
<a id="trace-29224"></a>
<a id="trace-29235"></a>
<a id="trace-29237"></a>
<a id="trace-29247"></a>
<a id="trace-29249"></a>
<a id="trace-29258"></a>
<a id="trace-29260"></a>
<a id="trace-29266"></a>
<a id="trace-29268"></a>
<a id="trace-29282"></a>
<a id="trace-29284"></a>
<a id="trace-29291"></a>
<a id="trace-29293"></a>
<a id="trace-29367"></a>
<a id="trace-29369"></a>
<a id="trace-29375"></a>
<a id="trace-29377"></a>
<a id="trace-29387"></a>
<a id="trace-29389"></a>
<a id="trace-29396"></a>
<a id="trace-29398"></a>
<a id="trace-29410"></a>
<a id="trace-29412"></a>
<a id="trace-29418"></a>
<a id="trace-29420"></a>
<a id="trace-29428"></a>
<a id="trace-29430"></a>
<a id="trace-29434"></a>
<a id="trace-29436"></a>
<a id="trace-29450"></a>
<a id="trace-29452"></a>
<a id="trace-29457"></a>
<a id="trace-29459"></a>
<a id="trace-29528"></a>
<a id="trace-29530"></a>
<a id="trace-29534"></a>
<a id="trace-29536"></a>
<a id="trace-29552"></a>
<a id="trace-29554"></a>
<a id="trace-29566"></a>
<a id="trace-29568"></a>
<a id="trace-29585"></a>
<a id="trace-29587"></a>
<a id="trace-29592"></a>
<a id="trace-29594"></a>
<a id="trace-29606"></a>
<a id="trace-29608"></a>
<a id="trace-29610"></a>
<a id="trace-29612"></a>
<a id="trace-29624"></a>
<a id="trace-29626"></a>
<a id="trace-29631"></a>
<a id="trace-29633"></a>
<a id="trace-29698"></a>
<a id="trace-29700"></a>
<a id="trace-29707"></a>
<a id="trace-29709"></a>
<a id="trace-29720"></a>
<a id="trace-29722"></a>
<a id="trace-29727"></a>
<a id="trace-29729"></a>
<a id="trace-29744"></a>
<a id="trace-29746"></a>
<a id="trace-29755"></a>
<a id="trace-29757"></a>
<a id="trace-29772"></a>
<a id="trace-29774"></a>
<a id="trace-29782"></a>
<a id="trace-29784"></a>
<a id="trace-29795"></a>
<a id="trace-29797"></a>
<a id="trace-29804"></a>
<a id="trace-29806"></a>
<a id="trace-29877"></a>
<a id="trace-29879"></a>
<a id="trace-29886"></a>
<a id="trace-29888"></a>
<a id="trace-29897"></a>
<a id="trace-29899"></a>
<a id="trace-29905"></a>
<a id="trace-29907"></a>
<a id="trace-29921"></a>
<a id="trace-29923"></a>
<a id="trace-29929"></a>
<a id="trace-29931"></a>
<a id="trace-29941"></a>
<a id="trace-29943"></a>
<a id="trace-29948"></a>
<a id="trace-29950"></a>
<a id="trace-29974"></a>
<a id="trace-29976"></a>
<a id="trace-30045"></a>
<a id="trace-30047"></a>
<a id="trace-30108"></a>
<a id="trace-30110"></a>
<a id="trace-30126"></a>
<a id="trace-30128"></a>
<a id="trace-30138"></a>
<a id="trace-30140"></a>
<a id="trace-30154"></a>
<a id="trace-30156"></a>
<a id="trace-30161"></a>
<a id="trace-30163"></a>
<a id="trace-30179"></a>
<a id="trace-30181"></a>
<a id="trace-30185"></a>
<a id="trace-30187"></a>
<a id="trace-30203"></a>
<a id="trace-30205"></a>
<a id="trace-30213"></a>
<a id="trace-30215"></a>
<a id="trace-30284"></a>
<a id="trace-30286"></a>
<a id="trace-30297"></a>
<a id="trace-30299"></a>
<a id="trace-30314"></a>
<a id="trace-30316"></a>
<a id="trace-30322"></a>
<a id="trace-30324"></a>
<a id="trace-30340"></a>
<a id="trace-30342"></a>
<a id="trace-30357"></a>
<a id="trace-30359"></a>
<a id="trace-30374"></a>
<a id="trace-30376"></a>
<a id="trace-30387"></a>
<a id="trace-30389"></a>
<a id="trace-30403"></a>
<a id="trace-30405"></a>
<a id="trace-30411"></a>
<a id="trace-30413"></a>
<a id="trace-30481"></a>
<a id="trace-30483"></a>
<a id="trace-30492"></a>
<a id="trace-30494"></a>
<a id="trace-30613"></a>
<a id="trace-30615"></a>
<a id="trace-30623"></a>
<a id="trace-30625"></a>
<a id="trace-30646"></a>
<a id="trace-30648"></a>
<a id="trace-30654"></a>
<a id="trace-30656"></a>
<a id="trace-30670"></a>
<a id="trace-30672"></a>
<a id="trace-30685"></a>
<a id="trace-30687"></a>
<a id="trace-30703"></a>
<a id="trace-30705"></a>
<a id="trace-30770"></a>
<a id="trace-30772"></a>
<a id="trace-30842"></a>
<a id="trace-30844"></a>
<a id="trace-30855"></a>
<a id="trace-30857"></a>
<a id="trace-30867"></a>
<a id="trace-30869"></a>
<a id="trace-30876"></a>
<a id="trace-30878"></a>
<a id="trace-30898"></a>
<a id="trace-30900"></a>
<a id="trace-30907"></a>
<a id="trace-30909"></a>
<a id="trace-30922"></a>
<a id="trace-30924"></a>
<a id="trace-30929"></a>
<a id="trace-30931"></a>
<a id="trace-30948"></a>
<a id="trace-30950"></a>
<a id="trace-30962"></a>
<a id="trace-30964"></a>
<a id="trace-31034"></a>
<a id="trace-31036"></a>
<a id="trace-31044"></a>
<a id="trace-31046"></a>
<a id="trace-31065"></a>
<a id="trace-31067"></a>
<a id="trace-31073"></a>
<a id="trace-31075"></a>
<a id="trace-31091"></a>
<a id="trace-31093"></a>
<a id="trace-31098"></a>
<a id="trace-31100"></a>
<a id="trace-31116"></a>
<a id="trace-31118"></a>
<a id="trace-31128"></a>
<a id="trace-31130"></a>
<a id="trace-31140"></a>
<a id="trace-31142"></a>
<a id="trace-31146"></a>
<a id="trace-31148"></a>
<a id="trace-31211"></a>
<a id="trace-31213"></a>
<a id="trace-31217"></a>
<a id="trace-31219"></a>
<a id="trace-31228"></a>
<a id="trace-31230"></a>
<a id="trace-31234"></a>
<a id="trace-31236"></a>
<a id="trace-31251"></a>
<a id="trace-31253"></a>
<a id="trace-31260"></a>
<a id="trace-31262"></a>
<a id="trace-31281"></a>
<a id="trace-31283"></a>
<a id="trace-31289"></a>
<a id="trace-31291"></a>
<a id="trace-31305"></a>
<a id="trace-31307"></a>
<a id="trace-31313"></a>
<a id="trace-31315"></a>
<a id="trace-31380"></a>
<a id="trace-31382"></a>
<a id="trace-31387"></a>
<a id="trace-31389"></a>
<a id="trace-31399"></a>
<a id="trace-31401"></a>
<a id="trace-31407"></a>
<a id="trace-31409"></a>
<a id="trace-31423"></a>
<a id="trace-31425"></a>
<a id="trace-31433"></a>
<a id="trace-31435"></a>
<a id="trace-31447"></a>
<a id="trace-31449"></a>
<a id="trace-31457"></a>
<a id="trace-31459"></a>
<a id="trace-31473"></a>
<a id="trace-31475"></a>
<a id="trace-31479"></a>
<a id="trace-31481"></a>
<a id="trace-31545"></a>
<a id="trace-31547"></a>
<a id="trace-31550"></a>
<a id="trace-31552"></a>
<a id="trace-31561"></a>
<a id="trace-31563"></a>
<a id="trace-31566"></a>
<a id="trace-31568"></a>
<a id="trace-31581"></a>
<a id="trace-31583"></a>
<a id="trace-31588"></a>
<a id="trace-31590"></a>
<a id="trace-31599"></a>
<a id="trace-31601"></a>
<a id="trace-31605"></a>
<a id="trace-31607"></a>
<a id="trace-31619"></a>
<a id="trace-31621"></a>
<a id="trace-31625"></a>
<a id="trace-31627"></a>
<a id="trace-31691"></a>
<a id="trace-31693"></a>
<a id="trace-31696"></a>
<a id="trace-31698"></a>
<a id="trace-31707"></a>
<a id="trace-31709"></a>
<a id="trace-31712"></a>
<a id="trace-31714"></a>
<a id="trace-31733"></a>
<a id="trace-31735"></a>
<a id="trace-31742"></a>
<a id="trace-31744"></a>
<a id="trace-31758"></a>
<a id="trace-31760"></a>
<a id="trace-31765"></a>
<a id="trace-31767"></a>
<a id="trace-31781"></a>
<a id="trace-31783"></a>
<a id="trace-31789"></a>
<a id="trace-31791"></a>
<a id="trace-31863"></a>
<a id="trace-31865"></a>
<a id="trace-31870"></a>
<a id="trace-31872"></a>
<a id="trace-31883"></a>
<a id="trace-31885"></a>
<a id="trace-31888"></a>
<a id="trace-31890"></a>
<a id="trace-31903"></a>
<a id="trace-31905"></a>
<a id="trace-31908"></a>
<a id="trace-31910"></a>
<a id="trace-31924"></a>
<a id="trace-31926"></a>
<a id="trace-31929"></a>
<a id="trace-31931"></a>
<a id="trace-31947"></a>
<a id="trace-31949"></a>
<a id="trace-31958"></a>
<a id="trace-31960"></a>
<a id="trace-32025"></a>
<a id="trace-32027"></a>
<a id="trace-32035"></a>
<a id="trace-32037"></a>
<a id="trace-32049"></a>
<a id="trace-32051"></a>
<a id="trace-32055"></a>
<a id="trace-32057"></a>
<a id="trace-32075"></a>
<a id="trace-32077"></a>
<a id="trace-32084"></a>
<a id="trace-32086"></a>
<a id="trace-32096"></a>
<a id="trace-32098"></a>
<a id="trace-32101"></a>
<a id="trace-32103"></a>
<a id="trace-32115"></a>
<a id="trace-32117"></a>
<a id="trace-32123"></a>
<a id="trace-32125"></a>
<a id="trace-32188"></a>
<a id="trace-32190"></a>
<a id="trace-32200"></a>
<a id="trace-32202"></a>
<a id="trace-32216"></a>
<a id="trace-32218"></a>
<a id="trace-32222"></a>
<a id="trace-32224"></a>
<a id="trace-32239"></a>
<a id="trace-32241"></a>
<a id="trace-32245"></a>
<a id="trace-32247"></a>
<a id="trace-32260"></a>
<a id="trace-32262"></a>
<a id="trace-32270"></a>
<a id="trace-32272"></a>
<a id="trace-32284"></a>
<a id="trace-32286"></a>
<a id="trace-32293"></a>
<a id="trace-32295"></a>
<a id="trace-32359"></a>
<a id="trace-32361"></a>
<a id="trace-32366"></a>
<a id="trace-32368"></a>
<a id="trace-32379"></a>
<a id="trace-32381"></a>
<a id="trace-32386"></a>
<a id="trace-32388"></a>
<a id="trace-32405"></a>
<a id="trace-32407"></a>
<a id="trace-32414"></a>
<a id="trace-32416"></a>
<a id="trace-32428"></a>
<a id="trace-32430"></a>
<a id="trace-32434"></a>
<a id="trace-32436"></a>
<a id="trace-32450"></a>
<a id="trace-32452"></a>
<a id="trace-32459"></a>
<a id="trace-32461"></a>
<a id="trace-32529"></a>
<a id="trace-32531"></a>
<a id="trace-32538"></a>
<a id="trace-32540"></a>
<a id="trace-32552"></a>
<a id="trace-32554"></a>
<a id="trace-32559"></a>
<a id="trace-32561"></a>
<a id="trace-32573"></a>
<a id="trace-32575"></a>
<a id="trace-32580"></a>
<a id="trace-32582"></a>
<a id="trace-32593"></a>
<a id="trace-32595"></a>
<a id="trace-32604"></a>
<a id="trace-32606"></a>
<a id="trace-32619"></a>
<a id="trace-32621"></a>
<a id="trace-32626"></a>
<a id="trace-32628"></a>
<a id="trace-32693"></a>
<a id="trace-32695"></a>
<a id="trace-32702"></a>
<a id="trace-32704"></a>
<a id="trace-32714"></a>
<a id="trace-32716"></a>
<a id="trace-32724"></a>
<a id="trace-32726"></a>
<a id="trace-32739"></a>
<a id="trace-32741"></a>
<a id="trace-32746"></a>
<a id="trace-32748"></a>
<a id="trace-32764"></a>
<a id="trace-32766"></a>
<a id="trace-32771"></a>
<a id="trace-32773"></a>
<a id="trace-32785"></a>
<a id="trace-32787"></a>
<a id="trace-32793"></a>
<a id="trace-32795"></a>
<a id="trace-32863"></a>
<a id="trace-32865"></a>
<a id="trace-32869"></a>
<a id="trace-32871"></a>
<a id="trace-32885"></a>
<a id="trace-32887"></a>
<a id="trace-32892"></a>
<a id="trace-32894"></a>
<a id="trace-32909"></a>
<a id="trace-32911"></a>
<a id="trace-32921"></a>
<a id="trace-32923"></a>
<a id="trace-32938"></a>
<a id="trace-32940"></a>
<a id="trace-32943"></a>
<a id="trace-32945"></a>
<a id="trace-32957"></a>
<a id="trace-32959"></a>
<a id="trace-32968"></a>
<a id="trace-32970"></a>
<a id="trace-33037"></a>
<a id="trace-33039"></a>
<a id="trace-33043"></a>
<a id="trace-33045"></a>
<a id="trace-33058"></a>
<a id="trace-33060"></a>
<a id="trace-33063"></a>
<a id="trace-33065"></a>
<a id="trace-33082"></a>
<a id="trace-33084"></a>
<a id="trace-33092"></a>
<a id="trace-33094"></a>
<a id="trace-33106"></a>
<a id="trace-33108"></a>
<a id="trace-33114"></a>
<a id="trace-33116"></a>
<a id="trace-33129"></a>
<a id="trace-33131"></a>
<a id="trace-33136"></a>
<a id="trace-33138"></a>
<a id="trace-33204"></a>
<a id="trace-33206"></a>
<a id="trace-33213"></a>
<a id="trace-33215"></a>
<a id="trace-33225"></a>
<a id="trace-33227"></a>
<a id="trace-33231"></a>
<a id="trace-33233"></a>
<a id="trace-33249"></a>
<a id="trace-33251"></a>
<a id="trace-33257"></a>
<a id="trace-33259"></a>
<a id="trace-33271"></a>
<a id="trace-33273"></a>
<a id="trace-33283"></a>
<a id="trace-33285"></a>
<a id="trace-33300"></a>
<a id="trace-33302"></a>
<a id="trace-33307"></a>
<a id="trace-33309"></a>
<a id="trace-33376"></a>
<a id="trace-33378"></a>
<a id="trace-33382"></a>
<a id="trace-33384"></a>
<a id="trace-33395"></a>
<a id="trace-33397"></a>
<a id="trace-33404"></a>
<a id="trace-33406"></a>
<a id="trace-33418"></a>
<a id="trace-33420"></a>
<a id="trace-33425"></a>
<a id="trace-33427"></a>
<a id="trace-33438"></a>
<a id="trace-33440"></a>
<a id="trace-33446"></a>
<a id="trace-33448"></a>
<a id="trace-33464"></a>
<a id="trace-33466"></a>
<a id="trace-33472"></a>
<a id="trace-33474"></a>
- 1.60s–359.80s (×1426), actor 37, squad 4 (trace 703): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49288929108387786, 'next_transition': 730}.
<a id="trace-957"></a>
<a id="trace-959"></a>
<a id="trace-990"></a>
<a id="trace-992"></a>
<a id="trace-1021"></a>
<a id="trace-1023"></a>
<a id="trace-1066"></a>
<a id="trace-1068"></a>
<a id="trace-1089"></a>
<a id="trace-1091"></a>
<a id="trace-1125"></a>
<a id="trace-1127"></a>
<a id="trace-1157"></a>
<a id="trace-1159"></a>
<a id="trace-1198"></a>
<a id="trace-1200"></a>
<a id="trace-1327"></a>
<a id="trace-1329"></a>
<a id="trace-1349"></a>
<a id="trace-1351"></a>
<a id="trace-1369"></a>
<a id="trace-1371"></a>
- 5.20s–11.20s (×22), actor 5, squad 0 (trace 957): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 889. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599890141257504, 'next_transition': 990}.
<a id="trace-141"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 141): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5671603415220604, 'next_transition': 1406}.
<a id="trace-142"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 142): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.019860085904038, 'next_transition': 1840}.
<a id="trace-1377"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1377): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1377. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5671603415220604, 'next_transition': 1406}.
<a id="trace-1378"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1378): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1378. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5671603415220604, 'next_transition': 1406}.
<a id="trace-1379"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1379): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1379. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.019860085904038, 'next_transition': 1840}.
<a id="trace-1380"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1380): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1380. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.019860085904038, 'next_transition': 1840}.
<a id="trace-1406"></a>
<a id="trace-1408"></a>
<a id="trace-1439"></a>
<a id="trace-1441"></a>
<a id="trace-1465"></a>
<a id="trace-1467"></a>
- 11.70s–12.70s (×6), actor 5, squad 0 (trace 1406): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1380. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.310707835751609, 'next_transition': 1439}.
<a id="trace-1474"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1474): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1248. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724879951829991, 'next_transition': 1808}.
<a id="trace-1808"></a>
<a id="trace-1810"></a>
<a id="trace-2079"></a>
<a id="trace-2081"></a>
<a id="trace-2200"></a>
<a id="trace-2202"></a>
<a id="trace-2240"></a>
<a id="trace-2242"></a>
<a id="trace-2279"></a>
<a id="trace-2281"></a>
- 13.20s–16.25s (×10), actor 5, squad 0 (trace 1808): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1380. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.634072286891997, 'next_transition': 2079}.
<a id="trace-1840"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1840): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1256. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 28.49998677866527, 'next_transition': 3344}.
<a id="trace-2323"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2323): received platoon directive. Knowledge: actor memory at 15.00s, trace 2123. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.889982142974127, 'next_transition': 2647}.
<a id="trace-2647"></a>
<a id="trace-2649"></a>
<a id="trace-2757"></a>
<a id="trace-2759"></a>
<a id="trace-2791"></a>
<a id="trace-2793"></a>
<a id="trace-2932"></a>
<a id="trace-2934"></a>
<a id="trace-2970"></a>
<a id="trace-2972"></a>
<a id="trace-3000"></a>
<a id="trace-3002"></a>
<a id="trace-3034"></a>
<a id="trace-3036"></a>
<a id="trace-3068"></a>
<a id="trace-3070"></a>
<a id="trace-3155"></a>
<a id="trace-3157"></a>
<a id="trace-3192"></a>
<a id="trace-3194"></a>
<a id="trace-3229"></a>
<a id="trace-3231"></a>
<a id="trace-3336"></a>
<a id="trace-3338"></a>
- 17.25s–25.75s (×24), actor 5, squad 0 (trace 2647): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2128. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.4451126953260447, 'next_transition': 2757}.
<a id="trace-3344"></a>
- 25.80s–25.80s (×1), actor 8, squad 1 (trace 3344): traveling overwatch. Knowledge: actor memory at 25.00s, trace 3246. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.499202391370863, 'next_transition': 4242}.
<a id="trace-3345"></a>
- 25.80s–25.80s (×1), actor 8, squad 1 (trace 3345): matching received arrivals: traveling stage complete. Knowledge: actor memory at 25.00s, trace 3246. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.499202391370863, 'next_transition': 4242}.
<a id="trace-3680"></a>
- 25.95s–25.95s (×1), actor 0, squad 0 (trace 3680): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 3238. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150033968070821, 'next_transition': 3699}.
<a id="trace-3699"></a>
<a id="trace-3701"></a>
<a id="trace-3740"></a>
<a id="trace-3742"></a>
<a id="trace-3763"></a>
<a id="trace-3765"></a>
<a id="trace-3791"></a>
<a id="trace-3793"></a>
<a id="trace-3813"></a>
<a id="trace-3815"></a>
<a id="trace-3837"></a>
<a id="trace-3839"></a>
<a id="trace-3854"></a>
<a id="trace-3856"></a>
<a id="trace-3937"></a>
<a id="trace-3939"></a>
<a id="trace-3953"></a>
<a id="trace-3955"></a>
<a id="trace-3973"></a>
<a id="trace-3975"></a>
<a id="trace-3991"></a>
<a id="trace-3993"></a>
<a id="trace-4030"></a>
<a id="trace-4032"></a>
<a id="trace-4067"></a>
<a id="trace-4069"></a>
<a id="trace-4094"></a>
<a id="trace-4096"></a>
<a id="trace-4206"></a>
<a id="trace-4208"></a>
<a id="trace-4234"></a>
<a id="trace-4236"></a>
<a id="trace-4745"></a>
<a id="trace-4747"></a>
<a id="trace-4776"></a>
<a id="trace-4778"></a>
<a id="trace-4789"></a>
<a id="trace-4791"></a>
- 26.25s–38.75s (×38), actor 5, squad 0 (trace 3699): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3243. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875012714275453, 'next_transition': 3740}.
<a id="trace-4242"></a>
- 36.25s–36.25s (×1), actor 8, squad 1 (trace 4242): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 4125. Next observer evidence: {'until': 39.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.19715089786100928, 'next_transition': 4821}.
<a id="trace-4243"></a>
- 36.25s–36.25s (×1), actor 8, squad 1 (trace 4243): bounding overwatch. Knowledge: actor memory at 35.00s, trace 4125. Next observer evidence: {'until': 39.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.19715089786100928, 'next_transition': 4821}.
<a id="trace-4244"></a>
- 36.25s–36.25s (×1), actor 8, squad 1 (trace 4244): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4125. Next observer evidence: {'until': 39.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.19715089786100928, 'next_transition': 4821}.
<a id="trace-409"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 409): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4798"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 4798): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 4798. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4811}.
<a id="trace-4799"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 4799): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 4799. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4811}.
<a id="trace-4811"></a>
<a id="trace-4813"></a>
<a id="trace-5166"></a>
<a id="trace-5168"></a>
<a id="trace-5262"></a>
<a id="trace-5264"></a>
<a id="trace-5303"></a>
<a id="trace-5305"></a>
<a id="trace-5327"></a>
<a id="trace-5329"></a>
<a id="trace-5347"></a>
<a id="trace-5349"></a>
<a id="trace-5370"></a>
<a id="trace-5658"></a>
<a id="trace-5680"></a>
<a id="trace-5691"></a>
- 39.25s–44.75s (×16), actor 5, squad 0 (trace 4811): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 4799. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5166}.
<a id="trace-4821"></a>
- 39.40s–39.40s (×1), actor 9, squad 1 (trace 4821): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 4126. Next observer evidence: {'until': 42.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.667733644015186, 'next_transition': 5358}.
<a id="trace-5358"></a>
- 42.85s–42.85s (×1), actor 9, squad 1 (trace 5358): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 5186. Next observer evidence: {'until': 43.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6299996353328751, 'next_transition': 5380}.
<a id="trace-5380"></a>
- 43.40s–43.40s (×1), actor 9, squad 1 (trace 5380): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 5186. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.800730879768482, 'next_transition': 611}.
<a id="trace-5381"></a>
- 43.40s–43.40s (×1), actor 9, squad 1 (trace 5381): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 5186. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.800730879768482, 'next_transition': 611}.
<a id="trace-5706"></a>
- 44.95s–44.95s (×1), actor 0, squad 0 (trace 5706): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 5178. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500422571617737, 'next_transition': 6136}.
<a id="trace-5713"></a>
- 44.95s–44.95s (×1), actor 0, squad 0 (trace 5713): MoveTactically. Knowledge: actor memory at 40.00s, trace 5178. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500422571617737, 'next_transition': 6136}.
<a id="trace-5714"></a>
- 44.95s–44.95s (×1), actor 0, squad 0 (trace 5714): traveling overwatch. Knowledge: actor memory at 40.00s, trace 5178. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500422571617737, 'next_transition': 6136}.
<a id="trace-5715"></a>
- 44.95s–44.95s (×1), actor 0, squad 0 (trace 5715): Reorganise complete. Knowledge: actor memory at 40.00s, trace 5178. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500422571617737, 'next_transition': 6136}.
<a id="trace-6136"></a>
<a id="trace-6138"></a>
<a id="trace-6157"></a>
<a id="trace-6159"></a>
<a id="trace-6210"></a>
<a id="trace-6212"></a>
<a id="trace-6240"></a>
<a id="trace-6242"></a>
<a id="trace-6283"></a>
<a id="trace-6285"></a>
<a id="trace-6466"></a>
<a id="trace-6468"></a>
<a id="trace-6587"></a>
<a id="trace-6589"></a>
- 46.25s–51.75s (×14), actor 5, squad 0 (trace 6136): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 6023. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937585704390857, 'next_transition': 6157}.
<a id="trace-610"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (events line 610): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-611"></a>
- 52.65s–52.65s (×1), actor 5, squad 1 (events line 611): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6638"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 6638): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=15.550940 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 6638. Next observer evidence: None.
<a id="trace-6639"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 6639): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=15.550940 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 6639. Next observer evidence: None.
<a id="trace-6640"></a>
- 52.65s–52.65s (×1), actor 5, squad 1 (trace 6640): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=15.550940 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 6640. Next observer evidence: {'until': 54.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0837475629509576, 'next_transition': 6740}.
<a id="trace-6641"></a>
- 52.65s–52.65s (×1), actor 5, squad 1 (trace 6641): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=15.550940 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 6641. Next observer evidence: {'until': 54.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0837475629509576, 'next_transition': 6740}.
<a id="trace-6654"></a>
<a id="trace-6656"></a>
<a id="trace-6681"></a>
<a id="trace-6683"></a>
- 52.75s–53.25s (×4), actor 5, squad 0 (trace 6654): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.65s, trace 6641. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9950588538611769, 'next_transition': 6681}.
<a id="trace-6740"></a>
- 54.40s–54.40s (×1), actor 9, squad 1 (trace 6740): NeedSupport. Knowledge: actor memory at 50.00s, trace 6382. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6752}.
<a id="trace-6752"></a>
- 54.65s–54.65s (×1), actor 9, squad 1 (trace 6752): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 6382. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7518}.
<a id="trace-6753"></a>
- 54.65s–54.65s (×1), actor 9, squad 1 (trace 6753): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 6382. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7518}.
<a id="trace-6867"></a>
- 54.80s–54.80s (×1), actor 0, squad 0 (trace 6867): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 50.00s, trace 6374. Next observer evidence: {'until': 55, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09698997877519364, 'next_transition': 7097}.
<a id="trace-7097"></a>
- 55.15s–55.15s (×1), actor 0, squad 0 (trace 7097): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 7027. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05008723521267659, 'next_transition': 7504}.
<a id="trace-7098"></a>
- 55.15s–55.15s (×1), actor 0, squad 0 (trace 7098): bounding overwatch. Knowledge: actor memory at 55.00s, trace 7027. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05008723521267659, 'next_transition': 7504}.
<a id="trace-7099"></a>
- 55.15s–55.15s (×1), actor 0, squad 0 (trace 7099): new contact inside 100 m. Knowledge: actor memory at 55.00s, trace 7027. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05008723521267659, 'next_transition': 7504}.
<a id="trace-7504"></a>
<a id="trace-7506"></a>
<a id="trace-7533"></a>
<a id="trace-7535"></a>
<a id="trace-7686"></a>
<a id="trace-7688"></a>
- 55.25s–56.25s (×6), actor 5, squad 0 (trace 7504): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 7032. Next observer evidence: {'until': 55.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18212175997936703, 'next_transition': 7533}.
<a id="trace-7518"></a>
- 55.35s–55.35s (×1), actor 9, squad 1 (trace 7518): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 55.00s, trace 7035. Next observer evidence: {'until': 56, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 7562}.
<a id="trace-7562"></a>
- 56.10s–56.10s (×1), actor 9, squad 1 (trace 7562): Reorganise: completed/failed drill. Knowledge: actor memory at 55.00s, trace 7035. Next observer evidence: {'until': 60.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.75706246883826, 'next_transition': 9425}.
<a id="trace-7565"></a>
- 56.10s–56.10s (×1), actor 9, squad 1 (trace 7565): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 7035. Next observer evidence: {'until': 60.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.75706246883826, 'next_transition': 9425}.
<a id="trace-7566"></a>
- 56.10s–56.10s (×1), actor 9, squad 1 (trace 7566): Reorganise complete: known contact. Knowledge: actor memory at 55.00s, trace 7035. Next observer evidence: {'until': 60.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.75706246883826, 'next_transition': 9425}.
<a id="trace-7725"></a>
- 56.65s–56.65s (×1), actor 0, squad 0 (trace 7725): new contact inside 100 m. Knowledge: actor memory at 55.00s, trace 7027. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7137862590992158, 'next_transition': 8182}.
<a id="trace-8182"></a>
<a id="trace-8184"></a>
- 57.25s–57.25s (×2), actor 5, squad 0 (trace 8182): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 7032. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26353951657531705, 'next_transition': 8212}.
<a id="trace-8212"></a>
- 57.60s–57.60s (×1), actor 0, squad 0 (trace 8212): new contact inside 100 m. Knowledge: actor memory at 55.00s, trace 7027. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26715929810920314, 'next_transition': 8730}.
<a id="trace-8730"></a>
<a id="trace-8732"></a>
<a id="trace-8771"></a>
<a id="trace-8773"></a>
<a id="trace-8825"></a>
<a id="trace-8827"></a>
- 58.25s–59.25s (×6), actor 5, squad 0 (trace 8730): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 7032. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2439505152009408, 'next_transition': 8771}.
<a id="trace-8844"></a>
- 59.35s–59.35s (×1), actor 0, squad 0 (trace 8844): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 55.00s, trace 7027. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14589403504770168, 'next_transition': 9289}.
<a id="trace-9289"></a>
- 59.60s–59.60s (×1), actor 0, squad 0 (trace 9289): received platoon directive; retain contact cover stage. Knowledge: actor memory at 55.00s, trace 7027. Next observer evidence: None.
<a id="trace-9301"></a>
<a id="trace-9303"></a>
<a id="trace-9646"></a>
<a id="trace-9648"></a>
<a id="trace-9673"></a>
<a id="trace-9675"></a>
<a id="trace-9727"></a>
<a id="trace-9729"></a>
- 59.75s–62.25s (×8), actor 5, squad 0 (trace 9301): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 7032. Next observer evidence: {'until': 60.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2775603740630135, 'next_transition': 9646}.
<a id="trace-9425"></a>
- 60.25s–60.25s (×1), actor 9, squad 1 (trace 9425): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 60.00s, trace 9322. Next observer evidence: {'until': 71.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 16.752560450150252, 'next_transition': 14762}.
<a id="trace-9426"></a>
- 60.25s–60.25s (×1), actor 9, squad 1 (trace 9426): rearward bound: one stationary suppressing element. Knowledge: actor memory at 60.00s, trace 9322. Next observer evidence: {'until': 71.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 16.752560450150252, 'next_transition': 14762}.
<a id="trace-9764"></a>
- 62.95s–62.95s (×1), actor 0, squad 0 (trace 9764): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 9314. Next observer evidence: {'until': 63.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.04543750000000024, 'next_transition': 9803}.
<a id="trace-9803"></a>
- 63.45s–63.45s (×1), actor 0, squad 0 (trace 9803): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 9314. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13656}.
<a id="trace-13322"></a>
- 63.45s–63.45s (×1), actor 0, squad 0 (trace 13322): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 60.00s, trace 9314. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13656}.
<a id="trace-13323"></a>
- 63.45s–63.45s (×1), actor 0, squad 0 (trace 13323): MoveTactically. Knowledge: actor memory at 60.00s, trace 9314. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13656}.
<a id="trace-13324"></a>
- 63.45s–63.45s (×1), actor 0, squad 0 (trace 13324): contact cover complete: assessment resumes closure. Knowledge: actor memory at 60.00s, trace 9314. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13656}.
<a id="trace-13656"></a>
<a id="trace-13658"></a>
<a id="trace-13683"></a>
<a id="trace-13685"></a>
<a id="trace-13710"></a>
<a id="trace-13712"></a>
<a id="trace-13859"></a>
<a id="trace-13861"></a>
<a id="trace-13931"></a>
<a id="trace-13933"></a>
<a id="trace-14083"></a>
<a id="trace-14085"></a>
<a id="trace-14182"></a>
<a id="trace-14184"></a>
<a id="trace-14242"></a>
<a id="trace-14244"></a>
<a id="trace-14393"></a>
<a id="trace-14395"></a>
<a id="trace-14462"></a>
<a id="trace-14464"></a>
<a id="trace-14601"></a>
<a id="trace-14603"></a>
<a id="trace-14669"></a>
<a id="trace-14671"></a>
<a id="trace-14748"></a>
<a id="trace-14750"></a>
<a id="trace-14869"></a>
<a id="trace-14871"></a>
<a id="trace-14947"></a>
<a id="trace-14949"></a>
<a id="trace-15095"></a>
<a id="trace-15097"></a>
<a id="trace-15160"></a>
<a id="trace-15162"></a>
- 63.75s–74.25s (×34), actor 5, squad 0 (trace 13656): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 9319. Next observer evidence: {'until': 64.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.01627500000000004, 'next_transition': 13683}.
<a id="trace-14762"></a>
- 71.30s–71.30s (×1), actor 9, squad 1 (trace 14762): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 14499. Next observer evidence: {'until': 92.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.997496959167886, 'next_transition': 19529}.
<a id="trace-14763"></a>
- 71.30s–71.30s (×1), actor 9, squad 1 (trace 14763): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 14499. Next observer evidence: {'until': 92.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.997496959167886, 'next_transition': 19529}.
<a id="trace-15172"></a>
- 74.40s–74.40s (×1), actor 0, squad 0 (trace 15172): NeedSupport. Knowledge: actor memory at 70.00s, trace 14491. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31525912902130254, 'next_transition': 15185}.
<a id="trace-15185"></a>
<a id="trace-15187"></a>
<a id="trace-15278"></a>
<a id="trace-15280"></a>
<a id="trace-15310"></a>
<a id="trace-15312"></a>
- 74.75s–75.75s (×6), actor 5, squad 0 (trace 15185): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 14496. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1129577475031385, 'next_transition': 15278}.
<a id="trace-15350"></a>
- 76.15s–76.15s (×1), actor 0, squad 0 (trace 15350): ReactToContact: cover and return fire. Knowledge: actor memory at 75.00s, trace 15200. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1895357243427331, 'next_transition': 15995}.
<a id="trace-15351"></a>
- 76.15s–76.15s (×1), actor 0, squad 0 (trace 15351): new contact inside 100 m. Knowledge: actor memory at 75.00s, trace 15200. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1895357243427331, 'next_transition': 15995}.
<a id="trace-15995"></a>
<a id="trace-15997"></a>
<a id="trace-16042"></a>
<a id="trace-16044"></a>
<a id="trace-16088"></a>
<a id="trace-16090"></a>
<a id="trace-16147"></a>
<a id="trace-16149"></a>
<a id="trace-16232"></a>
<a id="trace-16234"></a>
<a id="trace-16291"></a>
<a id="trace-16293"></a>
<a id="trace-16331"></a>
<a id="trace-16333"></a>
- 76.25s–79.75s (×14), actor 5, squad 0 (trace 15995): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 15205. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3151872984763334, 'next_transition': 16042}.
<a id="trace-16341"></a>
- 79.80s–79.80s (×1), actor 0, squad 0 (trace 16341): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 75.00s, trace 15200. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750010429242575, 'next_transition': 16437}.
<a id="trace-16437"></a>
<a id="trace-16439"></a>
- 80.25s–80.25s (×2), actor 5, squad 0 (trace 16437): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 16351. Next observer evidence: None.
<a id="trace-1358"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (events line 1358): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16448"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (trace 16448): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.542698 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 16448. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3186148943665713, 'next_transition': 16476}.
<a id="trace-16449"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (trace 16449): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.542698 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 16449. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3186148943665713, 'next_transition': 16476}.
<a id="trace-16476"></a>
<a id="trace-16478"></a>
<a id="trace-16503"></a>
<a id="trace-16505"></a>
<a id="trace-16522"></a>
<a id="trace-16524"></a>
<a id="trace-16567"></a>
<a id="trace-16569"></a>
<a id="trace-16619"></a>
<a id="trace-16621"></a>
<a id="trace-16685"></a>
<a id="trace-16687"></a>
<a id="trace-16732"></a>
<a id="trace-16734"></a>
<a id="trace-16808"></a>
<a id="trace-16810"></a>
<a id="trace-17032"></a>
<a id="trace-17034"></a>
<a id="trace-17194"></a>
<a id="trace-17196"></a>
<a id="trace-17268"></a>
<a id="trace-17270"></a>
<a id="trace-17322"></a>
<a id="trace-17324"></a>
<a id="trace-17380"></a>
<a id="trace-17382"></a>
<a id="trace-17425"></a>
<a id="trace-17427"></a>
<a id="trace-17511"></a>
<a id="trace-17513"></a>
<a id="trace-17538"></a>
<a id="trace-17540"></a>
<a id="trace-17638"></a>
<a id="trace-17640"></a>
<a id="trace-17694"></a>
<a id="trace-17696"></a>
<a id="trace-17724"></a>
<a id="trace-17726"></a>
- 80.75s–92.25s (×38), actor 5, squad 0 (trace 16476): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.30s, trace 16449. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5852233078830273, 'next_transition': 16503}.
<a id="trace-17735"></a>
- 92.30s–92.30s (×1), actor 0, squad 0 (trace 17735): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 90.00s, trace 17550. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.449508596720722, 'next_transition': 19666}.
<a id="trace-17736"></a>
- 92.30s–92.30s (×1), actor 0, squad 0 (trace 17736): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 90.00s, trace 17550. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.449508596720722, 'next_transition': 19666}.
<a id="trace-19529"></a>
- 92.90s–92.90s (×1), actor 9, squad 1 (trace 19529): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 17557. Next observer evidence: {'until': 93.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449821612072886, 'next_transition': 19644}.
<a id="trace-19551"></a>
- 92.90s–92.90s (×1), actor 9, squad 1 (trace 19551): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 17557. Next observer evidence: {'until': 93.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449821612072886, 'next_transition': 19644}.
<a id="trace-19644"></a>
- 93.90s–93.90s (×1), actor 9, squad 1 (trace 19644): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 90.00s, trace 17557. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300048553185917, 'next_transition': 19686}.
<a id="trace-19666"></a>
<a id="trace-19668"></a>
<a id="trace-19735"></a>
<a id="trace-19737"></a>
<a id="trace-19818"></a>
<a id="trace-19820"></a>
<a id="trace-19883"></a>
<a id="trace-19885"></a>
<a id="trace-19911"></a>
<a id="trace-19913"></a>
<a id="trace-19935"></a>
<a id="trace-19937"></a>
<a id="trace-19953"></a>
<a id="trace-19955"></a>
<a id="trace-19977"></a>
<a id="trace-19979"></a>
<a id="trace-19993"></a>
<a id="trace-19995"></a>
<a id="trace-20016"></a>
<a id="trace-20018"></a>
<a id="trace-20038"></a>
<a id="trace-20040"></a>
<a id="trace-20125"></a>
<a id="trace-20127"></a>
<a id="trace-20142"></a>
<a id="trace-20144"></a>
<a id="trace-20196"></a>
<a id="trace-20198"></a>
<a id="trace-20218"></a>
<a id="trace-20220"></a>
<a id="trace-20245"></a>
<a id="trace-20247"></a>
<a id="trace-20259"></a>
<a id="trace-20261"></a>
<a id="trace-20277"></a>
<a id="trace-20279"></a>
<a id="trace-20290"></a>
<a id="trace-20292"></a>
<a id="trace-20374"></a>
<a id="trace-20376"></a>
<a id="trace-20387"></a>
<a id="trace-20389"></a>
<a id="trace-20422"></a>
<a id="trace-20424"></a>
<a id="trace-20455"></a>
<a id="trace-20457"></a>
<a id="trace-20474"></a>
<a id="trace-20476"></a>
<a id="trace-20544"></a>
<a id="trace-20546"></a>
<a id="trace-20565"></a>
<a id="trace-20567"></a>
<a id="trace-20577"></a>
<a id="trace-20579"></a>
<a id="trace-20660"></a>
<a id="trace-20662"></a>
<a id="trace-20675"></a>
<a id="trace-20677"></a>
<a id="trace-20741"></a>
<a id="trace-20743"></a>
<a id="trace-20762"></a>
<a id="trace-20764"></a>
<a id="trace-20775"></a>
<a id="trace-20777"></a>
<a id="trace-20794"></a>
<a id="trace-20796"></a>
<a id="trace-20881"></a>
<a id="trace-20907"></a>
<a id="trace-20909"></a>
<a id="trace-20939"></a>
<a id="trace-20941"></a>
<a id="trace-20968"></a>
<a id="trace-20989"></a>
<a id="trace-21074"></a>
<a id="trace-21104"></a>
<a id="trace-21106"></a>
- 94.25s–121.25s (×76), actor 5, squad 0 (trace 19666): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 17554. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14222629264087372, 'next_transition': 19735}.
<a id="trace-19686"></a>
- 94.35s–94.35s (×1), actor 9, squad 1 (trace 19686): MoveTactically. Knowledge: actor memory at 90.00s, trace 17557. Next observer evidence: {'until': 108.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.26314633873675, 'next_transition': 20488}.
<a id="trace-19687"></a>
- 94.35s–94.35s (×1), actor 9, squad 1 (trace 19687): received platoon directive. Knowledge: actor memory at 90.00s, trace 17557. Next observer evidence: {'until': 108.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.26314633873675, 'next_transition': 20488}.
<a id="trace-20488"></a>
- 108.45s–108.45s (×1), actor 9, squad 1 (trace 20488): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 105.00s, trace 20310. Next observer evidence: {'until': 121.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.316683878788513, 'next_transition': 1840}.
<a id="trace-1839"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (events line 1839): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06953727705339068, 'next_transition': 21140}.
<a id="trace-1840"></a>
- 121.80s–121.80s (×1), actor 5, squad 1 (events line 1840): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 122.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21168}.
<a id="trace-21124"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (trace 21124): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.408519 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 121.80s, trace 21124. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06953727705339068, 'next_transition': 21140}.
<a id="trace-21125"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (trace 21125): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.408519 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 121.80s, trace 21125. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06953727705339068, 'next_transition': 21140}.
<a id="trace-21126"></a>
- 121.80s–121.80s (×1), actor 5, squad 1 (trace 21126): renew committed intent (75 s lifetime). Knowledge: actor memory at 121.80s, trace 21126. Next observer evidence: {'until': 122.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21168}.
<a id="trace-21140"></a>
<a id="trace-21142"></a>
<a id="trace-21200"></a>
<a id="trace-21224"></a>
<a id="trace-21226"></a>
<a id="trace-21340"></a>
<a id="trace-21342"></a>
<a id="trace-21368"></a>
<a id="trace-21370"></a>
<a id="trace-21397"></a>
<a id="trace-21399"></a>
<a id="trace-21422"></a>
<a id="trace-21424"></a>
<a id="trace-21511"></a>
<a id="trace-21543"></a>
<a id="trace-21545"></a>
<a id="trace-21626"></a>
<a id="trace-21628"></a>
<a id="trace-21664"></a>
<a id="trace-21690"></a>
- 122.25s–134.30s (×20), actor 5, squad 0 (trace 21140): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 121.80s, trace 21126. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.051176477452482244, 'next_transition': 21200}.
<a id="trace-21168"></a>
- 122.90s–122.90s (×1), actor 9, squad 1 (trace 21168): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 120.00s, trace 21014. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.939827345205224, 'next_transition': 21554}.
<a id="trace-21554"></a>
- 131.30s–131.30s (×1), actor 9, squad 1 (trace 21554): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 21450. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 4.591184274781399, 'next_transition': 2528}.
<a id="trace-21784"></a>
- 135.65s–135.65s (×1), actor 1, squad 0 (trace 21784): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 135.00s, trace 21712. Next observer evidence: {'until': 136.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5385330689735125, 'next_transition': 21814}.
<a id="trace-21814"></a>
- 136.65s–136.65s (×1), actor 1, squad 0 (trace 21814): Reorganise: completed/failed drill. Knowledge: actor memory at 135.00s, trace 21712. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149893848941582, 'next_transition': 22292}.
<a id="trace-21819"></a>
- 136.65s–136.65s (×1), actor 1, squad 0 (trace 21819): ReactToContact: cover and return fire. Knowledge: actor memory at 135.00s, trace 21712. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149893848941582, 'next_transition': 22292}.
<a id="trace-21820"></a>
- 136.65s–136.65s (×1), actor 1, squad 0 (trace 21820): Reorganise complete: known contact. Knowledge: actor memory at 135.00s, trace 21712. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149893848941582, 'next_transition': 22292}.
<a id="trace-22292"></a>
<a id="trace-22294"></a>
<a id="trace-22340"></a>
<a id="trace-22342"></a>
<a id="trace-22366"></a>
<a id="trace-22368"></a>
<a id="trace-22459"></a>
<a id="trace-22461"></a>
- 137.30s–140.30s (×8), actor 5, squad 0 (trace 22292): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 21715. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5277423631760471, 'next_transition': 22340}.
<a id="trace-22482"></a>
- 140.90s–140.90s (×1), actor 1, squad 0 (trace 22482): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 140.00s, trace 22397. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12702464170388325, 'next_transition': 22488}.
<a id="trace-22488"></a>
<a id="trace-22490"></a>
<a id="trace-22514"></a>
- 141.30s–142.30s (×3), actor 5, squad 0 (trace 22488): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 22400. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3038266362516626, 'next_transition': 22514}.
<a id="trace-22525"></a>
- 142.40s–142.40s (×1), actor 1, squad 0 (trace 22525): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 140.00s, trace 22397. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42750298261065983, 'next_transition': 25317}.
<a id="trace-25224"></a>
- 142.40s–142.40s (×1), actor 1, squad 0 (trace 25224): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 140.00s, trace 22397. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42750298261065983, 'next_transition': 25317}.
<a id="trace-25225"></a>
- 142.40s–142.40s (×1), actor 1, squad 0 (trace 25225): MoveTactically. Knowledge: actor memory at 140.00s, trace 22397. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42750298261065983, 'next_transition': 25317}.
<a id="trace-25226"></a>
- 142.40s–142.40s (×1), actor 1, squad 0 (trace 25226): contact cover complete: assessment resumes closure. Knowledge: actor memory at 140.00s, trace 22397. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42750298261065983, 'next_transition': 25317}.
<a id="trace-25293"></a>
- 142.40s–142.40s (×1), actor 1, squad 0 (trace 25293): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 140.00s, trace 22397. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42750298261065983, 'next_transition': 25317}.
<a id="trace-25317"></a>
<a id="trace-25319"></a>
<a id="trace-25352"></a>
<a id="trace-25354"></a>
<a id="trace-25447"></a>
<a id="trace-25480"></a>
<a id="trace-25514"></a>
<a id="trace-25568"></a>
<a id="trace-25653"></a>
<a id="trace-25679"></a>
<a id="trace-25681"></a>
<a id="trace-25709"></a>
<a id="trace-25711"></a>
<a id="trace-25740"></a>
<a id="trace-25851"></a>
- 143.30s–155.30s (×15), actor 5, squad 0 (trace 25317): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 22400. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7825448871849374, 'next_transition': 25352}.
<a id="trace-25860"></a>
- 155.30s–155.30s (×1), actor 1, squad 0 (trace 25860): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 155.00s, trace 25789. Next observer evidence: {'until': 155.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999378445828112, 'next_transition': 25867}.
<a id="trace-25861"></a>
- 155.30s–155.30s (×1), actor 1, squad 0 (trace 25861): ; retain held slots. Knowledge: actor memory at 155.00s, trace 25789. Next observer evidence: {'until': 155.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999378445828112, 'next_transition': 25867}.
<a id="trace-25867"></a>
- 155.55s–155.55s (×1), actor 1, squad 0 (trace 25867): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 155.00s, trace 25789. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20223210672118516, 'next_transition': 26018}.
<a id="trace-25868"></a>
- 155.55s–155.55s (×1), actor 1, squad 0 (trace 25868): rearward bound: one stationary suppressing element. Knowledge: actor memory at 155.00s, trace 25789. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20223210672118516, 'next_transition': 26018}.
<a id="trace-26018"></a>
<a id="trace-26054"></a>
<a id="trace-26056"></a>
<a id="trace-26082"></a>
<a id="trace-26084"></a>
<a id="trace-26114"></a>
<a id="trace-26116"></a>
<a id="trace-26198"></a>
<a id="trace-26225"></a>
<a id="trace-26227"></a>
<a id="trace-26311"></a>
<a id="trace-26313"></a>
<a id="trace-26394"></a>
<a id="trace-26396"></a>
<a id="trace-26421"></a>
<a id="trace-26423"></a>
<a id="trace-26448"></a>
<a id="trace-26450"></a>
<a id="trace-26477"></a>
<a id="trace-26479"></a>
<a id="trace-26505"></a>
<a id="trace-26507"></a>
- 156.30s–169.30s (×22), actor 5, squad 0 (trace 26018): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 25790. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3895527432657016, 'next_transition': 26054}.
<a id="trace-26607"></a>
- 170.85s–170.85s (×1), actor 1, squad 0 (trace 26607): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 170.00s, trace 26527. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14324807080337515, 'next_transition': 26688}.
<a id="trace-26628"></a>
- 170.85s–170.85s (×1), actor 1, squad 0 (trace 26628): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 170.00s, trace 26527. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14324807080337515, 'next_transition': 26688}.
<a id="trace-26688"></a>
<a id="trace-26718"></a>
<a id="trace-26720"></a>
<a id="trace-26750"></a>
<a id="trace-26777"></a>
<a id="trace-26861"></a>
<a id="trace-26863"></a>
<a id="trace-26888"></a>
<a id="trace-26917"></a>
<a id="trace-26944"></a>
<a id="trace-26946"></a>
<a id="trace-26969"></a>
<a id="trace-26971"></a>
<a id="trace-27047"></a>
<a id="trace-27070"></a>
<a id="trace-27090"></a>
<a id="trace-27114"></a>
<a id="trace-27116"></a>
<a id="trace-27137"></a>
<a id="trace-27139"></a>
<a id="trace-27218"></a>
<a id="trace-27220"></a>
<a id="trace-27244"></a>
<a id="trace-27246"></a>
- 171.30s–186.30s (×24), actor 5, squad 0 (trace 26688): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 26528. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26718}.
<a id="trace-27264"></a>
- 187.05s–187.05s (×1), actor 1, squad 0 (trace 27264): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 185.00s, trace 27160. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27323}.
<a id="trace-27265"></a>
- 187.05s–187.05s (×1), actor 1, squad 0 (trace 27265): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 185.00s, trace 27160. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27323}.
<a id="trace-27323"></a>
<a id="trace-27325"></a>
<a id="trace-27352"></a>
<a id="trace-27382"></a>
<a id="trace-27384"></a>
<a id="trace-27468"></a>
<a id="trace-27470"></a>
- 187.30s–190.30s (×7), actor 5, squad 0 (trace 27323): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 27161. Next observer evidence: {'until': 188.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27352}.
<a id="trace-2527"></a>
- 190.85s–190.85s (×1), actor 5, squad 0 (events line 2527): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2528"></a>
- 190.85s–190.85s (×1), actor 5, squad 1 (events line 2528): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27487"></a>
- 190.85s–190.85s (×1), actor 5, squad 0 (trace 27487): renew committed intent (75 s lifetime). Knowledge: actor memory at 190.85s, trace 27487. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27496}.
<a id="trace-27488"></a>
- 190.85s–190.85s (×1), actor 5, squad 1 (trace 27488): renew committed intent (75 s lifetime). Knowledge: actor memory at 190.85s, trace 27488. Next observer evidence: {'until': 196.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27693}.
<a id="trace-27496"></a>
<a id="trace-27520"></a>
<a id="trace-27542"></a>
<a id="trace-27559"></a>
<a id="trace-27561"></a>
<a id="trace-27639"></a>
<a id="trace-27641"></a>
- 191.30s–195.30s (×7), actor 5, squad 0 (trace 27496): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.85s, trace 27488. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27520}.
<a id="trace-27650"></a>
- 195.65s–195.65s (×1), actor 1, squad 0 (trace 27650): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 195.00s, trace 27582. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27672}.
<a id="trace-27672"></a>
<a id="trace-27703"></a>
<a id="trace-27705"></a>
<a id="trace-27731"></a>
<a id="trace-27733"></a>
<a id="trace-27755"></a>
<a id="trace-27757"></a>
<a id="trace-27831"></a>
<a id="trace-27833"></a>
<a id="trace-27854"></a>
<a id="trace-27856"></a>
<a id="trace-27899"></a>
<a id="trace-27901"></a>
<a id="trace-27924"></a>
<a id="trace-27926"></a>
<a id="trace-28006"></a>
<a id="trace-28008"></a>
<a id="trace-28026"></a>
<a id="trace-28028"></a>
<a id="trace-28048"></a>
<a id="trace-28050"></a>
<a id="trace-28069"></a>
<a id="trace-28088"></a>
<a id="trace-28167"></a>
<a id="trace-28169"></a>
<a id="trace-28200"></a>
<a id="trace-28221"></a>
<a id="trace-28240"></a>
<a id="trace-28242"></a>
<a id="trace-28260"></a>
<a id="trace-28262"></a>
<a id="trace-28336"></a>
<a id="trace-28338"></a>
<a id="trace-28362"></a>
<a id="trace-28364"></a>
<a id="trace-28389"></a>
<a id="trace-28413"></a>
<a id="trace-28415"></a>
<a id="trace-28435"></a>
<a id="trace-28512"></a>
<a id="trace-28514"></a>
<a id="trace-28532"></a>
<a id="trace-28534"></a>
<a id="trace-28552"></a>
<a id="trace-28554"></a>
<a id="trace-28577"></a>
<a id="trace-28579"></a>
<a id="trace-28685"></a>
<a id="trace-28687"></a>
<a id="trace-28705"></a>
<a id="trace-28707"></a>
<a id="trace-28746"></a>
<a id="trace-28767"></a>
<a id="trace-28769"></a>
<a id="trace-28844"></a>
<a id="trace-28846"></a>
<a id="trace-28874"></a>
<a id="trace-28876"></a>
<a id="trace-28900"></a>
<a id="trace-28918"></a>
<a id="trace-28920"></a>
<a id="trace-28940"></a>
<a id="trace-28942"></a>
<a id="trace-29016"></a>
<a id="trace-29018"></a>
<a id="trace-29038"></a>
<a id="trace-29040"></a>
<a id="trace-29062"></a>
<a id="trace-29093"></a>
<a id="trace-29112"></a>
<a id="trace-29114"></a>
<a id="trace-29190"></a>
<a id="trace-29192"></a>
<a id="trace-29210"></a>
<a id="trace-29212"></a>
<a id="trace-29230"></a>
<a id="trace-29254"></a>
<a id="trace-29277"></a>
<a id="trace-29362"></a>
<a id="trace-29381"></a>
<a id="trace-29383"></a>
<a id="trace-29404"></a>
<a id="trace-29406"></a>
<a id="trace-29423"></a>
<a id="trace-29446"></a>
<a id="trace-29523"></a>
<a id="trace-29546"></a>
<a id="trace-29548"></a>
<a id="trace-29579"></a>
<a id="trace-29581"></a>
<a id="trace-29600"></a>
<a id="trace-29602"></a>
<a id="trace-29620"></a>
<a id="trace-29714"></a>
<a id="trace-29716"></a>
<a id="trace-29738"></a>
<a id="trace-29740"></a>
<a id="trace-29766"></a>
<a id="trace-29768"></a>
<a id="trace-29789"></a>
<a id="trace-29791"></a>
- 196.30s–259.30s (×101), actor 5, squad 0 (trace 27672): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 27583. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27703}.
<a id="trace-27693"></a>
- 196.80s–196.80s (×1), actor 9, squad 1 (trace 27693): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 195.00s, trace 27585. Next observer evidence: {'until': 226.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29569}.
<a id="trace-27694"></a>
- 196.80s–196.80s (×1), actor 9, squad 1 (trace 27694): MoveTactically. Knowledge: actor memory at 195.00s, trace 27585. Next observer evidence: {'until': 226.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29569}.
<a id="trace-27695"></a>
- 196.80s–196.80s (×1), actor 9, squad 1 (trace 27695): . Knowledge: actor memory at 195.00s, trace 27585. Next observer evidence: {'until': 226.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29569}.
<a id="trace-29569"></a>
- 251.85s–251.85s (×1), actor 9, squad 1 (trace 29569): traveling overwatch. Knowledge: actor memory at 250.00s, trace 29467. Next observer evidence: {'until': 259.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29812}.
<a id="trace-29570"></a>
- 251.85s–251.85s (×1), actor 9, squad 1 (trace 29570): current contact unknown for 10 s. Knowledge: actor memory at 250.00s, trace 29467. Next observer evidence: {'until': 259.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29812}.
<a id="trace-29811"></a>
- 259.90s–259.90s (×1), actor 5, squad 0 (trace 29811): renew committed intent (75 s lifetime). Knowledge: actor memory at 259.90s, trace 29811. Next observer evidence: None.
<a id="trace-29812"></a>
- 259.90s–259.90s (×1), actor 5, squad 1 (trace 29812): renew committed intent (75 s lifetime). Knowledge: actor memory at 259.90s, trace 29812. Next observer evidence: None.
<a id="trace-2850"></a>
- 259.90s–259.90s (×1), actor 5, squad 0 (events line 2850): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29873}.
<a id="trace-2851"></a>
- 259.90s–259.90s (×1), actor 5, squad 1 (events line 2851): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 264.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29978}.
<a id="trace-29873"></a>
<a id="trace-29891"></a>
<a id="trace-29893"></a>
<a id="trace-29915"></a>
<a id="trace-29917"></a>
<a id="trace-29935"></a>
<a id="trace-29937"></a>
<a id="trace-29958"></a>
<a id="trace-29960"></a>
<a id="trace-30039"></a>
<a id="trace-30041"></a>
- 260.30s–265.30s (×11), actor 5, squad 0 (trace 29873): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 29816. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29891}.
<a id="trace-29978"></a>
- 264.85s–264.85s (×1), actor 9, squad 1 (trace 29978): received platoon directive. Knowledge: actor memory at 260.00s, trace 29818. Next observer evidence: {'until': 273.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2929}.
<a id="trace-30050"></a>
- 265.60s–265.60s (×1), actor 1, squad 0 (trace 30050): MoveTactically. Knowledge: actor memory at 265.00s, trace 29980. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30120}.
<a id="trace-30051"></a>
- 265.60s–265.60s (×1), actor 1, squad 0 (trace 30051): received platoon directive. Knowledge: actor memory at 265.00s, trace 29980. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30120}.
<a id="trace-30120"></a>
<a id="trace-30122"></a>
<a id="trace-30148"></a>
<a id="trace-30150"></a>
<a id="trace-30173"></a>
<a id="trace-30175"></a>
<a id="trace-30278"></a>
<a id="trace-30280"></a>
<a id="trace-30310"></a>
<a id="trace-30334"></a>
<a id="trace-30336"></a>
<a id="trace-30368"></a>
<a id="trace-30370"></a>
- 266.30s–273.30s (×13), actor 5, squad 0 (trace 30120): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 29981. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5292206035398764, 'next_transition': 30148}.
<a id="trace-2928"></a>
- 273.70s–273.70s (×1), actor 5, squad 0 (events line 2928): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2929"></a>
- 273.70s–273.70s (×1), actor 5, squad 1 (events line 2929): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30380"></a>
- 273.70s–273.70s (×1), actor 5, squad 0 (trace 30380): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 273.70s, trace 30380. Next observer evidence: {'until': 274.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0148054707250043, 'next_transition': 30398}.
<a id="trace-30381"></a>
- 273.70s–273.70s (×1), actor 5, squad 0 (trace 30381): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 273.70s, trace 30381. Next observer evidence: {'until': 274.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0148054707250043, 'next_transition': 30398}.
<a id="trace-30382"></a>
- 273.70s–273.70s (×1), actor 5, squad 1 (trace 30382): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 273.70s, trace 30382. Next observer evidence: {'until': 278.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30680}.
<a id="trace-30383"></a>
- 273.70s–273.70s (×1), actor 5, squad 1 (trace 30383): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 273.70s, trace 30383. Next observer evidence: {'until': 278.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30680}.
<a id="trace-30398"></a>
<a id="trace-30476"></a>
- 274.30s–275.30s (×2), actor 5, squad 0 (trace 30398): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 273.70s, trace 30383. Next observer evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15384261811489172, 'next_transition': 30476}.
<a id="trace-30497"></a>
- 275.85s–275.85s (×1), actor 1, squad 0 (trace 30497): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 275.00s, trace 30418. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30607}.
<a id="trace-30607"></a>
<a id="trace-30609"></a>
<a id="trace-30640"></a>
<a id="trace-30642"></a>
<a id="trace-30665"></a>
<a id="trace-30697"></a>
<a id="trace-30699"></a>
- 276.30s–279.30s (×7), actor 5, squad 0 (trace 30607): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 30419. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8126792221476141, 'next_transition': 30640}.
<a id="trace-30680"></a>
- 278.65s–278.65s (×1), actor 9, squad 1 (trace 30680): received platoon directive. Knowledge: actor memory at 275.00s, trace 30421. Next observer evidence: {'until': 308.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3225}.
<a id="trace-30708"></a>
- 279.45s–279.45s (×1), actor 1, squad 0 (trace 30708): traveling overwatch. Knowledge: actor memory at 275.00s, trace 30418. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6048002960786578, 'next_transition': 30836}.
<a id="trace-30709"></a>
- 279.45s–279.45s (×1), actor 1, squad 0 (trace 30709): received platoon directive. Knowledge: actor memory at 275.00s, trace 30418. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6048002960786578, 'next_transition': 30836}.
<a id="trace-30836"></a>
<a id="trace-30838"></a>
<a id="trace-30863"></a>
<a id="trace-30893"></a>
<a id="trace-30916"></a>
<a id="trace-30918"></a>
<a id="trace-30942"></a>
<a id="trace-30944"></a>
<a id="trace-31030"></a>
<a id="trace-31059"></a>
<a id="trace-31061"></a>
<a id="trace-31087"></a>
<a id="trace-31112"></a>
<a id="trace-31207"></a>
<a id="trace-31224"></a>
<a id="trace-31247"></a>
<a id="trace-31275"></a>
<a id="trace-31277"></a>
<a id="trace-31301"></a>
<a id="trace-31375"></a>
<a id="trace-31419"></a>
<a id="trace-31441"></a>
<a id="trace-31443"></a>
<a id="trace-31468"></a>
<a id="trace-31541"></a>
<a id="trace-31557"></a>
<a id="trace-31576"></a>
<a id="trace-31594"></a>
<a id="trace-31613"></a>
<a id="trace-31615"></a>
<a id="trace-31685"></a>
<a id="trace-31687"></a>
<a id="trace-31703"></a>
<a id="trace-31728"></a>
<a id="trace-31752"></a>
<a id="trace-31754"></a>
<a id="trace-31775"></a>
<a id="trace-31777"></a>
<a id="trace-31859"></a>
<a id="trace-31877"></a>
<a id="trace-31879"></a>
<a id="trace-31897"></a>
<a id="trace-31899"></a>
<a id="trace-31918"></a>
<a id="trace-31920"></a>
<a id="trace-31942"></a>
<a id="trace-32019"></a>
<a id="trace-32021"></a>
<a id="trace-32044"></a>
<a id="trace-32069"></a>
<a id="trace-32071"></a>
<a id="trace-32091"></a>
<a id="trace-32109"></a>
<a id="trace-32111"></a>
<a id="trace-32210"></a>
<a id="trace-32212"></a>
<a id="trace-32234"></a>
<a id="trace-32280"></a>
<a id="trace-32353"></a>
<a id="trace-32355"></a>
<a id="trace-32373"></a>
<a id="trace-32375"></a>
<a id="trace-32400"></a>
<a id="trace-32422"></a>
<a id="trace-32424"></a>
<a id="trace-32446"></a>
<a id="trace-32523"></a>
<a id="trace-32525"></a>
<a id="trace-32546"></a>
<a id="trace-32548"></a>
<a id="trace-32569"></a>
<a id="trace-32588"></a>
<a id="trace-32687"></a>
<a id="trace-32689"></a>
<a id="trace-32733"></a>
<a id="trace-32735"></a>
<a id="trace-32758"></a>
<a id="trace-32760"></a>
<a id="trace-32779"></a>
<a id="trace-32781"></a>
<a id="trace-32858"></a>
<a id="trace-32879"></a>
<a id="trace-32881"></a>
<a id="trace-32903"></a>
<a id="trace-32905"></a>
- 280.30s–342.30s (×85), actor 5, squad 0 (trace 30836): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 30776. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0723384008059735, 'next_transition': 30863}.
<a id="trace-3224"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (events line 3224): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3225"></a>
- 342.70s–342.70s (×1), actor 5, squad 1 (events line 3225): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-32916"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (trace 32916): renew committed intent (75 s lifetime). Knowledge: actor memory at 342.70s, trace 32916. Next observer evidence: {'until': 343.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32932}.
<a id="trace-32917"></a>
- 342.70s–342.70s (×1), actor 5, squad 1 (trace 32917): renew committed intent (75 s lifetime). Knowledge: actor memory at 342.70s, trace 32917. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-32932"></a>
<a id="trace-32934"></a>
<a id="trace-32951"></a>
<a id="trace-32953"></a>
<a id="trace-33031"></a>
<a id="trace-33033"></a>
<a id="trace-33052"></a>
<a id="trace-33054"></a>
<a id="trace-33078"></a>
<a id="trace-33100"></a>
<a id="trace-33102"></a>
<a id="trace-33124"></a>
<a id="trace-33198"></a>
<a id="trace-33200"></a>
<a id="trace-33221"></a>
<a id="trace-33243"></a>
<a id="trace-33245"></a>
<a id="trace-33265"></a>
<a id="trace-33267"></a>
<a id="trace-33294"></a>
<a id="trace-33296"></a>
<a id="trace-33370"></a>
<a id="trace-33372"></a>
<a id="trace-33390"></a>
<a id="trace-33413"></a>
<a id="trace-33434"></a>
<a id="trace-33458"></a>
<a id="trace-33460"></a>
- 343.30s–359.30s (×28), actor 5, squad 0 (trace 32932): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 342.70s, trace 32917. Next observer evidence: {'until': 344.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32951}.

## Net delivery

209 matched order/radio deliveries; 318 explicitly recorded losses; 4 unmatched orders (not classified as lost).
Matched delay: mean 0.453s; maximum 5.350s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 3873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 3874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 3885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 3886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 4127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 4128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4129: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4130: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4131: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4132: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4134: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4135: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4136: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4137: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4138: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 4139: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 4140: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 4798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 4799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 5178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 5187: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 5188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5189: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5190: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5191: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5192: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5193: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5194: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5195: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5196: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5197: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5198: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 5199: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 5200: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 6018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 6019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 6020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 6021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 6022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 6023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 6024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 6025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 6026: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 6027: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 6028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 6029: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 6030: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 6031: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 6032: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 6033: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 6034: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 6035: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 6036: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 6037: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 6038: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 6039: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 6040: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 6374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 6375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 6376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 6377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 6378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 6379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 6380: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 6381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 6382: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 6383: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 6384: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 6385: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 6386: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 6387: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 6388: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 6389: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6390: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6391: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6392: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 6393: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 6394: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 6395: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 6396: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 6638: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 6639: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 6640: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 6641: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 7027: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 7028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 7029: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 7030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 7031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 7032: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 7033: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 7034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 7035: estimate 14.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 7036: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 7037: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 7038: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 7039: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 7040: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 7041: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 7042: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 7043: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 7044: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 7045: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 7046: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 7047: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 7048: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 7049: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 9314: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 9315: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 9316: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 9317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 9318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 9319: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 9320: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 9321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 9322: estimate 14.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 9323: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 9324: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 9325: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 9326: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 9327: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 9328: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 9329: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 9330: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 9331: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 9332: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 9333: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 9334: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 9335: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 13733: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 13734: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 13735: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 13736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 13737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 13738: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 13739: estimate 13.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 13740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 13741: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 13742: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 13743: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 13744: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 13745: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 13746: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 13747: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 13748: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 13749: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 13750: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 13751: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 13752: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 13753: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 13754: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 14491: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 14492: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 14493: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 14494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 14495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 14496: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 14497: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 14498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 14499: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 14500: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 14501: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 14502: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 14503: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 14504: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 14505: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 14506: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 14507: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 14508: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 14509: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 14510: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 14511: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 14512: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 15200: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 15201: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 15202: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 15203: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 15204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 15205: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 15206: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 15207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 15208: estimate 13.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 15209: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 15210: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 15211: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 15212: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 15213: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 15214: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 15215: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 15216: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 15217: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 15218: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 15219: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 15220: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 15221: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 16346: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 16347: estimate 13.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 16348: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 16349: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 16350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 16351: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 16352: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 16353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 16354: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 16355: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 16356: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 16357: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 16358: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 16359: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 16360: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 16361: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 16362: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 16363: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 16364: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 16365: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 16366: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 16367: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 16448: estimate 12.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 16449: estimate 12.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 16923: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 16924: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 16925: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 16926: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 16927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 16928: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 16929: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 16930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 16931: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 16932: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 16933: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 16934: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 16935: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 16936: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 16937: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 16938: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 16939: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 16940: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 16941: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 16942: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 16943: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 16944: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 17550: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 17551: estimate 13.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 17552: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 17553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 17554: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 17555: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 17556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 17557: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 17558: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 17559: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 17560: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 17561: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 17562: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 17563: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 17564: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 17565: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 17566: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 17567: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 17568: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 17569: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 17570: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 19748: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 19749: estimate 13.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 19750: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 19751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 19752: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 19753: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 19754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 19755: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 19756: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 19757: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 19758: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 19759: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 19760: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 19761: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 19762: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 19763: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 19764: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 19765: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 19766: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 19767: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 19768: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 20048: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 20049: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 20050: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 20051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 20052: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 20053: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 20054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 20055: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 20056: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 20057: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 20058: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 20059: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 20060: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 20061: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 20062: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 20063: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 20064: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 20065: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 20066: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 20067: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 20068: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 20303: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 20304: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 20305: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 20306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 20307: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 20308: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 20309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 20310: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 20311: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 20312: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 20313: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 20314: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 20315: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 20316: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 20317: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 20318: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 20319: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 20320: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 20321: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 20322: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 20323: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 20591: estimate 13.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 20592: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 20593: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 20594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 20595: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 20596: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 20597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 20598: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 20599: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 20600: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 20601: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 20602: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 20603: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 20604: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 20605: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 20606: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 20607: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 20608: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 20609: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 20610: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 20611: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 20817: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 20818: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 20819: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 20820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 20821: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 20822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 20823: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 20824: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 20825: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 20826: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 20827: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 20828: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 20829: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 20830: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 20831: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 20832: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 20833: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 20834: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 20835: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 20836: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 21008: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 21009: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 21010: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 21011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 21012: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 21013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 21014: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 21015: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 21016: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 21017: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 21018: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 21019: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 21020: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 21021: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 21022: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 21023: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 21024: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 21025: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 21026: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 21027: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 21124: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 21125: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 21126: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 21252: estimate 13.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 21253: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 21254: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 21255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 21256: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 21257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 21258: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 21259: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 21260: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 21261: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 21262: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 21263: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 21264: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 21265: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 21266: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 21267: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 21268: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 21269: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 21270: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 21271: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 21444: estimate 13.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 21445: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 21446: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 21447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 21448: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 21449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 21450: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 21451: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 21452: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 21453: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 21454: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 21455: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 21456: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 21457: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 21458: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 21459: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 21460: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 21461: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 21462: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 21463: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 21712: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 21713: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 21714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 21715: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 21716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 21717: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 21718: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 21719: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 21720: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 21721: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 21722: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 21723: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 21724: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 21725: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 21726: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 21727: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 21728: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 21729: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 21730: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 22397: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 22398: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 22399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 22400: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 22401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 22402: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 22403: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 22404: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 22405: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 22406: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 22407: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 22408: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 22409: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 22410: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 22411: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 22412: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 22413: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 22414: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 25381: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 25382: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 25383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 25384: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 25385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 25386: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 25387: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 25388: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 25389: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 25390: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 25391: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 25392: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 25393: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 25394: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 25395: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 25396: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 25397: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 25398: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 25592: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 25593: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 25594: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 25595: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 25596: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 25597: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 25598: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 25599: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 25600: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 25601: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 25602: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 25603: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 25604: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 25605: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 25606: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 25607: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 25608: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 25789: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 25790: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 25791: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 25792: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 25793: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 25794: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 25795: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 25796: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 25797: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 25798: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 25799: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 25800: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 25801: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 25802: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 25803: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 25804: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 26136: estimate 12.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 26137: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 26138: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 26139: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 26140: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 26141: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 26142: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 26143: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 26144: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 26145: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 26146: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 26147: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 26148: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 26149: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 26150: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 26151: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 26335: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 26336: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 26337: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 26338: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 26339: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 26340: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 26341: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 26342: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 26343: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 26344: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 26345: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 26346: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 26347: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 26348: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 26349: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 26350: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 26527: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 26528: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 26529: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 26530: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 26531: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 26532: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 26533: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 26534: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 26535: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 26536: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 26537: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 26538: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 26539: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 26540: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 26541: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 26542: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 26801: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 26802: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 26803: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 26804: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 26805: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 26806: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 26807: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 26808: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 26809: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 26810: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 26811: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 26812: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 26813: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 26814: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 26815: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 26816: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 26987: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 26988: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 26989: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 26990: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 26991: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 26992: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 26993: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 26994: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 26995: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 26996: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 26997: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 26998: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 26999: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 27000: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 27001: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 27002: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 27160: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 27161: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 27162: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 27163: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 27164: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 27165: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 27166: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 27167: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 27168: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 27169: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 27170: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 27171: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 27172: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 27173: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 27174: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 27175: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 27408: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 27409: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 27410: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 27411: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 27412: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 27413: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 27414: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 27415: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 27416: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 27417: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 27418: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 27419: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 27420: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 27421: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 27422: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 27423: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.85s leader 5, trace 27487: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.85s leader 5, trace 27488: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 27582: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 27583: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 27584: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 27585: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 27586: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 27587: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 27588: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 27589: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 27590: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 27591: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 27592: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 27593: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 27594: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 27595: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 27596: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 27597: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 27774: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 27775: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 27776: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 27777: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 27778: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 27779: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 27780: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 27781: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 27782: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 27783: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 27784: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 27785: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 27786: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 27787: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 27788: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 27789: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 27946: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 27947: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 27948: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 27949: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 27950: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 27951: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 27952: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 27953: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 27954: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 27955: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 27956: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 27957: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 27958: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 27959: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 27960: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 27961: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 28109: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 28110: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 28111: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 28112: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 28113: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 28114: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 28115: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 28116: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 28117: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 28118: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 28119: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 28120: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 28121: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 28122: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 28123: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 28124: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 28279: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 28280: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 28281: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 28282: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 28283: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 28284: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 28285: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 28286: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 28287: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 28288: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 28289: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 28290: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 28291: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 28292: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 28293: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 28294: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 28452: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 28453: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 28454: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 28455: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 28456: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 28457: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 28458: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 28459: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 28460: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 28461: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 28462: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 28463: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 28464: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 28465: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 28466: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 28467: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 28624: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 28625: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 28626: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 28627: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 28628: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 28629: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 28630: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 28631: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 28632: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 28633: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 28634: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 28635: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 28636: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 28637: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 28638: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 28639: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 28786: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 28787: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 28788: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 28789: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 28790: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 28791: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 28792: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 28793: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 28794: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 28795: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 28796: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 28797: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 28798: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 28799: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 28800: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 28801: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 28957: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 28958: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 28959: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 28960: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 28961: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 28962: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 28963: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 28964: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 28965: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 28966: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 28967: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 28968: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 28969: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 28970: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 28971: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 28972: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 29130: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 29131: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 29132: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 29133: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 29134: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 29135: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 29136: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 29137: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 29138: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 29139: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 29140: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 29141: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 29142: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 29143: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 29144: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 29145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 29304: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 29305: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 29306: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 29307: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 29308: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 29309: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 29310: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 29311: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 29312: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 29313: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 29314: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 29315: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 29316: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 29317: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 29318: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 29319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 29464: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 29465: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 29466: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 29467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 29468: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 29469: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 29470: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 29471: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 29472: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 29473: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 29474: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 29475: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 29476: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 29477: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 29478: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 29479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 29635: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 29636: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 29637: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 29638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 29639: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 29640: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 29641: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 29642: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 29643: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 29644: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 29645: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 29646: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 29647: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 29648: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 29649: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 29650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.90s leader 5, trace 29811: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.90s leader 5, trace 29812: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 29815: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 29816: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 29817: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 29818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 29819: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 29820: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 29821: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 29822: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 29823: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 29824: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 29825: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 29826: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 29827: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 29828: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 29829: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 29830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 29980: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 29981: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 29982: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 29983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 29984: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 29985: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 29986: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 29987: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 29988: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 29989: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 29990: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 29991: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 29992: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 29993: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 29994: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 29995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 30217: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 30218: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 30219: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 30220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 30221: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 30222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 30223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 30224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 30225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 30226: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 30227: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 30228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 30229: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 30230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 30231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 30232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.70s leader 5, trace 30380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.70s leader 5, trace 30381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.70s leader 5, trace 30382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.70s leader 5, trace 30383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 30418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 30419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 30420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 30421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 30422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 30423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 30424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 30425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 30426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 30427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 30428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 30429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 30430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 30431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 30432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 30433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 30775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 30776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 30777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 30778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 30779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 30780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 30781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 30782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 30783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 30784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 30785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 30786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 30787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 30788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 30789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 30790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 30968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 30969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 30970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 30971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 30972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 30973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 30974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 30975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 30976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 30977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 30978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 30979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 30980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 30981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 30982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 30983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 31150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 31151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 31152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 31153: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 31154: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 31155: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 31156: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 31157: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 31158: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 31159: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 31160: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 31161: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 31162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 31163: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 31164: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 31318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 31319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 31320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 31321: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 31322: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 31323: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 31324: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 31325: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 31326: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 31327: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 31328: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 31329: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 31330: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 31331: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 31332: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 31482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 31483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 31484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 31485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 31486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 31487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 31488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 31489: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 31490: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 31491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 31492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 31493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 31494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 31495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 31496: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 31628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 31629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 31630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 31631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 31632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 31633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 31634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 31635: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 31636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 31637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 31638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 31639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 31640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 31641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 31642: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 31794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 31795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 31796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 31797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 31798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 31799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 31800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 31801: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 31802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 31803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 31804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 31805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 31806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 31807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 31808: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 31961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 31962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 31963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 31964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 31965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 31966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 31967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 31968: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 31969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 31970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 31971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 31972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 31973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 31974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 31975: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 32128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 32129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 32130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 32131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 32132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 32133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 32134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 32135: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 32136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 32137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 32138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 32139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 32140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 32141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 32142: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 32297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 32298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 32299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 32300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 32301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 32302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 32303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 32304: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 32305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 32306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 32307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 32308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 32309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 32310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 32311: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 32463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 32464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 32465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 32466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 32467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 32468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 32469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 32470: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 32471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 32472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 32473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 32474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 32475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 32476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 32477: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 32630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 32631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 32632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 32633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 32634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 32635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 32636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 32637: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 32638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 32639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 32640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 32641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 32642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 32643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 32644: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 32796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 32797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 32798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 32799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 32800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 32801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 32802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 32803: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 32804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 32805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 32806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 32807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 32808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 32809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 32810: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.70s leader 5, trace 32916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.70s leader 5, trace 32917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 32971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 32972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 32973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 32974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 32975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 32976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 32977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 32978: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 32979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 32980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 32981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 32982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 32983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 32984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 32985: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 33142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 33143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 33144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 33145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 33146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 33147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 33148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 33149: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 33150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 33151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 33152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 33153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 33154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 33155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 33156: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 33311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 33312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 33313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 33314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 33315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 33316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 33317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 33318: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 33319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 33320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 33321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 33322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 33323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 33324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 33325: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 33475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 33476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 33477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 33478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 33479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 33480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 33481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 33482: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 33483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 33484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 33485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 33486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 33487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 33488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 33489: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren killed in action
- 1: Dane incapacitated
- 1: Soren incapacitated
- 1: Moss incapacitated
- 1: Vale incapacitated
- 1: Ellis incapacitated
- 1: Tern incapacitated
- 1: Ash killed in action
- 1: Rook killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
