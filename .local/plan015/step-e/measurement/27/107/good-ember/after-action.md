# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/27/107/good-ember/battle-107-1789674269481185063`

## Battle summary

**Draw** · 360 s · 112 shots.

### Turning points

- 17.7s, squad 4: contact (events line 185). First recorded contact.
- 45.0s, squad 0: help call ([trace 3343](#trace-3343)). No completion observed before termination.
- 62.2s, squad 0: withdrawal ([trace 3975](#trace-3975)). 90.4s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 24 shots, 1/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 88 shots, 1/6 lost.

### Decisions and attribution

At 18.0s, squad 0 chose took cover and returned fire ([trace 1158](#trace-1158)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 12.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 908](#trace-908)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 907](#trace-907)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099994482796986, 'next_transition': 925}.
- 39.9s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.607174 retreat threshold=0.220000 initiative=requires intent ([trace 3145](#trace-3145)). Following evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3221}.

### Communication

97 matched deliveries (mean 0.34s, max 5.85s); 232 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.70s, squad 4, contact, evidence events line 185: First recorded contact; .
- 44.95s, squad 0, help call, evidence 3343: NeedSupport; No completion observed before termination.
- 62.20s, squad 0, withdrawal, evidence 3975: BreakContact: believed ratio at least two without superiority; 90.4s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.39099580396739, 'next_transition': 515}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.39099580396739, 'next_transition': 515}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.39099580396739, 'next_transition': 515}.
<a id="trace-334"></a>
<a id="trace-353"></a>
<a id="trace-369"></a>
<a id="trace-384"></a>
<a id="trace-395"></a>
<a id="trace-411"></a>
<a id="trace-430"></a>
<a id="trace-517"></a>
<a id="trace-539"></a>
<a id="trace-557"></a>
<a id="trace-571"></a>
<a id="trace-590"></a>
<a id="trace-614"></a>
<a id="trace-639"></a>
<a id="trace-652"></a>
<a id="trace-659"></a>
<a id="trace-741"></a>
<a id="trace-748"></a>
<a id="trace-760"></a>
<a id="trace-890"></a>
<a id="trace-904"></a>
<a id="trace-927"></a>
<a id="trace-946"></a>
<a id="trace-962"></a>
<a id="trace-989"></a>
<a id="trace-1007"></a>
<a id="trace-1087"></a>
<a id="trace-1100"></a>
<a id="trace-1116"></a>
<a id="trace-1131"></a>
<a id="trace-1140"></a>
<a id="trace-1153"></a>
<a id="trace-1365"></a>
<a id="trace-1383"></a>
<a id="trace-1398"></a>
<a id="trace-1415"></a>
<a id="trace-1497"></a>
<a id="trace-1525"></a>
<a id="trace-1540"></a>
<a id="trace-1554"></a>
<a id="trace-1781"></a>
<a id="trace-1796"></a>
<a id="trace-2038"></a>
<a id="trace-2053"></a>
<a id="trace-2088"></a>
<a id="trace-2120"></a>
<a id="trace-2209"></a>
<a id="trace-2243"></a>
<a id="trace-2272"></a>
<a id="trace-2288"></a>
<a id="trace-2310"></a>
<a id="trace-2318"></a>
<a id="trace-2333"></a>
<a id="trace-2348"></a>
<a id="trace-2360"></a>
<a id="trace-2371"></a>
<a id="trace-2631"></a>
<a id="trace-2647"></a>
<a id="trace-2668"></a>
<a id="trace-2873"></a>
<a id="trace-2890"></a>
<a id="trace-2927"></a>
<a id="trace-2944"></a>
<a id="trace-2961"></a>
<a id="trace-2983"></a>
<a id="trace-2998"></a>
<a id="trace-3077"></a>
<a id="trace-3083"></a>
<a id="trace-3092"></a>
<a id="trace-3099"></a>
<a id="trace-3107"></a>
<a id="trace-3116"></a>
<a id="trace-3123"></a>
<a id="trace-3128"></a>
<a id="trace-3135"></a>
<a id="trace-3143"></a>
<a id="trace-3223"></a>
<a id="trace-3236"></a>
<a id="trace-3244"></a>
<a id="trace-3256"></a>
<a id="trace-3267"></a>
<a id="trace-3281"></a>
<a id="trace-3297"></a>
<a id="trace-3306"></a>
<a id="trace-3322"></a>
<a id="trace-3339"></a>
<a id="trace-3423"></a>
<a id="trace-3436"></a>
<a id="trace-3453"></a>
<a id="trace-3463"></a>
<a id="trace-3470"></a>
<a id="trace-3478"></a>
<a id="trace-3484"></a>
<a id="trace-3490"></a>
<a id="trace-3499"></a>
<a id="trace-3506"></a>
<a id="trace-3581"></a>
<a id="trace-3589"></a>
<a id="trace-3597"></a>
<a id="trace-3605"></a>
<a id="trace-3619"></a>
<a id="trace-3632"></a>
<a id="trace-3642"></a>
<a id="trace-3650"></a>
<a id="trace-3662"></a>
<a id="trace-3673"></a>
<a id="trace-3747"></a>
<a id="trace-3757"></a>
<a id="trace-3773"></a>
<a id="trace-3786"></a>
<a id="trace-3799"></a>
<a id="trace-3812"></a>
<a id="trace-3831"></a>
<a id="trace-3845"></a>
<a id="trace-3860"></a>
<a id="trace-3866"></a>
<a id="trace-3939"></a>
<a id="trace-3950"></a>
<a id="trace-3963"></a>
<a id="trace-3971"></a>
<a id="trace-4136"></a>
<a id="trace-4150"></a>
<a id="trace-4166"></a>
<a id="trace-4180"></a>
<a id="trace-4195"></a>
<a id="trace-4204"></a>
<a id="trace-4285"></a>
<a id="trace-4293"></a>
<a id="trace-4301"></a>
<a id="trace-4310"></a>
<a id="trace-4320"></a>
<a id="trace-4327"></a>
<a id="trace-4344"></a>
<a id="trace-4355"></a>
<a id="trace-4371"></a>
<a id="trace-4377"></a>
<a id="trace-4449"></a>
<a id="trace-4459"></a>
<a id="trace-4471"></a>
<a id="trace-4477"></a>
<a id="trace-4495"></a>
<a id="trace-4505"></a>
<a id="trace-4521"></a>
<a id="trace-4529"></a>
<a id="trace-4540"></a>
<a id="trace-4548"></a>
<a id="trace-4620"></a>
<a id="trace-4628"></a>
<a id="trace-4643"></a>
<a id="trace-4651"></a>
<a id="trace-4668"></a>
<a id="trace-4682"></a>
<a id="trace-4701"></a>
<a id="trace-4721"></a>
<a id="trace-4734"></a>
<a id="trace-4741"></a>
<a id="trace-4825"></a>
<a id="trace-4832"></a>
<a id="trace-4847"></a>
<a id="trace-4853"></a>
<a id="trace-4862"></a>
<a id="trace-4872"></a>
<a id="trace-4880"></a>
<a id="trace-4887"></a>
<a id="trace-4898"></a>
<a id="trace-4906"></a>
<a id="trace-4978"></a>
<a id="trace-4985"></a>
<a id="trace-4997"></a>
<a id="trace-5001"></a>
<a id="trace-5011"></a>
<a id="trace-5016"></a>
<a id="trace-5025"></a>
<a id="trace-5032"></a>
<a id="trace-5042"></a>
<a id="trace-5049"></a>
<a id="trace-5118"></a>
<a id="trace-5131"></a>
<a id="trace-5145"></a>
<a id="trace-5164"></a>
<a id="trace-5176"></a>
<a id="trace-5183"></a>
<a id="trace-5202"></a>
<a id="trace-5206"></a>
<a id="trace-5214"></a>
<a id="trace-5219"></a>
<a id="trace-5288"></a>
<a id="trace-5294"></a>
<a id="trace-5303"></a>
<a id="trace-5313"></a>
<a id="trace-5324"></a>
<a id="trace-5329"></a>
<a id="trace-5341"></a>
<a id="trace-5348"></a>
<a id="trace-5360"></a>
<a id="trace-5365"></a>
<a id="trace-5435"></a>
<a id="trace-5439"></a>
<a id="trace-5449"></a>
<a id="trace-5457"></a>
<a id="trace-5465"></a>
<a id="trace-5471"></a>
<a id="trace-5481"></a>
<a id="trace-5487"></a>
<a id="trace-5498"></a>
<a id="trace-5506"></a>
<a id="trace-5580"></a>
<a id="trace-5587"></a>
<a id="trace-5597"></a>
<a id="trace-5605"></a>
<a id="trace-5614"></a>
<a id="trace-5620"></a>
<a id="trace-5628"></a>
<a id="trace-5634"></a>
<a id="trace-5645"></a>
<a id="trace-5651"></a>
<a id="trace-5722"></a>
<a id="trace-5729"></a>
<a id="trace-5743"></a>
<a id="trace-5754"></a>
<a id="trace-5764"></a>
<a id="trace-5770"></a>
<a id="trace-5779"></a>
<a id="trace-5785"></a>
<a id="trace-5793"></a>
<a id="trace-5799"></a>
<a id="trace-5869"></a>
<a id="trace-5876"></a>
<a id="trace-5891"></a>
<a id="trace-5901"></a>
<a id="trace-5916"></a>
<a id="trace-5924"></a>
<a id="trace-5935"></a>
<a id="trace-5945"></a>
<a id="trace-5956"></a>
<a id="trace-5962"></a>
<a id="trace-6031"></a>
<a id="trace-6037"></a>
<a id="trace-6045"></a>
<a id="trace-6053"></a>
<a id="trace-6064"></a>
<a id="trace-6070"></a>
<a id="trace-6079"></a>
<a id="trace-6086"></a>
<a id="trace-6098"></a>
<a id="trace-6103"></a>
<a id="trace-6176"></a>
<a id="trace-6184"></a>
<a id="trace-6191"></a>
<a id="trace-6199"></a>
<a id="trace-6210"></a>
<a id="trace-6215"></a>
<a id="trace-6224"></a>
<a id="trace-6229"></a>
<a id="trace-6240"></a>
<a id="trace-6245"></a>
<a id="trace-6317"></a>
<a id="trace-6323"></a>
<a id="trace-6333"></a>
<a id="trace-6347"></a>
<a id="trace-6357"></a>
<a id="trace-6363"></a>
<a id="trace-6372"></a>
<a id="trace-6376"></a>
<a id="trace-6384"></a>
<a id="trace-6388"></a>
<a id="trace-6459"></a>
<a id="trace-6464"></a>
<a id="trace-6473"></a>
<a id="trace-6484"></a>
<a id="trace-6495"></a>
<a id="trace-6504"></a>
<a id="trace-6514"></a>
<a id="trace-6522"></a>
<a id="trace-6530"></a>
<a id="trace-6535"></a>
<a id="trace-6604"></a>
<a id="trace-6609"></a>
<a id="trace-6618"></a>
<a id="trace-6627"></a>
<a id="trace-6636"></a>
<a id="trace-6641"></a>
<a id="trace-6651"></a>
<a id="trace-6658"></a>
<a id="trace-6669"></a>
<a id="trace-6677"></a>
<a id="trace-6748"></a>
<a id="trace-6753"></a>
<a id="trace-6760"></a>
<a id="trace-6770"></a>
<a id="trace-6780"></a>
<a id="trace-6785"></a>
<a id="trace-6794"></a>
<a id="trace-6799"></a>
<a id="trace-6809"></a>
<a id="trace-6816"></a>
<a id="trace-6887"></a>
<a id="trace-6895"></a>
<a id="trace-6905"></a>
<a id="trace-6915"></a>
<a id="trace-6926"></a>
<a id="trace-6931"></a>
<a id="trace-6941"></a>
<a id="trace-6946"></a>
<a id="trace-6954"></a>
<a id="trace-6959"></a>
<a id="trace-7029"></a>
<a id="trace-7036"></a>
<a id="trace-7044"></a>
<a id="trace-7056"></a>
<a id="trace-7069"></a>
<a id="trace-7074"></a>
<a id="trace-7086"></a>
<a id="trace-7093"></a>
<a id="trace-7102"></a>
<a id="trace-7107"></a>
<a id="trace-7177"></a>
<a id="trace-7182"></a>
<a id="trace-7190"></a>
<a id="trace-7201"></a>
<a id="trace-7210"></a>
<a id="trace-7216"></a>
<a id="trace-7227"></a>
<a id="trace-7233"></a>
<a id="trace-7248"></a>
<a id="trace-7256"></a>
<a id="trace-7329"></a>
<a id="trace-7335"></a>
<a id="trace-7343"></a>
<a id="trace-7512"></a>
<a id="trace-7523"></a>
<a id="trace-7540"></a>
<a id="trace-7552"></a>
<a id="trace-7567"></a>
<a id="trace-7580"></a>
<a id="trace-7594"></a>
<a id="trace-7825"></a>
<a id="trace-7842"></a>
<a id="trace-7861"></a>
<a id="trace-7878"></a>
<a id="trace-7893"></a>
<a id="trace-7908"></a>
<a id="trace-7927"></a>
<a id="trace-7935"></a>
<a id="trace-7946"></a>
<a id="trace-7958"></a>
<a id="trace-8037"></a>
<a id="trace-8043"></a>
<a id="trace-8063"></a>
<a id="trace-8076"></a>
<a id="trace-8094"></a>
<a id="trace-8103"></a>
<a id="trace-8117"></a>
<a id="trace-8126"></a>
<a id="trace-8137"></a>
<a id="trace-8145"></a>
<a id="trace-8217"></a>
<a id="trace-8225"></a>
<a id="trace-8233"></a>
<a id="trace-8238"></a>
<a id="trace-8247"></a>
<a id="trace-8253"></a>
<a id="trace-8265"></a>
<a id="trace-8274"></a>
<a id="trace-8286"></a>
<a id="trace-8292"></a>
<a id="trace-8367"></a>
<a id="trace-8373"></a>
<a id="trace-8380"></a>
<a id="trace-8386"></a>
<a id="trace-8395"></a>
<a id="trace-8399"></a>
<a id="trace-8407"></a>
<a id="trace-8413"></a>
<a id="trace-8424"></a>
<a id="trace-8432"></a>
<a id="trace-8509"></a>
<a id="trace-8514"></a>
<a id="trace-8525"></a>
<a id="trace-8532"></a>
<a id="trace-8540"></a>
<a id="trace-8546"></a>
<a id="trace-8555"></a>
<a id="trace-8560"></a>
<a id="trace-8568"></a>
<a id="trace-8574"></a>
<a id="trace-8649"></a>
<a id="trace-8654"></a>
<a id="trace-8664"></a>
<a id="trace-8670"></a>
<a id="trace-8681"></a>
<a id="trace-8690"></a>
<a id="trace-8699"></a>
<a id="trace-8705"></a>
<a id="trace-8714"></a>
<a id="trace-8720"></a>
<a id="trace-8793"></a>
<a id="trace-8798"></a>
<a id="trace-8806"></a>
<a id="trace-8811"></a>
<a id="trace-8821"></a>
<a id="trace-8827"></a>
<a id="trace-8838"></a>
<a id="trace-8847"></a>
<a id="trace-8858"></a>
<a id="trace-8868"></a>
<a id="trace-8941"></a>
<a id="trace-8945"></a>
<a id="trace-8953"></a>
<a id="trace-8958"></a>
<a id="trace-8968"></a>
<a id="trace-8973"></a>
<a id="trace-8982"></a>
<a id="trace-8988"></a>
<a id="trace-8997"></a>
<a id="trace-9007"></a>
<a id="trace-9082"></a>
<a id="trace-9090"></a>
<a id="trace-9100"></a>
<a id="trace-9105"></a>
<a id="trace-9114"></a>
<a id="trace-9119"></a>
<a id="trace-9129"></a>
<a id="trace-9134"></a>
<a id="trace-9143"></a>
<a id="trace-9150"></a>
<a id="trace-9224"></a>
<a id="trace-9230"></a>
<a id="trace-9239"></a>
<a id="trace-9247"></a>
<a id="trace-9259"></a>
<a id="trace-9263"></a>
<a id="trace-9274"></a>
<a id="trace-9278"></a>
<a id="trace-9288"></a>
<a id="trace-9295"></a>
<a id="trace-9368"></a>
<a id="trace-9372"></a>
<a id="trace-9380"></a>
<a id="trace-9387"></a>
<a id="trace-9395"></a>
<a id="trace-9402"></a>
<a id="trace-9415"></a>
<a id="trace-9419"></a>
<a id="trace-9431"></a>
<a id="trace-9440"></a>
<a id="trace-9514"></a>
<a id="trace-9519"></a>
<a id="trace-9527"></a>
<a id="trace-9531"></a>
<a id="trace-9540"></a>
<a id="trace-9546"></a>
<a id="trace-9555"></a>
<a id="trace-9560"></a>
<a id="trace-9571"></a>
<a id="trace-9579"></a>
<a id="trace-9655"></a>
<a id="trace-9663"></a>
<a id="trace-9674"></a>
<a id="trace-9679"></a>
<a id="trace-9688"></a>
<a id="trace-9693"></a>
<a id="trace-9702"></a>
<a id="trace-9708"></a>
<a id="trace-9716"></a>
<a id="trace-9724"></a>
<a id="trace-9798"></a>
<a id="trace-9803"></a>
<a id="trace-9813"></a>
<a id="trace-9821"></a>
<a id="trace-9834"></a>
<a id="trace-9840"></a>
<a id="trace-9849"></a>
<a id="trace-9854"></a>
<a id="trace-9863"></a>
<a id="trace-9871"></a>
<a id="trace-9943"></a>
<a id="trace-9949"></a>
<a id="trace-9957"></a>
<a id="trace-9962"></a>
<a id="trace-9972"></a>
<a id="trace-9979"></a>
<a id="trace-9992"></a>
<a id="trace-10000"></a>
<a id="trace-10011"></a>
<a id="trace-10018"></a>
<a id="trace-10090"></a>
<a id="trace-10095"></a>
<a id="trace-10102"></a>
<a id="trace-10108"></a>
<a id="trace-10118"></a>
<a id="trace-10123"></a>
<a id="trace-10133"></a>
<a id="trace-10139"></a>
<a id="trace-10150"></a>
<a id="trace-10160"></a>
<a id="trace-10236"></a>
<a id="trace-10240"></a>
<a id="trace-10249"></a>
<a id="trace-10255"></a>
<a id="trace-10262"></a>
<a id="trace-10268"></a>
<a id="trace-10277"></a>
<a id="trace-10282"></a>
<a id="trace-10291"></a>
<a id="trace-10299"></a>
<a id="trace-10373"></a>
<a id="trace-10379"></a>
<a id="trace-10391"></a>
<a id="trace-10395"></a>
<a id="trace-10407"></a>
<a id="trace-10414"></a>
<a id="trace-10422"></a>
<a id="trace-10428"></a>
<a id="trace-10437"></a>
<a id="trace-10443"></a>
<a id="trace-10515"></a>
<a id="trace-10520"></a>
<a id="trace-10530"></a>
<a id="trace-10534"></a>
<a id="trace-10545"></a>
<a id="trace-10550"></a>
<a id="trace-10562"></a>
<a id="trace-10571"></a>
<a id="trace-10581"></a>
<a id="trace-10589"></a>
<a id="trace-10662"></a>
<a id="trace-10667"></a>
<a id="trace-10674"></a>
<a id="trace-10679"></a>
<a id="trace-10688"></a>
<a id="trace-10693"></a>
<a id="trace-10703"></a>
<a id="trace-10708"></a>
<a id="trace-10719"></a>
<a id="trace-10730"></a>
<a id="trace-10805"></a>
<a id="trace-10813"></a>
<a id="trace-10820"></a>
<a id="trace-10825"></a>
<a id="trace-10834"></a>
<a id="trace-10839"></a>
<a id="trace-10849"></a>
<a id="trace-10854"></a>
<a id="trace-10863"></a>
<a id="trace-10871"></a>
<a id="trace-10945"></a>
<a id="trace-10953"></a>
<a id="trace-10963"></a>
<a id="trace-10972"></a>
<a id="trace-10983"></a>
<a id="trace-10988"></a>
<a id="trace-10997"></a>
<a id="trace-11002"></a>
<a id="trace-11012"></a>
<a id="trace-11018"></a>
<a id="trace-11091"></a>
<a id="trace-11096"></a>
<a id="trace-11105"></a>
<a id="trace-11112"></a>
<a id="trace-11122"></a>
<a id="trace-11131"></a>
<a id="trace-11143"></a>
<a id="trace-11148"></a>
<a id="trace-11159"></a>
<a id="trace-11166"></a>
<a id="trace-11240"></a>
<a id="trace-11245"></a>
<a id="trace-11252"></a>
<a id="trace-11257"></a>
<a id="trace-11266"></a>
<a id="trace-11273"></a>
<a id="trace-11282"></a>
<a id="trace-11288"></a>
<a id="trace-11301"></a>
<a id="trace-11307"></a>
<a id="trace-11383"></a>
<a id="trace-11390"></a>
<a id="trace-11399"></a>
<a id="trace-11404"></a>
<a id="trace-11412"></a>
<a id="trace-11417"></a>
<a id="trace-11426"></a>
<a id="trace-11432"></a>
<a id="trace-11440"></a>
<a id="trace-11448"></a>
<a id="trace-11522"></a>
<a id="trace-11528"></a>
<a id="trace-11539"></a>
<a id="trace-11547"></a>
<a id="trace-11559"></a>
<a id="trace-11564"></a>
<a id="trace-11573"></a>
<a id="trace-11577"></a>
<a id="trace-11586"></a>
<a id="trace-11593"></a>
<a id="trace-11664"></a>
<a id="trace-11670"></a>
<a id="trace-11679"></a>
<a id="trace-11685"></a>
<a id="trace-11696"></a>
<a id="trace-11704"></a>
<a id="trace-11716"></a>
<a id="trace-11723"></a>
<a id="trace-11732"></a>
<a id="trace-11739"></a>
<a id="trace-11812"></a>
<a id="trace-11817"></a>
<a id="trace-11824"></a>
<a id="trace-11830"></a>
<a id="trace-11839"></a>
<a id="trace-11845"></a>
<a id="trace-11854"></a>
<a id="trace-11861"></a>
<a id="trace-11874"></a>
<a id="trace-11883"></a>
<a id="trace-11958"></a>
<a id="trace-11962"></a>
<a id="trace-11970"></a>
<a id="trace-11976"></a>
<a id="trace-11984"></a>
<a id="trace-11990"></a>
<a id="trace-11999"></a>
<a id="trace-12004"></a>
<a id="trace-12014"></a>
<a id="trace-12022"></a>
<a id="trace-12097"></a>
<a id="trace-12105"></a>
<a id="trace-12118"></a>
<a id="trace-12123"></a>
<a id="trace-12134"></a>
<a id="trace-12140"></a>
<a id="trace-12148"></a>
<a id="trace-12154"></a>
<a id="trace-12163"></a>
<a id="trace-12170"></a>
<a id="trace-12243"></a>
<a id="trace-12248"></a>
<a id="trace-12258"></a>
<a id="trace-12264"></a>
<a id="trace-12277"></a>
<a id="trace-12282"></a>
<a id="trace-12294"></a>
<a id="trace-12302"></a>
<a id="trace-12317"></a>
<a id="trace-12389"></a>
<a id="trace-12393"></a>
<a id="trace-12401"></a>
<a id="trace-12406"></a>
<a id="trace-12417"></a>
<a id="trace-12421"></a>
<a id="trace-12432"></a>
<a id="trace-12438"></a>
<a id="trace-12449"></a>
<a id="trace-12459"></a>
<a id="trace-12533"></a>
<a id="trace-12539"></a>
<a id="trace-12546"></a>
<a id="trace-12551"></a>
<a id="trace-12560"></a>
<a id="trace-12565"></a>
<a id="trace-12575"></a>
<a id="trace-12580"></a>
<a id="trace-12590"></a>
<a id="trace-12597"></a>
<a id="trace-12672"></a>
<a id="trace-12689"></a>
<a id="trace-12697"></a>
<a id="trace-12706"></a>
<a id="trace-12710"></a>
<a id="trace-12719"></a>
<a id="trace-12724"></a>
<a id="trace-12733"></a>
<a id="trace-12739"></a>
<a id="trace-12812"></a>
<a id="trace-12818"></a>
<a id="trace-12827"></a>
<a id="trace-12835"></a>
<a id="trace-12846"></a>
<a id="trace-12855"></a>
<a id="trace-12866"></a>
<a id="trace-12871"></a>
<a id="trace-12880"></a>
<a id="trace-12887"></a>
<a id="trace-12960"></a>
<a id="trace-12972"></a>
<a id="trace-12976"></a>
<a id="trace-12986"></a>
<a id="trace-12993"></a>
<a id="trace-13002"></a>
<a id="trace-13011"></a>
<a id="trace-13022"></a>
<a id="trace-13029"></a>
<a id="trace-13103"></a>
<a id="trace-13108"></a>
<a id="trace-13117"></a>
<a id="trace-13122"></a>
<a id="trace-13131"></a>
<a id="trace-13136"></a>
<a id="trace-13145"></a>
<a id="trace-13152"></a>
<a id="trace-13160"></a>
<a id="trace-13169"></a>
<a id="trace-13246"></a>
<a id="trace-13251"></a>
<a id="trace-13262"></a>
<a id="trace-13269"></a>
<a id="trace-13282"></a>
<a id="trace-13291"></a>
<a id="trace-13296"></a>
<a id="trace-13305"></a>
<a id="trace-13313"></a>
- 1.60s–359.80s (×712), actor 37, squad 4 (trace 334): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5617410301765847, 'next_transition': 353}.
<a id="trace-515"></a>
<a id="trace-569"></a>
<a id="trace-588"></a>
<a id="trace-612"></a>
<a id="trace-637"></a>
<a id="trace-657"></a>
<a id="trace-739"></a>
<a id="trace-746"></a>
<a id="trace-758"></a>
- 5.70s–11.20s (×9), actor 5, squad 0 (trace 515): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 437. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.421869322400828, 'next_transition': 569}.
<a id="trace-766"></a>
- 11.55s–11.55s (×1), actor 0, squad 0 (trace 766): traveling overwatch. Knowledge: actor memory at 10.00s, trace 661. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2183413225579066, 'next_transition': 888}.
<a id="trace-767"></a>
- 11.55s–11.55s (×1), actor 0, squad 0 (trace 767): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 661. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2183413225579066, 'next_transition': 888}.
<a id="trace-888"></a>
<a id="trace-902"></a>
- 11.70s–12.20s (×2), actor 5, squad 0 (trace 888): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 664. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06684908338514707, 'next_transition': 902}.
<a id="trace-130"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 130): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099994482796986, 'next_transition': 925}.
<a id="trace-907"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 907): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 907. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099994482796986, 'next_transition': 925}.
<a id="trace-908"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 908): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 908. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099994482796986, 'next_transition': 925}.
<a id="trace-925"></a>
<a id="trace-944"></a>
<a id="trace-960"></a>
<a id="trace-1085"></a>
<a id="trace-1114"></a>
<a id="trace-1151"></a>
- 12.70s–17.75s (×6), actor 5, squad 0 (trace 925): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 908. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0161844392547108, 'next_transition': 944}.
<a id="trace-1158"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1158): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1010. Next observer evidence: {'until': 18.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5997983994404184, 'next_transition': 1381}.
<a id="trace-1159"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1159): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1010. Next observer evidence: {'until': 18.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5997983994404184, 'next_transition': 1381}.
<a id="trace-1160"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1160): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1010. Next observer evidence: {'until': 18.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5997983994404184, 'next_transition': 1381}.
<a id="trace-1381"></a>
<a id="trace-1396"></a>
<a id="trace-1413"></a>
<a id="trace-1495"></a>
<a id="trace-1523"></a>
<a id="trace-1552"></a>
- 18.75s–21.75s (×6), actor 5, squad 0 (trace 1381): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1013. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500841911588445, 'next_transition': 1396}.
<a id="trace-1562"></a>
- 22.00s–22.00s (×1), actor 0, squad 0 (trace 1562): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1416. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500233330740782, 'next_transition': 1779}.
<a id="trace-1779"></a>
<a id="trace-1794"></a>
- 22.25s–22.75s (×2), actor 5, squad 0 (trace 1779): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1419. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100046666148162, 'next_transition': 1794}.
<a id="trace-1804"></a>
- 22.95s–22.95s (×1), actor 0, squad 0 (trace 1804): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1416. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3825679144803125, 'next_transition': 2036}.
<a id="trace-2036"></a>
<a id="trace-2051"></a>
<a id="trace-2086"></a>
<a id="trace-2207"></a>
<a id="trace-2241"></a>
<a id="trace-2270"></a>
- 23.25s–26.25s (×6), actor 5, squad 0 (trace 2036): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1419. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2848896042918684, 'next_transition': 2051}.
<a id="trace-2278"></a>
- 26.65s–26.65s (×1), actor 0, squad 0 (trace 2278): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 2127. Next observer evidence: None.
<a id="trace-2280"></a>
- 26.65s–26.65s (×1), actor 0, squad 0 (trace 2280): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 25.00s, trace 2127. Next observer evidence: None.
<a id="trace-2286"></a>
<a id="trace-2308"></a>
<a id="trace-2316"></a>
<a id="trace-2331"></a>
<a id="trace-2346"></a>
- 26.75s–28.75s (×5), actor 5, squad 0 (trace 2286): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2130. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.12702872598353496, 'next_transition': 2308}.
<a id="trace-2372"></a>
- 29.95s–29.95s (×1), actor 0, squad 0 (trace 2372): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 2127. Next observer evidence: {'until': 30.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18436588166529688, 'next_transition': 2629}.
<a id="trace-2629"></a>
- 30.25s–30.25s (×1), actor 5, squad 0 (trace 2629): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2557. Next observer evidence: {'until': 31.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09442627488622463, 'next_transition': 2670}.
<a id="trace-2670"></a>
- 31.40s–31.40s (×1), actor 0, squad 0 (trace 2670): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 2554. Next observer evidence: {'until': 32.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.20957713578643186, 'next_transition': 2925}.
<a id="trace-2925"></a>
<a id="trace-2959"></a>
- 32.75s–33.75s (×2), actor 5, squad 0 (trace 2925): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2557. Next observer evidence: {'until': 33.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3069060025706388, 'next_transition': 2959}.
<a id="trace-3014"></a>
- 35.10s–35.10s (×1), actor 0, squad 0 (trace 3014): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 3001. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3075}.
<a id="trace-3016"></a>
- 35.10s–35.10s (×1), actor 0, squad 0 (trace 3016): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 35.00s, trace 3001. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3075}.
<a id="trace-3075"></a>
<a id="trace-3081"></a>
<a id="trace-3090"></a>
<a id="trace-3097"></a>
<a id="trace-3105"></a>
<a id="trace-3114"></a>
<a id="trace-3126"></a>
<a id="trace-3133"></a>
<a id="trace-3141"></a>
- 35.25s–39.75s (×9), actor 5, squad 0 (trace 3075): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3004. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3081}.
<a id="trace-530"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (events line 530): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3145"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 3145): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.607174 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 3145. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3221}.
<a id="trace-3146"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 3146): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.607174 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 3146. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3221}.
<a id="trace-3221"></a>
<a id="trace-3234"></a>
<a id="trace-3242"></a>
<a id="trace-3265"></a>
<a id="trace-3279"></a>
<a id="trace-3295"></a>
<a id="trace-3337"></a>
- 40.25s–44.75s (×7), actor 5, squad 0 (trace 3221): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3151. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3234}.
<a id="trace-3343"></a>
- 44.95s–44.95s (×1), actor 0, squad 0 (trace 3343): NeedSupport. Knowledge: actor memory at 40.00s, trace 3148. Next observer evidence: {'until': 45.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.28951620231578284, 'next_transition': 3421}.
<a id="trace-3421"></a>
<a id="trace-3434"></a>
<a id="trace-3451"></a>
<a id="trace-3461"></a>
<a id="trace-3468"></a>
<a id="trace-3488"></a>
<a id="trace-3497"></a>
<a id="trace-3504"></a>
<a id="trace-3579"></a>
<a id="trace-3587"></a>
<a id="trace-3595"></a>
<a id="trace-3603"></a>
<a id="trace-3617"></a>
<a id="trace-3630"></a>
<a id="trace-3640"></a>
<a id="trace-3660"></a>
<a id="trace-3671"></a>
<a id="trace-3745"></a>
<a id="trace-3755"></a>
<a id="trace-3771"></a>
<a id="trace-3797"></a>
<a id="trace-3810"></a>
<a id="trace-3829"></a>
<a id="trace-3843"></a>
<a id="trace-3864"></a>
<a id="trace-3937"></a>
<a id="trace-3961"></a>
<a id="trace-3969"></a>
- 45.25s–61.75s (×28), actor 5, squad 0 (trace 3421): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3347. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3434}.
<a id="trace-3975"></a>
- 62.20s–62.20s (×1), actor 1, squad 0 (trace 3975): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 60.00s, trace 3868. Next observer evidence: None.
<a id="trace-3976"></a>
- 62.20s–62.20s (×1), actor 1, squad 0 (trace 3976): rearward bound: one stationary suppressing element. Knowledge: actor memory at 60.00s, trace 3868. Next observer evidence: None.
<a id="trace-4134"></a>
<a id="trace-4148"></a>
<a id="trace-4164"></a>
<a id="trace-4178"></a>
<a id="trace-4193"></a>
<a id="trace-4202"></a>
<a id="trace-4325"></a>
<a id="trace-4342"></a>
<a id="trace-4353"></a>
<a id="trace-4369"></a>
<a id="trace-4375"></a>
<a id="trace-4447"></a>
<a id="trace-4457"></a>
<a id="trace-4469"></a>
<a id="trace-4475"></a>
<a id="trace-4493"></a>
<a id="trace-4519"></a>
<a id="trace-4546"></a>
<a id="trace-4618"></a>
<a id="trace-4641"></a>
<a id="trace-4649"></a>
<a id="trace-4666"></a>
- 62.25s–77.25s (×22), actor 5, squad 0 (trace 4134): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 3870. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039887697161508, 'next_transition': 4148}.
<a id="trace-4669"></a>
- 77.25s–77.25s (×1), actor 1, squad 0 (trace 4669): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 4550. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6854319864111792, 'next_transition': 4680}.
<a id="trace-4670"></a>
- 77.25s–77.25s (×1), actor 1, squad 0 (trace 4670): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 4550. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6854319864111792, 'next_transition': 4680}.
<a id="trace-4680"></a>
<a id="trace-4699"></a>
<a id="trace-4719"></a>
<a id="trace-4732"></a>
<a id="trace-4739"></a>
<a id="trace-4823"></a>
<a id="trace-4830"></a>
<a id="trace-4851"></a>
<a id="trace-4860"></a>
<a id="trace-4870"></a>
<a id="trace-4896"></a>
<a id="trace-4904"></a>
<a id="trace-4976"></a>
<a id="trace-4983"></a>
<a id="trace-4995"></a>
<a id="trace-5009"></a>
<a id="trace-5014"></a>
<a id="trace-5023"></a>
<a id="trace-5030"></a>
<a id="trace-5040"></a>
<a id="trace-5047"></a>
<a id="trace-5116"></a>
- 77.75s–90.25s (×22), actor 5, squad 0 (trace 4680): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4552. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7131677856014702, 'next_transition': 4699}.
<a id="trace-5120"></a>
- 90.40s–90.40s (×1), actor 1, squad 0 (trace 5120): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 90.00s, trace 5050. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5129}.
<a id="trace-5129"></a>
<a id="trace-5143"></a>
<a id="trace-5162"></a>
<a id="trace-5174"></a>
<a id="trace-5181"></a>
<a id="trace-5200"></a>
<a id="trace-5217"></a>
<a id="trace-5292"></a>
<a id="trace-5301"></a>
<a id="trace-5311"></a>
<a id="trace-5322"></a>
<a id="trace-5339"></a>
<a id="trace-5358"></a>
<a id="trace-5363"></a>
<a id="trace-5433"></a>
<a id="trace-5447"></a>
<a id="trace-5463"></a>
<a id="trace-5469"></a>
<a id="trace-5479"></a>
<a id="trace-5485"></a>
<a id="trace-5496"></a>
<a id="trace-5504"></a>
<a id="trace-5578"></a>
<a id="trace-5585"></a>
<a id="trace-5595"></a>
<a id="trace-5603"></a>
<a id="trace-5612"></a>
<a id="trace-5618"></a>
<a id="trace-5626"></a>
<a id="trace-5632"></a>
- 90.75s–108.75s (×30), actor 5, squad 0 (trace 5129): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5052. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5143}.
<a id="trace-1283"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (events line 1283): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5643}.
<a id="trace-5636"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 5636): renew committed intent (75 s lifetime). Knowledge: actor memory at 108.95s, trace 5636. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5643}.
<a id="trace-5643"></a>
<a id="trace-5649"></a>
<a id="trace-5720"></a>
<a id="trace-5727"></a>
<a id="trace-5741"></a>
<a id="trace-5752"></a>
<a id="trace-5762"></a>
<a id="trace-5768"></a>
<a id="trace-5777"></a>
<a id="trace-5783"></a>
<a id="trace-5791"></a>
<a id="trace-5797"></a>
<a id="trace-5867"></a>
- 109.25s–115.25s (×13), actor 5, squad 0 (trace 5643): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.95s, trace 5636. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5649}.
<a id="trace-5870"></a>
- 115.30s–115.30s (×1), actor 1, squad 0 (trace 5870): MoveTactically. Knowledge: actor memory at 115.00s, trace 5801. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5874}.
<a id="trace-5871"></a>
- 115.30s–115.30s (×1), actor 1, squad 0 (trace 5871): received platoon directive. Knowledge: actor memory at 115.00s, trace 5801. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5874}.
<a id="trace-5874"></a>
<a id="trace-5889"></a>
<a id="trace-5914"></a>
<a id="trace-5933"></a>
<a id="trace-5943"></a>
<a id="trace-5954"></a>
<a id="trace-5960"></a>
<a id="trace-6029"></a>
<a id="trace-6035"></a>
<a id="trace-6043"></a>
<a id="trace-6051"></a>
<a id="trace-6062"></a>
<a id="trace-6068"></a>
<a id="trace-6084"></a>
<a id="trace-6096"></a>
<a id="trace-6174"></a>
<a id="trace-6182"></a>
<a id="trace-6189"></a>
<a id="trace-6208"></a>
<a id="trace-6213"></a>
<a id="trace-6222"></a>
<a id="trace-6227"></a>
<a id="trace-6238"></a>
<a id="trace-6243"></a>
<a id="trace-6315"></a>
<a id="trace-6321"></a>
<a id="trace-6345"></a>
<a id="trace-6355"></a>
<a id="trace-6361"></a>
<a id="trace-6370"></a>
<a id="trace-6457"></a>
<a id="trace-6462"></a>
<a id="trace-6471"></a>
<a id="trace-6482"></a>
<a id="trace-6493"></a>
<a id="trace-6502"></a>
<a id="trace-6520"></a>
<a id="trace-6533"></a>
<a id="trace-6607"></a>
<a id="trace-6616"></a>
<a id="trace-6634"></a>
<a id="trace-6649"></a>
<a id="trace-6667"></a>
<a id="trace-6751"></a>
<a id="trace-6768"></a>
<a id="trace-6778"></a>
<a id="trace-6783"></a>
<a id="trace-6792"></a>
<a id="trace-6797"></a>
<a id="trace-6807"></a>
<a id="trace-6814"></a>
<a id="trace-6885"></a>
<a id="trace-6913"></a>
<a id="trace-6924"></a>
<a id="trace-6929"></a>
<a id="trace-6939"></a>
<a id="trace-6944"></a>
<a id="trace-6957"></a>
<a id="trace-7027"></a>
<a id="trace-7034"></a>
<a id="trace-7042"></a>
<a id="trace-7054"></a>
<a id="trace-7067"></a>
<a id="trace-7072"></a>
<a id="trace-7084"></a>
<a id="trace-7091"></a>
<a id="trace-7105"></a>
<a id="trace-7175"></a>
<a id="trace-7180"></a>
<a id="trace-7188"></a>
<a id="trace-7199"></a>
<a id="trace-7208"></a>
<a id="trace-7214"></a>
<a id="trace-7225"></a>
<a id="trace-7231"></a>
- 115.75s–163.80s (×75), actor 5, squad 0 (trace 5874): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 5803. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5889}.
<a id="trace-1550"></a>
- 164.25s–164.25s (×1), actor 5, squad 0 (events line 1550): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7240"></a>
- 164.25s–164.25s (×1), actor 5, squad 0 (trace 7240): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.948744 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 164.25s, trace 7240. Next observer evidence: None.
<a id="trace-7241"></a>
- 164.25s–164.25s (×1), actor 5, squad 0 (trace 7241): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.948744 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 164.25s, trace 7241. Next observer evidence: None.
<a id="trace-7245"></a>
<a id="trace-7254"></a>
<a id="trace-7327"></a>
- 164.30s–165.30s (×3), actor 5, squad 0 (trace 7245): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 164.25s, trace 7241. Next observer evidence: {'until': 164.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7254}.
<a id="trace-7330"></a>
- 165.55s–165.55s (×1), actor 1, squad 0 (trace 7330): current contact unknown for 10 s. Knowledge: actor memory at 165.00s, trace 7258. Next observer evidence: {'until': 165.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7333}.
<a id="trace-7333"></a>
<a id="trace-7341"></a>
- 165.80s–166.30s (×2), actor 5, squad 0 (trace 7333): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 7260. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7341}.
<a id="trace-7346"></a>
- 166.55s–166.55s (×1), actor 1, squad 0 (trace 7346): traveling. Knowledge: actor memory at 165.00s, trace 7258. Next observer evidence: {'until': 166.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7510}.
<a id="trace-7347"></a>
- 166.55s–166.55s (×1), actor 1, squad 0 (trace 7347): current contact unknown for 10 s. Knowledge: actor memory at 165.00s, trace 7258. Next observer evidence: {'until': 166.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7510}.
<a id="trace-7510"></a>
<a id="trace-7521"></a>
<a id="trace-7550"></a>
<a id="trace-7565"></a>
<a id="trace-7578"></a>
- 166.80s–169.30s (×5), actor 5, squad 0 (trace 7510): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 7260. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7521}.
<a id="trace-7662"></a>
- 170.20s–170.20s (×1), actor 1, squad 0 (trace 7662): received platoon directive. Knowledge: actor memory at 170.00s, trace 7597. Next observer evidence: None.
<a id="trace-7823"></a>
<a id="trace-7840"></a>
<a id="trace-7859"></a>
<a id="trace-7876"></a>
<a id="trace-7891"></a>
<a id="trace-7906"></a>
<a id="trace-7925"></a>
<a id="trace-7933"></a>
<a id="trace-7956"></a>
<a id="trace-8035"></a>
<a id="trace-8041"></a>
<a id="trace-8061"></a>
<a id="trace-8074"></a>
- 170.30s–176.80s (×13), actor 5, squad 0 (trace 7823): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 7599. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0281543520442202, 'next_transition': 7840}.
<a id="trace-8082"></a>
- 176.85s–176.85s (×1), actor 1, squad 0 (trace 8082): traveling overwatch. Knowledge: actor memory at 175.00s, trace 7961. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039912411937336, 'next_transition': 8092}.
<a id="trace-8083"></a>
- 176.85s–176.85s (×1), actor 1, squad 0 (trace 8083): matching received arrivals: traveling stage complete. Knowledge: actor memory at 175.00s, trace 7961. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039912411937336, 'next_transition': 8092}.
<a id="trace-8092"></a>
- 177.30s–177.30s (×1), actor 5, squad 0 (trace 8092): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 7963. Next observer evidence: {'until': 178, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0079722321572158, 'next_transition': 1660}.
<a id="trace-1660"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (events line 1660): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520200785651817, 'next_transition': 8115}.
<a id="trace-8106"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (trace 8106): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 178.05s, trace 8106. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520200785651817, 'next_transition': 8115}.
<a id="trace-8107"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (trace 8107): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 178.05s, trace 8107. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520200785651817, 'next_transition': 8115}.
<a id="trace-8115"></a>
<a id="trace-8124"></a>
<a id="trace-8135"></a>
<a id="trace-8143"></a>
<a id="trace-8215"></a>
<a id="trace-8223"></a>
<a id="trace-8231"></a>
<a id="trace-8236"></a>
<a id="trace-8251"></a>
<a id="trace-8263"></a>
- 178.30s–183.30s (×10), actor 5, squad 0 (trace 8115): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.05s, trace 8107. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560010687823142, 'next_transition': 8124}.
<a id="trace-8269"></a>
- 183.65s–183.65s (×1), actor 1, squad 0 (trace 8269): received platoon directive. Knowledge: actor memory at 180.00s, trace 8146. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8272}.
<a id="trace-8272"></a>
<a id="trace-8284"></a>
<a id="trace-8365"></a>
<a id="trace-8371"></a>
<a id="trace-8378"></a>
<a id="trace-8384"></a>
<a id="trace-8393"></a>
<a id="trace-8411"></a>
<a id="trace-8422"></a>
<a id="trace-8430"></a>
<a id="trace-8507"></a>
<a id="trace-8512"></a>
<a id="trace-8523"></a>
<a id="trace-8538"></a>
<a id="trace-8544"></a>
<a id="trace-8553"></a>
<a id="trace-8558"></a>
<a id="trace-8647"></a>
<a id="trace-8652"></a>
<a id="trace-8662"></a>
<a id="trace-8668"></a>
<a id="trace-8688"></a>
<a id="trace-8703"></a>
<a id="trace-8712"></a>
<a id="trace-8791"></a>
<a id="trace-8796"></a>
<a id="trace-8809"></a>
<a id="trace-8819"></a>
<a id="trace-8825"></a>
<a id="trace-8836"></a>
<a id="trace-8845"></a>
<a id="trace-8856"></a>
<a id="trace-8866"></a>
<a id="trace-8939"></a>
<a id="trace-8951"></a>
<a id="trace-8956"></a>
<a id="trace-8966"></a>
<a id="trace-8971"></a>
<a id="trace-8980"></a>
<a id="trace-8986"></a>
<a id="trace-9005"></a>
<a id="trace-9080"></a>
<a id="trace-9098"></a>
<a id="trace-9103"></a>
<a id="trace-9112"></a>
<a id="trace-9117"></a>
<a id="trace-9127"></a>
<a id="trace-9132"></a>
<a id="trace-9141"></a>
<a id="trace-9148"></a>
<a id="trace-9222"></a>
<a id="trace-9237"></a>
<a id="trace-9257"></a>
<a id="trace-9272"></a>
<a id="trace-9286"></a>
<a id="trace-9293"></a>
<a id="trace-9366"></a>
<a id="trace-9378"></a>
<a id="trace-9385"></a>
<a id="trace-9400"></a>
<a id="trace-9413"></a>
<a id="trace-9429"></a>
<a id="trace-9438"></a>
<a id="trace-9512"></a>
<a id="trace-9517"></a>
<a id="trace-9525"></a>
<a id="trace-9538"></a>
<a id="trace-9544"></a>
<a id="trace-9553"></a>
<a id="trace-9569"></a>
<a id="trace-9577"></a>
<a id="trace-9653"></a>
<a id="trace-9661"></a>
<a id="trace-9672"></a>
<a id="trace-9677"></a>
<a id="trace-9686"></a>
<a id="trace-9691"></a>
<a id="trace-9700"></a>
<a id="trace-9706"></a>
<a id="trace-9714"></a>
<a id="trace-9722"></a>
<a id="trace-9796"></a>
<a id="trace-9811"></a>
<a id="trace-9819"></a>
<a id="trace-9832"></a>
<a id="trace-9847"></a>
<a id="trace-9852"></a>
<a id="trace-9861"></a>
<a id="trace-9869"></a>
<a id="trace-9941"></a>
<a id="trace-9947"></a>
<a id="trace-9955"></a>
<a id="trace-9970"></a>
<a id="trace-9977"></a>
<a id="trace-9990"></a>
<a id="trace-9998"></a>
<a id="trace-10009"></a>
<a id="trace-10016"></a>
<a id="trace-10100"></a>
<a id="trace-10106"></a>
- 183.80s–246.80s (×100), actor 5, squad 0 (trace 8272): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 8148. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8284}.
<a id="trace-1987"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (events line 1987): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10111"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (trace 10111): renew committed intent (75 s lifetime). Knowledge: actor memory at 247.10s, trace 10111. Next observer evidence: {'until': 247.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10121}.
<a id="trace-10121"></a>
<a id="trace-10131"></a>
<a id="trace-10137"></a>
<a id="trace-10158"></a>
<a id="trace-10234"></a>
<a id="trace-10253"></a>
<a id="trace-10266"></a>
<a id="trace-10275"></a>
<a id="trace-10280"></a>
<a id="trace-10289"></a>
<a id="trace-10297"></a>
<a id="trace-10377"></a>
<a id="trace-10389"></a>
<a id="trace-10405"></a>
<a id="trace-10420"></a>
<a id="trace-10426"></a>
<a id="trace-10435"></a>
<a id="trace-10518"></a>
<a id="trace-10528"></a>
<a id="trace-10543"></a>
<a id="trace-10560"></a>
<a id="trace-10569"></a>
<a id="trace-10579"></a>
<a id="trace-10587"></a>
<a id="trace-10660"></a>
<a id="trace-10665"></a>
<a id="trace-10677"></a>
<a id="trace-10691"></a>
<a id="trace-10701"></a>
<a id="trace-10717"></a>
<a id="trace-10728"></a>
<a id="trace-10803"></a>
<a id="trace-10811"></a>
<a id="trace-10823"></a>
<a id="trace-10832"></a>
<a id="trace-10837"></a>
<a id="trace-10847"></a>
<a id="trace-10852"></a>
<a id="trace-10861"></a>
<a id="trace-10869"></a>
<a id="trace-10943"></a>
<a id="trace-10951"></a>
<a id="trace-10961"></a>
<a id="trace-10970"></a>
<a id="trace-10981"></a>
<a id="trace-10986"></a>
<a id="trace-10995"></a>
<a id="trace-11000"></a>
<a id="trace-11010"></a>
<a id="trace-11089"></a>
<a id="trace-11094"></a>
<a id="trace-11103"></a>
<a id="trace-11110"></a>
<a id="trace-11120"></a>
<a id="trace-11129"></a>
<a id="trace-11141"></a>
<a id="trace-11146"></a>
<a id="trace-11157"></a>
<a id="trace-11164"></a>
<a id="trace-11238"></a>
<a id="trace-11243"></a>
<a id="trace-11255"></a>
<a id="trace-11264"></a>
<a id="trace-11271"></a>
<a id="trace-11280"></a>
<a id="trace-11299"></a>
<a id="trace-11381"></a>
<a id="trace-11388"></a>
<a id="trace-11397"></a>
<a id="trace-11402"></a>
<a id="trace-11415"></a>
<a id="trace-11424"></a>
<a id="trace-11430"></a>
<a id="trace-11446"></a>
<a id="trace-11526"></a>
<a id="trace-11537"></a>
<a id="trace-11545"></a>
<a id="trace-11557"></a>
<a id="trace-11562"></a>
<a id="trace-11571"></a>
<a id="trace-11584"></a>
<a id="trace-11668"></a>
<a id="trace-11677"></a>
<a id="trace-11683"></a>
<a id="trace-11694"></a>
<a id="trace-11702"></a>
<a id="trace-11721"></a>
<a id="trace-11730"></a>
<a id="trace-11737"></a>
<a id="trace-11810"></a>
<a id="trace-11822"></a>
<a id="trace-11828"></a>
<a id="trace-11837"></a>
<a id="trace-11843"></a>
<a id="trace-11859"></a>
<a id="trace-11872"></a>
<a id="trace-11956"></a>
<a id="trace-11968"></a>
<a id="trace-11974"></a>
<a id="trace-11982"></a>
<a id="trace-11988"></a>
<a id="trace-11997"></a>
<a id="trace-12002"></a>
<a id="trace-12012"></a>
<a id="trace-12020"></a>
<a id="trace-12103"></a>
- 247.80s–315.80s (×106), actor 5, squad 0 (trace 10121): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 247.10s, trace 10111. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10131}.
<a id="trace-2314"></a>
- 316.10s–316.10s (×1), actor 5, squad 0 (events line 2314): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12107"></a>
- 316.10s–316.10s (×1), actor 5, squad 0 (trace 12107): renew committed intent (75 s lifetime). Knowledge: actor memory at 316.10s, trace 12107. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12116}.
<a id="trace-12116"></a>
<a id="trace-12121"></a>
<a id="trace-12132"></a>
<a id="trace-12138"></a>
<a id="trace-12146"></a>
<a id="trace-12152"></a>
<a id="trace-12161"></a>
<a id="trace-12168"></a>
<a id="trace-12241"></a>
<a id="trace-12256"></a>
<a id="trace-12262"></a>
<a id="trace-12275"></a>
<a id="trace-12280"></a>
<a id="trace-12292"></a>
<a id="trace-12300"></a>
<a id="trace-12308"></a>
<a id="trace-12315"></a>
<a id="trace-12399"></a>
<a id="trace-12404"></a>
<a id="trace-12415"></a>
<a id="trace-12430"></a>
<a id="trace-12436"></a>
<a id="trace-12531"></a>
<a id="trace-12537"></a>
<a id="trace-12549"></a>
<a id="trace-12558"></a>
<a id="trace-12563"></a>
<a id="trace-12573"></a>
<a id="trace-12578"></a>
<a id="trace-12588"></a>
<a id="trace-12670"></a>
<a id="trace-12687"></a>
<a id="trace-12695"></a>
<a id="trace-12704"></a>
<a id="trace-12717"></a>
<a id="trace-12722"></a>
<a id="trace-12810"></a>
<a id="trace-12816"></a>
<a id="trace-12825"></a>
<a id="trace-12833"></a>
<a id="trace-12844"></a>
<a id="trace-12853"></a>
<a id="trace-12864"></a>
<a id="trace-12869"></a>
<a id="trace-12878"></a>
<a id="trace-12885"></a>
<a id="trace-12963"></a>
<a id="trace-12970"></a>
<a id="trace-12984"></a>
<a id="trace-12991"></a>
<a id="trace-13009"></a>
<a id="trace-13027"></a>
<a id="trace-13106"></a>
<a id="trace-13115"></a>
<a id="trace-13120"></a>
<a id="trace-13129"></a>
<a id="trace-13134"></a>
<a id="trace-13143"></a>
<a id="trace-13150"></a>
<a id="trace-13167"></a>
<a id="trace-13244"></a>
<a id="trace-13249"></a>
<a id="trace-13260"></a>
<a id="trace-13267"></a>
<a id="trace-13280"></a>
<a id="trace-13289"></a>
<a id="trace-13294"></a>
<a id="trace-13303"></a>
<a id="trace-13311"></a>
- 316.30s–359.80s (×69), actor 5, squad 0 (trace 12116): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 316.10s, trace 12107. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12121}.

## Net delivery

97 matched order/radio deliveries; 232 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.339s; maximum 5.850s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1416: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1425: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2127: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2131: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2136: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2137: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2138: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2554: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2555: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2557: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2558: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2560: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2562: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2563: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2564: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2565: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3001: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3002: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3004: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3005: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3007: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3008: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3009: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3010: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3011: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3012: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 3145: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 3146: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 3148: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3149: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3151: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3152: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3154: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3155: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3156: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3157: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3158: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3159: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3344: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3345: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3347: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3348: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3350: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3351: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3352: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3353: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3354: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3355: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 3509: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3510: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3512: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3513: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3515: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3516: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3517: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3518: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3519: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3520: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 3675: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3676: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3678: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3679: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3681: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3682: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 3683: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3684: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3685: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3686: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3868: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 3869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3870: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3871: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 3872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3873: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 3874: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3875: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3876: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 3877: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4209: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4211: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4212: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 4213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4214: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4215: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4216: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4217: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4218: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4379: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4381: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4382: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4384: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4385: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4386: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4387: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4388: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4550: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4552: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4553: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4555: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4556: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4557: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4558: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4559: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4747: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4749: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4750: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 4751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4752: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 4753: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4754: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4755: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4756: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 4908: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 4909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4910: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 4911: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 4912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4913: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 4914: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4915: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4916: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 4917: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5050: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5052: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5053: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 5054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5055: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5056: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5057: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5058: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5059: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5221: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5223: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5224: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 5225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5226: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 5227: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5228: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5229: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5230: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5366: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5368: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5369: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 5370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5371: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 5372: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5373: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5374: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5375: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5508: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 5509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5510: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5511: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 5512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5513: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 5514: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5515: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5516: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 5517: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 5636: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 5653: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 5654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5655: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 5656: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 5657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5658: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 5659: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5660: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5661: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 5662: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 5801: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 5802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 5803: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 5804: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 5805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 5806: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 5807: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 5808: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 5809: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 5810: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 5963: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 5964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 5965: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 5966: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 5967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 5968: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 5969: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 5970: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 5971: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 5972: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6108: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 6109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6110: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6111: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 6112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6113: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 6114: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6115: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6116: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6117: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 6247: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 6248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6249: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6250: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 6251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6252: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 6253: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6254: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6255: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 6256: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 6390: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 6391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 6392: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 6393: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 6394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 6395: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 6396: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6397: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6398: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 6399: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 6537: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 6538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 6539: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 6540: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 6541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 6542: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 6543: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 6544: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 6545: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 6546: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 6679: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 6680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 6681: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 6682: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 6683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 6684: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 6685: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 6686: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 6687: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 6688: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 6817: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 6818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 6819: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 6820: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 6821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 6822: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 6823: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 6824: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 6825: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 6826: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 6961: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 6962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 6963: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 6964: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 6965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 6966: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 6967: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 6968: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 6969: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 6970: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 7108: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 7109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 7110: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 7111: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 7112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 7113: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 7114: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 7115: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 7116: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 7117: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.25s leader 5, trace 7240: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.25s leader 5, trace 7241: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 7258: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 7259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 7260: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 7261: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 7262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 7263: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 7264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 7265: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 7266: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 7267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 7597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 7598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 7599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 7600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 7601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 7602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 7603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 7604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 7605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 7606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 7961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 7962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 7963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 7964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 7965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 7966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 7967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 7968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 7969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 7970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.05s leader 5, trace 8106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.05s leader 5, trace 8107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 8146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 8147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 8148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 8149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 8150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 8151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 8152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 8153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 8154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 8155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 8296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 8297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 8298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 8299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 8300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 8301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 8302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 8303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 8304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 8305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 8434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 8435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 8436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 8437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 8438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 8439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 8440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 8441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 8442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 8443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 8576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 8577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 8578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 8579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 8580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 8581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 8582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 8583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 8584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 8585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 8722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 8723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 8724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 8725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 8726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 8727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 8728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 8729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 8730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 8731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 8870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 8871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 8872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 8873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 8874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 8875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 8876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 8877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 8878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 8879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 9008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 9009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 9010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 9011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 9012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 9013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 9014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 9015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 9016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 9017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 9152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 9153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 9154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 9155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 9156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 9157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 9158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 9159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 9160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 9161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 9296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 9297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 9298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 9299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 9300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 9301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 9302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 9303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 9304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 9305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 9442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 9443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 9444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 9445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 9446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 9447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 9448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 9449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 9450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 9451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 9584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 9585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 9586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 9587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 9588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 9589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 9590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 9591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 9592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 9593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 9727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 9728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 9729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 9730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 9731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 9732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 9733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 9734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 9735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 9736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 9872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 9873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 9874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 9875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 9876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 9877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 9878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 9879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 9880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 9881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 10020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 10021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 10022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 10023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 10024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 10025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 10026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 10027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 10028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 10029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.10s leader 5, trace 10111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 10161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 10162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 10163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 10164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 10165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 10166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 10167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 10168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 10169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 10170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 10301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 10302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 10303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 10304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 10305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 10306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 10307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 10308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 10309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 10310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 10445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 10446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 10447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 10448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 10449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 10450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 10451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 10452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 10453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 10454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 10591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 10592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 10593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 10594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 10595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 10596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 10597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 10598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 10599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 10600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 10731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 10732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 10733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 10734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 10735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 10736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 10737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 10738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 10739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 10740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 10873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 10874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 10875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 10876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 10877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 10878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 10879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 10880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 10881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 10882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 11019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 11020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 11021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 11022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 11023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 11024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 11025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 11026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 11027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 11028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 11168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 11169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 11170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 11171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 11172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 11173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 11174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 11175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 11176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 11177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 11312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 11313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 11314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 11315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 11316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 11317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 11318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 11319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 11320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 11321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 11451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 11452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 11453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 11454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 11455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 11456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 11457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 11458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 11459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 11460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 11594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 11595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 11596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 11597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 11598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 11599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 11600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 11601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 11602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 11603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 11741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 11742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 11743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 11744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 11745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 11746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 11747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 11748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 11749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 11750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 11884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 11885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 11886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 11887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 11888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 11889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 11890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 11891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 11892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 11893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 12024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 12025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 12026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 12027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 12028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 12029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 12030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 12031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 12032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 12033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.10s leader 5, trace 12107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 12172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 12173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 12174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 12175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 12176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 12177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 12178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 12179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 12180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 12181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 12319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 12320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 12321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 12322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 12323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 12324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 12325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 12326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 12327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 12328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 12460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 12461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 12462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 12463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 12464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 12465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 12466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 12467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 12468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 12469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 12600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 12601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 12602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 12603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 12604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 12605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 12606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 12607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 12608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 12609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 12740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 12741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 12742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 12743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 12744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 12745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 12746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 12747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 12748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 12749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 12889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 12890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 12891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 12892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 12893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 12894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 12895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 12896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 12897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 12898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 13033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 13034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 13035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 13036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 13037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 13038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 13039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 13040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 13041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 13042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 13172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 13173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 13174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 13175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 13176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 13177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 13178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 13179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 13180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 13181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 13314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 13315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 13316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 13317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 13318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 13319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 13320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 13321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 13322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 13323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Voss killed in action
- 1: Vale incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
