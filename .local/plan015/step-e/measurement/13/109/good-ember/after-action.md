# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/13/109/good-ember/battle-109-1789673930879540520`

## Battle summary

**Ember** · 360 s · 857 shots.

### Turning points

- 24.7s, squad 1: contact (events line 271). First recorded contact.
- 28.6s, squad 1: withdrawal ([trace 3995](#trace-3995)). 71.6s, squad 1: contact broken or rally reached: Occupy and report strength.
- 47.5s, squad 1: help call ([trace 11891](#trace-11891)). No completion observed before termination.
- 55.5s, squad 0: help call ([trace 12578](#trace-12578)). No completion observed before termination.
- 109.7s, squad 0: withdrawal ([trace 19052](#trace-19052)). No completion observed before termination.
- 114.1s, squad 1: help call ([trace 19363](#trace-19363)). No completion observed before termination.
- 118.4s, squad 1: withdrawal ([trace 19671](#trace-19671)). 138.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 181.5s, squad 1: withdrawal ([trace 21789](#trace-21789)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; no completed objective recorded; 63 shots, 8/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 17 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 643 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 134 shots, 1/4 lost.

### Decisions and attribution

At 115.1s, squad 1 chose took cover and returned fire ([trace 19419](#trace-19419)), followed by 3 shots and 1 own casualties; estimate 10.0 against 0 distinct squad-reported contacts; At 108.0s, squad 1 chose FightHere: nearest known group ([trace 18985](#trace-18985)), followed by 2 shots and 1 own casualties; estimate 14.1 against 0 distinct squad-reported contacts; At 28.6s, squad 1 chose broke contact ([trace 3995](#trace-3995)), followed by 4 shots and 0 own casualties; estimate 9.6 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1680](#trace-1680)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45285056687926667, 'next_transition': 1717}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1682](#trace-1682)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.063280029292216, 'next_transition': 1867}.

### Communication

188 matched deliveries (mean 0.53s, max 5.35s); 194 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 24.70s, squad 1, contact, evidence events line 271: First recorded contact; .
- 28.55s, squad 1, withdrawal, evidence 3995: BreakContact: believed ratio at least two without superiority; 71.6s, squad 1: contact broken or rally reached: Occupy and report strength.
- 47.50s, squad 1, help call, evidence 11891: NeedSupport; No completion observed before termination.
- 55.50s, squad 0, help call, evidence 12578: NeedSupport; No completion observed before termination.
- 109.70s, squad 0, withdrawal, evidence 19052: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 114.10s, squad 1, help call, evidence 19363: NeedSupport; No completion observed before termination.
- 118.40s, squad 1, withdrawal, evidence 19671: BreakContact: believed ratio at least two without superiority; 138.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 181.50s, squad 1, withdrawal, evidence 21789: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.78419033738024, 'next_transition': 955}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.78419033738024, 'next_transition': 955}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.78419033738024, 'next_transition': 955}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.311092338952715, 'next_transition': 145}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.311092338952715, 'next_transition': 145}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.311092338952715, 'next_transition': 145}.
<a id="trace-702"></a>
<a id="trace-704"></a>
<a id="trace-728"></a>
<a id="trace-730"></a>
<a id="trace-769"></a>
<a id="trace-771"></a>
<a id="trace-792"></a>
<a id="trace-794"></a>
<a id="trace-818"></a>
<a id="trace-820"></a>
<a id="trace-841"></a>
<a id="trace-843"></a>
<a id="trace-874"></a>
<a id="trace-876"></a>
<a id="trace-959"></a>
<a id="trace-961"></a>
<a id="trace-994"></a>
<a id="trace-996"></a>
<a id="trace-1025"></a>
<a id="trace-1027"></a>
<a id="trace-1070"></a>
<a id="trace-1072"></a>
<a id="trace-1094"></a>
<a id="trace-1096"></a>
<a id="trace-1127"></a>
<a id="trace-1129"></a>
<a id="trace-1158"></a>
<a id="trace-1160"></a>
<a id="trace-1192"></a>
<a id="trace-1194"></a>
<a id="trace-1209"></a>
<a id="trace-1211"></a>
<a id="trace-1228"></a>
<a id="trace-1230"></a>
<a id="trace-1318"></a>
<a id="trace-1320"></a>
<a id="trace-1342"></a>
<a id="trace-1344"></a>
<a id="trace-1675"></a>
<a id="trace-1677"></a>
<a id="trace-1721"></a>
<a id="trace-1723"></a>
<a id="trace-1759"></a>
<a id="trace-1761"></a>
<a id="trace-1795"></a>
<a id="trace-1797"></a>
<a id="trace-1831"></a>
<a id="trace-1833"></a>
<a id="trace-1863"></a>
<a id="trace-1865"></a>
<a id="trace-2092"></a>
<a id="trace-2094"></a>
<a id="trace-2124"></a>
<a id="trace-2126"></a>
<a id="trace-2216"></a>
<a id="trace-2218"></a>
<a id="trace-2244"></a>
<a id="trace-2246"></a>
<a id="trace-2281"></a>
<a id="trace-2283"></a>
<a id="trace-2321"></a>
<a id="trace-2323"></a>
<a id="trace-2623"></a>
<a id="trace-2625"></a>
<a id="trace-2658"></a>
<a id="trace-2660"></a>
<a id="trace-2704"></a>
<a id="trace-2706"></a>
<a id="trace-2733"></a>
<a id="trace-2735"></a>
<a id="trace-2769"></a>
<a id="trace-2771"></a>
<a id="trace-2809"></a>
<a id="trace-2811"></a>
<a id="trace-2906"></a>
<a id="trace-2908"></a>
<a id="trace-2947"></a>
<a id="trace-2949"></a>
<a id="trace-2977"></a>
<a id="trace-2979"></a>
<a id="trace-3011"></a>
<a id="trace-3013"></a>
<a id="trace-3048"></a>
<a id="trace-3050"></a>
<a id="trace-3074"></a>
<a id="trace-3076"></a>
<a id="trace-3103"></a>
<a id="trace-3105"></a>
<a id="trace-3135"></a>
<a id="trace-3137"></a>
<a id="trace-3169"></a>
<a id="trace-3171"></a>
<a id="trace-3200"></a>
<a id="trace-3202"></a>
<a id="trace-3813"></a>
<a id="trace-3815"></a>
<a id="trace-3838"></a>
<a id="trace-3840"></a>
<a id="trace-3871"></a>
<a id="trace-3873"></a>
<a id="trace-3896"></a>
<a id="trace-3898"></a>
<a id="trace-3919"></a>
<a id="trace-3921"></a>
<a id="trace-3949"></a>
<a id="trace-3951"></a>
<a id="trace-3981"></a>
<a id="trace-3983"></a>
<a id="trace-4471"></a>
<a id="trace-4473"></a>
<a id="trace-4497"></a>
<a id="trace-4499"></a>
<a id="trace-4538"></a>
<a id="trace-4540"></a>
<a id="trace-4637"></a>
<a id="trace-4639"></a>
<a id="trace-4666"></a>
<a id="trace-4668"></a>
<a id="trace-4704"></a>
<a id="trace-4706"></a>
<a id="trace-4725"></a>
<a id="trace-4727"></a>
<a id="trace-5350"></a>
<a id="trace-5352"></a>
<a id="trace-5384"></a>
<a id="trace-5386"></a>
<a id="trace-5416"></a>
<a id="trace-5418"></a>
<a id="trace-5440"></a>
<a id="trace-5442"></a>
<a id="trace-6092"></a>
<a id="trace-6094"></a>
<a id="trace-6145"></a>
<a id="trace-6147"></a>
<a id="trace-6873"></a>
<a id="trace-6875"></a>
<a id="trace-6908"></a>
<a id="trace-6910"></a>
<a id="trace-6990"></a>
<a id="trace-6992"></a>
<a id="trace-7048"></a>
<a id="trace-7050"></a>
<a id="trace-7089"></a>
<a id="trace-7091"></a>
<a id="trace-7145"></a>
<a id="trace-7147"></a>
<a id="trace-7188"></a>
<a id="trace-7190"></a>
<a id="trace-7253"></a>
<a id="trace-7255"></a>
<a id="trace-7299"></a>
<a id="trace-7301"></a>
<a id="trace-7328"></a>
<a id="trace-7330"></a>
<a id="trace-8176"></a>
<a id="trace-8178"></a>
<a id="trace-8222"></a>
<a id="trace-8224"></a>
<a id="trace-8287"></a>
<a id="trace-8289"></a>
<a id="trace-8340"></a>
<a id="trace-8342"></a>
<a id="trace-8409"></a>
<a id="trace-8411"></a>
<a id="trace-8491"></a>
<a id="trace-8493"></a>
<a id="trace-8543"></a>
<a id="trace-8545"></a>
<a id="trace-8576"></a>
<a id="trace-8578"></a>
<a id="trace-8605"></a>
<a id="trace-8607"></a>
<a id="trace-8788"></a>
<a id="trace-8790"></a>
<a id="trace-8877"></a>
<a id="trace-8879"></a>
<a id="trace-8901"></a>
<a id="trace-8903"></a>
<a id="trace-8939"></a>
<a id="trace-8941"></a>
<a id="trace-8962"></a>
<a id="trace-8964"></a>
<a id="trace-11880"></a>
<a id="trace-11882"></a>
<a id="trace-11907"></a>
<a id="trace-11909"></a>
<a id="trace-11950"></a>
<a id="trace-11952"></a>
<a id="trace-11990"></a>
<a id="trace-11992"></a>
<a id="trace-12030"></a>
<a id="trace-12032"></a>
<a id="trace-12074"></a>
<a id="trace-12076"></a>
<a id="trace-12191"></a>
<a id="trace-12193"></a>
<a id="trace-12228"></a>
<a id="trace-12230"></a>
<a id="trace-12265"></a>
<a id="trace-12267"></a>
<a id="trace-12287"></a>
<a id="trace-12289"></a>
<a id="trace-12317"></a>
<a id="trace-12319"></a>
<a id="trace-12345"></a>
<a id="trace-12347"></a>
<a id="trace-12380"></a>
<a id="trace-12382"></a>
<a id="trace-12404"></a>
<a id="trace-12406"></a>
<a id="trace-12443"></a>
<a id="trace-12445"></a>
<a id="trace-12469"></a>
<a id="trace-12471"></a>
<a id="trace-12563"></a>
<a id="trace-12565"></a>
<a id="trace-12598"></a>
<a id="trace-12600"></a>
<a id="trace-12632"></a>
<a id="trace-12634"></a>
<a id="trace-12671"></a>
<a id="trace-12673"></a>
<a id="trace-12708"></a>
<a id="trace-12710"></a>
<a id="trace-12736"></a>
<a id="trace-12738"></a>
<a id="trace-12777"></a>
<a id="trace-12779"></a>
<a id="trace-12800"></a>
<a id="trace-12802"></a>
<a id="trace-12830"></a>
<a id="trace-12832"></a>
<a id="trace-12845"></a>
<a id="trace-12847"></a>
<a id="trace-13301"></a>
<a id="trace-13303"></a>
<a id="trace-13334"></a>
<a id="trace-13336"></a>
<a id="trace-13560"></a>
<a id="trace-13562"></a>
<a id="trace-13584"></a>
<a id="trace-13586"></a>
<a id="trace-13623"></a>
<a id="trace-13625"></a>
<a id="trace-13668"></a>
<a id="trace-13670"></a>
<a id="trace-13714"></a>
<a id="trace-13716"></a>
<a id="trace-13750"></a>
<a id="trace-13752"></a>
<a id="trace-13793"></a>
<a id="trace-13795"></a>
<a id="trace-13824"></a>
<a id="trace-13826"></a>
<a id="trace-13921"></a>
<a id="trace-13923"></a>
<a id="trace-14134"></a>
<a id="trace-14136"></a>
<a id="trace-14175"></a>
<a id="trace-14177"></a>
<a id="trace-14221"></a>
<a id="trace-14223"></a>
<a id="trace-14298"></a>
<a id="trace-14300"></a>
<a id="trace-14338"></a>
<a id="trace-14340"></a>
<a id="trace-14380"></a>
<a id="trace-14382"></a>
<a id="trace-14417"></a>
<a id="trace-14419"></a>
<a id="trace-14449"></a>
<a id="trace-14451"></a>
<a id="trace-14533"></a>
<a id="trace-14535"></a>
<a id="trace-14552"></a>
<a id="trace-14554"></a>
<a id="trace-14792"></a>
<a id="trace-14794"></a>
<a id="trace-14829"></a>
<a id="trace-14831"></a>
<a id="trace-14875"></a>
<a id="trace-14877"></a>
<a id="trace-15061"></a>
<a id="trace-15063"></a>
<a id="trace-15110"></a>
<a id="trace-15112"></a>
<a id="trace-15146"></a>
<a id="trace-15148"></a>
<a id="trace-15213"></a>
<a id="trace-15215"></a>
<a id="trace-15265"></a>
<a id="trace-15267"></a>
<a id="trace-15381"></a>
<a id="trace-15383"></a>
<a id="trace-15420"></a>
<a id="trace-15422"></a>
<a id="trace-15471"></a>
<a id="trace-15473"></a>
<a id="trace-15503"></a>
<a id="trace-15505"></a>
<a id="trace-15980"></a>
<a id="trace-15982"></a>
<a id="trace-16000"></a>
<a id="trace-16002"></a>
<a id="trace-16040"></a>
<a id="trace-16042"></a>
<a id="trace-16060"></a>
<a id="trace-16062"></a>
<a id="trace-16157"></a>
<a id="trace-16159"></a>
<a id="trace-16175"></a>
<a id="trace-16177"></a>
<a id="trace-16268"></a>
<a id="trace-16270"></a>
<a id="trace-16293"></a>
<a id="trace-16295"></a>
<a id="trace-16329"></a>
<a id="trace-16331"></a>
<a id="trace-16360"></a>
<a id="trace-16362"></a>
<a id="trace-16387"></a>
<a id="trace-16389"></a>
<a id="trace-16530"></a>
<a id="trace-16532"></a>
<a id="trace-16557"></a>
<a id="trace-16559"></a>
<a id="trace-16596"></a>
<a id="trace-16598"></a>
<a id="trace-16635"></a>
<a id="trace-16637"></a>
<a id="trace-16653"></a>
<a id="trace-16655"></a>
<a id="trace-16745"></a>
<a id="trace-16747"></a>
<a id="trace-16780"></a>
<a id="trace-16782"></a>
<a id="trace-16815"></a>
<a id="trace-16817"></a>
<a id="trace-16836"></a>
<a id="trace-16838"></a>
<a id="trace-16864"></a>
<a id="trace-16866"></a>
<a id="trace-16894"></a>
<a id="trace-16896"></a>
<a id="trace-16924"></a>
<a id="trace-16926"></a>
<a id="trace-16958"></a>
<a id="trace-16960"></a>
<a id="trace-16997"></a>
<a id="trace-16999"></a>
<a id="trace-17023"></a>
<a id="trace-17025"></a>
<a id="trace-17104"></a>
<a id="trace-17106"></a>
<a id="trace-17133"></a>
<a id="trace-17135"></a>
<a id="trace-17154"></a>
<a id="trace-17156"></a>
<a id="trace-17181"></a>
<a id="trace-17183"></a>
<a id="trace-17207"></a>
<a id="trace-17209"></a>
<a id="trace-17224"></a>
<a id="trace-17226"></a>
<a id="trace-17247"></a>
<a id="trace-17249"></a>
<a id="trace-17271"></a>
<a id="trace-17273"></a>
<a id="trace-17300"></a>
<a id="trace-17302"></a>
<a id="trace-17331"></a>
<a id="trace-17333"></a>
<a id="trace-17441"></a>
<a id="trace-17443"></a>
<a id="trace-17478"></a>
<a id="trace-17480"></a>
<a id="trace-17625"></a>
<a id="trace-17627"></a>
<a id="trace-17666"></a>
<a id="trace-17668"></a>
<a id="trace-17733"></a>
<a id="trace-17735"></a>
<a id="trace-17764"></a>
<a id="trace-17766"></a>
<a id="trace-17788"></a>
<a id="trace-17790"></a>
<a id="trace-17831"></a>
<a id="trace-17833"></a>
<a id="trace-17852"></a>
<a id="trace-17854"></a>
<a id="trace-17878"></a>
<a id="trace-17880"></a>
<a id="trace-17967"></a>
<a id="trace-17969"></a>
<a id="trace-18208"></a>
<a id="trace-18210"></a>
<a id="trace-18230"></a>
<a id="trace-18232"></a>
<a id="trace-18250"></a>
<a id="trace-18252"></a>
<a id="trace-18477"></a>
<a id="trace-18479"></a>
<a id="trace-18522"></a>
<a id="trace-18524"></a>
<a id="trace-18571"></a>
<a id="trace-18573"></a>
<a id="trace-18605"></a>
<a id="trace-18607"></a>
<a id="trace-18634"></a>
<a id="trace-18636"></a>
<a id="trace-18666"></a>
<a id="trace-18668"></a>
<a id="trace-18762"></a>
<a id="trace-18764"></a>
<a id="trace-18797"></a>
<a id="trace-18799"></a>
<a id="trace-18917"></a>
<a id="trace-18919"></a>
<a id="trace-18939"></a>
<a id="trace-18941"></a>
<a id="trace-18956"></a>
<a id="trace-18958"></a>
<a id="trace-18977"></a>
<a id="trace-18979"></a>
<a id="trace-19000"></a>
<a id="trace-19002"></a>
<a id="trace-19018"></a>
<a id="trace-19020"></a>
<a id="trace-19036"></a>
<a id="trace-19038"></a>
<a id="trace-19111"></a>
<a id="trace-19113"></a>
<a id="trace-19185"></a>
<a id="trace-19187"></a>
<a id="trace-19208"></a>
<a id="trace-19210"></a>
<a id="trace-19224"></a>
<a id="trace-19226"></a>
<a id="trace-19240"></a>
<a id="trace-19242"></a>
<a id="trace-19261"></a>
<a id="trace-19263"></a>
<a id="trace-19270"></a>
<a id="trace-19272"></a>
<a id="trace-19287"></a>
<a id="trace-19289"></a>
<a id="trace-19296"></a>
<a id="trace-19298"></a>
<a id="trace-19380"></a>
<a id="trace-19382"></a>
<a id="trace-19394"></a>
<a id="trace-19396"></a>
<a id="trace-19575"></a>
<a id="trace-19577"></a>
<a id="trace-19591"></a>
<a id="trace-19593"></a>
<a id="trace-19608"></a>
<a id="trace-19610"></a>
<a id="trace-19627"></a>
<a id="trace-19629"></a>
<a id="trace-19642"></a>
<a id="trace-19644"></a>
<a id="trace-19652"></a>
<a id="trace-19654"></a>
<a id="trace-19666"></a>
<a id="trace-19668"></a>
<a id="trace-19731"></a>
<a id="trace-19733"></a>
<a id="trace-19749"></a>
<a id="trace-19751"></a>
<a id="trace-19758"></a>
<a id="trace-19760"></a>
<a id="trace-19831"></a>
<a id="trace-19833"></a>
<a id="trace-19841"></a>
<a id="trace-19843"></a>
<a id="trace-19867"></a>
<a id="trace-19869"></a>
<a id="trace-19884"></a>
<a id="trace-19886"></a>
<a id="trace-19893"></a>
<a id="trace-19895"></a>
<a id="trace-19910"></a>
<a id="trace-19912"></a>
<a id="trace-19918"></a>
<a id="trace-19920"></a>
<a id="trace-19941"></a>
<a id="trace-19943"></a>
<a id="trace-19948"></a>
<a id="trace-19950"></a>
<a id="trace-20017"></a>
<a id="trace-20019"></a>
<a id="trace-20031"></a>
<a id="trace-20033"></a>
<a id="trace-20047"></a>
<a id="trace-20049"></a>
<a id="trace-20063"></a>
<a id="trace-20065"></a>
<a id="trace-20078"></a>
<a id="trace-20080"></a>
<a id="trace-20084"></a>
<a id="trace-20086"></a>
<a id="trace-20102"></a>
<a id="trace-20104"></a>
<a id="trace-20113"></a>
<a id="trace-20115"></a>
<a id="trace-20127"></a>
<a id="trace-20129"></a>
<a id="trace-20142"></a>
<a id="trace-20144"></a>
<a id="trace-20208"></a>
<a id="trace-20210"></a>
<a id="trace-20214"></a>
<a id="trace-20216"></a>
<a id="trace-20227"></a>
<a id="trace-20229"></a>
<a id="trace-20239"></a>
<a id="trace-20241"></a>
<a id="trace-20250"></a>
<a id="trace-20252"></a>
<a id="trace-20257"></a>
<a id="trace-20259"></a>
<a id="trace-20269"></a>
<a id="trace-20271"></a>
<a id="trace-20278"></a>
<a id="trace-20280"></a>
<a id="trace-20291"></a>
<a id="trace-20293"></a>
<a id="trace-20299"></a>
<a id="trace-20301"></a>
<a id="trace-20367"></a>
<a id="trace-20369"></a>
<a id="trace-20374"></a>
<a id="trace-20376"></a>
<a id="trace-20386"></a>
<a id="trace-20388"></a>
<a id="trace-20397"></a>
<a id="trace-20399"></a>
<a id="trace-20409"></a>
<a id="trace-20411"></a>
<a id="trace-20416"></a>
<a id="trace-20418"></a>
<a id="trace-20432"></a>
<a id="trace-20434"></a>
<a id="trace-20443"></a>
<a id="trace-20445"></a>
<a id="trace-20473"></a>
<a id="trace-20475"></a>
<a id="trace-20483"></a>
<a id="trace-20485"></a>
<a id="trace-20552"></a>
<a id="trace-20554"></a>
<a id="trace-20559"></a>
<a id="trace-20561"></a>
<a id="trace-20571"></a>
<a id="trace-20573"></a>
<a id="trace-20580"></a>
<a id="trace-20582"></a>
<a id="trace-20590"></a>
<a id="trace-20592"></a>
<a id="trace-20596"></a>
<a id="trace-20598"></a>
<a id="trace-20611"></a>
<a id="trace-20613"></a>
<a id="trace-20619"></a>
<a id="trace-20621"></a>
<a id="trace-20632"></a>
<a id="trace-20634"></a>
<a id="trace-20642"></a>
<a id="trace-20644"></a>
<a id="trace-20705"></a>
<a id="trace-20707"></a>
<a id="trace-20710"></a>
<a id="trace-20712"></a>
<a id="trace-20720"></a>
<a id="trace-20722"></a>
<a id="trace-20728"></a>
<a id="trace-20730"></a>
<a id="trace-20738"></a>
<a id="trace-20740"></a>
<a id="trace-20742"></a>
<a id="trace-20744"></a>
<a id="trace-20753"></a>
<a id="trace-20755"></a>
<a id="trace-20760"></a>
<a id="trace-20762"></a>
<a id="trace-20773"></a>
<a id="trace-20775"></a>
<a id="trace-20782"></a>
<a id="trace-20784"></a>
<a id="trace-20847"></a>
<a id="trace-20849"></a>
<a id="trace-20854"></a>
<a id="trace-20856"></a>
<a id="trace-20869"></a>
<a id="trace-20871"></a>
<a id="trace-20879"></a>
<a id="trace-20881"></a>
<a id="trace-20898"></a>
<a id="trace-20900"></a>
<a id="trace-20902"></a>
<a id="trace-20904"></a>
<a id="trace-20911"></a>
<a id="trace-20913"></a>
<a id="trace-20916"></a>
<a id="trace-20918"></a>
<a id="trace-20928"></a>
<a id="trace-20930"></a>
<a id="trace-20934"></a>
<a id="trace-20936"></a>
<a id="trace-20995"></a>
<a id="trace-20997"></a>
<a id="trace-21002"></a>
<a id="trace-21004"></a>
<a id="trace-21015"></a>
<a id="trace-21017"></a>
<a id="trace-21027"></a>
<a id="trace-21029"></a>
<a id="trace-21042"></a>
<a id="trace-21044"></a>
<a id="trace-21046"></a>
<a id="trace-21048"></a>
<a id="trace-21062"></a>
<a id="trace-21064"></a>
<a id="trace-21077"></a>
<a id="trace-21079"></a>
<a id="trace-21089"></a>
<a id="trace-21091"></a>
<a id="trace-21094"></a>
<a id="trace-21096"></a>
<a id="trace-21155"></a>
<a id="trace-21157"></a>
<a id="trace-21160"></a>
<a id="trace-21162"></a>
<a id="trace-21171"></a>
<a id="trace-21173"></a>
<a id="trace-21180"></a>
<a id="trace-21182"></a>
<a id="trace-21190"></a>
<a id="trace-21192"></a>
<a id="trace-21196"></a>
<a id="trace-21198"></a>
<a id="trace-21209"></a>
<a id="trace-21211"></a>
<a id="trace-21220"></a>
<a id="trace-21222"></a>
<a id="trace-21233"></a>
<a id="trace-21235"></a>
<a id="trace-21245"></a>
<a id="trace-21247"></a>
<a id="trace-21316"></a>
<a id="trace-21318"></a>
<a id="trace-21321"></a>
<a id="trace-21323"></a>
<a id="trace-21331"></a>
<a id="trace-21333"></a>
<a id="trace-21339"></a>
<a id="trace-21341"></a>
<a id="trace-21348"></a>
<a id="trace-21350"></a>
<a id="trace-21353"></a>
<a id="trace-21355"></a>
<a id="trace-21362"></a>
<a id="trace-21364"></a>
<a id="trace-21369"></a>
<a id="trace-21371"></a>
<a id="trace-21383"></a>
<a id="trace-21385"></a>
<a id="trace-21389"></a>
<a id="trace-21391"></a>
<a id="trace-21456"></a>
<a id="trace-21458"></a>
<a id="trace-21464"></a>
<a id="trace-21466"></a>
<a id="trace-21482"></a>
<a id="trace-21484"></a>
<a id="trace-21500"></a>
<a id="trace-21502"></a>
<a id="trace-21509"></a>
<a id="trace-21511"></a>
<a id="trace-21513"></a>
<a id="trace-21515"></a>
<a id="trace-21522"></a>
<a id="trace-21524"></a>
<a id="trace-21527"></a>
<a id="trace-21529"></a>
<a id="trace-21540"></a>
<a id="trace-21542"></a>
<a id="trace-21545"></a>
<a id="trace-21547"></a>
<a id="trace-21607"></a>
<a id="trace-21609"></a>
<a id="trace-21612"></a>
<a id="trace-21614"></a>
<a id="trace-21626"></a>
<a id="trace-21628"></a>
<a id="trace-21639"></a>
<a id="trace-21641"></a>
<a id="trace-21649"></a>
<a id="trace-21651"></a>
<a id="trace-21663"></a>
<a id="trace-21665"></a>
<a id="trace-21683"></a>
<a id="trace-21685"></a>
<a id="trace-21688"></a>
<a id="trace-21690"></a>
<a id="trace-21700"></a>
<a id="trace-21702"></a>
<a id="trace-21705"></a>
<a id="trace-21707"></a>
<a id="trace-21769"></a>
<a id="trace-21771"></a>
<a id="trace-21774"></a>
<a id="trace-21776"></a>
<a id="trace-21785"></a>
<a id="trace-21787"></a>
<a id="trace-21847"></a>
<a id="trace-21849"></a>
<a id="trace-21861"></a>
<a id="trace-21863"></a>
<a id="trace-21868"></a>
<a id="trace-21870"></a>
<a id="trace-21887"></a>
<a id="trace-21889"></a>
<a id="trace-21893"></a>
<a id="trace-21895"></a>
<a id="trace-21916"></a>
<a id="trace-21918"></a>
<a id="trace-21922"></a>
<a id="trace-21924"></a>
<a id="trace-21998"></a>
<a id="trace-22000"></a>
<a id="trace-22010"></a>
<a id="trace-22012"></a>
<a id="trace-22018"></a>
<a id="trace-22020"></a>
<a id="trace-22030"></a>
<a id="trace-22032"></a>
<a id="trace-22035"></a>
<a id="trace-22037"></a>
<a id="trace-22046"></a>
<a id="trace-22048"></a>
<a id="trace-22052"></a>
<a id="trace-22054"></a>
<a id="trace-22068"></a>
<a id="trace-22070"></a>
<a id="trace-22074"></a>
<a id="trace-22076"></a>
<a id="trace-22143"></a>
<a id="trace-22145"></a>
<a id="trace-22149"></a>
<a id="trace-22151"></a>
<a id="trace-22171"></a>
<a id="trace-22173"></a>
<a id="trace-22191"></a>
<a id="trace-22193"></a>
<a id="trace-22201"></a>
<a id="trace-22203"></a>
<a id="trace-22210"></a>
<a id="trace-22212"></a>
<a id="trace-22223"></a>
<a id="trace-22225"></a>
<a id="trace-22228"></a>
<a id="trace-22230"></a>
<a id="trace-22243"></a>
<a id="trace-22245"></a>
<a id="trace-22248"></a>
<a id="trace-22250"></a>
<a id="trace-22310"></a>
<a id="trace-22312"></a>
<a id="trace-22317"></a>
<a id="trace-22319"></a>
<a id="trace-22329"></a>
<a id="trace-22331"></a>
<a id="trace-22342"></a>
<a id="trace-22344"></a>
<a id="trace-22352"></a>
<a id="trace-22354"></a>
<a id="trace-22364"></a>
<a id="trace-22366"></a>
<a id="trace-22386"></a>
<a id="trace-22388"></a>
<a id="trace-22392"></a>
<a id="trace-22394"></a>
<a id="trace-22403"></a>
<a id="trace-22405"></a>
<a id="trace-22408"></a>
<a id="trace-22410"></a>
<a id="trace-22469"></a>
<a id="trace-22471"></a>
<a id="trace-22475"></a>
<a id="trace-22477"></a>
<a id="trace-22485"></a>
<a id="trace-22487"></a>
<a id="trace-22494"></a>
<a id="trace-22496"></a>
<a id="trace-22505"></a>
<a id="trace-22507"></a>
<a id="trace-22510"></a>
<a id="trace-22512"></a>
<a id="trace-22525"></a>
<a id="trace-22527"></a>
<a id="trace-22532"></a>
<a id="trace-22534"></a>
<a id="trace-22550"></a>
<a id="trace-22552"></a>
<a id="trace-22565"></a>
<a id="trace-22567"></a>
<a id="trace-22629"></a>
<a id="trace-22631"></a>
<a id="trace-22635"></a>
<a id="trace-22637"></a>
<a id="trace-22645"></a>
<a id="trace-22647"></a>
<a id="trace-22653"></a>
<a id="trace-22655"></a>
<a id="trace-22663"></a>
<a id="trace-22665"></a>
<a id="trace-22667"></a>
<a id="trace-22669"></a>
<a id="trace-22678"></a>
<a id="trace-22680"></a>
<a id="trace-22683"></a>
<a id="trace-22685"></a>
<a id="trace-22697"></a>
<a id="trace-22699"></a>
<a id="trace-22707"></a>
<a id="trace-22709"></a>
<a id="trace-22769"></a>
<a id="trace-22771"></a>
<a id="trace-22782"></a>
<a id="trace-22784"></a>
<a id="trace-22802"></a>
<a id="trace-22804"></a>
<a id="trace-22811"></a>
<a id="trace-22813"></a>
<a id="trace-22823"></a>
<a id="trace-22825"></a>
<a id="trace-22827"></a>
<a id="trace-22829"></a>
<a id="trace-22837"></a>
<a id="trace-22839"></a>
<a id="trace-22842"></a>
<a id="trace-22844"></a>
<a id="trace-22854"></a>
<a id="trace-22856"></a>
<a id="trace-22859"></a>
<a id="trace-22861"></a>
<a id="trace-22921"></a>
<a id="trace-22923"></a>
<a id="trace-22929"></a>
<a id="trace-22931"></a>
<a id="trace-22944"></a>
<a id="trace-22946"></a>
<a id="trace-22953"></a>
<a id="trace-22955"></a>
<a id="trace-22970"></a>
<a id="trace-22972"></a>
<a id="trace-22974"></a>
<a id="trace-22976"></a>
<a id="trace-22995"></a>
<a id="trace-22997"></a>
<a id="trace-23002"></a>
<a id="trace-23004"></a>
<a id="trace-23014"></a>
<a id="trace-23016"></a>
<a id="trace-23019"></a>
<a id="trace-23021"></a>
<a id="trace-23080"></a>
<a id="trace-23082"></a>
<a id="trace-23086"></a>
<a id="trace-23088"></a>
<a id="trace-23096"></a>
<a id="trace-23098"></a>
<a id="trace-23105"></a>
<a id="trace-23107"></a>
<a id="trace-23117"></a>
<a id="trace-23119"></a>
<a id="trace-23121"></a>
<a id="trace-23123"></a>
<a id="trace-23137"></a>
<a id="trace-23139"></a>
<a id="trace-23142"></a>
<a id="trace-23144"></a>
<a id="trace-23161"></a>
<a id="trace-23163"></a>
<a id="trace-23176"></a>
<a id="trace-23178"></a>
<a id="trace-23238"></a>
<a id="trace-23240"></a>
<a id="trace-23245"></a>
<a id="trace-23247"></a>
<a id="trace-23255"></a>
<a id="trace-23257"></a>
<a id="trace-23264"></a>
<a id="trace-23266"></a>
<a id="trace-23274"></a>
<a id="trace-23276"></a>
<a id="trace-23278"></a>
<a id="trace-23280"></a>
<a id="trace-23289"></a>
<a id="trace-23291"></a>
<a id="trace-23296"></a>
<a id="trace-23298"></a>
<a id="trace-23308"></a>
<a id="trace-23310"></a>
<a id="trace-23318"></a>
<a id="trace-23320"></a>
<a id="trace-23380"></a>
<a id="trace-23382"></a>
<a id="trace-23392"></a>
<a id="trace-23394"></a>
<a id="trace-23412"></a>
<a id="trace-23414"></a>
<a id="trace-23421"></a>
<a id="trace-23423"></a>
<a id="trace-23430"></a>
<a id="trace-23432"></a>
<a id="trace-23435"></a>
<a id="trace-23437"></a>
<a id="trace-23448"></a>
<a id="trace-23450"></a>
<a id="trace-23454"></a>
<a id="trace-23456"></a>
<a id="trace-23465"></a>
<a id="trace-23467"></a>
<a id="trace-23471"></a>
<a id="trace-23473"></a>
<a id="trace-23534"></a>
<a id="trace-23536"></a>
<a id="trace-23540"></a>
<a id="trace-23542"></a>
<a id="trace-23555"></a>
<a id="trace-23557"></a>
<a id="trace-23564"></a>
<a id="trace-23566"></a>
<a id="trace-23580"></a>
<a id="trace-23582"></a>
<a id="trace-23594"></a>
<a id="trace-23596"></a>
<a id="trace-23605"></a>
<a id="trace-23607"></a>
<a id="trace-23610"></a>
<a id="trace-23612"></a>
<a id="trace-23621"></a>
<a id="trace-23623"></a>
<a id="trace-23630"></a>
<a id="trace-23632"></a>
<a id="trace-23694"></a>
<a id="trace-23696"></a>
<a id="trace-23699"></a>
<a id="trace-23701"></a>
<a id="trace-23710"></a>
<a id="trace-23712"></a>
<a id="trace-23718"></a>
<a id="trace-23720"></a>
<a id="trace-23730"></a>
<a id="trace-23732"></a>
<a id="trace-23739"></a>
<a id="trace-23741"></a>
<a id="trace-23750"></a>
<a id="trace-23752"></a>
<a id="trace-23762"></a>
<a id="trace-23764"></a>
<a id="trace-23783"></a>
<a id="trace-23785"></a>
<a id="trace-23789"></a>
<a id="trace-23791"></a>
<a id="trace-23850"></a>
<a id="trace-23852"></a>
<a id="trace-23856"></a>
<a id="trace-23858"></a>
<a id="trace-23868"></a>
<a id="trace-23870"></a>
<a id="trace-23877"></a>
<a id="trace-23879"></a>
<a id="trace-23887"></a>
<a id="trace-23889"></a>
<a id="trace-23891"></a>
<a id="trace-23893"></a>
<a id="trace-23902"></a>
<a id="trace-23904"></a>
<a id="trace-23910"></a>
<a id="trace-23912"></a>
<a id="trace-23926"></a>
<a id="trace-23928"></a>
<a id="trace-23932"></a>
<a id="trace-23934"></a>
<a id="trace-24000"></a>
<a id="trace-24002"></a>
<a id="trace-24005"></a>
<a id="trace-24007"></a>
<a id="trace-24025"></a>
<a id="trace-24027"></a>
<a id="trace-24034"></a>
<a id="trace-24036"></a>
<a id="trace-24043"></a>
<a id="trace-24045"></a>
<a id="trace-24048"></a>
<a id="trace-24050"></a>
<a id="trace-24060"></a>
<a id="trace-24062"></a>
<a id="trace-24066"></a>
<a id="trace-24068"></a>
<a id="trace-24078"></a>
<a id="trace-24080"></a>
<a id="trace-24084"></a>
<a id="trace-24086"></a>
<a id="trace-24148"></a>
<a id="trace-24150"></a>
<a id="trace-24153"></a>
<a id="trace-24155"></a>
<a id="trace-24169"></a>
<a id="trace-24171"></a>
<a id="trace-24177"></a>
<a id="trace-24179"></a>
<a id="trace-24193"></a>
<a id="trace-24195"></a>
<a id="trace-24207"></a>
<a id="trace-24209"></a>
<a id="trace-24217"></a>
<a id="trace-24219"></a>
<a id="trace-24222"></a>
<a id="trace-24224"></a>
<a id="trace-24234"></a>
<a id="trace-24236"></a>
<a id="trace-24239"></a>
<a id="trace-24241"></a>
<a id="trace-24302"></a>
<a id="trace-24304"></a>
<a id="trace-24310"></a>
<a id="trace-24312"></a>
<a id="trace-24321"></a>
<a id="trace-24323"></a>
<a id="trace-24331"></a>
<a id="trace-24333"></a>
<a id="trace-24341"></a>
<a id="trace-24343"></a>
<a id="trace-24350"></a>
<a id="trace-24352"></a>
<a id="trace-24361"></a>
<a id="trace-24363"></a>
<a id="trace-24373"></a>
<a id="trace-24375"></a>
<a id="trace-24397"></a>
<a id="trace-24399"></a>
<a id="trace-24458"></a>
<a id="trace-24460"></a>
<a id="trace-24464"></a>
<a id="trace-24466"></a>
<a id="trace-24474"></a>
<a id="trace-24476"></a>
<a id="trace-24483"></a>
<a id="trace-24485"></a>
<a id="trace-24496"></a>
<a id="trace-24498"></a>
<a id="trace-24501"></a>
<a id="trace-24503"></a>
<a id="trace-24513"></a>
<a id="trace-24515"></a>
<a id="trace-24519"></a>
<a id="trace-24521"></a>
<a id="trace-24535"></a>
<a id="trace-24537"></a>
<a id="trace-24541"></a>
<a id="trace-24543"></a>
<a id="trace-24609"></a>
<a id="trace-24611"></a>
<a id="trace-24624"></a>
<a id="trace-24626"></a>
<a id="trace-24634"></a>
<a id="trace-24636"></a>
<a id="trace-24642"></a>
<a id="trace-24644"></a>
<a id="trace-24652"></a>
<a id="trace-24654"></a>
<a id="trace-24656"></a>
<a id="trace-24658"></a>
<a id="trace-24667"></a>
<a id="trace-24669"></a>
<a id="trace-24675"></a>
<a id="trace-24677"></a>
<a id="trace-24688"></a>
<a id="trace-24690"></a>
<a id="trace-24693"></a>
<a id="trace-24695"></a>
<a id="trace-24757"></a>
<a id="trace-24759"></a>
<a id="trace-24767"></a>
<a id="trace-24769"></a>
<a id="trace-24778"></a>
<a id="trace-24780"></a>
<a id="trace-24793"></a>
<a id="trace-24795"></a>
<a id="trace-24812"></a>
<a id="trace-24814"></a>
<a id="trace-24816"></a>
<a id="trace-24818"></a>
<a id="trace-24826"></a>
<a id="trace-24828"></a>
<a id="trace-24831"></a>
<a id="trace-24833"></a>
<a id="trace-24843"></a>
<a id="trace-24845"></a>
<a id="trace-24848"></a>
<a id="trace-24850"></a>
<a id="trace-24910"></a>
<a id="trace-24912"></a>
<a id="trace-24916"></a>
<a id="trace-24918"></a>
<a id="trace-24929"></a>
<a id="trace-24931"></a>
<a id="trace-24941"></a>
<a id="trace-24943"></a>
<a id="trace-24955"></a>
<a id="trace-24957"></a>
<a id="trace-24960"></a>
<a id="trace-24962"></a>
<a id="trace-24977"></a>
<a id="trace-24979"></a>
<a id="trace-24982"></a>
<a id="trace-24984"></a>
<a id="trace-25003"></a>
<a id="trace-25005"></a>
<a id="trace-25008"></a>
<a id="trace-25010"></a>
<a id="trace-25069"></a>
<a id="trace-25071"></a>
<a id="trace-25074"></a>
<a id="trace-25076"></a>
<a id="trace-25084"></a>
<a id="trace-25086"></a>
<a id="trace-25094"></a>
<a id="trace-25096"></a>
<a id="trace-25103"></a>
<a id="trace-25105"></a>
<a id="trace-25108"></a>
<a id="trace-25110"></a>
<a id="trace-25124"></a>
<a id="trace-25126"></a>
<a id="trace-25130"></a>
<a id="trace-25132"></a>
<a id="trace-25147"></a>
<a id="trace-25149"></a>
<a id="trace-25152"></a>
<a id="trace-25154"></a>
<a id="trace-25220"></a>
<a id="trace-25222"></a>
<a id="trace-25235"></a>
<a id="trace-25237"></a>
<a id="trace-25245"></a>
<a id="trace-25247"></a>
<a id="trace-25253"></a>
<a id="trace-25255"></a>
<a id="trace-25262"></a>
<a id="trace-25264"></a>
<a id="trace-25266"></a>
<a id="trace-25268"></a>
<a id="trace-25277"></a>
<a id="trace-25279"></a>
<a id="trace-25283"></a>
<a id="trace-25285"></a>
<a id="trace-25295"></a>
<a id="trace-25297"></a>
<a id="trace-25306"></a>
<a id="trace-25308"></a>
<a id="trace-25368"></a>
<a id="trace-25370"></a>
<a id="trace-25378"></a>
<a id="trace-25380"></a>
<a id="trace-25389"></a>
<a id="trace-25391"></a>
<a id="trace-25404"></a>
<a id="trace-25406"></a>
<a id="trace-25423"></a>
<a id="trace-25425"></a>
<a id="trace-25427"></a>
<a id="trace-25429"></a>
<a id="trace-25437"></a>
<a id="trace-25439"></a>
<a id="trace-25442"></a>
<a id="trace-25444"></a>
<a id="trace-25453"></a>
<a id="trace-25455"></a>
<a id="trace-25460"></a>
<a id="trace-25462"></a>
<a id="trace-25521"></a>
<a id="trace-25523"></a>
<a id="trace-25527"></a>
<a id="trace-25529"></a>
<a id="trace-25543"></a>
<a id="trace-25545"></a>
<a id="trace-25556"></a>
<a id="trace-25558"></a>
<a id="trace-25571"></a>
<a id="trace-25573"></a>
<a id="trace-25576"></a>
<a id="trace-25578"></a>
<a id="trace-25593"></a>
<a id="trace-25595"></a>
<a id="trace-25608"></a>
<a id="trace-25610"></a>
<a id="trace-25619"></a>
<a id="trace-25621"></a>
<a id="trace-25624"></a>
<a id="trace-25626"></a>
<a id="trace-25685"></a>
<a id="trace-25687"></a>
<a id="trace-25689"></a>
<a id="trace-25691"></a>
<a id="trace-25699"></a>
<a id="trace-25701"></a>
<a id="trace-25708"></a>
<a id="trace-25710"></a>
<a id="trace-25719"></a>
<a id="trace-25721"></a>
<a id="trace-25723"></a>
<a id="trace-25725"></a>
<a id="trace-25737"></a>
<a id="trace-25739"></a>
<a id="trace-25749"></a>
<a id="trace-25751"></a>
<a id="trace-25762"></a>
<a id="trace-25764"></a>
<a id="trace-25774"></a>
<a id="trace-25776"></a>
<a id="trace-25845"></a>
<a id="trace-25847"></a>
<a id="trace-25849"></a>
<a id="trace-25851"></a>
<a id="trace-25859"></a>
<a id="trace-25861"></a>
<a id="trace-25867"></a>
<a id="trace-25869"></a>
<a id="trace-25877"></a>
<a id="trace-25879"></a>
<a id="trace-25881"></a>
<a id="trace-25883"></a>
<a id="trace-25892"></a>
<a id="trace-25894"></a>
<a id="trace-25897"></a>
<a id="trace-25899"></a>
<a id="trace-25910"></a>
<a id="trace-25912"></a>
<a id="trace-25918"></a>
<a id="trace-25920"></a>
<a id="trace-25984"></a>
<a id="trace-25986"></a>
<a id="trace-25992"></a>
<a id="trace-25994"></a>
<a id="trace-26010"></a>
<a id="trace-26012"></a>
<a id="trace-26018"></a>
<a id="trace-26020"></a>
<a id="trace-26038"></a>
<a id="trace-26040"></a>
<a id="trace-26042"></a>
<a id="trace-26044"></a>
<a id="trace-26053"></a>
<a id="trace-26055"></a>
<a id="trace-26059"></a>
<a id="trace-26061"></a>
<a id="trace-26070"></a>
<a id="trace-26072"></a>
<a id="trace-26076"></a>
<a id="trace-26078"></a>
<a id="trace-26137"></a>
<a id="trace-26139"></a>
<a id="trace-26142"></a>
<a id="trace-26144"></a>
<a id="trace-26156"></a>
<a id="trace-26158"></a>
<a id="trace-26164"></a>
<a id="trace-26166"></a>
<a id="trace-26182"></a>
<a id="trace-26184"></a>
<a id="trace-26187"></a>
<a id="trace-26189"></a>
<a id="trace-26204"></a>
<a id="trace-26206"></a>
<a id="trace-26220"></a>
<a id="trace-26222"></a>
<a id="trace-26231"></a>
<a id="trace-26233"></a>
<a id="trace-26236"></a>
<a id="trace-26238"></a>
<a id="trace-26297"></a>
<a id="trace-26299"></a>
<a id="trace-26301"></a>
<a id="trace-26303"></a>
<a id="trace-26312"></a>
<a id="trace-26314"></a>
<a id="trace-26320"></a>
<a id="trace-26322"></a>
<a id="trace-26329"></a>
<a id="trace-26331"></a>
<a id="trace-26336"></a>
<a id="trace-26338"></a>
<a id="trace-26347"></a>
<a id="trace-26349"></a>
<a id="trace-26359"></a>
<a id="trace-26361"></a>
<a id="trace-26374"></a>
<a id="trace-26376"></a>
<a id="trace-26386"></a>
<a id="trace-26388"></a>
<a id="trace-26457"></a>
<a id="trace-26459"></a>
<a id="trace-26461"></a>
<a id="trace-26463"></a>
<a id="trace-26471"></a>
<a id="trace-26473"></a>
<a id="trace-26479"></a>
<a id="trace-26481"></a>
<a id="trace-26488"></a>
<a id="trace-26490"></a>
<a id="trace-26493"></a>
<a id="trace-26495"></a>
<a id="trace-26503"></a>
<a id="trace-26505"></a>
<a id="trace-26510"></a>
<a id="trace-26512"></a>
<a id="trace-26524"></a>
<a id="trace-26526"></a>
<a id="trace-26532"></a>
<a id="trace-26534"></a>
<a id="trace-26598"></a>
<a id="trace-26600"></a>
<a id="trace-26604"></a>
<a id="trace-26606"></a>
<a id="trace-26623"></a>
<a id="trace-26625"></a>
<a id="trace-26642"></a>
<a id="trace-26644"></a>
<a id="trace-26651"></a>
<a id="trace-26653"></a>
<a id="trace-26655"></a>
<a id="trace-26657"></a>
<a id="trace-26665"></a>
<a id="trace-26667"></a>
<a id="trace-26670"></a>
<a id="trace-26672"></a>
<a id="trace-26682"></a>
<a id="trace-26684"></a>
<a id="trace-26688"></a>
<a id="trace-26690"></a>
<a id="trace-26750"></a>
<a id="trace-26752"></a>
<a id="trace-26754"></a>
<a id="trace-26756"></a>
<a id="trace-26767"></a>
<a id="trace-26769"></a>
<a id="trace-26781"></a>
<a id="trace-26783"></a>
<a id="trace-26791"></a>
<a id="trace-26793"></a>
<a id="trace-26802"></a>
<a id="trace-26804"></a>
<a id="trace-26825"></a>
<a id="trace-26827"></a>
<a id="trace-26831"></a>
<a id="trace-26833"></a>
<a id="trace-26842"></a>
<a id="trace-26844"></a>
<a id="trace-26848"></a>
<a id="trace-26850"></a>
<a id="trace-26909"></a>
<a id="trace-26911"></a>
<a id="trace-26913"></a>
<a id="trace-26915"></a>
<a id="trace-26924"></a>
<a id="trace-26926"></a>
<a id="trace-26932"></a>
<a id="trace-26934"></a>
<a id="trace-26942"></a>
<a id="trace-26944"></a>
<a id="trace-26949"></a>
<a id="trace-26951"></a>
<a id="trace-26964"></a>
<a id="trace-26966"></a>
<a id="trace-26971"></a>
<a id="trace-26973"></a>
<a id="trace-26989"></a>
<a id="trace-26991"></a>
<a id="trace-26996"></a>
<a id="trace-26998"></a>
<a id="trace-27070"></a>
<a id="trace-27072"></a>
<a id="trace-27076"></a>
<a id="trace-27078"></a>
<a id="trace-27086"></a>
<a id="trace-27088"></a>
<a id="trace-27094"></a>
<a id="trace-27096"></a>
<a id="trace-27103"></a>
<a id="trace-27105"></a>
<a id="trace-27108"></a>
<a id="trace-27110"></a>
<a id="trace-27118"></a>
<a id="trace-27120"></a>
<a id="trace-27124"></a>
<a id="trace-27126"></a>
<a id="trace-27138"></a>
<a id="trace-27140"></a>
<a id="trace-27143"></a>
<a id="trace-27145"></a>
<a id="trace-27211"></a>
<a id="trace-27213"></a>
<a id="trace-27216"></a>
<a id="trace-27218"></a>
<a id="trace-27234"></a>
<a id="trace-27236"></a>
<a id="trace-27254"></a>
<a id="trace-27256"></a>
<a id="trace-27264"></a>
<a id="trace-27266"></a>
<a id="trace-27268"></a>
<a id="trace-27270"></a>
<a id="trace-27277"></a>
<a id="trace-27279"></a>
<a id="trace-27282"></a>
<a id="trace-27284"></a>
<a id="trace-27294"></a>
<a id="trace-27296"></a>
<a id="trace-27299"></a>
<a id="trace-27301"></a>
- 1.60s–359.80s (×1426), actor 37, squad 4 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42199754025604697, 'next_transition': 728}.
<a id="trace-955"></a>
<a id="trace-957"></a>
<a id="trace-990"></a>
<a id="trace-992"></a>
<a id="trace-1021"></a>
<a id="trace-1023"></a>
<a id="trace-1066"></a>
<a id="trace-1068"></a>
<a id="trace-1090"></a>
<a id="trace-1092"></a>
<a id="trace-1123"></a>
<a id="trace-1125"></a>
<a id="trace-1154"></a>
<a id="trace-1156"></a>
<a id="trace-1188"></a>
<a id="trace-1190"></a>
<a id="trace-1314"></a>
<a id="trace-1316"></a>
<a id="trace-1338"></a>
<a id="trace-1340"></a>
- 5.20s–10.70s (×20), actor 5, squad 0 (trace 955): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 887. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0939984392499629, 'next_transition': 990}.
<a id="trace-1349"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1349): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1235. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3787461780892857, 'next_transition': 1671}.
<a id="trace-1671"></a>
<a id="trace-1673"></a>
- 11.20s–11.20s (×2), actor 5, squad 0 (trace 1671): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1240. Next observer evidence: None.
<a id="trace-144"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 144): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45285056687926667, 'next_transition': 1717}.
<a id="trace-145"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 145): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.063280029292216, 'next_transition': 1867}.
<a id="trace-1680"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1680): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1680. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45285056687926667, 'next_transition': 1717}.
<a id="trace-1681"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1681): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1681. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45285056687926667, 'next_transition': 1717}.
<a id="trace-1682"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1682): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1682. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.063280029292216, 'next_transition': 1867}.
<a id="trace-1683"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1683): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1683. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.063280029292216, 'next_transition': 1867}.
<a id="trace-1717"></a>
<a id="trace-1719"></a>
<a id="trace-1755"></a>
<a id="trace-1757"></a>
<a id="trace-1791"></a>
<a id="trace-1793"></a>
<a id="trace-1827"></a>
<a id="trace-1829"></a>
<a id="trace-2088"></a>
<a id="trace-2090"></a>
<a id="trace-2212"></a>
<a id="trace-2214"></a>
<a id="trace-2240"></a>
<a id="trace-2242"></a>
<a id="trace-2277"></a>
<a id="trace-2279"></a>
- 11.70s–16.25s (×16), actor 5, squad 0 (trace 1717): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1683. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4718763479178892, 'next_transition': 1755}.
<a id="trace-1867"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1867): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1243. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 28.436529005284378, 'next_transition': 3277}.
<a id="trace-2324"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2324): received platoon directive. Knowledge: actor memory at 15.00s, trace 2133. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8449831651816915, 'next_transition': 2619}.
<a id="trace-2619"></a>
<a id="trace-2621"></a>
<a id="trace-2729"></a>
<a id="trace-2731"></a>
<a id="trace-2765"></a>
<a id="trace-2767"></a>
<a id="trace-2902"></a>
<a id="trace-2904"></a>
<a id="trace-2943"></a>
<a id="trace-2945"></a>
<a id="trace-2973"></a>
<a id="trace-2975"></a>
<a id="trace-3007"></a>
<a id="trace-3009"></a>
<a id="trace-3044"></a>
<a id="trace-3046"></a>
<a id="trace-3131"></a>
<a id="trace-3133"></a>
<a id="trace-3165"></a>
<a id="trace-3167"></a>
<a id="trace-3196"></a>
<a id="trace-3198"></a>
<a id="trace-3834"></a>
<a id="trace-3836"></a>
<a id="trace-3867"></a>
<a id="trace-3869"></a>
<a id="trace-3915"></a>
<a id="trace-3917"></a>
<a id="trace-3945"></a>
<a id="trace-3947"></a>
- 17.25s–27.75s (×30), actor 5, squad 0 (trace 2619): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2138. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.5106832373139287, 'next_transition': 2729}.
<a id="trace-3277"></a>
- 25.20s–25.20s (×1), actor 8, squad 1 (trace 3277): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3215. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.733788100477964, 'next_transition': 3995}.
<a id="trace-3278"></a>
- 25.20s–25.20s (×1), actor 8, squad 1 (trace 3278): bounding overwatch. Knowledge: actor memory at 25.00s, trace 3215. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.733788100477964, 'next_transition': 3995}.
<a id="trace-3279"></a>
- 25.20s–25.20s (×1), actor 8, squad 1 (trace 3279): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3215. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.733788100477964, 'next_transition': 3995}.
<a id="trace-3958"></a>
- 28.00s–28.00s (×1), actor 0, squad 0 (trace 3958): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 3207. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14250054636218767, 'next_transition': 3977}.
<a id="trace-3977"></a>
<a id="trace-3979"></a>
<a id="trace-4467"></a>
<a id="trace-4469"></a>
<a id="trace-4493"></a>
<a id="trace-4495"></a>
<a id="trace-4534"></a>
<a id="trace-4536"></a>
<a id="trace-4633"></a>
<a id="trace-4635"></a>
<a id="trace-4662"></a>
<a id="trace-4664"></a>
<a id="trace-4700"></a>
<a id="trace-4702"></a>
<a id="trace-4721"></a>
<a id="trace-4723"></a>
- 28.25s–31.75s (×16), actor 5, squad 0 (trace 3977): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3212. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19374104404445902, 'next_transition': 4467}.
<a id="trace-3995"></a>
- 28.55s–28.55s (×1), actor 8, squad 1 (trace 3995): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 3215. Next observer evidence: {'until': 38.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 11.554271313840419, 'next_transition': 687}.
<a id="trace-3996"></a>
- 28.55s–28.55s (×1), actor 8, squad 1 (trace 3996): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 3215. Next observer evidence: {'until': 38.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 11.554271313840419, 'next_transition': 687}.
<a id="trace-4730"></a>
- 31.75s–31.75s (×1), actor 0, squad 0 (trace 4730): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 4546. Next observer evidence: {'until': 32.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.16952028181546097, 'next_transition': 5380}.
<a id="trace-4737"></a>
- 31.75s–31.75s (×1), actor 0, squad 0 (trace 4737): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 4546. Next observer evidence: {'until': 32.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.16952028181546097, 'next_transition': 5380}.
<a id="trace-4738"></a>
- 31.75s–31.75s (×1), actor 0, squad 0 (trace 4738): bounding overwatch. Knowledge: actor memory at 30.00s, trace 4546. Next observer evidence: {'until': 32.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.16952028181546097, 'next_transition': 5380}.
<a id="trace-4739"></a>
- 31.75s–31.75s (×1), actor 0, squad 0 (trace 4739): Reorganise complete: known contact. Knowledge: actor memory at 30.00s, trace 4546. Next observer evidence: {'until': 32.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.16952028181546097, 'next_transition': 5380}.
<a id="trace-5380"></a>
<a id="trace-5382"></a>
<a id="trace-5436"></a>
<a id="trace-5438"></a>
- 32.75s–33.75s (×4), actor 5, squad 0 (trace 5380): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4551. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7548944198014116, 'next_transition': 5436}.
<a id="trace-5445"></a>
- 33.75s–33.75s (×1), actor 0, squad 0 (trace 5445): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 4546. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2012628271640307, 'next_transition': 6088}.
<a id="trace-6088"></a>
<a id="trace-6090"></a>
- 34.25s–34.25s (×2), actor 5, squad 0 (trace 6088): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4551. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.813245907074154, 'next_transition': 6152}.
<a id="trace-6152"></a>
- 34.80s–34.80s (×1), actor 0, squad 0 (trace 6152): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 4546. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8196084318514927, 'next_transition': 6904}.
<a id="trace-6904"></a>
<a id="trace-6906"></a>
<a id="trace-6986"></a>
<a id="trace-6988"></a>
<a id="trace-7085"></a>
<a id="trace-7087"></a>
<a id="trace-7184"></a>
<a id="trace-7186"></a>
- 35.75s–38.25s (×8), actor 5, squad 0 (trace 6904): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 6787. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2422676212719885, 'next_transition': 6986}.
<a id="trace-7200"></a>
- 38.35s–38.35s (×1), actor 0, squad 0 (trace 7200): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 6782. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.564380426889626, 'next_transition': 7249}.
<a id="trace-7249"></a>
<a id="trace-7251"></a>
- 38.75s–38.75s (×2), actor 5, squad 0 (trace 7249): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 6787. Next observer evidence: {'until': 38.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29112792563927825, 'next_transition': 686}.
<a id="trace-686"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 686): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-687"></a>
- 38.85s–38.85s (×1), actor 5, squad 1 (events line 687): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7264"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 7264): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.567977 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 7264. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5763727506152527, 'next_transition': 7295}.
<a id="trace-7265"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 7265): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.567977 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 7265. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5763727506152527, 'next_transition': 7295}.
<a id="trace-7266"></a>
- 38.85s–38.85s (×1), actor 5, squad 1 (trace 7266): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.567977 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 7266. Next observer evidence: {'until': 44.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 3.5109412013362764, 'next_transition': 8619}.
<a id="trace-7267"></a>
- 38.85s–38.85s (×1), actor 5, squad 1 (trace 7267): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.567977 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 7267. Next observer evidence: {'until': 44.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 3.5109412013362764, 'next_transition': 8619}.
<a id="trace-7295"></a>
<a id="trace-7297"></a>
<a id="trace-7324"></a>
<a id="trace-7326"></a>
- 39.25s–39.75s (×4), actor 5, squad 0 (trace 7295): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 7267. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26638506479168794, 'next_transition': 7324}.
<a id="trace-7333"></a>
- 39.75s–39.75s (×1), actor 0, squad 0 (trace 7333): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 6782. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.018357809348135752, 'next_transition': 8218}.
<a id="trace-8218"></a>
<a id="trace-8220"></a>
<a id="trace-8336"></a>
<a id="trace-8338"></a>
<a id="trace-8405"></a>
<a id="trace-8407"></a>
<a id="trace-8487"></a>
<a id="trace-8489"></a>
<a id="trace-8539"></a>
<a id="trace-8541"></a>
- 40.75s–43.25s (×10), actor 5, squad 0 (trace 8218): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 8093. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.375923178404342, 'next_transition': 8336}.
<a id="trace-8548"></a>
- 43.30s–43.30s (×1), actor 0, squad 0 (trace 8548): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 8088. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35999694754327866, 'next_transition': 8572}.
<a id="trace-8572"></a>
<a id="trace-8574"></a>
<a id="trace-8601"></a>
<a id="trace-8603"></a>
<a id="trace-8784"></a>
<a id="trace-8786"></a>
<a id="trace-8935"></a>
<a id="trace-8937"></a>
<a id="trace-8958"></a>
<a id="trace-8960"></a>
- 43.75s–46.75s (×10), actor 5, squad 0 (trace 8572): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 8093. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5400100583163587, 'next_transition': 8601}.
<a id="trace-8619"></a>
- 44.50s–44.50s (×1), actor 8, squad 1 (trace 8619): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 8096. Next observer evidence: {'until': 47.4, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.158628318964391, 'next_transition': 11891}.
<a id="trace-8620"></a>
- 44.50s–44.50s (×1), actor 8, squad 1 (trace 8620): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 8096. Next observer evidence: {'until': 47.4, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.158628318964391, 'next_transition': 11891}.
<a id="trace-8972"></a>
- 46.85s–46.85s (×1), actor 0, squad 0 (trace 8972): received platoon directive; retain contact cover stage. Knowledge: actor memory at 45.00s, trace 8798. Next observer evidence: {'until': 47, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1799998188773686, 'next_transition': 8984}.
<a id="trace-8984"></a>
- 47.10s–47.10s (×1), actor 0, squad 0 (trace 8984): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 8798. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3717340117408677, 'next_transition': 11903}.
<a id="trace-11563"></a>
- 47.10s–47.10s (×1), actor 0, squad 0 (trace 11563): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 8798. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3717340117408677, 'next_transition': 11903}.
<a id="trace-11564"></a>
- 47.10s–47.10s (×1), actor 0, squad 0 (trace 11564): MoveTactically. Knowledge: actor memory at 45.00s, trace 8798. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3717340117408677, 'next_transition': 11903}.
<a id="trace-11565"></a>
- 47.10s–47.10s (×1), actor 0, squad 0 (trace 11565): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 8798. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3717340117408677, 'next_transition': 11903}.
<a id="trace-11891"></a>
- 47.50s–47.50s (×1), actor 8, squad 1 (trace 11891): NeedSupport. Knowledge: actor memory at 45.00s, trace 8805. Next observer evidence: {'until': 60.8, 'shots': 2, 'casualties': 1, 'mean_displacement': 11.183398969024001, 'next_transition': 13340}.
<a id="trace-11903"></a>
<a id="trace-11905"></a>
<a id="trace-11946"></a>
<a id="trace-11948"></a>
<a id="trace-11986"></a>
<a id="trace-11988"></a>
<a id="trace-12187"></a>
<a id="trace-12189"></a>
<a id="trace-12283"></a>
<a id="trace-12285"></a>
<a id="trace-12341"></a>
<a id="trace-12343"></a>
<a id="trace-12376"></a>
<a id="trace-12378"></a>
<a id="trace-12559"></a>
<a id="trace-12561"></a>
- 47.75s–55.25s (×16), actor 5, squad 0 (trace 11903): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 8802. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17271412854520807, 'next_transition': 11946}.
<a id="trace-12578"></a>
- 55.50s–55.50s (×1), actor 0, squad 0 (trace 12578): NeedSupport. Knowledge: actor memory at 55.00s, trace 12480. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29019312883132015, 'next_transition': 12594}.
<a id="trace-12594"></a>
<a id="trace-12596"></a>
<a id="trace-12628"></a>
<a id="trace-12630"></a>
<a id="trace-12704"></a>
<a id="trace-12706"></a>
<a id="trace-12773"></a>
<a id="trace-12775"></a>
<a id="trace-12796"></a>
<a id="trace-12798"></a>
<a id="trace-12826"></a>
<a id="trace-12828"></a>
<a id="trace-12841"></a>
<a id="trace-12843"></a>
- 55.75s–59.75s (×14), actor 5, squad 0 (trace 12594): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 12484. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8932863733583123, 'next_transition': 12628}.
<a id="trace-12852"></a>
- 59.80s–59.80s (×1), actor 0, squad 0 (trace 12852): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 55.00s, trace 12480. Next observer evidence: {'until': 60.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.45000144991149643, 'next_transition': 13330}.
<a id="trace-13330"></a>
<a id="trace-13332"></a>
<a id="trace-13556"></a>
<a id="trace-13558"></a>
<a id="trace-13619"></a>
<a id="trace-13621"></a>
<a id="trace-13746"></a>
<a id="trace-13748"></a>
<a id="trace-13789"></a>
<a id="trace-13791"></a>
<a id="trace-13820"></a>
<a id="trace-13822"></a>
- 60.75s–64.75s (×12), actor 5, squad 0 (trace 13330): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 13228. Next observer evidence: {'until': 61.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.8344277955499636, 'next_transition': 13556}.
<a id="trace-13340"></a>
- 60.90s–60.90s (×1), actor 8, squad 1 (trace 13340): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 13231. Next observer evidence: {'until': 71.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.975068012067926, 'next_transition': 14807}.
<a id="trace-13483"></a>
- 60.90s–60.90s (×1), actor 8, squad 1 (trace 13483): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 13231. Next observer evidence: {'until': 71.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.975068012067926, 'next_transition': 14807}.
<a id="trace-13927"></a>
- 65.30s–65.30s (×1), actor 0, squad 0 (trace 13927): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 65.00s, trace 13840. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7205449365422901, 'next_transition': 14130}.
<a id="trace-14130"></a>
<a id="trace-14132"></a>
<a id="trace-14171"></a>
<a id="trace-14173"></a>
- 65.75s–66.25s (×4), actor 5, squad 0 (trace 14130): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 13844. Next observer evidence: {'until': 66.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.880215558013223, 'next_transition': 14171}.
<a id="trace-1241"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (events line 1241): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14202"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 14202): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.291006 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 14202. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5154588905125657, 'next_transition': 14274}.
<a id="trace-14203"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 14203): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.291006 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 14203. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5154588905125657, 'next_transition': 14274}.
<a id="trace-14274"></a>
<a id="trace-14276"></a>
<a id="trace-14294"></a>
<a id="trace-14296"></a>
<a id="trace-14334"></a>
<a id="trace-14336"></a>
<a id="trace-14413"></a>
<a id="trace-14415"></a>
<a id="trace-14445"></a>
<a id="trace-14447"></a>
<a id="trace-14529"></a>
<a id="trace-14531"></a>
<a id="trace-14548"></a>
<a id="trace-14550"></a>
- 67.25s–70.75s (×14), actor 5, squad 0 (trace 14274): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.45s, trace 14203. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8150555810522759, 'next_transition': 14294}.
<a id="trace-14567"></a>
- 71.05s–71.05s (×1), actor 0, squad 0 (trace 14567): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 70.00s, trace 14455. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2798593908230787, 'next_transition': 14788}.
<a id="trace-14788"></a>
<a id="trace-14790"></a>
<a id="trace-14825"></a>
<a id="trace-14827"></a>
<a id="trace-14871"></a>
<a id="trace-14873"></a>
<a id="trace-15142"></a>
<a id="trace-15144"></a>
<a id="trace-15209"></a>
<a id="trace-15211"></a>
<a id="trace-15261"></a>
<a id="trace-15263"></a>
<a id="trace-15377"></a>
<a id="trace-15379"></a>
<a id="trace-15416"></a>
<a id="trace-15418"></a>
<a id="trace-15467"></a>
<a id="trace-15469"></a>
<a id="trace-15499"></a>
<a id="trace-15501"></a>
- 71.25s–76.75s (×20), actor 5, squad 0 (trace 14788): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 14459. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.546106891864353, 'next_transition': 14825}.
<a id="trace-14807"></a>
- 71.55s–71.55s (×1), actor 8, squad 1 (trace 14807): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 70.00s, trace 14462. Next observer evidence: {'until': 72.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07743466242222548, 'next_transition': 14893}.
<a id="trace-14893"></a>
- 72.55s–72.55s (×1), actor 8, squad 1 (trace 14893): MoveTactically. Knowledge: actor memory at 70.00s, trace 14462. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.649669801696795, 'next_transition': 16092}.
<a id="trace-14894"></a>
- 72.55s–72.55s (×1), actor 8, squad 1 (trace 14894): received platoon directive. Knowledge: actor memory at 70.00s, trace 14462. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.649669801696795, 'next_transition': 16092}.
<a id="trace-15520"></a>
- 76.95s–76.95s (×1), actor 0, squad 0 (trace 15520): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 75.00s, trace 15288. Next observer evidence: {'until': 77.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3322507561506206, 'next_transition': 15531}.
<a id="trace-15531"></a>
- 77.20s–77.20s (×1), actor 0, squad 0 (trace 15531): Reorganise: completed/failed drill. Knowledge: actor memory at 75.00s, trace 15288. Next observer evidence: None.
<a id="trace-15536"></a>
- 77.20s–77.20s (×1), actor 0, squad 0 (trace 15536): MoveTactically. Knowledge: actor memory at 75.00s, trace 15288. Next observer evidence: None.
<a id="trace-15537"></a>
- 77.20s–77.20s (×1), actor 0, squad 0 (trace 15537): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 75.00s, trace 15288. Next observer evidence: None.
<a id="trace-15976"></a>
<a id="trace-15978"></a>
<a id="trace-15996"></a>
<a id="trace-15998"></a>
<a id="trace-16056"></a>
<a id="trace-16058"></a>
<a id="trace-16153"></a>
<a id="trace-16155"></a>
<a id="trace-16171"></a>
<a id="trace-16173"></a>
<a id="trace-16264"></a>
<a id="trace-16266"></a>
<a id="trace-16289"></a>
<a id="trace-16291"></a>
<a id="trace-16325"></a>
<a id="trace-16327"></a>
<a id="trace-16356"></a>
<a id="trace-16358"></a>
<a id="trace-16383"></a>
<a id="trace-16385"></a>
- 77.25s–82.25s (×20), actor 5, squad 0 (trace 15976): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 15292. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31139290142124887, 'next_transition': 15996}.
<a id="trace-16092"></a>
- 79.20s–79.20s (×1), actor 8, squad 1 (trace 16092): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 75.00s, trace 15295. Next observer evidence: {'until': 94, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.972535539860965, 'next_transition': 1954}.
<a id="trace-16392"></a>
- 82.25s–82.25s (×1), actor 0, squad 0 (trace 16392): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 80.00s, trace 16186. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27212408916026315, 'next_transition': 16526}.
<a id="trace-16509"></a>
- 82.25s–82.25s (×1), actor 0, squad 0 (trace 16509): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 80.00s, trace 16186. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27212408916026315, 'next_transition': 16526}.
<a id="trace-16526"></a>
<a id="trace-16528"></a>
<a id="trace-16553"></a>
<a id="trace-16555"></a>
<a id="trace-16592"></a>
<a id="trace-16594"></a>
<a id="trace-16631"></a>
<a id="trace-16633"></a>
<a id="trace-16741"></a>
<a id="trace-16743"></a>
<a id="trace-16811"></a>
<a id="trace-16813"></a>
<a id="trace-16832"></a>
<a id="trace-16834"></a>
<a id="trace-16860"></a>
<a id="trace-16862"></a>
<a id="trace-16890"></a>
<a id="trace-16892"></a>
<a id="trace-16920"></a>
<a id="trace-16922"></a>
<a id="trace-16993"></a>
<a id="trace-16995"></a>
<a id="trace-17019"></a>
<a id="trace-17021"></a>
<a id="trace-17129"></a>
<a id="trace-17131"></a>
<a id="trace-17177"></a>
<a id="trace-17179"></a>
<a id="trace-17203"></a>
<a id="trace-17205"></a>
- 82.75s–92.25s (×30), actor 5, squad 0 (trace 16526): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 16189. Next observer evidence: {'until': 83.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15697543717976306, 'next_transition': 16553}.
<a id="trace-1953"></a>
- 94.15s–94.15s (×1), actor 5, squad 0 (events line 1953): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1954"></a>
- 94.15s–94.15s (×1), actor 5, squad 1 (events line 1954): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17283"></a>
- 94.15s–94.15s (×1), actor 5, squad 0 (trace 17283): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.050119 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 94.15s, trace 17283. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17296}.
<a id="trace-17284"></a>
- 94.15s–94.15s (×1), actor 5, squad 0 (trace 17284): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.050119 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 94.15s, trace 17284. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17296}.
<a id="trace-17285"></a>
- 94.15s–94.15s (×1), actor 5, squad 1 (trace 17285): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.050119 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 94.15s, trace 17285. Next observer evidence: {'until': 94.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17342}.
<a id="trace-17286"></a>
- 94.15s–94.15s (×1), actor 5, squad 1 (trace 17286): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.050119 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 94.15s, trace 17286. Next observer evidence: {'until': 94.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17342}.
<a id="trace-17296"></a>
<a id="trace-17298"></a>
<a id="trace-17327"></a>
<a id="trace-17329"></a>
<a id="trace-17437"></a>
<a id="trace-17439"></a>
<a id="trace-17621"></a>
<a id="trace-17623"></a>
<a id="trace-17662"></a>
<a id="trace-17664"></a>
<a id="trace-17729"></a>
<a id="trace-17731"></a>
<a id="trace-17760"></a>
<a id="trace-17762"></a>
<a id="trace-17784"></a>
<a id="trace-17786"></a>
<a id="trace-17827"></a>
<a id="trace-17829"></a>
<a id="trace-17848"></a>
<a id="trace-17850"></a>
<a id="trace-17874"></a>
<a id="trace-17876"></a>
<a id="trace-17963"></a>
<a id="trace-17965"></a>
- 94.25s–100.25s (×24), actor 5, squad 0 (trace 17296): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 94.15s, trace 17286. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.02593600000000009, 'next_transition': 17327}.
<a id="trace-17342"></a>
- 94.80s–94.80s (×1), actor 8, squad 1 (trace 17342): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 90.00s, trace 17037. Next observer evidence: {'until': 95.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17485}.
<a id="trace-17485"></a>
- 95.80s–95.80s (×1), actor 8, squad 1 (trace 17485): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 17359. Next observer evidence: {'until': 102, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.486893215641965, 'next_transition': 18263}.
<a id="trace-17987"></a>
- 100.55s–100.55s (×1), actor 0, squad 0 (trace 17987): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 100.00s, trace 17890. Next observer evidence: {'until': 100.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0029249999999994003, 'next_transition': 17989}.
<a id="trace-17989"></a>
- 100.60s–100.60s (×1), actor 0, squad 0 (trace 17989): Reorganise: completed/failed drill. Knowledge: actor memory at 100.00s, trace 17890. Next observer evidence: None.
<a id="trace-17992"></a>
- 100.60s–100.60s (×1), actor 0, squad 0 (trace 17992): MoveTactically. Knowledge: actor memory at 100.00s, trace 17890. Next observer evidence: None.
<a id="trace-17993"></a>
- 100.60s–100.60s (×1), actor 0, squad 0 (trace 17993): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 100.00s, trace 17890. Next observer evidence: None.
<a id="trace-18204"></a>
<a id="trace-18206"></a>
<a id="trace-18473"></a>
<a id="trace-18567"></a>
<a id="trace-18628"></a>
<a id="trace-18630"></a>
<a id="trace-18756"></a>
<a id="trace-18758"></a>
- 100.75s–105.25s (×8), actor 5, squad 0 (trace 18204): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 17892. Next observer evidence: {'until': 102.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.5942474999999994, 'next_transition': 18473}.
<a id="trace-18263"></a>
- 102.00s–102.00s (×1), actor 8, squad 1 (trace 18263): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 100.00s, trace 17894. Next observer evidence: {'until': 107.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.468757015481343, 'next_transition': 2322}.
<a id="trace-18807"></a>
- 106.10s–106.10s (×1), actor 0, squad 0 (trace 18807): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 105.00s, trace 18685. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1621666666666665, 'next_transition': 18913}.
<a id="trace-18909"></a>
- 106.10s–106.10s (×1), actor 0, squad 0 (trace 18909): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 105.00s, trace 18685. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1621666666666665, 'next_transition': 18913}.
<a id="trace-18913"></a>
<a id="trace-18952"></a>
<a id="trace-18995"></a>
<a id="trace-19031"></a>
- 106.25s–109.25s (×4), actor 5, squad 0 (trace 18913): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 18687. Next observer evidence: {'until': 107.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08336666666666659, 'next_transition': 18952}.
<a id="trace-2322"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (events line 2322): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 114, 'shots': 2, 'casualties': 1, 'mean_displacement': 4.213240886106042, 'next_transition': 19360}.
<a id="trace-18984"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 18984): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.479835 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 18984. Next observer evidence: {'until': 114, 'shots': 2, 'casualties': 1, 'mean_displacement': 4.213240886106042, 'next_transition': 19360}.
<a id="trace-18985"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 18985): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.479835 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 18985. Next observer evidence: {'until': 114, 'shots': 2, 'casualties': 1, 'mean_displacement': 4.213240886106042, 'next_transition': 19360}.
<a id="trace-19052"></a>
- 109.70s–109.70s (×1), actor 0, squad 0 (trace 19052): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 105.00s, trace 18685. Next observer evidence: {'until': 110.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19179}.
<a id="trace-19053"></a>
- 109.70s–109.70s (×1), actor 0, squad 0 (trace 19053): rearward bound: one stationary suppressing element. Knowledge: actor memory at 105.00s, trace 18685. Next observer evidence: {'until': 110.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19179}.
<a id="trace-19179"></a>
<a id="trace-19181"></a>
<a id="trace-19220"></a>
<a id="trace-19257"></a>
<a id="trace-19283"></a>
- 110.25s–113.25s (×5), actor 5, squad 0 (trace 19179): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 19119. Next observer evidence: {'until': 111.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19220}.
<a id="trace-19302"></a>
- 113.85s–113.85s (×1), actor 0, squad 0 (trace 19302): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 19118. Next observer evidence: None.
<a id="trace-19303"></a>
- 113.85s–113.85s (×1), actor 0, squad 0 (trace 19303): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 19118. Next observer evidence: None.
<a id="trace-19355"></a>
- 113.90s–113.90s (×1), actor 0, squad 0 (trace 19355): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 110.00s, trace 19118. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19374}.
<a id="trace-19360"></a>
- 114.10s–114.10s (×1), actor 9, squad 1 (trace 19360): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 110.00s, trace 19121. Next observer evidence: {'until': 115, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19416}.
<a id="trace-19361"></a>
- 114.10s–114.10s (×1), actor 9, squad 1 (trace 19361): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 110.00s, trace 19121. Next observer evidence: {'until': 115, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19416}.
<a id="trace-19363"></a>
- 114.10s–114.10s (×1), actor 9, squad 1 (trace 19363): NeedSupport. Knowledge: actor memory at 110.00s, trace 19121. Next observer evidence: {'until': 115, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19416}.
<a id="trace-19374"></a>
<a id="trace-19376"></a>
<a id="trace-19571"></a>
<a id="trace-19602"></a>
<a id="trace-19604"></a>
<a id="trace-19636"></a>
<a id="trace-19638"></a>
<a id="trace-19662"></a>
<a id="trace-19745"></a>
<a id="trace-19827"></a>
<a id="trace-19851"></a>
<a id="trace-19853"></a>
<a id="trace-19878"></a>
<a id="trace-19880"></a>
<a id="trace-19905"></a>
<a id="trace-19935"></a>
<a id="trace-19937"></a>
<a id="trace-20041"></a>
<a id="trace-20043"></a>
<a id="trace-20074"></a>
<a id="trace-20098"></a>
<a id="trace-20123"></a>
- 114.25s–129.30s (×22), actor 5, squad 0 (trace 19374): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 19119. Next observer evidence: {'until': 115.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21419999999999995, 'next_transition': 19571}.
<a id="trace-19416"></a>
- 115.10s–115.10s (×1), actor 9, squad 1 (trace 19416): Reorganise: completed/failed drill. Knowledge: actor memory at 115.00s, trace 19402. Next observer evidence: {'until': 118.4, 'shots': 3, 'casualties': 1, 'mean_displacement': 0.706204007989193, 'next_transition': 19671}.
<a id="trace-19419"></a>
- 115.10s–115.10s (×1), actor 9, squad 1 (trace 19419): ReactToContact: cover and return fire. Knowledge: actor memory at 115.00s, trace 19402. Next observer evidence: {'until': 118.4, 'shots': 3, 'casualties': 1, 'mean_displacement': 0.706204007989193, 'next_transition': 19671}.
<a id="trace-19420"></a>
- 115.10s–115.10s (×1), actor 9, squad 1 (trace 19420): Reorganise complete: known contact. Knowledge: actor memory at 115.00s, trace 19402. Next observer evidence: {'until': 118.4, 'shots': 3, 'casualties': 1, 'mean_displacement': 0.706204007989193, 'next_transition': 19671}.
<a id="trace-19671"></a>
- 118.40s–118.40s (×1), actor 9, squad 1 (trace 19671): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 115.00s, trace 19402. Next observer evidence: {'until': 129.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.000018841660744, 'next_transition': 20134}.
<a id="trace-19672"></a>
- 118.40s–118.40s (×1), actor 9, squad 1 (trace 19672): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 19402. Next observer evidence: {'until': 129.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.000018841660744, 'next_transition': 20134}.
<a id="trace-20134"></a>
- 129.50s–129.50s (×1), actor 9, squad 1 (trace 20134): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 125.00s, trace 19958. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20265}.
<a id="trace-20135"></a>
- 129.50s–129.50s (×1), actor 9, squad 1 (trace 20135): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 125.00s, trace 19958. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20265}.
<a id="trace-20265"></a>
<a id="trace-20287"></a>
- 133.30s–134.30s (×2), actor 9, squad 1 (trace 20265): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 130.00s, trace 20152. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20287}.
<a id="trace-2505"></a>
- 134.85s–134.85s (×1), actor 9, squad 1 (events line 2505): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20305"></a>
- 134.85s–134.85s (×1), actor 9, squad 1 (trace 20305): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 134.85s, trace 20305. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20363}.
<a id="trace-20306"></a>
- 134.85s–134.85s (×1), actor 9, squad 1 (trace 20306): renew committed intent (75 s lifetime). Knowledge: actor memory at 134.85s, trace 20306. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20363}.
<a id="trace-20363"></a>
<a id="trace-20382"></a>
<a id="trace-20405"></a>
<a id="trace-20428"></a>
- 135.30s–138.30s (×4), actor 9, squad 1 (trace 20363): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 135.00s, trace 20309. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20382}.
<a id="trace-20448"></a>
- 138.80s–138.80s (×1), actor 9, squad 1 (trace 20448): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 135.00s, trace 20309. Next observer evidence: None.
<a id="trace-20451"></a>
- 138.85s–138.85s (×1), actor 9, squad 1 (trace 20451): MoveTactically. Knowledge: actor memory at 135.00s, trace 20309. Next observer evidence: None.
<a id="trace-20452"></a>
- 138.85s–138.85s (×1), actor 9, squad 1 (trace 20452): traveling overwatch. Knowledge: actor memory at 135.00s, trace 20309. Next observer evidence: None.
<a id="trace-20453"></a>
- 138.85s–138.85s (×1), actor 9, squad 1 (trace 20453): received platoon directive. Knowledge: actor memory at 135.00s, trace 20309. Next observer evidence: None.
<a id="trace-20457"></a>
- 138.90s–138.90s (×1), actor 9, squad 1 (trace 20457): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 135.00s, trace 20309. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20469}.
<a id="trace-20469"></a>
<a id="trace-20548"></a>
<a id="trace-20567"></a>
<a id="trace-20586"></a>
<a id="trace-20607"></a>
<a id="trace-20628"></a>
<a id="trace-20701"></a>
<a id="trace-20716"></a>
<a id="trace-20734"></a>
<a id="trace-20749"></a>
<a id="trace-20769"></a>
<a id="trace-20843"></a>
<a id="trace-20865"></a>
<a id="trace-20894"></a>
<a id="trace-20907"></a>
<a id="trace-20924"></a>
<a id="trace-20991"></a>
<a id="trace-21011"></a>
<a id="trace-21038"></a>
<a id="trace-21058"></a>
<a id="trace-21085"></a>
<a id="trace-21151"></a>
<a id="trace-21167"></a>
<a id="trace-21186"></a>
<a id="trace-21205"></a>
<a id="trace-21229"></a>
<a id="trace-21312"></a>
<a id="trace-21327"></a>
<a id="trace-21344"></a>
<a id="trace-21358"></a>
<a id="trace-21379"></a>
<a id="trace-21452"></a>
<a id="trace-21478"></a>
<a id="trace-21505"></a>
<a id="trace-21518"></a>
<a id="trace-21536"></a>
<a id="trace-21603"></a>
<a id="trace-21622"></a>
<a id="trace-21645"></a>
<a id="trace-21679"></a>
<a id="trace-21696"></a>
- 139.30s–179.30s (×41), actor 9, squad 1 (trace 20469): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 135.00s, trace 20309. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20548}.
<a id="trace-2658"></a>
- 179.85s–179.85s (×1), actor 9, squad 1 (events line 2658): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21708"></a>
- 179.85s–179.85s (×1), actor 9, squad 1 (trace 21708): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.075019 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 179.85s, trace 21708. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21765}.
<a id="trace-21709"></a>
- 179.85s–179.85s (×1), actor 9, squad 1 (trace 21709): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.075019 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 179.85s, trace 21709. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21765}.
<a id="trace-21765"></a>
<a id="trace-21781"></a>
- 180.30s–181.30s (×2), actor 9, squad 1 (trace 21765): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 180.00s, trace 21711. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21781}.
<a id="trace-21789"></a>
- 181.50s–181.50s (×1), actor 9, squad 1 (trace 21789): Withdraw to received rally. Knowledge: actor memory at 180.00s, trace 21711. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600000000000051, 'next_transition': 21857}.
<a id="trace-21790"></a>
- 181.50s–181.50s (×1), actor 9, squad 1 (trace 21790): rearward bound: one stationary suppressing element. Knowledge: actor memory at 180.00s, trace 21711. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600000000000051, 'next_transition': 21857}.
<a id="trace-21857"></a>
<a id="trace-21883"></a>
<a id="trace-21912"></a>
<a id="trace-21991"></a>
<a id="trace-22006"></a>
<a id="trace-22026"></a>
<a id="trace-22042"></a>
<a id="trace-22064"></a>
<a id="trace-22139"></a>
<a id="trace-22167"></a>
<a id="trace-22197"></a>
- 182.30s–192.30s (×11), actor 9, squad 1 (trace 21857): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 180.00s, trace 21711. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1499999999999915, 'next_transition': 21883}.
<a id="trace-22205"></a>
- 192.50s–192.50s (×1), actor 9, squad 1 (trace 22205): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 190.00s, trace 22084. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22219}.
<a id="trace-22206"></a>
- 192.50s–192.50s (×1), actor 9, squad 1 (trace 22206): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 190.00s, trace 22084. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22219}.
<a id="trace-22219"></a>
<a id="trace-22239"></a>
<a id="trace-22306"></a>
<a id="trace-22325"></a>
<a id="trace-22348"></a>
<a id="trace-22382"></a>
<a id="trace-22399"></a>
<a id="trace-22465"></a>
<a id="trace-22481"></a>
<a id="trace-22501"></a>
<a id="trace-22521"></a>
<a id="trace-22546"></a>
<a id="trace-22625"></a>
<a id="trace-22641"></a>
<a id="trace-22659"></a>
<a id="trace-22674"></a>
<a id="trace-22693"></a>
<a id="trace-22765"></a>
<a id="trace-22798"></a>
<a id="trace-22819"></a>
<a id="trace-22833"></a>
<a id="trace-22850"></a>
<a id="trace-22917"></a>
<a id="trace-22940"></a>
<a id="trace-22966"></a>
<a id="trace-22991"></a>
<a id="trace-23010"></a>
<a id="trace-23076"></a>
<a id="trace-23092"></a>
<a id="trace-23113"></a>
<a id="trace-23133"></a>
<a id="trace-23157"></a>
<a id="trace-23234"></a>
<a id="trace-23251"></a>
<a id="trace-23270"></a>
<a id="trace-23285"></a>
<a id="trace-23304"></a>
<a id="trace-23376"></a>
<a id="trace-23408"></a>
<a id="trace-23426"></a>
<a id="trace-23444"></a>
<a id="trace-23461"></a>
<a id="trace-23530"></a>
<a id="trace-23551"></a>
<a id="trace-23576"></a>
<a id="trace-23601"></a>
<a id="trace-23617"></a>
- 193.30s–239.30s (×47), actor 9, squad 1 (trace 22219): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 190.00s, trace 22084. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22239}.
<a id="trace-2883"></a>
- 240.10s–240.10s (×1), actor 9, squad 1 (events line 2883): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23645"></a>
- 240.10s–240.10s (×1), actor 9, squad 1 (trace 23645): renew committed intent (75 s lifetime). Knowledge: actor memory at 240.10s, trace 23645. Next observer evidence: {'until': 240.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23690}.
<a id="trace-23690"></a>
<a id="trace-23706"></a>
<a id="trace-23726"></a>
<a id="trace-23746"></a>
<a id="trace-23779"></a>
<a id="trace-23846"></a>
<a id="trace-23864"></a>
<a id="trace-23883"></a>
<a id="trace-23898"></a>
<a id="trace-23922"></a>
<a id="trace-23996"></a>
<a id="trace-24021"></a>
<a id="trace-24039"></a>
<a id="trace-24056"></a>
<a id="trace-24074"></a>
<a id="trace-24144"></a>
<a id="trace-24165"></a>
<a id="trace-24189"></a>
<a id="trace-24213"></a>
<a id="trace-24230"></a>
<a id="trace-24298"></a>
<a id="trace-24317"></a>
<a id="trace-24337"></a>
<a id="trace-24357"></a>
<a id="trace-24390"></a>
<a id="trace-24454"></a>
<a id="trace-24470"></a>
<a id="trace-24492"></a>
<a id="trace-24509"></a>
<a id="trace-24531"></a>
<a id="trace-24605"></a>
<a id="trace-24630"></a>
<a id="trace-24648"></a>
<a id="trace-24663"></a>
<a id="trace-24684"></a>
<a id="trace-24753"></a>
<a id="trace-24774"></a>
<a id="trace-24808"></a>
<a id="trace-24822"></a>
<a id="trace-24839"></a>
<a id="trace-24906"></a>
<a id="trace-24925"></a>
<a id="trace-24951"></a>
<a id="trace-24973"></a>
<a id="trace-24999"></a>
<a id="trace-25065"></a>
<a id="trace-25080"></a>
<a id="trace-25099"></a>
<a id="trace-25120"></a>
<a id="trace-25143"></a>
<a id="trace-25216"></a>
<a id="trace-25241"></a>
<a id="trace-25258"></a>
<a id="trace-25273"></a>
<a id="trace-25291"></a>
<a id="trace-25364"></a>
<a id="trace-25385"></a>
<a id="trace-25419"></a>
<a id="trace-25433"></a>
<a id="trace-25449"></a>
<a id="trace-25517"></a>
<a id="trace-25539"></a>
- 240.30s–301.30s (×62), actor 9, squad 1 (trace 23690): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 240.10s, trace 23645. Next observer evidence: {'until': 241.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23706}.
<a id="trace-3107"></a>
- 301.75s–301.75s (×1), actor 9, squad 1 (events line 3107): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25567}.
<a id="trace-25552"></a>
- 301.75s–301.75s (×1), actor 9, squad 1 (trace 25552): renew committed intent (75 s lifetime). Knowledge: actor memory at 301.75s, trace 25552. Next observer evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25567}.
<a id="trace-25567"></a>
<a id="trace-25589"></a>
<a id="trace-25615"></a>
<a id="trace-25681"></a>
<a id="trace-25715"></a>
<a id="trace-25733"></a>
<a id="trace-25758"></a>
<a id="trace-25841"></a>
<a id="trace-25855"></a>
<a id="trace-25873"></a>
<a id="trace-25888"></a>
<a id="trace-25906"></a>
<a id="trace-25980"></a>
<a id="trace-26006"></a>
<a id="trace-26034"></a>
<a id="trace-26049"></a>
<a id="trace-26066"></a>
<a id="trace-26133"></a>
<a id="trace-26152"></a>
<a id="trace-26178"></a>
<a id="trace-26200"></a>
<a id="trace-26227"></a>
<a id="trace-26293"></a>
<a id="trace-26308"></a>
<a id="trace-26343"></a>
<a id="trace-26370"></a>
<a id="trace-26453"></a>
<a id="trace-26467"></a>
<a id="trace-26484"></a>
<a id="trace-26499"></a>
<a id="trace-26520"></a>
<a id="trace-26594"></a>
<a id="trace-26619"></a>
<a id="trace-26647"></a>
<a id="trace-26661"></a>
<a id="trace-26678"></a>
<a id="trace-26746"></a>
<a id="trace-26763"></a>
<a id="trace-26787"></a>
<a id="trace-26821"></a>
<a id="trace-26838"></a>
<a id="trace-26905"></a>
<a id="trace-26920"></a>
<a id="trace-26938"></a>
<a id="trace-26960"></a>
<a id="trace-26985"></a>
<a id="trace-27066"></a>
<a id="trace-27082"></a>
<a id="trace-27099"></a>
<a id="trace-27114"></a>
<a id="trace-27134"></a>
<a id="trace-27207"></a>
<a id="trace-27230"></a>
<a id="trace-27260"></a>
<a id="trace-27290"></a>
- 302.30s–359.30s (×55), actor 9, squad 1 (trace 25567): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 301.75s, trace 25552. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25589}.

## Net delivery

188 matched order/radio deliveries; 194 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.527s; maximum 5.350s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3215: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3221: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3222: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3224: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3226: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4547: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4548: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4554: estimate 13.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 4556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 4557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4558: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4559: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4560: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4561: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4562: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4563: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4564: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4565: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4566: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4567: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 4568: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 4569: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 6782: estimate 15.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 6783: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 6784: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 6785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 6786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 6787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 6788: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 6789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 6790: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 6791: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 6792: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 6793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 6794: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 6795: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 6796: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 6797: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 6798: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 6799: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 6800: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 6801: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 6802: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 6803: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 6804: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 6805: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 7264: estimate 14.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 7265: estimate 14.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 7266: estimate 14.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 7267: estimate 14.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 8088: estimate 15.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 8089: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 8090: estimate 13.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 8091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 8092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 8093: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 8094: estimate 13.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 8095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 8096: estimate 15.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 8097: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 8098: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 8099: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 8100: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 8101: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 8102: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 8103: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 8104: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 8105: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 8106: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 8107: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 8108: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 8109: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 8110: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 8111: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 8798: estimate 15.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 8799: estimate 13.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 8800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 8801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 8802: estimate 14.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 8803: estimate 15.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 8804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 8805: estimate 15.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 8806: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 8807: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 8808: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 8809: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 8810: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 8811: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 8812: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 8813: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 8814: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 8815: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 8816: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 8817: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 8818: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 8819: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 8820: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 12091: estimate 15.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 12092: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 12093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 12094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 12095: estimate 15.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 12096: estimate 14.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 12097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 12098: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 12099: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 12100: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 12101: estimate 13.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 12102: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 12103: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 12104: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 12105: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 12106: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 12107: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 12108: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 12109: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 12110: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 12111: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 12112: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 12113: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 12480: estimate 15.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 12481: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 12482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 12483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 12484: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 12485: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 12486: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 12487: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 12488: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 12489: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 12490: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 12491: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 12492: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 12493: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 12494: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 12495: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 12496: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 12497: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 12498: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 12499: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 12500: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 12501: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 12502: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 13224: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 13225: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 13226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 13227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 13228: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 13229: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 13230: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 13231: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 13232: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 13233: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 13234: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 13235: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 13236: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 13237: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 13238: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 13239: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 13240: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 13241: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 13242: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 13243: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 13244: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 13245: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 13840: estimate 15.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 13841: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 13842: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 13843: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 13844: estimate 16.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 13845: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 13846: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 13847: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 13848: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 13849: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 13850: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 13851: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 13852: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 13853: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 13854: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 13855: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 13856: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 13857: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 13858: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 13859: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 13860: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 13861: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 14202: estimate 15.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 14203: estimate 15.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 14455: estimate 15.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 14456: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 14457: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 14458: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 14459: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 14460: estimate 15.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 14461: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 14462: estimate 14.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 14463: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 14464: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 14465: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 14466: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 14467: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 14468: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 14469: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 14470: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 14471: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 14472: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 14473: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 14474: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 14475: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 14476: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 15288: estimate 15.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 15289: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 15290: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 15291: estimate 15.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 15292: estimate 15.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 15293: estimate 15.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 15294: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 15295: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 15296: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 15297: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 15298: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 15299: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 15300: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 15301: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 15302: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 15303: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 15304: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 15305: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 15306: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 15307: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 15308: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 15309: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 16186: estimate 15.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 16187: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 16188: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 16189: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 16190: estimate 15.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 16191: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 16192: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 16193: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 16194: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 16195: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 16196: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 16197: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 16198: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 16199: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 16200: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 16201: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 16202: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 16203: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 16204: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 16205: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 16206: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 16663: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 16664: estimate 14.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 16665: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 16666: estimate 15.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 16667: estimate 15.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 16668: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 16669: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 16670: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 16671: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 16672: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 16673: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 16674: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 16675: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 16676: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 16677: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 16678: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 16679: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 16680: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 16681: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 16682: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 17032: estimate 15.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 17033: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 17034: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 17035: estimate 15.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 17036: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 17037: estimate 13.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 17038: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 17039: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 17040: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 17041: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 17042: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 17043: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 17044: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 17045: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 17046: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 17047: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 17048: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 17049: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 17050: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.15s leader 5, trace 17283: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.15s leader 5, trace 17284: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.15s leader 5, trace 17285: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.15s leader 5, trace 17286: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 17354: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 17355: estimate 14.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 17356: estimate 15.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 17357: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 17358: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 17359: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 17360: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 17361: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 17362: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 17363: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 17364: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 17365: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 17366: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 17367: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 17368: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 17369: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 17370: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 17371: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 17372: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 17890: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 17891: estimate 15.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 17892: estimate 14.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 17893: estimate 15.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 17894: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 17895: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 17896: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 17897: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 17898: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 17899: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 17900: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 17901: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 17902: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 17903: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 17904: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 17905: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 17906: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 17907: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 18685: estimate 15.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 18686: estimate 14.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 18687: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 18688: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 18689: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 18690: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 18691: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 18692: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 18693: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 18694: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 18695: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 18696: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 18697: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 18698: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 18699: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 18700: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 18701: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 18984: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 18985: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 19118: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 19119: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 19120: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 19121: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 10, trace 19122: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 19123: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 19124: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 19125: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 19126: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 19127: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 19128: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 19129: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 19130: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 19131: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 19132: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 19133: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 19400: estimate 14.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 19401: estimate 14.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 19402: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 10, trace 19403: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 19404: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 19405: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 19406: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 19407: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 19408: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 19409: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 19410: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 19411: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 19412: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 19413: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 19414: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 19768: estimate 14.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 19769: estimate 14.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 19770: estimate 14.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 19771: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 19772: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 19773: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 19774: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 19775: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 19776: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 19777: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 19778: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 19779: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 19780: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 19781: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 19956: estimate 14.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 19957: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 19958: estimate 14.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 19959: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 19960: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 19961: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 19962: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 19963: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 19964: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 19965: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 19966: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 19967: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 19968: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 19969: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 20152: estimate 14.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 20153: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 20154: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 20155: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 20156: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 20157: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 20158: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 20159: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 20160: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 20161: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 20162: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 20163: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 134.85s leader 9, trace 20305: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 134.85s leader 9, trace 20306: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 20309: estimate 13.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 20310: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 20311: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 20312: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 20313: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 20314: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 20315: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 20316: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 20317: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 20318: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 20319: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 20320: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 20489: estimate 13.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 20490: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 20491: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 20492: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 20493: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 20494: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 20495: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 20496: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 20497: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 20498: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 20499: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 20500: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 20645: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 20646: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 20647: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 20648: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 20649: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 20650: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 20651: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 20652: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 20653: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 20654: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 20655: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 20656: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 20786: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 20787: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 20788: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 20789: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 20790: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 20791: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 20792: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 20793: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 20794: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 20795: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 20796: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 20797: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 20937: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 20938: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 20939: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 20940: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 20941: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 20942: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 20943: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 20944: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 20945: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 20946: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 20947: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 20948: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 21097: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 21098: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 21099: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 21100: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 21101: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 21102: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 21103: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 21104: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 21105: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 21106: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 21107: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 21108: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 21248: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 21249: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 21250: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 21251: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 21252: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 21253: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 21254: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 21255: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 21256: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 21257: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 21258: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 21259: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 21393: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 21394: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 21395: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 21396: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 21397: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 21398: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 21399: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 21400: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 21401: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 21402: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 21403: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 21404: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 21548: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 21549: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 21550: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 21551: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 21552: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 21553: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 21554: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 21555: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 21556: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 21557: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 21558: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 21559: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 179.85s leader 9, trace 21708: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 179.85s leader 9, trace 21709: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 21711: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 21712: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 21713: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 21714: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 21715: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 21716: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 21717: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 21718: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 21719: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 21720: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 21721: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 21722: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 21937: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 21938: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 21939: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 21940: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 21941: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 21942: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 21943: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 21944: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 21945: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 21946: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 21947: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 21948: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 22084: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 22085: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 22086: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 22087: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 22088: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 22089: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 22090: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 22091: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 22092: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 22093: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 22094: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 22095: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 22251: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 22252: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 22253: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 22254: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 22255: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 22256: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 22257: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 22258: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 22259: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 22260: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 22261: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 22262: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 22411: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 22412: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 22413: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 22414: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 22415: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 22416: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 22417: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 22418: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 22419: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 22420: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 22421: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 22422: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 22568: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 22569: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 22570: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 22571: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 22572: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 22573: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 22574: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 22575: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 22576: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 22577: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 22578: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 22579: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 22710: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 22711: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 22712: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 22713: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 22714: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 22715: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 22716: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 22717: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 22718: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 22719: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 22720: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 22721: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 22863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 22864: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 22865: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 22866: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 22867: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 22868: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 22869: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 22870: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 22871: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 22872: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 22873: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 22874: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 23022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 23023: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 23024: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 23025: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 23026: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 23027: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 23028: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 23029: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 23030: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 23031: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 23032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 23033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 23179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 23180: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 23181: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 23182: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 23183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 23184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 23185: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 23186: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 23187: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 23188: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 23189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 23190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 23322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 23323: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 23324: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 23325: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 23326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 23327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 23328: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 23329: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 23330: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 23331: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 23332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 23333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 23474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 23475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 23476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 23477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 23478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 23479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 23480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 23481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 23482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 23483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 23484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 23485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 23633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 23634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 23635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 23636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 23637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 23638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 23639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 23640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 23641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 23642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 23643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 23644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.10s leader 9, trace 23645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 23792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 23793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 23794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 23795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 23796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 23797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 23798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 23799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 23800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 23801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 23802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 23803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 23935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 23936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 23937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 23938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 23939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 23940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 23941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 23942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 23943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 23944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 23945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 23946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 24087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 24088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 24089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 24090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 24091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 24092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 24093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 24094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 24095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 24096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 24097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 24098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 24242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 24243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 24244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 24245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 24246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 24247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 24248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 24249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 24250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 24251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 24252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 24253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 24400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 24401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 24402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 24403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 24404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 24405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 24406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 24407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 24408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 24409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 24410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 24411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 24544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 24545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 24546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 24547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 24548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 24549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 24550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 24551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 24552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 24553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 24554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 24555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 24698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 24699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 24700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 24701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 24702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 24703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 24704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 24705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 24706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 24707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 24708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 24709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 24852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 24853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 24854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 24855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 24856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 24857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 24858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 24859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 24860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 24861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 24862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 24863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 25011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 25012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 25013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 25014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 25015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 25016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 25017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 25018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 25019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 25020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 25021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 25022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 25162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 25163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 25164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 25165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 25166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 25167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 25168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 25169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 25170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 25171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 25172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 25173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 25310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 25311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 25312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 25313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 25314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 25315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 25316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 25317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 25318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 25319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 25320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 25321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 25463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 25464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 25465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 25466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 25467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 25468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 25469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 25470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 25471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 25472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 25473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 25474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 301.75s leader 9, trace 25552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 25627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 25628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 25629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 25630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 25631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 25632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 25633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 25634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 25635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 25636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 25637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 25638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 25777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 25778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 25779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 25780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 25781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 25782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 25783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 25784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 25785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 25786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 25787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 25788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 25921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 25922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 25923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 25924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 25925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 25926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 25927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 25928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 25929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 25930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 25931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 25932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 26079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 26080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 26081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 26082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 26083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 26084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 26085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 26086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 26087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 26088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 26089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 26090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 26239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 26240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 26241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 26242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 26243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 26244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 26245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 26246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 26247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 26248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 26249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 26250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 26389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 26390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 26391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 26392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 26393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 26394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 26395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 26396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 26397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 26398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 26399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 26400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 26535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 26536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 26537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 26538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 26539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 26540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 26541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 26542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 26543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 26544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 26545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 26546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 26691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 26692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 26693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 26694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 26695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 26696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 26697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 26698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 26699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 26700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 26701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 26702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 26851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 26852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 26853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 26854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 26855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 26856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 26857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 26858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 26859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 26860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 26861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 26862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 27012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 27013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 27014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 27015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 27016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 27017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 27018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 27019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 27020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 27021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 27022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 27023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 27152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 27153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 27154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 27155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 27156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 27157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 27158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 27159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 27160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 27161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 27162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 27163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 27302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 27303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 27304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 27305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 27306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 27307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 27308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 27309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 27310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 27311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 27312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 27313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Soren incapacitated
- 1: Ellis killed in action
- 1: Tern incapacitated
- 1: Quill killed in action
- 1: Ash incapacitated
- 1: Reed killed in action
- 1: Moss incapacitated
- 1: Rook incapacitated
- 1: Bren killed in action
- 1: Dane incapacitated
- 1: Vale incapacitated
- 1: Iven incapacitated

## Outcome attribution

- 179.85s, evidence 2658: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 179.85s, evidence 21708: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.075019 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21765}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 179.85s, evidence 21709: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.075019 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21765}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 240.10s, evidence 2883: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 301.75s, evidence 3107: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25567}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
