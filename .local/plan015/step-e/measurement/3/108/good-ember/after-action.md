# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/3/108/good-ember/battle-108-1789673690635422838`

## Battle summary

**Ember** · 360 s · 168 shots.

### Turning points

- 14.7s, squad 0: contact (events line 151). First recorded contact.
- 19.5s, squad 0: help call ([trace 2089](#trace-2089)). No completion observed before termination.
- 29.8s, squad 0: withdrawal ([trace 3351](#trace-3351)). 35.7s, squad 0: took cover and returned fire.
- 35.4s, squad 0: help call ([trace 3870](#trace-3870)). No completion observed before termination.
- 40.0s, squad 0: withdrawal ([trace 4140](#trace-4140)). 73.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 47.0s, squad 0: help call ([trace 4555](#trace-4555)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 11 shots, 3/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 157 shots, 0/6 lost.

### Decisions and attribution

At 15.1s, squad 0 chose took cover and returned fire ([trace 1216](#trace-1216)), followed by 1 shots and 0 own casualties; estimate 1.5 against 0 distinct squad-reported contacts; At 29.8s, squad 0 chose broke contact ([trace 3351](#trace-3351)), followed by 1 shots and 0 own casualties; estimate 2.9 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 13.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1094](#trace-1094)). Following evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8040737475628112, 'next_transition': 1123}.
- 87.6s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.325087 retreat threshold=0.220000 initiative=requires intent ([trace 5752](#trace-5752)). Following evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5758}.

### Communication

82 matched deliveries (mean 0.61s, max 5.25s); 246 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.65s, squad 0, contact, evidence events line 151: First recorded contact; .
- 19.50s, squad 0, help call, evidence 2089: NeedSupport; No completion observed before termination.
- 29.80s, squad 0, withdrawal, evidence 3351: BreakContact: believed ratio at least two without superiority; 35.7s, squad 0: took cover and returned fire.
- 35.40s, squad 0, help call, evidence 3870: NeedSupport; No completion observed before termination.
- 40.00s, squad 0, withdrawal, evidence 4140: BreakContact: believed ratio at least two without superiority; 73.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 47.05s, squad 0, help call, evidence 4555: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.863671558206116, 'next_transition': 609}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.863671558206116, 'next_transition': 609}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.863671558206116, 'next_transition': 609}.
<a id="trace-323"></a>
<a id="trace-341"></a>
<a id="trace-357"></a>
<a id="trace-372"></a>
<a id="trace-383"></a>
<a id="trace-399"></a>
<a id="trace-418"></a>
<a id="trace-492"></a>
<a id="trace-504"></a>
<a id="trace-526"></a>
<a id="trace-544"></a>
<a id="trace-555"></a>
<a id="trace-570"></a>
<a id="trace-590"></a>
<a id="trace-611"></a>
<a id="trace-623"></a>
<a id="trace-632"></a>
<a id="trace-714"></a>
<a id="trace-723"></a>
<a id="trace-995"></a>
<a id="trace-1016"></a>
<a id="trace-1038"></a>
<a id="trace-1055"></a>
<a id="trace-1075"></a>
<a id="trace-1093"></a>
<a id="trace-1125"></a>
<a id="trace-1143"></a>
<a id="trace-1571"></a>
<a id="trace-1931"></a>
<a id="trace-1971"></a>
<a id="trace-2005"></a>
<a id="trace-2021"></a>
<a id="trace-2040"></a>
<a id="trace-2062"></a>
<a id="trace-2072"></a>
<a id="trace-2084"></a>
<a id="trace-2100"></a>
<a id="trace-2180"></a>
<a id="trace-2477"></a>
<a id="trace-2488"></a>
<a id="trace-2511"></a>
<a id="trace-2526"></a>
<a id="trace-2536"></a>
<a id="trace-2549"></a>
<a id="trace-2829"></a>
<a id="trace-2844"></a>
<a id="trace-2863"></a>
<a id="trace-2943"></a>
<a id="trace-3264"></a>
<a id="trace-3277"></a>
<a id="trace-3295"></a>
<a id="trace-3306"></a>
<a id="trace-3314"></a>
<a id="trace-3326"></a>
<a id="trace-3329"></a>
<a id="trace-3339"></a>
<a id="trace-3350"></a>
<a id="trace-3665"></a>
<a id="trace-3682"></a>
<a id="trace-3699"></a>
<a id="trace-3710"></a>
<a id="trace-3730"></a>
<a id="trace-3750"></a>
<a id="trace-3759"></a>
<a id="trace-3769"></a>
<a id="trace-3784"></a>
<a id="trace-3794"></a>
<a id="trace-3866"></a>
<a id="trace-4031"></a>
<a id="trace-4043"></a>
<a id="trace-4065"></a>
<a id="trace-4079"></a>
<a id="trace-4089"></a>
<a id="trace-4104"></a>
<a id="trace-4113"></a>
<a id="trace-4122"></a>
<a id="trace-4128"></a>
<a id="trace-4319"></a>
<a id="trace-4343"></a>
<a id="trace-4354"></a>
<a id="trace-4364"></a>
<a id="trace-4387"></a>
<a id="trace-4395"></a>
<a id="trace-4405"></a>
<a id="trace-4414"></a>
<a id="trace-4428"></a>
<a id="trace-4441"></a>
<a id="trace-4516"></a>
<a id="trace-4524"></a>
<a id="trace-4543"></a>
<a id="trace-4551"></a>
<a id="trace-4567"></a>
<a id="trace-4575"></a>
<a id="trace-4588"></a>
<a id="trace-4605"></a>
<a id="trace-4618"></a>
<a id="trace-4626"></a>
<a id="trace-4707"></a>
<a id="trace-4719"></a>
<a id="trace-4734"></a>
<a id="trace-4739"></a>
<a id="trace-4754"></a>
<a id="trace-4770"></a>
<a id="trace-4781"></a>
<a id="trace-4785"></a>
<a id="trace-4796"></a>
<a id="trace-4803"></a>
<a id="trace-4871"></a>
<a id="trace-4877"></a>
<a id="trace-4885"></a>
<a id="trace-4893"></a>
<a id="trace-4899"></a>
<a id="trace-4905"></a>
<a id="trace-4913"></a>
<a id="trace-4917"></a>
<a id="trace-4926"></a>
<a id="trace-4934"></a>
<a id="trace-5004"></a>
<a id="trace-5009"></a>
<a id="trace-5016"></a>
<a id="trace-5022"></a>
<a id="trace-5029"></a>
<a id="trace-5037"></a>
<a id="trace-5049"></a>
<a id="trace-5056"></a>
<a id="trace-5064"></a>
<a id="trace-5071"></a>
<a id="trace-5141"></a>
<a id="trace-5155"></a>
<a id="trace-5160"></a>
<a id="trace-5168"></a>
<a id="trace-5173"></a>
<a id="trace-5183"></a>
<a id="trace-5189"></a>
<a id="trace-5198"></a>
<a id="trace-5209"></a>
<a id="trace-5278"></a>
<a id="trace-5284"></a>
<a id="trace-5294"></a>
<a id="trace-5303"></a>
<a id="trace-5314"></a>
<a id="trace-5319"></a>
<a id="trace-5332"></a>
<a id="trace-5339"></a>
<a id="trace-5349"></a>
<a id="trace-5359"></a>
<a id="trace-5431"></a>
<a id="trace-5439"></a>
<a id="trace-5448"></a>
<a id="trace-5456"></a>
<a id="trace-5464"></a>
<a id="trace-5470"></a>
<a id="trace-5483"></a>
<a id="trace-5488"></a>
<a id="trace-5499"></a>
<a id="trace-5507"></a>
<a id="trace-5576"></a>
<a id="trace-5582"></a>
<a id="trace-5590"></a>
<a id="trace-5598"></a>
<a id="trace-5606"></a>
<a id="trace-5611"></a>
<a id="trace-5623"></a>
<a id="trace-5628"></a>
<a id="trace-5639"></a>
<a id="trace-5650"></a>
<a id="trace-5721"></a>
<a id="trace-5725"></a>
<a id="trace-5733"></a>
<a id="trace-5743"></a>
<a id="trace-5750"></a>
<a id="trace-5760"></a>
<a id="trace-5769"></a>
<a id="trace-5773"></a>
<a id="trace-5784"></a>
<a id="trace-5793"></a>
<a id="trace-5865"></a>
<a id="trace-5870"></a>
<a id="trace-5879"></a>
<a id="trace-5886"></a>
<a id="trace-5896"></a>
<a id="trace-5904"></a>
<a id="trace-5918"></a>
<a id="trace-5932"></a>
<a id="trace-5940"></a>
<a id="trace-5948"></a>
<a id="trace-6020"></a>
<a id="trace-6026"></a>
<a id="trace-6042"></a>
<a id="trace-6050"></a>
<a id="trace-6062"></a>
<a id="trace-6068"></a>
<a id="trace-6080"></a>
<a id="trace-6088"></a>
<a id="trace-6100"></a>
<a id="trace-6107"></a>
<a id="trace-6176"></a>
<a id="trace-6180"></a>
<a id="trace-6192"></a>
<a id="trace-6199"></a>
<a id="trace-6211"></a>
<a id="trace-6218"></a>
<a id="trace-6226"></a>
<a id="trace-6232"></a>
<a id="trace-6240"></a>
<a id="trace-6247"></a>
<a id="trace-6315"></a>
<a id="trace-6322"></a>
<a id="trace-6331"></a>
<a id="trace-6338"></a>
<a id="trace-6349"></a>
<a id="trace-6355"></a>
<a id="trace-6368"></a>
<a id="trace-6375"></a>
<a id="trace-6385"></a>
<a id="trace-6391"></a>
<a id="trace-6459"></a>
<a id="trace-6466"></a>
<a id="trace-6474"></a>
<a id="trace-6482"></a>
<a id="trace-6491"></a>
<a id="trace-6496"></a>
<a id="trace-6506"></a>
<a id="trace-6515"></a>
<a id="trace-6526"></a>
<a id="trace-6532"></a>
<a id="trace-6604"></a>
<a id="trace-6610"></a>
<a id="trace-6621"></a>
<a id="trace-6628"></a>
<a id="trace-6637"></a>
<a id="trace-6644"></a>
<a id="trace-6652"></a>
<a id="trace-6657"></a>
<a id="trace-6666"></a>
<a id="trace-6671"></a>
<a id="trace-6743"></a>
<a id="trace-6750"></a>
<a id="trace-6761"></a>
<a id="trace-6768"></a>
<a id="trace-6779"></a>
<a id="trace-6789"></a>
<a id="trace-6798"></a>
<a id="trace-6806"></a>
<a id="trace-6814"></a>
<a id="trace-6819"></a>
<a id="trace-6888"></a>
<a id="trace-6893"></a>
<a id="trace-6903"></a>
<a id="trace-6910"></a>
<a id="trace-6920"></a>
<a id="trace-6927"></a>
<a id="trace-6938"></a>
<a id="trace-6947"></a>
<a id="trace-6958"></a>
<a id="trace-6968"></a>
<a id="trace-7037"></a>
<a id="trace-7041"></a>
<a id="trace-7050"></a>
<a id="trace-7058"></a>
<a id="trace-7067"></a>
<a id="trace-7071"></a>
<a id="trace-7081"></a>
<a id="trace-7087"></a>
<a id="trace-7095"></a>
<a id="trace-7104"></a>
<a id="trace-7175"></a>
<a id="trace-7185"></a>
<a id="trace-7193"></a>
<a id="trace-7202"></a>
<a id="trace-7212"></a>
<a id="trace-7217"></a>
<a id="trace-7227"></a>
<a id="trace-7233"></a>
<a id="trace-7242"></a>
<a id="trace-7248"></a>
<a id="trace-7316"></a>
<a id="trace-7325"></a>
<a id="trace-7333"></a>
<a id="trace-7344"></a>
<a id="trace-7357"></a>
<a id="trace-7362"></a>
<a id="trace-7371"></a>
<a id="trace-7378"></a>
<a id="trace-7389"></a>
<a id="trace-7396"></a>
<a id="trace-7465"></a>
<a id="trace-7469"></a>
<a id="trace-7477"></a>
<a id="trace-7487"></a>
<a id="trace-7495"></a>
<a id="trace-7502"></a>
<a id="trace-7511"></a>
<a id="trace-7517"></a>
<a id="trace-7528"></a>
<a id="trace-7537"></a>
<a id="trace-7608"></a>
<a id="trace-7613"></a>
<a id="trace-7625"></a>
<a id="trace-7633"></a>
<a id="trace-7639"></a>
<a id="trace-7646"></a>
<a id="trace-7654"></a>
<a id="trace-7662"></a>
<a id="trace-7671"></a>
<a id="trace-7677"></a>
<a id="trace-7748"></a>
<a id="trace-7755"></a>
<a id="trace-7765"></a>
<a id="trace-7780"></a>
<a id="trace-7789"></a>
<a id="trace-7793"></a>
<a id="trace-7802"></a>
<a id="trace-7812"></a>
<a id="trace-7876"></a>
<a id="trace-7886"></a>
<a id="trace-7960"></a>
<a id="trace-7972"></a>
<a id="trace-7987"></a>
<a id="trace-7993"></a>
<a id="trace-8011"></a>
<a id="trace-8020"></a>
<a id="trace-8032"></a>
<a id="trace-8036"></a>
<a id="trace-8053"></a>
<a id="trace-8068"></a>
<a id="trace-8139"></a>
<a id="trace-8149"></a>
<a id="trace-8162"></a>
<a id="trace-8167"></a>
<a id="trace-8176"></a>
<a id="trace-8181"></a>
<a id="trace-8196"></a>
<a id="trace-8211"></a>
<a id="trace-8221"></a>
<a id="trace-8228"></a>
<a id="trace-8305"></a>
<a id="trace-8315"></a>
<a id="trace-8325"></a>
<a id="trace-8334"></a>
<a id="trace-8342"></a>
<a id="trace-8347"></a>
<a id="trace-8358"></a>
<a id="trace-8364"></a>
<a id="trace-8374"></a>
<a id="trace-8381"></a>
<a id="trace-8455"></a>
<a id="trace-8460"></a>
<a id="trace-8468"></a>
<a id="trace-8477"></a>
<a id="trace-8483"></a>
<a id="trace-8491"></a>
<a id="trace-8501"></a>
<a id="trace-8506"></a>
<a id="trace-8516"></a>
<a id="trace-8523"></a>
<a id="trace-8599"></a>
<a id="trace-8605"></a>
<a id="trace-8615"></a>
<a id="trace-8621"></a>
<a id="trace-8630"></a>
<a id="trace-8637"></a>
<a id="trace-8645"></a>
<a id="trace-8652"></a>
<a id="trace-8661"></a>
<a id="trace-8667"></a>
<a id="trace-8740"></a>
<a id="trace-8748"></a>
<a id="trace-8759"></a>
<a id="trace-8766"></a>
<a id="trace-8777"></a>
<a id="trace-8781"></a>
<a id="trace-8791"></a>
<a id="trace-8800"></a>
<a id="trace-8808"></a>
<a id="trace-8816"></a>
<a id="trace-8887"></a>
<a id="trace-8892"></a>
<a id="trace-8902"></a>
<a id="trace-8908"></a>
<a id="trace-8918"></a>
<a id="trace-8925"></a>
<a id="trace-8936"></a>
<a id="trace-8942"></a>
<a id="trace-8951"></a>
<a id="trace-8962"></a>
<a id="trace-9036"></a>
<a id="trace-9043"></a>
<a id="trace-9051"></a>
<a id="trace-9057"></a>
<a id="trace-9064"></a>
<a id="trace-9068"></a>
<a id="trace-9079"></a>
<a id="trace-9084"></a>
<a id="trace-9093"></a>
<a id="trace-9100"></a>
<a id="trace-9175"></a>
<a id="trace-9182"></a>
<a id="trace-9192"></a>
<a id="trace-9204"></a>
<a id="trace-9212"></a>
<a id="trace-9217"></a>
<a id="trace-9226"></a>
<a id="trace-9231"></a>
<a id="trace-9240"></a>
<a id="trace-9246"></a>
<a id="trace-9319"></a>
<a id="trace-9324"></a>
<a id="trace-9332"></a>
<a id="trace-9342"></a>
<a id="trace-9352"></a>
<a id="trace-9361"></a>
<a id="trace-9371"></a>
<a id="trace-9376"></a>
<a id="trace-9388"></a>
<a id="trace-9393"></a>
<a id="trace-9466"></a>
<a id="trace-9471"></a>
<a id="trace-9480"></a>
<a id="trace-9486"></a>
<a id="trace-9493"></a>
<a id="trace-9501"></a>
<a id="trace-9509"></a>
<a id="trace-9516"></a>
<a id="trace-9529"></a>
<a id="trace-9536"></a>
<a id="trace-9610"></a>
<a id="trace-9615"></a>
<a id="trace-9626"></a>
<a id="trace-9633"></a>
<a id="trace-9641"></a>
<a id="trace-9646"></a>
<a id="trace-9654"></a>
<a id="trace-9660"></a>
<a id="trace-9668"></a>
<a id="trace-9677"></a>
<a id="trace-9749"></a>
<a id="trace-9754"></a>
<a id="trace-9764"></a>
<a id="trace-9775"></a>
<a id="trace-9784"></a>
<a id="trace-9789"></a>
<a id="trace-9801"></a>
<a id="trace-9807"></a>
<a id="trace-9815"></a>
<a id="trace-9823"></a>
<a id="trace-9894"></a>
<a id="trace-9903"></a>
<a id="trace-9911"></a>
<a id="trace-9917"></a>
<a id="trace-9926"></a>
<a id="trace-9932"></a>
<a id="trace-9944"></a>
<a id="trace-9953"></a>
<a id="trace-9962"></a>
<a id="trace-9968"></a>
<a id="trace-10039"></a>
<a id="trace-10048"></a>
<a id="trace-10058"></a>
<a id="trace-10066"></a>
<a id="trace-10073"></a>
<a id="trace-10078"></a>
<a id="trace-10087"></a>
<a id="trace-10092"></a>
<a id="trace-10104"></a>
<a id="trace-10112"></a>
<a id="trace-10185"></a>
<a id="trace-10189"></a>
<a id="trace-10200"></a>
<a id="trace-10209"></a>
<a id="trace-10216"></a>
<a id="trace-10226"></a>
<a id="trace-10235"></a>
<a id="trace-10240"></a>
<a id="trace-10249"></a>
<a id="trace-10256"></a>
<a id="trace-10329"></a>
<a id="trace-10335"></a>
<a id="trace-10345"></a>
<a id="trace-10352"></a>
<a id="trace-10359"></a>
<a id="trace-10366"></a>
<a id="trace-10376"></a>
<a id="trace-10384"></a>
<a id="trace-10393"></a>
<a id="trace-10399"></a>
<a id="trace-10473"></a>
<a id="trace-10479"></a>
<a id="trace-10490"></a>
<a id="trace-10495"></a>
<a id="trace-10504"></a>
<a id="trace-10508"></a>
<a id="trace-10518"></a>
<a id="trace-10526"></a>
<a id="trace-10534"></a>
<a id="trace-10543"></a>
<a id="trace-10616"></a>
<a id="trace-10622"></a>
<a id="trace-10632"></a>
<a id="trace-10639"></a>
<a id="trace-10650"></a>
<a id="trace-10656"></a>
<a id="trace-10666"></a>
<a id="trace-10671"></a>
<a id="trace-10680"></a>
<a id="trace-10690"></a>
<a id="trace-10761"></a>
<a id="trace-10768"></a>
<a id="trace-10776"></a>
<a id="trace-10782"></a>
<a id="trace-10791"></a>
<a id="trace-10799"></a>
<a id="trace-10810"></a>
<a id="trace-10816"></a>
<a id="trace-10826"></a>
<a id="trace-10833"></a>
<a id="trace-10904"></a>
<a id="trace-10912"></a>
<a id="trace-10922"></a>
<a id="trace-10929"></a>
<a id="trace-10935"></a>
<a id="trace-10940"></a>
<a id="trace-10950"></a>
<a id="trace-10955"></a>
<a id="trace-10966"></a>
<a id="trace-10974"></a>
<a id="trace-11047"></a>
<a id="trace-11051"></a>
<a id="trace-11061"></a>
<a id="trace-11071"></a>
<a id="trace-11079"></a>
<a id="trace-11088"></a>
<a id="trace-11095"></a>
<a id="trace-11100"></a>
<a id="trace-11109"></a>
<a id="trace-11115"></a>
<a id="trace-11188"></a>
<a id="trace-11193"></a>
<a id="trace-11201"></a>
<a id="trace-11208"></a>
<a id="trace-11219"></a>
<a id="trace-11227"></a>
<a id="trace-11236"></a>
<a id="trace-11246"></a>
<a id="trace-11257"></a>
<a id="trace-11263"></a>
<a id="trace-11335"></a>
<a id="trace-11339"></a>
<a id="trace-11349"></a>
<a id="trace-11355"></a>
<a id="trace-11364"></a>
<a id="trace-11369"></a>
<a id="trace-11377"></a>
<a id="trace-11385"></a>
<a id="trace-11397"></a>
<a id="trace-11406"></a>
<a id="trace-11478"></a>
<a id="trace-11483"></a>
<a id="trace-11497"></a>
<a id="trace-11502"></a>
<a id="trace-11511"></a>
<a id="trace-11516"></a>
<a id="trace-11525"></a>
<a id="trace-11530"></a>
<a id="trace-11538"></a>
<a id="trace-11547"></a>
<a id="trace-11618"></a>
<a id="trace-11625"></a>
<a id="trace-11638"></a>
<a id="trace-11645"></a>
<a id="trace-11661"></a>
<a id="trace-11673"></a>
<a id="trace-11679"></a>
<a id="trace-11688"></a>
<a id="trace-11694"></a>
<a id="trace-11765"></a>
<a id="trace-11771"></a>
<a id="trace-11779"></a>
<a id="trace-11788"></a>
<a id="trace-11795"></a>
<a id="trace-11801"></a>
<a id="trace-11810"></a>
<a id="trace-11818"></a>
<a id="trace-11830"></a>
<a id="trace-11838"></a>
<a id="trace-11912"></a>
<a id="trace-11918"></a>
<a id="trace-11926"></a>
<a id="trace-11934"></a>
<a id="trace-11941"></a>
<a id="trace-11947"></a>
<a id="trace-11955"></a>
<a id="trace-11960"></a>
<a id="trace-11971"></a>
<a id="trace-11976"></a>
<a id="trace-12050"></a>
<a id="trace-12061"></a>
<a id="trace-12072"></a>
<a id="trace-12077"></a>
<a id="trace-12086"></a>
<a id="trace-12095"></a>
<a id="trace-12104"></a>
<a id="trace-12110"></a>
<a id="trace-12117"></a>
<a id="trace-12123"></a>
<a id="trace-12195"></a>
<a id="trace-12201"></a>
<a id="trace-12210"></a>
<a id="trace-12216"></a>
<a id="trace-12228"></a>
<a id="trace-12232"></a>
<a id="trace-12242"></a>
<a id="trace-12249"></a>
<a id="trace-12256"></a>
<a id="trace-12267"></a>
<a id="trace-12339"></a>
<a id="trace-12344"></a>
<a id="trace-12352"></a>
<a id="trace-12358"></a>
<a id="trace-12369"></a>
<a id="trace-12373"></a>
<a id="trace-12383"></a>
<a id="trace-12388"></a>
<a id="trace-12398"></a>
<a id="trace-12407"></a>
<a id="trace-12480"></a>
<a id="trace-12488"></a>
<a id="trace-12496"></a>
<a id="trace-12502"></a>
<a id="trace-12513"></a>
<a id="trace-12518"></a>
<a id="trace-12527"></a>
<a id="trace-12531"></a>
<a id="trace-12541"></a>
<a id="trace-12547"></a>
<a id="trace-12618"></a>
<a id="trace-12628"></a>
<a id="trace-12635"></a>
<a id="trace-12644"></a>
<a id="trace-12654"></a>
<a id="trace-12660"></a>
<a id="trace-12670"></a>
<a id="trace-12676"></a>
<a id="trace-12688"></a>
<a id="trace-12695"></a>
<a id="trace-12767"></a>
<a id="trace-12773"></a>
<a id="trace-12779"></a>
<a id="trace-12788"></a>
<a id="trace-12798"></a>
<a id="trace-12805"></a>
<a id="trace-12814"></a>
<a id="trace-12818"></a>
<a id="trace-12828"></a>
<a id="trace-12836"></a>
<a id="trace-12910"></a>
<a id="trace-12916"></a>
<a id="trace-12926"></a>
<a id="trace-12931"></a>
<a id="trace-12941"></a>
<a id="trace-12948"></a>
<a id="trace-12956"></a>
<a id="trace-12965"></a>
<a id="trace-12973"></a>
<a id="trace-12979"></a>
<a id="trace-13052"></a>
<a id="trace-13057"></a>
<a id="trace-13067"></a>
<a id="trace-13075"></a>
<a id="trace-13085"></a>
<a id="trace-13090"></a>
<a id="trace-13098"></a>
<a id="trace-13108"></a>
<a id="trace-13116"></a>
<a id="trace-13125"></a>
<a id="trace-13198"></a>
<a id="trace-13203"></a>
<a id="trace-13211"></a>
<a id="trace-13217"></a>
<a id="trace-13227"></a>
<a id="trace-13232"></a>
<a id="trace-13240"></a>
<a id="trace-13246"></a>
<a id="trace-13258"></a>
<a id="trace-13265"></a>
<a id="trace-13338"></a>
<a id="trace-13346"></a>
<a id="trace-13355"></a>
<a id="trace-13361"></a>
<a id="trace-13372"></a>
<a id="trace-13377"></a>
<a id="trace-13387"></a>
<a id="trace-13392"></a>
<a id="trace-13402"></a>
<a id="trace-13408"></a>
<a id="trace-13479"></a>
<a id="trace-13487"></a>
<a id="trace-13497"></a>
<a id="trace-13506"></a>
<a id="trace-13515"></a>
<a id="trace-13520"></a>
<a id="trace-13533"></a>
<a id="trace-13539"></a>
<a id="trace-13548"></a>
<a id="trace-13554"></a>
<a id="trace-13625"></a>
<a id="trace-13629"></a>
<a id="trace-13636"></a>
<a id="trace-13644"></a>
<a id="trace-13652"></a>
<a id="trace-13659"></a>
<a id="trace-13671"></a>
<a id="trace-13678"></a>
<a id="trace-13687"></a>
<a id="trace-13695"></a>
- 1.60s–359.80s (×715), actor 37, squad 4 (trace 323): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4830039667229699, 'next_transition': 341}.
<a id="trace-609"></a>
<a id="trace-621"></a>
<a id="trace-630"></a>
<a id="trace-712"></a>
<a id="trace-721"></a>
- 8.70s–10.70s (×5), actor 5, squad 0 (trace 609): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 425. Next observer evidence: {'until': 9, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000058692832276, 'next_transition': 621}.
<a id="trace-727"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 727): traveling overwatch. Knowledge: actor memory at 10.00s, trace 634. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39999761208728524, 'next_transition': 993}.
<a id="trace-728"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 728): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 634. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39999761208728524, 'next_transition': 993}.
<a id="trace-993"></a>
<a id="trace-1073"></a>
- 11.20s–13.20s (×2), actor 5, squad 0 (trace 993): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 637. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.4164675534934106, 'next_transition': 1073}.
<a id="trace-140"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (events line 140): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8040737475628112, 'next_transition': 1123}.
<a id="trace-1094"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 1094): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 1094. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8040737475628112, 'next_transition': 1123}.
<a id="trace-1095"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 1095): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 1095. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8040737475628112, 'next_transition': 1123}.
<a id="trace-1123"></a>
<a id="trace-1141"></a>
- 14.20s–14.70s (×2), actor 5, squad 0 (trace 1123): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 13.75s, trace 1095. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.005825272465011, 'next_transition': 1141}.
<a id="trace-1216"></a>
- 15.10s–15.10s (×1), actor 0, squad 0 (trace 1216): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1146. Next observer evidence: {'until': 15.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29498694760321703, 'next_transition': 1569}.
<a id="trace-1217"></a>
- 15.10s–15.10s (×1), actor 0, squad 0 (trace 1217): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1146. Next observer evidence: {'until': 15.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29498694760321703, 'next_transition': 1569}.
<a id="trace-1218"></a>
- 15.10s–15.10s (×1), actor 0, squad 0 (trace 1218): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1146. Next observer evidence: {'until': 15.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29498694760321703, 'next_transition': 1569}.
<a id="trace-1569"></a>
- 15.20s–15.20s (×1), actor 5, squad 0 (trace 1569): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1149. Next observer evidence: None.
<a id="trace-1573"></a>
- 15.35s–15.35s (×1), actor 0, squad 0 (trace 1573): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1146. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5900109210892764, 'next_transition': 1929}.
<a id="trace-1929"></a>
<a id="trace-1969"></a>
<a id="trace-2003"></a>
<a id="trace-2019"></a>
<a id="trace-2038"></a>
<a id="trace-2070"></a>
<a id="trace-2082"></a>
- 15.70s–19.25s (×7), actor 5, squad 0 (trace 1929): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1149. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.980150293547004, 'next_transition': 1969}.
<a id="trace-2087"></a>
- 19.50s–19.50s (×1), actor 1, squad 0 (trace 2087): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 15.00s, trace 1147. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25554556414406543, 'next_transition': 2098}.
<a id="trace-2089"></a>
- 19.50s–19.50s (×1), actor 1, squad 0 (trace 2089): NeedSupport. Knowledge: actor memory at 15.00s, trace 1147. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25554556414406543, 'next_transition': 2098}.
<a id="trace-2098"></a>
<a id="trace-2178"></a>
- 19.75s–20.25s (×2), actor 5, squad 0 (trace 2098): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1149. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6525097517273042, 'next_transition': 2178}.
<a id="trace-2183"></a>
- 20.50s–20.50s (×1), actor 1, squad 0 (trace 2183): Reorganise: completed/failed drill. Knowledge: actor memory at 20.00s, trace 2105. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1019999999999996, 'next_transition': 2475}.
<a id="trace-2187"></a>
- 20.50s–20.50s (×1), actor 1, squad 0 (trace 2187): MoveTactically. Knowledge: actor memory at 20.00s, trace 2105. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1019999999999996, 'next_transition': 2475}.
<a id="trace-2188"></a>
- 20.50s–20.50s (×1), actor 1, squad 0 (trace 2188): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2105. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1019999999999996, 'next_transition': 2475}.
<a id="trace-2189"></a>
- 20.50s–20.50s (×1), actor 1, squad 0 (trace 2189): Reorganise complete. Knowledge: actor memory at 20.00s, trace 2105. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1019999999999996, 'next_transition': 2475}.
<a id="trace-2475"></a>
<a id="trace-2509"></a>
- 20.75s–21.75s (×2), actor 5, squad 0 (trace 2475): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2107. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9080070164960692, 'next_transition': 2509}.
<a id="trace-2554"></a>
- 23.45s–23.45s (×1), actor 1, squad 0 (trace 2554): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 2105. Next observer evidence: {'until': 25.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.784311972700943, 'next_transition': 2950}.
<a id="trace-2555"></a>
- 23.45s–23.45s (×1), actor 1, squad 0 (trace 2555): bounding overwatch. Knowledge: actor memory at 20.00s, trace 2105. Next observer evidence: {'until': 25.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.784311972700943, 'next_transition': 2950}.
<a id="trace-2556"></a>
<a id="trace-2950"></a>
- 23.45s–25.65s (×2), actor 1, squad 0 (trace 2556): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2105. Next observer evidence: {'until': 25.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.784311972700943, 'next_transition': 2950}.
<a id="trace-3304"></a>
<a id="trace-3324"></a>
<a id="trace-3348"></a>
- 27.25s–29.75s (×3), actor 5, squad 0 (trace 3304): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2869. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4687593385267113, 'next_transition': 3324}.
<a id="trace-3351"></a>
- 29.80s–29.80s (×1), actor 1, squad 0 (trace 3351): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 2867. Next observer evidence: {'until': 30.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.16272237361680858, 'next_transition': 3663}.
<a id="trace-3352"></a>
- 29.80s–29.80s (×1), actor 1, squad 0 (trace 3352): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 2867. Next observer evidence: {'until': 30.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.16272237361680858, 'next_transition': 3663}.
<a id="trace-3663"></a>
<a id="trace-3680"></a>
<a id="trace-3708"></a>
<a id="trace-3728"></a>
<a id="trace-3757"></a>
<a id="trace-3767"></a>
<a id="trace-3782"></a>
<a id="trace-3792"></a>
<a id="trace-3864"></a>
- 30.25s–35.25s (×9), actor 5, squad 0 (trace 3663): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3595. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5100103600390737, 'next_transition': 3680}.
<a id="trace-3869"></a>
- 35.40s–35.40s (×1), actor 1, squad 0 (trace 3869): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 35.00s, trace 3796. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150083620477731, 'next_transition': 3878}.
<a id="trace-3870"></a>
- 35.40s–35.40s (×1), actor 1, squad 0 (trace 3870): NeedSupport. Knowledge: actor memory at 35.00s, trace 3796. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150083620477731, 'next_transition': 3878}.
<a id="trace-3878"></a>
- 35.70s–35.70s (×1), actor 1, squad 0 (trace 3878): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 3796. Next observer evidence: None.
<a id="trace-3881"></a>
- 35.70s–35.70s (×1), actor 1, squad 0 (trace 3881): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 3796. Next observer evidence: None.
<a id="trace-3882"></a>
- 35.70s–35.70s (×1), actor 1, squad 0 (trace 3882): Reorganise complete: known contact. Knowledge: actor memory at 35.00s, trace 3796. Next observer evidence: None.
<a id="trace-4029"></a>
<a id="trace-4063"></a>
<a id="trace-4077"></a>
<a id="trace-4102"></a>
<a id="trace-4111"></a>
<a id="trace-4126"></a>
- 35.75s–39.75s (×6), actor 5, squad 0 (trace 4029): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3797. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5756885480982148, 'next_transition': 4063}.
<a id="trace-4140"></a>
- 40.00s–40.00s (×1), actor 1, squad 0 (trace 4140): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 4130. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44795214277523354, 'next_transition': 4317}.
<a id="trace-4141"></a>
- 40.00s–40.00s (×1), actor 1, squad 0 (trace 4141): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 4130. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44795214277523354, 'next_transition': 4317}.
<a id="trace-4317"></a>
<a id="trace-4341"></a>
<a id="trace-4352"></a>
<a id="trace-4362"></a>
<a id="trace-4385"></a>
<a id="trace-4393"></a>
<a id="trace-4403"></a>
<a id="trace-4412"></a>
<a id="trace-4522"></a>
<a id="trace-4541"></a>
<a id="trace-4549"></a>
- 40.25s–46.75s (×11), actor 5, squad 0 (trace 4317): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4131. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7232997995325674, 'next_transition': 4341}.
<a id="trace-4555"></a>
- 47.05s–47.05s (×1), actor 1, squad 0 (trace 4555): NeedSupport. Knowledge: actor memory at 45.00s, trace 4443. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149854138773454, 'next_transition': 4565}.
<a id="trace-4565"></a>
<a id="trace-4573"></a>
<a id="trace-4603"></a>
<a id="trace-4616"></a>
<a id="trace-4624"></a>
<a id="trace-4705"></a>
<a id="trace-4717"></a>
<a id="trace-4732"></a>
<a id="trace-4752"></a>
- 47.25s–52.25s (×9), actor 5, squad 0 (trace 4565): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4444. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7123680065834049, 'next_transition': 4573}.
<a id="trace-4757"></a>
- 52.45s–52.45s (×1), actor 1, squad 0 (trace 4757): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 4634. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4768}.
<a id="trace-4758"></a>
- 52.45s–52.45s (×1), actor 1, squad 0 (trace 4758): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 4634. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4768}.
<a id="trace-4768"></a>
<a id="trace-4779"></a>
<a id="trace-4783"></a>
<a id="trace-4794"></a>
<a id="trace-4801"></a>
<a id="trace-4875"></a>
<a id="trace-4883"></a>
<a id="trace-4891"></a>
<a id="trace-4897"></a>
<a id="trace-4903"></a>
<a id="trace-4911"></a>
<a id="trace-4915"></a>
<a id="trace-4924"></a>
<a id="trace-4932"></a>
<a id="trace-5002"></a>
<a id="trace-5007"></a>
<a id="trace-5014"></a>
<a id="trace-5020"></a>
<a id="trace-5027"></a>
<a id="trace-5035"></a>
<a id="trace-5047"></a>
<a id="trace-5054"></a>
<a id="trace-5062"></a>
<a id="trace-5069"></a>
<a id="trace-5139"></a>
<a id="trace-5145"></a>
<a id="trace-5166"></a>
<a id="trace-5171"></a>
<a id="trace-5196"></a>
<a id="trace-5207"></a>
<a id="trace-5276"></a>
<a id="trace-5282"></a>
<a id="trace-5292"></a>
<a id="trace-5312"></a>
- 52.75s–72.25s (×34), actor 5, squad 0 (trace 4768): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 4635. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1549807598205046, 'next_transition': 4779}.
<a id="trace-5320"></a>
- 73.00s–73.00s (×1), actor 1, squad 0 (trace 5320): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 70.00s, trace 5211. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5330}.
<a id="trace-5330"></a>
<a id="trace-5337"></a>
<a id="trace-5347"></a>
<a id="trace-5357"></a>
<a id="trace-5429"></a>
<a id="trace-5437"></a>
<a id="trace-5446"></a>
<a id="trace-5454"></a>
<a id="trace-5462"></a>
<a id="trace-5468"></a>
<a id="trace-5486"></a>
<a id="trace-5574"></a>
<a id="trace-5588"></a>
<a id="trace-5604"></a>
<a id="trace-5609"></a>
<a id="trace-5621"></a>
<a id="trace-5626"></a>
<a id="trace-5637"></a>
<a id="trace-5648"></a>
<a id="trace-5719"></a>
<a id="trace-5741"></a>
- 73.25s–86.75s (×21), actor 5, squad 0 (trace 5330): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 5212. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5337}.
<a id="trace-595"></a>
- 87.55s–87.55s (×1), actor 5, squad 0 (events line 595): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5752"></a>
- 87.55s–87.55s (×1), actor 5, squad 0 (trace 5752): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.325087 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 87.55s, trace 5752. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5758}.
<a id="trace-5753"></a>
- 87.55s–87.55s (×1), actor 5, squad 0 (trace 5753): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.325087 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 87.55s, trace 5753. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5758}.
<a id="trace-5758"></a>
<a id="trace-5767"></a>
<a id="trace-5782"></a>
<a id="trace-5791"></a>
<a id="trace-5863"></a>
<a id="trace-5868"></a>
<a id="trace-5877"></a>
<a id="trace-5884"></a>
<a id="trace-5894"></a>
<a id="trace-5902"></a>
- 87.75s–92.75s (×10), actor 5, squad 0 (trace 5758): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.55s, trace 5753. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5767}.
<a id="trace-5905"></a>
- 92.90s–92.90s (×1), actor 1, squad 0 (trace 5905): MoveTactically. Knowledge: actor memory at 90.00s, trace 5796. Next observer evidence: None.
<a id="trace-5906"></a>
- 92.90s–92.90s (×1), actor 1, squad 0 (trace 5906): received platoon directive. Knowledge: actor memory at 90.00s, trace 5796. Next observer evidence: None.
<a id="trace-5910"></a>
- 92.95s–92.95s (×1), actor 1, squad 0 (trace 5910): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 5796. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5916}.
<a id="trace-5916"></a>
<a id="trace-5930"></a>
<a id="trace-5946"></a>
<a id="trace-6024"></a>
<a id="trace-6040"></a>
<a id="trace-6048"></a>
<a id="trace-6060"></a>
<a id="trace-6066"></a>
<a id="trace-6078"></a>
<a id="trace-6086"></a>
<a id="trace-6098"></a>
<a id="trace-6190"></a>
<a id="trace-6197"></a>
<a id="trace-6209"></a>
<a id="trace-6216"></a>
<a id="trace-6230"></a>
<a id="trace-6238"></a>
<a id="trace-6329"></a>
<a id="trace-6347"></a>
<a id="trace-6353"></a>
<a id="trace-6366"></a>
<a id="trace-6383"></a>
<a id="trace-6389"></a>
<a id="trace-6464"></a>
<a id="trace-6472"></a>
<a id="trace-6480"></a>
<a id="trace-6494"></a>
<a id="trace-6504"></a>
<a id="trace-6513"></a>
<a id="trace-6524"></a>
<a id="trace-6602"></a>
<a id="trace-6608"></a>
<a id="trace-6619"></a>
<a id="trace-6635"></a>
<a id="trace-6642"></a>
<a id="trace-6650"></a>
<a id="trace-6669"></a>
<a id="trace-6741"></a>
<a id="trace-6748"></a>
<a id="trace-6759"></a>
<a id="trace-6766"></a>
<a id="trace-6777"></a>
<a id="trace-6796"></a>
<a id="trace-6804"></a>
<a id="trace-6812"></a>
<a id="trace-6817"></a>
<a id="trace-6891"></a>
<a id="trace-6901"></a>
<a id="trace-6908"></a>
<a id="trace-6918"></a>
<a id="trace-6925"></a>
<a id="trace-6945"></a>
<a id="trace-6956"></a>
<a id="trace-6966"></a>
<a id="trace-7035"></a>
<a id="trace-7048"></a>
<a id="trace-7056"></a>
<a id="trace-7065"></a>
<a id="trace-7079"></a>
<a id="trace-7085"></a>
<a id="trace-7102"></a>
<a id="trace-7183"></a>
<a id="trace-7191"></a>
<a id="trace-7200"></a>
<a id="trace-7215"></a>
<a id="trace-7225"></a>
<a id="trace-7231"></a>
<a id="trace-7240"></a>
<a id="trace-7246"></a>
<a id="trace-7314"></a>
<a id="trace-7323"></a>
<a id="trace-7331"></a>
<a id="trace-7342"></a>
<a id="trace-7355"></a>
<a id="trace-7369"></a>
<a id="trace-7376"></a>
<a id="trace-7394"></a>
<a id="trace-7463"></a>
<a id="trace-7475"></a>
<a id="trace-7485"></a>
<a id="trace-7493"></a>
<a id="trace-7509"></a>
<a id="trace-7515"></a>
<a id="trace-7535"></a>
<a id="trace-7606"></a>
<a id="trace-7611"></a>
<a id="trace-7623"></a>
<a id="trace-7644"></a>
<a id="trace-7652"></a>
<a id="trace-7660"></a>
<a id="trace-7669"></a>
<a id="trace-7675"></a>
<a id="trace-7746"></a>
<a id="trace-7753"></a>
<a id="trace-7763"></a>
- 93.25s–156.30s (×95), actor 5, squad 0 (trace 5916): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5797. Next observer evidence: {'until': 93.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5930}.
<a id="trace-922"></a>
- 156.60s–156.60s (×1), actor 5, squad 0 (events line 922): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7768"></a>
- 156.60s–156.60s (×1), actor 5, squad 0 (trace 7768): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 156.60s, trace 7768. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7778}.
<a id="trace-7769"></a>
- 156.60s–156.60s (×1), actor 5, squad 0 (trace 7769): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 156.60s, trace 7769. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7778}.
<a id="trace-7778"></a>
<a id="trace-7787"></a>
<a id="trace-7800"></a>
<a id="trace-7810"></a>
- 156.80s–158.80s (×4), actor 5, squad 0 (trace 7778): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 156.60s, trace 7769. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7787}.
<a id="trace-7815"></a>
- 159.05s–159.05s (×1), actor 1, squad 0 (trace 7815): traveling. Knowledge: actor memory at 155.00s, trace 7681. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7874}.
<a id="trace-7816"></a>
- 159.05s–159.05s (×1), actor 1, squad 0 (trace 7816): current contact unknown for 10 s. Knowledge: actor memory at 155.00s, trace 7681. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7874}.
<a id="trace-7874"></a>
<a id="trace-7884"></a>
<a id="trace-7958"></a>
<a id="trace-7970"></a>
<a id="trace-7985"></a>
<a id="trace-8009"></a>
- 159.30s–162.30s (×6), actor 5, squad 0 (trace 7874): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 156.60s, trace 7769. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0525029522979417, 'next_transition': 7884}.
<a id="trace-8012"></a>
- 162.55s–162.55s (×1), actor 1, squad 0 (trace 8012): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 160.00s, trace 7889. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000876313609337, 'next_transition': 8018}.
<a id="trace-8013"></a>
- 162.55s–162.55s (×1), actor 1, squad 0 (trace 8013): MoveTactically. Knowledge: actor memory at 160.00s, trace 7889. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000876313609337, 'next_transition': 8018}.
<a id="trace-8014"></a>
- 162.55s–162.55s (×1), actor 1, squad 0 (trace 8014): traveling overwatch. Knowledge: actor memory at 160.00s, trace 7889. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000876313609337, 'next_transition': 8018}.
<a id="trace-8015"></a>
- 162.55s–162.55s (×1), actor 1, squad 0 (trace 8015): . Knowledge: actor memory at 160.00s, trace 7889. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000876313609337, 'next_transition': 8018}.
<a id="trace-8018"></a>
<a id="trace-8030"></a>
<a id="trace-8051"></a>
<a id="trace-8137"></a>
<a id="trace-8147"></a>
<a id="trace-8174"></a>
<a id="trace-8179"></a>
<a id="trace-8194"></a>
<a id="trace-8209"></a>
<a id="trace-8226"></a>
<a id="trace-8303"></a>
<a id="trace-8313"></a>
<a id="trace-8332"></a>
<a id="trace-8340"></a>
<a id="trace-8345"></a>
<a id="trace-8356"></a>
<a id="trace-8372"></a>
<a id="trace-8379"></a>
<a id="trace-8453"></a>
<a id="trace-8458"></a>
<a id="trace-8466"></a>
<a id="trace-8475"></a>
<a id="trace-8489"></a>
<a id="trace-8499"></a>
<a id="trace-8514"></a>
<a id="trace-8521"></a>
<a id="trace-8597"></a>
<a id="trace-8603"></a>
<a id="trace-8613"></a>
<a id="trace-8619"></a>
<a id="trace-8628"></a>
<a id="trace-8635"></a>
<a id="trace-8643"></a>
<a id="trace-8650"></a>
<a id="trace-8659"></a>
<a id="trace-8665"></a>
<a id="trace-8738"></a>
<a id="trace-8746"></a>
<a id="trace-8757"></a>
<a id="trace-8764"></a>
<a id="trace-8775"></a>
<a id="trace-8789"></a>
<a id="trace-8798"></a>
<a id="trace-8806"></a>
<a id="trace-8814"></a>
<a id="trace-8885"></a>
<a id="trace-8890"></a>
<a id="trace-8900"></a>
<a id="trace-8906"></a>
<a id="trace-8916"></a>
<a id="trace-8923"></a>
<a id="trace-8934"></a>
<a id="trace-8940"></a>
<a id="trace-8949"></a>
<a id="trace-8960"></a>
<a id="trace-9034"></a>
<a id="trace-9041"></a>
<a id="trace-9049"></a>
<a id="trace-9055"></a>
<a id="trace-9077"></a>
<a id="trace-9082"></a>
<a id="trace-9091"></a>
<a id="trace-9098"></a>
<a id="trace-9180"></a>
<a id="trace-9190"></a>
<a id="trace-9202"></a>
<a id="trace-9210"></a>
<a id="trace-9215"></a>
<a id="trace-9224"></a>
<a id="trace-9229"></a>
<a id="trace-9244"></a>
<a id="trace-9317"></a>
<a id="trace-9322"></a>
<a id="trace-9330"></a>
<a id="trace-9340"></a>
<a id="trace-9350"></a>
<a id="trace-9359"></a>
<a id="trace-9369"></a>
<a id="trace-9386"></a>
<a id="trace-9464"></a>
<a id="trace-9469"></a>
<a id="trace-9478"></a>
<a id="trace-9484"></a>
<a id="trace-9491"></a>
<a id="trace-9499"></a>
<a id="trace-9514"></a>
<a id="trace-9527"></a>
<a id="trace-9534"></a>
<a id="trace-9608"></a>
<a id="trace-9631"></a>
<a id="trace-9639"></a>
<a id="trace-9644"></a>
<a id="trace-9652"></a>
<a id="trace-9666"></a>
<a id="trace-9675"></a>
<a id="trace-9747"></a>
<a id="trace-9752"></a>
<a id="trace-9773"></a>
<a id="trace-9787"></a>
<a id="trace-9799"></a>
<a id="trace-9805"></a>
<a id="trace-9813"></a>
<a id="trace-9821"></a>
<a id="trace-9892"></a>
- 162.80s–225.30s (×104), actor 5, squad 0 (trace 8018): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 7890. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000876313609287, 'next_transition': 8030}.
<a id="trace-1268"></a>
- 225.65s–225.65s (×1), actor 5, squad 0 (events line 1268): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9897"></a>
- 225.65s–225.65s (×1), actor 5, squad 0 (trace 9897): renew committed intent (75 s lifetime). Knowledge: actor memory at 225.65s, trace 9897. Next observer evidence: {'until': 225.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9901}.
<a id="trace-9901"></a>
<a id="trace-9909"></a>
<a id="trace-9924"></a>
<a id="trace-9930"></a>
<a id="trace-9942"></a>
<a id="trace-9951"></a>
<a id="trace-9966"></a>
<a id="trace-10046"></a>
- 225.80s–230.80s (×8), actor 5, squad 0 (trace 9901): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.65s, trace 9897. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9909}.
<a id="trace-10050"></a>
- 231.00s–231.00s (×1), actor 1, squad 0 (trace 10050): received platoon directive. Knowledge: actor memory at 230.00s, trace 9973. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10056}.
<a id="trace-10056"></a>
<a id="trace-10064"></a>
<a id="trace-10071"></a>
<a id="trace-10076"></a>
<a id="trace-10090"></a>
<a id="trace-10102"></a>
<a id="trace-10110"></a>
<a id="trace-10183"></a>
<a id="trace-10198"></a>
<a id="trace-10207"></a>
<a id="trace-10214"></a>
<a id="trace-10224"></a>
<a id="trace-10233"></a>
<a id="trace-10238"></a>
<a id="trace-10247"></a>
<a id="trace-10254"></a>
<a id="trace-10327"></a>
<a id="trace-10333"></a>
<a id="trace-10350"></a>
<a id="trace-10357"></a>
<a id="trace-10382"></a>
<a id="trace-10391"></a>
<a id="trace-10397"></a>
<a id="trace-10471"></a>
<a id="trace-10477"></a>
<a id="trace-10488"></a>
<a id="trace-10502"></a>
<a id="trace-10516"></a>
<a id="trace-10524"></a>
<a id="trace-10532"></a>
<a id="trace-10541"></a>
<a id="trace-10614"></a>
<a id="trace-10620"></a>
<a id="trace-10630"></a>
<a id="trace-10637"></a>
<a id="trace-10648"></a>
<a id="trace-10654"></a>
<a id="trace-10664"></a>
<a id="trace-10669"></a>
<a id="trace-10678"></a>
<a id="trace-10688"></a>
<a id="trace-10759"></a>
<a id="trace-10766"></a>
<a id="trace-10780"></a>
<a id="trace-10789"></a>
<a id="trace-10797"></a>
<a id="trace-10808"></a>
<a id="trace-10814"></a>
<a id="trace-10831"></a>
<a id="trace-10910"></a>
<a id="trace-10920"></a>
<a id="trace-10938"></a>
<a id="trace-10948"></a>
<a id="trace-10953"></a>
<a id="trace-10964"></a>
<a id="trace-10972"></a>
<a id="trace-11059"></a>
<a id="trace-11069"></a>
<a id="trace-11086"></a>
<a id="trace-11098"></a>
<a id="trace-11107"></a>
<a id="trace-11113"></a>
<a id="trace-11191"></a>
<a id="trace-11206"></a>
<a id="trace-11217"></a>
<a id="trace-11225"></a>
<a id="trace-11234"></a>
<a id="trace-11244"></a>
<a id="trace-11255"></a>
<a id="trace-11261"></a>
<a id="trace-11333"></a>
<a id="trace-11347"></a>
<a id="trace-11353"></a>
<a id="trace-11362"></a>
<a id="trace-11367"></a>
<a id="trace-11375"></a>
<a id="trace-11383"></a>
<a id="trace-11395"></a>
<a id="trace-11404"></a>
<a id="trace-11476"></a>
<a id="trace-11495"></a>
<a id="trace-11509"></a>
<a id="trace-11514"></a>
<a id="trace-11523"></a>
<a id="trace-11528"></a>
<a id="trace-11536"></a>
<a id="trace-11545"></a>
<a id="trace-11616"></a>
<a id="trace-11623"></a>
<a id="trace-11636"></a>
<a id="trace-11643"></a>
<a id="trace-11652"></a>
<a id="trace-11659"></a>
<a id="trace-11671"></a>
<a id="trace-11677"></a>
<a id="trace-11686"></a>
<a id="trace-11692"></a>
<a id="trace-11763"></a>
<a id="trace-11777"></a>
<a id="trace-11786"></a>
<a id="trace-11793"></a>
<a id="trace-11799"></a>
- 231.30s–292.80s (×102), actor 5, squad 0 (trace 10056): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 9974. Next observer evidence: {'until': 231.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10064}.
<a id="trace-1591"></a>
- 294.70s–294.70s (×1), actor 5, squad 0 (events line 1591): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11832"></a>
- 294.70s–294.70s (×1), actor 5, squad 0 (trace 11832): renew committed intent (75 s lifetime). Knowledge: actor memory at 294.70s, trace 11832. Next observer evidence: {'until': 294.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11836}.
<a id="trace-11836"></a>
<a id="trace-11916"></a>
<a id="trace-11924"></a>
<a id="trace-11932"></a>
<a id="trace-11939"></a>
<a id="trace-11953"></a>
<a id="trace-11958"></a>
<a id="trace-11969"></a>
<a id="trace-12048"></a>
<a id="trace-12059"></a>
<a id="trace-12070"></a>
<a id="trace-12084"></a>
<a id="trace-12093"></a>
<a id="trace-12102"></a>
<a id="trace-12121"></a>
<a id="trace-12193"></a>
<a id="trace-12199"></a>
<a id="trace-12226"></a>
<a id="trace-12265"></a>
<a id="trace-12337"></a>
<a id="trace-12342"></a>
<a id="trace-12350"></a>
<a id="trace-12356"></a>
<a id="trace-12367"></a>
<a id="trace-12381"></a>
<a id="trace-12396"></a>
<a id="trace-12405"></a>
<a id="trace-12486"></a>
<a id="trace-12494"></a>
<a id="trace-12500"></a>
<a id="trace-12511"></a>
<a id="trace-12539"></a>
<a id="trace-12545"></a>
<a id="trace-12626"></a>
<a id="trace-12633"></a>
<a id="trace-12642"></a>
<a id="trace-12652"></a>
<a id="trace-12658"></a>
<a id="trace-12668"></a>
<a id="trace-12674"></a>
<a id="trace-12686"></a>
<a id="trace-12693"></a>
<a id="trace-12765"></a>
<a id="trace-12771"></a>
<a id="trace-12786"></a>
<a id="trace-12796"></a>
<a id="trace-12803"></a>
<a id="trace-12812"></a>
<a id="trace-12826"></a>
<a id="trace-12908"></a>
<a id="trace-12914"></a>
<a id="trace-12924"></a>
<a id="trace-12939"></a>
<a id="trace-12946"></a>
<a id="trace-12963"></a>
<a id="trace-12971"></a>
<a id="trace-12977"></a>
<a id="trace-13050"></a>
<a id="trace-13055"></a>
<a id="trace-13065"></a>
<a id="trace-13073"></a>
<a id="trace-13088"></a>
<a id="trace-13106"></a>
<a id="trace-13123"></a>
<a id="trace-13196"></a>
<a id="trace-13201"></a>
<a id="trace-13209"></a>
<a id="trace-13215"></a>
<a id="trace-13230"></a>
<a id="trace-13244"></a>
<a id="trace-13256"></a>
<a id="trace-13336"></a>
<a id="trace-13353"></a>
<a id="trace-13359"></a>
<a id="trace-13370"></a>
<a id="trace-13375"></a>
<a id="trace-13385"></a>
<a id="trace-13390"></a>
<a id="trace-13400"></a>
<a id="trace-13406"></a>
<a id="trace-13477"></a>
<a id="trace-13485"></a>
<a id="trace-13495"></a>
<a id="trace-13504"></a>
<a id="trace-13513"></a>
<a id="trace-13531"></a>
<a id="trace-13552"></a>
<a id="trace-13634"></a>
<a id="trace-13650"></a>
<a id="trace-13657"></a>
<a id="trace-13669"></a>
<a id="trace-13676"></a>
<a id="trace-13685"></a>
<a id="trace-13693"></a>
- 294.80s–359.80s (×94), actor 5, squad 0 (trace 11836): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 294.70s, trace 11832. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11916}.

## Net delivery

82 matched order/radio deliveries; 246 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.607s; maximum 5.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 1094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 1095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1146: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1155: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2110: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2111: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2112: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2113: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2114: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2115: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2867: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2871: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2872: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2873: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2874: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2875: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2876: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2877: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3593: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3594: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3597: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3598: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3599: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3600: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3601: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3602: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3603: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3796: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3798: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3799: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3800: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3801: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3802: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3803: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3804: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3805: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4130: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4131: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4132: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4133: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4134: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4135: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4136: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4137: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4138: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4139: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4443: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4444: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4445: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4446: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4447: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4448: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4449: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4450: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4451: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4452: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 4634: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 4635: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 4636: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 4637: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 4638: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 4639: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 4640: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 4641: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 4642: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 4806: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 4807: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 4808: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 4809: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 4810: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 4811: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 4812: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 4813: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 4814: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 4936: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4937: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4938: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4939: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4940: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 4941: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4942: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4943: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 4944: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 5075: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 5076: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 5077: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 5078: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 5079: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 5080: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 5081: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 5082: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 5083: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 5211: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 5212: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 5213: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 5214: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 5215: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 5216: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 5217: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 5218: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 5219: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 5361: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 5362: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 5363: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 5364: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 5365: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 5366: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 5367: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 5368: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 5369: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 5510: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5511: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5512: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5513: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5514: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 5515: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5516: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5517: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 5518: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5652: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5653: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5654: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5655: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5656: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5657: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5658: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5659: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5660: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.55s leader 5, trace 5752: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.55s leader 5, trace 5753: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5796: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5797: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5798: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5799: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5800: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5801: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5802: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5803: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5804: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5952: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5953: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5954: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5955: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5956: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 5957: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5958: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5959: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5960: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 6109: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 6110: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 6111: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 6112: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 6113: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 6114: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 6115: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 6116: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 6117: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 6249: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6250: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 6251: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 6252: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6253: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 6254: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6255: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6256: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 6257: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6394: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6395: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6396: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6397: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6398: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 6399: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6400: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6401: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 6402: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6534: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6535: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6536: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6537: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6538: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 6539: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6540: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6541: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6542: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6674: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6675: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6676: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6677: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6678: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 6679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6680: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6681: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6682: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6823: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6824: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6825: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6826: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6827: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 6828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6829: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6830: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6831: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 6969: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6970: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6971: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6972: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6973: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 6974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6975: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6976: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 6977: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7105: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7106: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 7107: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 7108: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7109: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 7110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7111: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7112: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 7113: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7250: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7251: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 7252: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7253: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7254: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 7255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7256: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7257: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 7258: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7397: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7398: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 7399: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7400: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7401: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 7402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7403: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7404: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 7405: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7542: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7543: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 7544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7545: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7546: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 7547: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 7681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 7683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 7686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 7689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 156.60s leader 5, trace 7768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 156.60s leader 5, trace 7769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 7889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 7890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 7891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 7892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 7893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 7894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 7895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 7896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 7897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 8071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 8072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 8073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 8074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 8075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 8078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 8232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 8233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 8234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 8235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 8236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 8237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 8238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 8239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 8240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 8384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 8385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 8386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 8387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 8388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 8389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 8390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 8391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 8392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 8527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 8528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 8529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 8530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 8531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 8532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 8533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 8534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 8535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 8672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 8673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 8674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 8675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 8676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 8677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 8678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 8679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 8680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 8819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 8820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 8821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 8822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 8823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 8824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 8825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 8826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 8827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 8966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 8967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 8968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 8969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 8970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 8971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 8972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 8973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 8974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 9107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 9108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 9109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 9110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 9111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 9112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 9113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 9114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 9115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 9249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 9250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 9251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 9252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 9253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 9254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 9255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 9256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 9257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 9397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 9398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 9399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 9400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 9401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 9402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 9403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 9404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 9405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 9543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 9544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 9545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 9546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 9547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 9548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 9549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 9550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 9551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 9681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 9682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 9683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 9684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 9685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 9686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 9687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 9688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 9689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 9826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 9827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 9828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 9829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 9830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 9831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 9832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 9833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 9834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.65s leader 5, trace 9897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 9973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 9974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 9975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 9976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 9977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 9978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 9979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 9980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 9981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 10115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 10116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 10117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 10118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 10119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 10120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 10121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 10122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 10123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 10260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 10261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 10262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 10263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 10264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 10265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 10266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 10267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 10268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 10406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 10407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 10408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 10409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 10410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 10411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 10412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 10413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 10414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 10546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 10547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 10548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 10549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 10550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 10551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 10552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 10553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 10554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 10693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 10694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 10695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 10696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 10697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 10698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 10699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 10700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 10701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 10838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 10839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 10840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 10841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 10842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 10843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 10844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 10845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 10846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 10978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 10979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 10980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 10981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 10982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 10983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 10984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 10985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 10986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 11119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 11120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 11121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 11122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 11123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 11124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 11125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 11126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 11127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 11268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 11269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 11270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 11271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 11272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 11273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 11274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 11275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 11276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 11409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 11410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 11411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 11412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 11413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 11414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 11415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 11416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 11417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 11550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 11551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 11552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 11553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 11554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 11555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 11556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 11557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 11558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 11698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 11699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 11700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 11701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 11702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 11703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 11704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 11705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 11706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 294.70s leader 5, trace 11832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 11842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 11843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 11844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 11845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 11846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 11847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 11848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 11849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 11850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 11980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 11981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 11982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 11983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 11984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 11985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 11986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 11987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 11988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 12128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 12129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 12130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 12131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 12132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 12133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 12134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 12135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 12136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 12270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 12271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 12272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 12273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 12274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 12275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 12276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 12277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 12278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 12410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 12411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 12412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 12413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 12414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 12415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 12416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 12417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 12418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 12552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 12553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 12554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 12555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 12556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 12557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 12558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 12559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 12560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 12698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 12699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 12700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 12701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 12702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 12703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 12704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 12705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 12706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 12841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 12842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 12843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 12844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 12845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 12846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 12847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 12848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 12849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 12985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 12986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 12987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 12988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 12989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 12990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 12991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 12992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 12993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 13128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 13129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 13130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 13131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 13132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 13133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 13134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 13135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 13136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 13268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 13269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 13270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 13271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 13272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 13273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 13274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 13275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 13276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 13412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 13413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 13414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 13415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 13416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 13417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 13418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 13419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 13420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 13557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 13558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 13559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 13560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 13561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 13562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 13563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 13564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 13565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 13699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 13700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 13701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 13702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 13703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 13704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 13705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 13706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 13707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Tern killed in action
- 1: Reed incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
