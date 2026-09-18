# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/6/107/good-ember/battle-107-1789673746794699583`

## Battle summary

**Ember** · 360 s · 307 shots.

### Turning points

- 18.1s, squad 4: contact (events line 217). First recorded contact.
- 40.2s, squad 0: help call ([trace 7567](#trace-7567)). No completion observed before termination.
- 109.2s, squad 0: withdrawal ([trace 10875](#trace-10875)). No completion observed before termination.
- 120.9s, squad 0: help call ([trace 11334](#trace-11334)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; no completed objective recorded; 23 shots, 7/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 284 shots, 0/8 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 12.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 982](#trace-982)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 18.8s, squad 0 chose took cover and returned fire ([trace 1579](#trace-1579)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 981](#trace-981)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 996}.
- 39.9s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.584584 retreat threshold=0.220000 initiative=requires intent ([trace 7487](#trace-7487)). Following evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7098012289447941, 'next_transition': 7567}.

### Communication

120 matched deliveries (mean 0.41s, max 6.10s); 68 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.10s, squad 4, contact, evidence events line 217: First recorded contact; .
- 40.20s, squad 0, help call, evidence 7567: NeedSupport; No completion observed before termination.
- 109.25s, squad 0, withdrawal, evidence 10875: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 120.90s, squad 0, help call, evidence 11334: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945683009109846, 'next_transition': 663}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945683009109846, 'next_transition': 663}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945683009109846, 'next_transition': 663}.
<a id="trace-452"></a>
<a id="trace-472"></a>
<a id="trace-493"></a>
<a id="trace-515"></a>
<a id="trace-529"></a>
<a id="trace-548"></a>
<a id="trace-570"></a>
<a id="trace-665"></a>
<a id="trace-688"></a>
<a id="trace-712"></a>
<a id="trace-728"></a>
<a id="trace-753"></a>
<a id="trace-780"></a>
<a id="trace-802"></a>
<a id="trace-820"></a>
<a id="trace-830"></a>
<a id="trace-915"></a>
<a id="trace-925"></a>
<a id="trace-939"></a>
<a id="trace-955"></a>
<a id="trace-980"></a>
<a id="trace-998"></a>
<a id="trace-1290"></a>
<a id="trace-1313"></a>
<a id="trace-1344"></a>
<a id="trace-1361"></a>
<a id="trace-1439"></a>
<a id="trace-1469"></a>
<a id="trace-1489"></a>
<a id="trace-1507"></a>
<a id="trace-1517"></a>
<a id="trace-1536"></a>
<a id="trace-1556"></a>
<a id="trace-1578"></a>
<a id="trace-2316"></a>
<a id="trace-2338"></a>
<a id="trace-2449"></a>
<a id="trace-2486"></a>
<a id="trace-2505"></a>
<a id="trace-2925"></a>
<a id="trace-2962"></a>
<a id="trace-3000"></a>
<a id="trace-3042"></a>
<a id="trace-3062"></a>
<a id="trace-3090"></a>
<a id="trace-3112"></a>
<a id="trace-3585"></a>
<a id="trace-3600"></a>
<a id="trace-3626"></a>
<a id="trace-3656"></a>
<a id="trace-3672"></a>
<a id="trace-3689"></a>
<a id="trace-3730"></a>
<a id="trace-3765"></a>
<a id="trace-3780"></a>
<a id="trace-3793"></a>
<a id="trace-3876"></a>
<a id="trace-3887"></a>
<a id="trace-3904"></a>
<a id="trace-3919"></a>
<a id="trace-7140"></a>
<a id="trace-7162"></a>
<a id="trace-7190"></a>
<a id="trace-7220"></a>
<a id="trace-7235"></a>
<a id="trace-7254"></a>
<a id="trace-7335"></a>
<a id="trace-7351"></a>
<a id="trace-7366"></a>
<a id="trace-7385"></a>
<a id="trace-7398"></a>
<a id="trace-7409"></a>
<a id="trace-7427"></a>
<a id="trace-7452"></a>
<a id="trace-7467"></a>
<a id="trace-7486"></a>
<a id="trace-7575"></a>
<a id="trace-7597"></a>
<a id="trace-7612"></a>
<a id="trace-7625"></a>
<a id="trace-7637"></a>
<a id="trace-7652"></a>
<a id="trace-7664"></a>
<a id="trace-7676"></a>
<a id="trace-7690"></a>
<a id="trace-7718"></a>
<a id="trace-7791"></a>
<a id="trace-7804"></a>
<a id="trace-7816"></a>
<a id="trace-7830"></a>
<a id="trace-7846"></a>
<a id="trace-7855"></a>
<a id="trace-7871"></a>
<a id="trace-7884"></a>
<a id="trace-7895"></a>
<a id="trace-7910"></a>
<a id="trace-7986"></a>
<a id="trace-8002"></a>
<a id="trace-8356"></a>
<a id="trace-8377"></a>
<a id="trace-8407"></a>
<a id="trace-8427"></a>
<a id="trace-8440"></a>
<a id="trace-8451"></a>
<a id="trace-8460"></a>
<a id="trace-8468"></a>
<a id="trace-8536"></a>
<a id="trace-8541"></a>
<a id="trace-8553"></a>
<a id="trace-8565"></a>
<a id="trace-8579"></a>
<a id="trace-8594"></a>
<a id="trace-8624"></a>
<a id="trace-9011"></a>
<a id="trace-9029"></a>
<a id="trace-9051"></a>
<a id="trace-9138"></a>
<a id="trace-9151"></a>
<a id="trace-9174"></a>
<a id="trace-9186"></a>
<a id="trace-9196"></a>
<a id="trace-9205"></a>
<a id="trace-9213"></a>
<a id="trace-9218"></a>
<a id="trace-9234"></a>
<a id="trace-9244"></a>
<a id="trace-9319"></a>
<a id="trace-9326"></a>
<a id="trace-9332"></a>
<a id="trace-9338"></a>
<a id="trace-9350"></a>
<a id="trace-9357"></a>
<a id="trace-9368"></a>
<a id="trace-9380"></a>
<a id="trace-9392"></a>
<a id="trace-9405"></a>
<a id="trace-9475"></a>
<a id="trace-9483"></a>
<a id="trace-9499"></a>
<a id="trace-9508"></a>
<a id="trace-9521"></a>
<a id="trace-9525"></a>
<a id="trace-9540"></a>
<a id="trace-9546"></a>
<a id="trace-9553"></a>
<a id="trace-9567"></a>
<a id="trace-9636"></a>
<a id="trace-9642"></a>
<a id="trace-9652"></a>
<a id="trace-9827"></a>
<a id="trace-9836"></a>
<a id="trace-9844"></a>
<a id="trace-9852"></a>
<a id="trace-9859"></a>
<a id="trace-9871"></a>
<a id="trace-9877"></a>
<a id="trace-9948"></a>
<a id="trace-9955"></a>
<a id="trace-9963"></a>
<a id="trace-9970"></a>
<a id="trace-9981"></a>
<a id="trace-9986"></a>
<a id="trace-9997"></a>
<a id="trace-10002"></a>
<a id="trace-10012"></a>
<a id="trace-10017"></a>
<a id="trace-10088"></a>
<a id="trace-10094"></a>
<a id="trace-10102"></a>
<a id="trace-10108"></a>
<a id="trace-10113"></a>
<a id="trace-10119"></a>
<a id="trace-10129"></a>
<a id="trace-10136"></a>
<a id="trace-10144"></a>
<a id="trace-10149"></a>
<a id="trace-10217"></a>
<a id="trace-10222"></a>
<a id="trace-10229"></a>
<a id="trace-10233"></a>
<a id="trace-10240"></a>
<a id="trace-10247"></a>
<a id="trace-10256"></a>
<a id="trace-10262"></a>
<a id="trace-10270"></a>
<a id="trace-10274"></a>
<a id="trace-10336"></a>
<a id="trace-10342"></a>
<a id="trace-10349"></a>
<a id="trace-10355"></a>
<a id="trace-10465"></a>
<a id="trace-10468"></a>
<a id="trace-10487"></a>
<a id="trace-10497"></a>
<a id="trace-10507"></a>
<a id="trace-10514"></a>
<a id="trace-10584"></a>
<a id="trace-10589"></a>
<a id="trace-10598"></a>
<a id="trace-10602"></a>
<a id="trace-10607"></a>
<a id="trace-10615"></a>
<a id="trace-10621"></a>
<a id="trace-10626"></a>
<a id="trace-10635"></a>
<a id="trace-10640"></a>
<a id="trace-10706"></a>
<a id="trace-10711"></a>
<a id="trace-10826"></a>
<a id="trace-10833"></a>
<a id="trace-10837"></a>
<a id="trace-10845"></a>
<a id="trace-10853"></a>
<a id="trace-10864"></a>
<a id="trace-10874"></a>
<a id="trace-10993"></a>
<a id="trace-11064"></a>
<a id="trace-11071"></a>
<a id="trace-11085"></a>
<a id="trace-11090"></a>
<a id="trace-11097"></a>
<a id="trace-11102"></a>
<a id="trace-11108"></a>
<a id="trace-11118"></a>
<a id="trace-11125"></a>
<a id="trace-11128"></a>
<a id="trace-11195"></a>
<a id="trace-11200"></a>
<a id="trace-11210"></a>
<a id="trace-11213"></a>
<a id="trace-11224"></a>
<a id="trace-11227"></a>
<a id="trace-11237"></a>
<a id="trace-11244"></a>
<a id="trace-11252"></a>
<a id="trace-11257"></a>
<a id="trace-11324"></a>
<a id="trace-11330"></a>
<a id="trace-11346"></a>
<a id="trace-11349"></a>
<a id="trace-11358"></a>
<a id="trace-11371"></a>
<a id="trace-11377"></a>
<a id="trace-11383"></a>
<a id="trace-11398"></a>
<a id="trace-11405"></a>
<a id="trace-11471"></a>
<a id="trace-11476"></a>
<a id="trace-11488"></a>
<a id="trace-11490"></a>
<a id="trace-11500"></a>
<a id="trace-11503"></a>
<a id="trace-11513"></a>
<a id="trace-11521"></a>
<a id="trace-11529"></a>
<a id="trace-11536"></a>
<a id="trace-11601"></a>
<a id="trace-11606"></a>
<a id="trace-11612"></a>
<a id="trace-11618"></a>
<a id="trace-11625"></a>
<a id="trace-11627"></a>
<a id="trace-11633"></a>
<a id="trace-11643"></a>
<a id="trace-11651"></a>
<a id="trace-11654"></a>
<a id="trace-11725"></a>
<a id="trace-11729"></a>
<a id="trace-11740"></a>
<a id="trace-11744"></a>
<a id="trace-11753"></a>
<a id="trace-11755"></a>
<a id="trace-11765"></a>
<a id="trace-11771"></a>
<a id="trace-11777"></a>
<a id="trace-11782"></a>
<a id="trace-11850"></a>
<a id="trace-11855"></a>
<a id="trace-11867"></a>
<a id="trace-11871"></a>
<a id="trace-11874"></a>
<a id="trace-11876"></a>
<a id="trace-11881"></a>
<a id="trace-11887"></a>
<a id="trace-11892"></a>
<a id="trace-11896"></a>
<a id="trace-11959"></a>
<a id="trace-11963"></a>
<a id="trace-11968"></a>
<a id="trace-11970"></a>
<a id="trace-11973"></a>
<a id="trace-11975"></a>
<a id="trace-11980"></a>
<a id="trace-11986"></a>
<a id="trace-11990"></a>
<a id="trace-11994"></a>
<a id="trace-12057"></a>
<a id="trace-12061"></a>
<a id="trace-12068"></a>
<a id="trace-12070"></a>
<a id="trace-12075"></a>
<a id="trace-12077"></a>
<a id="trace-12081"></a>
<a id="trace-12087"></a>
<a id="trace-12091"></a>
<a id="trace-12095"></a>
<a id="trace-12157"></a>
<a id="trace-12162"></a>
<a id="trace-12167"></a>
<a id="trace-12169"></a>
<a id="trace-12173"></a>
<a id="trace-12175"></a>
<a id="trace-12180"></a>
<a id="trace-12188"></a>
<a id="trace-12192"></a>
<a id="trace-12196"></a>
<a id="trace-12258"></a>
<a id="trace-12263"></a>
<a id="trace-12269"></a>
<a id="trace-12274"></a>
<a id="trace-12277"></a>
<a id="trace-12279"></a>
<a id="trace-12295"></a>
<a id="trace-12301"></a>
<a id="trace-12305"></a>
<a id="trace-12309"></a>
<a id="trace-12372"></a>
<a id="trace-12376"></a>
<a id="trace-12381"></a>
<a id="trace-12384"></a>
<a id="trace-12387"></a>
<a id="trace-12389"></a>
<a id="trace-12399"></a>
<a id="trace-12405"></a>
<a id="trace-12413"></a>
<a id="trace-12416"></a>
<a id="trace-12486"></a>
<a id="trace-12490"></a>
<a id="trace-12496"></a>
<a id="trace-12500"></a>
<a id="trace-12503"></a>
<a id="trace-12505"></a>
<a id="trace-12508"></a>
<a id="trace-12514"></a>
<a id="trace-12518"></a>
<a id="trace-12524"></a>
<a id="trace-12590"></a>
<a id="trace-12594"></a>
<a id="trace-12603"></a>
<a id="trace-12614"></a>
<a id="trace-12617"></a>
<a id="trace-12620"></a>
<a id="trace-12625"></a>
<a id="trace-12630"></a>
<a id="trace-12634"></a>
<a id="trace-12637"></a>
<a id="trace-12699"></a>
<a id="trace-12703"></a>
<a id="trace-12711"></a>
<a id="trace-12718"></a>
<a id="trace-12721"></a>
<a id="trace-12727"></a>
<a id="trace-12739"></a>
<a id="trace-12744"></a>
<a id="trace-12749"></a>
<a id="trace-12752"></a>
<a id="trace-12815"></a>
<a id="trace-12819"></a>
<a id="trace-12824"></a>
<a id="trace-12827"></a>
<a id="trace-12830"></a>
<a id="trace-12833"></a>
<a id="trace-12843"></a>
<a id="trace-12848"></a>
<a id="trace-12856"></a>
<a id="trace-12867"></a>
<a id="trace-12929"></a>
<a id="trace-12933"></a>
<a id="trace-12939"></a>
<a id="trace-12943"></a>
<a id="trace-12946"></a>
<a id="trace-12948"></a>
<a id="trace-12952"></a>
<a id="trace-12957"></a>
<a id="trace-12962"></a>
<a id="trace-12972"></a>
<a id="trace-13033"></a>
<a id="trace-13041"></a>
<a id="trace-13054"></a>
<a id="trace-13057"></a>
<a id="trace-13060"></a>
<a id="trace-13063"></a>
<a id="trace-13068"></a>
<a id="trace-13073"></a>
<a id="trace-13077"></a>
<a id="trace-13081"></a>
<a id="trace-13142"></a>
<a id="trace-13146"></a>
<a id="trace-13158"></a>
<a id="trace-13161"></a>
<a id="trace-13168"></a>
<a id="trace-13170"></a>
<a id="trace-13182"></a>
<a id="trace-13187"></a>
<a id="trace-13192"></a>
<a id="trace-13197"></a>
<a id="trace-13258"></a>
<a id="trace-13262"></a>
<a id="trace-13267"></a>
<a id="trace-13270"></a>
<a id="trace-13273"></a>
<a id="trace-13278"></a>
<a id="trace-13286"></a>
<a id="trace-13291"></a>
<a id="trace-13299"></a>
<a id="trace-13311"></a>
<a id="trace-13372"></a>
<a id="trace-13377"></a>
<a id="trace-13384"></a>
<a id="trace-13386"></a>
<a id="trace-13389"></a>
<a id="trace-13391"></a>
<a id="trace-13395"></a>
<a id="trace-13400"></a>
<a id="trace-13407"></a>
<a id="trace-13415"></a>
<a id="trace-13476"></a>
<a id="trace-13484"></a>
<a id="trace-13498"></a>
<a id="trace-13500"></a>
<a id="trace-13504"></a>
<a id="trace-13506"></a>
<a id="trace-13511"></a>
<a id="trace-13516"></a>
<a id="trace-13520"></a>
<a id="trace-13524"></a>
<a id="trace-13585"></a>
<a id="trace-13590"></a>
<a id="trace-13602"></a>
<a id="trace-13604"></a>
<a id="trace-13611"></a>
<a id="trace-13621"></a>
<a id="trace-13625"></a>
<a id="trace-13630"></a>
<a id="trace-13635"></a>
<a id="trace-13640"></a>
<a id="trace-13701"></a>
<a id="trace-13705"></a>
<a id="trace-13711"></a>
<a id="trace-13713"></a>
<a id="trace-13717"></a>
<a id="trace-13726"></a>
<a id="trace-13729"></a>
<a id="trace-13738"></a>
<a id="trace-13750"></a>
<a id="trace-13754"></a>
<a id="trace-13815"></a>
<a id="trace-13820"></a>
<a id="trace-13827"></a>
<a id="trace-13829"></a>
<a id="trace-13832"></a>
<a id="trace-13835"></a>
<a id="trace-13838"></a>
<a id="trace-13843"></a>
<a id="trace-13854"></a>
<a id="trace-13858"></a>
<a id="trace-13923"></a>
<a id="trace-13927"></a>
<a id="trace-13941"></a>
<a id="trace-13943"></a>
<a id="trace-13947"></a>
<a id="trace-13951"></a>
<a id="trace-13954"></a>
<a id="trace-13959"></a>
<a id="trace-13963"></a>
<a id="trace-13967"></a>
<a id="trace-14028"></a>
<a id="trace-14035"></a>
<a id="trace-14045"></a>
<a id="trace-14047"></a>
<a id="trace-14054"></a>
<a id="trace-14065"></a>
<a id="trace-14068"></a>
<a id="trace-14074"></a>
<a id="trace-14080"></a>
<a id="trace-14083"></a>
<a id="trace-14144"></a>
<a id="trace-14148"></a>
<a id="trace-14154"></a>
<a id="trace-14156"></a>
<a id="trace-14162"></a>
<a id="trace-14169"></a>
<a id="trace-14172"></a>
<a id="trace-14181"></a>
<a id="trace-14194"></a>
<a id="trace-14197"></a>
<a id="trace-14259"></a>
<a id="trace-14263"></a>
<a id="trace-14270"></a>
<a id="trace-14272"></a>
<a id="trace-14275"></a>
<a id="trace-14278"></a>
<a id="trace-14281"></a>
<a id="trace-14287"></a>
<a id="trace-14298"></a>
<a id="trace-14301"></a>
<a id="trace-14366"></a>
<a id="trace-14378"></a>
<a id="trace-14384"></a>
<a id="trace-14386"></a>
<a id="trace-14390"></a>
<a id="trace-14394"></a>
<a id="trace-14397"></a>
<a id="trace-14402"></a>
<a id="trace-14407"></a>
<a id="trace-14410"></a>
<a id="trace-14472"></a>
<a id="trace-14483"></a>
<a id="trace-14488"></a>
<a id="trace-14494"></a>
<a id="trace-14505"></a>
<a id="trace-14508"></a>
<a id="trace-14511"></a>
<a id="trace-14517"></a>
<a id="trace-14523"></a>
<a id="trace-14526"></a>
<a id="trace-14587"></a>
<a id="trace-14592"></a>
<a id="trace-14597"></a>
<a id="trace-14599"></a>
<a id="trace-14609"></a>
<a id="trace-14612"></a>
<a id="trace-14619"></a>
<a id="trace-14624"></a>
<a id="trace-14637"></a>
<a id="trace-14640"></a>
<a id="trace-14702"></a>
<a id="trace-14708"></a>
<a id="trace-14713"></a>
<a id="trace-14715"></a>
<a id="trace-14718"></a>
<a id="trace-14721"></a>
<a id="trace-14724"></a>
<a id="trace-14732"></a>
<a id="trace-14741"></a>
<a id="trace-14744"></a>
<a id="trace-14809"></a>
<a id="trace-14822"></a>
<a id="trace-14827"></a>
<a id="trace-14830"></a>
<a id="trace-14835"></a>
<a id="trace-14837"></a>
<a id="trace-14840"></a>
<a id="trace-14845"></a>
<a id="trace-14850"></a>
<a id="trace-14853"></a>
<a id="trace-14917"></a>
<a id="trace-14926"></a>
<a id="trace-14931"></a>
<a id="trace-14937"></a>
<a id="trace-14949"></a>
<a id="trace-14951"></a>
<a id="trace-14955"></a>
<a id="trace-14960"></a>
<a id="trace-14966"></a>
<a id="trace-14969"></a>
<a id="trace-15030"></a>
<a id="trace-15035"></a>
<a id="trace-15040"></a>
<a id="trace-15043"></a>
<a id="trace-15053"></a>
<a id="trace-15055"></a>
<a id="trace-15062"></a>
<a id="trace-15075"></a>
<a id="trace-15080"></a>
<a id="trace-15083"></a>
<a id="trace-15145"></a>
<a id="trace-15151"></a>
<a id="trace-15156"></a>
<a id="trace-15158"></a>
<a id="trace-15162"></a>
<a id="trace-15164"></a>
<a id="trace-15168"></a>
<a id="trace-15180"></a>
<a id="trace-15184"></a>
<a id="trace-15191"></a>
<a id="trace-15260"></a>
<a id="trace-15265"></a>
<a id="trace-15270"></a>
<a id="trace-15273"></a>
<a id="trace-15278"></a>
<a id="trace-15280"></a>
<a id="trace-15283"></a>
<a id="trace-15289"></a>
<a id="trace-15293"></a>
<a id="trace-15296"></a>
<a id="trace-15364"></a>
<a id="trace-15369"></a>
<a id="trace-15378"></a>
<a id="trace-15380"></a>
<a id="trace-15392"></a>
<a id="trace-15394"></a>
<a id="trace-15398"></a>
<a id="trace-15405"></a>
<a id="trace-15409"></a>
<a id="trace-15412"></a>
<a id="trace-15473"></a>
<a id="trace-15478"></a>
<a id="trace-15483"></a>
<a id="trace-15488"></a>
<a id="trace-15496"></a>
<a id="trace-15498"></a>
<a id="trace-15505"></a>
<a id="trace-15519"></a>
<a id="trace-15523"></a>
<a id="trace-15527"></a>
<a id="trace-15590"></a>
<a id="trace-15594"></a>
<a id="trace-15599"></a>
<a id="trace-15601"></a>
<a id="trace-15605"></a>
<a id="trace-15607"></a>
<a id="trace-15613"></a>
<a id="trace-15623"></a>
<a id="trace-15627"></a>
<a id="trace-15634"></a>
<a id="trace-15704"></a>
<a id="trace-15708"></a>
<a id="trace-15714"></a>
<a id="trace-15716"></a>
<a id="trace-15721"></a>
<a id="trace-15723"></a>
<a id="trace-15726"></a>
<a id="trace-15732"></a>
<a id="trace-15736"></a>
<a id="trace-15740"></a>
<a id="trace-15808"></a>
<a id="trace-15812"></a>
<a id="trace-15821"></a>
<a id="trace-15831"></a>
<a id="trace-15835"></a>
<a id="trace-15837"></a>
<a id="trace-15841"></a>
<a id="trace-15848"></a>
<a id="trace-15854"></a>
<a id="trace-15916"></a>
<a id="trace-15920"></a>
<a id="trace-15926"></a>
<a id="trace-15935"></a>
<a id="trace-15938"></a>
<a id="trace-15944"></a>
<a id="trace-15955"></a>
<a id="trace-15961"></a>
<a id="trace-15965"></a>
<a id="trace-15969"></a>
<a id="trace-16032"></a>
<a id="trace-16036"></a>
<a id="trace-16041"></a>
<a id="trace-16044"></a>
<a id="trace-16047"></a>
<a id="trace-16049"></a>
<a id="trace-16059"></a>
<a id="trace-16065"></a>
<a id="trace-16073"></a>
<a id="trace-16076"></a>
<a id="trace-16146"></a>
<a id="trace-16155"></a>
<a id="trace-16159"></a>
<a id="trace-16162"></a>
<a id="trace-16164"></a>
<a id="trace-16167"></a>
<a id="trace-16173"></a>
<a id="trace-16177"></a>
<a id="trace-16183"></a>
<a id="trace-16249"></a>
<a id="trace-16253"></a>
<a id="trace-16262"></a>
<a id="trace-16273"></a>
<a id="trace-16276"></a>
<a id="trace-16279"></a>
<a id="trace-16284"></a>
<a id="trace-16289"></a>
<a id="trace-16293"></a>
<a id="trace-16296"></a>
<a id="trace-16358"></a>
<a id="trace-16369"></a>
<a id="trace-16376"></a>
<a id="trace-16379"></a>
<a id="trace-16385"></a>
<a id="trace-16397"></a>
<a id="trace-16402"></a>
<a id="trace-16407"></a>
<a id="trace-16410"></a>
<a id="trace-16473"></a>
<a id="trace-16477"></a>
<a id="trace-16482"></a>
<a id="trace-16485"></a>
<a id="trace-16488"></a>
<a id="trace-16491"></a>
<a id="trace-16501"></a>
<a id="trace-16506"></a>
<a id="trace-16514"></a>
<a id="trace-16525"></a>
<a id="trace-16587"></a>
<a id="trace-16591"></a>
<a id="trace-16597"></a>
<a id="trace-16601"></a>
<a id="trace-16605"></a>
<a id="trace-16609"></a>
<a id="trace-16614"></a>
<a id="trace-16619"></a>
<a id="trace-16629"></a>
- 1.60s–359.80s (×712), actor 37, squad 4 (trace 452): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4606915568144324, 'next_transition': 472}.
<a id="trace-663"></a>
<a id="trace-726"></a>
<a id="trace-751"></a>
<a id="trace-778"></a>
<a id="trace-800"></a>
<a id="trace-828"></a>
<a id="trace-913"></a>
<a id="trace-923"></a>
<a id="trace-937"></a>
<a id="trace-953"></a>
<a id="trace-978"></a>
- 5.70s–12.20s (×11), actor 5, squad 0 (trace 663): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 582. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.633532064758982, 'next_transition': 726}.
<a id="trace-144"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 144): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 996}.
<a id="trace-981"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 981): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 981. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 996}.
<a id="trace-982"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 982): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 982. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 996}.
<a id="trace-996"></a>
- 12.70s–12.70s (×1), actor 5, squad 0 (trace 996): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 982. Next observer evidence: None.
<a id="trace-1000"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1000): traveling overwatch. Knowledge: actor memory at 10.00s, trace 835. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250321488628155, 'next_transition': 1288}.
<a id="trace-1001"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1001): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 835. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250321488628155, 'next_transition': 1288}.
<a id="trace-1288"></a>
<a id="trace-1311"></a>
<a id="trace-1437"></a>
<a id="trace-1487"></a>
<a id="trace-1534"></a>
<a id="trace-1576"></a>
- 13.20s–18.75s (×6), actor 5, squad 0 (trace 1288): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 982. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41342948436435856, 'next_transition': 1311}.
<a id="trace-1579"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 1579): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1367. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150008524287157, 'next_transition': 1951}.
<a id="trace-1580"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 1580): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1367. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150008524287157, 'next_transition': 1951}.
<a id="trace-1581"></a>
<a id="trace-1951"></a>
- 18.75s–19.10s (×2), actor 0, squad 0 (trace 1581): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1367. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150008524287157, 'next_transition': 1951}.
<a id="trace-2314"></a>
<a id="trace-2336"></a>
<a id="trace-2447"></a>
<a id="trace-2484"></a>
- 19.25s–20.75s (×4), actor 5, squad 0 (trace 2314): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1372. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1678322669470527, 'next_transition': 2336}.
<a id="trace-2546"></a>
- 21.65s–21.65s (×1), actor 0, squad 0 (trace 2546): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2362. Next observer evidence: None.
<a id="trace-2923"></a>
<a id="trace-2960"></a>
<a id="trace-2998"></a>
<a id="trace-3040"></a>
<a id="trace-3060"></a>
<a id="trace-3088"></a>
- 21.75s–24.25s (×6), actor 5, squad 0 (trace 2923): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2367. Next observer evidence: {'until': 22.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.31262815430058355, 'next_transition': 2960}.
<a id="trace-3197"></a>
- 25.10s–25.10s (×1), actor 0, squad 0 (trace 3197): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 3127. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0448675751865977, 'next_transition': 3583}.
<a id="trace-3583"></a>
<a id="trace-3598"></a>
<a id="trace-3624"></a>
<a id="trace-3654"></a>
<a id="trace-3670"></a>
<a id="trace-3687"></a>
<a id="trace-3728"></a>
<a id="trace-3763"></a>
- 25.25s–28.75s (×8), actor 5, squad 0 (trace 3583): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3132. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09056431058404021, 'next_transition': 3598}.
<a id="trace-3767"></a>
- 28.80s–28.80s (×1), actor 0, squad 0 (trace 3767): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3127. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6168851848341479, 'next_transition': 3874}.
<a id="trace-3874"></a>
- 30.25s–30.25s (×1), actor 5, squad 0 (trace 3874): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3802. Next observer evidence: {'until': 32, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.415406861492065, 'next_transition': 3935}.
<a id="trace-3935"></a>
- 32.15s–32.15s (×1), actor 0, squad 0 (trace 3935): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 3797. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1299250002164711, 'next_transition': 7160}.
<a id="trace-6782"></a>
- 32.15s–32.15s (×1), actor 0, squad 0 (trace 6782): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 30.00s, trace 3797. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1299250002164711, 'next_transition': 7160}.
<a id="trace-6783"></a>
- 32.15s–32.15s (×1), actor 0, squad 0 (trace 6783): MoveTactically. Knowledge: actor memory at 30.00s, trace 3797. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1299250002164711, 'next_transition': 7160}.
<a id="trace-6784"></a>
- 32.15s–32.15s (×1), actor 0, squad 0 (trace 6784): contact cover complete: assessment resumes closure. Knowledge: actor memory at 30.00s, trace 3797. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1299250002164711, 'next_transition': 7160}.
<a id="trace-7160"></a>
<a id="trace-7218"></a>
<a id="trace-7333"></a>
<a id="trace-7349"></a>
<a id="trace-7364"></a>
<a id="trace-7383"></a>
<a id="trace-7396"></a>
<a id="trace-7407"></a>
<a id="trace-7450"></a>
<a id="trace-7465"></a>
<a id="trace-7484"></a>
- 32.75s–39.75s (×11), actor 5, squad 0 (trace 7160): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3802. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7190179829189608, 'next_transition': 7218}.
<a id="trace-542"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (events line 542): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7487"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 7487): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.584584 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 7487. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7098012289447941, 'next_transition': 7567}.
<a id="trace-7488"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 7488): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.584584 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 7488. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7098012289447941, 'next_transition': 7567}.
<a id="trace-7567"></a>
- 40.20s–40.20s (×1), actor 1, squad 0 (trace 7567): NeedSupport. Knowledge: actor memory at 40.00s, trace 7493. Next observer evidence: {'until': 42.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 5.256612912824347, 'next_transition': 7650}.
<a id="trace-7650"></a>
<a id="trace-7662"></a>
<a id="trace-7716"></a>
<a id="trace-7789"></a>
<a id="trace-7802"></a>
<a id="trace-7814"></a>
<a id="trace-7828"></a>
<a id="trace-7844"></a>
<a id="trace-7882"></a>
<a id="trace-7893"></a>
<a id="trace-7908"></a>
<a id="trace-7984"></a>
<a id="trace-8000"></a>
- 42.75s–50.75s (×13), actor 5, squad 0 (trace 7650): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7497. Next observer evidence: {'until': 43.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0984418854202007, 'next_transition': 7662}.
<a id="trace-8007"></a>
- 50.85s–50.85s (×1), actor 1, squad 0 (trace 8007): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 50.00s, trace 7913. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3480660552584548, 'next_transition': 8354}.
<a id="trace-8354"></a>
<a id="trace-8375"></a>
<a id="trace-8405"></a>
<a id="trace-8425"></a>
<a id="trace-8438"></a>
<a id="trace-8458"></a>
<a id="trace-8466"></a>
<a id="trace-8534"></a>
<a id="trace-8539"></a>
<a id="trace-8551"></a>
<a id="trace-8577"></a>
<a id="trace-8592"></a>
- 51.25s–57.75s (×12), actor 5, squad 0 (trace 8354): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7917. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33013132964030273, 'next_transition': 8375}.
<a id="trace-8610"></a>
- 58.15s–58.15s (×1), actor 2, squad 0 (trace 8610): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 55.00s, trace 8470. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1369211013342184, 'next_transition': 8622}.
<a id="trace-8622"></a>
- 58.25s–58.25s (×1), actor 5, squad 0 (trace 8622): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 8473. Next observer evidence: {'until': 58.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12486052034526307, 'next_transition': 8628}.
<a id="trace-8628"></a>
- 58.40s–58.40s (×1), actor 2, squad 0 (trace 8628): Reorganise: completed/failed drill. Knowledge: actor memory at 55.00s, trace 8470. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0002500000000000095, 'next_transition': 9009}.
<a id="trace-8633"></a>
- 58.40s–58.40s (×1), actor 2, squad 0 (trace 8633): MoveTactically. Knowledge: actor memory at 55.00s, trace 8470. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0002500000000000095, 'next_transition': 9009}.
<a id="trace-8634"></a>
- 58.40s–58.40s (×1), actor 2, squad 0 (trace 8634): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 55.00s, trace 8470. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0002500000000000095, 'next_transition': 9009}.
<a id="trace-9009"></a>
<a id="trace-9049"></a>
<a id="trace-9203"></a>
<a id="trace-9211"></a>
<a id="trace-9216"></a>
<a id="trace-9232"></a>
<a id="trace-9242"></a>
<a id="trace-9317"></a>
<a id="trace-9324"></a>
<a id="trace-9330"></a>
<a id="trace-9336"></a>
<a id="trace-9348"></a>
<a id="trace-9355"></a>
<a id="trace-9366"></a>
<a id="trace-9378"></a>
<a id="trace-9390"></a>
<a id="trace-9403"></a>
<a id="trace-9473"></a>
<a id="trace-9481"></a>
<a id="trace-9497"></a>
<a id="trace-9506"></a>
<a id="trace-9519"></a>
<a id="trace-9538"></a>
<a id="trace-9565"></a>
<a id="trace-9634"></a>
<a id="trace-9649"></a>
- 58.75s–76.25s (×26), actor 5, squad 0 (trace 9009): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 8473. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4125866666666666, 'next_transition': 9049}.
<a id="trace-9654"></a>
- 76.50s–76.50s (×1), actor 2, squad 0 (trace 9654): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 75.00s, trace 9568. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6925122780060697, 'next_transition': 9849}.
<a id="trace-9849"></a>
<a id="trace-9868"></a>
<a id="trace-9945"></a>
<a id="trace-9960"></a>
<a id="trace-9978"></a>
<a id="trace-9994"></a>
<a id="trace-10009"></a>
<a id="trace-10085"></a>
<a id="trace-10126"></a>
<a id="trace-10141"></a>
<a id="trace-10214"></a>
<a id="trace-10237"></a>
<a id="trace-10253"></a>
- 78.25s–93.25s (×13), actor 5, squad 0 (trace 9849): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 9570. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0993450815907224, 'next_transition': 9868}.
<a id="trace-10351"></a>
- 96.70s–96.70s (×1), actor 4, squad 0 (trace 10351): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 95.00s, trace 10276. Next observer evidence: None.
<a id="trace-10356"></a>
- 96.75s–96.75s (×1), actor 4, squad 0 (trace 10356): Reorganise: completed/failed drill. Knowledge: actor memory at 95.00s, trace 10276. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449982185957058, 'next_transition': 10462}.
<a id="trace-10358"></a>
- 96.75s–96.75s (×1), actor 4, squad 0 (trace 10358): MoveTactically. Knowledge: actor memory at 95.00s, trace 10276. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449982185957058, 'next_transition': 10462}.
<a id="trace-10359"></a>
- 96.75s–96.75s (×1), actor 4, squad 0 (trace 10359): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 95.00s, trace 10276. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449982185957058, 'next_transition': 10462}.
<a id="trace-10462"></a>
<a id="trace-10484"></a>
- 97.25s–98.25s (×2), actor 5, squad 0 (trace 10462): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 10277. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.890556673413525, 'next_transition': 10484}.
<a id="trace-10500"></a>
- 99.05s–99.05s (×1), actor 4, squad 0 (trace 10500): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 10276. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10504}.
<a id="trace-10504"></a>
<a id="trace-10581"></a>
<a id="trace-10595"></a>
<a id="trace-10604"></a>
<a id="trace-10618"></a>
<a id="trace-10632"></a>
<a id="trace-10703"></a>
- 99.25s–105.25s (×7), actor 5, squad 0 (trace 10504): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 10277. Next observer evidence: {'until': 100.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.11473006809463658, 'next_transition': 10581}.
<a id="trace-10713"></a>
- 105.90s–105.90s (×1), actor 4, squad 0 (trace 10713): ReactToContact: cover and return fire. Knowledge: actor memory at 105.00s, trace 10644. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299971843191048, 'next_transition': 10823}.
<a id="trace-10714"></a>
- 105.90s–105.90s (×1), actor 4, squad 0 (trace 10714): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 105.00s, trace 10644. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299971843191048, 'next_transition': 10823}.
<a id="trace-10823"></a>
<a id="trace-10850"></a>
<a id="trace-10871"></a>
- 106.25s–109.25s (×3), actor 5, squad 0 (trace 10823): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 10645. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.645760001527039, 'next_transition': 10850}.
<a id="trace-10875"></a>
- 109.25s–109.25s (×1), actor 4, squad 0 (trace 10875): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 105.00s, trace 10644. Next observer evidence: None.
<a id="trace-10876"></a>
- 109.25s–109.25s (×1), actor 4, squad 0 (trace 10876): rearward bound: one stationary suppressing element. Knowledge: actor memory at 105.00s, trace 10644. Next observer evidence: None.
<a id="trace-1034"></a>
- 109.30s–109.30s (×1), actor 5, squad 0 (events line 1034): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.023766139024067, 'next_transition': 11061}.
<a id="trace-10980"></a>
- 109.30s–109.30s (×1), actor 5, squad 0 (trace 10980): renew committed intent (75 s lifetime). Knowledge: actor memory at 109.30s, trace 10980. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.023766139024067, 'next_transition': 11061}.
<a id="trace-11061"></a>
<a id="trace-11082"></a>
<a id="trace-11094"></a>
<a id="trace-11105"></a>
<a id="trace-11122"></a>
<a id="trace-11192"></a>
<a id="trace-11207"></a>
<a id="trace-11221"></a>
<a id="trace-11234"></a>
<a id="trace-11249"></a>
<a id="trace-11321"></a>
- 110.25s–120.25s (×11), actor 5, squad 0 (trace 11061): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 11000. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22959253005973335, 'next_transition': 11082}.
<a id="trace-11334"></a>
- 120.90s–120.90s (×1), actor 4, squad 0 (trace 11334): NeedSupport. Knowledge: actor memory at 120.00s, trace 11260. Next observer evidence: {'until': 121.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.999999999810711e-06, 'next_transition': 11343}.
<a id="trace-11343"></a>
<a id="trace-11355"></a>
<a id="trace-11374"></a>
<a id="trace-11395"></a>
<a id="trace-11468"></a>
<a id="trace-11526"></a>
<a id="trace-11598"></a>
<a id="trace-11622"></a>
<a id="trace-11630"></a>
<a id="trace-11648"></a>
<a id="trace-11722"></a>
<a id="trace-11737"></a>
<a id="trace-11750"></a>
- 121.25s–137.30s (×13), actor 5, squad 0 (trace 11343): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 11261. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20330338740487314, 'next_transition': 11355}.

## Net delivery

120 matched order/radio deliveries; 68 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.414s; maximum 6.100s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2362: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2365: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2371: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2372: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2373: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2374: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2375: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3127: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3128: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3130: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3133: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3135: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3136: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3137: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3138: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3139: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3140: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3141: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3142: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3797: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3798: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3800: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3803: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3805: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3806: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3807: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3808: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3809: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3810: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3811: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3812: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 7258: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 7259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 7260: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 7261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 7262: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 7263: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 7264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 7265: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 7266: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 7267: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 7268: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 7269: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 7270: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 7271: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 7272: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 7487: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 7488: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 7493: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 7494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 7495: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7497: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7498: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7500: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 7501: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 7502: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 7503: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 7504: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 7505: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 7506: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 7507: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 7720: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 7721: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 7722: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7724: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7725: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7727: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 7728: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 7729: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 7730: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 7731: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 7732: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 7733: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 7734: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7913: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 7914: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 7915: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7917: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7918: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7920: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7921: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 7922: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7923: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7924: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7925: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7926: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7927: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 8470: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 8471: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8473: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8474: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8476: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8477: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8478: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8479: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8480: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8481: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8482: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8483: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 9060: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 9061: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 9062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 9063: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 9064: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 9065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 9066: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 9067: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 9068: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 9069: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 9070: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 9071: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 9072: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 9073: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 9249: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 9250: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 9251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 9252: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 9253: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 9254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 9255: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 9256: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 9257: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 9258: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 9259: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 9260: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 9261: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 9262: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 9406: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 9407: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 9408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 9409: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 9410: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 9411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 9412: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 9413: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 9414: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 9415: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 9416: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 9417: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 9418: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 9419: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 9568: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 9569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 9570: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 9571: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 9572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 9573: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 9574: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 9575: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 9576: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 9577: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 9578: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 9579: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 9580: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 9881: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 9882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 9883: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 9884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 9885: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 9886: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 9887: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 9888: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 9889: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 9890: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 9891: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 9892: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 10023: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 10024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 10025: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 10026: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 10027: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 10028: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 10029: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 10030: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 10031: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 10032: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 10033: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 10034: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 10151: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 10152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 10153: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 10154: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 10155: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 10156: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 10157: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 10158: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 10159: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 10160: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 10161: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 10276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 10277: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 10278: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 10279: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 10280: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 10281: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 10282: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 10283: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 10284: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 10285: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 10517: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 10518: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 10519: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 10520: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 10521: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 10522: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 10523: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 10524: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 10525: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 10526: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 10644: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 10645: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 10646: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 10647: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 10648: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 10649: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 10650: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 10651: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 10652: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 10653: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.30s leader 5, trace 10980: estimate 10.74; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 10999: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 11000: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 11001: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 11002: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 11003: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 11004: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 11005: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 11006: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 11007: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 11008: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 11133: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 11134: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 11135: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 11136: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 11137: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 11138: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 11139: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 11140: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 11141: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 11142: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 11260: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 11261: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 11262: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 11263: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 11264: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 11265: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 11266: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 11267: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 11268: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 11269: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 11409: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 11410: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 11411: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 11412: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 11413: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 11414: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 11415: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 11416: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 11417: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 11418: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 11538: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 11539: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 11540: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 11541: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 11542: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 11543: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 11544: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 11545: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 11546: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 11547: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 11658: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 11659: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 11660: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 11661: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 11662: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 11663: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 11664: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 11665: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 11666: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 11667: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 11786: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 11787: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 11788: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 11789: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 11790: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 11791: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 11792: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 11793: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 11794: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 11795: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 11898: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 11899: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 11900: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 11901: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 11902: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 11903: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 11904: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 11905: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 11906: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 11996: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 11997: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 11998: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 11999: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 12000: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 12001: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 12002: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 12003: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 12004: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 12096: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 12097: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 12098: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 12099: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 12100: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 12101: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 12102: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 12103: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 12104: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 12197: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 12198: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 12199: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 12200: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 12201: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 12202: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 12203: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 12204: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 12205: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 12310: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 12311: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 12312: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 12313: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 12314: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 12315: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 12316: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 12317: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 12318: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 12425: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 12426: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 12427: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 12428: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 12429: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 12430: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 12431: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 12432: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 12433: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 12530: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 12531: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 12532: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 12533: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 12534: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 12535: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 12536: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 12537: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 12538: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 12639: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 12640: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 12641: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 12642: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 12643: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 12644: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 12645: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 12646: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 12647: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 12755: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 12756: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 12757: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 12758: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 12759: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 12760: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 12761: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 12762: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 12763: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 12869: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 12870: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 12871: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 12872: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 12873: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 12874: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 12875: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 12876: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 12877: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 12973: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 12974: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 12975: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 12976: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 12977: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 12978: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 12979: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 12980: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 12981: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 13082: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 13083: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 13084: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 13085: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 13086: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 13087: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 13088: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 13089: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 13090: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 13198: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 13199: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 13200: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 13201: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 13202: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 13203: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 13204: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 13205: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 13206: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 13312: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 13313: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 13314: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 13315: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 13316: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 13317: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 13318: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 13319: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 13320: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 13416: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 13417: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 13418: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 13419: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 13420: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 13421: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 13422: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 13423: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 13424: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 13525: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 13526: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 13527: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 13528: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 13529: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 13530: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 13531: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 13532: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 13533: estimate 1.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 13641: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 13642: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 13643: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 13644: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 13645: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 13646: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 13647: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 13648: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 13649: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 13755: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 13756: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 13757: estimate 1.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 13758: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 13759: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 13760: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 13761: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 13762: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 13763: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 13859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 13860: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 13861: estimate 1.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 13862: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 13863: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 13864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 13865: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 13866: estimate 1.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 13867: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 13968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 13969: estimate 1.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 13970: estimate 1.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 13971: estimate 1.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 13972: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 13973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 13974: estimate 1.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 13975: estimate 1.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 13976: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 14084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 14085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 14086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 14087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 14088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 14089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 14090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 14091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 14092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 14198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 14199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 14200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 14201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 14202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 14203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 14204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 14205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 14206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 14302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 14303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 14304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 14305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 14306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 14307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 14308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 14309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 14310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 14411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 14412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 14413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 14414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 14415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 14416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 14417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 14418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 14419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 14527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 14528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 14529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 14530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 14531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 14532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 14533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 14534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 14535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 14641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 14642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 14643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 14644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 14645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 14646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 14647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 14648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 14649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 14749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 14750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 14751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 14752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 14753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 14754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 14755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 14756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 14757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 14854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 14855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 14856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 14857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 14858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 14859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 14860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 14861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 14862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 14970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 14971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 14972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 14973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 14974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 14975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 14976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 14977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 14978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 15085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 15086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 15087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 15088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 15089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 15090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 15091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 15092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 15093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 15192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 15193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 15194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 15195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 15196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 15197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 15198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 15199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 15200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 15298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 15299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 15300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 15301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 15302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 15303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 15304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 15305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 15306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 15413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 15414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 15415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 15416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 15417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 15418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 15419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 15420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 15421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 15528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 15529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 15530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 15531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 15532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 15533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 15534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 15535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 15536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 15635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 15636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 15637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 15638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 15639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 15640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 15641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 15642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 15643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 15743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 15744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 15745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 15746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 15747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 15748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 15749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 15750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 15751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 15855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 15856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 15857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 15858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 15859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 15860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 15861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 15862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 15863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 15970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 15971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 15972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 15973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 15974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 15975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 15976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 15977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 15978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 16085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 16086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 16087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 16088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 16089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 16090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 16091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 16092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 16093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 16189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 16190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 16191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 16192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 16193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 16194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 16195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 16196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 16197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 16298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 16299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 16300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 16301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 16302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 16303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 16304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 16305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 16306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 16413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 16414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 16415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 16416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 16417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 16418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 16419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 16420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 16421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 16527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 16528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 16529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 16530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 16531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 16532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 16533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 16534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 16535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 16630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 16631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 16632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 16633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 16634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 16635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 16636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 16637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 16638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Rook killed in action
- 1: Ash incapacitated
- 1: Moss killed in action
- 1: Reed incapacitated
- 1: Soren killed in action
- 1: Tern incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
