# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/6/108/good-ember/battle-108-1789673754379401331`

## Battle summary

**Ember** · 360 s · 285 shots.

### Turning points

- 18.1s, squad 4: contact (events line 217). First recorded contact.
- 40.2s, squad 0: help call ([trace 7268](#trace-7268)). No completion observed before termination.
- 92.8s, squad 0: withdrawal ([trace 10308](#trace-10308)). 115.5s, squad 0: took cover and returned fire.
- 143.4s, squad 0: withdrawal ([trace 12521](#trace-12521)). 163.5s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 20 shots, 5/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 265 shots, 1/8 lost.

### Decisions and attribution

At 32.4s, squad 0 chose prepared a base of fire ([trace 3782](#trace-3782)), followed by 0 shots and 1 own casualties; estimate 9.9 against 0 distinct squad-reported contacts; At 32.4s, squad 0 chose advanced tactically ([trace 6610](#trace-6610)), followed by 0 shots and 1 own casualties; estimate 9.9 against 0 distinct squad-reported contacts; At 13.8s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 1301](#trace-1301)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 13.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1300](#trace-1300)). Following evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8071838130050468, 'next_transition': 1332}.
- 41.4s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.592967 retreat threshold=0.220000 initiative=requires intent ([trace 7298](#trace-7298)). Following evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7305}.

### Communication

130 matched deliveries (mean 0.40s, max 5.25s); 246 explicit drops; 6 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.10s, squad 4, contact, evidence events line 217: First recorded contact; .
- 40.15s, squad 0, help call, evidence 7268: NeedSupport; No completion observed before termination.
- 92.85s, squad 0, withdrawal, evidence 10308: BreakContact: believed ratio at least two without superiority; 115.5s, squad 0: took cover and returned fire.
- 143.45s, squad 0, withdrawal, evidence 12521: BreakContact: believed ratio at least two without superiority; 163.5s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 17.646654354916553, 'next_transition': 796}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 17.646654354916553, 'next_transition': 796}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 17.646654354916553, 'next_transition': 796}.
<a id="trace-452"></a>
<a id="trace-473"></a>
<a id="trace-495"></a>
<a id="trace-516"></a>
<a id="trace-530"></a>
<a id="trace-549"></a>
<a id="trace-570"></a>
<a id="trace-649"></a>
<a id="trace-664"></a>
<a id="trace-688"></a>
<a id="trace-710"></a>
<a id="trace-725"></a>
<a id="trace-747"></a>
<a id="trace-772"></a>
<a id="trace-798"></a>
<a id="trace-813"></a>
<a id="trace-823"></a>
<a id="trace-908"></a>
<a id="trace-917"></a>
<a id="trace-933"></a>
<a id="trace-946"></a>
<a id="trace-972"></a>
<a id="trace-985"></a>
<a id="trace-1277"></a>
<a id="trace-1299"></a>
<a id="trace-1334"></a>
<a id="trace-1353"></a>
<a id="trace-1430"></a>
<a id="trace-1461"></a>
<a id="trace-1480"></a>
<a id="trace-1500"></a>
<a id="trace-1512"></a>
<a id="trace-1529"></a>
<a id="trace-1551"></a>
<a id="trace-1569"></a>
<a id="trace-2307"></a>
<a id="trace-2330"></a>
<a id="trace-2444"></a>
<a id="trace-2479"></a>
<a id="trace-2858"></a>
<a id="trace-2907"></a>
<a id="trace-2936"></a>
<a id="trace-2981"></a>
<a id="trace-2998"></a>
<a id="trace-3012"></a>
<a id="trace-3035"></a>
<a id="trace-3054"></a>
<a id="trace-3503"></a>
<a id="trace-3509"></a>
<a id="trace-3523"></a>
<a id="trace-3546"></a>
<a id="trace-3559"></a>
<a id="trace-3572"></a>
<a id="trace-3617"></a>
<a id="trace-3635"></a>
<a id="trace-3649"></a>
<a id="trace-3659"></a>
<a id="trace-3741"></a>
<a id="trace-3749"></a>
<a id="trace-3757"></a>
<a id="trace-3766"></a>
<a id="trace-3779"></a>
<a id="trace-6947"></a>
<a id="trace-6967"></a>
<a id="trace-6982"></a>
<a id="trace-7000"></a>
<a id="trace-7011"></a>
<a id="trace-7083"></a>
<a id="trace-7088"></a>
<a id="trace-7098"></a>
<a id="trace-7113"></a>
<a id="trace-7125"></a>
<a id="trace-7130"></a>
<a id="trace-7148"></a>
<a id="trace-7163"></a>
<a id="trace-7180"></a>
<a id="trace-7195"></a>
<a id="trace-7277"></a>
<a id="trace-7285"></a>
<a id="trace-7295"></a>
<a id="trace-7307"></a>
<a id="trace-7318"></a>
<a id="trace-7325"></a>
<a id="trace-7334"></a>
<a id="trace-7340"></a>
<a id="trace-7345"></a>
<a id="trace-7351"></a>
<a id="trace-7430"></a>
<a id="trace-7447"></a>
<a id="trace-7460"></a>
<a id="trace-7473"></a>
<a id="trace-7489"></a>
<a id="trace-7501"></a>
<a id="trace-7515"></a>
<a id="trace-7526"></a>
<a id="trace-7536"></a>
<a id="trace-7551"></a>
<a id="trace-7628"></a>
<a id="trace-7641"></a>
<a id="trace-7653"></a>
<a id="trace-7662"></a>
<a id="trace-7676"></a>
<a id="trace-7685"></a>
<a id="trace-7697"></a>
<a id="trace-7704"></a>
<a id="trace-7710"></a>
<a id="trace-7715"></a>
<a id="trace-7784"></a>
<a id="trace-7790"></a>
<a id="trace-7797"></a>
<a id="trace-7805"></a>
<a id="trace-7817"></a>
<a id="trace-7830"></a>
<a id="trace-7846"></a>
<a id="trace-7858"></a>
<a id="trace-7869"></a>
<a id="trace-7880"></a>
<a id="trace-7950"></a>
<a id="trace-7957"></a>
<a id="trace-7965"></a>
<a id="trace-7976"></a>
<a id="trace-7983"></a>
<a id="trace-7988"></a>
<a id="trace-7997"></a>
<a id="trace-8006"></a>
<a id="trace-8018"></a>
<a id="trace-8028"></a>
<a id="trace-8106"></a>
<a id="trace-8125"></a>
<a id="trace-8137"></a>
<a id="trace-8145"></a>
<a id="trace-8150"></a>
<a id="trace-8158"></a>
<a id="trace-8162"></a>
<a id="trace-8168"></a>
<a id="trace-8172"></a>
<a id="trace-8243"></a>
<a id="trace-8249"></a>
<a id="trace-8263"></a>
<a id="trace-8276"></a>
<a id="trace-8292"></a>
<a id="trace-8297"></a>
<a id="trace-8311"></a>
<a id="trace-8655"></a>
<a id="trace-8673"></a>
<a id="trace-8687"></a>
<a id="trace-8763"></a>
<a id="trace-8784"></a>
<a id="trace-8809"></a>
<a id="trace-8822"></a>
<a id="trace-8839"></a>
<a id="trace-8854"></a>
<a id="trace-8864"></a>
<a id="trace-8881"></a>
<a id="trace-8893"></a>
<a id="trace-8906"></a>
<a id="trace-8983"></a>
<a id="trace-9004"></a>
<a id="trace-9015"></a>
<a id="trace-9025"></a>
<a id="trace-9036"></a>
<a id="trace-9452"></a>
<a id="trace-9471"></a>
<a id="trace-9485"></a>
<a id="trace-9503"></a>
<a id="trace-9513"></a>
<a id="trace-9594"></a>
<a id="trace-9598"></a>
<a id="trace-9621"></a>
<a id="trace-9628"></a>
<a id="trace-9640"></a>
<a id="trace-9646"></a>
<a id="trace-9665"></a>
<a id="trace-9671"></a>
<a id="trace-10141"></a>
<a id="trace-10152"></a>
<a id="trace-10229"></a>
<a id="trace-10249"></a>
<a id="trace-10266"></a>
<a id="trace-10273"></a>
<a id="trace-10285"></a>
<a id="trace-10303"></a>
<a id="trace-10726"></a>
<a id="trace-10737"></a>
<a id="trace-10753"></a>
<a id="trace-10765"></a>
<a id="trace-10843"></a>
<a id="trace-10850"></a>
<a id="trace-10865"></a>
<a id="trace-10874"></a>
<a id="trace-10896"></a>
<a id="trace-10902"></a>
<a id="trace-10909"></a>
<a id="trace-10917"></a>
<a id="trace-10929"></a>
<a id="trace-10938"></a>
<a id="trace-11004"></a>
<a id="trace-11009"></a>
<a id="trace-11021"></a>
<a id="trace-11031"></a>
<a id="trace-11044"></a>
<a id="trace-11050"></a>
<a id="trace-11057"></a>
<a id="trace-11064"></a>
<a id="trace-11077"></a>
<a id="trace-11084"></a>
<a id="trace-11157"></a>
<a id="trace-11162"></a>
<a id="trace-11170"></a>
<a id="trace-11180"></a>
<a id="trace-11189"></a>
<a id="trace-11199"></a>
<a id="trace-11212"></a>
<a id="trace-11223"></a>
<a id="trace-11239"></a>
<a id="trace-11245"></a>
<a id="trace-11317"></a>
<a id="trace-11328"></a>
<a id="trace-11337"></a>
<a id="trace-11345"></a>
<a id="trace-11358"></a>
<a id="trace-11366"></a>
<a id="trace-11379"></a>
<a id="trace-11390"></a>
<a id="trace-11407"></a>
<a id="trace-11414"></a>
<a id="trace-11486"></a>
<a id="trace-11610"></a>
<a id="trace-11628"></a>
<a id="trace-11639"></a>
<a id="trace-11651"></a>
<a id="trace-11660"></a>
<a id="trace-11676"></a>
<a id="trace-11685"></a>
<a id="trace-11694"></a>
<a id="trace-11705"></a>
<a id="trace-11780"></a>
<a id="trace-11789"></a>
<a id="trace-11808"></a>
<a id="trace-11815"></a>
<a id="trace-11828"></a>
<a id="trace-11836"></a>
<a id="trace-11847"></a>
<a id="trace-11865"></a>
<a id="trace-11881"></a>
<a id="trace-11895"></a>
<a id="trace-11969"></a>
<a id="trace-11973"></a>
<a id="trace-11988"></a>
<a id="trace-11994"></a>
<a id="trace-12001"></a>
<a id="trace-12008"></a>
<a id="trace-12020"></a>
<a id="trace-12035"></a>
<a id="trace-12050"></a>
<a id="trace-12061"></a>
<a id="trace-12132"></a>
<a id="trace-12142"></a>
<a id="trace-12154"></a>
<a id="trace-12164"></a>
<a id="trace-12171"></a>
<a id="trace-12180"></a>
<a id="trace-12199"></a>
<a id="trace-12207"></a>
<a id="trace-12222"></a>
<a id="trace-12236"></a>
<a id="trace-12310"></a>
<a id="trace-12322"></a>
<a id="trace-12334"></a>
<a id="trace-12343"></a>
<a id="trace-12352"></a>
<a id="trace-12359"></a>
<a id="trace-12372"></a>
<a id="trace-12379"></a>
<a id="trace-12389"></a>
<a id="trace-12394"></a>
<a id="trace-12464"></a>
<a id="trace-12470"></a>
<a id="trace-12483"></a>
<a id="trace-12490"></a>
<a id="trace-12503"></a>
<a id="trace-12508"></a>
<a id="trace-12519"></a>
<a id="trace-12581"></a>
<a id="trace-12596"></a>
<a id="trace-12607"></a>
<a id="trace-12674"></a>
<a id="trace-12680"></a>
<a id="trace-12692"></a>
<a id="trace-12698"></a>
<a id="trace-12707"></a>
<a id="trace-12714"></a>
<a id="trace-12729"></a>
<a id="trace-12744"></a>
<a id="trace-12753"></a>
<a id="trace-12760"></a>
<a id="trace-12831"></a>
<a id="trace-12836"></a>
<a id="trace-12843"></a>
<a id="trace-12850"></a>
<a id="trace-12861"></a>
<a id="trace-12875"></a>
<a id="trace-12884"></a>
<a id="trace-12894"></a>
<a id="trace-12907"></a>
<a id="trace-12913"></a>
<a id="trace-12986"></a>
<a id="trace-12992"></a>
<a id="trace-13004"></a>
<a id="trace-13019"></a>
<a id="trace-13029"></a>
<a id="trace-13033"></a>
<a id="trace-13047"></a>
<a id="trace-13058"></a>
<a id="trace-13065"></a>
<a id="trace-13072"></a>
<a id="trace-13142"></a>
<a id="trace-13147"></a>
<a id="trace-13156"></a>
<a id="trace-13160"></a>
<a id="trace-13169"></a>
<a id="trace-13174"></a>
<a id="trace-13181"></a>
<a id="trace-13193"></a>
<a id="trace-13207"></a>
<a id="trace-13212"></a>
<a id="trace-13278"></a>
<a id="trace-13286"></a>
<a id="trace-13294"></a>
<a id="trace-13297"></a>
<a id="trace-13306"></a>
<a id="trace-13313"></a>
<a id="trace-13321"></a>
<a id="trace-13331"></a>
<a id="trace-13339"></a>
<a id="trace-13344"></a>
<a id="trace-13412"></a>
<a id="trace-13420"></a>
<a id="trace-13426"></a>
<a id="trace-13430"></a>
<a id="trace-13438"></a>
<a id="trace-13444"></a>
<a id="trace-13453"></a>
<a id="trace-13462"></a>
<a id="trace-13471"></a>
<a id="trace-13477"></a>
<a id="trace-13545"></a>
<a id="trace-13551"></a>
<a id="trace-13557"></a>
<a id="trace-13563"></a>
<a id="trace-13573"></a>
<a id="trace-13578"></a>
<a id="trace-13586"></a>
<a id="trace-13593"></a>
<a id="trace-13602"></a>
<a id="trace-13609"></a>
<a id="trace-13677"></a>
<a id="trace-13683"></a>
<a id="trace-13690"></a>
<a id="trace-13694"></a>
<a id="trace-13705"></a>
<a id="trace-13710"></a>
<a id="trace-13719"></a>
<a id="trace-13731"></a>
<a id="trace-13738"></a>
<a id="trace-13744"></a>
<a id="trace-13810"></a>
<a id="trace-13816"></a>
<a id="trace-13824"></a>
<a id="trace-13829"></a>
<a id="trace-13839"></a>
<a id="trace-13843"></a>
<a id="trace-13851"></a>
<a id="trace-13863"></a>
<a id="trace-13870"></a>
<a id="trace-13877"></a>
<a id="trace-13947"></a>
<a id="trace-13951"></a>
<a id="trace-13958"></a>
<a id="trace-13962"></a>
<a id="trace-13971"></a>
<a id="trace-13978"></a>
<a id="trace-13986"></a>
<a id="trace-13995"></a>
<a id="trace-14004"></a>
<a id="trace-14010"></a>
<a id="trace-14080"></a>
<a id="trace-14084"></a>
<a id="trace-14092"></a>
<a id="trace-14096"></a>
<a id="trace-14106"></a>
<a id="trace-14111"></a>
<a id="trace-14118"></a>
<a id="trace-14127"></a>
<a id="trace-14137"></a>
<a id="trace-14142"></a>
<a id="trace-14209"></a>
<a id="trace-14215"></a>
<a id="trace-14222"></a>
<a id="trace-14228"></a>
<a id="trace-14237"></a>
<a id="trace-14242"></a>
<a id="trace-14251"></a>
<a id="trace-14263"></a>
<a id="trace-14270"></a>
<a id="trace-14275"></a>
<a id="trace-14342"></a>
<a id="trace-14347"></a>
<a id="trace-14355"></a>
<a id="trace-14361"></a>
<a id="trace-14372"></a>
<a id="trace-14378"></a>
<a id="trace-14387"></a>
<a id="trace-14396"></a>
<a id="trace-14403"></a>
<a id="trace-14409"></a>
<a id="trace-14479"></a>
<a id="trace-14483"></a>
<a id="trace-14490"></a>
<a id="trace-14494"></a>
<a id="trace-14503"></a>
<a id="trace-14510"></a>
<a id="trace-14518"></a>
<a id="trace-14528"></a>
<a id="trace-14536"></a>
<a id="trace-14541"></a>
<a id="trace-14611"></a>
<a id="trace-14614"></a>
<a id="trace-14621"></a>
<a id="trace-14629"></a>
<a id="trace-14636"></a>
<a id="trace-14642"></a>
<a id="trace-14649"></a>
<a id="trace-14658"></a>
<a id="trace-14667"></a>
<a id="trace-14673"></a>
<a id="trace-14742"></a>
<a id="trace-14746"></a>
<a id="trace-14752"></a>
<a id="trace-14760"></a>
<a id="trace-14766"></a>
<a id="trace-14773"></a>
<a id="trace-14784"></a>
<a id="trace-14792"></a>
<a id="trace-14800"></a>
<a id="trace-14805"></a>
<a id="trace-14873"></a>
<a id="trace-14879"></a>
<a id="trace-14886"></a>
<a id="trace-14890"></a>
<a id="trace-14899"></a>
<a id="trace-14905"></a>
<a id="trace-14916"></a>
<a id="trace-14924"></a>
<a id="trace-14932"></a>
<a id="trace-14937"></a>
<a id="trace-15006"></a>
<a id="trace-15011"></a>
<a id="trace-15017"></a>
<a id="trace-15022"></a>
<a id="trace-15032"></a>
<a id="trace-15037"></a>
<a id="trace-15045"></a>
<a id="trace-15055"></a>
<a id="trace-15063"></a>
<a id="trace-15070"></a>
<a id="trace-15138"></a>
<a id="trace-15141"></a>
<a id="trace-15149"></a>
<a id="trace-15157"></a>
<a id="trace-15165"></a>
<a id="trace-15170"></a>
<a id="trace-15178"></a>
<a id="trace-15187"></a>
<a id="trace-15196"></a>
<a id="trace-15203"></a>
<a id="trace-15271"></a>
<a id="trace-15276"></a>
<a id="trace-15283"></a>
<a id="trace-15289"></a>
<a id="trace-15296"></a>
<a id="trace-15302"></a>
<a id="trace-15312"></a>
<a id="trace-15320"></a>
<a id="trace-15328"></a>
<a id="trace-15333"></a>
<a id="trace-15401"></a>
<a id="trace-15407"></a>
<a id="trace-15415"></a>
<a id="trace-15420"></a>
<a id="trace-15428"></a>
<a id="trace-15432"></a>
<a id="trace-15443"></a>
<a id="trace-15454"></a>
<a id="trace-15463"></a>
<a id="trace-15472"></a>
<a id="trace-15538"></a>
<a id="trace-15543"></a>
<a id="trace-15549"></a>
<a id="trace-15555"></a>
<a id="trace-15564"></a>
<a id="trace-15570"></a>
<a id="trace-15580"></a>
<a id="trace-15588"></a>
<a id="trace-15599"></a>
<a id="trace-15608"></a>
<a id="trace-15674"></a>
<a id="trace-15680"></a>
<a id="trace-15693"></a>
<a id="trace-15699"></a>
<a id="trace-15711"></a>
<a id="trace-15716"></a>
<a id="trace-15729"></a>
<a id="trace-15737"></a>
<a id="trace-15744"></a>
<a id="trace-15750"></a>
<a id="trace-15817"></a>
<a id="trace-15822"></a>
<a id="trace-15832"></a>
<a id="trace-15835"></a>
<a id="trace-15845"></a>
<a id="trace-15850"></a>
<a id="trace-15861"></a>
<a id="trace-15868"></a>
<a id="trace-15875"></a>
<a id="trace-15881"></a>
<a id="trace-15949"></a>
<a id="trace-15952"></a>
<a id="trace-15960"></a>
<a id="trace-15966"></a>
<a id="trace-15975"></a>
<a id="trace-15982"></a>
<a id="trace-15990"></a>
<a id="trace-15996"></a>
<a id="trace-16005"></a>
<a id="trace-16014"></a>
<a id="trace-16080"></a>
<a id="trace-16084"></a>
<a id="trace-16090"></a>
<a id="trace-16095"></a>
<a id="trace-16106"></a>
<a id="trace-16113"></a>
<a id="trace-16122"></a>
<a id="trace-16129"></a>
<a id="trace-16138"></a>
<a id="trace-16145"></a>
<a id="trace-16211"></a>
<a id="trace-16216"></a>
<a id="trace-16226"></a>
<a id="trace-16230"></a>
<a id="trace-16240"></a>
<a id="trace-16245"></a>
<a id="trace-16254"></a>
<a id="trace-16262"></a>
<a id="trace-16271"></a>
<a id="trace-16278"></a>
<a id="trace-16345"></a>
<a id="trace-16348"></a>
<a id="trace-16358"></a>
<a id="trace-16361"></a>
<a id="trace-16372"></a>
<a id="trace-16381"></a>
<a id="trace-16388"></a>
<a id="trace-16395"></a>
<a id="trace-16402"></a>
<a id="trace-16409"></a>
<a id="trace-16477"></a>
<a id="trace-16482"></a>
<a id="trace-16491"></a>
<a id="trace-16495"></a>
<a id="trace-16513"></a>
<a id="trace-16520"></a>
<a id="trace-16528"></a>
<a id="trace-16539"></a>
<a id="trace-16544"></a>
<a id="trace-16611"></a>
<a id="trace-16614"></a>
<a id="trace-16622"></a>
<a id="trace-16628"></a>
<a id="trace-16638"></a>
<a id="trace-16644"></a>
<a id="trace-16652"></a>
<a id="trace-16658"></a>
<a id="trace-16668"></a>
<a id="trace-16673"></a>
<a id="trace-16740"></a>
<a id="trace-16744"></a>
<a id="trace-16754"></a>
<a id="trace-16759"></a>
<a id="trace-16768"></a>
<a id="trace-16773"></a>
<a id="trace-16783"></a>
<a id="trace-16789"></a>
<a id="trace-16798"></a>
<a id="trace-16804"></a>
<a id="trace-16871"></a>
<a id="trace-16877"></a>
<a id="trace-16885"></a>
<a id="trace-16888"></a>
<a id="trace-16899"></a>
<a id="trace-16908"></a>
<a id="trace-16916"></a>
<a id="trace-16921"></a>
<a id="trace-16928"></a>
<a id="trace-16934"></a>
<a id="trace-17002"></a>
<a id="trace-17008"></a>
<a id="trace-17015"></a>
<a id="trace-17019"></a>
<a id="trace-17030"></a>
<a id="trace-17036"></a>
<a id="trace-17042"></a>
<a id="trace-17049"></a>
<a id="trace-17059"></a>
<a id="trace-17064"></a>
<a id="trace-17131"></a>
<a id="trace-17135"></a>
<a id="trace-17143"></a>
<a id="trace-17149"></a>
<a id="trace-17160"></a>
<a id="trace-17166"></a>
<a id="trace-17174"></a>
<a id="trace-17179"></a>
<a id="trace-17190"></a>
<a id="trace-17195"></a>
<a id="trace-17262"></a>
<a id="trace-17270"></a>
<a id="trace-17276"></a>
<a id="trace-17281"></a>
<a id="trace-17290"></a>
<a id="trace-17298"></a>
<a id="trace-17306"></a>
<a id="trace-17312"></a>
<a id="trace-17322"></a>
<a id="trace-17327"></a>
<a id="trace-17393"></a>
<a id="trace-17401"></a>
<a id="trace-17407"></a>
<a id="trace-17413"></a>
<a id="trace-17426"></a>
<a id="trace-17431"></a>
<a id="trace-17439"></a>
<a id="trace-17445"></a>
<a id="trace-17454"></a>
<a id="trace-17461"></a>
<a id="trace-17528"></a>
<a id="trace-17533"></a>
<a id="trace-17540"></a>
<a id="trace-17545"></a>
<a id="trace-17558"></a>
<a id="trace-17563"></a>
<a id="trace-17572"></a>
<a id="trace-17577"></a>
<a id="trace-17588"></a>
<a id="trace-17593"></a>
<a id="trace-17659"></a>
<a id="trace-17664"></a>
<a id="trace-17673"></a>
<a id="trace-17676"></a>
<a id="trace-17687"></a>
<a id="trace-17694"></a>
<a id="trace-17701"></a>
<a id="trace-17709"></a>
<a id="trace-17718"></a>
<a id="trace-17723"></a>
<a id="trace-17791"></a>
<a id="trace-17799"></a>
<a id="trace-17806"></a>
<a id="trace-17810"></a>
<a id="trace-17819"></a>
<a id="trace-17825"></a>
<a id="trace-17833"></a>
<a id="trace-17841"></a>
<a id="trace-17849"></a>
<a id="trace-17855"></a>
<a id="trace-17923"></a>
<a id="trace-17929"></a>
<a id="trace-17935"></a>
<a id="trace-17941"></a>
<a id="trace-17953"></a>
<a id="trace-17958"></a>
<a id="trace-17965"></a>
<a id="trace-17971"></a>
<a id="trace-17980"></a>
<a id="trace-17986"></a>
<a id="trace-18054"></a>
<a id="trace-18059"></a>
<a id="trace-18066"></a>
<a id="trace-18070"></a>
<a id="trace-18083"></a>
<a id="trace-18088"></a>
<a id="trace-18097"></a>
<a id="trace-18107"></a>
<a id="trace-18114"></a>
<a id="trace-18120"></a>
<a id="trace-18186"></a>
<a id="trace-18192"></a>
<a id="trace-18200"></a>
<a id="trace-18205"></a>
<a id="trace-18217"></a>
<a id="trace-18221"></a>
<a id="trace-18229"></a>
<a id="trace-18238"></a>
<a id="trace-18244"></a>
<a id="trace-18251"></a>
<a id="trace-18320"></a>
<a id="trace-18323"></a>
<a id="trace-18330"></a>
<a id="trace-18333"></a>
<a id="trace-18344"></a>
<a id="trace-18351"></a>
<a id="trace-18359"></a>
<a id="trace-18366"></a>
<a id="trace-18375"></a>
<a id="trace-18381"></a>
- 1.60s–359.80s (×715), actor 37, squad 4 (trace 452): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250408710543523, 'next_transition': 473}.
<a id="trace-796"></a>
<a id="trace-811"></a>
<a id="trace-821"></a>
<a id="trace-906"></a>
<a id="trace-915"></a>
<a id="trace-931"></a>
- 8.70s–11.20s (×6), actor 5, squad 0 (trace 796): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 584. Next observer evidence: {'until': 9, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875133313539214, 'next_transition': 811}.
<a id="trace-987"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 987): traveling overwatch. Knowledge: actor memory at 10.00s, trace 829. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250321488628155, 'next_transition': 1275}.
<a id="trace-988"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 988): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 829. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250321488628155, 'next_transition': 1275}.
<a id="trace-1275"></a>
- 13.20s–13.20s (×1), actor 5, squad 0 (trace 1275): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 834. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41342948436435856, 'next_transition': 167}.
<a id="trace-167"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (events line 167): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8071838130050468, 'next_transition': 1332}.
<a id="trace-1300"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 1300): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 1300. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8071838130050468, 'next_transition': 1332}.
<a id="trace-1301"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 1301): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 1301. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8071838130050468, 'next_transition': 1332}.
<a id="trace-1332"></a>
<a id="trace-1351"></a>
<a id="trace-1428"></a>
<a id="trace-1459"></a>
<a id="trace-1478"></a>
<a id="trace-1498"></a>
<a id="trace-1510"></a>
<a id="trace-1527"></a>
<a id="trace-1567"></a>
- 14.20s–18.75s (×9), actor 5, squad 0 (trace 1332): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 13.75s, trace 1301. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5627070404550514, 'next_transition': 1351}.
<a id="trace-1570"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 1570): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1358. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150008524287157, 'next_transition': 1942}.
<a id="trace-1571"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 1571): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1358. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150008524287157, 'next_transition': 1942}.
<a id="trace-1572"></a>
<a id="trace-1942"></a>
- 18.75s–19.10s (×2), actor 0, squad 0 (trace 1572): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1358. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150008524287157, 'next_transition': 1942}.
<a id="trace-2305"></a>
<a id="trace-2328"></a>
<a id="trace-2442"></a>
<a id="trace-2477"></a>
- 19.25s–20.75s (×4), actor 5, squad 0 (trace 2305): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1363. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17654528099183742, 'next_transition': 2328}.
<a id="trace-2490"></a>
- 21.10s–21.10s (×1), actor 0, squad 0 (trace 2490): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2354. Next observer evidence: {'until': 21.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6103300546386928, 'next_transition': 2905}.
<a id="trace-2905"></a>
<a id="trace-2996"></a>
<a id="trace-3033"></a>
- 21.75s–24.25s (×3), actor 5, squad 0 (trace 2905): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2359. Next observer evidence: {'until': 23.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6157378605978046, 'next_transition': 2996}.
<a id="trace-3046"></a>
- 24.60s–24.60s (×1), actor 0, squad 0 (trace 3046): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 2354. Next observer evidence: None.
<a id="trace-3052"></a>
- 24.75s–24.75s (×1), actor 5, squad 0 (trace 3052): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2359. Next observer evidence: {'until': 25, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08743812548918523, 'next_transition': 3130}.
<a id="trace-3130"></a>
- 25.10s–25.10s (×1), actor 0, squad 0 (trace 3130): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 3066. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04486786797433664, 'next_transition': 3501}.
<a id="trace-3501"></a>
<a id="trace-3507"></a>
<a id="trace-3557"></a>
<a id="trace-3615"></a>
- 25.25s–28.25s (×4), actor 5, squad 0 (trace 3501): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3071. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0920306392594336, 'next_transition': 3507}.
<a id="trace-3631"></a>
- 28.70s–28.70s (×1), actor 0, squad 0 (trace 3631): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3066. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7040485418544771, 'next_transition': 3657}.
<a id="trace-3657"></a>
<a id="trace-3739"></a>
<a id="trace-3747"></a>
<a id="trace-3764"></a>
<a id="trace-3777"></a>
- 29.75s–32.25s (×5), actor 5, squad 0 (trace 3657): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3071. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1701002454896082, 'next_transition': 3739}.
<a id="trace-3782"></a>
- 32.35s–32.35s (×1), actor 0, squad 0 (trace 3782): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 3661. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3646758131414476, 'next_transition': 6965}.
<a id="trace-6609"></a>
- 32.35s–32.35s (×1), actor 0, squad 0 (trace 6609): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 30.00s, trace 3661. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3646758131414476, 'next_transition': 6965}.
<a id="trace-6610"></a>
- 32.35s–32.35s (×1), actor 0, squad 0 (trace 6610): MoveTactically. Knowledge: actor memory at 30.00s, trace 3661. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3646758131414476, 'next_transition': 6965}.
<a id="trace-6611"></a>
- 32.35s–32.35s (×1), actor 0, squad 0 (trace 6611): contact cover complete: assessment resumes closure. Knowledge: actor memory at 30.00s, trace 3661. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3646758131414476, 'next_transition': 6965}.
<a id="trace-6965"></a>
<a id="trace-6980"></a>
<a id="trace-6998"></a>
<a id="trace-7009"></a>
<a id="trace-7081"></a>
<a id="trace-7086"></a>
<a id="trace-7111"></a>
<a id="trace-7123"></a>
<a id="trace-7146"></a>
<a id="trace-7161"></a>
<a id="trace-7193"></a>
- 33.25s–39.75s (×11), actor 5, squad 0 (trace 6965): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3666. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0399857593017658, 'next_transition': 6980}.
<a id="trace-7268"></a>
- 40.15s–40.15s (×1), actor 1, squad 0 (trace 7268): NeedSupport. Knowledge: actor memory at 40.00s, trace 7202. Next observer evidence: {'until': 41.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.10275714285714292, 'next_transition': 499}.
<a id="trace-499"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (events line 499): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7298"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (trace 7298): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.592967 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 41.35s, trace 7298. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7305}.
<a id="trace-7299"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (trace 7299): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.592967 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 41.35s, trace 7299. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7305}.
<a id="trace-7305"></a>
<a id="trace-7316"></a>
<a id="trace-7323"></a>
<a id="trace-7332"></a>
<a id="trace-7338"></a>
<a id="trace-7445"></a>
<a id="trace-7458"></a>
<a id="trace-7471"></a>
<a id="trace-7487"></a>
<a id="trace-7499"></a>
<a id="trace-7524"></a>
<a id="trace-7534"></a>
<a id="trace-7549"></a>
<a id="trace-7626"></a>
<a id="trace-7639"></a>
<a id="trace-7651"></a>
<a id="trace-7674"></a>
<a id="trace-7683"></a>
<a id="trace-7695"></a>
<a id="trace-7702"></a>
<a id="trace-7708"></a>
<a id="trace-7713"></a>
<a id="trace-7788"></a>
<a id="trace-7795"></a>
<a id="trace-7803"></a>
<a id="trace-7815"></a>
<a id="trace-7828"></a>
<a id="trace-7844"></a>
<a id="trace-7856"></a>
<a id="trace-7867"></a>
<a id="trace-7878"></a>
<a id="trace-7948"></a>
<a id="trace-7955"></a>
<a id="trace-7963"></a>
<a id="trace-7974"></a>
<a id="trace-7981"></a>
<a id="trace-7986"></a>
<a id="trace-7995"></a>
<a id="trace-8004"></a>
<a id="trace-8016"></a>
<a id="trace-8026"></a>
<a id="trace-8104"></a>
<a id="trace-8114"></a>
<a id="trace-8143"></a>
<a id="trace-8148"></a>
<a id="trace-8166"></a>
<a id="trace-8170"></a>
<a id="trace-8241"></a>
<a id="trace-8247"></a>
- 41.75s–70.75s (×49), actor 5, squad 0 (trace 7305): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 41.35s, trace 7299. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0849571428571433, 'next_transition': 7316}.
<a id="trace-8252"></a>
- 70.90s–70.90s (×1), actor 1, squad 0 (trace 8252): movement clock expired: request actual-position arrival certification; retain stage and generation. Knowledge: actor memory at 70.00s, trace 8174. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8261}.
<a id="trace-8261"></a>
<a id="trace-8290"></a>
<a id="trace-8309"></a>
- 71.25s–73.25s (×3), actor 5, squad 0 (trace 8261): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 8178. Next observer evidence: {'until': 72.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.45001036642796893, 'next_transition': 8290}.
<a id="trace-8319"></a>
- 73.50s–73.50s (×1), actor 1, squad 0 (trace 8319): no progress: eligible movement budget expired; contract to column. Knowledge: actor memory at 70.00s, trace 8174. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32442481961801545, 'next_transition': 8653}.
<a id="trace-8653"></a>
<a id="trace-8671"></a>
<a id="trace-8685"></a>
<a id="trace-8761"></a>
<a id="trace-8782"></a>
<a id="trace-8807"></a>
<a id="trace-8820"></a>
<a id="trace-8837"></a>
<a id="trace-8852"></a>
<a id="trace-8879"></a>
<a id="trace-8981"></a>
<a id="trace-9013"></a>
- 73.75s–81.25s (×12), actor 5, squad 0 (trace 8653): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 8178. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8388024732405123, 'next_transition': 8671}.
<a id="trace-9026"></a>
- 81.75s–81.75s (×1), actor 1, squad 0 (trace 9026): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 80.00s, trace 8908. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.929969169963441, 'next_transition': 9034}.
<a id="trace-9034"></a>
- 82.25s–82.25s (×1), actor 5, squad 0 (trace 9034): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 8911. Next observer evidence: {'until': 82.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498342025890874, 'next_transition': 9039}.
<a id="trace-9039"></a>
- 82.45s–82.45s (×1), actor 1, squad 0 (trace 9039): Reorganise: completed/failed drill. Knowledge: actor memory at 80.00s, trace 8908. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150161172242519, 'next_transition': 9450}.
<a id="trace-9044"></a>
- 82.45s–82.45s (×1), actor 1, squad 0 (trace 9044): MoveTactically. Knowledge: actor memory at 80.00s, trace 8908. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150161172242519, 'next_transition': 9450}.
<a id="trace-9045"></a>
- 82.45s–82.45s (×1), actor 1, squad 0 (trace 9045): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 80.00s, trace 8908. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150161172242519, 'next_transition': 9450}.
<a id="trace-9450"></a>
<a id="trace-9469"></a>
<a id="trace-9483"></a>
<a id="trace-9501"></a>
<a id="trace-9511"></a>
<a id="trace-9592"></a>
<a id="trace-9626"></a>
<a id="trace-9644"></a>
<a id="trace-9663"></a>
- 82.75s–88.25s (×9), actor 5, squad 0 (trace 9450): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 8911. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7758396317601696, 'next_transition': 9469}.
<a id="trace-9680"></a>
- 89.20s–89.20s (×1), actor 1, squad 0 (trace 9680): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 9521. Next observer evidence: None.
<a id="trace-9681"></a>
- 89.20s–89.20s (×1), actor 1, squad 0 (trace 9681): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 9521. Next observer evidence: None.
<a id="trace-9682"></a>
- 89.20s–89.20s (×1), actor 1, squad 0 (trace 9682): . Knowledge: actor memory at 85.00s, trace 9521. Next observer evidence: None.
<a id="trace-10139"></a>
<a id="trace-10150"></a>
<a id="trace-10227"></a>
<a id="trace-10247"></a>
<a id="trace-10264"></a>
<a id="trace-10271"></a>
<a id="trace-10283"></a>
<a id="trace-10301"></a>
- 89.25s–92.75s (×8), actor 5, squad 0 (trace 10139): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 9524. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5122814089718203, 'next_transition': 10150}.
<a id="trace-10308"></a>
- 92.85s–92.85s (×1), actor 1, squad 0 (trace 10308): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 90.00s, trace 10158. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5568267758961596, 'next_transition': 10724}.
<a id="trace-10309"></a>
- 92.85s–92.85s (×1), actor 1, squad 0 (trace 10309): rearward bound: one stationary suppressing element. Knowledge: actor memory at 90.00s, trace 10158. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5568267758961596, 'next_transition': 10724}.
<a id="trace-10724"></a>
<a id="trace-10735"></a>
<a id="trace-10763"></a>
<a id="trace-10848"></a>
<a id="trace-10863"></a>
<a id="trace-10872"></a>
<a id="trace-10894"></a>
<a id="trace-10900"></a>
<a id="trace-10907"></a>
<a id="trace-10915"></a>
<a id="trace-10927"></a>
<a id="trace-11019"></a>
<a id="trace-11029"></a>
<a id="trace-11042"></a>
<a id="trace-11048"></a>
<a id="trace-11062"></a>
<a id="trace-11075"></a>
<a id="trace-11168"></a>
<a id="trace-11187"></a>
<a id="trace-11197"></a>
<a id="trace-11210"></a>
<a id="trace-11237"></a>
<a id="trace-11243"></a>
- 93.25s–109.75s (×23), actor 5, squad 0 (trace 10724): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 10161. Next observer evidence: {'until': 93.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.33237747119345973, 'next_transition': 10735}.
<a id="trace-921"></a>
- 110.45s–110.45s (×1), actor 5, squad 0 (events line 921): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2095107447545325, 'next_transition': 11326}.
<a id="trace-11322"></a>
- 110.45s–110.45s (×1), actor 5, squad 0 (trace 11322): renew committed intent (75 s lifetime). Knowledge: actor memory at 110.45s, trace 11322. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2095107447545325, 'next_transition': 11326}.
<a id="trace-11326"></a>
<a id="trace-11335"></a>
<a id="trace-11343"></a>
<a id="trace-11364"></a>
<a id="trace-11377"></a>
<a id="trace-11388"></a>
<a id="trace-11405"></a>
- 110.75s–114.25s (×7), actor 5, squad 0 (trace 11326): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.45s, trace 11322. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37801157944697944, 'next_transition': 11335}.
<a id="trace-11417"></a>
- 114.85s–114.85s (×1), actor 1, squad 0 (trace 11417): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 110.00s, trace 11247. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149879452058439, 'next_transition': 11484}.
<a id="trace-11484"></a>
- 115.25s–115.25s (×1), actor 5, squad 0 (trace 11484): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 11419. Next observer evidence: {'until': 115.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749962103129045, 'next_transition': 11490}.
<a id="trace-11490"></a>
- 115.45s–115.45s (×1), actor 1, squad 0 (trace 11490): Reorganise: completed/failed drill. Knowledge: actor memory at 115.00s, trace 11418. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749962103128967, 'next_transition': 11608}.
<a id="trace-11493"></a>
- 115.45s–115.45s (×1), actor 1, squad 0 (trace 11493): ReactToContact: cover and return fire. Knowledge: actor memory at 115.00s, trace 11418. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749962103128967, 'next_transition': 11608}.
<a id="trace-11494"></a>
- 115.45s–115.45s (×1), actor 1, squad 0 (trace 11494): Reorganise complete: known contact. Knowledge: actor memory at 115.00s, trace 11418. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749962103128967, 'next_transition': 11608}.
<a id="trace-11608"></a>
<a id="trace-11626"></a>
- 115.75s–116.25s (×2), actor 5, squad 0 (trace 11608): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 11419. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.01788045371348185, 'next_transition': 11626}.
<a id="trace-11630"></a>
- 116.45s–116.45s (×1), actor 1, squad 0 (trace 11630): received platoon directive; retain contact cover stage. Knowledge: actor memory at 115.00s, trace 11418. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9293657736006251, 'next_transition': 11649}.
<a id="trace-11649"></a>
<a id="trace-11658"></a>
<a id="trace-11674"></a>
- 117.25s–118.25s (×3), actor 5, squad 0 (trace 11649): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 11419. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259968105672515, 'next_transition': 11658}.
<a id="trace-11695"></a>
- 119.30s–119.30s (×1), actor 1, squad 0 (trace 11695): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 115.00s, trace 11418. Next observer evidence: {'until': 119.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600570443491308, 'next_transition': 11703}.
<a id="trace-11703"></a>
<a id="trace-11778"></a>
<a id="trace-11787"></a>
<a id="trace-11806"></a>
<a id="trace-11813"></a>
<a id="trace-11826"></a>
<a id="trace-11845"></a>
<a id="trace-11863"></a>
<a id="trace-11879"></a>
- 119.75s–124.25s (×9), actor 5, squad 0 (trace 11703): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 11419. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1108026939521412, 'next_transition': 11778}.
<a id="trace-11885"></a>
- 124.45s–124.45s (×1), actor 1, squad 0 (trace 11885): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 120.00s, trace 11706. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04764999999999997, 'next_transition': 11893}.
<a id="trace-11893"></a>
<a id="trace-11971"></a>
<a id="trace-11986"></a>
<a id="trace-11992"></a>
<a id="trace-11999"></a>
<a id="trace-12006"></a>
<a id="trace-12033"></a>
<a id="trace-12048"></a>
<a id="trace-12059"></a>
<a id="trace-12130"></a>
<a id="trace-12152"></a>
<a id="trace-12162"></a>
<a id="trace-12169"></a>
<a id="trace-12197"></a>
<a id="trace-12205"></a>
<a id="trace-12234"></a>
<a id="trace-12320"></a>
<a id="trace-12332"></a>
<a id="trace-12341"></a>
<a id="trace-12357"></a>
- 124.75s–137.80s (×20), actor 5, squad 0 (trace 11893): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 11707. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4175085202565803, 'next_transition': 11971}.
<a id="trace-1339"></a>
- 138.10s–138.10s (×1), actor 5, squad 0 (events line 1339): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12361"></a>
- 138.10s–138.10s (×1), actor 5, squad 0 (trace 12361): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.479143 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 138.10s, trace 12361. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12370}.
<a id="trace-12362"></a>
- 138.10s–138.10s (×1), actor 5, squad 0 (trace 12362): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.479143 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 138.10s, trace 12362. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12370}.
<a id="trace-12370"></a>
<a id="trace-12377"></a>
<a id="trace-12387"></a>
<a id="trace-12392"></a>
<a id="trace-12462"></a>
<a id="trace-12468"></a>
<a id="trace-12481"></a>
<a id="trace-12488"></a>
<a id="trace-12501"></a>
<a id="trace-12517"></a>
- 138.30s–143.30s (×10), actor 5, squad 0 (trace 12370): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 138.10s, trace 12362. Next observer evidence: {'until': 138.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12377}.
<a id="trace-12521"></a>
- 143.45s–143.45s (×1), actor 1, squad 0 (trace 12521): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 140.00s, trace 12397. Next observer evidence: {'until': 143.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12579}.
<a id="trace-12522"></a>
- 143.45s–143.45s (×1), actor 1, squad 0 (trace 12522): rearward bound: one stationary suppressing element. Knowledge: actor memory at 140.00s, trace 12397. Next observer evidence: {'until': 143.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12579}.
<a id="trace-12579"></a>
<a id="trace-12605"></a>
<a id="trace-12672"></a>
<a id="trace-12690"></a>
<a id="trace-12696"></a>
<a id="trace-12705"></a>
<a id="trace-12727"></a>
<a id="trace-12742"></a>
<a id="trace-12758"></a>
<a id="trace-12829"></a>
<a id="trace-12834"></a>
<a id="trace-12841"></a>
<a id="trace-12873"></a>
<a id="trace-12882"></a>
<a id="trace-12892"></a>
<a id="trace-12905"></a>
<a id="trace-12911"></a>
- 143.80s–154.80s (×17), actor 5, squad 0 (trace 12579): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 12398. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.892503463581018, 'next_transition': 12605}.
<a id="trace-12929"></a>
- 155.05s–155.05s (×1), actor 1, squad 0 (trace 12929): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 155.00s, trace 12916. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199925219463916, 'next_transition': 12984}.
<a id="trace-12930"></a>
- 155.05s–155.05s (×1), actor 1, squad 0 (trace 12930): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 155.00s, trace 12916. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199925219463916, 'next_transition': 12984}.
<a id="trace-12984"></a>
<a id="trace-12990"></a>
<a id="trace-13002"></a>
<a id="trace-13017"></a>
<a id="trace-13027"></a>
<a id="trace-13045"></a>
<a id="trace-13056"></a>
<a id="trace-13063"></a>
<a id="trace-13070"></a>
<a id="trace-13140"></a>
<a id="trace-13145"></a>
<a id="trace-13154"></a>
<a id="trace-13167"></a>
<a id="trace-13172"></a>
<a id="trace-13179"></a>
- 155.30s–163.30s (×15), actor 5, squad 0 (trace 12984): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 12917. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599982028129897, 'next_transition': 12990}.
<a id="trace-13187"></a>
- 163.50s–163.50s (×1), actor 1, squad 0 (trace 13187): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 160.00s, trace 13077. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13205}.
<a id="trace-13205"></a>
<a id="trace-13276"></a>
<a id="trace-13284"></a>
<a id="trace-13304"></a>
<a id="trace-13311"></a>
<a id="trace-13319"></a>
<a id="trace-13329"></a>
<a id="trace-13342"></a>
<a id="trace-13410"></a>
<a id="trace-13418"></a>
<a id="trace-13428"></a>
<a id="trace-13436"></a>
<a id="trace-13442"></a>
<a id="trace-13451"></a>
<a id="trace-13469"></a>
<a id="trace-13475"></a>
<a id="trace-13543"></a>
<a id="trace-13549"></a>
<a id="trace-13555"></a>
<a id="trace-13561"></a>
<a id="trace-13576"></a>
<a id="trace-13584"></a>
<a id="trace-13600"></a>
<a id="trace-13607"></a>
<a id="trace-13675"></a>
<a id="trace-13681"></a>
<a id="trace-13688"></a>
<a id="trace-13692"></a>
<a id="trace-13703"></a>
<a id="trace-13708"></a>
<a id="trace-13717"></a>
<a id="trace-13729"></a>
<a id="trace-13736"></a>
<a id="trace-13742"></a>
<a id="trace-13808"></a>
<a id="trace-13814"></a>
<a id="trace-13822"></a>
<a id="trace-13827"></a>
<a id="trace-13837"></a>
<a id="trace-13849"></a>
<a id="trace-13861"></a>
<a id="trace-13868"></a>
<a id="trace-13875"></a>
<a id="trace-13945"></a>
<a id="trace-13949"></a>
<a id="trace-13956"></a>
<a id="trace-13960"></a>
<a id="trace-13969"></a>
<a id="trace-13976"></a>
<a id="trace-13984"></a>
<a id="trace-13993"></a>
<a id="trace-14002"></a>
<a id="trace-14008"></a>
<a id="trace-14078"></a>
<a id="trace-14082"></a>
<a id="trace-14090"></a>
<a id="trace-14094"></a>
<a id="trace-14116"></a>
<a id="trace-14125"></a>
<a id="trace-14135"></a>
<a id="trace-14140"></a>
<a id="trace-14213"></a>
<a id="trace-14220"></a>
<a id="trace-14226"></a>
<a id="trace-14235"></a>
<a id="trace-14240"></a>
<a id="trace-14249"></a>
<a id="trace-14261"></a>
<a id="trace-14273"></a>
<a id="trace-14340"></a>
<a id="trace-14345"></a>
<a id="trace-14353"></a>
<a id="trace-14359"></a>
- 164.30s–206.80s (×73), actor 5, squad 0 (trace 13205): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 13078. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13276}.
<a id="trace-1621"></a>
- 207.15s–207.15s (×1), actor 5, squad 0 (events line 1621): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14365"></a>
- 207.15s–207.15s (×1), actor 5, squad 0 (trace 14365): renew committed intent (75 s lifetime). Knowledge: actor memory at 207.15s, trace 14365. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14370}.
<a id="trace-14370"></a>
<a id="trace-14376"></a>
<a id="trace-14385"></a>
<a id="trace-14401"></a>
<a id="trace-14477"></a>
<a id="trace-14481"></a>
<a id="trace-14488"></a>
<a id="trace-14492"></a>
<a id="trace-14501"></a>
<a id="trace-14508"></a>
<a id="trace-14526"></a>
<a id="trace-14534"></a>
<a id="trace-14539"></a>
<a id="trace-14609"></a>
<a id="trace-14627"></a>
<a id="trace-14634"></a>
<a id="trace-14640"></a>
<a id="trace-14647"></a>
<a id="trace-14665"></a>
<a id="trace-14671"></a>
<a id="trace-14740"></a>
<a id="trace-14744"></a>
<a id="trace-14758"></a>
<a id="trace-14771"></a>
<a id="trace-14782"></a>
<a id="trace-14790"></a>
<a id="trace-14798"></a>
<a id="trace-14803"></a>
<a id="trace-14871"></a>
<a id="trace-14877"></a>
<a id="trace-14884"></a>
<a id="trace-14897"></a>
<a id="trace-14903"></a>
<a id="trace-14914"></a>
<a id="trace-14922"></a>
<a id="trace-14935"></a>
<a id="trace-15009"></a>
<a id="trace-15015"></a>
<a id="trace-15020"></a>
<a id="trace-15030"></a>
<a id="trace-15035"></a>
<a id="trace-15053"></a>
<a id="trace-15061"></a>
<a id="trace-15068"></a>
<a id="trace-15136"></a>
<a id="trace-15147"></a>
<a id="trace-15155"></a>
<a id="trace-15163"></a>
<a id="trace-15168"></a>
<a id="trace-15176"></a>
<a id="trace-15185"></a>
<a id="trace-15194"></a>
<a id="trace-15201"></a>
<a id="trace-15269"></a>
<a id="trace-15274"></a>
<a id="trace-15287"></a>
<a id="trace-15294"></a>
<a id="trace-15318"></a>
<a id="trace-15326"></a>
<a id="trace-15331"></a>
<a id="trace-15399"></a>
<a id="trace-15405"></a>
<a id="trace-15413"></a>
<a id="trace-15426"></a>
<a id="trace-15441"></a>
- 207.30s–248.30s (×65), actor 5, squad 0 (trace 14370): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 207.15s, trace 14365. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14376}.
<a id="trace-1717"></a>
- 248.60s–248.60s (×1), actor 5, squad 0 (events line 1717): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15448"></a>
- 248.60s–248.60s (×1), actor 5, squad 0 (trace 15448): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 248.60s, trace 15448. Next observer evidence: {'until': 248.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15452}.
<a id="trace-15449"></a>
- 248.60s–248.60s (×1), actor 5, squad 0 (trace 15449): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 248.60s, trace 15449. Next observer evidence: {'until': 248.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15452}.
<a id="trace-15452"></a>
<a id="trace-15461"></a>
<a id="trace-15470"></a>
<a id="trace-15536"></a>
<a id="trace-15541"></a>
<a id="trace-15547"></a>
<a id="trace-15553"></a>
<a id="trace-15562"></a>
<a id="trace-15568"></a>
<a id="trace-15578"></a>
<a id="trace-15586"></a>
- 248.80s–253.80s (×11), actor 5, squad 0 (trace 15452): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 248.60s, trace 15449. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15461}.
<a id="trace-15590"></a>
- 253.95s–253.95s (×1), actor 1, squad 0 (trace 15590): MoveTactically. Knowledge: actor memory at 250.00s, trace 15475. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15597}.
<a id="trace-15591"></a>
- 253.95s–253.95s (×1), actor 1, squad 0 (trace 15591): traveling overwatch. Knowledge: actor memory at 250.00s, trace 15475. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15597}.
<a id="trace-15592"></a>
- 253.95s–253.95s (×1), actor 1, squad 0 (trace 15592): received platoon directive. Knowledge: actor memory at 250.00s, trace 15475. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15597}.
<a id="trace-15597"></a>
<a id="trace-15606"></a>
<a id="trace-15672"></a>
<a id="trace-15678"></a>
<a id="trace-15697"></a>
<a id="trace-15709"></a>
<a id="trace-15714"></a>
<a id="trace-15727"></a>
<a id="trace-15735"></a>
<a id="trace-15748"></a>
<a id="trace-15820"></a>
<a id="trace-15830"></a>
<a id="trace-15848"></a>
<a id="trace-15859"></a>
<a id="trace-15866"></a>
<a id="trace-15873"></a>
<a id="trace-15879"></a>
<a id="trace-15958"></a>
<a id="trace-15964"></a>
<a id="trace-15980"></a>
<a id="trace-15994"></a>
<a id="trace-16003"></a>
<a id="trace-16012"></a>
<a id="trace-16082"></a>
<a id="trace-16093"></a>
<a id="trace-16104"></a>
<a id="trace-16111"></a>
<a id="trace-16120"></a>
<a id="trace-16127"></a>
<a id="trace-16136"></a>
<a id="trace-16143"></a>
<a id="trace-16209"></a>
<a id="trace-16224"></a>
<a id="trace-16228"></a>
<a id="trace-16238"></a>
<a id="trace-16243"></a>
<a id="trace-16252"></a>
<a id="trace-16260"></a>
<a id="trace-16269"></a>
<a id="trace-16276"></a>
<a id="trace-16343"></a>
<a id="trace-16356"></a>
<a id="trace-16370"></a>
<a id="trace-16379"></a>
<a id="trace-16386"></a>
<a id="trace-16393"></a>
<a id="trace-16400"></a>
<a id="trace-16407"></a>
<a id="trace-16475"></a>
<a id="trace-16480"></a>
<a id="trace-16489"></a>
<a id="trace-16493"></a>
<a id="trace-16503"></a>
<a id="trace-16511"></a>
<a id="trace-16518"></a>
<a id="trace-16526"></a>
<a id="trace-16537"></a>
<a id="trace-16542"></a>
<a id="trace-16609"></a>
<a id="trace-16620"></a>
<a id="trace-16626"></a>
<a id="trace-16636"></a>
<a id="trace-16642"></a>
<a id="trace-16671"></a>
<a id="trace-16742"></a>
<a id="trace-16752"></a>
<a id="trace-16757"></a>
<a id="trace-16766"></a>
<a id="trace-16781"></a>
<a id="trace-16787"></a>
<a id="trace-16796"></a>
<a id="trace-16869"></a>
<a id="trace-16875"></a>
<a id="trace-16883"></a>
<a id="trace-16897"></a>
<a id="trace-16906"></a>
<a id="trace-16914"></a>
<a id="trace-16932"></a>
<a id="trace-17000"></a>
<a id="trace-17006"></a>
<a id="trace-17028"></a>
<a id="trace-17062"></a>
<a id="trace-17129"></a>
<a id="trace-17133"></a>
<a id="trace-17141"></a>
<a id="trace-17147"></a>
<a id="trace-17158"></a>
<a id="trace-17172"></a>
<a id="trace-17188"></a>
<a id="trace-17193"></a>
<a id="trace-17268"></a>
<a id="trace-17274"></a>
<a id="trace-17279"></a>
<a id="trace-17288"></a>
- 254.30s–317.30s (×94), actor 5, squad 0 (trace 15597): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 15476. Next observer evidence: {'until': 254.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15606}.
<a id="trace-1881"></a>
- 317.60s–317.60s (×1), actor 5, squad 0 (events line 1881): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17292"></a>
- 317.60s–317.60s (×1), actor 5, squad 0 (trace 17292): renew committed intent (75 s lifetime). Knowledge: actor memory at 317.60s, trace 17292. Next observer evidence: {'until': 319.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17320}.
<a id="trace-17320"></a>
<a id="trace-17325"></a>
<a id="trace-17399"></a>
<a id="trace-17405"></a>
<a id="trace-17411"></a>
<a id="trace-17424"></a>
<a id="trace-17429"></a>
<a id="trace-17437"></a>
<a id="trace-17443"></a>
<a id="trace-17452"></a>
<a id="trace-17459"></a>
<a id="trace-17526"></a>
<a id="trace-17531"></a>
<a id="trace-17543"></a>
<a id="trace-17556"></a>
<a id="trace-17561"></a>
<a id="trace-17570"></a>
<a id="trace-17586"></a>
<a id="trace-17657"></a>
<a id="trace-17662"></a>
<a id="trace-17671"></a>
<a id="trace-17685"></a>
<a id="trace-17692"></a>
<a id="trace-17707"></a>
<a id="trace-17716"></a>
<a id="trace-17721"></a>
<a id="trace-17789"></a>
<a id="trace-17797"></a>
<a id="trace-17804"></a>
<a id="trace-17808"></a>
<a id="trace-17823"></a>
<a id="trace-17839"></a>
<a id="trace-17853"></a>
<a id="trace-17921"></a>
<a id="trace-17927"></a>
<a id="trace-17933"></a>
<a id="trace-17939"></a>
<a id="trace-17956"></a>
<a id="trace-17969"></a>
<a id="trace-17978"></a>
<a id="trace-18052"></a>
<a id="trace-18064"></a>
<a id="trace-18068"></a>
<a id="trace-18081"></a>
<a id="trace-18086"></a>
<a id="trace-18095"></a>
<a id="trace-18105"></a>
<a id="trace-18112"></a>
<a id="trace-18118"></a>
<a id="trace-18184"></a>
<a id="trace-18190"></a>
<a id="trace-18198"></a>
<a id="trace-18203"></a>
<a id="trace-18215"></a>
<a id="trace-18227"></a>
<a id="trace-18249"></a>
<a id="trace-18328"></a>
<a id="trace-18342"></a>
<a id="trace-18349"></a>
<a id="trace-18357"></a>
<a id="trace-18364"></a>
<a id="trace-18373"></a>
<a id="trace-18379"></a>
- 319.30s–359.80s (×63), actor 5, squad 0 (trace 17320): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 317.60s, trace 17292. Next observer evidence: {'until': 319.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17325}.

## Net delivery

130 matched order/radio deliveries; 246 explicitly recorded losses; 6 unmatched orders (not classified as lost).
Matched delay: mean 0.403s; maximum 5.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 1300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 1301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2354: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2357: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2363: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2364: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2365: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2366: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2367: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3066: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3067: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3069: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3072: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3074: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3075: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3076: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3077: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3078: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3079: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3080: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3081: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3661: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3662: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3664: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3666: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3667: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3669: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3670: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3671: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3672: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3673: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3674: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3675: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3676: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 7015: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 7016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 7017: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 7018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 7019: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 7020: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 7021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 7022: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 7023: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 7024: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 7025: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 7026: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 7027: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 7028: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 7029: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 7202: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 7203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 7204: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7206: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7207: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7209: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 7210: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 7211: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 7212: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 7213: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 7214: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 7215: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 7216: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.35s leader 5, trace 7298: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.35s leader 5, trace 7299: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 7357: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 7358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 7359: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7361: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7362: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7364: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 7365: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 7366: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 7367: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 7368: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 7369: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 7370: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 7371: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7558: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 7559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 7560: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7562: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7563: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7565: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7566: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 7567: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7568: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7569: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7570: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7571: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7572: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 7717: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 7718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 7719: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 7720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 7721: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 7722: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 7723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 7724: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 7725: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 7726: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 7727: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 7728: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 7729: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 7730: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 7731: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 7882: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 7883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 7884: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 7885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 7886: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 7887: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 7888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 7889: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 7890: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 7891: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 7892: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 7893: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 7894: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 7895: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 7896: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 8033: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 8034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 8035: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 8036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 8037: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 8038: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 8039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 8040: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 8041: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 8042: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 8043: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 8044: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 8045: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 8046: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 8047: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 8174: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 8175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 8176: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 8177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 8178: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 8179: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 8180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 8181: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 8182: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 8183: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 8184: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 8185: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 8186: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 8187: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 8188: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 8690: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 8691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 8692: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 8693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 8694: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 8695: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 8696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 8697: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 8698: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 8699: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 8700: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 8701: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 8702: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 8703: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 8704: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 8908: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 8909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 8910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 8911: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 8912: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 8913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 8914: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 8915: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 8916: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 8917: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 8918: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 8919: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 8920: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 8921: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 9521: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 9522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 9523: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 9524: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 9525: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 9526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 9527: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 9528: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 9529: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 9530: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 9531: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 9532: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 9533: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 9534: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 10158: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 10159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 10160: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 10161: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 10162: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 10163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 10164: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 10165: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 10166: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 10167: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 10168: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 10169: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 10170: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 10171: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 10770: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 10771: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 10772: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 10773: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 10774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 10775: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 10776: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 10777: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 10778: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 10779: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 10780: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 10781: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 10782: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 10940: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 10941: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 10942: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 10943: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 10944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 10945: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 10946: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 10947: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 10948: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 10949: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 10950: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 10951: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 11089: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 11090: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 11091: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 11092: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 11093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 11094: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 11095: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 11096: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 11097: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 11098: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 11099: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 11100: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 11247: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 11248: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 11249: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 11250: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 11251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 11252: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 11253: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 11254: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 11255: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 11256: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 11257: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 11258: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.45s leader 5, trace 11322: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 11418: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 11419: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 11420: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 11421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 11422: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 11423: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 11424: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 11425: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 11426: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 11427: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 11428: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 11706: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 11707: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 11708: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 11709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 11710: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 11711: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 11712: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 11713: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 11714: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 11715: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 11716: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 11901: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 11902: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 11903: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 11904: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 11905: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 11906: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 11907: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 11908: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 11909: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 11910: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 11911: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 12063: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 12064: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 12065: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 12066: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 12067: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 12068: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 12069: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 12070: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 12071: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 12072: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 12073: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 12239: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 12240: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 12241: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 12242: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 12243: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 12244: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 12245: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 12246: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 12247: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 12248: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 12249: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 138.10s leader 5, trace 12361: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 138.10s leader 5, trace 12362: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 12397: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 12398: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 12399: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 12400: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 12401: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 12402: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 12403: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 12404: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 12405: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 12406: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 12407: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 12608: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 12609: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 12610: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 12611: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 12612: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 12613: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 12614: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 12615: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 12616: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 12617: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 12761: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 12762: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 12763: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 12764: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 12765: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 12766: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 12767: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 12768: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 12769: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 12770: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 12916: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 12917: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 12918: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 12919: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 12920: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 12921: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 12922: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 12923: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 12924: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 12925: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 13077: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 13078: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 13079: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 13080: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 13081: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 13082: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 13083: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 13084: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 13085: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 13086: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 13215: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 13216: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 13217: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 13218: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 13219: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 13220: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 13221: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 13222: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 13223: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 13224: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 13349: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 13350: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 13351: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 13352: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 13353: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 13354: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 13355: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 13356: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 13357: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 13358: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 13480: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 13481: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 13482: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 13483: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 13484: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 13485: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 13486: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 13487: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 13488: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 13489: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 13612: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 13613: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 13614: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 13615: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 13616: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 13617: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 13618: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 13619: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 13620: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 13621: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 13747: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 13748: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 13749: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 13750: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 13751: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 13752: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 13753: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 13754: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 13755: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 13756: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 13880: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 13881: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 13882: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 13883: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 13884: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 13885: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 13886: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 13887: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 13888: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 13889: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 14013: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 14014: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 14015: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 14016: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 14017: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 14018: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 14019: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 14020: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 14021: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 14022: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 14146: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 14147: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 14148: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 14149: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 14150: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 14151: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 14152: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 14153: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 14154: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 14155: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 14278: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 14279: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 14280: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 14281: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 14282: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 14283: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 14284: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 14285: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 14286: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 14287: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 207.15s leader 5, trace 14365: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 14412: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 14413: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 14414: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 14415: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 14416: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 14417: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 14418: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 14419: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 14420: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 14421: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 14546: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 14547: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 14548: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 14549: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 14550: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 14551: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 14552: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 14553: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 14554: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 14555: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 14677: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 14678: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 14679: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 14680: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 14681: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 14682: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 14683: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 14684: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 14685: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 14686: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 14808: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 14809: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 14810: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 14811: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 14812: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 14813: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 14814: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 14815: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 14816: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 14817: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 14944: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 14945: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 14946: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 14947: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 14948: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 14949: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 14950: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 14951: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 14952: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 14953: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 15075: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 15076: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 15077: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 15078: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 15079: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 15080: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 15081: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 15082: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 15083: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 15084: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 15206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 15207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 15208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 15209: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 15210: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 15211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 15212: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 15213: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 15214: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 15215: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 15337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 15338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 15339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 15340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 15341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 15342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 15343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 15344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 15345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 15346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 248.60s leader 5, trace 15448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 248.60s leader 5, trace 15449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 15475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 15476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 15477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 15478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 15479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 15480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 15481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 15482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 15483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 15484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 15611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 15612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 15613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 15614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 15615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 15616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 15617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 15618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 15619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 15620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 15755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 15756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 15757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 15758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 15759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 15760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 15761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 15762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 15763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 15764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 15885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 15886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 15887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 15888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 15889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 15890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 15891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 15892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 15893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 15894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 16017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 16018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 16019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 16020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 16021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 16022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 16023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 16024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 16025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 16026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 16148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 16149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 16150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 16151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 16152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 16153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 16154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 16155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 16156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 16157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 16281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 16282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 16283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 16284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 16285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 16286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 16287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 16288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 16289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 16290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 16412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 16413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 16414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 16415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 16416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 16417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 16418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 16419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 16420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 16421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 16547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 16548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 16549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 16550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 16551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 16552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 16553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 16554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 16555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 16556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 16676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 16677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 16678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 16679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 16680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 16681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 16682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 16683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 16684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 16685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 16807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 16808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 16809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 16810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 16811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 16812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 16813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 16814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 16815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 16816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 16939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 16940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 16941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 16942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 16943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 16944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 16945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 16946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 16947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 16948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 17068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 17069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 17070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 17071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 17072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 17073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 17074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 17075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 17076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 17077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 17198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 17199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 17200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 17201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 17202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 17203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 17204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 17205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 17206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 17207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 317.60s leader 5, trace 17292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 17331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 17332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 17333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 17334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 17335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 17336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 17337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 17338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 17339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 17340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 17464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 17465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 17466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 17467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 17468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 17469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 17470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 17471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 17472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 17473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 17596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 17597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 17598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 17599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 17600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 17601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 17602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 17603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 17604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 17605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 17728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 17729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 17730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 17731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 17732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 17733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 17734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 17735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 17736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 17737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 17858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 17859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 17860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 17861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 17862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 17863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 17864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 17865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 17866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 17867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 17989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 17990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 17991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 17992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 17993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 17994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 17995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 17996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 17997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 17998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 18123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 18124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 18125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 18126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 18127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 18128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 18129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 18130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 18131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 18132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 18254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 18255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 18256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 18257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 18258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 18259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 18260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 18261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 18262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 18263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 18384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 18385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 18386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 18387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 18388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 18389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 18390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 18391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 18392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 18393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Ash killed in action
- 1: Soren killed in action
- 1: Voss killed in action
- 1: Tern incapacitated
- 1: Reed incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
