# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/27/108/good-ember/battle-108-1789674276789880719`

## Battle summary

**Ember** · 360 s · 294 shots.

### Turning points

- 17.7s, squad 4: contact (events line 185). First recorded contact.
- 42.1s, squad 0: help call ([trace 3203](#trace-3203)). No completion observed before termination.
- 131.2s, squad 0: help call ([trace 9648](#trace-9648)). No completion observed before termination.
- 137.1s, squad 0: help call ([trace 9971](#trace-9971)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 43 shots, 5/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 251 shots, 1/6 lost.

### Decisions and attribution

At 18.0s, squad 0 chose took cover and returned fire ([trace 1151](#trace-1151)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 41.4s, squad 0 chose FightHere: nearest known group ([trace 3197](#trace-3197)), followed by 1 shots and 0 own casualties; estimate 6.2 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 13.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 949](#trace-949)). Following evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299994111454873, 'next_transition': 976}.
- 41.4s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.616295 retreat threshold=0.220000 initiative=requires intent ([trace 3196](#trace-3196)). Following evidence: {'until': 42, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22050000044444568, 'next_transition': 3203}.

### Communication

97 matched deliveries (mean 0.44s, max 6.10s); 110 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.70s, squad 4, contact, evidence events line 185: First recorded contact; .
- 42.10s, squad 0, help call, evidence 3203: NeedSupport; No completion observed before termination.
- 131.15s, squad 0, help call, evidence 9648: NeedSupport; No completion observed before termination.
- 137.10s, squad 0, help call, evidence 9971: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.694666365478177, 'next_transition': 628}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.694666365478177, 'next_transition': 628}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.694666365478177, 'next_transition': 628}.
<a id="trace-334"></a>
<a id="trace-353"></a>
<a id="trace-369"></a>
<a id="trace-384"></a>
<a id="trace-395"></a>
<a id="trace-411"></a>
<a id="trace-430"></a>
<a id="trace-504"></a>
<a id="trace-516"></a>
<a id="trace-537"></a>
<a id="trace-554"></a>
<a id="trace-566"></a>
<a id="trace-583"></a>
<a id="trace-605"></a>
<a id="trace-630"></a>
<a id="trace-644"></a>
<a id="trace-651"></a>
<a id="trace-733"></a>
<a id="trace-740"></a>
<a id="trace-752"></a>
<a id="trace-881"></a>
<a id="trace-894"></a>
<a id="trace-913"></a>
<a id="trace-932"></a>
<a id="trace-947"></a>
<a id="trace-978"></a>
<a id="trace-997"></a>
<a id="trace-1077"></a>
<a id="trace-1091"></a>
<a id="trace-1107"></a>
<a id="trace-1123"></a>
<a id="trace-1133"></a>
<a id="trace-1146"></a>
<a id="trace-1358"></a>
<a id="trace-1376"></a>
<a id="trace-1391"></a>
<a id="trace-1408"></a>
<a id="trace-1490"></a>
<a id="trace-1518"></a>
<a id="trace-1533"></a>
<a id="trace-1547"></a>
<a id="trace-1773"></a>
<a id="trace-1788"></a>
<a id="trace-2030"></a>
<a id="trace-2046"></a>
<a id="trace-2075"></a>
<a id="trace-2105"></a>
<a id="trace-2197"></a>
<a id="trace-2217"></a>
<a id="trace-2244"></a>
<a id="trace-2252"></a>
<a id="trace-2470"></a>
<a id="trace-2477"></a>
<a id="trace-2507"></a>
<a id="trace-2521"></a>
<a id="trace-2531"></a>
<a id="trace-2559"></a>
<a id="trace-2642"></a>
<a id="trace-2654"></a>
<a id="trace-2665"></a>
<a id="trace-2673"></a>
<a id="trace-2687"></a>
<a id="trace-2883"></a>
<a id="trace-2899"></a>
<a id="trace-2913"></a>
<a id="trace-2937"></a>
<a id="trace-2949"></a>
<a id="trace-3023"></a>
<a id="trace-3032"></a>
<a id="trace-3043"></a>
<a id="trace-3053"></a>
<a id="trace-3059"></a>
<a id="trace-3066"></a>
<a id="trace-3079"></a>
<a id="trace-3086"></a>
<a id="trace-3096"></a>
<a id="trace-3105"></a>
<a id="trace-3179"></a>
<a id="trace-3185"></a>
<a id="trace-3194"></a>
<a id="trace-3202"></a>
<a id="trace-3212"></a>
<a id="trace-3216"></a>
<a id="trace-3222"></a>
<a id="trace-3226"></a>
<a id="trace-3239"></a>
<a id="trace-3248"></a>
<a id="trace-3319"></a>
<a id="trace-3326"></a>
<a id="trace-3336"></a>
<a id="trace-3342"></a>
<a id="trace-3352"></a>
<a id="trace-3357"></a>
<a id="trace-3365"></a>
<a id="trace-3370"></a>
<a id="trace-3382"></a>
<a id="trace-3388"></a>
<a id="trace-3458"></a>
<a id="trace-3463"></a>
<a id="trace-3470"></a>
<a id="trace-3477"></a>
<a id="trace-3489"></a>
<a id="trace-3498"></a>
<a id="trace-3509"></a>
<a id="trace-3516"></a>
<a id="trace-3532"></a>
<a id="trace-3539"></a>
<a id="trace-3609"></a>
<a id="trace-3617"></a>
<a id="trace-3627"></a>
<a id="trace-3635"></a>
<a id="trace-3646"></a>
<a id="trace-3656"></a>
<a id="trace-3667"></a>
<a id="trace-3675"></a>
<a id="trace-3689"></a>
<a id="trace-3696"></a>
<a id="trace-3767"></a>
<a id="trace-3773"></a>
<a id="trace-3780"></a>
<a id="trace-3787"></a>
<a id="trace-3796"></a>
<a id="trace-3804"></a>
<a id="trace-3815"></a>
<a id="trace-3826"></a>
<a id="trace-3844"></a>
<a id="trace-3855"></a>
<a id="trace-3932"></a>
<a id="trace-3949"></a>
<a id="trace-3960"></a>
<a id="trace-3970"></a>
<a id="trace-3976"></a>
<a id="trace-3987"></a>
<a id="trace-3996"></a>
<a id="trace-4010"></a>
<a id="trace-4019"></a>
<a id="trace-4092"></a>
<a id="trace-4100"></a>
<a id="trace-4110"></a>
<a id="trace-4117"></a>
<a id="trace-4126"></a>
<a id="trace-4133"></a>
<a id="trace-4141"></a>
<a id="trace-4147"></a>
<a id="trace-4158"></a>
<a id="trace-4165"></a>
<a id="trace-4233"></a>
<a id="trace-4244"></a>
<a id="trace-4253"></a>
<a id="trace-4261"></a>
<a id="trace-4272"></a>
<a id="trace-4277"></a>
<a id="trace-4285"></a>
<a id="trace-4291"></a>
<a id="trace-4302"></a>
<a id="trace-4308"></a>
<a id="trace-4378"></a>
<a id="trace-4382"></a>
<a id="trace-4390"></a>
<a id="trace-4394"></a>
<a id="trace-4402"></a>
<a id="trace-4409"></a>
<a id="trace-4419"></a>
<a id="trace-4424"></a>
<a id="trace-4438"></a>
<a id="trace-4445"></a>
<a id="trace-4518"></a>
<a id="trace-4529"></a>
<a id="trace-4539"></a>
<a id="trace-4547"></a>
<a id="trace-4556"></a>
<a id="trace-4567"></a>
<a id="trace-4577"></a>
<a id="trace-4583"></a>
<a id="trace-4600"></a>
<a id="trace-4607"></a>
<a id="trace-4676"></a>
<a id="trace-4684"></a>
<a id="trace-4695"></a>
<a id="trace-4700"></a>
<a id="trace-4710"></a>
<a id="trace-4717"></a>
<a id="trace-4727"></a>
<a id="trace-4734"></a>
<a id="trace-4747"></a>
<a id="trace-4757"></a>
<a id="trace-4830"></a>
<a id="trace-4839"></a>
<a id="trace-4849"></a>
<a id="trace-4857"></a>
<a id="trace-4869"></a>
<a id="trace-4878"></a>
<a id="trace-4884"></a>
<a id="trace-4888"></a>
<a id="trace-4898"></a>
<a id="trace-4902"></a>
<a id="trace-4972"></a>
<a id="trace-4978"></a>
<a id="trace-4989"></a>
<a id="trace-5002"></a>
<a id="trace-5022"></a>
<a id="trace-5033"></a>
<a id="trace-5127"></a>
<a id="trace-5139"></a>
<a id="trace-5157"></a>
<a id="trace-5168"></a>
<a id="trace-5244"></a>
<a id="trace-5251"></a>
<a id="trace-5261"></a>
<a id="trace-5267"></a>
<a id="trace-5384"></a>
<a id="trace-5396"></a>
<a id="trace-5412"></a>
<a id="trace-5422"></a>
<a id="trace-5439"></a>
<a id="trace-5447"></a>
<a id="trace-5521"></a>
<a id="trace-5529"></a>
<a id="trace-5540"></a>
<a id="trace-5548"></a>
<a id="trace-5563"></a>
<a id="trace-5577"></a>
<a id="trace-5593"></a>
<a id="trace-5603"></a>
<a id="trace-5617"></a>
<a id="trace-5625"></a>
<a id="trace-5931"></a>
<a id="trace-5943"></a>
<a id="trace-6214"></a>
<a id="trace-6236"></a>
<a id="trace-6256"></a>
<a id="trace-6266"></a>
<a id="trace-6519"></a>
<a id="trace-6529"></a>
<a id="trace-6559"></a>
<a id="trace-6570"></a>
<a id="trace-6897"></a>
<a id="trace-6919"></a>
<a id="trace-6936"></a>
<a id="trace-6950"></a>
<a id="trace-7199"></a>
<a id="trace-7220"></a>
<a id="trace-7233"></a>
<a id="trace-7245"></a>
<a id="trace-7271"></a>
<a id="trace-7279"></a>
<a id="trace-7356"></a>
<a id="trace-7368"></a>
<a id="trace-7376"></a>
<a id="trace-7385"></a>
<a id="trace-7394"></a>
<a id="trace-7403"></a>
<a id="trace-7414"></a>
<a id="trace-9538"></a>
<a id="trace-9551"></a>
<a id="trace-9562"></a>
<a id="trace-9629"></a>
<a id="trace-9642"></a>
<a id="trace-9801"></a>
<a id="trace-9808"></a>
<a id="trace-9820"></a>
<a id="trace-9839"></a>
<a id="trace-9849"></a>
<a id="trace-9856"></a>
<a id="trace-9862"></a>
<a id="trace-9877"></a>
<a id="trace-9942"></a>
<a id="trace-9946"></a>
<a id="trace-9960"></a>
<a id="trace-9969"></a>
<a id="trace-9981"></a>
<a id="trace-9992"></a>
<a id="trace-10001"></a>
<a id="trace-10010"></a>
<a id="trace-10023"></a>
<a id="trace-10032"></a>
<a id="trace-10097"></a>
<a id="trace-10102"></a>
<a id="trace-10109"></a>
<a id="trace-10116"></a>
<a id="trace-10122"></a>
<a id="trace-10128"></a>
<a id="trace-10133"></a>
<a id="trace-10140"></a>
<a id="trace-10146"></a>
<a id="trace-10152"></a>
<a id="trace-10217"></a>
<a id="trace-10221"></a>
<a id="trace-10226"></a>
<a id="trace-10228"></a>
<a id="trace-10232"></a>
<a id="trace-10236"></a>
<a id="trace-10241"></a>
<a id="trace-10245"></a>
<a id="trace-10249"></a>
<a id="trace-10254"></a>
<a id="trace-10316"></a>
<a id="trace-10319"></a>
<a id="trace-10328"></a>
<a id="trace-10331"></a>
<a id="trace-10336"></a>
<a id="trace-10339"></a>
<a id="trace-10343"></a>
<a id="trace-10345"></a>
<a id="trace-10349"></a>
<a id="trace-10355"></a>
<a id="trace-10417"></a>
<a id="trace-10422"></a>
<a id="trace-10427"></a>
<a id="trace-10430"></a>
<a id="trace-10436"></a>
<a id="trace-10439"></a>
<a id="trace-10443"></a>
<a id="trace-10445"></a>
<a id="trace-10449"></a>
<a id="trace-10456"></a>
<a id="trace-10518"></a>
<a id="trace-10522"></a>
<a id="trace-10527"></a>
<a id="trace-10529"></a>
<a id="trace-10534"></a>
<a id="trace-10538"></a>
<a id="trace-10543"></a>
<a id="trace-10545"></a>
<a id="trace-10549"></a>
<a id="trace-10555"></a>
<a id="trace-10617"></a>
<a id="trace-10620"></a>
<a id="trace-10624"></a>
<a id="trace-10626"></a>
<a id="trace-10631"></a>
<a id="trace-10634"></a>
<a id="trace-10639"></a>
<a id="trace-10641"></a>
<a id="trace-10646"></a>
<a id="trace-10651"></a>
<a id="trace-10713"></a>
<a id="trace-10717"></a>
<a id="trace-10721"></a>
<a id="trace-10724"></a>
<a id="trace-10729"></a>
<a id="trace-10733"></a>
<a id="trace-10736"></a>
<a id="trace-10739"></a>
<a id="trace-10744"></a>
<a id="trace-10749"></a>
<a id="trace-10811"></a>
<a id="trace-10816"></a>
<a id="trace-10821"></a>
<a id="trace-10823"></a>
<a id="trace-10828"></a>
<a id="trace-10833"></a>
<a id="trace-10837"></a>
<a id="trace-10839"></a>
<a id="trace-10844"></a>
<a id="trace-10849"></a>
<a id="trace-10913"></a>
<a id="trace-10918"></a>
<a id="trace-10924"></a>
<a id="trace-10927"></a>
<a id="trace-10932"></a>
<a id="trace-10937"></a>
<a id="trace-10940"></a>
<a id="trace-10943"></a>
<a id="trace-10948"></a>
<a id="trace-10952"></a>
<a id="trace-11015"></a>
<a id="trace-11017"></a>
<a id="trace-11021"></a>
<a id="trace-11023"></a>
<a id="trace-11031"></a>
<a id="trace-11035"></a>
<a id="trace-11039"></a>
<a id="trace-11042"></a>
<a id="trace-11046"></a>
<a id="trace-11050"></a>
<a id="trace-11113"></a>
<a id="trace-11115"></a>
<a id="trace-11121"></a>
<a id="trace-11123"></a>
<a id="trace-11130"></a>
<a id="trace-11134"></a>
<a id="trace-11138"></a>
<a id="trace-11144"></a>
<a id="trace-11148"></a>
<a id="trace-11152"></a>
<a id="trace-11215"></a>
<a id="trace-11217"></a>
<a id="trace-11221"></a>
<a id="trace-11223"></a>
<a id="trace-11228"></a>
<a id="trace-11232"></a>
<a id="trace-11235"></a>
<a id="trace-11239"></a>
<a id="trace-11243"></a>
<a id="trace-11247"></a>
<a id="trace-11310"></a>
<a id="trace-11312"></a>
<a id="trace-11316"></a>
<a id="trace-11318"></a>
<a id="trace-11323"></a>
<a id="trace-11327"></a>
<a id="trace-11332"></a>
<a id="trace-11336"></a>
<a id="trace-11340"></a>
<a id="trace-11344"></a>
<a id="trace-11407"></a>
<a id="trace-11410"></a>
<a id="trace-11416"></a>
<a id="trace-11419"></a>
<a id="trace-11428"></a>
<a id="trace-11432"></a>
<a id="trace-11437"></a>
<a id="trace-11442"></a>
<a id="trace-11447"></a>
<a id="trace-11454"></a>
<a id="trace-11517"></a>
<a id="trace-11522"></a>
<a id="trace-11527"></a>
<a id="trace-11530"></a>
<a id="trace-11538"></a>
<a id="trace-11542"></a>
<a id="trace-11548"></a>
<a id="trace-11553"></a>
<a id="trace-11559"></a>
<a id="trace-11564"></a>
<a id="trace-11629"></a>
<a id="trace-11640"></a>
<a id="trace-11645"></a>
<a id="trace-11650"></a>
<a id="trace-11657"></a>
<a id="trace-11661"></a>
<a id="trace-11666"></a>
<a id="trace-11670"></a>
<a id="trace-11676"></a>
<a id="trace-11681"></a>
<a id="trace-11744"></a>
<a id="trace-11750"></a>
<a id="trace-11755"></a>
<a id="trace-11763"></a>
<a id="trace-11776"></a>
<a id="trace-11782"></a>
<a id="trace-11786"></a>
<a id="trace-11790"></a>
<a id="trace-11795"></a>
<a id="trace-11800"></a>
<a id="trace-11864"></a>
<a id="trace-11867"></a>
<a id="trace-11873"></a>
<a id="trace-11876"></a>
<a id="trace-11886"></a>
<a id="trace-11892"></a>
<a id="trace-11899"></a>
<a id="trace-11911"></a>
<a id="trace-11915"></a>
<a id="trace-11920"></a>
<a id="trace-11983"></a>
<a id="trace-11986"></a>
<a id="trace-11993"></a>
<a id="trace-11996"></a>
<a id="trace-12004"></a>
<a id="trace-12008"></a>
<a id="trace-12012"></a>
<a id="trace-12021"></a>
<a id="trace-12025"></a>
<a id="trace-12035"></a>
<a id="trace-12103"></a>
<a id="trace-12106"></a>
<a id="trace-12112"></a>
<a id="trace-12115"></a>
<a id="trace-12124"></a>
<a id="trace-12128"></a>
<a id="trace-12133"></a>
<a id="trace-12137"></a>
<a id="trace-12141"></a>
<a id="trace-12148"></a>
<a id="trace-12213"></a>
<a id="trace-12218"></a>
<a id="trace-12226"></a>
<a id="trace-12229"></a>
<a id="trace-12243"></a>
<a id="trace-12247"></a>
<a id="trace-12253"></a>
<a id="trace-12257"></a>
<a id="trace-12262"></a>
<a id="trace-12267"></a>
<a id="trace-12329"></a>
<a id="trace-12334"></a>
<a id="trace-12339"></a>
<a id="trace-12344"></a>
<a id="trace-12354"></a>
<a id="trace-12358"></a>
<a id="trace-12366"></a>
<a id="trace-12376"></a>
<a id="trace-12382"></a>
<a id="trace-12387"></a>
<a id="trace-12450"></a>
<a id="trace-12453"></a>
<a id="trace-12458"></a>
<a id="trace-12463"></a>
<a id="trace-12470"></a>
<a id="trace-12476"></a>
<a id="trace-12480"></a>
<a id="trace-12487"></a>
<a id="trace-12492"></a>
<a id="trace-12500"></a>
<a id="trace-12570"></a>
<a id="trace-12573"></a>
<a id="trace-12579"></a>
<a id="trace-12582"></a>
<a id="trace-12589"></a>
<a id="trace-12595"></a>
<a id="trace-12599"></a>
<a id="trace-12605"></a>
<a id="trace-12609"></a>
<a id="trace-12614"></a>
<a id="trace-12680"></a>
<a id="trace-12683"></a>
<a id="trace-12693"></a>
<a id="trace-12702"></a>
<a id="trace-12710"></a>
<a id="trace-12714"></a>
<a id="trace-12718"></a>
<a id="trace-12724"></a>
<a id="trace-12728"></a>
<a id="trace-12735"></a>
<a id="trace-12797"></a>
<a id="trace-12800"></a>
<a id="trace-12806"></a>
<a id="trace-12812"></a>
<a id="trace-12821"></a>
<a id="trace-12828"></a>
<a id="trace-12839"></a>
<a id="trace-12843"></a>
<a id="trace-12847"></a>
<a id="trace-12854"></a>
<a id="trace-12916"></a>
<a id="trace-12921"></a>
<a id="trace-12926"></a>
<a id="trace-12929"></a>
<a id="trace-12937"></a>
<a id="trace-12941"></a>
<a id="trace-12950"></a>
<a id="trace-12954"></a>
<a id="trace-12962"></a>
<a id="trace-12967"></a>
<a id="trace-13035"></a>
<a id="trace-13040"></a>
<a id="trace-13045"></a>
<a id="trace-13050"></a>
<a id="trace-13057"></a>
<a id="trace-13061"></a>
<a id="trace-13066"></a>
<a id="trace-13070"></a>
<a id="trace-13076"></a>
<a id="trace-13081"></a>
<a id="trace-13147"></a>
<a id="trace-13150"></a>
<a id="trace-13158"></a>
<a id="trace-13169"></a>
<a id="trace-13176"></a>
<a id="trace-13182"></a>
<a id="trace-13186"></a>
<a id="trace-13190"></a>
<a id="trace-13195"></a>
<a id="trace-13200"></a>
<a id="trace-13264"></a>
<a id="trace-13267"></a>
<a id="trace-13273"></a>
<a id="trace-13279"></a>
<a id="trace-13294"></a>
<a id="trace-13304"></a>
<a id="trace-13310"></a>
<a id="trace-13314"></a>
<a id="trace-13319"></a>
<a id="trace-13382"></a>
<a id="trace-13385"></a>
<a id="trace-13392"></a>
<a id="trace-13395"></a>
<a id="trace-13403"></a>
<a id="trace-13407"></a>
<a id="trace-13414"></a>
<a id="trace-13420"></a>
<a id="trace-13427"></a>
<a id="trace-13440"></a>
<a id="trace-13502"></a>
<a id="trace-13505"></a>
<a id="trace-13511"></a>
<a id="trace-13514"></a>
<a id="trace-13523"></a>
<a id="trace-13527"></a>
<a id="trace-13532"></a>
<a id="trace-13536"></a>
<a id="trace-13540"></a>
<a id="trace-13550"></a>
<a id="trace-13612"></a>
<a id="trace-13620"></a>
<a id="trace-13631"></a>
<a id="trace-13634"></a>
<a id="trace-13642"></a>
<a id="trace-13646"></a>
<a id="trace-13652"></a>
<a id="trace-13656"></a>
<a id="trace-13661"></a>
<a id="trace-13666"></a>
<a id="trace-13728"></a>
<a id="trace-13733"></a>
<a id="trace-13741"></a>
<a id="trace-13746"></a>
<a id="trace-13756"></a>
<a id="trace-13760"></a>
<a id="trace-13771"></a>
<a id="trace-13775"></a>
<a id="trace-13781"></a>
<a id="trace-13786"></a>
<a id="trace-13849"></a>
<a id="trace-13852"></a>
<a id="trace-13857"></a>
<a id="trace-13862"></a>
<a id="trace-13869"></a>
<a id="trace-13875"></a>
<a id="trace-13882"></a>
<a id="trace-13886"></a>
<a id="trace-13894"></a>
<a id="trace-13905"></a>
<a id="trace-13969"></a>
<a id="trace-13972"></a>
<a id="trace-13978"></a>
<a id="trace-13981"></a>
<a id="trace-13988"></a>
<a id="trace-13994"></a>
<a id="trace-13998"></a>
<a id="trace-14004"></a>
<a id="trace-14008"></a>
<a id="trace-14016"></a>
<a id="trace-14079"></a>
<a id="trace-14085"></a>
<a id="trace-14098"></a>
<a id="trace-14101"></a>
<a id="trace-14109"></a>
<a id="trace-14113"></a>
<a id="trace-14117"></a>
<a id="trace-14123"></a>
<a id="trace-14127"></a>
<a id="trace-14134"></a>
<a id="trace-14196"></a>
<a id="trace-14199"></a>
<a id="trace-14208"></a>
<a id="trace-14211"></a>
<a id="trace-14223"></a>
<a id="trace-14233"></a>
<a id="trace-14238"></a>
<a id="trace-14242"></a>
<a id="trace-14246"></a>
<a id="trace-14253"></a>
<a id="trace-14315"></a>
<a id="trace-14320"></a>
<a id="trace-14325"></a>
<a id="trace-14328"></a>
<a id="trace-14336"></a>
<a id="trace-14343"></a>
<a id="trace-14349"></a>
<a id="trace-14356"></a>
<a id="trace-14367"></a>
<a id="trace-14372"></a>
<a id="trace-14434"></a>
<a id="trace-14439"></a>
<a id="trace-14444"></a>
<a id="trace-14449"></a>
<a id="trace-14456"></a>
<a id="trace-14460"></a>
<a id="trace-14465"></a>
<a id="trace-14469"></a>
<a id="trace-14478"></a>
<a id="trace-14483"></a>
<a id="trace-14549"></a>
<a id="trace-14552"></a>
<a id="trace-14563"></a>
<a id="trace-14568"></a>
<a id="trace-14575"></a>
<a id="trace-14581"></a>
<a id="trace-14585"></a>
<a id="trace-14589"></a>
<a id="trace-14594"></a>
<a id="trace-14599"></a>
<a id="trace-14663"></a>
<a id="trace-14666"></a>
<a id="trace-14675"></a>
<a id="trace-14678"></a>
<a id="trace-14688"></a>
<a id="trace-14700"></a>
<a id="trace-14704"></a>
<a id="trace-14710"></a>
<a id="trace-14714"></a>
<a id="trace-14719"></a>
<a id="trace-14782"></a>
<a id="trace-14785"></a>
<a id="trace-14792"></a>
<a id="trace-14795"></a>
<a id="trace-14803"></a>
<a id="trace-14810"></a>
<a id="trace-14814"></a>
<a id="trace-14823"></a>
<a id="trace-14833"></a>
<a id="trace-14840"></a>
<a id="trace-14902"></a>
<a id="trace-14905"></a>
<a id="trace-14911"></a>
<a id="trace-14914"></a>
<a id="trace-14923"></a>
<a id="trace-14927"></a>
<a id="trace-14932"></a>
<a id="trace-14936"></a>
<a id="trace-14943"></a>
<a id="trace-14950"></a>
- 1.60s–359.80s (×715), actor 37, squad 4 (trace 334): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5617410301765847, 'next_transition': 353}.
<a id="trace-628"></a>
<a id="trace-642"></a>
<a id="trace-649"></a>
<a id="trace-731"></a>
<a id="trace-738"></a>
<a id="trace-750"></a>
- 8.70s–11.20s (×6), actor 5, squad 0 (trace 628): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 437. Next observer evidence: {'until': 9, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299875759223882, 'next_transition': 642}.
<a id="trace-758"></a>
- 11.55s–11.55s (×1), actor 0, squad 0 (trace 758): traveling overwatch. Knowledge: actor memory at 10.00s, trace 653. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5094062240570676, 'next_transition': 930}.
<a id="trace-759"></a>
- 11.55s–11.55s (×1), actor 0, squad 0 (trace 759): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 653. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5094062240570676, 'next_transition': 930}.
<a id="trace-930"></a>
- 13.20s–13.20s (×1), actor 5, squad 0 (trace 930): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 656. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199990905496767, 'next_transition': 150}.
<a id="trace-150"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (events line 150): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299994111454873, 'next_transition': 976}.
<a id="trace-949"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 949): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 949. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299994111454873, 'next_transition': 976}.
<a id="trace-950"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 950): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 950. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299994111454873, 'next_transition': 976}.
<a id="trace-976"></a>
<a id="trace-995"></a>
<a id="trace-1075"></a>
<a id="trace-1089"></a>
<a id="trace-1105"></a>
<a id="trace-1121"></a>
<a id="trace-1131"></a>
<a id="trace-1144"></a>
- 14.20s–17.75s (×8), actor 5, squad 0 (trace 976): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 13.75s, trace 950. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199979344724569, 'next_transition': 995}.
<a id="trace-1151"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1151): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1000. Next observer evidence: {'until': 18.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5997983994404184, 'next_transition': 1374}.
<a id="trace-1152"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1152): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1000. Next observer evidence: {'until': 18.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5997983994404184, 'next_transition': 1374}.
<a id="trace-1153"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1153): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1000. Next observer evidence: {'until': 18.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5997983994404184, 'next_transition': 1374}.
<a id="trace-1374"></a>
<a id="trace-1389"></a>
<a id="trace-1406"></a>
<a id="trace-1488"></a>
<a id="trace-1516"></a>
<a id="trace-1545"></a>
- 18.75s–21.75s (×6), actor 5, squad 0 (trace 1374): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1003. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500841911588445, 'next_transition': 1389}.
<a id="trace-1551"></a>
- 22.00s–22.00s (×1), actor 0, squad 0 (trace 1551): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1409. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500233330740782, 'next_transition': 1774}.
<a id="trace-1774"></a>
- 22.25s–22.25s (×1), actor 0, squad 0 (trace 1774): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 1409. Next observer evidence: {'until': 22.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4107282430074335, 'next_transition': 1796}.
<a id="trace-1796"></a>
- 22.95s–22.95s (×1), actor 0, squad 0 (trace 1796): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1409. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4057168578265256, 'next_transition': 2028}.
<a id="trace-2028"></a>
<a id="trace-2073"></a>
<a id="trace-2103"></a>
<a id="trace-2195"></a>
<a id="trace-2215"></a>
- 23.25s–25.75s (×5), actor 5, squad 0 (trace 2028): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1412. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7240015802360292, 'next_transition': 2073}.
<a id="trace-2260"></a>
- 27.05s–27.05s (×1), actor 0, squad 0 (trace 2260): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 2111. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08013023338776552, 'next_transition': 2468}.
<a id="trace-2468"></a>
<a id="trace-2505"></a>
<a id="trace-2557"></a>
<a id="trace-2640"></a>
- 27.25s–30.25s (×4), actor 5, squad 0 (trace 2468): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2114. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42193669035703035, 'next_transition': 2505}.
<a id="trace-2648"></a>
- 30.65s–30.65s (×1), actor 0, squad 0 (trace 2648): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 2560. Next observer evidence: None.
<a id="trace-2652"></a>
<a id="trace-2671"></a>
<a id="trace-2685"></a>
- 30.75s–32.25s (×3), actor 5, squad 0 (trace 2652): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2563. Next observer evidence: {'until': 31.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.39878013400940066, 'next_transition': 2671}.
<a id="trace-2689"></a>
- 32.55s–32.55s (×1), actor 0, squad 0 (trace 2689): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 30.00s, trace 2560. Next observer evidence: {'until': 32.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2691}.
<a id="trace-2691"></a>
- 32.65s–32.65s (×1), actor 0, squad 0 (trace 2691): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 2560. Next observer evidence: {'until': 33.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.31497874355087613, 'next_transition': 2897}.
<a id="trace-2897"></a>
<a id="trace-2911"></a>
<a id="trace-2935"></a>
<a id="trace-2947"></a>
<a id="trace-3021"></a>
<a id="trace-3030"></a>
<a id="trace-3051"></a>
<a id="trace-3057"></a>
- 33.25s–37.25s (×8), actor 5, squad 0 (trace 2897): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2563. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2911}.
<a id="trace-3061"></a>
- 37.40s–37.40s (×1), actor 1, squad 0 (trace 3061): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 2950. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0079824315929327, 'next_transition': 3077}.
<a id="trace-3063"></a>
- 37.40s–37.40s (×1), actor 1, squad 0 (trace 3063): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 35.00s, trace 2950. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0079824315929327, 'next_transition': 3077}.
<a id="trace-3077"></a>
<a id="trace-3084"></a>
<a id="trace-3103"></a>
<a id="trace-3177"></a>
<a id="trace-3183"></a>
- 38.25s–40.75s (×5), actor 5, squad 0 (trace 3077): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2952. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040291689971916, 'next_transition': 3084}.
<a id="trace-471"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (events line 471): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3196"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (trace 3196): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.616295 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 41.35s, trace 3196. Next observer evidence: {'until': 42, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22050000044444568, 'next_transition': 3203}.
<a id="trace-3197"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (trace 3197): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.616295 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 41.35s, trace 3197. Next observer evidence: {'until': 42, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22050000044444568, 'next_transition': 3203}.
<a id="trace-3203"></a>
- 42.10s–42.10s (×1), actor 1, squad 0 (trace 3203): NeedSupport. Knowledge: actor memory at 40.00s, trace 3107. Next observer evidence: {'until': 43.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3224}.
<a id="trace-3224"></a>
<a id="trace-3324"></a>
<a id="trace-3334"></a>
<a id="trace-3340"></a>
<a id="trace-3350"></a>
<a id="trace-3355"></a>
<a id="trace-3368"></a>
<a id="trace-3380"></a>
<a id="trace-3386"></a>
<a id="trace-3456"></a>
<a id="trace-3461"></a>
<a id="trace-3468"></a>
<a id="trace-3487"></a>
<a id="trace-3496"></a>
<a id="trace-3507"></a>
<a id="trace-3514"></a>
<a id="trace-3530"></a>
<a id="trace-3537"></a>
<a id="trace-3615"></a>
<a id="trace-3625"></a>
<a id="trace-3633"></a>
<a id="trace-3644"></a>
<a id="trace-3654"></a>
<a id="trace-3665"></a>
<a id="trace-3673"></a>
<a id="trace-3687"></a>
<a id="trace-3694"></a>
<a id="trace-3765"></a>
<a id="trace-3771"></a>
<a id="trace-3778"></a>
<a id="trace-3785"></a>
<a id="trace-3794"></a>
<a id="trace-3802"></a>
<a id="trace-3813"></a>
<a id="trace-3824"></a>
<a id="trace-3842"></a>
<a id="trace-3853"></a>
<a id="trace-3930"></a>
<a id="trace-3938"></a>
<a id="trace-3968"></a>
<a id="trace-3974"></a>
<a id="trace-4008"></a>
<a id="trace-4017"></a>
<a id="trace-4090"></a>
<a id="trace-4098"></a>
<a id="trace-4108"></a>
<a id="trace-4124"></a>
<a id="trace-4139"></a>
<a id="trace-4145"></a>
<a id="trace-4156"></a>
<a id="trace-4163"></a>
<a id="trace-4231"></a>
<a id="trace-4242"></a>
<a id="trace-4251"></a>
<a id="trace-4259"></a>
<a id="trace-4270"></a>
<a id="trace-4275"></a>
<a id="trace-4289"></a>
<a id="trace-4376"></a>
<a id="trace-4388"></a>
<a id="trace-4400"></a>
<a id="trace-4407"></a>
<a id="trace-4417"></a>
<a id="trace-4422"></a>
<a id="trace-4436"></a>
<a id="trace-4443"></a>
<a id="trace-4516"></a>
<a id="trace-4545"></a>
<a id="trace-4565"></a>
<a id="trace-4575"></a>
- 43.75s–88.25s (×70), actor 5, squad 0 (trace 3224): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 41.35s, trace 3197. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.017640000113377362, 'next_transition': 3324}.
<a id="trace-4584"></a>
- 88.75s–88.75s (×1), actor 1, squad 0 (trace 4584): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 4448. Next observer evidence: {'until': 89.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4598}.
<a id="trace-4585"></a>
- 88.75s–88.75s (×1), actor 1, squad 0 (trace 4585): ; retain held slots. Knowledge: actor memory at 85.00s, trace 4448. Next observer evidence: {'until': 89.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4598}.
<a id="trace-4598"></a>
<a id="trace-4605"></a>
<a id="trace-4674"></a>
<a id="trace-4682"></a>
<a id="trace-4693"></a>
<a id="trace-4698"></a>
<a id="trace-4708"></a>
<a id="trace-4715"></a>
<a id="trace-4725"></a>
<a id="trace-4732"></a>
<a id="trace-4755"></a>
<a id="trace-4837"></a>
<a id="trace-4847"></a>
<a id="trace-4855"></a>
<a id="trace-4867"></a>
<a id="trace-4876"></a>
<a id="trace-4882"></a>
<a id="trace-4886"></a>
<a id="trace-4896"></a>
<a id="trace-4987"></a>
- 89.25s–101.25s (×20), actor 5, squad 0 (trace 4598): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 4450. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4605}.
<a id="trace-4996"></a>
- 101.45s–101.45s (×1), actor 4, squad 0 (trace 4996): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 100.00s, trace 4904. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31497376478049716, 'next_transition': 5000}.
<a id="trace-5000"></a>
- 101.75s–101.75s (×1), actor 5, squad 0 (trace 5000): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 4905. Next observer evidence: {'until': 101.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315013912391183, 'next_transition': 5007}.
<a id="trace-5007"></a>
- 101.90s–101.90s (×1), actor 4, squad 0 (trace 5007): Reorganise: completed/failed drill. Knowledge: actor memory at 100.00s, trace 4904. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299876764667697, 'next_transition': 5020}.
<a id="trace-5010"></a>
- 101.90s–101.90s (×1), actor 4, squad 0 (trace 5010): MoveTactically. Knowledge: actor memory at 100.00s, trace 4904. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299876764667697, 'next_transition': 5020}.
<a id="trace-5011"></a>
- 101.90s–101.90s (×1), actor 4, squad 0 (trace 5011): Reorganise complete. Knowledge: actor memory at 100.00s, trace 4904. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299876764667697, 'next_transition': 5020}.
<a id="trace-5020"></a>
<a id="trace-5031"></a>
- 102.25s–102.75s (×2), actor 5, squad 0 (trace 5020): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 4905. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300174799162329, 'next_transition': 5031}.
<a id="trace-5034"></a>
- 102.90s–102.90s (×1), actor 4, squad 0 (trace 5034): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 100.00s, trace 4904. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5356041882356544, 'next_transition': 5137}.
<a id="trace-5137"></a>
- 103.75s–103.75s (×1), actor 5, squad 0 (trace 5137): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 4905. Next observer evidence: {'until': 106.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.189490521827146, 'next_transition': 5268}.
<a id="trace-5268"></a>
- 106.90s–106.90s (×1), actor 4, squad 0 (trace 5268): traveling overwatch. Knowledge: actor memory at 105.00s, trace 5176. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299930194195531, 'next_transition': 5382}.
<a id="trace-5269"></a>
- 106.90s–106.90s (×1), actor 4, squad 0 (trace 5269): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 105.00s, trace 5176. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299930194195531, 'next_transition': 5382}.
<a id="trace-5382"></a>
<a id="trace-5394"></a>
<a id="trace-5410"></a>
<a id="trace-5437"></a>
<a id="trace-5445"></a>
<a id="trace-5527"></a>
<a id="trace-5538"></a>
<a id="trace-5546"></a>
- 107.25s–111.75s (×8), actor 5, squad 0 (trace 5382): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 5177. Next observer evidence: {'until': 107.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300020174968581, 'next_transition': 5394}.
<a id="trace-1826"></a>
- 112.30s–112.30s (×1), actor 5, squad 0 (events line 1826): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2372313861519986, 'next_transition': 5575}.
<a id="trace-5565"></a>
- 112.30s–112.30s (×1), actor 5, squad 0 (trace 5565): renew committed intent (75 s lifetime). Knowledge: actor memory at 112.30s, trace 5565. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2372313861519986, 'next_transition': 5575}.
<a id="trace-5575"></a>
<a id="trace-5591"></a>
<a id="trace-5601"></a>
<a id="trace-5615"></a>
- 112.75s–114.25s (×4), actor 5, squad 0 (trace 5575): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 112.30s, trace 5565. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.763037051071702, 'next_transition': 5591}.
<a id="trace-5627"></a>
- 114.90s–114.90s (×1), actor 4, squad 0 (trace 5627): ReactToContact: cover and return fire. Knowledge: actor memory at 110.00s, trace 5453. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.252122085630475, 'next_transition': 5929}.
<a id="trace-5628"></a>
- 114.90s–114.90s (×1), actor 4, squad 0 (trace 5628): bounding overwatch. Knowledge: actor memory at 110.00s, trace 5453. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.252122085630475, 'next_transition': 5929}.
<a id="trace-5629"></a>
- 114.90s–114.90s (×1), actor 4, squad 0 (trace 5629): new contact inside 100 m. Knowledge: actor memory at 110.00s, trace 5453. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.252122085630475, 'next_transition': 5929}.
<a id="trace-5929"></a>
<a id="trace-5941"></a>
- 115.25s–115.75s (×2), actor 5, squad 0 (trace 5929): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 5863. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1449962207505282, 'next_transition': 5941}.
<a id="trace-5946"></a>
- 115.90s–115.90s (×1), actor 4, squad 0 (trace 5946): new contact inside 100 m. Knowledge: actor memory at 115.00s, trace 5862. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1738763935263494, 'next_transition': 6212}.
<a id="trace-6212"></a>
<a id="trace-6254"></a>
<a id="trace-6264"></a>
- 116.25s–117.75s (×3), actor 5, squad 0 (trace 6212): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 5863. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9393882137452285, 'next_transition': 6254}.
<a id="trace-6277"></a>
- 118.15s–118.15s (×1), actor 4, squad 0 (trace 6277): new contact inside 100 m. Knowledge: actor memory at 115.00s, trace 5862. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5571927407888022, 'next_transition': 6517}.
<a id="trace-6517"></a>
- 118.25s–118.25s (×1), actor 5, squad 0 (trace 6517): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 5863. Next observer evidence: {'until': 118.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5159218109214695, 'next_transition': 6522}.
<a id="trace-6522"></a>
- 118.40s–118.40s (×1), actor 4, squad 0 (trace 6522): received platoon directive; retain contact cover stage. Knowledge: actor memory at 115.00s, trace 5862. Next observer evidence: {'until': 119.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.547196377700894, 'next_transition': 6568}.
<a id="trace-6568"></a>
- 119.75s–119.75s (×1), actor 5, squad 0 (trace 6568): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 5863. Next observer evidence: {'until': 120, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7302148355314818, 'next_transition': 6592}.
<a id="trace-6592"></a>
- 120.15s–120.15s (×1), actor 4, squad 0 (trace 6592): new contact inside 100 m. Knowledge: actor memory at 120.00s, trace 6572. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23798710953330363, 'next_transition': 6895}.
<a id="trace-6895"></a>
<a id="trace-6917"></a>
<a id="trace-6934"></a>
<a id="trace-6948"></a>
- 120.25s–121.75s (×4), actor 5, squad 0 (trace 6895): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 6573. Next observer evidence: {'until': 120.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49575471246112224, 'next_transition': 6917}.
<a id="trace-6958"></a>
- 122.10s–122.10s (×1), actor 4, squad 0 (trace 6958): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 120.00s, trace 6572. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5044021501001629, 'next_transition': 7197}.
<a id="trace-7197"></a>
<a id="trace-7231"></a>
<a id="trace-7243"></a>
<a id="trace-7269"></a>
<a id="trace-7277"></a>
- 122.25s–124.75s (×5), actor 5, squad 0 (trace 7197): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 6573. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7257590034198342, 'next_transition': 7231}.
<a id="trace-7363"></a>
- 125.60s–125.60s (×1), actor 4, squad 0 (trace 7363): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 125.00s, trace 7289. Next observer evidence: None.
<a id="trace-7366"></a>
<a id="trace-7374"></a>
<a id="trace-7383"></a>
<a id="trace-7392"></a>
<a id="trace-7401"></a>
- 125.75s–127.75s (×5), actor 5, squad 0 (trace 7366): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 7290. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1437189693627816, 'next_transition': 7374}.
<a id="trace-7415"></a>
- 128.50s–128.50s (×1), actor 4, squad 0 (trace 7415): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 125.00s, trace 7289. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31681155735493777, 'next_transition': 9536}.
<a id="trace-9522"></a>
- 128.50s–128.50s (×1), actor 4, squad 0 (trace 9522): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 125.00s, trace 7289. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31681155735493777, 'next_transition': 9536}.
<a id="trace-9523"></a>
- 128.50s–128.50s (×1), actor 4, squad 0 (trace 9523): MoveTactically. Knowledge: actor memory at 125.00s, trace 7289. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31681155735493777, 'next_transition': 9536}.
<a id="trace-9524"></a>
- 128.50s–128.50s (×1), actor 4, squad 0 (trace 9524): contact cover complete: assessment resumes closure. Knowledge: actor memory at 125.00s, trace 7289. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31681155735493777, 'next_transition': 9536}.
<a id="trace-9536"></a>
<a id="trace-9549"></a>
<a id="trace-9560"></a>
<a id="trace-9627"></a>
- 128.80s–130.30s (×4), actor 5, squad 0 (trace 9536): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 7290. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31679898340936835, 'next_transition': 9549}.
<a id="trace-9646"></a>
- 131.15s–131.15s (×1), actor 4, squad 0 (trace 9646): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 130.00s, trace 9563. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.1599400598713867, 'next_transition': 9653}.
<a id="trace-9648"></a>
- 131.15s–131.15s (×1), actor 4, squad 0 (trace 9648): NeedSupport. Knowledge: actor memory at 130.00s, trace 9563. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.1599400598713867, 'next_transition': 9653}.
<a id="trace-9653"></a>
- 131.20s–131.20s (×1), actor 4, squad 0 (trace 9653): Reorganise: completed/failed drill. Knowledge: actor memory at 130.00s, trace 9563. Next observer evidence: None.
<a id="trace-9655"></a>
- 131.20s–131.20s (×1), actor 4, squad 0 (trace 9655): MoveTactically. Knowledge: actor memory at 130.00s, trace 9563. Next observer evidence: None.
<a id="trace-9656"></a>
- 131.20s–131.20s (×1), actor 4, squad 0 (trace 9656): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 130.00s, trace 9563. Next observer evidence: None.
<a id="trace-9799"></a>
<a id="trace-9806"></a>
<a id="trace-9818"></a>
<a id="trace-9847"></a>
<a id="trace-9854"></a>
<a id="trace-9875"></a>
<a id="trace-9944"></a>
<a id="trace-9958"></a>
<a id="trace-9967"></a>
- 131.30s–136.80s (×9), actor 5, squad 0 (trace 9799): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 9564. Next observer evidence: {'until': 131.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49354956618819545, 'next_transition': 9806}.
<a id="trace-9971"></a>
- 137.10s–137.10s (×1), actor 4, squad 0 (trace 9971): NeedSupport. Knowledge: actor memory at 135.00s, trace 9878. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2904180044158573, 'next_transition': 9990}.
<a id="trace-9990"></a>
<a id="trace-9999"></a>
<a id="trace-10008"></a>
<a id="trace-10021"></a>
<a id="trace-10030"></a>
<a id="trace-10095"></a>
<a id="trace-10100"></a>
<a id="trace-10107"></a>
<a id="trace-10114"></a>
<a id="trace-10120"></a>
<a id="trace-10131"></a>
<a id="trace-10138"></a>
<a id="trace-10150"></a>
<a id="trace-10215"></a>
- 137.80s–145.30s (×14), actor 5, squad 0 (trace 9990): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 9879. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2242002162007084, 'next_transition': 9999}.

## Net delivery

97 matched order/radio deliveries; 110 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.442s; maximum 6.100s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1409: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1418: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2111: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2115: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2120: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2121: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2122: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2560: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2561: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2563: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2564: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2566: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2568: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2569: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2570: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2571: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2950: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2952: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2953: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2955: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2956: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2957: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2958: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2959: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2960: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3107: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3109: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3110: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3112: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3113: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3114: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3115: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3116: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3117: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.35s leader 5, trace 3196: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.35s leader 5, trace 3197: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3251: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3253: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3254: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3256: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3257: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3258: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3259: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3260: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3261: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3389: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3391: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3392: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3394: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3395: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3396: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3397: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3398: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3399: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3541: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3543: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3544: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3546: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3547: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 3548: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3549: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3550: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3551: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3698: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 3699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3700: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3701: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 3702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3703: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3704: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 3705: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3706: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3707: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 3708: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 3860: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 3861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3862: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3863: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 3864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 3865: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 3866: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 3867: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 3868: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 3869: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 3870: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4021: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4023: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4024: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4026: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4027: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4028: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4029: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4030: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4031: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4166: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4168: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4169: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4171: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4172: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4173: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4174: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4175: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4309: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4311: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4312: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 4313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4314: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 4315: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4316: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4317: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4318: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 4448: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 4449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4450: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 4451: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 4452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4453: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 4454: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4455: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4456: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 4457: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 4608: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 4609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 4610: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 4611: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 4612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 4613: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 4614: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 4615: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 4616: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 4617: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 4761: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 4762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 4763: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 4764: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 4765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 4766: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 4767: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 4768: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 4769: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 4770: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 4904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 4905: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 4906: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 4907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 4908: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 4909: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 4910: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 4911: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 4912: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 5176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5177: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5178: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 5179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5180: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 5181: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5182: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5183: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 5184: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 5453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5454: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 5455: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 5456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5457: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 5458: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5459: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5460: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 5461: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 112.30s leader 5, trace 5565: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 5862: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 5863: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 5864: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 5865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 5866: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 5867: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 5868: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 5869: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 5870: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 6572: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6573: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6574: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 6575: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6576: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 6577: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6578: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6579: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6580: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 7289: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 7290: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 7291: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 7292: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 7293: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 7294: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 7295: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 7296: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 7297: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 9563: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 9564: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 9565: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 9566: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 9567: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 9568: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 9569: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 9570: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 9571: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 9878: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 9879: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 9880: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 9881: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 9882: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 9883: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 9884: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 9885: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 10033: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 10034: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 10035: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 10036: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 10037: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 10038: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 10039: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 10153: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 10154: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 10155: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 10156: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 10157: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 10158: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 10159: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 10255: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 10256: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 10257: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 10258: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 10259: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 10260: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 10261: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 10356: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 10357: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 10358: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 10359: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 10360: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 10361: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 10362: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 10457: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 10458: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 10459: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 10460: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 10461: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 10462: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 10463: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 10556: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 10557: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 10558: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 10559: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 10560: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 10561: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 10562: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 10652: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 10653: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 10654: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 10655: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 10656: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 10657: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 10658: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 10750: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 10751: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 10752: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 10753: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 10754: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 10755: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 10756: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 10852: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 10853: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 10854: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 10855: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 10856: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 10857: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 10858: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 10954: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 10955: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 10956: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 10957: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 10958: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 10959: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 10960: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 11052: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 11053: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 11054: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 11055: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 11056: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 11057: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 11058: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 11154: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 11155: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 11156: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 11157: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 11158: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 11159: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 11249: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 11250: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 11251: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 11252: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 11253: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 11254: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 11345: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 11346: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 11347: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 11348: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 11349: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 11350: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 11455: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 11456: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 11457: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 11458: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 11459: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 11460: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 11566: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 11567: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 11568: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 11569: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 11570: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 11571: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 11682: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 11683: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 11684: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 11685: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 11686: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 11687: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 11802: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 11803: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 11804: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 11805: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 11806: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 11807: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 11923: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 11924: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 11925: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 11926: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 11927: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 11928: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 12036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 12037: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 12038: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 12039: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 12040: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 12041: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 12149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 12150: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 12151: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 12152: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 12153: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 12154: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 12269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 12270: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 12271: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 12272: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 12273: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 12274: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 12388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 12389: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 12390: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 12391: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 12392: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 12393: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 12502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 12503: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 12504: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 12505: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 12506: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 12507: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 12617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 12618: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 12619: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 12620: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 12621: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 12622: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 12736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 12737: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 12738: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 12739: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 12740: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 12741: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 12855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 12856: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 12857: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 12858: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 12859: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 12860: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 12975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 12976: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 12977: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 12978: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 12979: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 12980: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 13085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 13086: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 13087: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 13088: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 13089: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 13090: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 13202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 13203: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 13204: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 13205: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 13206: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 13207: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 13322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 13323: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 13324: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 13325: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 13326: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 13327: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 13441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 13442: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 13443: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 13444: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 13445: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 13446: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 13551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 13552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 13553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 13554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 13555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 13556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 13668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 13669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 13670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 13671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 13672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 13673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 13787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 13788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 13789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 13790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 13791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 13792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 13907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 13908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 13909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 13910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 13911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 13912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 14019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 14020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 14021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 14022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 14023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 14024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 14135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 14136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 14137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 14138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 14139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 14140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 14254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 14255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 14256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 14257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 14258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 14259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 14374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 14375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 14376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 14377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 14378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 14379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 14484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 14485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 14486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 14487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 14488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 14489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 14601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 14602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 14603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 14604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 14605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 14606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 14722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 14723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 14724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 14725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 14726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 14727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 14841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 14842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 14843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 14844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 14845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 14846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 14951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 14952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 14953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 14954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 14955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 14956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Voss killed in action
- 1: Rook incapacitated
- 1: Reed incapacitated
- 1: Tern incapacitated
- 1: Iven incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
