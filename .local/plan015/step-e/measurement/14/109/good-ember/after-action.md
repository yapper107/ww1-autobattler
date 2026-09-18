# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/14/109/good-ember/battle-109-1789673956064488433`

## Battle summary

**Ember** · 360 s · 358 shots.

### Turning points

- 24.4s, squad 4: contact (events line 284). First recorded contact.
- 42.7s, squad 0: help call ([trace 6397](#trace-6397)). No completion observed before termination.
- 48.2s, squad 0: help call ([trace 6704](#trace-6704)). No completion observed before termination.
- 55.1s, squad 0: withdrawal ([trace 7526](#trace-7526)). 108.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 101.5s, squad 0: help call ([trace 9283](#trace-9283)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 21 shots, 4/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 337 shots, 0/8 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 11.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 1250](#trace-1250)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 26.4s, squad 0 chose took cover and returned fire ([trace 2448](#trace-2448)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1249](#trace-1249)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44656563228037294, 'next_transition': 1273}.
- 38.9s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.290845 retreat threshold=0.220000 initiative=requires intent ([trace 6161](#trace-6161)). Following evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.687187089298189, 'next_transition': 6198}.

### Communication

142 matched deliveries (mean 0.52s, max 6.50s); 247 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 24.45s, squad 4, contact, evidence events line 284: First recorded contact; .
- 42.65s, squad 0, help call, evidence 6397: NeedSupport; No completion observed before termination.
- 48.15s, squad 0, help call, evidence 6704: NeedSupport; No completion observed before termination.
- 55.10s, squad 0, withdrawal, evidence 7526: BreakContact: believed ratio at least two without superiority; 108.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 101.50s, squad 0, help call, evidence 9283: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.784304520926426, 'next_transition': 648}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.784304520926426, 'next_transition': 648}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.784304520926426, 'next_transition': 648}.
<a id="trace-451"></a>
<a id="trace-472"></a>
<a id="trace-498"></a>
<a id="trace-515"></a>
<a id="trace-531"></a>
<a id="trace-548"></a>
<a id="trace-571"></a>
<a id="trace-650"></a>
<a id="trace-671"></a>
<a id="trace-695"></a>
<a id="trace-720"></a>
<a id="trace-737"></a>
<a id="trace-759"></a>
<a id="trace-781"></a>
<a id="trace-806"></a>
<a id="trace-816"></a>
<a id="trace-827"></a>
<a id="trace-909"></a>
<a id="trace-922"></a>
<a id="trace-1246"></a>
<a id="trace-1275"></a>
<a id="trace-1305"></a>
<a id="trace-1329"></a>
<a id="trace-1353"></a>
<a id="trace-1380"></a>
<a id="trace-1408"></a>
<a id="trace-1431"></a>
<a id="trace-1510"></a>
<a id="trace-1530"></a>
<a id="trace-1553"></a>
<a id="trace-1578"></a>
<a id="trace-1753"></a>
<a id="trace-1778"></a>
<a id="trace-1817"></a>
<a id="trace-1837"></a>
<a id="trace-1864"></a>
<a id="trace-1894"></a>
<a id="trace-1978"></a>
<a id="trace-2011"></a>
<a id="trace-2185"></a>
<a id="trace-2214"></a>
<a id="trace-2244"></a>
<a id="trace-2257"></a>
<a id="trace-2279"></a>
<a id="trace-2294"></a>
<a id="trace-2312"></a>
<a id="trace-2332"></a>
<a id="trace-2413"></a>
<a id="trace-2423"></a>
<a id="trace-2444"></a>
<a id="trace-2648"></a>
<a id="trace-2671"></a>
<a id="trace-2699"></a>
<a id="trace-2721"></a>
<a id="trace-2739"></a>
<a id="trace-2760"></a>
<a id="trace-2774"></a>
<a id="trace-2874"></a>
<a id="trace-2885"></a>
<a id="trace-2902"></a>
<a id="trace-2911"></a>
<a id="trace-2926"></a>
<a id="trace-3162"></a>
<a id="trace-3182"></a>
<a id="trace-3210"></a>
<a id="trace-3233"></a>
<a id="trace-3246"></a>
<a id="trace-3351"></a>
<a id="trace-3370"></a>
<a id="trace-3388"></a>
<a id="trace-6067"></a>
<a id="trace-6081"></a>
<a id="trace-6103"></a>
<a id="trace-6123"></a>
<a id="trace-6155"></a>
<a id="trace-6200"></a>
<a id="trace-6242"></a>
<a id="trace-6326"></a>
<a id="trace-6349"></a>
<a id="trace-6364"></a>
<a id="trace-6376"></a>
<a id="trace-6389"></a>
<a id="trace-6407"></a>
<a id="trace-6524"></a>
<a id="trace-6539"></a>
<a id="trace-6564"></a>
<a id="trace-6578"></a>
<a id="trace-6652"></a>
<a id="trace-6665"></a>
<a id="trace-6675"></a>
<a id="trace-6680"></a>
<a id="trace-6687"></a>
<a id="trace-6694"></a>
<a id="trace-6712"></a>
<a id="trace-6722"></a>
<a id="trace-6905"></a>
<a id="trace-6923"></a>
<a id="trace-7007"></a>
<a id="trace-7016"></a>
<a id="trace-7028"></a>
<a id="trace-7221"></a>
<a id="trace-7232"></a>
<a id="trace-7249"></a>
<a id="trace-7269"></a>
<a id="trace-7460"></a>
<a id="trace-7475"></a>
<a id="trace-7495"></a>
<a id="trace-7635"></a>
<a id="trace-7640"></a>
<a id="trace-7662"></a>
<a id="trace-7686"></a>
<a id="trace-7694"></a>
<a id="trace-7705"></a>
<a id="trace-7724"></a>
<a id="trace-7731"></a>
<a id="trace-7740"></a>
<a id="trace-7750"></a>
<a id="trace-7822"></a>
<a id="trace-7833"></a>
<a id="trace-7841"></a>
<a id="trace-7848"></a>
<a id="trace-7864"></a>
<a id="trace-7869"></a>
<a id="trace-7879"></a>
<a id="trace-7886"></a>
<a id="trace-7897"></a>
<a id="trace-7907"></a>
<a id="trace-7979"></a>
<a id="trace-7984"></a>
<a id="trace-7999"></a>
<a id="trace-8010"></a>
<a id="trace-8028"></a>
<a id="trace-8039"></a>
<a id="trace-8180"></a>
<a id="trace-8190"></a>
<a id="trace-8206"></a>
<a id="trace-8287"></a>
<a id="trace-8291"></a>
<a id="trace-8304"></a>
<a id="trace-8316"></a>
<a id="trace-8330"></a>
<a id="trace-8338"></a>
<a id="trace-8352"></a>
<a id="trace-8362"></a>
<a id="trace-8379"></a>
<a id="trace-8390"></a>
<a id="trace-8465"></a>
<a id="trace-8471"></a>
<a id="trace-8484"></a>
<a id="trace-8492"></a>
<a id="trace-8507"></a>
<a id="trace-8514"></a>
<a id="trace-8527"></a>
<a id="trace-8543"></a>
<a id="trace-8555"></a>
<a id="trace-8570"></a>
<a id="trace-8652"></a>
<a id="trace-8663"></a>
<a id="trace-8681"></a>
<a id="trace-8690"></a>
<a id="trace-8698"></a>
<a id="trace-8711"></a>
<a id="trace-8780"></a>
<a id="trace-8786"></a>
<a id="trace-8799"></a>
<a id="trace-8810"></a>
<a id="trace-8887"></a>
<a id="trace-8890"></a>
<a id="trace-8896"></a>
<a id="trace-8901"></a>
<a id="trace-8916"></a>
<a id="trace-8923"></a>
<a id="trace-8932"></a>
<a id="trace-8936"></a>
<a id="trace-8943"></a>
<a id="trace-8951"></a>
<a id="trace-9022"></a>
<a id="trace-9027"></a>
<a id="trace-9033"></a>
<a id="trace-9037"></a>
<a id="trace-9044"></a>
<a id="trace-9047"></a>
<a id="trace-9054"></a>
<a id="trace-9058"></a>
<a id="trace-9066"></a>
<a id="trace-9074"></a>
<a id="trace-9145"></a>
<a id="trace-9149"></a>
<a id="trace-9156"></a>
<a id="trace-9160"></a>
<a id="trace-9167"></a>
<a id="trace-9172"></a>
<a id="trace-9180"></a>
<a id="trace-9185"></a>
<a id="trace-9193"></a>
<a id="trace-9201"></a>
<a id="trace-9271"></a>
<a id="trace-9276"></a>
<a id="trace-9282"></a>
<a id="trace-9291"></a>
<a id="trace-9298"></a>
<a id="trace-9302"></a>
<a id="trace-9311"></a>
<a id="trace-9317"></a>
<a id="trace-9328"></a>
<a id="trace-9336"></a>
<a id="trace-9408"></a>
<a id="trace-9412"></a>
<a id="trace-9417"></a>
<a id="trace-9422"></a>
<a id="trace-9428"></a>
<a id="trace-9432"></a>
<a id="trace-9443"></a>
<a id="trace-9454"></a>
<a id="trace-9468"></a>
<a id="trace-9480"></a>
<a id="trace-9557"></a>
<a id="trace-9565"></a>
<a id="trace-9570"></a>
<a id="trace-9578"></a>
<a id="trace-9599"></a>
<a id="trace-9610"></a>
<a id="trace-9625"></a>
<a id="trace-9633"></a>
<a id="trace-9640"></a>
<a id="trace-9646"></a>
<a id="trace-9725"></a>
<a id="trace-9729"></a>
<a id="trace-9735"></a>
<a id="trace-9810"></a>
<a id="trace-9823"></a>
<a id="trace-9838"></a>
<a id="trace-9845"></a>
<a id="trace-9853"></a>
<a id="trace-9860"></a>
<a id="trace-9866"></a>
<a id="trace-9936"></a>
<a id="trace-9942"></a>
<a id="trace-9963"></a>
<a id="trace-9975"></a>
<a id="trace-9982"></a>
<a id="trace-9990"></a>
<a id="trace-9998"></a>
<a id="trace-10002"></a>
<a id="trace-10007"></a>
<a id="trace-10073"></a>
<a id="trace-10075"></a>
<a id="trace-10084"></a>
<a id="trace-10091"></a>
<a id="trace-10097"></a>
<a id="trace-10104"></a>
<a id="trace-10220"></a>
<a id="trace-10232"></a>
<a id="trace-10243"></a>
<a id="trace-10253"></a>
<a id="trace-10327"></a>
<a id="trace-10333"></a>
<a id="trace-10341"></a>
<a id="trace-10350"></a>
<a id="trace-10364"></a>
<a id="trace-10378"></a>
<a id="trace-10388"></a>
<a id="trace-10397"></a>
<a id="trace-10411"></a>
<a id="trace-10418"></a>
<a id="trace-10488"></a>
<a id="trace-10494"></a>
<a id="trace-10510"></a>
<a id="trace-10521"></a>
<a id="trace-10534"></a>
<a id="trace-10542"></a>
<a id="trace-10561"></a>
<a id="trace-10571"></a>
<a id="trace-10581"></a>
<a id="trace-10588"></a>
<a id="trace-10663"></a>
<a id="trace-10679"></a>
<a id="trace-10719"></a>
<a id="trace-10729"></a>
<a id="trace-10746"></a>
<a id="trace-10750"></a>
<a id="trace-10760"></a>
<a id="trace-10772"></a>
<a id="trace-10782"></a>
<a id="trace-10794"></a>
<a id="trace-10863"></a>
<a id="trace-10867"></a>
<a id="trace-10876"></a>
<a id="trace-10880"></a>
<a id="trace-10890"></a>
<a id="trace-10897"></a>
<a id="trace-10903"></a>
<a id="trace-10908"></a>
<a id="trace-10916"></a>
<a id="trace-10924"></a>
<a id="trace-10994"></a>
<a id="trace-10999"></a>
<a id="trace-11011"></a>
<a id="trace-11017"></a>
<a id="trace-11027"></a>
<a id="trace-11034"></a>
<a id="trace-11041"></a>
<a id="trace-11046"></a>
<a id="trace-11053"></a>
<a id="trace-11059"></a>
<a id="trace-11131"></a>
<a id="trace-11135"></a>
<a id="trace-11143"></a>
<a id="trace-11151"></a>
<a id="trace-11161"></a>
<a id="trace-11166"></a>
<a id="trace-11175"></a>
<a id="trace-11183"></a>
<a id="trace-11193"></a>
<a id="trace-11197"></a>
<a id="trace-11266"></a>
<a id="trace-11270"></a>
<a id="trace-11276"></a>
<a id="trace-11283"></a>
<a id="trace-11293"></a>
<a id="trace-11300"></a>
<a id="trace-11309"></a>
<a id="trace-11314"></a>
<a id="trace-11325"></a>
<a id="trace-11332"></a>
<a id="trace-11401"></a>
<a id="trace-11409"></a>
<a id="trace-11416"></a>
<a id="trace-11421"></a>
<a id="trace-11430"></a>
<a id="trace-11436"></a>
<a id="trace-11443"></a>
<a id="trace-11448"></a>
<a id="trace-11459"></a>
<a id="trace-11466"></a>
<a id="trace-11535"></a>
<a id="trace-11541"></a>
<a id="trace-11549"></a>
<a id="trace-11555"></a>
<a id="trace-11569"></a>
<a id="trace-11575"></a>
<a id="trace-11580"></a>
<a id="trace-11585"></a>
<a id="trace-11592"></a>
<a id="trace-11598"></a>
<a id="trace-11667"></a>
<a id="trace-11670"></a>
<a id="trace-11679"></a>
<a id="trace-11687"></a>
<a id="trace-11699"></a>
<a id="trace-11707"></a>
<a id="trace-11716"></a>
<a id="trace-11722"></a>
<a id="trace-11735"></a>
<a id="trace-11740"></a>
<a id="trace-11808"></a>
<a id="trace-11812"></a>
<a id="trace-11818"></a>
<a id="trace-11824"></a>
<a id="trace-11833"></a>
<a id="trace-11840"></a>
<a id="trace-11848"></a>
<a id="trace-11857"></a>
<a id="trace-11869"></a>
<a id="trace-11874"></a>
<a id="trace-11949"></a>
<a id="trace-11957"></a>
<a id="trace-11963"></a>
<a id="trace-11972"></a>
<a id="trace-11976"></a>
<a id="trace-11983"></a>
<a id="trace-11987"></a>
<a id="trace-11998"></a>
<a id="trace-12004"></a>
<a id="trace-12074"></a>
<a id="trace-12079"></a>
<a id="trace-12089"></a>
<a id="trace-12097"></a>
<a id="trace-12111"></a>
<a id="trace-12116"></a>
<a id="trace-12125"></a>
<a id="trace-12130"></a>
<a id="trace-12138"></a>
<a id="trace-12143"></a>
<a id="trace-12211"></a>
<a id="trace-12216"></a>
<a id="trace-12224"></a>
<a id="trace-12229"></a>
<a id="trace-12240"></a>
<a id="trace-12249"></a>
<a id="trace-12258"></a>
<a id="trace-12267"></a>
<a id="trace-12275"></a>
<a id="trace-12281"></a>
<a id="trace-12352"></a>
<a id="trace-12356"></a>
<a id="trace-12362"></a>
<a id="trace-12367"></a>
<a id="trace-12377"></a>
<a id="trace-12383"></a>
<a id="trace-12391"></a>
<a id="trace-12398"></a>
<a id="trace-12408"></a>
<a id="trace-12415"></a>
<a id="trace-12488"></a>
<a id="trace-12491"></a>
<a id="trace-12498"></a>
<a id="trace-12505"></a>
<a id="trace-12515"></a>
<a id="trace-12520"></a>
<a id="trace-12526"></a>
<a id="trace-12531"></a>
<a id="trace-12541"></a>
<a id="trace-12548"></a>
<a id="trace-12618"></a>
<a id="trace-12624"></a>
<a id="trace-12632"></a>
<a id="trace-12637"></a>
<a id="trace-12650"></a>
<a id="trace-12657"></a>
<a id="trace-12665"></a>
<a id="trace-12672"></a>
<a id="trace-12680"></a>
<a id="trace-12687"></a>
<a id="trace-12755"></a>
<a id="trace-12761"></a>
<a id="trace-12769"></a>
<a id="trace-12775"></a>
<a id="trace-12786"></a>
<a id="trace-12791"></a>
<a id="trace-12799"></a>
<a id="trace-12806"></a>
<a id="trace-12814"></a>
<a id="trace-12821"></a>
<a id="trace-12890"></a>
<a id="trace-12895"></a>
<a id="trace-12905"></a>
<a id="trace-12910"></a>
<a id="trace-12920"></a>
<a id="trace-12927"></a>
<a id="trace-12934"></a>
<a id="trace-12939"></a>
<a id="trace-12949"></a>
<a id="trace-12955"></a>
<a id="trace-13026"></a>
<a id="trace-13030"></a>
<a id="trace-13037"></a>
<a id="trace-13043"></a>
<a id="trace-13055"></a>
<a id="trace-13065"></a>
<a id="trace-13070"></a>
<a id="trace-13076"></a>
<a id="trace-13087"></a>
<a id="trace-13092"></a>
<a id="trace-13162"></a>
<a id="trace-13168"></a>
<a id="trace-13174"></a>
<a id="trace-13181"></a>
<a id="trace-13191"></a>
<a id="trace-13196"></a>
<a id="trace-13202"></a>
<a id="trace-13209"></a>
<a id="trace-13222"></a>
<a id="trace-13229"></a>
<a id="trace-13298"></a>
<a id="trace-13302"></a>
<a id="trace-13310"></a>
<a id="trace-13317"></a>
<a id="trace-13328"></a>
<a id="trace-13333"></a>
<a id="trace-13341"></a>
<a id="trace-13346"></a>
<a id="trace-13353"></a>
<a id="trace-13360"></a>
<a id="trace-13428"></a>
<a id="trace-13433"></a>
<a id="trace-13445"></a>
<a id="trace-13451"></a>
<a id="trace-13463"></a>
<a id="trace-13470"></a>
<a id="trace-13477"></a>
<a id="trace-13484"></a>
<a id="trace-13493"></a>
<a id="trace-13497"></a>
<a id="trace-13566"></a>
<a id="trace-13569"></a>
<a id="trace-13574"></a>
<a id="trace-13580"></a>
<a id="trace-13590"></a>
<a id="trace-13596"></a>
<a id="trace-13603"></a>
<a id="trace-13615"></a>
<a id="trace-13625"></a>
<a id="trace-13631"></a>
<a id="trace-13701"></a>
<a id="trace-13705"></a>
<a id="trace-13711"></a>
<a id="trace-13718"></a>
<a id="trace-13726"></a>
<a id="trace-13731"></a>
<a id="trace-13737"></a>
<a id="trace-13743"></a>
<a id="trace-13752"></a>
<a id="trace-13757"></a>
<a id="trace-13831"></a>
<a id="trace-13840"></a>
<a id="trace-13848"></a>
<a id="trace-13853"></a>
<a id="trace-13863"></a>
<a id="trace-13869"></a>
<a id="trace-13877"></a>
<a id="trace-13882"></a>
<a id="trace-13889"></a>
<a id="trace-13894"></a>
<a id="trace-13963"></a>
<a id="trace-13967"></a>
<a id="trace-13976"></a>
<a id="trace-13985"></a>
<a id="trace-13998"></a>
<a id="trace-14003"></a>
<a id="trace-14013"></a>
<a id="trace-14021"></a>
<a id="trace-14035"></a>
<a id="trace-14102"></a>
<a id="trace-14106"></a>
<a id="trace-14112"></a>
<a id="trace-14117"></a>
<a id="trace-14128"></a>
<a id="trace-14136"></a>
<a id="trace-14147"></a>
<a id="trace-14156"></a>
<a id="trace-14169"></a>
<a id="trace-14178"></a>
<a id="trace-14254"></a>
<a id="trace-14259"></a>
<a id="trace-14267"></a>
<a id="trace-14272"></a>
<a id="trace-14281"></a>
<a id="trace-14286"></a>
<a id="trace-14292"></a>
<a id="trace-14297"></a>
<a id="trace-14306"></a>
<a id="trace-14312"></a>
<a id="trace-14382"></a>
<a id="trace-14389"></a>
<a id="trace-14400"></a>
<a id="trace-14409"></a>
<a id="trace-14421"></a>
<a id="trace-14425"></a>
<a id="trace-14434"></a>
<a id="trace-14439"></a>
<a id="trace-14447"></a>
<a id="trace-14451"></a>
<a id="trace-14518"></a>
<a id="trace-14523"></a>
<a id="trace-14529"></a>
<a id="trace-14537"></a>
<a id="trace-14548"></a>
<a id="trace-14558"></a>
<a id="trace-14568"></a>
<a id="trace-14573"></a>
<a id="trace-14583"></a>
<a id="trace-14592"></a>
<a id="trace-14660"></a>
<a id="trace-14664"></a>
<a id="trace-14670"></a>
<a id="trace-14675"></a>
<a id="trace-14685"></a>
<a id="trace-14691"></a>
<a id="trace-14699"></a>
<a id="trace-14706"></a>
<a id="trace-14718"></a>
<a id="trace-14725"></a>
<a id="trace-14796"></a>
<a id="trace-14801"></a>
<a id="trace-14809"></a>
<a id="trace-14815"></a>
<a id="trace-14825"></a>
<a id="trace-14830"></a>
<a id="trace-14836"></a>
<a id="trace-14842"></a>
<a id="trace-14850"></a>
<a id="trace-14857"></a>
<a id="trace-14927"></a>
<a id="trace-14930"></a>
<a id="trace-14939"></a>
<a id="trace-14948"></a>
<a id="trace-14960"></a>
<a id="trace-14966"></a>
<a id="trace-14972"></a>
<a id="trace-14978"></a>
<a id="trace-14989"></a>
<a id="trace-14994"></a>
<a id="trace-15063"></a>
<a id="trace-15067"></a>
<a id="trace-15075"></a>
<a id="trace-15082"></a>
<a id="trace-15093"></a>
<a id="trace-15100"></a>
<a id="trace-15108"></a>
<a id="trace-15117"></a>
<a id="trace-15129"></a>
<a id="trace-15134"></a>
<a id="trace-15202"></a>
<a id="trace-15206"></a>
<a id="trace-15214"></a>
<a id="trace-15221"></a>
<a id="trace-15229"></a>
<a id="trace-15234"></a>
<a id="trace-15242"></a>
<a id="trace-15248"></a>
<a id="trace-15259"></a>
<a id="trace-15266"></a>
<a id="trace-15337"></a>
<a id="trace-15342"></a>
<a id="trace-15350"></a>
<a id="trace-15357"></a>
<a id="trace-15365"></a>
<a id="trace-15369"></a>
<a id="trace-15378"></a>
<a id="trace-15385"></a>
<a id="trace-15393"></a>
<a id="trace-15400"></a>
<a id="trace-15470"></a>
<a id="trace-15476"></a>
<a id="trace-15484"></a>
<a id="trace-15491"></a>
<a id="trace-15503"></a>
<a id="trace-15512"></a>
<a id="trace-15518"></a>
<a id="trace-15524"></a>
<a id="trace-15532"></a>
<a id="trace-15537"></a>
<a id="trace-15607"></a>
<a id="trace-15613"></a>
<a id="trace-15622"></a>
<a id="trace-15629"></a>
<a id="trace-15639"></a>
<a id="trace-15646"></a>
<a id="trace-15654"></a>
<a id="trace-15660"></a>
<a id="trace-15672"></a>
<a id="trace-15678"></a>
<a id="trace-15746"></a>
<a id="trace-15750"></a>
<a id="trace-15757"></a>
<a id="trace-15763"></a>
<a id="trace-15771"></a>
<a id="trace-15781"></a>
<a id="trace-15791"></a>
<a id="trace-15795"></a>
<a id="trace-15805"></a>
<a id="trace-15813"></a>
<a id="trace-15884"></a>
<a id="trace-15890"></a>
<a id="trace-15898"></a>
<a id="trace-15904"></a>
<a id="trace-15912"></a>
<a id="trace-15918"></a>
<a id="trace-15926"></a>
<a id="trace-15933"></a>
<a id="trace-15943"></a>
<a id="trace-15949"></a>
<a id="trace-16021"></a>
<a id="trace-16028"></a>
<a id="trace-16036"></a>
<a id="trace-16043"></a>
<a id="trace-16053"></a>
<a id="trace-16059"></a>
<a id="trace-16068"></a>
<a id="trace-16074"></a>
<a id="trace-16082"></a>
<a id="trace-16087"></a>
<a id="trace-16156"></a>
<a id="trace-16161"></a>
<a id="trace-16169"></a>
<a id="trace-16177"></a>
<a id="trace-16189"></a>
<a id="trace-16196"></a>
<a id="trace-16204"></a>
<a id="trace-16210"></a>
<a id="trace-16221"></a>
<a id="trace-16228"></a>
<a id="trace-16296"></a>
<a id="trace-16300"></a>
<a id="trace-16306"></a>
<a id="trace-16312"></a>
<a id="trace-16319"></a>
<a id="trace-16327"></a>
<a id="trace-16335"></a>
<a id="trace-16342"></a>
<a id="trace-16355"></a>
<a id="trace-16362"></a>
<a id="trace-16433"></a>
<a id="trace-16439"></a>
<a id="trace-16445"></a>
<a id="trace-16452"></a>
<a id="trace-16460"></a>
<a id="trace-16466"></a>
<a id="trace-16472"></a>
<a id="trace-16477"></a>
<a id="trace-16487"></a>
<a id="trace-16495"></a>
<a id="trace-16565"></a>
<a id="trace-16570"></a>
<a id="trace-16579"></a>
<a id="trace-16587"></a>
<a id="trace-16598"></a>
<a id="trace-16603"></a>
<a id="trace-16608"></a>
<a id="trace-16614"></a>
<a id="trace-16625"></a>
<a id="trace-16632"></a>
- 1.60s–359.80s (×713), actor 37, squad 4 (trace 451): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249916668197334, 'next_transition': 472}.
<a id="trace-648"></a>
<a id="trace-669"></a>
<a id="trace-693"></a>
<a id="trace-718"></a>
<a id="trace-735"></a>
<a id="trace-757"></a>
<a id="trace-779"></a>
<a id="trace-804"></a>
<a id="trace-907"></a>
<a id="trace-920"></a>
- 5.20s–10.70s (×10), actor 5, squad 0 (trace 648): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 583. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0933986962206863, 'next_transition': 669}.
<a id="trace-928"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 928): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 830. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37874466466629014, 'next_transition': 1244}.
<a id="trace-1244"></a>
- 11.20s–11.20s (×1), actor 5, squad 0 (trace 1244): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 835. Next observer evidence: None.
<a id="trace-137"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 137): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44656563228037294, 'next_transition': 1273}.
<a id="trace-1249"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1249): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1249. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44656563228037294, 'next_transition': 1273}.
<a id="trace-1250"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1250): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1250. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44656563228037294, 'next_transition': 1273}.
<a id="trace-1273"></a>
<a id="trace-1303"></a>
<a id="trace-1327"></a>
<a id="trace-1351"></a>
<a id="trace-1406"></a>
<a id="trace-1508"></a>
<a id="trace-1528"></a>
<a id="trace-1551"></a>
- 11.70s–16.25s (×8), actor 5, squad 0 (trace 1273): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1250. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47187015910027724, 'next_transition': 1303}.
<a id="trace-1579"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 1579): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1434. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8449917892558851, 'next_transition': 1751}.
<a id="trace-1580"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 1580): received platoon directive. Knowledge: actor memory at 15.00s, trace 1434. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8449917892558851, 'next_transition': 1751}.
<a id="trace-1751"></a>
<a id="trace-1835"></a>
<a id="trace-1862"></a>
<a id="trace-1976"></a>
<a id="trace-2009"></a>
- 17.25s–20.75s (×5), actor 5, squad 0 (trace 1751): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1439. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0272698835119356, 'next_transition': 1835}.
<a id="trace-2012"></a>
- 20.75s–20.75s (×1), actor 0, squad 0 (trace 2012): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1901. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5315644814630727, 'next_transition': 2183}.
<a id="trace-2183"></a>
<a id="trace-2212"></a>
<a id="trace-2242"></a>
<a id="trace-2292"></a>
<a id="trace-2310"></a>
<a id="trace-2330"></a>
<a id="trace-2421"></a>
<a id="trace-2442"></a>
- 21.25s–26.25s (×8), actor 5, squad 0 (trace 2183): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1906. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25593637670915315, 'next_transition': 2212}.
<a id="trace-2448"></a>
- 26.35s–26.35s (×1), actor 0, squad 0 (trace 2448): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 2336. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9192824021302581, 'next_transition': 2669}.
<a id="trace-2449"></a>
- 26.35s–26.35s (×1), actor 0, squad 0 (trace 2449): bounding overwatch. Knowledge: actor memory at 25.00s, trace 2336. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9192824021302581, 'next_transition': 2669}.
<a id="trace-2450"></a>
- 26.35s–26.35s (×1), actor 0, squad 0 (trace 2450): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 2336. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9192824021302581, 'next_transition': 2669}.
<a id="trace-2669"></a>
<a id="trace-2697"></a>
<a id="trace-2719"></a>
<a id="trace-2737"></a>
<a id="trace-2758"></a>
<a id="trace-2772"></a>
- 27.25s–29.75s (×6), actor 5, squad 0 (trace 2669): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2341. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25036593680143304, 'next_transition': 2697}.
<a id="trace-2790"></a>
- 29.95s–29.95s (×1), actor 0, squad 0 (trace 2790): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 2336. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2849955109538701, 'next_transition': 2872}.
<a id="trace-2872"></a>
<a id="trace-2883"></a>
<a id="trace-2900"></a>
<a id="trace-2909"></a>
- 30.25s–31.75s (×4), actor 5, squad 0 (trace 2872): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2797. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2850103117711581, 'next_transition': 2883}.
<a id="trace-2930"></a>
- 32.50s–32.50s (×1), actor 0, squad 0 (trace 2930): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 2792. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1173518487453969, 'next_transition': 3160}.
<a id="trace-3160"></a>
<a id="trace-3208"></a>
<a id="trace-3231"></a>
<a id="trace-3368"></a>
- 32.75s–35.75s (×4), actor 5, squad 0 (trace 3160): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2797. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.639159296438794, 'next_transition': 3208}.
<a id="trace-3379"></a>
- 36.15s–36.15s (×1), actor 0, squad 0 (trace 3379): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 3250. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03240035465288389, 'next_transition': 3386}.
<a id="trace-3386"></a>
- 36.25s–36.25s (×1), actor 5, squad 0 (trace 3386): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3255. Next observer evidence: {'until': 36.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3390}.
<a id="trace-3390"></a>
- 36.40s–36.40s (×1), actor 0, squad 0 (trace 3390): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 3250. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4950012796956484, 'next_transition': 6079}.
<a id="trace-5821"></a>
- 36.40s–36.40s (×1), actor 0, squad 0 (trace 5821): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 35.00s, trace 3250. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4950012796956484, 'next_transition': 6079}.
<a id="trace-5822"></a>
- 36.40s–36.40s (×1), actor 0, squad 0 (trace 5822): MoveTactically. Knowledge: actor memory at 35.00s, trace 3250. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4950012796956484, 'next_transition': 6079}.
<a id="trace-5823"></a>
- 36.40s–36.40s (×1), actor 0, squad 0 (trace 5823): contact cover complete: assessment resumes closure. Knowledge: actor memory at 35.00s, trace 3250. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4950012796956484, 'next_transition': 6079}.
<a id="trace-6079"></a>
<a id="trace-6121"></a>
<a id="trace-6153"></a>
- 37.25s–38.75s (×3), actor 5, squad 0 (trace 6079): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3255. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1183454477489168, 'next_transition': 6121}.
<a id="trace-465"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 465): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6161"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 6161): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.290845 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 6161. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.687187089298189, 'next_transition': 6198}.
<a id="trace-6162"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 6162): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.290845 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 6162. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.687187089298189, 'next_transition': 6198}.
<a id="trace-6198"></a>
<a id="trace-6240"></a>
<a id="trace-6347"></a>
<a id="trace-6374"></a>
<a id="trace-6387"></a>
- 39.25s–42.25s (×5), actor 5, squad 0 (trace 6198): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 6162. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.6871798291878489, 'next_transition': 6240}.
<a id="trace-6395"></a>
- 42.65s–42.65s (×1), actor 1, squad 0 (trace 6395): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 40.00s, trace 6248. Next observer evidence: None.
<a id="trace-6397"></a>
- 42.65s–42.65s (×1), actor 1, squad 0 (trace 6397): NeedSupport. Knowledge: actor memory at 40.00s, trace 6248. Next observer evidence: None.
<a id="trace-6405"></a>
- 42.75s–42.75s (×1), actor 5, squad 0 (trace 6405): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 6251. Next observer evidence: {'until': 42.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40001866096652255, 'next_transition': 6411}.
<a id="trace-6411"></a>
- 42.90s–42.90s (×1), actor 1, squad 0 (trace 6411): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 6248. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000044034827374, 'next_transition': 6522}.
<a id="trace-6416"></a>
- 42.90s–42.90s (×1), actor 1, squad 0 (trace 6416): MoveTactically. Knowledge: actor memory at 40.00s, trace 6248. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000044034827374, 'next_transition': 6522}.
<a id="trace-6417"></a>
- 42.90s–42.90s (×1), actor 1, squad 0 (trace 6417): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 40.00s, trace 6248. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000044034827374, 'next_transition': 6522}.
<a id="trace-6522"></a>
<a id="trace-6537"></a>
<a id="trace-6562"></a>
<a id="trace-6576"></a>
- 43.25s–44.75s (×4), actor 5, squad 0 (trace 6522): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 6251. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000042120534747, 'next_transition': 6537}.
<a id="trace-6704"></a>
- 48.15s–48.15s (×1), actor 1, squad 0 (trace 6704): NeedSupport. Knowledge: actor memory at 45.00s, trace 6580. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450893008244833, 'next_transition': 6720}.
<a id="trace-6720"></a>
- 48.75s–48.75s (×1), actor 5, squad 0 (trace 6720): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 6583. Next observer evidence: {'until': 48.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1900102389816282, 'next_transition': 6725}.
<a id="trace-6725"></a>
- 48.85s–48.85s (×1), actor 1, squad 0 (trace 6725): traveling overwatch. Knowledge: actor memory at 45.00s, trace 6580. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9121780646441792, 'next_transition': 7005}.
<a id="trace-6726"></a>
- 48.85s–48.85s (×1), actor 1, squad 0 (trace 6726): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 6580. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9121780646441792, 'next_transition': 7005}.
<a id="trace-7005"></a>
- 50.25s–50.25s (×1), actor 5, squad 0 (trace 7005): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 6929. Next observer evidence: {'until': 51.6, 'shots': 13, 'casualties': 0, 'mean_displacement': 0.7175672727582953, 'next_transition': 7044}.
<a id="trace-7044"></a>
- 51.70s–51.70s (×1), actor 1, squad 0 (trace 7044): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 6926. Next observer evidence: None.
<a id="trace-7045"></a>
- 51.70s–51.70s (×1), actor 1, squad 0 (trace 7045): bounding overwatch. Knowledge: actor memory at 50.00s, trace 6926. Next observer evidence: None.
<a id="trace-7046"></a>
- 51.70s–51.70s (×1), actor 1, squad 0 (trace 7046): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 6926. Next observer evidence: None.
<a id="trace-7219"></a>
<a id="trace-7247"></a>
<a id="trace-7267"></a>
- 51.75s–53.25s (×3), actor 5, squad 0 (trace 7219): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 6929. Next observer evidence: {'until': 52.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.49715455974196016, 'next_transition': 7247}.
<a id="trace-7284"></a>
- 53.70s–53.70s (×1), actor 1, squad 0 (trace 7284): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 6926. Next observer evidence: {'until': 55, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.008474558166129397, 'next_transition': 7526}.
<a id="trace-7451"></a>
- 53.70s–53.70s (×1), actor 1, squad 0 (trace 7451): Fixing. Knowledge: actor memory at 50.00s, trace 6926. Next observer evidence: {'until': 55, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.008474558166129397, 'next_transition': 7526}.
<a id="trace-7526"></a>
- 55.10s–55.10s (×1), actor 1, squad 0 (trace 7526): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 55.00s, trace 7508. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7633}.
<a id="trace-7527"></a>
- 55.10s–55.10s (×1), actor 1, squad 0 (trace 7527): rearward bound: one stationary suppressing element. Knowledge: actor memory at 55.00s, trace 7508. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7633}.
<a id="trace-7633"></a>
<a id="trace-7638"></a>
<a id="trace-7660"></a>
<a id="trace-7692"></a>
<a id="trace-7722"></a>
<a id="trace-7729"></a>
<a id="trace-7738"></a>
<a id="trace-7748"></a>
<a id="trace-7831"></a>
<a id="trace-7839"></a>
<a id="trace-7862"></a>
<a id="trace-7884"></a>
<a id="trace-7895"></a>
<a id="trace-7905"></a>
<a id="trace-7982"></a>
<a id="trace-7997"></a>
<a id="trace-8019"></a>
<a id="trace-8026"></a>
<a id="trace-8037"></a>
- 55.25s–68.25s (×19), actor 5, squad 0 (trace 7633): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 7511. Next observer evidence: {'until': 55.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7638}.
<a id="trace-8044"></a>
- 68.70s–68.70s (×1), actor 1, squad 0 (trace 8044): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 7913. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299783406473363, 'next_transition': 8188}.
<a id="trace-8071"></a>
- 68.70s–68.70s (×1), actor 1, squad 0 (trace 8071): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 7913. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299783406473363, 'next_transition': 8188}.
<a id="trace-8188"></a>
<a id="trace-8204"></a>
<a id="trace-8285"></a>
<a id="trace-8289"></a>
<a id="trace-8302"></a>
<a id="trace-8314"></a>
<a id="trace-8328"></a>
<a id="trace-8360"></a>
<a id="trace-8377"></a>
<a id="trace-8388"></a>
<a id="trace-8463"></a>
<a id="trace-8469"></a>
<a id="trace-8482"></a>
<a id="trace-8490"></a>
<a id="trace-8505"></a>
<a id="trace-8512"></a>
<a id="trace-8541"></a>
<a id="trace-8553"></a>
<a id="trace-8568"></a>
<a id="trace-8650"></a>
<a id="trace-8661"></a>
<a id="trace-8679"></a>
<a id="trace-8688"></a>
<a id="trace-8696"></a>
<a id="trace-8709"></a>
- 69.25s–82.75s (×25), actor 5, squad 0 (trace 8188): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 7916. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5670067413623967, 'next_transition': 8204}.
<a id="trace-8718"></a>
- 83.05s–83.05s (×1), actor 1, squad 0 (trace 8718): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 8577. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8778}.
<a id="trace-8719"></a>
- 83.05s–83.05s (×1), actor 1, squad 0 (trace 8719): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 8577. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8778}.
<a id="trace-8778"></a>
<a id="trace-8784"></a>
<a id="trace-8797"></a>
<a id="trace-8885"></a>
<a id="trace-8894"></a>
- 83.25s–86.25s (×5), actor 5, squad 0 (trace 8778): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 8580. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8784}.
<a id="trace-8897"></a>
- 86.25s–86.25s (×1), actor 1, squad 0 (trace 8897): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 8817. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8899}.
<a id="trace-8899"></a>
<a id="trace-8914"></a>
<a id="trace-8921"></a>
<a id="trace-8930"></a>
<a id="trace-8941"></a>
<a id="trace-8949"></a>
<a id="trace-9025"></a>
<a id="trace-9035"></a>
<a id="trace-9042"></a>
<a id="trace-9064"></a>
<a id="trace-9072"></a>
<a id="trace-9143"></a>
<a id="trace-9154"></a>
<a id="trace-9158"></a>
<a id="trace-9165"></a>
<a id="trace-9170"></a>
<a id="trace-9178"></a>
<a id="trace-9183"></a>
<a id="trace-9191"></a>
<a id="trace-9199"></a>
<a id="trace-9269"></a>
<a id="trace-9274"></a>
- 86.75s–100.75s (×22), actor 5, squad 0 (trace 8899): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 8820. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8914}.
<a id="trace-9283"></a>
- 101.50s–101.50s (×1), actor 1, squad 0 (trace 9283): NeedSupport. Knowledge: actor memory at 100.00s, trace 9203. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9296}.
<a id="trace-9296"></a>
<a id="trace-9300"></a>
<a id="trace-9309"></a>
<a id="trace-9315"></a>
<a id="trace-9326"></a>
<a id="trace-9334"></a>
<a id="trace-9406"></a>
<a id="trace-9410"></a>
<a id="trace-9420"></a>
<a id="trace-9430"></a>
<a id="trace-9441"></a>
- 102.25s–108.25s (×11), actor 5, squad 0 (trace 9296): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 9206. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9300}.
<a id="trace-9444"></a>
- 108.50s–108.50s (×1), actor 1, squad 0 (trace 9444): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 105.00s, trace 9339. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9452}.
<a id="trace-9452"></a>
- 108.75s–108.75s (×1), actor 5, squad 0 (trace 9452): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 9342. Next observer evidence: {'until': 109, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 793}.
<a id="trace-793"></a>
- 109.05s–109.05s (×1), actor 5, squad 0 (events line 793): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.018981355483737163, 'next_transition': 9466}.
<a id="trace-9456"></a>
- 109.05s–109.05s (×1), actor 5, squad 0 (trace 9456): renew committed intent (75 s lifetime). Knowledge: actor memory at 109.05s, trace 9456. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.018981355483737163, 'next_transition': 9466}.
<a id="trace-9466"></a>
<a id="trace-9478"></a>
<a id="trace-9555"></a>
<a id="trace-9563"></a>
<a id="trace-9608"></a>
<a id="trace-9623"></a>
<a id="trace-9631"></a>
<a id="trace-9638"></a>
<a id="trace-9723"></a>
<a id="trace-9733"></a>
- 109.25s–116.25s (×10), actor 5, squad 0 (trace 9466): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 109.05s, trace 9456. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14990341291645098, 'next_transition': 9478}.
<a id="trace-9737"></a>
- 116.45s–116.45s (×1), actor 1, squad 0 (trace 9737): MoveTactically. Knowledge: actor memory at 115.00s, trace 9649. Next observer evidence: {'until': 116.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9808}.
<a id="trace-9738"></a>
- 116.45s–116.45s (×1), actor 1, squad 0 (trace 9738): received platoon directive. Knowledge: actor memory at 115.00s, trace 9649. Next observer evidence: {'until': 116.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9808}.
<a id="trace-9808"></a>
<a id="trace-9821"></a>
<a id="trace-9836"></a>
<a id="trace-9843"></a>
<a id="trace-9851"></a>
<a id="trace-9858"></a>
<a id="trace-9940"></a>
<a id="trace-9950"></a>
<a id="trace-9961"></a>
<a id="trace-9980"></a>
<a id="trace-9988"></a>
<a id="trace-9996"></a>
<a id="trace-10102"></a>
- 116.75s–127.75s (×13), actor 5, squad 0 (trace 9808): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 9652. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9821}.
<a id="trace-10107"></a>
- 127.85s–127.85s (×1), actor 3, squad 0 (trace 10107): traveling. Knowledge: actor memory at 125.00s, trace 10008. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10218}.
<a id="trace-10108"></a>
- 127.85s–127.85s (×1), actor 3, squad 0 (trace 10108): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 125.00s, trace 10008. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10218}.
<a id="trace-10218"></a>
<a id="trace-10230"></a>
<a id="trace-10241"></a>
<a id="trace-10251"></a>
<a id="trace-10325"></a>
<a id="trace-10331"></a>
<a id="trace-10339"></a>
<a id="trace-10348"></a>
<a id="trace-10362"></a>
<a id="trace-10376"></a>
<a id="trace-10395"></a>
<a id="trace-10416"></a>
<a id="trace-10508"></a>
<a id="trace-10532"></a>
<a id="trace-10540"></a>
<a id="trace-10559"></a>
<a id="trace-10586"></a>
<a id="trace-10661"></a>
<a id="trace-10677"></a>
- 128.30s–140.80s (×19), actor 5, squad 0 (trace 10218): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 10010. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937446269474662, 'next_transition': 10230}.
<a id="trace-10682"></a>
- 141.10s–141.10s (×1), actor 3, squad 0 (trace 10682): traveling overwatch. Knowledge: actor memory at 140.00s, trace 10591. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498303091092306, 'next_transition': 10717}.
<a id="trace-10683"></a>
- 141.10s–141.10s (×1), actor 3, squad 0 (trace 10683): matching received arrivals: traveling stage complete. Knowledge: actor memory at 140.00s, trace 10591. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498303091092306, 'next_transition': 10717}.
<a id="trace-10717"></a>
- 141.30s–141.30s (×1), actor 5, squad 0 (trace 10717): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 10593. Next observer evidence: {'until': 141.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300133106112318, 'next_transition': 10725}.
<a id="trace-10725"></a>
- 141.65s–141.65s (×1), actor 3, squad 0 (trace 10725): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 140.00s, trace 10591. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149920295548377, 'next_transition': 10727}.
<a id="trace-10727"></a>
<a id="trace-10744"></a>
<a id="trace-10758"></a>
<a id="trace-10770"></a>
<a id="trace-10780"></a>
<a id="trace-10861"></a>
<a id="trace-10865"></a>
<a id="trace-10874"></a>
<a id="trace-10888"></a>
<a id="trace-10895"></a>
<a id="trace-10914"></a>
<a id="trace-10922"></a>
<a id="trace-10992"></a>
<a id="trace-10997"></a>
<a id="trace-11009"></a>
<a id="trace-11015"></a>
<a id="trace-11025"></a>
<a id="trace-11032"></a>
<a id="trace-11039"></a>
<a id="trace-11044"></a>
<a id="trace-11057"></a>
<a id="trace-11129"></a>
<a id="trace-11133"></a>
<a id="trace-11141"></a>
<a id="trace-11149"></a>
<a id="trace-11159"></a>
<a id="trace-11173"></a>
<a id="trace-11181"></a>
<a id="trace-11264"></a>
<a id="trace-11268"></a>
<a id="trace-11274"></a>
<a id="trace-11281"></a>
<a id="trace-11298"></a>
<a id="trace-11307"></a>
<a id="trace-11312"></a>
<a id="trace-11323"></a>
<a id="trace-11330"></a>
<a id="trace-11399"></a>
<a id="trace-11414"></a>
<a id="trace-11419"></a>
<a id="trace-11428"></a>
<a id="trace-11434"></a>
<a id="trace-11441"></a>
<a id="trace-11446"></a>
<a id="trace-11464"></a>
<a id="trace-11539"></a>
<a id="trace-11553"></a>
<a id="trace-11567"></a>
<a id="trace-11573"></a>
<a id="trace-11583"></a>
<a id="trace-11596"></a>
<a id="trace-11665"></a>
<a id="trace-11677"></a>
<a id="trace-11697"></a>
<a id="trace-11705"></a>
- 141.80s–177.80s (×55), actor 5, squad 0 (trace 10727): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 10593. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300133106112318, 'next_transition': 10744}.
<a id="trace-1001"></a>
- 178.10s–178.10s (×1), actor 5, squad 0 (events line 1001): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11708"></a>
- 178.10s–178.10s (×1), actor 5, squad 0 (trace 11708): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.10s, trace 11708. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11714}.
<a id="trace-11714"></a>
<a id="trace-11720"></a>
<a id="trace-11733"></a>
<a id="trace-11738"></a>
<a id="trace-11806"></a>
<a id="trace-11810"></a>
<a id="trace-11816"></a>
<a id="trace-11822"></a>
<a id="trace-11838"></a>
<a id="trace-11846"></a>
<a id="trace-11855"></a>
<a id="trace-11872"></a>
<a id="trace-11941"></a>
<a id="trace-11947"></a>
<a id="trace-11955"></a>
<a id="trace-11961"></a>
<a id="trace-11970"></a>
<a id="trace-11981"></a>
<a id="trace-11996"></a>
<a id="trace-12072"></a>
<a id="trace-12077"></a>
<a id="trace-12087"></a>
<a id="trace-12095"></a>
- 178.30s–191.80s (×23), actor 5, squad 0 (trace 11714): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.10s, trace 11708. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11720}.
<a id="trace-1035"></a>
- 191.90s–191.90s (×1), actor 5, squad 0 (events line 1035): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12098"></a>
- 191.90s–191.90s (×1), actor 5, squad 0 (trace 12098): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 191.90s, trace 12098. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12109}.
<a id="trace-12099"></a>
- 191.90s–191.90s (×1), actor 5, squad 0 (trace 12099): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 191.90s, trace 12099. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12109}.
<a id="trace-12109"></a>
<a id="trace-12114"></a>
<a id="trace-12123"></a>
<a id="trace-12136"></a>
<a id="trace-12209"></a>
<a id="trace-12214"></a>
<a id="trace-12238"></a>
- 192.30s–197.30s (×7), actor 5, squad 0 (trace 12109): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 191.90s, trace 12099. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12114}.
<a id="trace-12244"></a>
- 197.75s–197.75s (×1), actor 3, squad 0 (trace 12244): received platoon directive. Knowledge: actor memory at 195.00s, trace 12144. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12247}.
<a id="trace-12247"></a>
<a id="trace-12256"></a>
<a id="trace-12265"></a>
<a id="trace-12273"></a>
<a id="trace-12279"></a>
<a id="trace-12350"></a>
<a id="trace-12354"></a>
<a id="trace-12365"></a>
<a id="trace-12375"></a>
<a id="trace-12381"></a>
<a id="trace-12389"></a>
<a id="trace-12406"></a>
<a id="trace-12413"></a>
<a id="trace-12486"></a>
<a id="trace-12503"></a>
<a id="trace-12513"></a>
<a id="trace-12518"></a>
<a id="trace-12529"></a>
<a id="trace-12539"></a>
<a id="trace-12546"></a>
<a id="trace-12616"></a>
<a id="trace-12622"></a>
<a id="trace-12630"></a>
<a id="trace-12635"></a>
<a id="trace-12648"></a>
<a id="trace-12655"></a>
<a id="trace-12663"></a>
<a id="trace-12670"></a>
<a id="trace-12678"></a>
<a id="trace-12685"></a>
<a id="trace-12753"></a>
<a id="trace-12759"></a>
<a id="trace-12767"></a>
<a id="trace-12773"></a>
<a id="trace-12789"></a>
<a id="trace-12797"></a>
<a id="trace-12804"></a>
<a id="trace-12888"></a>
<a id="trace-12893"></a>
<a id="trace-12903"></a>
<a id="trace-12908"></a>
<a id="trace-12925"></a>
<a id="trace-12932"></a>
<a id="trace-12947"></a>
<a id="trace-12953"></a>
<a id="trace-13024"></a>
<a id="trace-13028"></a>
<a id="trace-13035"></a>
<a id="trace-13041"></a>
<a id="trace-13053"></a>
<a id="trace-13063"></a>
<a id="trace-13074"></a>
<a id="trace-13085"></a>
<a id="trace-13090"></a>
<a id="trace-13160"></a>
<a id="trace-13166"></a>
<a id="trace-13179"></a>
<a id="trace-13189"></a>
<a id="trace-13200"></a>
<a id="trace-13207"></a>
<a id="trace-13220"></a>
<a id="trace-13227"></a>
<a id="trace-13296"></a>
<a id="trace-13308"></a>
<a id="trace-13315"></a>
<a id="trace-13326"></a>
<a id="trace-13339"></a>
<a id="trace-13344"></a>
<a id="trace-13358"></a>
<a id="trace-13426"></a>
<a id="trace-13431"></a>
<a id="trace-13443"></a>
<a id="trace-13449"></a>
<a id="trace-13461"></a>
<a id="trace-13468"></a>
<a id="trace-13482"></a>
<a id="trace-13491"></a>
<a id="trace-13578"></a>
<a id="trace-13588"></a>
<a id="trace-13594"></a>
<a id="trace-13613"></a>
<a id="trace-13629"></a>
<a id="trace-13703"></a>
<a id="trace-13716"></a>
<a id="trace-13729"></a>
<a id="trace-13735"></a>
<a id="trace-13741"></a>
<a id="trace-13755"></a>
<a id="trace-13829"></a>
<a id="trace-13838"></a>
<a id="trace-13846"></a>
<a id="trace-13867"></a>
<a id="trace-13875"></a>
<a id="trace-13880"></a>
<a id="trace-13892"></a>
<a id="trace-13961"></a>
- 197.80s–260.30s (×96), actor 5, squad 0 (trace 12247): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 12146. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12256}.
<a id="trace-1187"></a>
- 260.95s–260.95s (×1), actor 5, squad 0 (events line 1187): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13968"></a>
- 260.95s–260.95s (×1), actor 5, squad 0 (trace 13968): renew committed intent (75 s lifetime). Knowledge: actor memory at 260.95s, trace 13968. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13974}.
<a id="trace-13974"></a>
<a id="trace-13983"></a>
<a id="trace-14001"></a>
<a id="trace-14011"></a>
<a id="trace-14019"></a>
<a id="trace-14033"></a>
<a id="trace-14104"></a>
<a id="trace-14110"></a>
<a id="trace-14115"></a>
<a id="trace-14126"></a>
- 261.30s–267.30s (×10), actor 5, squad 0 (trace 13974): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.95s, trace 13968. Next observer evidence: {'until': 261.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13983}.
<a id="trace-14130"></a>
- 267.75s–267.75s (×1), actor 3, squad 0 (trace 14130): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 265.00s, trace 14036. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14134}.
<a id="trace-14131"></a>
- 267.75s–267.75s (×1), actor 3, squad 0 (trace 14131): MoveTactically. Knowledge: actor memory at 265.00s, trace 14036. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14134}.
<a id="trace-14132"></a>
- 267.75s–267.75s (×1), actor 3, squad 0 (trace 14132): . Knowledge: actor memory at 265.00s, trace 14036. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14134}.
<a id="trace-14134"></a>
<a id="trace-14145"></a>
<a id="trace-14176"></a>
<a id="trace-14252"></a>
<a id="trace-14265"></a>
<a id="trace-14270"></a>
<a id="trace-14279"></a>
<a id="trace-14284"></a>
<a id="trace-14290"></a>
<a id="trace-14295"></a>
<a id="trace-14304"></a>
<a id="trace-14310"></a>
<a id="trace-14380"></a>
<a id="trace-14387"></a>
<a id="trace-14398"></a>
<a id="trace-14407"></a>
<a id="trace-14419"></a>
<a id="trace-14432"></a>
<a id="trace-14437"></a>
<a id="trace-14445"></a>
<a id="trace-14521"></a>
<a id="trace-14527"></a>
<a id="trace-14535"></a>
<a id="trace-14546"></a>
<a id="trace-14556"></a>
<a id="trace-14566"></a>
<a id="trace-14571"></a>
<a id="trace-14581"></a>
<a id="trace-14590"></a>
<a id="trace-14662"></a>
<a id="trace-14668"></a>
<a id="trace-14673"></a>
<a id="trace-14683"></a>
<a id="trace-14689"></a>
<a id="trace-14697"></a>
<a id="trace-14704"></a>
<a id="trace-14716"></a>
<a id="trace-14723"></a>
<a id="trace-14794"></a>
<a id="trace-14799"></a>
<a id="trace-14823"></a>
<a id="trace-14828"></a>
<a id="trace-14834"></a>
<a id="trace-14840"></a>
<a id="trace-14848"></a>
<a id="trace-14855"></a>
<a id="trace-14937"></a>
<a id="trace-14946"></a>
<a id="trace-14958"></a>
<a id="trace-14970"></a>
<a id="trace-14976"></a>
<a id="trace-14987"></a>
<a id="trace-14992"></a>
<a id="trace-15061"></a>
<a id="trace-15065"></a>
<a id="trace-15073"></a>
<a id="trace-15080"></a>
<a id="trace-15091"></a>
<a id="trace-15098"></a>
<a id="trace-15106"></a>
<a id="trace-15115"></a>
<a id="trace-15127"></a>
<a id="trace-15132"></a>
<a id="trace-15200"></a>
<a id="trace-15212"></a>
<a id="trace-15219"></a>
<a id="trace-15232"></a>
<a id="trace-15240"></a>
<a id="trace-15257"></a>
<a id="trace-15264"></a>
<a id="trace-15340"></a>
<a id="trace-15348"></a>
<a id="trace-15355"></a>
<a id="trace-15363"></a>
<a id="trace-15376"></a>
<a id="trace-15383"></a>
<a id="trace-15391"></a>
<a id="trace-15398"></a>
<a id="trace-15468"></a>
<a id="trace-15474"></a>
<a id="trace-15489"></a>
<a id="trace-15501"></a>
<a id="trace-15510"></a>
<a id="trace-15516"></a>
<a id="trace-15522"></a>
<a id="trace-15530"></a>
<a id="trace-15535"></a>
<a id="trace-15605"></a>
<a id="trace-15611"></a>
<a id="trace-15620"></a>
<a id="trace-15627"></a>
<a id="trace-15637"></a>
<a id="trace-15644"></a>
<a id="trace-15652"></a>
<a id="trace-15670"></a>
<a id="trace-15676"></a>
<a id="trace-15744"></a>
<a id="trace-15748"></a>
<a id="trace-15755"></a>
<a id="trace-15761"></a>
<a id="trace-15769"></a>
<a id="trace-15779"></a>
<a id="trace-15789"></a>
<a id="trace-15803"></a>
<a id="trace-15811"></a>
- 267.80s–329.80s (×105), actor 5, squad 0 (trace 14134): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 14038. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14145}.
<a id="trace-1352"></a>
- 329.95s–329.95s (×1), actor 5, squad 0 (events line 1352): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15814"></a>
- 329.95s–329.95s (×1), actor 5, squad 0 (trace 15814): renew committed intent (75 s lifetime). Knowledge: actor memory at 329.95s, trace 15814. Next observer evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15882}.
<a id="trace-15882"></a>
<a id="trace-15888"></a>
<a id="trace-15902"></a>
<a id="trace-15910"></a>
<a id="trace-15916"></a>
<a id="trace-15924"></a>
<a id="trace-15931"></a>
<a id="trace-15941"></a>
<a id="trace-15947"></a>
<a id="trace-16019"></a>
<a id="trace-16026"></a>
<a id="trace-16034"></a>
<a id="trace-16041"></a>
<a id="trace-16051"></a>
<a id="trace-16057"></a>
<a id="trace-16066"></a>
<a id="trace-16072"></a>
<a id="trace-16080"></a>
<a id="trace-16085"></a>
<a id="trace-16154"></a>
<a id="trace-16159"></a>
<a id="trace-16167"></a>
<a id="trace-16175"></a>
<a id="trace-16187"></a>
<a id="trace-16202"></a>
<a id="trace-16208"></a>
<a id="trace-16219"></a>
<a id="trace-16226"></a>
<a id="trace-16298"></a>
<a id="trace-16304"></a>
<a id="trace-16310"></a>
<a id="trace-16325"></a>
<a id="trace-16333"></a>
<a id="trace-16353"></a>
<a id="trace-16360"></a>
<a id="trace-16431"></a>
<a id="trace-16437"></a>
<a id="trace-16450"></a>
<a id="trace-16458"></a>
<a id="trace-16464"></a>
<a id="trace-16475"></a>
<a id="trace-16485"></a>
<a id="trace-16493"></a>
<a id="trace-16563"></a>
<a id="trace-16568"></a>
<a id="trace-16577"></a>
<a id="trace-16585"></a>
<a id="trace-16596"></a>
<a id="trace-16612"></a>
<a id="trace-16623"></a>
<a id="trace-16630"></a>
- 330.30s–359.80s (×51), actor 5, squad 0 (trace 15882): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 15817. Next observer evidence: {'until': 330.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15888}.

## Net delivery

142 matched order/radio deliveries; 247 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.519s; maximum 6.500s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 1903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 1904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 1911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 1912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2346: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2347: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2348: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2349: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2350: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2351: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2792: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 2794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 2795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2800: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2801: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 2802: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 2803: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2804: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2805: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2806: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2807: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3250: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3256: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3258: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3259: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3260: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3261: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3262: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3263: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3264: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3265: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 6161: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 6162: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 6249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6251: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6252: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6254: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6255: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6256: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6257: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6258: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6259: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6260: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6261: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 6580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 6581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 6582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 6583: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 6584: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 6585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 6586: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 6587: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 6588: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 6589: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 6590: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 6591: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 6592: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 6593: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 6926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 6927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 6928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 6929: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 6930: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 6931: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 6932: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 6933: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 6934: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 6935: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 6936: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6937: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6938: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6939: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 7508: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 7509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 7510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 7511: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 7512: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 7513: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 7514: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 7515: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 7516: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 7517: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 7518: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 7519: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 7520: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 7752: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 7753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 7754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 7755: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 7756: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 7757: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 7758: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 7759: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 7760: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 7761: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 7762: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 7763: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 7764: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 7913: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 7914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 7915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 7916: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 7917: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 7918: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 7919: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 7920: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 7921: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 7922: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 7923: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 7924: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 7925: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 8215: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 8216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 8217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 8218: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 8219: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 8220: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 8221: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 8222: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 8223: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 8224: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 8225: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 8226: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 8227: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 8395: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 8396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 8397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 8398: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 8399: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 8400: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 8401: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 8402: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 8403: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 8404: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 8405: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 8406: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 8407: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 8577: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 8578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 8579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 8580: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 8581: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 8582: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 8583: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 8584: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 8585: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 8586: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 8587: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 8588: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 8589: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 8817: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 8818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 8819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 8820: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 8821: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 8822: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 8823: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 8824: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 8825: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 8826: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 8827: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 8828: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 8829: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 8955: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 8956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 8957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 8958: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 8959: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 8960: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 8961: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 8962: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 8963: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 8964: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 8965: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 8966: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 8967: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 9077: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 9078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 9079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 9080: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 9081: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 9082: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 9083: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 9084: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 9085: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 9086: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 9087: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 9088: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 9089: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 9203: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 9204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 9205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 9206: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 9207: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 9208: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 9209: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 9210: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 9211: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 9212: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 9213: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 9214: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 9215: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 9339: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 9340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 9341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 9342: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 9343: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 9344: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 9345: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 9346: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 9347: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 9348: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 9349: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 9350: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 9351: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.05s leader 5, trace 9456: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 9484: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 9485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 9486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 9487: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 9488: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 9489: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 9490: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 9491: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 9492: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 9493: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 9494: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 9495: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 9496: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 9649: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 9650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 9651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 9652: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 9653: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 9654: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 9655: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 9656: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 9657: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 9658: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 9659: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 9660: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 9661: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 9867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 9868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 9869: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 9870: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 9871: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 9872: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 9873: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 9874: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 9875: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 9876: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 9877: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 9878: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 10008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 10009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 10010: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 10011: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 10012: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 10013: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 10014: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 10015: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 10016: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 10017: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 10018: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 10019: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 10254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 10255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 10256: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 10257: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 10258: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 10259: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 10260: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 10261: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 10262: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 10263: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 10264: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 10265: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 10419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 10420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 10421: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 10422: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 10423: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 10424: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 10425: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 10426: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 10427: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 10428: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 10429: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 10430: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 10591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 10592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 10593: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 10594: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 10595: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 10596: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 10597: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 10598: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 10599: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 10600: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 10601: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 10602: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 10795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 10796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 10797: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 10798: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 10799: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 10800: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 10801: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 10802: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 10803: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 10804: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 10805: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 10806: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 10925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 10926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 10927: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 10928: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 10929: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 10930: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 10931: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 10932: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 10933: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 10934: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 10935: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 10936: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 11062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 11063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 11064: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 11065: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 11066: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 11067: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 11068: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 11069: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 11070: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 11071: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 11072: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 11073: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 11198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 11199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 11200: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 11201: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 11202: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 11203: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 11204: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 11205: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 11206: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 11207: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 11208: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 11209: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 11333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 11334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 11335: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 11336: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 11337: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 11338: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 11339: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 11340: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 11341: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 11342: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 11343: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 11344: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 11469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 11470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 11471: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 11472: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 11473: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 11474: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 11475: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 11476: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 11477: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 11478: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 11479: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 11480: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 11600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 11601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 11602: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 11603: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 11604: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 11605: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 11606: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 11607: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 11608: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 11609: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 11610: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 11611: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.10s leader 5, trace 11708: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 11741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 11742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 11743: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 11744: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 11745: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 11746: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 11747: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 11748: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 11749: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 11750: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 11751: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 11752: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 11876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 11877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 11878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 11879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 11880: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 11881: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 11882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 11883: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 11884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 11885: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 11886: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 11887: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 12005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 12006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 12007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 12008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 12009: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 12010: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 12011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 12012: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 12013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 12014: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 12015: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 12016: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.90s leader 5, trace 12098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.90s leader 5, trace 12099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 12144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 12145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 12146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 12147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 12148: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 12149: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 12150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 12151: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 12152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 12153: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 12154: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 12155: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 12285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 12286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 12287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 12288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 12289: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 12290: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 12291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 12292: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 12293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 12294: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 12295: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 12296: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 12417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 12418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 12419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 12420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 12421: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 12422: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 12423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 12424: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 12425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 12426: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 12427: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 12428: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 12549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 12550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 12551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 12552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 12553: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 12554: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 12555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 12556: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 12557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 12558: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 12559: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 12560: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 12688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 12689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 12690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 12691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 12692: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 12693: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 12694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 12695: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 12696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 12697: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 12698: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 12699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 12822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 12823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 12824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 12825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 12826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 12827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 12828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 12829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 12830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 12831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 12832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 12833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 12956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 12957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 12958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 12959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 12960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 12961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 12962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 12963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 12964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 12965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 12966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 12967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 13094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 13095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 13096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 13097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 13098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 13099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 13100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 13101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 13102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 13103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 13104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 13105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 13230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 13231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 13232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 13233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 13234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 13235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 13236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 13237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 13238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 13239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 13240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 13241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 13361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 13362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 13363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 13364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 13365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 13366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 13367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 13368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 13369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 13370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 13371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 13372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 13500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 13501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 13502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 13503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 13504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 13505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 13506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 13507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 13508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 13509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 13510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 13511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 13633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 13634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 13635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 13636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 13637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 13638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 13639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 13640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 13641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 13642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 13643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 13644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 13759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 13760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 13761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 13762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 13763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 13764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 13765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 13766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 13767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 13768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 13769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 13770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 13895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 13896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 13897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 13898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 13899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 13900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 13901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 13902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 13903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 13904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 13905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 13906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.95s leader 5, trace 13968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 14036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 14037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 14038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 14039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 14040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 14041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 14042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 14043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 14044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 14045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 14046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 14047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 14179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 14180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 14181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 14182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 14183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 14184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 14185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 14186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 14187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 14188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 14189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 14190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 14314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 14315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 14316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 14317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 14318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 14319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 14320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 14321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 14322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 14323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 14324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 14325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 14452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 14453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 14454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 14455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 14456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 14457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 14458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 14459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 14460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 14461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 14462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 14463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 14594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 14595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 14596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 14597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 14598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 14599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 14600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 14601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 14602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 14603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 14604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 14605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 14729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 14730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 14731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 14732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 14733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 14734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 14735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 14736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 14737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 14738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 14739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 14740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 14859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 14860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 14861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 14862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 14863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 14864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 14865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 14866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 14867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 14868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 14869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 14870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 14995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 14996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 14997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 14998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 14999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 15000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 15001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 15002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 15003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 15004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 15005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 15006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 15135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 15136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 15137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 15138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 15139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 15140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 15141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 15142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 15143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 15144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 15145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 15146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 15267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 15268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 15269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 15270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 15271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 15272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 15273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 15274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 15275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 15276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 15277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 15278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 15401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 15402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 15403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 15404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 15405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 15406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 15407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 15408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 15409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 15410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 15411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 15412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 15539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 15540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 15541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 15542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 15543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 15544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 15545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 15546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 15547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 15548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 15549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 15550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 3, trace 15679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 15680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 15681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 15682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 15683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 15684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 15685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 15686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 15687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 15688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 15689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 15690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 329.95s leader 5, trace 15814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 3, trace 15815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 15816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 15817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 15818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 15819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 15820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 15821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 15822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 15823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 15824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 15825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 15826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 3, trace 15954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 15955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 15956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 15957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 15958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 15959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 15960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 15961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 15962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 15963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 15964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 15965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 3, trace 16089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 16090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 16091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 16092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 16093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 16094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 16095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 16096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 16097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 16098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 16099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 16100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 3, trace 16230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 16231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 16232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 16233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 16234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 16235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 16236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 16237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 16238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 16239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 16240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 16241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 3, trace 16366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 16367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 16368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 16369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 16370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 16371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 16372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 16373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 16374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 16375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 16376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 16377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 3, trace 16497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 16498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 16499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 16500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 16501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 16502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 16503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 16504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 16505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 16506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 16507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 16508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 3, trace 16633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 16634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 16635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 16636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 16637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 16638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 16639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 16640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 16641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 16642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 16643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 16644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Soren killed in action
- 1: Vale killed in action
- 1: Reed killed in action
- 1: Rook incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
