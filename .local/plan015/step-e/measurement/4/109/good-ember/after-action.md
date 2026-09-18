# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/4/109/good-ember/battle-109-1789673716631505123`

## Battle summary

**Ember** · 360 s · 139 shots.

### Turning points

- 17.9s, squad 4: contact (events line 196). First recorded contact.
- 40.4s, squad 0: help call ([trace 3973](#trace-3973)). No completion observed before termination.
- 106.4s, squad 0: help call ([trace 8388](#trace-8388)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 13 shots, 3/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 126 shots, 0/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 11.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 767](#trace-767)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 18.0s, squad 0 chose took cover and returned fire ([trace 1570](#trace-1570)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 766](#trace-766)). Following evidence: {'until': 11.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000068365232524, 'next_transition': 773}.
- 38.9s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.236801 retreat threshold=0.220000 initiative=requires intent ([trace 3884](#trace-3884)). Following evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3892}.

### Communication

92 matched deliveries (mean 0.41s, max 5.10s); 247 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.85s, squad 4, contact, evidence events line 196: First recorded contact; .
- 40.35s, squad 0, help call, evidence 3973: NeedSupport; No completion observed before termination.
- 106.40s, squad 0, help call, evidence 8388: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.577065366050952, 'next_transition': 504}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.577065366050952, 'next_transition': 504}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.577065366050952, 'next_transition': 504}.
<a id="trace-334"></a>
<a id="trace-353"></a>
<a id="trace-369"></a>
<a id="trace-384"></a>
<a id="trace-395"></a>
<a id="trace-411"></a>
<a id="trace-430"></a>
<a id="trace-506"></a>
<a id="trace-520"></a>
<a id="trace-543"></a>
<a id="trace-562"></a>
<a id="trace-576"></a>
<a id="trace-595"></a>
<a id="trace-619"></a>
<a id="trace-644"></a>
<a id="trace-657"></a>
<a id="trace-663"></a>
<a id="trace-745"></a>
<a id="trace-752"></a>
<a id="trace-764"></a>
<a id="trace-978"></a>
<a id="trace-992"></a>
<a id="trace-1012"></a>
<a id="trace-1031"></a>
<a id="trace-1046"></a>
<a id="trace-1075"></a>
<a id="trace-1093"></a>
<a id="trace-1176"></a>
<a id="trace-1190"></a>
<a id="trace-1208"></a>
<a id="trace-1224"></a>
<a id="trace-1532"></a>
<a id="trace-1554"></a>
<a id="trace-1935"></a>
<a id="trace-2695"></a>
<a id="trace-2729"></a>
<a id="trace-2770"></a>
<a id="trace-2872"></a>
<a id="trace-2907"></a>
<a id="trace-2941"></a>
<a id="trace-2971"></a>
<a id="trace-2994"></a>
<a id="trace-3005"></a>
<a id="trace-3014"></a>
<a id="trace-3025"></a>
<a id="trace-3039"></a>
<a id="trace-3054"></a>
<a id="trace-3132"></a>
<a id="trace-3481"></a>
<a id="trace-3499"></a>
<a id="trace-3512"></a>
<a id="trace-3528"></a>
<a id="trace-3540"></a>
<a id="trace-3557"></a>
<a id="trace-3571"></a>
<a id="trace-3594"></a>
<a id="trace-3602"></a>
<a id="trace-3684"></a>
<a id="trace-3691"></a>
<a id="trace-3704"></a>
<a id="trace-3713"></a>
<a id="trace-3724"></a>
<a id="trace-3733"></a>
<a id="trace-3742"></a>
<a id="trace-3750"></a>
<a id="trace-3760"></a>
<a id="trace-3765"></a>
<a id="trace-3835"></a>
<a id="trace-3841"></a>
<a id="trace-3851"></a>
<a id="trace-3857"></a>
<a id="trace-3866"></a>
<a id="trace-3871"></a>
<a id="trace-3878"></a>
<a id="trace-3883"></a>
<a id="trace-3894"></a>
<a id="trace-3902"></a>
<a id="trace-3972"></a>
<a id="trace-3984"></a>
<a id="trace-3993"></a>
<a id="trace-4001"></a>
<a id="trace-4011"></a>
<a id="trace-4020"></a>
<a id="trace-4030"></a>
<a id="trace-4036"></a>
<a id="trace-4048"></a>
<a id="trace-4057"></a>
<a id="trace-4133"></a>
<a id="trace-4139"></a>
<a id="trace-4152"></a>
<a id="trace-4159"></a>
<a id="trace-4167"></a>
<a id="trace-4177"></a>
<a id="trace-4187"></a>
<a id="trace-4196"></a>
<a id="trace-4204"></a>
<a id="trace-4212"></a>
<a id="trace-4286"></a>
<a id="trace-4290"></a>
<a id="trace-4296"></a>
<a id="trace-4302"></a>
<a id="trace-4315"></a>
<a id="trace-4327"></a>
<a id="trace-4337"></a>
<a id="trace-4344"></a>
<a id="trace-4356"></a>
<a id="trace-4366"></a>
<a id="trace-4440"></a>
<a id="trace-4446"></a>
<a id="trace-4459"></a>
<a id="trace-4466"></a>
<a id="trace-4476"></a>
<a id="trace-4482"></a>
<a id="trace-4489"></a>
<a id="trace-4495"></a>
<a id="trace-4503"></a>
<a id="trace-4510"></a>
<a id="trace-4581"></a>
<a id="trace-4586"></a>
<a id="trace-4593"></a>
<a id="trace-4599"></a>
<a id="trace-4610"></a>
<a id="trace-4615"></a>
<a id="trace-4622"></a>
<a id="trace-4627"></a>
<a id="trace-4640"></a>
<a id="trace-4646"></a>
<a id="trace-4720"></a>
<a id="trace-4728"></a>
<a id="trace-4736"></a>
<a id="trace-4744"></a>
<a id="trace-4764"></a>
<a id="trace-4772"></a>
<a id="trace-4778"></a>
<a id="trace-4785"></a>
<a id="trace-4790"></a>
<a id="trace-4863"></a>
<a id="trace-4870"></a>
<a id="trace-4881"></a>
<a id="trace-4891"></a>
<a id="trace-4904"></a>
<a id="trace-4913"></a>
<a id="trace-4933"></a>
<a id="trace-4938"></a>
<a id="trace-4949"></a>
<a id="trace-4958"></a>
<a id="trace-5035"></a>
<a id="trace-5041"></a>
<a id="trace-5054"></a>
<a id="trace-5062"></a>
<a id="trace-5073"></a>
<a id="trace-5078"></a>
<a id="trace-5088"></a>
<a id="trace-5096"></a>
<a id="trace-5101"></a>
<a id="trace-5106"></a>
<a id="trace-5180"></a>
<a id="trace-5186"></a>
<a id="trace-5196"></a>
<a id="trace-5202"></a>
<a id="trace-5210"></a>
<a id="trace-5222"></a>
<a id="trace-5233"></a>
<a id="trace-5351"></a>
<a id="trace-5367"></a>
<a id="trace-5373"></a>
<a id="trace-5453"></a>
<a id="trace-5455"></a>
<a id="trace-5468"></a>
<a id="trace-5470"></a>
<a id="trace-5479"></a>
<a id="trace-5483"></a>
<a id="trace-5604"></a>
<a id="trace-5619"></a>
<a id="trace-5630"></a>
<a id="trace-5751"></a>
<a id="trace-5832"></a>
<a id="trace-5841"></a>
<a id="trace-5855"></a>
<a id="trace-5971"></a>
<a id="trace-5986"></a>
<a id="trace-5991"></a>
<a id="trace-6008"></a>
<a id="trace-6021"></a>
<a id="trace-6031"></a>
<a id="trace-6147"></a>
<a id="trace-6222"></a>
<a id="trace-6225"></a>
<a id="trace-6244"></a>
<a id="trace-6253"></a>
<a id="trace-6267"></a>
<a id="trace-6273"></a>
<a id="trace-6287"></a>
<a id="trace-6296"></a>
<a id="trace-6302"></a>
<a id="trace-6310"></a>
<a id="trace-6386"></a>
<a id="trace-6398"></a>
<a id="trace-8206"></a>
<a id="trace-8218"></a>
<a id="trace-8235"></a>
<a id="trace-8244"></a>
<a id="trace-8251"></a>
<a id="trace-8261"></a>
<a id="trace-8273"></a>
<a id="trace-8281"></a>
<a id="trace-8359"></a>
<a id="trace-8367"></a>
<a id="trace-8382"></a>
<a id="trace-8519"></a>
<a id="trace-8530"></a>
<a id="trace-8539"></a>
<a id="trace-8552"></a>
<a id="trace-8561"></a>
<a id="trace-8572"></a>
<a id="trace-8576"></a>
<a id="trace-8649"></a>
<a id="trace-8654"></a>
<a id="trace-8662"></a>
<a id="trace-8669"></a>
<a id="trace-8677"></a>
<a id="trace-8683"></a>
<a id="trace-8689"></a>
<a id="trace-8695"></a>
<a id="trace-8705"></a>
<a id="trace-8708"></a>
<a id="trace-8779"></a>
<a id="trace-8783"></a>
<a id="trace-8794"></a>
<a id="trace-8802"></a>
<a id="trace-8813"></a>
<a id="trace-8821"></a>
<a id="trace-8832"></a>
<a id="trace-8839"></a>
<a id="trace-8848"></a>
<a id="trace-8852"></a>
<a id="trace-8924"></a>
<a id="trace-8930"></a>
<a id="trace-8943"></a>
<a id="trace-8951"></a>
<a id="trace-8959"></a>
<a id="trace-8966"></a>
<a id="trace-8975"></a>
<a id="trace-8982"></a>
<a id="trace-8987"></a>
<a id="trace-9059"></a>
<a id="trace-9065"></a>
<a id="trace-9075"></a>
<a id="trace-9080"></a>
<a id="trace-9098"></a>
<a id="trace-9111"></a>
<a id="trace-9118"></a>
<a id="trace-9126"></a>
<a id="trace-9133"></a>
<a id="trace-9140"></a>
<a id="trace-9211"></a>
<a id="trace-9216"></a>
<a id="trace-9224"></a>
<a id="trace-9231"></a>
<a id="trace-9241"></a>
<a id="trace-9250"></a>
<a id="trace-9258"></a>
<a id="trace-9267"></a>
<a id="trace-9284"></a>
<a id="trace-9291"></a>
<a id="trace-9361"></a>
<a id="trace-9367"></a>
<a id="trace-9376"></a>
<a id="trace-9382"></a>
<a id="trace-9390"></a>
<a id="trace-9396"></a>
<a id="trace-9405"></a>
<a id="trace-9410"></a>
<a id="trace-9421"></a>
<a id="trace-9426"></a>
<a id="trace-9501"></a>
<a id="trace-9518"></a>
<a id="trace-9527"></a>
<a id="trace-9536"></a>
<a id="trace-9543"></a>
<a id="trace-9548"></a>
<a id="trace-9556"></a>
<a id="trace-9562"></a>
<a id="trace-9571"></a>
<a id="trace-9575"></a>
<a id="trace-9647"></a>
<a id="trace-9655"></a>
<a id="trace-9663"></a>
<a id="trace-9672"></a>
<a id="trace-9688"></a>
<a id="trace-9700"></a>
<a id="trace-9707"></a>
<a id="trace-9712"></a>
<a id="trace-9720"></a>
<a id="trace-9725"></a>
<a id="trace-9798"></a>
<a id="trace-9803"></a>
<a id="trace-9811"></a>
<a id="trace-9818"></a>
<a id="trace-9826"></a>
<a id="trace-9836"></a>
<a id="trace-9845"></a>
<a id="trace-9861"></a>
<a id="trace-9869"></a>
<a id="trace-9875"></a>
<a id="trace-9950"></a>
<a id="trace-9955"></a>
<a id="trace-9964"></a>
<a id="trace-9971"></a>
<a id="trace-9979"></a>
<a id="trace-9984"></a>
<a id="trace-9991"></a>
<a id="trace-10000"></a>
<a id="trace-10008"></a>
<a id="trace-10015"></a>
<a id="trace-10095"></a>
<a id="trace-10102"></a>
<a id="trace-10110"></a>
<a id="trace-10118"></a>
<a id="trace-10128"></a>
<a id="trace-10135"></a>
<a id="trace-10143"></a>
<a id="trace-10149"></a>
<a id="trace-10156"></a>
<a id="trace-10163"></a>
<a id="trace-10235"></a>
<a id="trace-10243"></a>
<a id="trace-10251"></a>
<a id="trace-10260"></a>
<a id="trace-10276"></a>
<a id="trace-10283"></a>
<a id="trace-10292"></a>
<a id="trace-10298"></a>
<a id="trace-10308"></a>
<a id="trace-10314"></a>
<a id="trace-10384"></a>
<a id="trace-10391"></a>
<a id="trace-10397"></a>
<a id="trace-10406"></a>
<a id="trace-10416"></a>
<a id="trace-10422"></a>
<a id="trace-10432"></a>
<a id="trace-10446"></a>
<a id="trace-10454"></a>
<a id="trace-10460"></a>
<a id="trace-10532"></a>
<a id="trace-10536"></a>
<a id="trace-10544"></a>
<a id="trace-10554"></a>
<a id="trace-10562"></a>
<a id="trace-10570"></a>
<a id="trace-10577"></a>
<a id="trace-10586"></a>
<a id="trace-10594"></a>
<a id="trace-10600"></a>
<a id="trace-10681"></a>
<a id="trace-10688"></a>
<a id="trace-10696"></a>
<a id="trace-10703"></a>
<a id="trace-10710"></a>
<a id="trace-10718"></a>
<a id="trace-10725"></a>
<a id="trace-10736"></a>
<a id="trace-10743"></a>
<a id="trace-10748"></a>
<a id="trace-10827"></a>
<a id="trace-10837"></a>
<a id="trace-10852"></a>
<a id="trace-10862"></a>
<a id="trace-10867"></a>
<a id="trace-10874"></a>
<a id="trace-10881"></a>
<a id="trace-10889"></a>
<a id="trace-10895"></a>
<a id="trace-10967"></a>
<a id="trace-10972"></a>
<a id="trace-10982"></a>
<a id="trace-10994"></a>
<a id="trace-11005"></a>
<a id="trace-11012"></a>
<a id="trace-11028"></a>
<a id="trace-11035"></a>
<a id="trace-11042"></a>
<a id="trace-11048"></a>
<a id="trace-11119"></a>
<a id="trace-11126"></a>
<a id="trace-11132"></a>
<a id="trace-11141"></a>
<a id="trace-11149"></a>
<a id="trace-11156"></a>
<a id="trace-11168"></a>
<a id="trace-11177"></a>
<a id="trace-11186"></a>
<a id="trace-11193"></a>
<a id="trace-11272"></a>
<a id="trace-11279"></a>
<a id="trace-11285"></a>
<a id="trace-11294"></a>
<a id="trace-11301"></a>
<a id="trace-11307"></a>
<a id="trace-11315"></a>
<a id="trace-11321"></a>
<a id="trace-11330"></a>
<a id="trace-11336"></a>
<a id="trace-11413"></a>
<a id="trace-11417"></a>
<a id="trace-11427"></a>
<a id="trace-11444"></a>
<a id="trace-11451"></a>
<a id="trace-11459"></a>
<a id="trace-11465"></a>
<a id="trace-11471"></a>
<a id="trace-11479"></a>
<a id="trace-11484"></a>
<a id="trace-11557"></a>
<a id="trace-11562"></a>
<a id="trace-11571"></a>
<a id="trace-11581"></a>
<a id="trace-11589"></a>
<a id="trace-11600"></a>
<a id="trace-11616"></a>
<a id="trace-11626"></a>
<a id="trace-11633"></a>
<a id="trace-11638"></a>
<a id="trace-11710"></a>
<a id="trace-11715"></a>
<a id="trace-11724"></a>
<a id="trace-11731"></a>
<a id="trace-11738"></a>
<a id="trace-11744"></a>
<a id="trace-11753"></a>
<a id="trace-11763"></a>
<a id="trace-11771"></a>
<a id="trace-11787"></a>
<a id="trace-11861"></a>
<a id="trace-11866"></a>
<a id="trace-11874"></a>
<a id="trace-11881"></a>
<a id="trace-11889"></a>
<a id="trace-11895"></a>
<a id="trace-11903"></a>
<a id="trace-11908"></a>
<a id="trace-11915"></a>
<a id="trace-11923"></a>
<a id="trace-11997"></a>
<a id="trace-12005"></a>
<a id="trace-12020"></a>
<a id="trace-12030"></a>
<a id="trace-12041"></a>
<a id="trace-12047"></a>
<a id="trace-12055"></a>
<a id="trace-12061"></a>
<a id="trace-12069"></a>
<a id="trace-12074"></a>
<a id="trace-12145"></a>
<a id="trace-12152"></a>
<a id="trace-12159"></a>
<a id="trace-12170"></a>
<a id="trace-12179"></a>
<a id="trace-12186"></a>
<a id="trace-12202"></a>
<a id="trace-12209"></a>
<a id="trace-12220"></a>
<a id="trace-12226"></a>
<a id="trace-12298"></a>
<a id="trace-12302"></a>
<a id="trace-12309"></a>
<a id="trace-12318"></a>
<a id="trace-12325"></a>
<a id="trace-12332"></a>
<a id="trace-12342"></a>
<a id="trace-12348"></a>
<a id="trace-12358"></a>
<a id="trace-12372"></a>
<a id="trace-12445"></a>
<a id="trace-12450"></a>
<a id="trace-12461"></a>
<a id="trace-12469"></a>
<a id="trace-12476"></a>
<a id="trace-12484"></a>
<a id="trace-12490"></a>
<a id="trace-12498"></a>
<a id="trace-12505"></a>
<a id="trace-12512"></a>
<a id="trace-12583"></a>
<a id="trace-12588"></a>
<a id="trace-12604"></a>
<a id="trace-12614"></a>
<a id="trace-12622"></a>
<a id="trace-12628"></a>
<a id="trace-12635"></a>
<a id="trace-12645"></a>
<a id="trace-12652"></a>
<a id="trace-12659"></a>
<a id="trace-12729"></a>
<a id="trace-12734"></a>
<a id="trace-12742"></a>
<a id="trace-12751"></a>
<a id="trace-12760"></a>
<a id="trace-12774"></a>
<a id="trace-12784"></a>
<a id="trace-12790"></a>
<a id="trace-12797"></a>
<a id="trace-12804"></a>
<a id="trace-12875"></a>
<a id="trace-12885"></a>
<a id="trace-12893"></a>
<a id="trace-12899"></a>
<a id="trace-12906"></a>
<a id="trace-12913"></a>
<a id="trace-12924"></a>
<a id="trace-12931"></a>
<a id="trace-12946"></a>
<a id="trace-12953"></a>
<a id="trace-13024"></a>
<a id="trace-13032"></a>
<a id="trace-13040"></a>
<a id="trace-13049"></a>
<a id="trace-13056"></a>
<a id="trace-13062"></a>
<a id="trace-13072"></a>
<a id="trace-13079"></a>
<a id="trace-13094"></a>
<a id="trace-13166"></a>
<a id="trace-13173"></a>
<a id="trace-13188"></a>
<a id="trace-13197"></a>
<a id="trace-13204"></a>
<a id="trace-13212"></a>
<a id="trace-13219"></a>
<a id="trace-13225"></a>
<a id="trace-13232"></a>
<a id="trace-13238"></a>
<a id="trace-13313"></a>
<a id="trace-13318"></a>
<a id="trace-13329"></a>
<a id="trace-13336"></a>
<a id="trace-13346"></a>
<a id="trace-13362"></a>
<a id="trace-13369"></a>
<a id="trace-13377"></a>
<a id="trace-13384"></a>
<a id="trace-13389"></a>
<a id="trace-13461"></a>
<a id="trace-13467"></a>
<a id="trace-13476"></a>
<a id="trace-13484"></a>
<a id="trace-13494"></a>
<a id="trace-13502"></a>
<a id="trace-13510"></a>
<a id="trace-13519"></a>
<a id="trace-13534"></a>
<a id="trace-13542"></a>
<a id="trace-13612"></a>
<a id="trace-13617"></a>
<a id="trace-13625"></a>
<a id="trace-13632"></a>
<a id="trace-13641"></a>
<a id="trace-13647"></a>
<a id="trace-13656"></a>
<a id="trace-13662"></a>
<a id="trace-13671"></a>
<a id="trace-13682"></a>
<a id="trace-13754"></a>
<a id="trace-13769"></a>
<a id="trace-13778"></a>
<a id="trace-13785"></a>
<a id="trace-13793"></a>
<a id="trace-13799"></a>
<a id="trace-13808"></a>
<a id="trace-13814"></a>
<a id="trace-13822"></a>
<a id="trace-13827"></a>
<a id="trace-13899"></a>
<a id="trace-13907"></a>
<a id="trace-13916"></a>
<a id="trace-13927"></a>
<a id="trace-13943"></a>
<a id="trace-13951"></a>
<a id="trace-13959"></a>
<a id="trace-13965"></a>
<a id="trace-13974"></a>
<a id="trace-13979"></a>
<a id="trace-14050"></a>
<a id="trace-14054"></a>
<a id="trace-14061"></a>
<a id="trace-14070"></a>
<a id="trace-14079"></a>
<a id="trace-14088"></a>
<a id="trace-14096"></a>
<a id="trace-14105"></a>
<a id="trace-14124"></a>
<a id="trace-14129"></a>
<a id="trace-14202"></a>
<a id="trace-14207"></a>
<a id="trace-14215"></a>
<a id="trace-14222"></a>
<a id="trace-14229"></a>
<a id="trace-14237"></a>
<a id="trace-14244"></a>
<a id="trace-14252"></a>
<a id="trace-14263"></a>
<a id="trace-14268"></a>
<a id="trace-14343"></a>
<a id="trace-14356"></a>
<a id="trace-14367"></a>
<a id="trace-14375"></a>
<a id="trace-14382"></a>
<a id="trace-14388"></a>
<a id="trace-14395"></a>
<a id="trace-14402"></a>
<a id="trace-14409"></a>
<a id="trace-14416"></a>
<a id="trace-14486"></a>
<a id="trace-14494"></a>
<a id="trace-14502"></a>
<a id="trace-14511"></a>
<a id="trace-14528"></a>
<a id="trace-14535"></a>
<a id="trace-14546"></a>
<a id="trace-14553"></a>
<a id="trace-14560"></a>
<a id="trace-14567"></a>
<a id="trace-14638"></a>
<a id="trace-14645"></a>
<a id="trace-14651"></a>
<a id="trace-14658"></a>
<a id="trace-14667"></a>
<a id="trace-14675"></a>
<a id="trace-14685"></a>
<a id="trace-14700"></a>
<a id="trace-14710"></a>
<a id="trace-14715"></a>
<a id="trace-14787"></a>
<a id="trace-14796"></a>
<a id="trace-14804"></a>
<a id="trace-14813"></a>
<a id="trace-14820"></a>
<a id="trace-14826"></a>
<a id="trace-14834"></a>
<a id="trace-14840"></a>
<a id="trace-14851"></a>
<a id="trace-14857"></a>
<a id="trace-14937"></a>
<a id="trace-14944"></a>
<a id="trace-14952"></a>
<a id="trace-14961"></a>
<a id="trace-14968"></a>
<a id="trace-14979"></a>
<a id="trace-14987"></a>
<a id="trace-14992"></a>
<a id="trace-15000"></a>
<a id="trace-15007"></a>
<a id="trace-15081"></a>
<a id="trace-15088"></a>
<a id="trace-15096"></a>
<a id="trace-15105"></a>
<a id="trace-15120"></a>
<a id="trace-15128"></a>
<a id="trace-15136"></a>
<a id="trace-15144"></a>
<a id="trace-15152"></a>
<a id="trace-15157"></a>
<a id="trace-15231"></a>
<a id="trace-15240"></a>
<a id="trace-15253"></a>
<a id="trace-15262"></a>
<a id="trace-15277"></a>
<a id="trace-15283"></a>
<a id="trace-15297"></a>
<a id="trace-15313"></a>
<a id="trace-15320"></a>
<a id="trace-15327"></a>
<a id="trace-15398"></a>
<a id="trace-15404"></a>
<a id="trace-15412"></a>
<a id="trace-15418"></a>
<a id="trace-15431"></a>
<a id="trace-15437"></a>
<a id="trace-15445"></a>
<a id="trace-15454"></a>
<a id="trace-15461"></a>
<a id="trace-15469"></a>
<a id="trace-15547"></a>
<a id="trace-15556"></a>
<a id="trace-15563"></a>
<a id="trace-15568"></a>
<a id="trace-15577"></a>
<a id="trace-15584"></a>
<a id="trace-15593"></a>
<a id="trace-15599"></a>
<a id="trace-15609"></a>
<a id="trace-15614"></a>
<a id="trace-15687"></a>
<a id="trace-15696"></a>
<a id="trace-15703"></a>
<a id="trace-15718"></a>
<a id="trace-15729"></a>
<a id="trace-15735"></a>
<a id="trace-15742"></a>
<a id="trace-15748"></a>
<a id="trace-15757"></a>
<a id="trace-15762"></a>
<a id="trace-15835"></a>
<a id="trace-15840"></a>
<a id="trace-15848"></a>
<a id="trace-15858"></a>
<a id="trace-15870"></a>
<a id="trace-15878"></a>
<a id="trace-15892"></a>
<a id="trace-15900"></a>
<a id="trace-15908"></a>
<a id="trace-15913"></a>
- 1.60s–359.80s (×713), actor 37, squad 4 (trace 334): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5617422164233408, 'next_transition': 353}.
<a id="trace-504"></a>
<a id="trace-518"></a>
<a id="trace-541"></a>
<a id="trace-560"></a>
<a id="trace-574"></a>
<a id="trace-593"></a>
<a id="trace-617"></a>
<a id="trace-642"></a>
<a id="trace-743"></a>
<a id="trace-750"></a>
<a id="trace-762"></a>
- 5.20s–11.20s (×11), actor 5, squad 0 (trace 504): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 437. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599907978750682, 'next_transition': 518}.
<a id="trace-117"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 117): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000068365232524, 'next_transition': 773}.
<a id="trace-766"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 766): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 766. Next observer evidence: {'until': 11.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000068365232524, 'next_transition': 773}.
<a id="trace-767"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 767): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 767. Next observer evidence: {'until': 11.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000068365232524, 'next_transition': 773}.
<a id="trace-773"></a>
- 11.55s–11.55s (×1), actor 0, squad 0 (trace 773): traveling overwatch. Knowledge: actor memory at 10.00s, trace 665. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21610562139263348, 'next_transition': 976}.
<a id="trace-774"></a>
- 11.55s–11.55s (×1), actor 0, squad 0 (trace 774): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 665. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21610562139263348, 'next_transition': 976}.
<a id="trace-976"></a>
<a id="trace-990"></a>
<a id="trace-1010"></a>
<a id="trace-1029"></a>
<a id="trace-1073"></a>
<a id="trace-1174"></a>
<a id="trace-1188"></a>
<a id="trace-1206"></a>
- 11.70s–16.25s (×8), actor 5, squad 0 (trace 976): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 767. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0662563057471106, 'next_transition': 990}.
<a id="trace-1225"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 1225): received platoon directive. Knowledge: actor memory at 15.00s, trace 1097. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5631899938043141, 'next_transition': 1530}.
<a id="trace-1530"></a>
- 17.25s–17.25s (×1), actor 5, squad 0 (trace 1530): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1100. Next observer evidence: {'until': 18, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6765219517301027, 'next_transition': 1570}.
<a id="trace-1570"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1570): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1097. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500088893435074, 'next_transition': 1936}.
<a id="trace-1571"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1571): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1097. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500088893435074, 'next_transition': 1936}.
<a id="trace-1572"></a>
<a id="trace-1936"></a>
<a id="trace-2305"></a>
- 18.00s–18.55s (×3), actor 0, squad 0 (trace 1572): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1097. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500088893435074, 'next_transition': 1936}.
<a id="trace-2693"></a>
<a id="trace-2727"></a>
<a id="trace-2870"></a>
<a id="trace-2905"></a>
<a id="trace-2939"></a>
<a id="trace-2969"></a>
<a id="trace-2992"></a>
- 18.75s–22.25s (×7), actor 5, squad 0 (trace 2693): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1100. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0006415963952298, 'next_transition': 2727}.
<a id="trace-2997"></a>
- 22.50s–22.50s (×1), actor 0, squad 0 (trace 2997): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 2784. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.539610221016059, 'next_transition': 3023}.
<a id="trace-3023"></a>
<a id="trace-3037"></a>
<a id="trace-3052"></a>
- 23.75s–24.75s (×3), actor 5, squad 0 (trace 3023): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2787. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150000000000001, 'next_transition': 3037}.
<a id="trace-3134"></a>
- 25.35s–25.35s (×1), actor 0, squad 0 (trace 3134): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 3056. Next observer evidence: {'until': 25.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.35983982393405106, 'next_transition': 3479}.
<a id="trace-3479"></a>
<a id="trace-3497"></a>
<a id="trace-3526"></a>
<a id="trace-3538"></a>
<a id="trace-3555"></a>
<a id="trace-3569"></a>
- 25.75s–28.75s (×6), actor 5, squad 0 (trace 3479): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3059. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3497}.
<a id="trace-3583"></a>
- 29.10s–29.10s (×1), actor 0, squad 0 (trace 3583): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3056. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12968662942596304, 'next_transition': 3592}.
<a id="trace-3592"></a>
<a id="trace-3600"></a>
<a id="trace-3682"></a>
<a id="trace-3689"></a>
<a id="trace-3702"></a>
<a id="trace-3711"></a>
<a id="trace-3731"></a>
<a id="trace-3748"></a>
- 29.25s–33.75s (×8), actor 5, squad 0 (trace 3592): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3059. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41483292458894133, 'next_transition': 3600}.
<a id="trace-3751"></a>
- 33.75s–33.75s (×1), actor 0, squad 0 (trace 3751): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 30.00s, trace 3606. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17234690062648517, 'next_transition': 3758}.
<a id="trace-3758"></a>
<a id="trace-3839"></a>
<a id="trace-3849"></a>
<a id="trace-3864"></a>
<a id="trace-3876"></a>
<a id="trace-3881"></a>
- 34.25s–38.75s (×6), actor 5, squad 0 (trace 3758): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3609. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43245581410770234, 'next_transition': 3839}.
<a id="trace-449"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 449): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3884"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 3884): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.236801 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 3884. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3892}.
<a id="trace-3885"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 3885): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.236801 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 3885. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3892}.
<a id="trace-3892"></a>
<a id="trace-3900"></a>
- 39.25s–39.75s (×2), actor 5, squad 0 (trace 3892): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 3885. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.037802110060153764, 'next_transition': 3900}.
<a id="trace-3973"></a>
- 40.35s–40.35s (×1), actor 0, squad 0 (trace 3973): NeedSupport. Knowledge: actor memory at 40.00s, trace 3903. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120708648333173, 'next_transition': 3982}.
<a id="trace-3982"></a>
<a id="trace-3999"></a>
<a id="trace-4009"></a>
<a id="trace-4018"></a>
<a id="trace-4028"></a>
<a id="trace-4034"></a>
<a id="trace-4046"></a>
<a id="trace-4055"></a>
- 40.75s–44.75s (×8), actor 5, squad 0 (trace 3982): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3906. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37800030438332843, 'next_transition': 3999}.
<a id="trace-4128"></a>
- 45.20s–45.20s (×1), actor 0, squad 0 (trace 4128): received platoon directive; retain held slots. Knowledge: actor memory at 45.00s, trace 4060. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24999977042211685, 'next_transition': 4150}.
<a id="trace-4150"></a>
<a id="trace-4157"></a>
<a id="trace-4175"></a>
<a id="trace-4185"></a>
<a id="trace-4194"></a>
<a id="trace-4284"></a>
<a id="trace-4300"></a>
<a id="trace-4325"></a>
<a id="trace-4335"></a>
<a id="trace-4438"></a>
<a id="trace-4444"></a>
<a id="trace-4457"></a>
<a id="trace-4508"></a>
<a id="trace-4584"></a>
<a id="trace-4591"></a>
<a id="trace-4608"></a>
<a id="trace-4625"></a>
<a id="trace-4638"></a>
<a id="trace-4644"></a>
<a id="trace-4726"></a>
<a id="trace-4734"></a>
- 46.25s–66.25s (×21), actor 5, squad 0 (trace 4150): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4063. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119838421388276, 'next_transition': 4157}.
<a id="trace-1032"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (events line 1032): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4737"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 4737): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.055110 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 4737. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4755}.
<a id="trace-4738"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 4738): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.055110 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 4738. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4755}.
<a id="trace-4755"></a>
<a id="trace-4762"></a>
<a id="trace-4770"></a>
<a id="trace-4783"></a>
<a id="trace-4788"></a>
<a id="trace-4861"></a>
<a id="trace-4868"></a>
<a id="trace-4879"></a>
<a id="trace-4889"></a>
<a id="trace-4902"></a>
<a id="trace-4936"></a>
<a id="trace-4947"></a>
<a id="trace-4956"></a>
<a id="trace-5033"></a>
<a id="trace-5039"></a>
<a id="trace-5052"></a>
<a id="trace-5060"></a>
<a id="trace-5071"></a>
<a id="trace-5076"></a>
<a id="trace-5094"></a>
<a id="trace-5099"></a>
<a id="trace-5104"></a>
<a id="trace-5178"></a>
<a id="trace-5184"></a>
<a id="trace-5194"></a>
<a id="trace-5200"></a>
<a id="trace-5208"></a>
- 67.25s–82.25s (×27), actor 5, squad 0 (trace 4755): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.45s, trace 4738. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4762}.
<a id="trace-5217"></a>
- 82.65s–82.65s (×1), actor 4, squad 0 (trace 5217): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 80.00s, trace 5107. Next observer evidence: None.
<a id="trace-5220"></a>
<a id="trace-5231"></a>
- 82.75s–83.25s (×2), actor 5, squad 0 (trace 5220): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 5108. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41474864896576963, 'next_transition': 5231}.
<a id="trace-5236"></a>
- 83.65s–83.65s (×1), actor 4, squad 0 (trace 5236): Reorganise: completed/failed drill. Knowledge: actor memory at 80.00s, trace 5107. Next observer evidence: None.
<a id="trace-5239"></a>
- 83.65s–83.65s (×1), actor 4, squad 0 (trace 5239): MoveTactically. Knowledge: actor memory at 80.00s, trace 5107. Next observer evidence: None.
<a id="trace-5240"></a>
- 83.65s–83.65s (×1), actor 4, squad 0 (trace 5240): Reorganise complete. Knowledge: actor memory at 80.00s, trace 5107. Next observer evidence: None.
<a id="trace-5349"></a>
<a id="trace-5365"></a>
- 83.75s–84.25s (×2), actor 5, squad 0 (trace 5349): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 5108. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5365}.
<a id="trace-5493"></a>
- 88.15s–88.15s (×1), actor 4, squad 0 (trace 5493): traveling overwatch. Knowledge: actor memory at 85.00s, trace 5382. Next observer evidence: {'until': 89.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.9828100902684203, 'next_transition': 5639}.
<a id="trace-5494"></a>
- 88.15s–88.15s (×1), actor 4, squad 0 (trace 5494): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 85.00s, trace 5382. Next observer evidence: {'until': 89.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.9828100902684203, 'next_transition': 5639}.
<a id="trace-5639"></a>
- 89.70s–89.70s (×1), actor 4, squad 0 (trace 5639): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 5382. Next observer evidence: None.
<a id="trace-5640"></a>
- 89.70s–89.70s (×1), actor 4, squad 0 (trace 5640): bounding overwatch. Knowledge: actor memory at 85.00s, trace 5382. Next observer evidence: None.
<a id="trace-5641"></a>
- 89.70s–89.70s (×1), actor 4, squad 0 (trace 5641): new contact inside 100 m. Knowledge: actor memory at 85.00s, trace 5382. Next observer evidence: None.
<a id="trace-5749"></a>
<a id="trace-5839"></a>
- 89.75s–90.75s (×2), actor 5, squad 0 (trace 5749): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 5383. Next observer evidence: {'until': 90.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1536142545395154, 'next_transition': 5839}.
<a id="trace-5856"></a>
- 91.40s–91.40s (×1), actor 4, squad 0 (trace 5856): new contact inside 100 m. Knowledge: actor memory at 90.00s, trace 5757. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06370804992306686, 'next_transition': 5969}.
<a id="trace-5969"></a>
<a id="trace-5984"></a>
<a id="trace-6029"></a>
- 91.75s–94.25s (×3), actor 5, squad 0 (trace 5969): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5758. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2003126099999699, 'next_transition': 5984}.
<a id="trace-6035"></a>
- 94.50s–94.50s (×1), actor 4, squad 0 (trace 6035): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 90.00s, trace 5757. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6145}.
<a id="trace-6145"></a>
<a id="trace-6220"></a>
<a id="trace-6242"></a>
<a id="trace-6251"></a>
<a id="trace-6265"></a>
<a id="trace-6271"></a>
- 94.75s–97.75s (×6), actor 5, squad 0 (trace 6145): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5758. Next observer evidence: {'until': 95.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6220}.
<a id="trace-6280"></a>
- 97.90s–97.90s (×1), actor 4, squad 0 (trace 6280): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 95.00s, trace 6152. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37653727202550386, 'next_transition': 6285}.
<a id="trace-6285"></a>
<a id="trace-6294"></a>
<a id="trace-6300"></a>
<a id="trace-6308"></a>
<a id="trace-6384"></a>
<a id="trace-6396"></a>
- 98.25s–100.75s (×6), actor 5, squad 0 (trace 6285): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 6153. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2268099165049887, 'next_transition': 6294}.
<a id="trace-6404"></a>
- 100.90s–100.90s (×1), actor 4, squad 0 (trace 6404): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 100.00s, trace 6313. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.158824171108159, 'next_transition': 8233}.
<a id="trace-8194"></a>
- 100.90s–100.90s (×1), actor 4, squad 0 (trace 8194): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 100.00s, trace 6313. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.158824171108159, 'next_transition': 8233}.
<a id="trace-8195"></a>
- 100.90s–100.90s (×1), actor 4, squad 0 (trace 8195): MoveTactically. Knowledge: actor memory at 100.00s, trace 6313. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.158824171108159, 'next_transition': 8233}.
<a id="trace-8196"></a>
- 100.90s–100.90s (×1), actor 4, squad 0 (trace 8196): contact cover complete: assessment resumes closure. Knowledge: actor memory at 100.00s, trace 6313. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.158824171108159, 'next_transition': 8233}.
<a id="trace-8233"></a>
<a id="trace-8242"></a>
<a id="trace-8249"></a>
<a id="trace-8259"></a>
<a id="trace-8271"></a>
- 102.25s–104.25s (×5), actor 5, squad 0 (trace 8233): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 6314. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498425456679563, 'next_transition': 8242}.
<a id="trace-8274"></a>
- 104.35s–104.35s (×1), actor 4, squad 0 (trace 8274): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 100.00s, trace 6313. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498460776877724, 'next_transition': 8279}.
<a id="trace-8279"></a>
<a id="trace-8357"></a>
<a id="trace-8365"></a>
- 104.75s–105.75s (×3), actor 5, squad 0 (trace 8279): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 6314. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4259565371335903, 'next_transition': 8357}.
<a id="trace-8386"></a>
- 106.40s–106.40s (×1), actor 4, squad 0 (trace 8386): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 105.00s, trace 8288. Next observer evidence: None.
<a id="trace-8388"></a>
- 106.40s–106.40s (×1), actor 4, squad 0 (trace 8388): NeedSupport. Knowledge: actor memory at 105.00s, trace 8288. Next observer evidence: None.
<a id="trace-8393"></a>
- 106.45s–106.45s (×1), actor 4, squad 0 (trace 8393): Reorganise: completed/failed drill. Knowledge: actor memory at 105.00s, trace 8288. Next observer evidence: None.
<a id="trace-8395"></a>
- 106.45s–106.45s (×1), actor 4, squad 0 (trace 8395): MoveTactically. Knowledge: actor memory at 105.00s, trace 8288. Next observer evidence: None.
<a id="trace-8396"></a>
- 106.45s–106.45s (×1), actor 4, squad 0 (trace 8396): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 105.00s, trace 8288. Next observer evidence: None.
<a id="trace-8515"></a>
- 106.50s–106.50s (×1), actor 4, squad 0 (trace 8515): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 105.00s, trace 8288. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100159022814966, 'next_transition': 8517}.
<a id="trace-8517"></a>
<a id="trace-8537"></a>
<a id="trace-8550"></a>
<a id="trace-8559"></a>
<a id="trace-8570"></a>
<a id="trace-8574"></a>
<a id="trace-8647"></a>
<a id="trace-8652"></a>
<a id="trace-8681"></a>
<a id="trace-8687"></a>
<a id="trace-8693"></a>
- 106.75s–113.75s (×11), actor 5, squad 0 (trace 8517): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 8289. Next observer evidence: {'until': 107.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100159022814966, 'next_transition': 8537}.
<a id="trace-8696"></a>
- 113.90s–113.90s (×1), actor 4, squad 0 (trace 8696): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 110.00s, trace 8581. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8703}.
<a id="trace-8697"></a>
- 113.90s–113.90s (×1), actor 4, squad 0 (trace 8697): MoveTactically. Knowledge: actor memory at 110.00s, trace 8581. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8703}.
<a id="trace-8698"></a>
- 113.90s–113.90s (×1), actor 4, squad 0 (trace 8698): . Knowledge: actor memory at 110.00s, trace 8581. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8703}.
<a id="trace-8703"></a>
<a id="trace-8777"></a>
<a id="trace-8792"></a>
<a id="trace-8800"></a>
<a id="trace-8811"></a>
<a id="trace-8819"></a>
<a id="trace-8830"></a>
<a id="trace-8837"></a>
<a id="trace-8846"></a>
<a id="trace-8928"></a>
<a id="trace-8937"></a>
<a id="trace-8941"></a>
<a id="trace-8957"></a>
<a id="trace-8964"></a>
<a id="trace-8973"></a>
<a id="trace-8985"></a>
<a id="trace-9057"></a>
<a id="trace-9063"></a>
<a id="trace-9073"></a>
<a id="trace-9078"></a>
<a id="trace-9096"></a>
<a id="trace-9109"></a>
<a id="trace-9116"></a>
<a id="trace-9124"></a>
<a id="trace-9131"></a>
<a id="trace-9138"></a>
<a id="trace-9209"></a>
<a id="trace-9214"></a>
<a id="trace-9222"></a>
<a id="trace-9229"></a>
<a id="trace-9239"></a>
<a id="trace-9248"></a>
<a id="trace-9265"></a>
<a id="trace-9289"></a>
- 114.25s–134.80s (×34), actor 5, squad 0 (trace 8703): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 8582. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8777}.
<a id="trace-1607"></a>
- 136.25s–136.25s (×1), actor 5, squad 0 (events line 1607): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9369"></a>
- 136.25s–136.25s (×1), actor 5, squad 0 (trace 9369): renew committed intent (75 s lifetime). Knowledge: actor memory at 136.25s, trace 9369. Next observer evidence: None.
<a id="trace-9373"></a>
<a id="trace-9388"></a>
<a id="trace-9394"></a>
<a id="trace-9403"></a>
<a id="trace-9424"></a>
<a id="trace-9499"></a>
<a id="trace-9516"></a>
- 136.30s–140.80s (×7), actor 5, squad 0 (trace 9373): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 136.25s, trace 9369. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9388}.
<a id="trace-9521"></a>
- 141.25s–141.25s (×1), actor 4, squad 0 (trace 9521): received platoon directive. Knowledge: actor memory at 140.00s, trace 9429. Next observer evidence: None.
<a id="trace-9525"></a>
<a id="trace-9534"></a>
<a id="trace-9541"></a>
<a id="trace-9554"></a>
<a id="trace-9560"></a>
<a id="trace-9569"></a>
<a id="trace-9645"></a>
<a id="trace-9653"></a>
<a id="trace-9661"></a>
<a id="trace-9686"></a>
<a id="trace-9698"></a>
<a id="trace-9718"></a>
<a id="trace-9723"></a>
<a id="trace-9796"></a>
<a id="trace-9801"></a>
<a id="trace-9809"></a>
<a id="trace-9816"></a>
<a id="trace-9824"></a>
<a id="trace-9834"></a>
<a id="trace-9843"></a>
<a id="trace-9859"></a>
<a id="trace-9873"></a>
<a id="trace-9948"></a>
<a id="trace-9953"></a>
<a id="trace-9962"></a>
<a id="trace-9969"></a>
<a id="trace-9977"></a>
<a id="trace-9989"></a>
<a id="trace-9998"></a>
<a id="trace-10093"></a>
<a id="trace-10100"></a>
<a id="trace-10108"></a>
<a id="trace-10116"></a>
<a id="trace-10133"></a>
<a id="trace-10141"></a>
<a id="trace-10147"></a>
<a id="trace-10154"></a>
<a id="trace-10161"></a>
<a id="trace-10233"></a>
<a id="trace-10249"></a>
<a id="trace-10258"></a>
<a id="trace-10274"></a>
<a id="trace-10281"></a>
<a id="trace-10290"></a>
<a id="trace-10296"></a>
<a id="trace-10312"></a>
<a id="trace-10389"></a>
<a id="trace-10404"></a>
<a id="trace-10414"></a>
<a id="trace-10420"></a>
<a id="trace-10444"></a>
<a id="trace-10458"></a>
<a id="trace-10530"></a>
<a id="trace-10542"></a>
<a id="trace-10560"></a>
<a id="trace-10568"></a>
<a id="trace-10575"></a>
<a id="trace-10584"></a>
<a id="trace-10592"></a>
<a id="trace-10598"></a>
<a id="trace-10679"></a>
<a id="trace-10686"></a>
<a id="trace-10694"></a>
<a id="trace-10701"></a>
<a id="trace-10716"></a>
<a id="trace-10723"></a>
<a id="trace-10734"></a>
<a id="trace-10746"></a>
<a id="trace-10819"></a>
<a id="trace-10825"></a>
<a id="trace-10835"></a>
<a id="trace-10850"></a>
<a id="trace-10860"></a>
<a id="trace-10872"></a>
<a id="trace-10887"></a>
<a id="trace-10965"></a>
<a id="trace-10970"></a>
<a id="trace-10980"></a>
- 141.30s–191.30s (×78), actor 5, squad 0 (trace 9525): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 9430. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9534}.
<a id="trace-1890"></a>
- 191.50s–191.50s (×1), actor 5, squad 0 (events line 1890): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 191.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10992}.
<a id="trace-10985"></a>
- 191.50s–191.50s (×1), actor 5, squad 0 (trace 10985): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 191.50s, trace 10985. Next observer evidence: {'until': 191.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10992}.
<a id="trace-10986"></a>
- 191.50s–191.50s (×1), actor 5, squad 0 (trace 10986): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 191.50s, trace 10986. Next observer evidence: {'until': 191.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10992}.
<a id="trace-10992"></a>
<a id="trace-11003"></a>
<a id="trace-11010"></a>
<a id="trace-11026"></a>
<a id="trace-11040"></a>
<a id="trace-11117"></a>
<a id="trace-11124"></a>
- 191.80s–195.80s (×7), actor 5, squad 0 (trace 10992): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 191.50s, trace 10986. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11003}.
<a id="trace-11134"></a>
- 196.50s–196.50s (×1), actor 4, squad 0 (trace 11134): traveling overwatch. Knowledge: actor memory at 195.00s, trace 11049. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11147}.
<a id="trace-11135"></a>
- 196.50s–196.50s (×1), actor 4, squad 0 (trace 11135): received platoon directive. Knowledge: actor memory at 195.00s, trace 11049. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11147}.
<a id="trace-11147"></a>
<a id="trace-11154"></a>
<a id="trace-11166"></a>
<a id="trace-11175"></a>
<a id="trace-11184"></a>
<a id="trace-11191"></a>
<a id="trace-11270"></a>
<a id="trace-11277"></a>
<a id="trace-11292"></a>
<a id="trace-11299"></a>
<a id="trace-11305"></a>
<a id="trace-11313"></a>
<a id="trace-11328"></a>
<a id="trace-11334"></a>
<a id="trace-11411"></a>
<a id="trace-11442"></a>
<a id="trace-11449"></a>
<a id="trace-11457"></a>
<a id="trace-11469"></a>
<a id="trace-11477"></a>
<a id="trace-11482"></a>
<a id="trace-11555"></a>
<a id="trace-11560"></a>
<a id="trace-11569"></a>
<a id="trace-11579"></a>
<a id="trace-11587"></a>
<a id="trace-11598"></a>
<a id="trace-11614"></a>
<a id="trace-11624"></a>
<a id="trace-11631"></a>
<a id="trace-11636"></a>
<a id="trace-11708"></a>
<a id="trace-11713"></a>
<a id="trace-11722"></a>
<a id="trace-11729"></a>
<a id="trace-11742"></a>
<a id="trace-11751"></a>
<a id="trace-11761"></a>
<a id="trace-11859"></a>
<a id="trace-11864"></a>
<a id="trace-11872"></a>
<a id="trace-11879"></a>
<a id="trace-11893"></a>
<a id="trace-11901"></a>
<a id="trace-11913"></a>
<a id="trace-11921"></a>
<a id="trace-11995"></a>
<a id="trace-12003"></a>
<a id="trace-12018"></a>
<a id="trace-12028"></a>
<a id="trace-12039"></a>
<a id="trace-12045"></a>
<a id="trace-12059"></a>
<a id="trace-12067"></a>
<a id="trace-12072"></a>
<a id="trace-12143"></a>
<a id="trace-12150"></a>
<a id="trace-12168"></a>
<a id="trace-12177"></a>
<a id="trace-12200"></a>
<a id="trace-12207"></a>
<a id="trace-12218"></a>
<a id="trace-12224"></a>
<a id="trace-12296"></a>
<a id="trace-12307"></a>
<a id="trace-12316"></a>
<a id="trace-12323"></a>
<a id="trace-12340"></a>
<a id="trace-12346"></a>
<a id="trace-12370"></a>
<a id="trace-12443"></a>
<a id="trace-12448"></a>
<a id="trace-12459"></a>
<a id="trace-12467"></a>
<a id="trace-12474"></a>
<a id="trace-12482"></a>
<a id="trace-12496"></a>
<a id="trace-12503"></a>
<a id="trace-12612"></a>
<a id="trace-12620"></a>
<a id="trace-12626"></a>
<a id="trace-12643"></a>
<a id="trace-12657"></a>
<a id="trace-12732"></a>
<a id="trace-12749"></a>
<a id="trace-12772"></a>
<a id="trace-12782"></a>
<a id="trace-12788"></a>
<a id="trace-12802"></a>
<a id="trace-12873"></a>
<a id="trace-12883"></a>
<a id="trace-12891"></a>
<a id="trace-12911"></a>
<a id="trace-12922"></a>
<a id="trace-12929"></a>
<a id="trace-12951"></a>
<a id="trace-13022"></a>
- 197.30s–260.30s (×97), actor 5, squad 0 (trace 11147): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 11050. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11154}.
<a id="trace-2250"></a>
- 260.55s–260.55s (×1), actor 5, squad 0 (events line 2250): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13028"></a>
- 260.55s–260.55s (×1), actor 5, squad 0 (trace 13028): renew committed intent (75 s lifetime). Knowledge: actor memory at 260.55s, trace 13028. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13038}.
<a id="trace-13038"></a>
<a id="trace-13047"></a>
<a id="trace-13060"></a>
<a id="trace-13070"></a>
<a id="trace-13077"></a>
<a id="trace-13092"></a>
<a id="trace-13171"></a>
<a id="trace-13186"></a>
<a id="trace-13195"></a>
<a id="trace-13202"></a>
<a id="trace-13210"></a>
<a id="trace-13217"></a>
<a id="trace-13236"></a>
<a id="trace-13311"></a>
<a id="trace-13327"></a>
<a id="trace-13334"></a>
<a id="trace-13344"></a>
<a id="trace-13360"></a>
<a id="trace-13367"></a>
<a id="trace-13375"></a>
<a id="trace-13382"></a>
<a id="trace-13387"></a>
<a id="trace-13459"></a>
<a id="trace-13465"></a>
<a id="trace-13474"></a>
<a id="trace-13482"></a>
<a id="trace-13492"></a>
<a id="trace-13508"></a>
<a id="trace-13517"></a>
<a id="trace-13532"></a>
<a id="trace-13615"></a>
<a id="trace-13623"></a>
<a id="trace-13630"></a>
<a id="trace-13639"></a>
<a id="trace-13645"></a>
<a id="trace-13654"></a>
<a id="trace-13660"></a>
<a id="trace-13669"></a>
<a id="trace-13680"></a>
<a id="trace-13767"></a>
<a id="trace-13776"></a>
<a id="trace-13783"></a>
<a id="trace-13791"></a>
<a id="trace-13797"></a>
<a id="trace-13806"></a>
<a id="trace-13812"></a>
<a id="trace-13820"></a>
<a id="trace-13825"></a>
<a id="trace-13897"></a>
<a id="trace-13905"></a>
<a id="trace-13941"></a>
<a id="trace-13949"></a>
<a id="trace-13957"></a>
<a id="trace-13963"></a>
<a id="trace-13972"></a>
<a id="trace-13977"></a>
<a id="trace-14059"></a>
<a id="trace-14068"></a>
<a id="trace-14077"></a>
<a id="trace-14094"></a>
<a id="trace-14103"></a>
<a id="trace-14122"></a>
<a id="trace-14127"></a>
<a id="trace-14200"></a>
<a id="trace-14205"></a>
<a id="trace-14213"></a>
<a id="trace-14220"></a>
<a id="trace-14227"></a>
<a id="trace-14235"></a>
<a id="trace-14242"></a>
<a id="trace-14250"></a>
<a id="trace-14261"></a>
<a id="trace-14266"></a>
<a id="trace-14341"></a>
<a id="trace-14365"></a>
<a id="trace-14373"></a>
<a id="trace-14386"></a>
<a id="trace-14393"></a>
<a id="trace-14407"></a>
<a id="trace-14414"></a>
<a id="trace-14492"></a>
<a id="trace-14500"></a>
<a id="trace-14509"></a>
<a id="trace-14526"></a>
<a id="trace-14544"></a>
<a id="trace-14551"></a>
<a id="trace-14558"></a>
<a id="trace-14565"></a>
<a id="trace-14636"></a>
<a id="trace-14643"></a>
<a id="trace-14656"></a>
<a id="trace-14665"></a>
<a id="trace-14673"></a>
<a id="trace-14683"></a>
<a id="trace-14698"></a>
<a id="trace-14708"></a>
<a id="trace-14713"></a>
<a id="trace-14785"></a>
<a id="trace-14794"></a>
<a id="trace-14802"></a>
<a id="trace-14811"></a>
<a id="trace-14818"></a>
<a id="trace-14824"></a>
<a id="trace-14832"></a>
<a id="trace-14849"></a>
<a id="trace-14855"></a>
<a id="trace-14935"></a>
<a id="trace-14942"></a>
<a id="trace-14950"></a>
<a id="trace-14959"></a>
<a id="trace-14966"></a>
<a id="trace-14977"></a>
<a id="trace-14985"></a>
<a id="trace-14998"></a>
- 261.30s–329.30s (×114), actor 5, squad 0 (trace 13038): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.55s, trace 13028. Next observer evidence: {'until': 261.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13047}.
<a id="trace-2602"></a>
- 329.55s–329.55s (×1), actor 5, squad 0 (events line 2602): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15002"></a>
- 329.55s–329.55s (×1), actor 5, squad 0 (trace 15002): renew committed intent (75 s lifetime). Knowledge: actor memory at 329.55s, trace 15002. Next observer evidence: {'until': 329.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15005}.
<a id="trace-15005"></a>
<a id="trace-15079"></a>
<a id="trace-15086"></a>
<a id="trace-15103"></a>
<a id="trace-15118"></a>
<a id="trace-15126"></a>
<a id="trace-15134"></a>
<a id="trace-15142"></a>
<a id="trace-15150"></a>
<a id="trace-15155"></a>
<a id="trace-15229"></a>
- 329.80s–335.30s (×11), actor 5, squad 0 (trace 15005): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 329.55s, trace 15002. Next observer evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15079}.
<a id="trace-15234"></a>
- 335.55s–335.55s (×1), actor 4, squad 0 (trace 15234): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 335.00s, trace 15162. Next observer evidence: {'until': 335.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15238}.
<a id="trace-15235"></a>
- 335.55s–335.55s (×1), actor 4, squad 0 (trace 15235): MoveTactically. Knowledge: actor memory at 335.00s, trace 15162. Next observer evidence: {'until': 335.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15238}.
<a id="trace-15236"></a>
- 335.55s–335.55s (×1), actor 4, squad 0 (trace 15236): . Knowledge: actor memory at 335.00s, trace 15162. Next observer evidence: {'until': 335.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15238}.
<a id="trace-15238"></a>
<a id="trace-15251"></a>
<a id="trace-15260"></a>
<a id="trace-15275"></a>
<a id="trace-15281"></a>
<a id="trace-15295"></a>
<a id="trace-15311"></a>
<a id="trace-15318"></a>
<a id="trace-15325"></a>
<a id="trace-15396"></a>
<a id="trace-15402"></a>
<a id="trace-15410"></a>
<a id="trace-15416"></a>
<a id="trace-15429"></a>
<a id="trace-15443"></a>
<a id="trace-15452"></a>
<a id="trace-15459"></a>
<a id="trace-15467"></a>
<a id="trace-15554"></a>
<a id="trace-15561"></a>
<a id="trace-15566"></a>
<a id="trace-15582"></a>
<a id="trace-15591"></a>
<a id="trace-15607"></a>
<a id="trace-15612"></a>
<a id="trace-15685"></a>
<a id="trace-15694"></a>
<a id="trace-15716"></a>
<a id="trace-15727"></a>
<a id="trace-15733"></a>
<a id="trace-15746"></a>
<a id="trace-15755"></a>
<a id="trace-15760"></a>
<a id="trace-15833"></a>
<a id="trace-15838"></a>
<a id="trace-15846"></a>
<a id="trace-15856"></a>
<a id="trace-15868"></a>
<a id="trace-15898"></a>
<a id="trace-15906"></a>
<a id="trace-15911"></a>
- 335.80s–359.80s (×41), actor 5, squad 0 (trace 15238): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 335.00s, trace 15163. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15251}.

## Net delivery

92 matched order/radio deliveries; 247 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.409s; maximum 5.100s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2784: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2790: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2791: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2792: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2793: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2794: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3056: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3062: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3063: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3064: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3065: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3066: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3067: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3606: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3607: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3610: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3612: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3613: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3614: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3615: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3616: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3617: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3766: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3767: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3769: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3770: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3772: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3773: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3774: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3775: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3776: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3777: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 3884: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 3885: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 3903: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3904: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3906: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3907: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3909: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3910: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3911: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3912: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3913: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3914: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 4060: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4061: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4063: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4064: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4066: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4067: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4068: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4069: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4070: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4071: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 4213: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 4214: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 4215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 4216: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 4217: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 4218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 4219: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 4220: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 4221: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 4222: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 4223: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 4224: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 4369: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 4370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 4371: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 4372: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 4373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 4374: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 4375: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 4376: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 4377: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 4378: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 4379: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 4512: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 4513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4514: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4515: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 4516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4517: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4518: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 4519: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4520: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4521: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 4522: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4651: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4653: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4654: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 4655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4656: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4657: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4658: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4659: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4660: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4661: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 4737: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 4738: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4791: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4793: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4794: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4796: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4797: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4798: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4799: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4800: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4801: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4963: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4965: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4966: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4968: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4969: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4970: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4971: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4972: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4973: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 5107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5108: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5109: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 5110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5111: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5112: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 5113: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5114: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5115: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 5116: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5383: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5384: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 5385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5386: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5387: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5388: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5389: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5390: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5391: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5757: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5758: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5759: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 5760: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5761: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5762: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5763: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5764: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5765: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5766: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 6152: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 6153: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 6154: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 6155: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 6156: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 6157: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 6158: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 6159: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 6160: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 6161: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 6313: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 6314: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 6315: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 6316: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 6317: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 6318: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 6319: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 6320: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 6321: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 6322: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 8288: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 8289: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 8290: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 8291: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 8292: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 8293: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 8294: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 8295: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 8296: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 8297: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 8581: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 8582: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 8583: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 8584: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 8585: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 8586: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 8587: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 8588: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 8589: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 8709: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 8710: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 8711: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 8712: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 8713: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 8714: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 8715: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 8716: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 8717: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 8854: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 8855: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 8856: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 8857: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 8858: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 8859: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 8860: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 8861: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 8862: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 8990: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 8991: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 8992: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 8993: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 8994: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 8995: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 8996: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 8997: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 8998: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 9141: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 9142: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 9143: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 9144: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 9145: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 9146: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 9147: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 9148: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 9149: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 9292: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 9293: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 9294: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 9295: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 9296: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 9297: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 9298: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 9299: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 9300: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.25s leader 5, trace 9369: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 9429: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 9430: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 9431: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 9432: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 9433: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 9434: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 9435: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 9436: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 9437: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 9576: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 9577: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 9578: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 9579: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 9580: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 9581: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 9582: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 9583: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 9584: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 9727: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 9728: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 9729: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 9730: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 9731: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 9732: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 9733: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 9734: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 9735: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 9880: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 9881: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 9882: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 9883: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 9884: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 9885: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 9886: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 9887: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 9888: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 10016: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 10017: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 10018: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 10019: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 10020: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 10021: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 10022: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 10023: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 10024: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 10164: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 10165: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 10166: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 10167: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 10168: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 10169: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 10170: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 10171: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 10172: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 10316: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 10317: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 10318: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 10319: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 10320: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 10321: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 10322: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 10323: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 10324: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 10461: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 10462: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 10463: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 10464: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 10465: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 10466: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 10467: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 10468: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 10469: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 10604: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 10605: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 10606: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 10607: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 10608: estimate 1.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 10609: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 10610: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 10611: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 10612: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 10751: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 10752: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 10753: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 10754: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 10755: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 10756: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 10757: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 10758: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 10759: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 10896: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 10897: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 10898: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 10899: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 10900: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 10901: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 10902: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 10903: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 10904: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.50s leader 5, trace 10985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.50s leader 5, trace 10986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 11049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 11050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 11051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 11052: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 11053: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 11054: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 11055: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 11056: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 11057: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 11201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 11202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 11203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 11204: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 11205: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 11206: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 11207: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 11208: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 11209: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 11338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 11339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 11340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 11341: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 11342: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 11343: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 11344: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 11345: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 11346: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 11486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 11487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 11488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 11489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 11490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 11491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 11492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 11493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 11494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 11641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 11642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 11643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 11644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 11645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 11646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 11647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 11648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 11649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 11790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 11791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 11792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 11793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 11794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 11795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 11796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 11797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 11798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 11926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 11927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 11928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 11929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 11930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 11931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 11932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 11933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 11934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 12076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 12077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 12078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 12079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 12080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 12081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 12082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 12083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 12084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 12227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 12228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 12229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 12230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 12231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 12232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 12233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 12234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 12235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 12374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 12375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 12376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 12377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 12378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 12379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 12380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 12381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 12382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 12515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 12516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 12517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 12518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 12519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 12520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 12521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 12522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 12523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 12660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 12661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 12662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 12663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 12664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 12665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 12666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 12667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 12668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 12805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 12806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 12807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 12808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 12809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 12810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 12811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 12812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 12813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 12955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 12956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 12957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 12958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 12959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 12960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 12961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 12962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 12963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.55s leader 5, trace 13028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 13095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 13096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 13097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 13098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 13099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 13100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 13101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 13102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 13103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 13240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 13241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 13242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 13243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 13244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 13245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 13246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 13247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 13248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 13392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 13393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 13394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 13395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 13396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 13397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 13398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 13399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 13400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 13543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 13544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 13545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 13546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 13547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 13548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 13549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 13550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 13551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 13684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 13685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 13686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 13687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 13688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 13689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 13690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 13691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 13692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 13830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 13831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 13832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 13833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 13834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 13835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 13836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 13837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 13838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 13980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 13981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 13982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 13983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 13984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 13985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 13986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 13987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 13988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 14131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 14132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 14133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 14134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 14135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 14136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 14137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 14138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 14139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 14272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 14273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 14274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 14275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 14276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 14277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 14278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 14279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 14280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 14417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 14418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 14419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 14420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 14421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 14422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 14423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 14424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 14425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 14568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 14569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 14570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 14571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 14572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 14573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 14574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 14575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 14576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 14718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 14719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 14720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 14721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 14722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 14723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 14724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 14725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 14726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 14858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 14859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 14860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 14861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 14862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 14863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 14864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 14865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 14866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 329.55s leader 5, trace 15002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 15009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 15010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 15011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 15012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 15013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 15014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 15015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 15016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 15017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 15162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 15163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 15164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 15165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 15166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 15167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 15168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 15169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 15170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 15328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 15329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 15330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 15331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 15332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 15333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 15334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 15335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 15336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 15472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 15473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 15474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 15475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 15476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 15477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 15478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 15479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 15480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 15617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 15618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 15619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 15620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 15621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 15622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 15623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 15624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 15625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 15764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 15765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 15766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 15767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 15768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 15769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 15770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 15771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 15772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 15915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 15916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 15917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 15918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 15919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 15920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 15921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 15922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 15923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Rook killed in action
- 1: Reed incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
