# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/3/109/good-ember/battle-109-1789673697977494332`

## Battle summary

**Ember** · 360 s · 529 shots.

### Turning points

- 14.7s, squad 0: contact (events line 151). First recorded contact.
- 20.2s, squad 0: help call ([trace 2590](#trace-2590)). No completion observed before termination.
- 29.7s, squad 0: withdrawal ([trace 3496](#trace-3496)). 38.2s, squad 0: took cover and returned fire.
- 37.8s, squad 0: help call ([trace 4098](#trace-4098)). No completion observed before termination.
- 41.9s, squad 0: withdrawal ([trace 4354](#trace-4354)). 82.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 46.5s, squad 0: help call ([trace 4656](#trace-4656)). No completion observed before termination.
- 142.8s, squad 0: withdrawal ([trace 8485](#trace-8485)). 162.9s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 11 shots, 5/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 518 shots, 0/6 lost.

### Decisions and attribution

At 15.1s, squad 0 chose took cover and returned fire ([trace 1230](#trace-1230)), followed by 1 shots and 0 own casualties; estimate 1.5 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 11.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 1011](#trace-1011)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1010](#trace-1010)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5325922839466203, 'next_transition': 1030}.
- 38.9s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.970856 retreat threshold=0.220000 initiative=requires intent ([trace 4211](#trace-4211)). Following evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5538684723079585, 'next_transition': 4224}.

### Communication

137 matched deliveries (mean 0.35s, max 5.25s); 146 explicit drops; 3 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.65s, squad 0, contact, evidence events line 151: First recorded contact; .
- 20.20s, squad 0, help call, evidence 2590: NeedSupport; No completion observed before termination.
- 29.70s, squad 0, withdrawal, evidence 3496: BreakContact: believed ratio at least two without superiority; 38.2s, squad 0: took cover and returned fire.
- 37.80s, squad 0, help call, evidence 4098: NeedSupport; No completion observed before termination.
- 41.85s, squad 0, withdrawal, evidence 4354: BreakContact: believed ratio at least two without superiority; 82.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 46.45s, squad 0, help call, evidence 4656: NeedSupport; No completion observed before termination.
- 142.80s, squad 0, withdrawal, evidence 8485: BreakContact: believed ratio at least two without superiority; 162.9s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.178340286217253, 'next_transition': 492}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.178340286217253, 'next_transition': 492}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.178340286217253, 'next_transition': 492}.
<a id="trace-323"></a>
<a id="trace-341"></a>
<a id="trace-357"></a>
<a id="trace-372"></a>
<a id="trace-383"></a>
<a id="trace-399"></a>
<a id="trace-418"></a>
<a id="trace-494"></a>
<a id="trace-508"></a>
<a id="trace-532"></a>
<a id="trace-552"></a>
<a id="trace-565"></a>
<a id="trace-582"></a>
<a id="trace-604"></a>
<a id="trace-625"></a>
<a id="trace-636"></a>
<a id="trace-644"></a>
<a id="trace-726"></a>
<a id="trace-735"></a>
<a id="trace-1007"></a>
<a id="trace-1032"></a>
<a id="trace-1055"></a>
<a id="trace-1073"></a>
<a id="trace-1093"></a>
<a id="trace-1111"></a>
<a id="trace-1140"></a>
<a id="trace-1157"></a>
<a id="trace-1585"></a>
<a id="trace-1945"></a>
<a id="trace-1985"></a>
<a id="trace-2019"></a>
<a id="trace-2445"></a>
<a id="trace-2462"></a>
<a id="trace-2482"></a>
<a id="trace-2495"></a>
<a id="trace-2507"></a>
<a id="trace-2515"></a>
<a id="trace-2599"></a>
<a id="trace-2898"></a>
<a id="trace-2906"></a>
<a id="trace-2925"></a>
<a id="trace-2950"></a>
<a id="trace-2955"></a>
<a id="trace-2975"></a>
<a id="trace-2980"></a>
<a id="trace-2993"></a>
<a id="trace-3008"></a>
<a id="trace-3081"></a>
<a id="trace-3391"></a>
<a id="trace-3409"></a>
<a id="trace-3420"></a>
<a id="trace-3437"></a>
<a id="trace-3444"></a>
<a id="trace-3458"></a>
<a id="trace-3475"></a>
<a id="trace-3488"></a>
<a id="trace-3742"></a>
<a id="trace-3820"></a>
<a id="trace-3836"></a>
<a id="trace-3849"></a>
<a id="trace-3861"></a>
<a id="trace-3881"></a>
<a id="trace-3899"></a>
<a id="trace-3915"></a>
<a id="trace-3926"></a>
<a id="trace-3942"></a>
<a id="trace-3953"></a>
<a id="trace-4025"></a>
<a id="trace-4042"></a>
<a id="trace-4054"></a>
<a id="trace-4076"></a>
<a id="trace-4089"></a>
<a id="trace-4094"></a>
<a id="trace-4205"></a>
<a id="trace-4210"></a>
<a id="trace-4226"></a>
<a id="trace-4234"></a>
<a id="trace-4311"></a>
<a id="trace-4330"></a>
<a id="trace-4341"></a>
<a id="trace-4351"></a>
<a id="trace-4484"></a>
<a id="trace-4497"></a>
<a id="trace-4509"></a>
<a id="trace-4520"></a>
<a id="trace-4537"></a>
<a id="trace-4552"></a>
<a id="trace-4629"></a>
<a id="trace-4638"></a>
<a id="trace-4652"></a>
<a id="trace-4666"></a>
<a id="trace-4674"></a>
<a id="trace-4680"></a>
<a id="trace-4693"></a>
<a id="trace-4705"></a>
<a id="trace-4713"></a>
<a id="trace-4717"></a>
<a id="trace-4798"></a>
<a id="trace-4808"></a>
<a id="trace-4821"></a>
<a id="trace-4832"></a>
<a id="trace-4851"></a>
<a id="trace-4866"></a>
<a id="trace-4883"></a>
<a id="trace-4890"></a>
<a id="trace-4905"></a>
<a id="trace-4970"></a>
<a id="trace-5047"></a>
<a id="trace-5058"></a>
<a id="trace-5072"></a>
<a id="trace-5089"></a>
<a id="trace-5105"></a>
<a id="trace-5112"></a>
<a id="trace-5126"></a>
<a id="trace-5134"></a>
<a id="trace-5142"></a>
<a id="trace-5147"></a>
<a id="trace-5219"></a>
<a id="trace-5234"></a>
<a id="trace-5248"></a>
<a id="trace-5253"></a>
<a id="trace-5269"></a>
<a id="trace-5276"></a>
<a id="trace-5287"></a>
<a id="trace-5291"></a>
<a id="trace-5304"></a>
<a id="trace-5310"></a>
<a id="trace-5383"></a>
<a id="trace-5394"></a>
<a id="trace-5407"></a>
<a id="trace-5412"></a>
<a id="trace-5428"></a>
<a id="trace-5443"></a>
<a id="trace-5450"></a>
<a id="trace-5464"></a>
<a id="trace-5473"></a>
<a id="trace-5554"></a>
<a id="trace-5561"></a>
<a id="trace-5571"></a>
<a id="trace-5581"></a>
<a id="trace-5595"></a>
<a id="trace-5603"></a>
<a id="trace-5616"></a>
<a id="trace-5622"></a>
<a id="trace-5639"></a>
<a id="trace-5646"></a>
<a id="trace-5721"></a>
<a id="trace-5730"></a>
<a id="trace-5745"></a>
<a id="trace-5755"></a>
<a id="trace-5770"></a>
<a id="trace-5777"></a>
<a id="trace-5795"></a>
<a id="trace-5860"></a>
<a id="trace-5873"></a>
<a id="trace-5884"></a>
<a id="trace-5962"></a>
<a id="trace-5972"></a>
<a id="trace-5991"></a>
<a id="trace-6002"></a>
<a id="trace-6021"></a>
<a id="trace-6036"></a>
<a id="trace-6056"></a>
<a id="trace-6124"></a>
<a id="trace-6142"></a>
<a id="trace-6157"></a>
<a id="trace-6240"></a>
<a id="trace-6249"></a>
<a id="trace-6273"></a>
<a id="trace-6280"></a>
<a id="trace-6292"></a>
<a id="trace-6299"></a>
<a id="trace-6313"></a>
<a id="trace-6320"></a>
<a id="trace-6336"></a>
<a id="trace-6345"></a>
<a id="trace-6419"></a>
<a id="trace-6430"></a>
<a id="trace-6441"></a>
<a id="trace-6448"></a>
<a id="trace-6465"></a>
<a id="trace-6474"></a>
<a id="trace-6490"></a>
<a id="trace-6501"></a>
<a id="trace-6573"></a>
<a id="trace-6579"></a>
<a id="trace-6653"></a>
<a id="trace-6668"></a>
<a id="trace-6678"></a>
<a id="trace-6686"></a>
<a id="trace-6698"></a>
<a id="trace-6704"></a>
<a id="trace-6713"></a>
<a id="trace-6721"></a>
<a id="trace-6731"></a>
<a id="trace-6738"></a>
<a id="trace-6820"></a>
<a id="trace-6833"></a>
<a id="trace-6847"></a>
<a id="trace-6854"></a>
<a id="trace-6872"></a>
<a id="trace-6881"></a>
<a id="trace-6890"></a>
<a id="trace-6898"></a>
<a id="trace-6912"></a>
<a id="trace-6920"></a>
<a id="trace-6996"></a>
<a id="trace-7008"></a>
<a id="trace-7023"></a>
<a id="trace-7030"></a>
<a id="trace-7043"></a>
<a id="trace-7055"></a>
<a id="trace-7071"></a>
<a id="trace-7083"></a>
<a id="trace-7098"></a>
<a id="trace-7104"></a>
<a id="trace-7239"></a>
<a id="trace-7244"></a>
<a id="trace-7255"></a>
<a id="trace-7265"></a>
<a id="trace-7277"></a>
<a id="trace-7285"></a>
<a id="trace-7302"></a>
<a id="trace-7311"></a>
<a id="trace-7324"></a>
<a id="trace-7338"></a>
<a id="trace-7413"></a>
<a id="trace-7418"></a>
<a id="trace-7436"></a>
<a id="trace-7444"></a>
<a id="trace-7459"></a>
<a id="trace-7527"></a>
<a id="trace-7543"></a>
<a id="trace-7550"></a>
<a id="trace-7561"></a>
<a id="trace-7570"></a>
<a id="trace-7644"></a>
<a id="trace-7653"></a>
<a id="trace-7677"></a>
<a id="trace-7693"></a>
<a id="trace-7703"></a>
<a id="trace-7717"></a>
<a id="trace-7722"></a>
<a id="trace-7733"></a>
<a id="trace-7743"></a>
<a id="trace-7816"></a>
<a id="trace-7822"></a>
<a id="trace-7833"></a>
<a id="trace-7841"></a>
<a id="trace-7916"></a>
<a id="trace-7927"></a>
<a id="trace-7937"></a>
<a id="trace-7952"></a>
<a id="trace-7968"></a>
<a id="trace-7979"></a>
<a id="trace-8058"></a>
<a id="trace-8066"></a>
<a id="trace-8078"></a>
<a id="trace-8086"></a>
<a id="trace-8098"></a>
<a id="trace-8112"></a>
<a id="trace-8118"></a>
<a id="trace-8126"></a>
<a id="trace-8134"></a>
<a id="trace-8149"></a>
<a id="trace-8220"></a>
<a id="trace-8229"></a>
<a id="trace-8242"></a>
<a id="trace-8256"></a>
<a id="trace-8267"></a>
<a id="trace-8275"></a>
<a id="trace-8283"></a>
<a id="trace-8286"></a>
<a id="trace-8361"></a>
<a id="trace-8366"></a>
<a id="trace-8438"></a>
<a id="trace-8451"></a>
<a id="trace-8462"></a>
<a id="trace-8469"></a>
<a id="trace-8480"></a>
<a id="trace-8484"></a>
<a id="trace-8551"></a>
<a id="trace-8557"></a>
<a id="trace-8570"></a>
<a id="trace-8583"></a>
<a id="trace-8652"></a>
<a id="trace-8656"></a>
<a id="trace-8666"></a>
<a id="trace-8674"></a>
<a id="trace-8683"></a>
<a id="trace-8690"></a>
<a id="trace-8698"></a>
<a id="trace-8702"></a>
<a id="trace-8714"></a>
<a id="trace-8726"></a>
<a id="trace-8797"></a>
<a id="trace-8804"></a>
<a id="trace-8814"></a>
<a id="trace-8820"></a>
<a id="trace-8829"></a>
<a id="trace-8836"></a>
<a id="trace-8843"></a>
<a id="trace-8849"></a>
<a id="trace-8858"></a>
<a id="trace-8867"></a>
<a id="trace-8937"></a>
<a id="trace-8944"></a>
<a id="trace-8955"></a>
<a id="trace-8961"></a>
<a id="trace-8973"></a>
<a id="trace-8980"></a>
<a id="trace-8991"></a>
<a id="trace-8997"></a>
<a id="trace-9004"></a>
<a id="trace-9012"></a>
<a id="trace-9081"></a>
<a id="trace-9087"></a>
<a id="trace-9096"></a>
<a id="trace-9103"></a>
<a id="trace-9114"></a>
<a id="trace-9121"></a>
<a id="trace-9133"></a>
<a id="trace-9143"></a>
<a id="trace-9155"></a>
<a id="trace-9164"></a>
<a id="trace-9237"></a>
<a id="trace-9243"></a>
<a id="trace-9252"></a>
<a id="trace-9258"></a>
<a id="trace-9268"></a>
<a id="trace-9274"></a>
<a id="trace-9284"></a>
<a id="trace-9292"></a>
<a id="trace-9301"></a>
<a id="trace-9308"></a>
<a id="trace-9377"></a>
<a id="trace-9386"></a>
<a id="trace-9394"></a>
<a id="trace-9401"></a>
<a id="trace-9413"></a>
<a id="trace-9420"></a>
<a id="trace-9427"></a>
<a id="trace-9434"></a>
<a id="trace-9443"></a>
<a id="trace-9451"></a>
<a id="trace-9522"></a>
<a id="trace-9526"></a>
<a id="trace-9536"></a>
<a id="trace-9542"></a>
<a id="trace-9551"></a>
<a id="trace-9561"></a>
<a id="trace-9570"></a>
<a id="trace-9576"></a>
<a id="trace-9586"></a>
<a id="trace-9595"></a>
<a id="trace-9667"></a>
<a id="trace-9672"></a>
<a id="trace-9682"></a>
<a id="trace-9688"></a>
<a id="trace-9698"></a>
<a id="trace-9705"></a>
<a id="trace-9780"></a>
<a id="trace-9791"></a>
<a id="trace-9805"></a>
<a id="trace-9817"></a>
<a id="trace-9957"></a>
<a id="trace-9973"></a>
<a id="trace-9982"></a>
<a id="trace-9992"></a>
<a id="trace-10000"></a>
<a id="trace-10017"></a>
<a id="trace-10029"></a>
<a id="trace-10092"></a>
<a id="trace-10096"></a>
<a id="trace-10171"></a>
<a id="trace-10184"></a>
<a id="trace-10194"></a>
<a id="trace-10202"></a>
<a id="trace-10214"></a>
<a id="trace-10219"></a>
<a id="trace-10227"></a>
<a id="trace-10233"></a>
<a id="trace-10243"></a>
<a id="trace-10249"></a>
<a id="trace-10316"></a>
<a id="trace-10320"></a>
<a id="trace-10324"></a>
<a id="trace-10329"></a>
<a id="trace-10339"></a>
<a id="trace-10346"></a>
<a id="trace-10351"></a>
<a id="trace-10356"></a>
<a id="trace-10359"></a>
<a id="trace-10362"></a>
<a id="trace-10426"></a>
<a id="trace-10429"></a>
<a id="trace-10435"></a>
<a id="trace-10441"></a>
<a id="trace-10449"></a>
<a id="trace-10454"></a>
<a id="trace-10458"></a>
<a id="trace-10461"></a>
<a id="trace-10464"></a>
<a id="trace-10467"></a>
<a id="trace-10530"></a>
<a id="trace-10533"></a>
<a id="trace-10536"></a>
<a id="trace-10541"></a>
<a id="trace-10548"></a>
<a id="trace-10555"></a>
<a id="trace-10563"></a>
<a id="trace-10565"></a>
<a id="trace-10569"></a>
<a id="trace-10573"></a>
<a id="trace-10637"></a>
<a id="trace-10639"></a>
<a id="trace-10643"></a>
<a id="trace-10646"></a>
<a id="trace-10654"></a>
<a id="trace-10657"></a>
<a id="trace-10661"></a>
<a id="trace-10665"></a>
<a id="trace-10671"></a>
<a id="trace-10673"></a>
<a id="trace-10740"></a>
<a id="trace-10744"></a>
<a id="trace-10748"></a>
<a id="trace-10752"></a>
<a id="trace-10757"></a>
<a id="trace-10760"></a>
<a id="trace-10764"></a>
<a id="trace-10768"></a>
<a id="trace-10772"></a>
<a id="trace-10774"></a>
<a id="trace-10838"></a>
<a id="trace-10841"></a>
<a id="trace-10846"></a>
<a id="trace-10852"></a>
<a id="trace-10858"></a>
<a id="trace-10861"></a>
<a id="trace-10864"></a>
<a id="trace-10868"></a>
<a id="trace-10872"></a>
<a id="trace-10876"></a>
<a id="trace-10939"></a>
<a id="trace-10942"></a>
<a id="trace-10947"></a>
<a id="trace-10952"></a>
<a id="trace-10959"></a>
<a id="trace-10965"></a>
<a id="trace-10971"></a>
<a id="trace-10975"></a>
<a id="trace-10980"></a>
<a id="trace-10984"></a>
<a id="trace-11048"></a>
<a id="trace-11053"></a>
<a id="trace-11058"></a>
<a id="trace-11061"></a>
<a id="trace-11066"></a>
<a id="trace-11071"></a>
<a id="trace-11075"></a>
<a id="trace-11079"></a>
<a id="trace-11083"></a>
<a id="trace-11087"></a>
<a id="trace-11150"></a>
<a id="trace-11153"></a>
<a id="trace-11158"></a>
<a id="trace-11162"></a>
<a id="trace-11168"></a>
<a id="trace-11174"></a>
<a id="trace-11180"></a>
<a id="trace-11183"></a>
<a id="trace-11186"></a>
<a id="trace-11189"></a>
<a id="trace-11253"></a>
<a id="trace-11259"></a>
<a id="trace-11266"></a>
<a id="trace-11271"></a>
<a id="trace-11280"></a>
<a id="trace-11284"></a>
<a id="trace-11291"></a>
<a id="trace-11295"></a>
<a id="trace-11301"></a>
<a id="trace-11304"></a>
<a id="trace-11370"></a>
<a id="trace-11376"></a>
<a id="trace-11382"></a>
<a id="trace-11389"></a>
<a id="trace-11399"></a>
<a id="trace-11403"></a>
<a id="trace-11411"></a>
<a id="trace-11416"></a>
<a id="trace-11423"></a>
<a id="trace-11428"></a>
<a id="trace-11493"></a>
<a id="trace-11496"></a>
<a id="trace-11501"></a>
<a id="trace-11506"></a>
<a id="trace-11515"></a>
<a id="trace-11521"></a>
<a id="trace-11526"></a>
<a id="trace-11530"></a>
<a id="trace-11534"></a>
<a id="trace-11539"></a>
<a id="trace-11602"></a>
<a id="trace-11604"></a>
<a id="trace-11608"></a>
<a id="trace-11611"></a>
<a id="trace-11616"></a>
<a id="trace-11621"></a>
<a id="trace-11625"></a>
<a id="trace-11630"></a>
<a id="trace-11635"></a>
<a id="trace-11639"></a>
<a id="trace-11703"></a>
<a id="trace-11706"></a>
<a id="trace-11715"></a>
<a id="trace-11718"></a>
<a id="trace-11723"></a>
<a id="trace-11726"></a>
<a id="trace-11732"></a>
<a id="trace-11737"></a>
<a id="trace-11745"></a>
<a id="trace-11811"></a>
<a id="trace-11814"></a>
<a id="trace-11823"></a>
<a id="trace-11829"></a>
<a id="trace-11839"></a>
<a id="trace-11845"></a>
<a id="trace-11851"></a>
<a id="trace-11855"></a>
<a id="trace-11860"></a>
<a id="trace-11865"></a>
<a id="trace-11930"></a>
<a id="trace-11933"></a>
<a id="trace-11937"></a>
<a id="trace-11942"></a>
<a id="trace-11949"></a>
<a id="trace-11955"></a>
<a id="trace-11960"></a>
<a id="trace-11965"></a>
<a id="trace-11972"></a>
<a id="trace-11975"></a>
<a id="trace-12039"></a>
<a id="trace-12043"></a>
<a id="trace-12047"></a>
<a id="trace-12051"></a>
<a id="trace-12056"></a>
<a id="trace-12060"></a>
<a id="trace-12063"></a>
<a id="trace-12065"></a>
<a id="trace-12070"></a>
<a id="trace-12073"></a>
<a id="trace-12137"></a>
<a id="trace-12142"></a>
<a id="trace-12151"></a>
<a id="trace-12157"></a>
<a id="trace-12162"></a>
<a id="trace-12166"></a>
<a id="trace-12171"></a>
<a id="trace-12174"></a>
<a id="trace-12180"></a>
<a id="trace-12184"></a>
<a id="trace-12248"></a>
<a id="trace-12253"></a>
<a id="trace-12261"></a>
<a id="trace-12267"></a>
<a id="trace-12275"></a>
<a id="trace-12282"></a>
<a id="trace-12290"></a>
<a id="trace-12294"></a>
<a id="trace-12300"></a>
<a id="trace-12303"></a>
<a id="trace-12368"></a>
<a id="trace-12373"></a>
<a id="trace-12378"></a>
<a id="trace-12384"></a>
<a id="trace-12390"></a>
<a id="trace-12395"></a>
<a id="trace-12401"></a>
<a id="trace-12405"></a>
<a id="trace-12410"></a>
<a id="trace-12412"></a>
<a id="trace-12478"></a>
<a id="trace-12483"></a>
<a id="trace-12487"></a>
<a id="trace-12491"></a>
<a id="trace-12498"></a>
<a id="trace-12501"></a>
<a id="trace-12505"></a>
<a id="trace-12507"></a>
<a id="trace-12511"></a>
<a id="trace-12513"></a>
<a id="trace-12577"></a>
<a id="trace-12583"></a>
<a id="trace-12587"></a>
<a id="trace-12591"></a>
<a id="trace-12599"></a>
<a id="trace-12604"></a>
<a id="trace-12611"></a>
<a id="trace-12613"></a>
<a id="trace-12616"></a>
<a id="trace-12618"></a>
<a id="trace-12683"></a>
<a id="trace-12689"></a>
<a id="trace-12694"></a>
<a id="trace-12702"></a>
<a id="trace-12711"></a>
<a id="trace-12715"></a>
<a id="trace-12722"></a>
<a id="trace-12725"></a>
<a id="trace-12731"></a>
<a id="trace-12737"></a>
<a id="trace-12803"></a>
<a id="trace-12807"></a>
<a id="trace-12813"></a>
<a id="trace-12820"></a>
<a id="trace-12827"></a>
<a id="trace-12832"></a>
<a id="trace-12841"></a>
<a id="trace-12843"></a>
<a id="trace-12853"></a>
<a id="trace-12857"></a>
<a id="trace-12921"></a>
<a id="trace-12925"></a>
<a id="trace-12931"></a>
<a id="trace-12934"></a>
<a id="trace-12943"></a>
<a id="trace-12947"></a>
<a id="trace-12950"></a>
<a id="trace-12952"></a>
<a id="trace-12956"></a>
<a id="trace-12959"></a>
<a id="trace-13021"></a>
<a id="trace-13025"></a>
<a id="trace-13030"></a>
<a id="trace-13033"></a>
<a id="trace-13039"></a>
<a id="trace-13043"></a>
<a id="trace-13046"></a>
<a id="trace-13050"></a>
<a id="trace-13054"></a>
<a id="trace-13057"></a>
<a id="trace-13120"></a>
<a id="trace-13124"></a>
<a id="trace-13131"></a>
<a id="trace-13136"></a>
<a id="trace-13143"></a>
<a id="trace-13149"></a>
<a id="trace-13154"></a>
<a id="trace-13157"></a>
<a id="trace-13163"></a>
<a id="trace-13167"></a>
<a id="trace-13232"></a>
<a id="trace-13236"></a>
<a id="trace-13243"></a>
<a id="trace-13247"></a>
<a id="trace-13255"></a>
<a id="trace-13261"></a>
<a id="trace-13265"></a>
<a id="trace-13269"></a>
<a id="trace-13275"></a>
<a id="trace-13279"></a>
<a id="trace-13343"></a>
<a id="trace-13351"></a>
<a id="trace-13365"></a>
<a id="trace-13371"></a>
<a id="trace-13379"></a>
<a id="trace-13383"></a>
<a id="trace-13388"></a>
<a id="trace-13392"></a>
<a id="trace-13397"></a>
<a id="trace-13401"></a>
<a id="trace-13465"></a>
<a id="trace-13468"></a>
<a id="trace-13476"></a>
<a id="trace-13482"></a>
<a id="trace-13492"></a>
<a id="trace-13498"></a>
<a id="trace-13509"></a>
<a id="trace-13514"></a>
<a id="trace-13520"></a>
<a id="trace-13524"></a>
<a id="trace-13587"></a>
<a id="trace-13591"></a>
<a id="trace-13598"></a>
<a id="trace-13602"></a>
<a id="trace-13610"></a>
<a id="trace-13615"></a>
<a id="trace-13621"></a>
<a id="trace-13627"></a>
<a id="trace-13635"></a>
<a id="trace-13638"></a>
<a id="trace-13704"></a>
<a id="trace-13712"></a>
<a id="trace-13720"></a>
<a id="trace-13725"></a>
<a id="trace-13733"></a>
<a id="trace-13737"></a>
<a id="trace-13742"></a>
<a id="trace-13745"></a>
<a id="trace-13753"></a>
<a id="trace-13756"></a>
<a id="trace-13821"></a>
<a id="trace-13824"></a>
<a id="trace-13835"></a>
<a id="trace-13840"></a>
<a id="trace-13847"></a>
<a id="trace-13858"></a>
<a id="trace-13865"></a>
<a id="trace-13868"></a>
<a id="trace-13874"></a>
<a id="trace-13877"></a>
- 1.60s–359.80s (×713), actor 37, squad 4 (trace 323): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4830039667229699, 'next_transition': 341}.
<a id="trace-492"></a>
<a id="trace-506"></a>
<a id="trace-530"></a>
<a id="trace-550"></a>
<a id="trace-563"></a>
<a id="trace-580"></a>
<a id="trace-602"></a>
<a id="trace-623"></a>
<a id="trace-724"></a>
<a id="trace-733"></a>
- 5.20s–10.70s (×10), actor 5, squad 0 (trace 492): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 425. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2200087015558856, 'next_transition': 506}.
<a id="trace-739"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 739): traveling overwatch. Knowledge: actor memory at 10.00s, trace 646. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39999761208728524, 'next_transition': 1005}.
<a id="trace-740"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 740): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 646. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39999761208728524, 'next_transition': 1005}.
<a id="trace-1005"></a>
- 11.20s–11.20s (×1), actor 5, squad 0 (trace 1005): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 649. Next observer evidence: None.
<a id="trace-115"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 115): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5325922839466203, 'next_transition': 1030}.
<a id="trace-1010"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1010): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1010. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5325922839466203, 'next_transition': 1030}.
<a id="trace-1011"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1011): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1011. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5325922839466203, 'next_transition': 1030}.
<a id="trace-1030"></a>
<a id="trace-1053"></a>
<a id="trace-1071"></a>
<a id="trace-1091"></a>
<a id="trace-1138"></a>
- 11.70s–14.20s (×5), actor 5, squad 0 (trace 1030): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1011. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5819398420275811, 'next_transition': 1053}.
<a id="trace-1230"></a>
- 15.10s–15.10s (×1), actor 0, squad 0 (trace 1230): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1160. Next observer evidence: {'until': 15.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29498694760321703, 'next_transition': 1583}.
<a id="trace-1231"></a>
- 15.10s–15.10s (×1), actor 0, squad 0 (trace 1231): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1160. Next observer evidence: {'until': 15.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29498694760321703, 'next_transition': 1583}.
<a id="trace-1232"></a>
- 15.10s–15.10s (×1), actor 0, squad 0 (trace 1232): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1160. Next observer evidence: {'until': 15.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29498694760321703, 'next_transition': 1583}.
<a id="trace-1583"></a>
- 15.20s–15.20s (×1), actor 5, squad 0 (trace 1583): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1163. Next observer evidence: None.
<a id="trace-1587"></a>
- 15.35s–15.35s (×1), actor 0, squad 0 (trace 1587): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1160. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5900109210892764, 'next_transition': 1943}.
<a id="trace-1943"></a>
<a id="trace-1983"></a>
- 15.70s–16.25s (×2), actor 5, squad 0 (trace 1943): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1163. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.980150293547004, 'next_transition': 1983}.
<a id="trace-2031"></a>
- 17.10s–17.10s (×1), actor 0, squad 0 (trace 2031): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1160. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.5367552565975766, 'next_transition': 2443}.
<a id="trace-2443"></a>
<a id="trace-2493"></a>
<a id="trace-2505"></a>
- 17.25s–19.25s (×3), actor 5, squad 0 (trace 2443): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1163. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7695038207937044, 'next_transition': 2493}.
<a id="trace-2588"></a>
- 20.20s–20.20s (×1), actor 1, squad 0 (trace 2588): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 20.00s, trace 2520. Next observer evidence: None.
<a id="trace-2590"></a>
- 20.20s–20.20s (×1), actor 1, squad 0 (trace 2590): NeedSupport. Knowledge: actor memory at 20.00s, trace 2520. Next observer evidence: None.
<a id="trace-2597"></a>
- 20.25s–20.25s (×1), actor 5, squad 0 (trace 2597): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2522. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19156731249354583, 'next_transition': 2610}.
<a id="trace-2610"></a>
- 20.65s–20.65s (×1), actor 1, squad 0 (trace 2610): Reorganise: completed/failed drill. Knowledge: actor memory at 20.00s, trace 2520. Next observer evidence: None.
<a id="trace-2614"></a>
- 20.65s–20.65s (×1), actor 1, squad 0 (trace 2614): MoveTactically. Knowledge: actor memory at 20.00s, trace 2520. Next observer evidence: None.
<a id="trace-2615"></a>
- 20.65s–20.65s (×1), actor 1, squad 0 (trace 2615): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2520. Next observer evidence: None.
<a id="trace-2616"></a>
- 20.65s–20.65s (×1), actor 1, squad 0 (trace 2616): Reorganise complete. Knowledge: actor memory at 20.00s, trace 2520. Next observer evidence: None.
<a id="trace-2896"></a>
<a id="trace-2904"></a>
<a id="trace-2923"></a>
<a id="trace-2948"></a>
<a id="trace-2978"></a>
- 20.75s–23.75s (×5), actor 5, squad 0 (trace 2896): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2522. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0620122302337738, 'next_transition': 2904}.
<a id="trace-3086"></a>
- 25.45s–25.45s (×1), actor 1, squad 0 (trace 3086): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3010. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1260006926488899, 'next_transition': 3389}.
<a id="trace-3087"></a>
- 25.45s–25.45s (×1), actor 1, squad 0 (trace 3087): bounding overwatch. Knowledge: actor memory at 25.00s, trace 3010. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1260006926488899, 'next_transition': 3389}.
<a id="trace-3088"></a>
- 25.45s–25.45s (×1), actor 1, squad 0 (trace 3088): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3010. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1260006926488899, 'next_transition': 3389}.
<a id="trace-3389"></a>
<a id="trace-3407"></a>
<a id="trace-3435"></a>
<a id="trace-3442"></a>
<a id="trace-3456"></a>
<a id="trace-3473"></a>
<a id="trace-3486"></a>
- 25.75s–29.25s (×7), actor 5, squad 0 (trace 3389): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3012. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12782217412584654, 'next_transition': 3407}.
<a id="trace-3496"></a>
- 29.70s–29.70s (×1), actor 1, squad 0 (trace 3496): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 3010. Next observer evidence: None.
<a id="trace-3497"></a>
- 29.70s–29.70s (×1), actor 1, squad 0 (trace 3497): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 3010. Next observer evidence: None.
<a id="trace-3740"></a>
<a id="trace-3818"></a>
<a id="trace-3834"></a>
<a id="trace-3847"></a>
<a id="trace-3859"></a>
<a id="trace-3897"></a>
<a id="trace-3924"></a>
<a id="trace-3940"></a>
<a id="trace-4040"></a>
<a id="trace-4052"></a>
<a id="trace-4087"></a>
- 29.75s–37.25s (×11), actor 5, squad 0 (trace 3740): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3012. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6609812530784996, 'next_transition': 3818}.
<a id="trace-4097"></a>
- 37.80s–37.80s (×1), actor 1, squad 0 (trace 4097): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 35.00s, trace 3958. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7481395050606433, 'next_transition': 4113}.
<a id="trace-4098"></a>
- 37.80s–37.80s (×1), actor 1, squad 0 (trace 4098): NeedSupport. Knowledge: actor memory at 35.00s, trace 3958. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7481395050606433, 'next_transition': 4113}.
<a id="trace-4113"></a>
- 38.15s–38.15s (×1), actor 1, squad 0 (trace 4113): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 3958. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149958786381517, 'next_transition': 4203}.
<a id="trace-4116"></a>
- 38.15s–38.15s (×1), actor 1, squad 0 (trace 4116): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 3958. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149958786381517, 'next_transition': 4203}.
<a id="trace-4117"></a>
- 38.15s–38.15s (×1), actor 1, squad 0 (trace 4117): Reorganise complete: known contact. Knowledge: actor memory at 35.00s, trace 3958. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149958786381517, 'next_transition': 4203}.
<a id="trace-4203"></a>
<a id="trace-4208"></a>
- 38.25s–38.75s (×2), actor 5, squad 0 (trace 4203): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3960. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300013432607826, 'next_transition': 4208}.
<a id="trace-388"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 388): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4211"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 4211): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.970856 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 4211. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5538684723079585, 'next_transition': 4224}.
<a id="trace-4212"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 4212): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.970856 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 4212. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5538684723079585, 'next_transition': 4224}.
<a id="trace-4224"></a>
<a id="trace-4232"></a>
<a id="trace-4328"></a>
<a id="trace-4349"></a>
- 39.25s–41.75s (×4), actor 5, squad 0 (trace 4224): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 4212. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299891764131351, 'next_transition': 4232}.
<a id="trace-4354"></a>
- 41.85s–41.85s (×1), actor 1, squad 0 (trace 4354): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 4239. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.944978078066977, 'next_transition': 4482}.
<a id="trace-4355"></a>
- 41.85s–41.85s (×1), actor 1, squad 0 (trace 4355): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 4239. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.944978078066977, 'next_transition': 4482}.
<a id="trace-4482"></a>
<a id="trace-4495"></a>
<a id="trace-4507"></a>
<a id="trace-4518"></a>
<a id="trace-4535"></a>
<a id="trace-4550"></a>
<a id="trace-4650"></a>
- 42.25s–46.25s (×7), actor 5, squad 0 (trace 4482): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4240. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.866249477813469, 'next_transition': 4495}.
<a id="trace-4656"></a>
- 46.45s–46.45s (×1), actor 1, squad 0 (trace 4656): NeedSupport. Knowledge: actor memory at 45.00s, trace 4555. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22050941391134496, 'next_transition': 4664}.
<a id="trace-4664"></a>
<a id="trace-4678"></a>
<a id="trace-4691"></a>
<a id="trace-4703"></a>
<a id="trace-4796"></a>
<a id="trace-4830"></a>
<a id="trace-4864"></a>
<a id="trace-4881"></a>
- 46.75s–53.25s (×8), actor 5, squad 0 (trace 4664): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4556. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8034790134818365, 'next_transition': 4678}.
<a id="trace-4907"></a>
- 54.40s–54.40s (×1), actor 1, squad 0 (trace 4907): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 4723. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2821724539594071, 'next_transition': 5045}.
<a id="trace-4908"></a>
- 54.40s–54.40s (×1), actor 1, squad 0 (trace 4908): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 4723. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2821724539594071, 'next_transition': 5045}.
<a id="trace-5045"></a>
<a id="trace-5056"></a>
<a id="trace-5070"></a>
<a id="trace-5103"></a>
<a id="trace-5124"></a>
<a id="trace-5132"></a>
<a id="trace-5140"></a>
<a id="trace-5145"></a>
<a id="trace-5232"></a>
<a id="trace-5246"></a>
<a id="trace-5267"></a>
<a id="trace-5289"></a>
<a id="trace-5302"></a>
<a id="trace-5308"></a>
<a id="trace-5392"></a>
<a id="trace-5405"></a>
<a id="trace-5422"></a>
<a id="trace-5426"></a>
<a id="trace-5441"></a>
<a id="trace-5462"></a>
<a id="trace-5471"></a>
<a id="trace-5552"></a>
<a id="trace-5559"></a>
<a id="trace-5569"></a>
<a id="trace-5579"></a>
<a id="trace-5593"></a>
<a id="trace-5620"></a>
<a id="trace-5637"></a>
<a id="trace-5644"></a>
<a id="trace-5719"></a>
<a id="trace-5728"></a>
<a id="trace-5743"></a>
<a id="trace-5753"></a>
<a id="trace-5768"></a>
<a id="trace-5775"></a>
- 55.25s–77.75s (×35), actor 5, squad 0 (trace 5045): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 4974. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5056}.
<a id="trace-5797"></a>
- 78.45s–78.45s (×1), actor 1, squad 0 (trace 5797): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 5649. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5858}.
<a id="trace-5798"></a>
- 78.45s–78.45s (×1), actor 1, squad 0 (trace 5798): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 5649. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5858}.
<a id="trace-5858"></a>
<a id="trace-5871"></a>
<a id="trace-5882"></a>
<a id="trace-5960"></a>
<a id="trace-5970"></a>
<a id="trace-5989"></a>
<a id="trace-6000"></a>
- 78.75s–81.75s (×7), actor 5, squad 0 (trace 5858): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 5650. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03937960290556523, 'next_transition': 5871}.
<a id="trace-6009"></a>
- 82.20s–82.20s (×1), actor 1, squad 0 (trace 6009): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 80.00s, trace 5888. Next observer evidence: None.
<a id="trace-6019"></a>
- 82.25s–82.25s (×1), actor 5, squad 0 (trace 6019): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 5889. Next observer evidence: {'until': 82.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749171605198747, 'next_transition': 6024}.
<a id="trace-6024"></a>
- 82.45s–82.45s (×1), actor 1, squad 0 (trace 6024): MoveTactically. Knowledge: actor memory at 80.00s, trace 5888. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15751358671555948, 'next_transition': 6034}.
<a id="trace-6025"></a>
- 82.45s–82.45s (×1), actor 1, squad 0 (trace 6025): received platoon directive. Knowledge: actor memory at 80.00s, trace 5888. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15751358671555948, 'next_transition': 6034}.
<a id="trace-6034"></a>
<a id="trace-6054"></a>
- 82.75s–83.25s (×2), actor 5, squad 0 (trace 6034): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 5889. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6054}.
<a id="trace-6059"></a>
- 83.45s–83.45s (×1), actor 1, squad 0 (trace 6059): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 80.00s, trace 5888. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6122}.
<a id="trace-6122"></a>
<a id="trace-6140"></a>
<a id="trace-6238"></a>
<a id="trace-6271"></a>
<a id="trace-6278"></a>
<a id="trace-6290"></a>
<a id="trace-6297"></a>
<a id="trace-6311"></a>
<a id="trace-6334"></a>
<a id="trace-6343"></a>
<a id="trace-6428"></a>
<a id="trace-6446"></a>
<a id="trace-6463"></a>
- 83.75s–92.25s (×13), actor 5, squad 0 (trace 6122): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 5889. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03938051548672218, 'next_transition': 6140}.
<a id="trace-6492"></a>
- 93.30s–93.30s (×1), actor 1, squad 0 (trace 6492): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 90.00s, trace 6346. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750126769331094, 'next_transition': 6512}.
<a id="trace-6512"></a>
- 94.20s–94.20s (×1), actor 1, squad 0 (trace 6512): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 6346. Next observer evidence: None.
<a id="trace-6571"></a>
<a id="trace-6577"></a>
<a id="trace-6651"></a>
<a id="trace-6676"></a>
<a id="trace-6684"></a>
<a id="trace-6696"></a>
<a id="trace-6702"></a>
<a id="trace-6711"></a>
<a id="trace-6719"></a>
<a id="trace-6729"></a>
<a id="trace-6736"></a>
<a id="trace-6818"></a>
<a id="trace-6831"></a>
<a id="trace-6870"></a>
<a id="trace-6879"></a>
<a id="trace-6888"></a>
<a id="trace-6896"></a>
<a id="trace-6910"></a>
<a id="trace-6918"></a>
<a id="trace-6994"></a>
<a id="trace-7006"></a>
<a id="trace-7028"></a>
<a id="trace-7053"></a>
- 94.25s–107.75s (×23), actor 5, squad 0 (trace 6571): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 6347. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5483512019088115, 'next_transition': 6577}.
<a id="trace-838"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (events line 838): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18360021983919286, 'next_transition': 7069}.
<a id="trace-7057"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (trace 7057): renew committed intent (75 s lifetime). Knowledge: actor memory at 107.95s, trace 7057. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18360021983919286, 'next_transition': 7069}.
<a id="trace-7069"></a>
<a id="trace-7081"></a>
<a id="trace-7096"></a>
<a id="trace-7102"></a>
- 108.25s–109.75s (×4), actor 5, squad 0 (trace 7069): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 107.95s, trace 7057. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1477622580363471, 'next_transition': 7081}.
<a id="trace-7179"></a>
- 110.20s–110.20s (×1), actor 1, squad 0 (trace 7179): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 110.00s, trace 7111. Next observer evidence: None.
<a id="trace-7237"></a>
<a id="trace-7242"></a>
<a id="trace-7283"></a>
<a id="trace-7300"></a>
<a id="trace-7309"></a>
<a id="trace-7322"></a>
<a id="trace-7411"></a>
<a id="trace-7434"></a>
<a id="trace-7442"></a>
<a id="trace-7457"></a>
- 110.25s–117.25s (×10), actor 5, squad 0 (trace 7237): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 7112. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7242}.
<a id="trace-7460"></a>
- 117.25s–117.25s (×1), actor 1, squad 0 (trace 7460): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 7341. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.5327176785127369, 'next_transition': 7525}.
<a id="trace-7525"></a>
<a id="trace-7541"></a>
<a id="trace-7548"></a>
<a id="trace-7559"></a>
<a id="trace-7651"></a>
<a id="trace-7667"></a>
<a id="trace-7675"></a>
<a id="trace-7701"></a>
<a id="trace-7715"></a>
<a id="trace-7720"></a>
<a id="trace-7741"></a>
<a id="trace-7814"></a>
<a id="trace-7820"></a>
<a id="trace-7831"></a>
<a id="trace-7839"></a>
- 117.75s–126.75s (×15), actor 5, squad 0 (trace 7525): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 7342. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26252162662234985, 'next_transition': 7541}.
<a id="trace-7843"></a>
- 126.85s–126.85s (×1), actor 1, squad 0 (trace 7843): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 125.00s, trace 7749. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399921719211968, 'next_transition': 7914}.
<a id="trace-7914"></a>
<a id="trace-7925"></a>
<a id="trace-7935"></a>
<a id="trace-7950"></a>
<a id="trace-7966"></a>
<a id="trace-7977"></a>
<a id="trace-8056"></a>
- 127.25s–130.30s (×7), actor 5, squad 0 (trace 7914): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 7750. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8925095012304606, 'next_transition': 7925}.
<a id="trace-8060"></a>
- 130.45s–130.45s (×1), actor 1, squad 0 (trace 8060): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 7983. Next observer evidence: {'until': 130.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20206423621105105, 'next_transition': 8064}.
<a id="trace-8064"></a>
<a id="trace-8076"></a>
<a id="trace-8084"></a>
<a id="trace-8096"></a>
<a id="trace-8110"></a>
<a id="trace-8124"></a>
<a id="trace-8147"></a>
<a id="trace-8240"></a>
<a id="trace-8265"></a>
<a id="trace-8273"></a>
<a id="trace-8281"></a>
- 130.80s–138.30s (×11), actor 5, squad 0 (trace 8064): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 7984. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8076}.
<a id="trace-8291"></a>
- 139.20s–139.20s (×1), actor 1, squad 0 (trace 8291): ReactToContact: cover and return fire. Knowledge: actor memory at 135.00s, trace 8153. Next observer evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8364}.
<a id="trace-8292"></a>
- 139.20s–139.20s (×1), actor 1, squad 0 (trace 8292): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 135.00s, trace 8153. Next observer evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8364}.
<a id="trace-8364"></a>
<a id="trace-8436"></a>
<a id="trace-8449"></a>
<a id="trace-8460"></a>
<a id="trace-8467"></a>
<a id="trace-8478"></a>
- 139.80s–142.30s (×6), actor 5, squad 0 (trace 8364): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 8154. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8436}.
<a id="trace-8485"></a>
- 142.80s–142.80s (×1), actor 1, squad 0 (trace 8485): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 140.00s, trace 8368. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8549}.
<a id="trace-8486"></a>
- 142.80s–142.80s (×1), actor 1, squad 0 (trace 8486): rearward bound: one stationary suppressing element. Knowledge: actor memory at 140.00s, trace 8368. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8549}.
<a id="trace-8549"></a>
<a id="trace-8555"></a>
<a id="trace-8568"></a>
<a id="trace-8650"></a>
<a id="trace-8654"></a>
<a id="trace-8664"></a>
<a id="trace-8681"></a>
<a id="trace-8688"></a>
<a id="trace-8712"></a>
- 143.30s–149.30s (×9), actor 5, squad 0 (trace 8549): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 8369. Next observer evidence: {'until': 143.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8555}.
<a id="trace-1083"></a>
- 149.40s–149.40s (×1), actor 5, squad 0 (events line 1083): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8716"></a>
- 149.40s–149.40s (×1), actor 5, squad 0 (trace 8716): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.343018 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 149.40s, trace 8716. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8724}.
<a id="trace-8717"></a>
- 149.40s–149.40s (×1), actor 5, squad 0 (trace 8717): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.343018 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 149.40s, trace 8717. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8724}.
<a id="trace-8724"></a>
<a id="trace-8795"></a>
<a id="trace-8802"></a>
<a id="trace-8812"></a>
<a id="trace-8818"></a>
<a id="trace-8827"></a>
<a id="trace-8834"></a>
<a id="trace-8841"></a>
<a id="trace-8847"></a>
<a id="trace-8865"></a>
<a id="trace-8935"></a>
<a id="trace-8942"></a>
<a id="trace-8953"></a>
<a id="trace-8959"></a>
<a id="trace-8971"></a>
<a id="trace-8989"></a>
<a id="trace-8995"></a>
<a id="trace-9079"></a>
<a id="trace-9085"></a>
<a id="trace-9094"></a>
<a id="trace-9101"></a>
<a id="trace-9119"></a>
- 149.80s–162.80s (×22), actor 5, squad 0 (trace 8724): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 149.40s, trace 8717. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8795}.
<a id="trace-9122"></a>
- 162.85s–162.85s (×1), actor 1, squad 0 (trace 9122): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 160.00s, trace 9014. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9131}.
<a id="trace-9131"></a>
<a id="trace-9141"></a>
<a id="trace-9153"></a>
<a id="trace-9162"></a>
<a id="trace-9235"></a>
<a id="trace-9250"></a>
<a id="trace-9256"></a>
<a id="trace-9266"></a>
<a id="trace-9272"></a>
<a id="trace-9282"></a>
<a id="trace-9290"></a>
<a id="trace-9306"></a>
<a id="trace-9384"></a>
<a id="trace-9399"></a>
<a id="trace-9411"></a>
<a id="trace-9418"></a>
<a id="trace-9432"></a>
<a id="trace-9449"></a>
<a id="trace-9520"></a>
<a id="trace-9534"></a>
<a id="trace-9549"></a>
<a id="trace-9559"></a>
<a id="trace-9568"></a>
<a id="trace-9574"></a>
<a id="trace-9584"></a>
<a id="trace-9593"></a>
<a id="trace-9665"></a>
<a id="trace-9670"></a>
<a id="trace-9680"></a>
<a id="trace-9686"></a>
<a id="trace-9703"></a>
- 163.30s–182.80s (×31), actor 5, squad 0 (trace 9131): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 9015. Next observer evidence: {'until': 163.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9141}.
<a id="trace-9706"></a>
- 183.00s–183.00s (×1), actor 1, squad 0 (trace 9706): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 180.00s, trace 9597. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9778}.
<a id="trace-9707"></a>
- 183.00s–183.00s (×1), actor 1, squad 0 (trace 9707): MoveTactically. Knowledge: actor memory at 180.00s, trace 9597. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9778}.
<a id="trace-9708"></a>
- 183.00s–183.00s (×1), actor 1, squad 0 (trace 9708): . Knowledge: actor memory at 180.00s, trace 9597. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9778}.
<a id="trace-9778"></a>
<a id="trace-9789"></a>
<a id="trace-9815"></a>
<a id="trace-9892"></a>
- 183.30s–185.30s (×4), actor 5, squad 0 (trace 9778): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 9598. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499999999999925, 'next_transition': 9789}.
<a id="trace-9900"></a>
- 185.45s–185.45s (×1), actor 1, squad 0 (trace 9900): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 185.00s, trace 9822. Next observer evidence: {'until': 185.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9955}.
<a id="trace-9955"></a>
<a id="trace-9971"></a>
<a id="trace-9980"></a>
<a id="trace-9990"></a>
<a id="trace-10015"></a>
- 185.80s–188.30s (×5), actor 5, squad 0 (trace 9955): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 9823. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.052500361523622974, 'next_transition': 9971}.
<a id="trace-10030"></a>
- 189.10s–189.10s (×1), actor 1, squad 0 (trace 10030): ReactToContact: cover and return fire. Knowledge: actor memory at 185.00s, trace 9822. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6131019024990125, 'next_transition': 10090}.
<a id="trace-10031"></a>
- 189.10s–189.10s (×1), actor 1, squad 0 (trace 10031): new contact inside 100 m. Knowledge: actor memory at 185.00s, trace 9822. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6131019024990125, 'next_transition': 10090}.
<a id="trace-10090"></a>
<a id="trace-10169"></a>
<a id="trace-10182"></a>
<a id="trace-10192"></a>
<a id="trace-10200"></a>
<a id="trace-10212"></a>
<a id="trace-10217"></a>
<a id="trace-10225"></a>
<a id="trace-10241"></a>
<a id="trace-10314"></a>
<a id="trace-10318"></a>
<a id="trace-10337"></a>
<a id="trace-10344"></a>
<a id="trace-10349"></a>
<a id="trace-10354"></a>
- 189.30s–198.80s (×15), actor 5, squad 0 (trace 10090): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 9823. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6854215640569143, 'next_transition': 10169}.

## Net delivery

137 matched order/radio deliveries; 146 explicitly recorded losses; 3 unmatched orders (not classified as lost).
Matched delay: mean 0.347s; maximum 5.250s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1160: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1169: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2525: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2526: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2527: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2528: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2529: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2530: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3010: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3014: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3015: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3016: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3017: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3018: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3019: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3020: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3747: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3748: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3750: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3751: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3752: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3753: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3754: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3755: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3756: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3757: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3958: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3959: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3960: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3961: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3962: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3963: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3964: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3965: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3966: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3967: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3968: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 4211: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 4212: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4239: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4240: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4241: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4242: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4243: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4244: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4245: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4246: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4247: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4248: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4555: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4556: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4557: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4558: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4559: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4560: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4561: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4562: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4563: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4564: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 4723: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 4724: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 4725: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 4726: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 4727: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 4728: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 4729: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 4730: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 4731: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 4732: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 4973: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 4974: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 4975: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 4976: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 4977: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 4978: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 4979: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 4980: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 4981: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 4982: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 5148: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 5149: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 5150: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 5151: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 5152: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 5153: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 5154: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 5155: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 5156: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 5157: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 5316: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 5317: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 5318: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 5319: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 5320: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 5321: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 5322: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 5323: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 5324: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 5325: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 5476: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 5477: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 5478: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 5479: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 5480: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 5481: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 5482: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 5483: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 5484: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 5485: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 5649: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 5650: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 5651: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 5652: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 5653: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 5654: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 5655: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 5656: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 5657: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 5658: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 5888: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5889: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5890: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 5891: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5892: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5893: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 5894: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5895: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5896: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 5897: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 6167: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 6168: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 6169: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 6170: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 6171: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 6172: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 6173: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 6174: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 6175: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 6176: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 6346: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 6347: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 6348: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 6349: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 6350: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 6351: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 6352: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 6353: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 6354: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 6355: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 6584: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 6585: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 6586: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 6587: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 6588: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 6589: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 6590: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 6591: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 6592: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 6593: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 6745: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 6746: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 6747: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 6748: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 6749: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 6750: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 6751: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 6752: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 6753: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 6754: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 6927: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6928: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 6929: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 6930: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 6931: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6932: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 6933: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6934: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6935: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 6936: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 7057: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 7111: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 7112: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 7113: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 7114: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 7115: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 7116: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 7117: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 7118: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 7119: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 7120: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 7341: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 7342: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 7343: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 7344: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 7345: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 7346: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 7347: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 7348: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 7349: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 7350: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 7571: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 7572: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 7573: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 7574: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 7575: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 7576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 7577: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 7578: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 7579: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 7749: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 7750: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 7751: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 7752: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 7753: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 7754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 7755: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 7756: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 7757: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 7983: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 7984: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 7985: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 7986: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 7987: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 7988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 7989: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 7990: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 7991: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 8153: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 8154: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 8155: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 8156: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 8157: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 8158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 8159: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 8160: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 8161: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 8368: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 8369: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 8370: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 8371: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 8372: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 8373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 8374: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 8375: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 8376: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 8584: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 8585: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 8586: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 8587: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 8588: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 8589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 8590: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 8591: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 8592: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 149.40s leader 5, trace 8716: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 149.40s leader 5, trace 8717: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 8728: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 8729: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 8730: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 8731: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 8732: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 8733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 8734: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 8735: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 8736: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 8870: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 8871: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 8872: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 8873: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 8874: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 8875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 8876: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 8877: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 8878: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 9014: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 9015: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 9016: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 9017: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 9018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 9019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 9020: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 9021: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 9022: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 9165: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 9166: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 9167: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 9168: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 9169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 9170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 9171: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 9172: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 9173: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 9310: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 9311: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 9312: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 9313: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 9314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 9315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 9316: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 9317: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 9318: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 9452: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 9453: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 9454: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 9455: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 9456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 9457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 9458: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 9459: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 9460: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9597: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9598: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 9599: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 9600: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 9601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 9602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9603: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9604: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 9605: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9822: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9823: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 9824: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 9825: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 9826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 9827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9828: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9829: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 9830: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 10098: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 10099: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 10100: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 10101: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 10102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 10103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 10104: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 10105: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 10106: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 10250: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 10251: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 10252: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 10253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 10254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 10255: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 10256: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 10257: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 10363: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 10364: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 10365: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 10366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 10367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 10368: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 10369: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 10370: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 10468: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 10469: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 10470: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 10471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 10472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 10473: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 10474: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 10475: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 10574: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 10575: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 10576: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 10577: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 10578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 10579: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 10580: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 10581: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 10678: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 10679: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 10680: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 10681: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 10682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 10683: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 10684: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 10685: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 10776: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 10777: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 10778: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 10779: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 10780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 10781: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 10782: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 10783: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 10877: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 10878: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 10879: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 10880: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 10881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 10882: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 10883: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 10884: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 10986: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 10987: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 10988: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 10989: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 10990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 10991: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 10992: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 10993: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 11088: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 11089: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 11090: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 11091: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 11092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 11093: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 11094: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 11095: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 11190: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 11191: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 11192: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 11193: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 11194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 11195: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 11196: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 11197: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 11308: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 11309: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 11310: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 11311: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 11312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 11313: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 11314: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 11315: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 11429: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 11430: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 11431: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 11432: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 11433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 11434: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 11435: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 11436: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 11540: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 11541: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 11542: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 11543: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 11544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 11545: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 11546: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 11547: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 11641: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 11642: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 11643: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 11644: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 11645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 11646: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 11647: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 11648: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 11748: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 11749: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 11750: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 11751: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 11752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 11753: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 11754: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 11755: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 11866: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 11867: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 11868: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 11869: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 11870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 11871: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 11872: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 11873: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 11976: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 11977: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 11978: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 11979: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 11980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 11981: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 11982: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 11983: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 12074: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 12075: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 12076: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 12077: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 12078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 12079: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 12080: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 12081: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 12185: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 12186: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 12187: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 12188: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 12189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 12190: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 12191: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 12192: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 12305: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 12306: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 12307: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 12308: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 12309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 12310: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 12311: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 12312: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 12414: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 12415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 12416: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 12417: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 12418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 12419: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 12420: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 12421: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 12514: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 12515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 12516: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 12517: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 12518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 12519: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 12520: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 12521: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 12620: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 12621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 12622: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 12623: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 12624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 12625: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 12626: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 12627: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 12738: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 12739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 12740: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 12741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 12742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 12743: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 12744: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 12745: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 12858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 12859: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 12860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 12861: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 12862: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 12863: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 12864: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 12960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 12961: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 12962: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 12963: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 12964: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 12965: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 12966: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 13058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 13059: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 13060: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 13061: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 13062: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 13063: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 13064: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 13169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 13170: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 13171: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 13172: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 13173: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 13174: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 13175: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 13281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 13282: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 13283: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 13284: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 13285: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 13286: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 13287: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 13403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 13404: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 13405: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 13406: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 13407: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 13408: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 13409: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 13525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 13526: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 13527: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 13528: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 13529: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 13530: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 13531: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 13642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 13643: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 13644: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 13645: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 13646: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 13647: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 13648: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 13757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 13758: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 13759: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 13760: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 13761: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 13762: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 13763: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 13879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 13880: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 13881: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 13882: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 13883: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 13884: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 13885: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Tern killed in action
- 1: Reed incapacitated
- 1: Rook killed in action
- 1: Iven killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
