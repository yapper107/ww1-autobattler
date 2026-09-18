# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/28/108/good-ember/battle-108-1789674300231066524`

## Battle summary

**Ember** · 360 s · 286 shots.

### Turning points

- 14.8s, squad 1: contact (events line 169). First recorded contact.
- 19.5s, squad 1: withdrawal ([trace 4481](#trace-4481)). No completion observed before termination.
- 27.4s, squad 0: withdrawal ([trace 6582](#trace-6582)). 44.0s, squad 0: took cover and returned fire.
- 37.1s, squad 0: help call ([trace 7722](#trace-7722)). No completion observed before termination.
- 43.6s, squad 1: help call ([trace 8169](#trace-8169)). No completion observed before termination.
- 47.7s, squad 0: withdrawal ([trace 8731](#trace-8731)). 74.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 179.4s, squad 0: withdrawal ([trace 17206](#trace-17206)). 184.2s, squad 0: took cover and returned fire.
- 184.1s, squad 0: help call ([trace 17836](#trace-17836)). No completion observed before termination.
- 187.5s, squad 0: withdrawal ([trace 18139](#trace-18139)). No completion observed before termination.
- 188.9s, squad 0: help call ([trace 18327](#trace-18327)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 36 shots, 6/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; no completed objective recorded; 2 shots, 2/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 210 shots, 3/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 38 shots, 0/2 lost.

### Decisions and attribution

At 19.5s, squad 1 chose broke contact ([trace 4481](#trace-4481)), followed by 1 shots and 1 own casualties; estimate 5.0 against 0 distinct squad-reported contacts; At 184.2s, squad 0 chose took cover and returned fire ([trace 17847](#trace-17847)), followed by 0 shots and 1 own casualties; estimate 9.0 against 0 distinct squad-reported contacts; At 26.6s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 6545](#trace-6545)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1448](#trace-1448)). Following evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.752024626658834, 'next_transition': 2076}.
- 26.6s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 6544](#trace-6544)). Following evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.404971434212033, 'next_transition': 6572}.

### Communication

215 matched deliveries (mean 0.43s, max 5.55s); 194 explicit drops; 2 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.85s, squad 1, contact, evidence events line 169: First recorded contact; .
- 19.45s, squad 1, withdrawal, evidence 4481: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 27.35s, squad 0, withdrawal, evidence 6582: BreakContact: believed ratio at least two without superiority; 44.0s, squad 0: took cover and returned fire.
- 37.10s, squad 0, help call, evidence 7722: NeedSupport; No completion observed before termination.
- 43.60s, squad 1, help call, evidence 8169: NeedSupport; No completion observed before termination.
- 47.70s, squad 0, withdrawal, evidence 8731: BreakContact: believed ratio at least two without superiority; 74.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 179.40s, squad 0, withdrawal, evidence 17206: BreakContact: believed ratio at least two without superiority; 184.2s, squad 0: took cover and returned fire.
- 184.10s, squad 0, help call, evidence 17836: NeedSupport; No completion observed before termination.
- 187.50s, squad 0, withdrawal, evidence 18139: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 188.85s, squad 0, help call, evidence 18327: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.409789476223693, 'next_transition': 902}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.409789476223693, 'next_transition': 902}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.409789476223693, 'next_transition': 902}.
<a id="trace-315"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 315): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004781830177322, 'next_transition': 1100}.
<a id="trace-316"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 316): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004781830177322, 'next_transition': 1100}.
<a id="trace-317"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 317): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004781830177322, 'next_transition': 1100}.
<a id="trace-546"></a>
<a id="trace-548"></a>
<a id="trace-574"></a>
<a id="trace-576"></a>
<a id="trace-605"></a>
<a id="trace-607"></a>
<a id="trace-630"></a>
<a id="trace-632"></a>
<a id="trace-649"></a>
<a id="trace-651"></a>
<a id="trace-673"></a>
<a id="trace-675"></a>
<a id="trace-699"></a>
<a id="trace-701"></a>
<a id="trace-781"></a>
<a id="trace-783"></a>
<a id="trace-801"></a>
<a id="trace-803"></a>
<a id="trace-830"></a>
<a id="trace-832"></a>
<a id="trace-859"></a>
<a id="trace-861"></a>
<a id="trace-878"></a>
<a id="trace-880"></a>
<a id="trace-904"></a>
<a id="trace-906"></a>
<a id="trace-933"></a>
<a id="trace-935"></a>
<a id="trace-960"></a>
<a id="trace-962"></a>
<a id="trace-989"></a>
<a id="trace-991"></a>
<a id="trace-1006"></a>
<a id="trace-1008"></a>
<a id="trace-1097"></a>
<a id="trace-1099"></a>
<a id="trace-1343"></a>
<a id="trace-1345"></a>
<a id="trace-1367"></a>
<a id="trace-1369"></a>
<a id="trace-1389"></a>
<a id="trace-1391"></a>
<a id="trace-1423"></a>
<a id="trace-1425"></a>
<a id="trace-1443"></a>
<a id="trace-1445"></a>
<a id="trace-1977"></a>
<a id="trace-1979"></a>
<a id="trace-2001"></a>
<a id="trace-2003"></a>
<a id="trace-2043"></a>
<a id="trace-2045"></a>
<a id="trace-2068"></a>
<a id="trace-2070"></a>
<a id="trace-3415"></a>
<a id="trace-3417"></a>
<a id="trace-3481"></a>
<a id="trace-3483"></a>
<a id="trace-4223"></a>
<a id="trace-4225"></a>
<a id="trace-4281"></a>
<a id="trace-4283"></a>
<a id="trace-4331"></a>
<a id="trace-4333"></a>
<a id="trace-4373"></a>
<a id="trace-4375"></a>
<a id="trace-4413"></a>
<a id="trace-4415"></a>
<a id="trace-4443"></a>
<a id="trace-4445"></a>
<a id="trace-4468"></a>
<a id="trace-4470"></a>
<a id="trace-4763"></a>
<a id="trace-4765"></a>
<a id="trace-4850"></a>
<a id="trace-4852"></a>
<a id="trace-4872"></a>
<a id="trace-4874"></a>
<a id="trace-4889"></a>
<a id="trace-4891"></a>
<a id="trace-4911"></a>
<a id="trace-4913"></a>
<a id="trace-5568"></a>
<a id="trace-5570"></a>
<a id="trace-5583"></a>
<a id="trace-5585"></a>
<a id="trace-5616"></a>
<a id="trace-5618"></a>
<a id="trace-6310"></a>
<a id="trace-6312"></a>
<a id="trace-6334"></a>
<a id="trace-6336"></a>
<a id="trace-6373"></a>
<a id="trace-6375"></a>
<a id="trace-6478"></a>
<a id="trace-6480"></a>
<a id="trace-6494"></a>
<a id="trace-6496"></a>
<a id="trace-6525"></a>
<a id="trace-6527"></a>
<a id="trace-6552"></a>
<a id="trace-6554"></a>
<a id="trace-6574"></a>
<a id="trace-6576"></a>
<a id="trace-7018"></a>
<a id="trace-7020"></a>
<a id="trace-7054"></a>
<a id="trace-7056"></a>
<a id="trace-7086"></a>
<a id="trace-7088"></a>
<a id="trace-7110"></a>
<a id="trace-7112"></a>
<a id="trace-7156"></a>
<a id="trace-7158"></a>
<a id="trace-7270"></a>
<a id="trace-7272"></a>
<a id="trace-7311"></a>
<a id="trace-7313"></a>
<a id="trace-7359"></a>
<a id="trace-7361"></a>
<a id="trace-7400"></a>
<a id="trace-7402"></a>
<a id="trace-7440"></a>
<a id="trace-7442"></a>
<a id="trace-7471"></a>
<a id="trace-7473"></a>
<a id="trace-7499"></a>
<a id="trace-7501"></a>
<a id="trace-7518"></a>
<a id="trace-7520"></a>
<a id="trace-7548"></a>
<a id="trace-7550"></a>
<a id="trace-7566"></a>
<a id="trace-7568"></a>
<a id="trace-7651"></a>
<a id="trace-7653"></a>
<a id="trace-7668"></a>
<a id="trace-7670"></a>
<a id="trace-7690"></a>
<a id="trace-7692"></a>
<a id="trace-7711"></a>
<a id="trace-7713"></a>
<a id="trace-7740"></a>
<a id="trace-7742"></a>
<a id="trace-7753"></a>
<a id="trace-7755"></a>
<a id="trace-7781"></a>
<a id="trace-7783"></a>
<a id="trace-7800"></a>
<a id="trace-7802"></a>
<a id="trace-7824"></a>
<a id="trace-7826"></a>
<a id="trace-7839"></a>
<a id="trace-7841"></a>
<a id="trace-7924"></a>
<a id="trace-7926"></a>
<a id="trace-7949"></a>
<a id="trace-7951"></a>
<a id="trace-7965"></a>
<a id="trace-7967"></a>
<a id="trace-7985"></a>
<a id="trace-7987"></a>
<a id="trace-8011"></a>
<a id="trace-8013"></a>
<a id="trace-8030"></a>
<a id="trace-8032"></a>
<a id="trace-8048"></a>
<a id="trace-8050"></a>
<a id="trace-8186"></a>
<a id="trace-8188"></a>
<a id="trace-8387"></a>
<a id="trace-8389"></a>
<a id="trace-8429"></a>
<a id="trace-8431"></a>
<a id="trace-8545"></a>
<a id="trace-8547"></a>
<a id="trace-8581"></a>
<a id="trace-8583"></a>
<a id="trace-8622"></a>
<a id="trace-8624"></a>
<a id="trace-8656"></a>
<a id="trace-8658"></a>
<a id="trace-8704"></a>
<a id="trace-8706"></a>
<a id="trace-8991"></a>
<a id="trace-8993"></a>
<a id="trace-9035"></a>
<a id="trace-9037"></a>
<a id="trace-9073"></a>
<a id="trace-9075"></a>
<a id="trace-9118"></a>
<a id="trace-9120"></a>
<a id="trace-9135"></a>
<a id="trace-9137"></a>
<a id="trace-9221"></a>
<a id="trace-9223"></a>
<a id="trace-9241"></a>
<a id="trace-9243"></a>
<a id="trace-9258"></a>
<a id="trace-9260"></a>
<a id="trace-9272"></a>
<a id="trace-9274"></a>
<a id="trace-9292"></a>
<a id="trace-9294"></a>
<a id="trace-9310"></a>
<a id="trace-9312"></a>
<a id="trace-9326"></a>
<a id="trace-9328"></a>
<a id="trace-9342"></a>
<a id="trace-9344"></a>
<a id="trace-9364"></a>
<a id="trace-9366"></a>
<a id="trace-9377"></a>
<a id="trace-9379"></a>
<a id="trace-9448"></a>
<a id="trace-9450"></a>
<a id="trace-9460"></a>
<a id="trace-9462"></a>
<a id="trace-9478"></a>
<a id="trace-9480"></a>
<a id="trace-9499"></a>
<a id="trace-9501"></a>
<a id="trace-9515"></a>
<a id="trace-9517"></a>
<a id="trace-9527"></a>
<a id="trace-9529"></a>
<a id="trace-9551"></a>
<a id="trace-9553"></a>
<a id="trace-9563"></a>
<a id="trace-9565"></a>
<a id="trace-9580"></a>
<a id="trace-9582"></a>
<a id="trace-9699"></a>
<a id="trace-9701"></a>
<a id="trace-9773"></a>
<a id="trace-9775"></a>
<a id="trace-9794"></a>
<a id="trace-9796"></a>
<a id="trace-9817"></a>
<a id="trace-9819"></a>
<a id="trace-9829"></a>
<a id="trace-9831"></a>
<a id="trace-9854"></a>
<a id="trace-9856"></a>
<a id="trace-9868"></a>
<a id="trace-9870"></a>
<a id="trace-9883"></a>
<a id="trace-9885"></a>
<a id="trace-9894"></a>
<a id="trace-9896"></a>
<a id="trace-9912"></a>
<a id="trace-9914"></a>
<a id="trace-9922"></a>
<a id="trace-9924"></a>
<a id="trace-9998"></a>
<a id="trace-10000"></a>
<a id="trace-10021"></a>
<a id="trace-10023"></a>
<a id="trace-10034"></a>
<a id="trace-10036"></a>
<a id="trace-10047"></a>
<a id="trace-10049"></a>
<a id="trace-10056"></a>
<a id="trace-10058"></a>
<a id="trace-10073"></a>
<a id="trace-10075"></a>
<a id="trace-10086"></a>
<a id="trace-10088"></a>
<a id="trace-10103"></a>
<a id="trace-10105"></a>
<a id="trace-10112"></a>
<a id="trace-10114"></a>
<a id="trace-10190"></a>
<a id="trace-10192"></a>
<a id="trace-10199"></a>
<a id="trace-10201"></a>
<a id="trace-10212"></a>
<a id="trace-10214"></a>
<a id="trace-10228"></a>
<a id="trace-10230"></a>
<a id="trace-10247"></a>
<a id="trace-10249"></a>
<a id="trace-10256"></a>
<a id="trace-10258"></a>
<a id="trace-10271"></a>
<a id="trace-10273"></a>
<a id="trace-10285"></a>
<a id="trace-10287"></a>
<a id="trace-10317"></a>
<a id="trace-10319"></a>
<a id="trace-10335"></a>
<a id="trace-10337"></a>
<a id="trace-10412"></a>
<a id="trace-10414"></a>
<a id="trace-10427"></a>
<a id="trace-10429"></a>
<a id="trace-10444"></a>
<a id="trace-10446"></a>
<a id="trace-10457"></a>
<a id="trace-10459"></a>
<a id="trace-10479"></a>
<a id="trace-10481"></a>
<a id="trace-10489"></a>
<a id="trace-10491"></a>
<a id="trace-10504"></a>
<a id="trace-10506"></a>
<a id="trace-10513"></a>
<a id="trace-10515"></a>
<a id="trace-10524"></a>
<a id="trace-10526"></a>
<a id="trace-10534"></a>
<a id="trace-10536"></a>
<a id="trace-10607"></a>
<a id="trace-10609"></a>
<a id="trace-10618"></a>
<a id="trace-10620"></a>
<a id="trace-10638"></a>
<a id="trace-10640"></a>
<a id="trace-10647"></a>
<a id="trace-10649"></a>
<a id="trace-10659"></a>
<a id="trace-10661"></a>
<a id="trace-10667"></a>
<a id="trace-10669"></a>
<a id="trace-10677"></a>
<a id="trace-10679"></a>
<a id="trace-10685"></a>
<a id="trace-10687"></a>
<a id="trace-10696"></a>
<a id="trace-10698"></a>
<a id="trace-10706"></a>
<a id="trace-10708"></a>
<a id="trace-10778"></a>
<a id="trace-10780"></a>
<a id="trace-10787"></a>
<a id="trace-10789"></a>
<a id="trace-10795"></a>
<a id="trace-10797"></a>
<a id="trace-10807"></a>
<a id="trace-10809"></a>
<a id="trace-10822"></a>
<a id="trace-10824"></a>
<a id="trace-10833"></a>
<a id="trace-10835"></a>
<a id="trace-10847"></a>
<a id="trace-10849"></a>
<a id="trace-10857"></a>
<a id="trace-10859"></a>
<a id="trace-10871"></a>
<a id="trace-10873"></a>
<a id="trace-10879"></a>
<a id="trace-10881"></a>
<a id="trace-10950"></a>
<a id="trace-10952"></a>
<a id="trace-10959"></a>
<a id="trace-10961"></a>
<a id="trace-10970"></a>
<a id="trace-10972"></a>
<a id="trace-10978"></a>
<a id="trace-10980"></a>
<a id="trace-10993"></a>
<a id="trace-10995"></a>
<a id="trace-11001"></a>
<a id="trace-11003"></a>
<a id="trace-11012"></a>
<a id="trace-11014"></a>
<a id="trace-11023"></a>
<a id="trace-11025"></a>
<a id="trace-11036"></a>
<a id="trace-11038"></a>
<a id="trace-11043"></a>
<a id="trace-11045"></a>
<a id="trace-11114"></a>
<a id="trace-11116"></a>
<a id="trace-11138"></a>
<a id="trace-11140"></a>
<a id="trace-11147"></a>
<a id="trace-11149"></a>
<a id="trace-11156"></a>
<a id="trace-11158"></a>
<a id="trace-11169"></a>
<a id="trace-11171"></a>
<a id="trace-11177"></a>
<a id="trace-11179"></a>
<a id="trace-11189"></a>
<a id="trace-11191"></a>
<a id="trace-11200"></a>
<a id="trace-11202"></a>
<a id="trace-11210"></a>
<a id="trace-11212"></a>
<a id="trace-11218"></a>
<a id="trace-11220"></a>
<a id="trace-11290"></a>
<a id="trace-11292"></a>
<a id="trace-11301"></a>
<a id="trace-11303"></a>
<a id="trace-11416"></a>
<a id="trace-11418"></a>
<a id="trace-11427"></a>
<a id="trace-11429"></a>
<a id="trace-11446"></a>
<a id="trace-11448"></a>
<a id="trace-11468"></a>
<a id="trace-11470"></a>
<a id="trace-11478"></a>
<a id="trace-11480"></a>
<a id="trace-11488"></a>
<a id="trace-11490"></a>
<a id="trace-11509"></a>
<a id="trace-11511"></a>
<a id="trace-11522"></a>
<a id="trace-11524"></a>
<a id="trace-11600"></a>
<a id="trace-11602"></a>
<a id="trace-11613"></a>
<a id="trace-11615"></a>
<a id="trace-11630"></a>
<a id="trace-11632"></a>
<a id="trace-11638"></a>
<a id="trace-11640"></a>
<a id="trace-11656"></a>
<a id="trace-11658"></a>
<a id="trace-11669"></a>
<a id="trace-11671"></a>
<a id="trace-11685"></a>
<a id="trace-11687"></a>
<a id="trace-11699"></a>
<a id="trace-11701"></a>
<a id="trace-11721"></a>
<a id="trace-11723"></a>
<a id="trace-11735"></a>
<a id="trace-11737"></a>
<a id="trace-11816"></a>
<a id="trace-11818"></a>
<a id="trace-11824"></a>
<a id="trace-11826"></a>
<a id="trace-11840"></a>
<a id="trace-11842"></a>
<a id="trace-11851"></a>
<a id="trace-11853"></a>
<a id="trace-11867"></a>
<a id="trace-11869"></a>
<a id="trace-11879"></a>
<a id="trace-11881"></a>
<a id="trace-11895"></a>
<a id="trace-11897"></a>
<a id="trace-11907"></a>
<a id="trace-11909"></a>
<a id="trace-11988"></a>
<a id="trace-11990"></a>
<a id="trace-11997"></a>
<a id="trace-11999"></a>
<a id="trace-12081"></a>
<a id="trace-12083"></a>
<a id="trace-12093"></a>
<a id="trace-12095"></a>
<a id="trace-12112"></a>
<a id="trace-12114"></a>
<a id="trace-12143"></a>
<a id="trace-12145"></a>
<a id="trace-12161"></a>
<a id="trace-12163"></a>
<a id="trace-12174"></a>
<a id="trace-12176"></a>
<a id="trace-12189"></a>
<a id="trace-12191"></a>
<a id="trace-12200"></a>
<a id="trace-12202"></a>
<a id="trace-12211"></a>
<a id="trace-12213"></a>
<a id="trace-12221"></a>
<a id="trace-12223"></a>
<a id="trace-12302"></a>
<a id="trace-12304"></a>
<a id="trace-12311"></a>
<a id="trace-12313"></a>
<a id="trace-12326"></a>
<a id="trace-12328"></a>
<a id="trace-12338"></a>
<a id="trace-12340"></a>
<a id="trace-12357"></a>
<a id="trace-12359"></a>
<a id="trace-12373"></a>
<a id="trace-12375"></a>
<a id="trace-12390"></a>
<a id="trace-12392"></a>
<a id="trace-12403"></a>
<a id="trace-12405"></a>
<a id="trace-12424"></a>
<a id="trace-12426"></a>
<a id="trace-12438"></a>
<a id="trace-12440"></a>
<a id="trace-12721"></a>
<a id="trace-12723"></a>
<a id="trace-12731"></a>
<a id="trace-12733"></a>
<a id="trace-12760"></a>
<a id="trace-12762"></a>
<a id="trace-12771"></a>
<a id="trace-12773"></a>
<a id="trace-12785"></a>
<a id="trace-12787"></a>
<a id="trace-12798"></a>
<a id="trace-12800"></a>
<a id="trace-12812"></a>
<a id="trace-12814"></a>
<a id="trace-12831"></a>
<a id="trace-12833"></a>
<a id="trace-12846"></a>
<a id="trace-12848"></a>
<a id="trace-12862"></a>
<a id="trace-12864"></a>
<a id="trace-12948"></a>
<a id="trace-12950"></a>
<a id="trace-12955"></a>
<a id="trace-12957"></a>
<a id="trace-12976"></a>
<a id="trace-12978"></a>
<a id="trace-12989"></a>
<a id="trace-12991"></a>
<a id="trace-13005"></a>
<a id="trace-13007"></a>
<a id="trace-13020"></a>
<a id="trace-13022"></a>
<a id="trace-13036"></a>
<a id="trace-13038"></a>
<a id="trace-13045"></a>
<a id="trace-13047"></a>
<a id="trace-13060"></a>
<a id="trace-13062"></a>
<a id="trace-13072"></a>
<a id="trace-13074"></a>
<a id="trace-13146"></a>
<a id="trace-13148"></a>
<a id="trace-13155"></a>
<a id="trace-13157"></a>
<a id="trace-13174"></a>
<a id="trace-13176"></a>
<a id="trace-13336"></a>
<a id="trace-13338"></a>
<a id="trace-13349"></a>
<a id="trace-13351"></a>
<a id="trace-13434"></a>
<a id="trace-13436"></a>
<a id="trace-13457"></a>
<a id="trace-13459"></a>
<a id="trace-13464"></a>
<a id="trace-13466"></a>
<a id="trace-13485"></a>
<a id="trace-13487"></a>
<a id="trace-13495"></a>
<a id="trace-13497"></a>
<a id="trace-13574"></a>
<a id="trace-13576"></a>
<a id="trace-13587"></a>
<a id="trace-13589"></a>
<a id="trace-13599"></a>
<a id="trace-13601"></a>
<a id="trace-13609"></a>
<a id="trace-13611"></a>
<a id="trace-13625"></a>
<a id="trace-13627"></a>
<a id="trace-13639"></a>
<a id="trace-13641"></a>
<a id="trace-13652"></a>
<a id="trace-13654"></a>
<a id="trace-13667"></a>
<a id="trace-13669"></a>
<a id="trace-13690"></a>
<a id="trace-13692"></a>
<a id="trace-13709"></a>
<a id="trace-13711"></a>
<a id="trace-13782"></a>
<a id="trace-13784"></a>
<a id="trace-13788"></a>
<a id="trace-13790"></a>
<a id="trace-13807"></a>
<a id="trace-13809"></a>
<a id="trace-13821"></a>
<a id="trace-13823"></a>
<a id="trace-13834"></a>
<a id="trace-13836"></a>
<a id="trace-13926"></a>
<a id="trace-13928"></a>
<a id="trace-13943"></a>
<a id="trace-13945"></a>
<a id="trace-13957"></a>
<a id="trace-13959"></a>
<a id="trace-13968"></a>
<a id="trace-13970"></a>
<a id="trace-13984"></a>
<a id="trace-13986"></a>
<a id="trace-14064"></a>
<a id="trace-14066"></a>
<a id="trace-14077"></a>
<a id="trace-14079"></a>
<a id="trace-14098"></a>
<a id="trace-14100"></a>
<a id="trace-14107"></a>
<a id="trace-14109"></a>
<a id="trace-14125"></a>
<a id="trace-14127"></a>
<a id="trace-14144"></a>
<a id="trace-14146"></a>
<a id="trace-14157"></a>
<a id="trace-14159"></a>
<a id="trace-14167"></a>
<a id="trace-14169"></a>
<a id="trace-14279"></a>
<a id="trace-14281"></a>
<a id="trace-14288"></a>
<a id="trace-14290"></a>
<a id="trace-14367"></a>
<a id="trace-14369"></a>
<a id="trace-14376"></a>
<a id="trace-14378"></a>
<a id="trace-14481"></a>
<a id="trace-14483"></a>
<a id="trace-14507"></a>
<a id="trace-14509"></a>
<a id="trace-14531"></a>
<a id="trace-14533"></a>
<a id="trace-14544"></a>
<a id="trace-14546"></a>
<a id="trace-14564"></a>
<a id="trace-14566"></a>
<a id="trace-14594"></a>
<a id="trace-14596"></a>
<a id="trace-14607"></a>
<a id="trace-14609"></a>
<a id="trace-14621"></a>
<a id="trace-14623"></a>
<a id="trace-14696"></a>
<a id="trace-14698"></a>
<a id="trace-14711"></a>
<a id="trace-14713"></a>
<a id="trace-14721"></a>
<a id="trace-14723"></a>
<a id="trace-14730"></a>
<a id="trace-14732"></a>
<a id="trace-14748"></a>
<a id="trace-14750"></a>
<a id="trace-14760"></a>
<a id="trace-14762"></a>
<a id="trace-14777"></a>
<a id="trace-14779"></a>
<a id="trace-14788"></a>
<a id="trace-14790"></a>
<a id="trace-14808"></a>
<a id="trace-14810"></a>
<a id="trace-14829"></a>
<a id="trace-14831"></a>
<a id="trace-14907"></a>
<a id="trace-14909"></a>
<a id="trace-14923"></a>
<a id="trace-14925"></a>
<a id="trace-14942"></a>
<a id="trace-14944"></a>
<a id="trace-14950"></a>
<a id="trace-14952"></a>
<a id="trace-14964"></a>
<a id="trace-14966"></a>
<a id="trace-15483"></a>
<a id="trace-15485"></a>
<a id="trace-15500"></a>
<a id="trace-15502"></a>
<a id="trace-15522"></a>
<a id="trace-15524"></a>
<a id="trace-15543"></a>
<a id="trace-15545"></a>
<a id="trace-15555"></a>
<a id="trace-15557"></a>
<a id="trace-15647"></a>
<a id="trace-15649"></a>
<a id="trace-15671"></a>
<a id="trace-15673"></a>
<a id="trace-15692"></a>
<a id="trace-15694"></a>
<a id="trace-15709"></a>
<a id="trace-15711"></a>
<a id="trace-15732"></a>
<a id="trace-15734"></a>
<a id="trace-15751"></a>
<a id="trace-15753"></a>
<a id="trace-16355"></a>
<a id="trace-16357"></a>
<a id="trace-16372"></a>
<a id="trace-16374"></a>
<a id="trace-16975"></a>
<a id="trace-16977"></a>
<a id="trace-16995"></a>
<a id="trace-16997"></a>
<a id="trace-17077"></a>
<a id="trace-17079"></a>
<a id="trace-17093"></a>
<a id="trace-17095"></a>
<a id="trace-17109"></a>
<a id="trace-17111"></a>
<a id="trace-17127"></a>
<a id="trace-17129"></a>
<a id="trace-17143"></a>
<a id="trace-17145"></a>
<a id="trace-17153"></a>
<a id="trace-17155"></a>
<a id="trace-17166"></a>
<a id="trace-17168"></a>
<a id="trace-17177"></a>
<a id="trace-17179"></a>
<a id="trace-17197"></a>
<a id="trace-17199"></a>
<a id="trace-17551"></a>
<a id="trace-17553"></a>
<a id="trace-17656"></a>
<a id="trace-17658"></a>
<a id="trace-17698"></a>
<a id="trace-17700"></a>
<a id="trace-17723"></a>
<a id="trace-17725"></a>
<a id="trace-17745"></a>
<a id="trace-17747"></a>
<a id="trace-17774"></a>
<a id="trace-17776"></a>
<a id="trace-17798"></a>
<a id="trace-17800"></a>
<a id="trace-17811"></a>
<a id="trace-17813"></a>
<a id="trace-17823"></a>
<a id="trace-17825"></a>
<a id="trace-17987"></a>
<a id="trace-17989"></a>
<a id="trace-18003"></a>
<a id="trace-18005"></a>
<a id="trace-18075"></a>
<a id="trace-18077"></a>
<a id="trace-18087"></a>
<a id="trace-18089"></a>
<a id="trace-18104"></a>
<a id="trace-18106"></a>
<a id="trace-18117"></a>
<a id="trace-18119"></a>
<a id="trace-18132"></a>
<a id="trace-18134"></a>
<a id="trace-18277"></a>
<a id="trace-18279"></a>
<a id="trace-18300"></a>
<a id="trace-18302"></a>
<a id="trace-18322"></a>
<a id="trace-18324"></a>
<a id="trace-18344"></a>
<a id="trace-18346"></a>
<a id="trace-18362"></a>
<a id="trace-18364"></a>
<a id="trace-18440"></a>
<a id="trace-18442"></a>
<a id="trace-18452"></a>
<a id="trace-18454"></a>
<a id="trace-18466"></a>
<a id="trace-18468"></a>
<a id="trace-18477"></a>
<a id="trace-18479"></a>
<a id="trace-18497"></a>
<a id="trace-18499"></a>
<a id="trace-18513"></a>
<a id="trace-18515"></a>
<a id="trace-18532"></a>
<a id="trace-18534"></a>
<a id="trace-18543"></a>
<a id="trace-18545"></a>
<a id="trace-18557"></a>
<a id="trace-18559"></a>
<a id="trace-18574"></a>
<a id="trace-18576"></a>
<a id="trace-18644"></a>
<a id="trace-18646"></a>
<a id="trace-18654"></a>
<a id="trace-18656"></a>
<a id="trace-18671"></a>
<a id="trace-18673"></a>
<a id="trace-18688"></a>
<a id="trace-18690"></a>
<a id="trace-18699"></a>
<a id="trace-18701"></a>
<a id="trace-18707"></a>
<a id="trace-18709"></a>
<a id="trace-18725"></a>
<a id="trace-18727"></a>
<a id="trace-18738"></a>
<a id="trace-18740"></a>
<a id="trace-18751"></a>
<a id="trace-18753"></a>
<a id="trace-18761"></a>
<a id="trace-18763"></a>
<a id="trace-18835"></a>
<a id="trace-18837"></a>
<a id="trace-18853"></a>
<a id="trace-18855"></a>
<a id="trace-18866"></a>
<a id="trace-18868"></a>
<a id="trace-18879"></a>
<a id="trace-18881"></a>
<a id="trace-18901"></a>
<a id="trace-18903"></a>
<a id="trace-18915"></a>
<a id="trace-18917"></a>
<a id="trace-18930"></a>
<a id="trace-18932"></a>
<a id="trace-18940"></a>
<a id="trace-18942"></a>
<a id="trace-18958"></a>
<a id="trace-18960"></a>
<a id="trace-18974"></a>
<a id="trace-18976"></a>
<a id="trace-19041"></a>
<a id="trace-19043"></a>
<a id="trace-19055"></a>
<a id="trace-19057"></a>
<a id="trace-19074"></a>
<a id="trace-19076"></a>
<a id="trace-19083"></a>
<a id="trace-19085"></a>
<a id="trace-19096"></a>
<a id="trace-19098"></a>
<a id="trace-19104"></a>
<a id="trace-19106"></a>
<a id="trace-19125"></a>
<a id="trace-19127"></a>
<a id="trace-19137"></a>
<a id="trace-19139"></a>
<a id="trace-19159"></a>
<a id="trace-19161"></a>
<a id="trace-19170"></a>
<a id="trace-19172"></a>
<a id="trace-19244"></a>
<a id="trace-19246"></a>
<a id="trace-19257"></a>
<a id="trace-19259"></a>
<a id="trace-19271"></a>
<a id="trace-19273"></a>
<a id="trace-19283"></a>
<a id="trace-19285"></a>
<a id="trace-19300"></a>
<a id="trace-19302"></a>
<a id="trace-19319"></a>
<a id="trace-19321"></a>
<a id="trace-19332"></a>
<a id="trace-19334"></a>
<a id="trace-19347"></a>
<a id="trace-19349"></a>
<a id="trace-19370"></a>
<a id="trace-19372"></a>
<a id="trace-19383"></a>
<a id="trace-19385"></a>
<a id="trace-19450"></a>
<a id="trace-19452"></a>
<a id="trace-19464"></a>
<a id="trace-19466"></a>
<a id="trace-19477"></a>
<a id="trace-19479"></a>
<a id="trace-19487"></a>
<a id="trace-19489"></a>
<a id="trace-19501"></a>
<a id="trace-19503"></a>
<a id="trace-19510"></a>
<a id="trace-19512"></a>
<a id="trace-19521"></a>
<a id="trace-19523"></a>
<a id="trace-19531"></a>
<a id="trace-19533"></a>
<a id="trace-19545"></a>
<a id="trace-19547"></a>
<a id="trace-19556"></a>
<a id="trace-19558"></a>
<a id="trace-19619"></a>
<a id="trace-19621"></a>
<a id="trace-19629"></a>
<a id="trace-19631"></a>
<a id="trace-19640"></a>
<a id="trace-19642"></a>
<a id="trace-19648"></a>
<a id="trace-19650"></a>
<a id="trace-19658"></a>
<a id="trace-19660"></a>
<a id="trace-19667"></a>
<a id="trace-19669"></a>
<a id="trace-19677"></a>
<a id="trace-19679"></a>
<a id="trace-19687"></a>
<a id="trace-19689"></a>
<a id="trace-19701"></a>
<a id="trace-19703"></a>
<a id="trace-19710"></a>
<a id="trace-19712"></a>
<a id="trace-19772"></a>
<a id="trace-19774"></a>
<a id="trace-19781"></a>
<a id="trace-19783"></a>
<a id="trace-19789"></a>
<a id="trace-19791"></a>
<a id="trace-19799"></a>
<a id="trace-19801"></a>
<a id="trace-19810"></a>
<a id="trace-19812"></a>
<a id="trace-19818"></a>
<a id="trace-19820"></a>
<a id="trace-19830"></a>
<a id="trace-19832"></a>
<a id="trace-19838"></a>
<a id="trace-19840"></a>
<a id="trace-19848"></a>
<a id="trace-19850"></a>
<a id="trace-19855"></a>
<a id="trace-19857"></a>
<a id="trace-19917"></a>
<a id="trace-19919"></a>
<a id="trace-19925"></a>
<a id="trace-19927"></a>
<a id="trace-19931"></a>
<a id="trace-19933"></a>
<a id="trace-19938"></a>
<a id="trace-19940"></a>
<a id="trace-19947"></a>
<a id="trace-19949"></a>
<a id="trace-19951"></a>
<a id="trace-19953"></a>
<a id="trace-19960"></a>
<a id="trace-19962"></a>
<a id="trace-19967"></a>
<a id="trace-19969"></a>
<a id="trace-19977"></a>
<a id="trace-19979"></a>
<a id="trace-19982"></a>
<a id="trace-19984"></a>
<a id="trace-20042"></a>
<a id="trace-20044"></a>
<a id="trace-20051"></a>
<a id="trace-20053"></a>
<a id="trace-20057"></a>
<a id="trace-20059"></a>
<a id="trace-20063"></a>
<a id="trace-20065"></a>
<a id="trace-20076"></a>
<a id="trace-20078"></a>
<a id="trace-20094"></a>
<a id="trace-20096"></a>
<a id="trace-20103"></a>
<a id="trace-20105"></a>
<a id="trace-20110"></a>
<a id="trace-20112"></a>
<a id="trace-20120"></a>
<a id="trace-20122"></a>
<a id="trace-20126"></a>
<a id="trace-20128"></a>
<a id="trace-20188"></a>
<a id="trace-20190"></a>
<a id="trace-20198"></a>
<a id="trace-20200"></a>
<a id="trace-20206"></a>
<a id="trace-20208"></a>
<a id="trace-20211"></a>
<a id="trace-20213"></a>
<a id="trace-20219"></a>
<a id="trace-20221"></a>
<a id="trace-20228"></a>
<a id="trace-20230"></a>
<a id="trace-20235"></a>
<a id="trace-20237"></a>
<a id="trace-20247"></a>
<a id="trace-20249"></a>
<a id="trace-20268"></a>
<a id="trace-20270"></a>
<a id="trace-20274"></a>
<a id="trace-20276"></a>
<a id="trace-20335"></a>
<a id="trace-20337"></a>
<a id="trace-20343"></a>
<a id="trace-20345"></a>
<a id="trace-20352"></a>
<a id="trace-20354"></a>
<a id="trace-20357"></a>
<a id="trace-20359"></a>
<a id="trace-20366"></a>
<a id="trace-20368"></a>
<a id="trace-20371"></a>
<a id="trace-20373"></a>
<a id="trace-20377"></a>
<a id="trace-20379"></a>
<a id="trace-20382"></a>
<a id="trace-20384"></a>
<a id="trace-20397"></a>
<a id="trace-20399"></a>
<a id="trace-20403"></a>
<a id="trace-20405"></a>
<a id="trace-20467"></a>
<a id="trace-20469"></a>
<a id="trace-20478"></a>
<a id="trace-20480"></a>
<a id="trace-20498"></a>
<a id="trace-20500"></a>
<a id="trace-20504"></a>
<a id="trace-20506"></a>
<a id="trace-20512"></a>
<a id="trace-20514"></a>
<a id="trace-20517"></a>
<a id="trace-20519"></a>
<a id="trace-20524"></a>
<a id="trace-20526"></a>
<a id="trace-20529"></a>
<a id="trace-20531"></a>
<a id="trace-20539"></a>
<a id="trace-20541"></a>
<a id="trace-20544"></a>
<a id="trace-20546"></a>
<a id="trace-20604"></a>
<a id="trace-20606"></a>
<a id="trace-20612"></a>
<a id="trace-20614"></a>
<a id="trace-20624"></a>
<a id="trace-20626"></a>
<a id="trace-20631"></a>
<a id="trace-20633"></a>
<a id="trace-20644"></a>
<a id="trace-20646"></a>
<a id="trace-20661"></a>
<a id="trace-20663"></a>
<a id="trace-20671"></a>
<a id="trace-20673"></a>
<a id="trace-20680"></a>
<a id="trace-20682"></a>
<a id="trace-20739"></a>
<a id="trace-20741"></a>
<a id="trace-20748"></a>
<a id="trace-20750"></a>
<a id="trace-20754"></a>
<a id="trace-20756"></a>
<a id="trace-20764"></a>
<a id="trace-20766"></a>
<a id="trace-20789"></a>
<a id="trace-20791"></a>
<a id="trace-20852"></a>
<a id="trace-20854"></a>
<a id="trace-20861"></a>
<a id="trace-20863"></a>
<a id="trace-20867"></a>
<a id="trace-20869"></a>
<a id="trace-20871"></a>
<a id="trace-20873"></a>
<a id="trace-20888"></a>
<a id="trace-20890"></a>
<a id="trace-20955"></a>
<a id="trace-20957"></a>
<a id="trace-20975"></a>
<a id="trace-20977"></a>
<a id="trace-20984"></a>
<a id="trace-20986"></a>
<a id="trace-20990"></a>
<a id="trace-20992"></a>
<a id="trace-21001"></a>
<a id="trace-21003"></a>
<a id="trace-21059"></a>
<a id="trace-21061"></a>
<a id="trace-21072"></a>
<a id="trace-21074"></a>
<a id="trace-21093"></a>
<a id="trace-21095"></a>
<a id="trace-21100"></a>
<a id="trace-21102"></a>
<a id="trace-21116"></a>
<a id="trace-21118"></a>
<a id="trace-21177"></a>
<a id="trace-21179"></a>
<a id="trace-21191"></a>
<a id="trace-21193"></a>
<a id="trace-21204"></a>
<a id="trace-21206"></a>
<a id="trace-21217"></a>
<a id="trace-21219"></a>
<a id="trace-21243"></a>
<a id="trace-21245"></a>
<a id="trace-21305"></a>
<a id="trace-21307"></a>
<a id="trace-21320"></a>
<a id="trace-21322"></a>
<a id="trace-21329"></a>
<a id="trace-21331"></a>
<a id="trace-21336"></a>
<a id="trace-21338"></a>
<a id="trace-21355"></a>
<a id="trace-21357"></a>
<a id="trace-21421"></a>
<a id="trace-21423"></a>
<a id="trace-21445"></a>
<a id="trace-21447"></a>
<a id="trace-21454"></a>
<a id="trace-21456"></a>
<a id="trace-21464"></a>
<a id="trace-21466"></a>
<a id="trace-21478"></a>
<a id="trace-21480"></a>
<a id="trace-21540"></a>
<a id="trace-21542"></a>
<a id="trace-21556"></a>
<a id="trace-21558"></a>
<a id="trace-21581"></a>
<a id="trace-21583"></a>
<a id="trace-21589"></a>
<a id="trace-21591"></a>
<a id="trace-21603"></a>
<a id="trace-21605"></a>
<a id="trace-21668"></a>
<a id="trace-21670"></a>
<a id="trace-21680"></a>
<a id="trace-21682"></a>
<a id="trace-21693"></a>
<a id="trace-21695"></a>
<a id="trace-21706"></a>
<a id="trace-21708"></a>
<a id="trace-21731"></a>
<a id="trace-21733"></a>
<a id="trace-21793"></a>
<a id="trace-21795"></a>
<a id="trace-21804"></a>
<a id="trace-21806"></a>
<a id="trace-21818"></a>
<a id="trace-21820"></a>
<a id="trace-21825"></a>
<a id="trace-21827"></a>
<a id="trace-21844"></a>
<a id="trace-21846"></a>
<a id="trace-21920"></a>
<a id="trace-21922"></a>
<a id="trace-21932"></a>
<a id="trace-21934"></a>
<a id="trace-21942"></a>
<a id="trace-21944"></a>
<a id="trace-21950"></a>
<a id="trace-21952"></a>
<a id="trace-21966"></a>
<a id="trace-21968"></a>
<a id="trace-22033"></a>
<a id="trace-22035"></a>
<a id="trace-22049"></a>
<a id="trace-22051"></a>
<a id="trace-22070"></a>
<a id="trace-22072"></a>
<a id="trace-22077"></a>
<a id="trace-22079"></a>
<a id="trace-22091"></a>
<a id="trace-22093"></a>
<a id="trace-22153"></a>
<a id="trace-22155"></a>
<a id="trace-22169"></a>
<a id="trace-22171"></a>
<a id="trace-22183"></a>
<a id="trace-22185"></a>
<a id="trace-22195"></a>
<a id="trace-22197"></a>
<a id="trace-22219"></a>
<a id="trace-22280"></a>
<a id="trace-22282"></a>
<a id="trace-22292"></a>
<a id="trace-22294"></a>
<a id="trace-22302"></a>
<a id="trace-22304"></a>
<a id="trace-22313"></a>
<a id="trace-22315"></a>
<a id="trace-22331"></a>
<a id="trace-22333"></a>
<a id="trace-22407"></a>
<a id="trace-22409"></a>
<a id="trace-22420"></a>
<a id="trace-22422"></a>
<a id="trace-22429"></a>
<a id="trace-22431"></a>
<a id="trace-22438"></a>
<a id="trace-22440"></a>
<a id="trace-22451"></a>
<a id="trace-22453"></a>
<a id="trace-22519"></a>
<a id="trace-22521"></a>
<a id="trace-22536"></a>
<a id="trace-22538"></a>
<a id="trace-22558"></a>
<a id="trace-22560"></a>
<a id="trace-22565"></a>
<a id="trace-22567"></a>
<a id="trace-22579"></a>
<a id="trace-22581"></a>
<a id="trace-22640"></a>
<a id="trace-22642"></a>
<a id="trace-22652"></a>
<a id="trace-22654"></a>
<a id="trace-22670"></a>
<a id="trace-22672"></a>
<a id="trace-22693"></a>
<a id="trace-22695"></a>
<a id="trace-22707"></a>
<a id="trace-22709"></a>
<a id="trace-22769"></a>
<a id="trace-22771"></a>
<a id="trace-22780"></a>
<a id="trace-22782"></a>
<a id="trace-22790"></a>
<a id="trace-22792"></a>
<a id="trace-22801"></a>
<a id="trace-22803"></a>
<a id="trace-22824"></a>
<a id="trace-22826"></a>
<a id="trace-22897"></a>
<a id="trace-22899"></a>
<a id="trace-22909"></a>
<a id="trace-22911"></a>
<a id="trace-22918"></a>
<a id="trace-22920"></a>
<a id="trace-22925"></a>
<a id="trace-22927"></a>
<a id="trace-22939"></a>
<a id="trace-22941"></a>
<a id="trace-23006"></a>
<a id="trace-23008"></a>
<a id="trace-23025"></a>
<a id="trace-23027"></a>
<a id="trace-23047"></a>
<a id="trace-23049"></a>
<a id="trace-23054"></a>
<a id="trace-23056"></a>
<a id="trace-23067"></a>
<a id="trace-23069"></a>
- 1.60s–359.30s (×1227), actor 37, squad 4 (trace 546): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.507937058323342, 'next_transition': 574}.
<a id="trace-902"></a>
<a id="trace-931"></a>
<a id="trace-956"></a>
<a id="trace-958"></a>
<a id="trace-985"></a>
<a id="trace-987"></a>
<a id="trace-1002"></a>
<a id="trace-1004"></a>
<a id="trace-1093"></a>
<a id="trace-1095"></a>
<a id="trace-1339"></a>
<a id="trace-1341"></a>
<a id="trace-1363"></a>
<a id="trace-1365"></a>
- 7.70s–11.20s (×14), actor 5, squad 0 (trace 902): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 713. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5067203258732503, 'next_transition': 931}.
<a id="trace-1100"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1100): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1022. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.4447603998189145, 'next_transition': 138}.
<a id="trace-1101"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1101): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1022. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.4447603998189145, 'next_transition': 138}.
<a id="trace-138"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 138): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.752024626658834, 'next_transition': 2076}.
<a id="trace-1448"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1448): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1448. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.752024626658834, 'next_transition': 2076}.
<a id="trace-1449"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1449): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1449. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.752024626658834, 'next_transition': 2076}.
<a id="trace-1450"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1450): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1014. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4804965522833002, 'next_transition': 1973}.
<a id="trace-1451"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1451): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1014. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4804965522833002, 'next_transition': 1973}.
<a id="trace-1973"></a>
<a id="trace-1975"></a>
<a id="trace-2039"></a>
<a id="trace-2041"></a>
<a id="trace-2064"></a>
<a id="trace-2066"></a>
<a id="trace-3411"></a>
<a id="trace-3413"></a>
<a id="trace-3477"></a>
<a id="trace-3479"></a>
<a id="trace-4219"></a>
<a id="trace-4221"></a>
<a id="trace-4277"></a>
<a id="trace-4279"></a>
<a id="trace-4327"></a>
<a id="trace-4329"></a>
<a id="trace-4369"></a>
<a id="trace-4371"></a>
<a id="trace-4439"></a>
<a id="trace-4441"></a>
<a id="trace-4464"></a>
<a id="trace-4466"></a>
<a id="trace-4759"></a>
<a id="trace-4761"></a>
<a id="trace-4846"></a>
<a id="trace-4848"></a>
<a id="trace-4868"></a>
<a id="trace-4870"></a>
<a id="trace-4907"></a>
<a id="trace-4909"></a>
- 13.20s–21.75s (×30), actor 5, squad 0 (trace 1973): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.75s, trace 1449. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5553209161622539, 'next_transition': 2039}.
<a id="trace-2076"></a>
- 14.85s–14.85s (×1), actor 8, squad 1 (trace 2076): ReactToContact: cover and return fire. Knowledge: actor memory at 10.00s, trace 1022. Next observer evidence: None.
<a id="trace-2077"></a>
- 14.85s–14.85s (×1), actor 8, squad 1 (trace 2077): bounding overwatch. Knowledge: actor memory at 10.00s, trace 1022. Next observer evidence: None.
<a id="trace-2078"></a>
<a id="trace-2394"></a>
<a id="trace-2736"></a>
<a id="trace-3093"></a>
<a id="trace-3511"></a>
<a id="trace-3859"></a>
- 14.85s–16.10s (×6), actor 8, squad 1 (trace 2078): new contact inside 100 m. Knowledge: actor memory at 10.00s, trace 1022. Next observer evidence: None.
<a id="trace-4481"></a>
- 19.45s–19.45s (×1), actor 8, squad 1 (trace 4481): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 15.00s, trace 2717. Next observer evidence: {'until': 43.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 2.797480547165275, 'next_transition': 8169}.
<a id="trace-4482"></a>
- 19.45s–19.45s (×1), actor 8, squad 1 (trace 4482): rearward bound: one stationary suppressing element. Knowledge: actor memory at 15.00s, trace 2717. Next observer evidence: {'until': 43.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 2.797480547165275, 'next_transition': 8169}.
<a id="trace-4928"></a>
- 22.10s–22.10s (×1), actor 1, squad 0 (trace 4928): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 4771. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9271470320280077, 'next_transition': 5612}.
<a id="trace-4929"></a>
- 22.10s–22.10s (×1), actor 1, squad 0 (trace 4929): bounding overwatch. Knowledge: actor memory at 20.00s, trace 4771. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9271470320280077, 'next_transition': 5612}.
<a id="trace-4930"></a>
- 22.10s–22.10s (×1), actor 1, squad 0 (trace 4930): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 4771. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9271470320280077, 'next_transition': 5612}.
<a id="trace-5612"></a>
<a id="trace-5614"></a>
- 23.25s–23.25s (×2), actor 5, squad 0 (trace 5612): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4775. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6625216755766196, 'next_transition': 5640}.
<a id="trace-5640"></a>
- 23.65s–23.65s (×1), actor 1, squad 0 (trace 5640): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 4771. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.149660762200584, 'next_transition': 6332}.
<a id="trace-6332"></a>
<a id="trace-6371"></a>
<a id="trace-6476"></a>
<a id="trace-6492"></a>
- 24.25s–25.75s (×4), actor 5, squad 0 (trace 6332): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4775. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.534629962820968, 'next_transition': 6371}.
<a id="trace-449"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 449): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6544"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 6544): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 6544. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.404971434212033, 'next_transition': 6572}.
<a id="trace-6545"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 6545): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 6545. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.404971434212033, 'next_transition': 6572}.
<a id="trace-6572"></a>
- 27.25s–27.25s (×1), actor 5, squad 0 (trace 6572): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 6545. Next observer evidence: None.
<a id="trace-6582"></a>
- 27.35s–27.35s (×1), actor 1, squad 0 (trace 6582): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 6398. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6662043985329633, 'next_transition': 7052}.
<a id="trace-6583"></a>
- 27.35s–27.35s (×1), actor 1, squad 0 (trace 6583): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 6398. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6662043985329633, 'next_transition': 7052}.
<a id="trace-7052"></a>
<a id="trace-7152"></a>
<a id="trace-7154"></a>
<a id="trace-7266"></a>
<a id="trace-7268"></a>
<a id="trace-7307"></a>
<a id="trace-7309"></a>
<a id="trace-7396"></a>
<a id="trace-7398"></a>
<a id="trace-7436"></a>
<a id="trace-7438"></a>
<a id="trace-7495"></a>
<a id="trace-7497"></a>
<a id="trace-7514"></a>
<a id="trace-7516"></a>
<a id="trace-7544"></a>
<a id="trace-7546"></a>
<a id="trace-7562"></a>
<a id="trace-7564"></a>
<a id="trace-7647"></a>
<a id="trace-7649"></a>
<a id="trace-7664"></a>
<a id="trace-7666"></a>
<a id="trace-7707"></a>
<a id="trace-7709"></a>
- 28.25s–36.75s (×25), actor 5, squad 0 (trace 7052): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 6545. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.8991832021803132, 'next_transition': 7152}.
<a id="trace-7722"></a>
- 37.10s–37.10s (×1), actor 1, squad 0 (trace 7722): NeedSupport. Knowledge: actor memory at 35.00s, trace 7574. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4884126908664004, 'next_transition': 7736}.
<a id="trace-7736"></a>
<a id="trace-7738"></a>
<a id="trace-7777"></a>
<a id="trace-7779"></a>
<a id="trace-7796"></a>
<a id="trace-7798"></a>
<a id="trace-7835"></a>
<a id="trace-7837"></a>
<a id="trace-7920"></a>
<a id="trace-7922"></a>
<a id="trace-7945"></a>
<a id="trace-7947"></a>
<a id="trace-7961"></a>
<a id="trace-7963"></a>
<a id="trace-7981"></a>
<a id="trace-7983"></a>
<a id="trace-8007"></a>
<a id="trace-8009"></a>
<a id="trace-8026"></a>
<a id="trace-8028"></a>
<a id="trace-8044"></a>
<a id="trace-8046"></a>
- 37.25s–43.25s (×22), actor 5, squad 0 (trace 7736): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 7578. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.421976283549536, 'next_transition': 7777}.
<a id="trace-8057"></a>
- 43.45s–43.45s (×1), actor 1, squad 0 (trace 8057): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 7846. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0899988066700932, 'next_transition': 8180}.
<a id="trace-8058"></a>
- 43.45s–43.45s (×1), actor 1, squad 0 (trace 8058): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 7846. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0899988066700932, 'next_transition': 8180}.
<a id="trace-8169"></a>
- 43.60s–43.60s (×1), actor 9, squad 1 (trace 8169): NeedSupport. Knowledge: actor memory at 40.00s, trace 7853. Next observer evidence: {'until': 73.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.08713999999999977, 'next_transition': None}.
<a id="trace-8180"></a>
- 43.70s–43.70s (×1), actor 1, squad 0 (trace 8180): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 40.00s, trace 7846. Next observer evidence: None.
<a id="trace-8182"></a>
<a id="trace-8184"></a>
- 43.75s–43.75s (×2), actor 5, squad 0 (trace 8182): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7850. Next observer evidence: {'until': 44, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.18000068177308523, 'next_transition': 8198}.
<a id="trace-8198"></a>
- 44.05s–44.05s (×1), actor 1, squad 0 (trace 8198): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 7846. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3509909763711827, 'next_transition': 8577}.
<a id="trace-8203"></a>
- 44.05s–44.05s (×1), actor 1, squad 0 (trace 8203): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 7846. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3509909763711827, 'next_transition': 8577}.
<a id="trace-8204"></a>
- 44.05s–44.05s (×1), actor 1, squad 0 (trace 8204): Reorganise complete: known contact. Knowledge: actor memory at 40.00s, trace 7846. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3509909763711827, 'next_transition': 8577}.
<a id="trace-8577"></a>
<a id="trace-8579"></a>
<a id="trace-8618"></a>
<a id="trace-8620"></a>
<a id="trace-8652"></a>
<a id="trace-8654"></a>
<a id="trace-8700"></a>
<a id="trace-8702"></a>
- 45.75s–47.25s (×8), actor 5, squad 0 (trace 8577): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 8460. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9327516331454747, 'next_transition': 8618}.
<a id="trace-8731"></a>
- 47.70s–47.70s (×1), actor 1, squad 0 (trace 8731): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 45.00s, trace 8457. Next observer evidence: None.
<a id="trace-8732"></a>
- 47.70s–47.70s (×1), actor 1, squad 0 (trace 8732): rearward bound: one stationary suppressing element. Knowledge: actor memory at 45.00s, trace 8457. Next observer evidence: None.
<a id="trace-8987"></a>
<a id="trace-8989"></a>
<a id="trace-9069"></a>
<a id="trace-9071"></a>
<a id="trace-9114"></a>
<a id="trace-9116"></a>
<a id="trace-9131"></a>
<a id="trace-9133"></a>
<a id="trace-9217"></a>
<a id="trace-9219"></a>
<a id="trace-9237"></a>
<a id="trace-9239"></a>
<a id="trace-9254"></a>
<a id="trace-9256"></a>
<a id="trace-9288"></a>
<a id="trace-9290"></a>
<a id="trace-9306"></a>
<a id="trace-9308"></a>
<a id="trace-9322"></a>
<a id="trace-9324"></a>
<a id="trace-9338"></a>
<a id="trace-9340"></a>
<a id="trace-9360"></a>
<a id="trace-9362"></a>
<a id="trace-9373"></a>
<a id="trace-9375"></a>
<a id="trace-9456"></a>
<a id="trace-9458"></a>
<a id="trace-9474"></a>
<a id="trace-9476"></a>
<a id="trace-9495"></a>
<a id="trace-9497"></a>
<a id="trace-9511"></a>
<a id="trace-9513"></a>
<a id="trace-9523"></a>
<a id="trace-9525"></a>
<a id="trace-9549"></a>
<a id="trace-9561"></a>
<a id="trace-9578"></a>
- 47.75s–59.25s (×39), actor 5, squad 0 (trace 8987): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 8460. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23777736861892299, 'next_transition': 9069}.
<a id="trace-9590"></a>
- 59.65s–59.65s (×1), actor 1, squad 0 (trace 9590): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 9383. Next observer evidence: None.
<a id="trace-9591"></a>
- 59.65s–59.65s (×1), actor 1, squad 0 (trace 9591): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 9383. Next observer evidence: None.
<a id="trace-9697"></a>
<a id="trace-9771"></a>
<a id="trace-9792"></a>
<a id="trace-9815"></a>
<a id="trace-9827"></a>
<a id="trace-9852"></a>
<a id="trace-9866"></a>
<a id="trace-9881"></a>
<a id="trace-9892"></a>
<a id="trace-9910"></a>
<a id="trace-9920"></a>
<a id="trace-9996"></a>
<a id="trace-10005"></a>
<a id="trace-10045"></a>
<a id="trace-10054"></a>
<a id="trace-10101"></a>
<a id="trace-10110"></a>
<a id="trace-10188"></a>
<a id="trace-10197"></a>
<a id="trace-10210"></a>
<a id="trace-10245"></a>
<a id="trace-10269"></a>
<a id="trace-10283"></a>
- 59.75s–73.75s (×23), actor 5, squad 0 (trace 9697): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 9385. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9771}.
<a id="trace-10306"></a>
- 74.20s–74.20s (×1), actor 1, squad 0 (trace 10306): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 70.00s, trace 10119. Next observer evidence: None.
<a id="trace-10315"></a>
<a id="trace-10333"></a>
<a id="trace-10410"></a>
<a id="trace-10425"></a>
<a id="trace-10442"></a>
<a id="trace-10455"></a>
<a id="trace-10477"></a>
<a id="trace-10487"></a>
<a id="trace-10511"></a>
<a id="trace-10605"></a>
<a id="trace-10636"></a>
<a id="trace-10657"></a>
<a id="trace-10665"></a>
<a id="trace-10675"></a>
<a id="trace-10683"></a>
<a id="trace-10694"></a>
<a id="trace-10704"></a>
<a id="trace-10776"></a>
<a id="trace-10805"></a>
<a id="trace-10831"></a>
<a id="trace-10845"></a>
<a id="trace-10869"></a>
<a id="trace-10877"></a>
<a id="trace-10948"></a>
<a id="trace-10957"></a>
<a id="trace-10968"></a>
<a id="trace-10976"></a>
<a id="trace-10991"></a>
<a id="trace-10999"></a>
<a id="trace-11010"></a>
<a id="trace-11021"></a>
<a id="trace-11041"></a>
- 74.25s–94.75s (×32), actor 5, squad 0 (trace 10315): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 10121. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23053905295205923, 'next_transition': 10333}.
<a id="trace-1068"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (events line 1068): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11132"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (trace 11132): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.654948 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.65s, trace 11132. Next observer evidence: None.
<a id="trace-11133"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (trace 11133): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.654948 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.65s, trace 11133. Next observer evidence: None.
<a id="trace-11136"></a>
<a id="trace-11145"></a>
<a id="trace-11154"></a>
<a id="trace-11167"></a>
<a id="trace-11175"></a>
<a id="trace-11187"></a>
<a id="trace-11198"></a>
<a id="trace-11208"></a>
- 95.75s–99.25s (×8), actor 5, squad 0 (trace 11136): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.65s, trace 11133. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11145}.
<a id="trace-11304"></a>
- 101.20s–101.20s (×1), actor 1, squad 0 (trace 11304): MoveTactically. Knowledge: actor memory at 100.00s, trace 11224. Next observer evidence: None.
<a id="trace-11305"></a>
- 101.20s–101.20s (×1), actor 1, squad 0 (trace 11305): received platoon directive. Knowledge: actor memory at 100.00s, trace 11224. Next observer evidence: None.
<a id="trace-11414"></a>
<a id="trace-11425"></a>
<a id="trace-11444"></a>
<a id="trace-11466"></a>
<a id="trace-11486"></a>
<a id="trace-11507"></a>
<a id="trace-11628"></a>
<a id="trace-11654"></a>
<a id="trace-11667"></a>
<a id="trace-11683"></a>
<a id="trace-11719"></a>
<a id="trace-11733"></a>
<a id="trace-11822"></a>
<a id="trace-11838"></a>
<a id="trace-11849"></a>
<a id="trace-11877"></a>
<a id="trace-11893"></a>
<a id="trace-11905"></a>
- 101.25s–113.75s (×18), actor 5, squad 0 (trace 11414): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 11226. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11425}.
<a id="trace-11911"></a>
- 113.95s–113.95s (×1), actor 1, squad 0 (trace 11911): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 110.00s, trace 11746. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12767106508907541, 'next_transition': 11927}.
<a id="trace-11927"></a>
- 114.20s–114.20s (×1), actor 1, squad 0 (trace 11927): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 11746. Next observer evidence: None.
<a id="trace-11986"></a>
<a id="trace-12079"></a>
<a id="trace-12091"></a>
<a id="trace-12110"></a>
<a id="trace-12159"></a>
<a id="trace-12172"></a>
<a id="trace-12187"></a>
<a id="trace-12219"></a>
<a id="trace-12300"></a>
<a id="trace-12309"></a>
<a id="trace-12324"></a>
<a id="trace-12336"></a>
<a id="trace-12355"></a>
<a id="trace-12388"></a>
<a id="trace-12401"></a>
- 114.25s–123.75s (×15), actor 5, squad 0 (trace 11986): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 11748. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1890002708992768, 'next_transition': 12079}.
<a id="trace-12407"></a>
- 123.85s–123.85s (×1), actor 1, squad 0 (trace 12407): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 120.00s, trace 12228. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12422}.
<a id="trace-12422"></a>
<a id="trace-12436"></a>
- 124.25s–124.75s (×2), actor 5, squad 0 (trace 12422): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 12230. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12436}.
<a id="trace-12448"></a>
- 124.85s–124.85s (×1), actor 1, squad 0 (trace 12448): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 12228. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0079877390563834, 'next_transition': 12729}.
<a id="trace-12648"></a>
- 124.85s–124.85s (×1), actor 1, squad 0 (trace 12648): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 120.00s, trace 12228. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0079877390563834, 'next_transition': 12729}.
<a id="trace-12729"></a>
<a id="trace-12758"></a>
<a id="trace-12769"></a>
<a id="trace-12783"></a>
<a id="trace-12796"></a>
<a id="trace-12829"></a>
<a id="trace-12844"></a>
<a id="trace-12860"></a>
<a id="trace-12946"></a>
<a id="trace-12974"></a>
<a id="trace-12987"></a>
<a id="trace-13003"></a>
<a id="trace-13034"></a>
<a id="trace-13043"></a>
<a id="trace-13070"></a>
<a id="trace-13153"></a>
<a id="trace-13172"></a>
- 125.75s–136.30s (×17), actor 5, squad 0 (trace 12729): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 12656. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34639651328160964, 'next_transition': 12758}.
<a id="trace-13180"></a>
- 136.45s–136.45s (×1), actor 1, squad 0 (trace 13180): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 135.00s, trace 13077. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600171494070034, 'next_transition': 13334}.
<a id="trace-13334"></a>
- 136.80s–136.80s (×1), actor 5, squad 0 (trace 13334): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 13079. Next observer evidence: {'until': 137.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560109074556983, 'next_transition': 13362}.
<a id="trace-13362"></a>
- 137.45s–137.45s (×1), actor 1, squad 0 (trace 13362): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 135.00s, trace 13077. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5072079617355245, 'next_transition': 13432}.
<a id="trace-13432"></a>
<a id="trace-13455"></a>
<a id="trace-13462"></a>
<a id="trace-13483"></a>
<a id="trace-13493"></a>
<a id="trace-13572"></a>
<a id="trace-13585"></a>
<a id="trace-13597"></a>
<a id="trace-13607"></a>
<a id="trace-13623"></a>
<a id="trace-13650"></a>
<a id="trace-13665"></a>
<a id="trace-13707"></a>
<a id="trace-13780"></a>
<a id="trace-13805"></a>
<a id="trace-13819"></a>
<a id="trace-13832"></a>
- 137.80s–147.30s (×17), actor 5, squad 0 (trace 13432): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 13079. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.031500634914235354, 'next_transition': 13455}.
<a id="trace-13837"></a>
- 147.45s–147.45s (×1), actor 1, squad 0 (trace 13837): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 145.00s, trace 13716. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.031500203173947784, 'next_transition': 13941}.
<a id="trace-13941"></a>
<a id="trace-13955"></a>
<a id="trace-13982"></a>
<a id="trace-14062"></a>
<a id="trace-14075"></a>
- 148.30s–150.80s (×5), actor 5, squad 0 (trace 13941): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 13718. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040239114279937, 'next_transition': 13955}.
<a id="trace-1414"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (events line 1414): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14080"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (trace 14080): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 14080. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520022472598211, 'next_transition': 14096}.
<a id="trace-14081"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (trace 14081): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 14081. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520022472598211, 'next_transition': 14096}.
<a id="trace-14096"></a>
<a id="trace-14142"></a>
<a id="trace-14155"></a>
<a id="trace-14165"></a>
- 151.30s–153.80s (×4), actor 5, squad 0 (trace 14096): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.90s, trace 14081. Next observer evidence: {'until': 152.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8907951489111001, 'next_transition': 14142}.
<a id="trace-14171"></a>
- 154.00s–154.00s (×1), actor 1, squad 0 (trace 14171): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 150.00s, trace 13990. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14277}.
<a id="trace-14277"></a>
<a id="trace-14286"></a>
<a id="trace-14365"></a>
<a id="trace-14374"></a>
- 154.30s–155.80s (×4), actor 5, squad 0 (trace 14277): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.90s, trace 14081. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14286}.
<a id="trace-14379"></a>
- 156.05s–156.05s (×1), actor 1, squad 0 (trace 14379): traveling overwatch. Knowledge: actor memory at 155.00s, trace 14293. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21670819516533468, 'next_transition': 14479}.
<a id="trace-14380"></a>
- 156.05s–156.05s (×1), actor 1, squad 0 (trace 14380): current contact unknown for 10 s. Knowledge: actor memory at 155.00s, trace 14293. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21670819516533468, 'next_transition': 14479}.
<a id="trace-14479"></a>
<a id="trace-14505"></a>
<a id="trace-14529"></a>
<a id="trace-14562"></a>
<a id="trace-14592"></a>
<a id="trace-14605"></a>
<a id="trace-14619"></a>
<a id="trace-14694"></a>
<a id="trace-14709"></a>
<a id="trace-14719"></a>
<a id="trace-14746"></a>
<a id="trace-14758"></a>
<a id="trace-14775"></a>
<a id="trace-14806"></a>
<a id="trace-14905"></a>
<a id="trace-14921"></a>
<a id="trace-14962"></a>
- 156.30s–167.30s (×17), actor 5, squad 0 (trace 14479): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 14295. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7761960066536647, 'next_transition': 14505}.
<a id="trace-14971"></a>
- 167.65s–167.65s (×1), actor 1, squad 0 (trace 14971): ReactToContact: cover and return fire. Knowledge: actor memory at 165.00s, trace 14834. Next observer evidence: {'until': 167.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.09071948236183892, 'next_transition': 15481}.
<a id="trace-14972"></a>
- 167.65s–167.65s (×1), actor 1, squad 0 (trace 14972): bounding overwatch. Knowledge: actor memory at 165.00s, trace 14834. Next observer evidence: {'until': 167.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.09071948236183892, 'next_transition': 15481}.
<a id="trace-14973"></a>
- 167.65s–167.65s (×1), actor 1, squad 0 (trace 14973): new contact inside 100 m. Knowledge: actor memory at 165.00s, trace 14834. Next observer evidence: {'until': 167.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.09071948236183892, 'next_transition': 15481}.
<a id="trace-15481"></a>
<a id="trace-15498"></a>
<a id="trace-15520"></a>
<a id="trace-15553"></a>
<a id="trace-15645"></a>
<a id="trace-15669"></a>
- 167.80s–170.80s (×6), actor 5, squad 0 (trace 15481): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 14836. Next observer evidence: {'until': 168.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2964132947858311, 'next_transition': 15498}.
<a id="trace-15685"></a>
- 171.25s–171.25s (×1), actor 1, squad 0 (trace 15685): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 170.00s, trace 15572. Next observer evidence: {'until': 171.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28903614743768385, 'next_transition': 15700}.
<a id="trace-15686"></a>
- 171.25s–171.25s (×1), actor 1, squad 0 (trace 15686): ; retain contact cover stage. Knowledge: actor memory at 170.00s, trace 15572. Next observer evidence: {'until': 171.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28903614743768385, 'next_transition': 15700}.
<a id="trace-15700"></a>
- 171.50s–171.50s (×1), actor 1, squad 0 (trace 15700): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 170.00s, trace 15572. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41003318126124083, 'next_transition': 15707}.
<a id="trace-15707"></a>
<a id="trace-15730"></a>
<a id="trace-15749"></a>
- 171.80s–172.80s (×3), actor 5, squad 0 (trace 15707): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 15574. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4239491037402052, 'next_transition': 15730}.
<a id="trace-15766"></a>
- 173.20s–173.20s (×1), actor 1, squad 0 (trace 15766): ReactToContact: cover and return fire. Knowledge: actor memory at 170.00s, trace 15572. Next observer evidence: None.
<a id="trace-15767"></a>
- 173.20s–173.20s (×1), actor 1, squad 0 (trace 15767): new contact inside 100 m. Knowledge: actor memory at 170.00s, trace 15572. Next observer evidence: None.
<a id="trace-16353"></a>
- 173.30s–173.30s (×1), actor 5, squad 0 (trace 16353): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 15574. Next observer evidence: {'until': 173.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5556561289808881, 'next_transition': 16377}.
<a id="trace-16377"></a>
- 173.85s–173.85s (×1), actor 1, squad 0 (trace 16377): new contact inside 100 m. Knowledge: actor memory at 170.00s, trace 15572. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47202041060906696, 'next_transition': 16973}.
<a id="trace-16973"></a>
<a id="trace-16993"></a>
<a id="trace-17075"></a>
<a id="trace-17091"></a>
<a id="trace-17107"></a>
<a id="trace-17125"></a>
<a id="trace-17151"></a>
<a id="trace-17164"></a>
- 174.30s–178.30s (×8), actor 5, squad 0 (trace 16973): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 15574. Next observer evidence: {'until': 174.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7006624639973296, 'next_transition': 16993}.
<a id="trace-17172"></a>
- 178.40s–178.40s (×1), actor 4, squad 0 (trace 17172): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 175.00s, trace 17005. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.990188249046573, 'next_transition': 17195}.
<a id="trace-17195"></a>
- 179.30s–179.30s (×1), actor 5, squad 0 (trace 17195): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 17006. Next observer evidence: {'until': 179.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15787510042383376, 'next_transition': 17206}.
<a id="trace-17206"></a>
- 179.40s–179.40s (×1), actor 4, squad 0 (trace 17206): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 175.00s, trace 17005. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44351017633436146, 'next_transition': 17549}.
<a id="trace-17207"></a>
- 179.40s–179.40s (×1), actor 4, squad 0 (trace 17207): rearward bound: one stationary suppressing element. Knowledge: actor memory at 175.00s, trace 17005. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44351017633436146, 'next_transition': 17549}.
<a id="trace-17549"></a>
<a id="trace-17654"></a>
<a id="trace-17696"></a>
<a id="trace-17721"></a>
<a id="trace-17743"></a>
- 179.80s–181.80s (×5), actor 5, squad 0 (trace 17549): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 17006. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48557465288465895, 'next_transition': 17654}.
<a id="trace-17835"></a>
- 184.10s–184.10s (×1), actor 4, squad 0 (trace 17835): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 180.00s, trace 17572. Next observer evidence: None.
<a id="trace-17836"></a>
- 184.10s–184.10s (×1), actor 4, squad 0 (trace 17836): NeedSupport. Knowledge: actor memory at 180.00s, trace 17572. Next observer evidence: None.
<a id="trace-17845"></a>
- 184.15s–184.15s (×1), actor 4, squad 0 (trace 17845): Reorganise: completed/failed drill. Knowledge: actor memory at 180.00s, trace 17572. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.15749250108043586, 'next_transition': 18001}.
<a id="trace-17847"></a>
- 184.15s–184.15s (×1), actor 4, squad 0 (trace 17847): ReactToContact: cover and return fire. Knowledge: actor memory at 180.00s, trace 17572. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.15749250108043586, 'next_transition': 18001}.
<a id="trace-17848"></a>
- 184.15s–184.15s (×1), actor 4, squad 0 (trace 17848): Reorganise complete: known contact. Knowledge: actor memory at 180.00s, trace 17572. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.15749250108043586, 'next_transition': 18001}.
<a id="trace-18001"></a>
<a id="trace-18073"></a>
<a id="trace-18085"></a>
<a id="trace-18102"></a>
<a id="trace-18115"></a>
<a id="trace-18130"></a>
- 184.80s–187.30s (×6), actor 5, squad 0 (trace 18001): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 17573. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9319859337044246, 'next_transition': 18073}.
<a id="trace-18139"></a>
- 187.50s–187.50s (×1), actor 4, squad 0 (trace 18139): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 185.00s, trace 18008. Next observer evidence: {'until': 188.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.27778839193993, 'next_transition': 18298}.
<a id="trace-18140"></a>
- 187.50s–187.50s (×1), actor 4, squad 0 (trace 18140): rearward bound: one stationary suppressing element. Knowledge: actor memory at 185.00s, trace 18008. Next observer evidence: {'until': 188.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.27778839193993, 'next_transition': 18298}.
<a id="trace-18298"></a>
<a id="trace-18320"></a>
- 188.30s–188.80s (×2), actor 5, squad 0 (trace 18298): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 18009. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4679052726312782, 'next_transition': 18320}.
<a id="trace-18327"></a>
- 188.85s–188.85s (×1), actor 4, squad 0 (trace 18327): NeedSupport. Knowledge: actor memory at 185.00s, trace 18008. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8304399717423215, 'next_transition': 18342}.
<a id="trace-18342"></a>
<a id="trace-18360"></a>
<a id="trace-18438"></a>
<a id="trace-18450"></a>
<a id="trace-18464"></a>
<a id="trace-18475"></a>
<a id="trace-18495"></a>
- 189.30s–192.30s (×7), actor 5, squad 0 (trace 18342): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 18009. Next observer evidence: {'until': 189.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7498341492080592, 'next_transition': 18360}.
<a id="trace-1844"></a>
- 192.35s–192.35s (×1), actor 5, squad 0 (events line 1844): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18502"></a>
- 192.35s–192.35s (×1), actor 5, squad 0 (trace 18502): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.420266 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 192.35s, trace 18502. Next observer evidence: {'until': 192.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5133443021131718, 'next_transition': 18511}.
<a id="trace-18503"></a>
- 192.35s–192.35s (×1), actor 5, squad 0 (trace 18503): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.420266 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 192.35s, trace 18503. Next observer evidence: {'until': 192.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5133443021131718, 'next_transition': 18511}.
<a id="trace-18511"></a>
<a id="trace-18530"></a>
<a id="trace-18541"></a>
<a id="trace-18555"></a>
<a id="trace-18572"></a>
- 192.80s–194.80s (×5), actor 5, squad 0 (trace 18511): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 192.35s, trace 18503. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49973990003896285, 'next_transition': 18530}.
<a id="trace-18579"></a>
- 194.85s–194.85s (×1), actor 5, squad 0 (trace 18579): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 194.85s, trace 18579. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20561307783742208, 'next_transition': 18642}.
<a id="trace-18642"></a>
<a id="trace-18652"></a>
<a id="trace-18669"></a>
<a id="trace-18686"></a>
<a id="trace-18723"></a>
<a id="trace-18736"></a>
<a id="trace-18749"></a>
<a id="trace-18759"></a>
<a id="trace-18851"></a>
<a id="trace-18864"></a>
<a id="trace-18877"></a>
<a id="trace-18899"></a>
<a id="trace-18913"></a>
<a id="trace-18928"></a>
<a id="trace-18938"></a>
<a id="trace-18972"></a>
<a id="trace-19039"></a>
<a id="trace-19053"></a>
<a id="trace-19072"></a>
<a id="trace-19081"></a>
<a id="trace-19094"></a>
<a id="trace-19102"></a>
<a id="trace-19123"></a>
<a id="trace-19157"></a>
<a id="trace-19242"></a>
<a id="trace-19255"></a>
<a id="trace-19269"></a>
<a id="trace-19281"></a>
<a id="trace-19298"></a>
<a id="trace-19317"></a>
<a id="trace-19345"></a>
<a id="trace-19368"></a>
<a id="trace-19381"></a>
<a id="trace-19448"></a>
<a id="trace-19485"></a>
<a id="trace-19499"></a>
<a id="trace-19508"></a>
<a id="trace-19519"></a>
<a id="trace-19543"></a>
<a id="trace-19554"></a>
- 195.30s–219.80s (×40), actor 5, squad 0 (trace 18642): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 18582. Next observer evidence: {'until': 195.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.32372851977218337, 'next_transition': 18652}.

## Net delivery

215 matched order/radio deliveries; 194 explicitly recorded losses; 2 unmatched orders (not classified as lost).
Matched delay: mean 0.427s; maximum 5.550s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2717: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2719: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2726: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4773: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4778: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4779: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4780: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4781: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4782: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4783: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4784: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4785: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4786: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4787: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4788: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 6398: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 6399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 6400: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 6401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 6402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 6403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 6404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 6405: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 6406: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 6407: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 6408: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 6409: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 6410: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 6411: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 6412: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 6413: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 6414: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 6415: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 6544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 6545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7174: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 7176: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7179: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 7181: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7182: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7183: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7184: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7185: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7186: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7187: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7188: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7189: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7190: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7191: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 7574: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 7575: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 7576: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 7577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 7578: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 7579: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 7580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 7581: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 7582: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 7583: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 7584: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 7585: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 7586: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 7587: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 7588: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 7589: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 7590: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 7591: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 7846: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 7847: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 7848: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7850: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7851: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 7853: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7854: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 7855: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 7856: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 7857: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 7858: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 7859: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 7860: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 7861: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 7862: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 7863: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 8457: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 8458: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 8459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 8460: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 8461: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 8462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 8463: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 8464: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 8465: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 8466: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 8467: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 8468: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 8469: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 8470: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 8471: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 8472: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 8473: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 9144: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 9145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 9146: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 9147: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 9148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 9149: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 9150: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 9151: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 9152: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 9153: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 9154: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 9155: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 9156: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 9157: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 9158: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 9159: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 9383: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 9384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 9385: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 9386: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 9387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 9388: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 9389: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 9390: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 9391: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 9392: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 9393: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 9394: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 9395: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 9396: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 9397: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 9704: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 9705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 9706: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 9707: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 9708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 9709: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 9710: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 9711: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 9712: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 9713: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 9714: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 9715: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 9716: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 9717: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 9718: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 9933: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 9934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 9935: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 9936: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 9937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 9938: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 9939: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 9940: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 9941: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 9942: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 9943: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 9944: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 9945: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 9946: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 9947: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 10119: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 10120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 10121: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 10122: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 10123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 10124: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 10125: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 10126: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 10127: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 10128: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 10129: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 10130: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 10131: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 10132: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 10133: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 10346: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 10347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 10348: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 10349: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 10350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 10351: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 10352: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 10353: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 10354: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 10355: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 10356: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 10357: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 10358: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 10359: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 10360: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 10542: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 10543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 10544: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 10545: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 10546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 10547: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 10548: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 10549: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 10550: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 10551: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 10552: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 10553: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 10554: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 10555: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 10556: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 10712: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 10713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 10714: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 10715: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 10716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 10717: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 10718: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 10719: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 10720: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 10721: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 10722: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 10723: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 10724: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 10725: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 10726: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 10885: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 10886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 10887: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 10888: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 10889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 10890: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 10891: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 10892: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 10893: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 10894: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 10895: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 10896: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 10897: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 10898: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 10899: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 11050: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 11051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 11052: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 11053: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 11054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 11055: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 11056: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 11057: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 11058: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 11059: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 11060: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 11061: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 11062: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 11063: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 11064: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 11132: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 11133: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 11224: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 11225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 11226: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 11227: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 11228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 11229: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 11230: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 11231: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 11232: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 11233: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 11234: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 11235: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 11236: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 11237: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 11238: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 11534: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 11535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 11536: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 11537: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 11538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 11539: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 11540: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 11541: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 11542: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 11543: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 11544: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 11545: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 11546: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 11547: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 11548: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 11746: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 11747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 11748: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 11749: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 11750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 11751: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 11752: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 11753: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 11754: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 11755: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 11756: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 11757: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 11758: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 11759: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 11760: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 12010: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 12011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 12012: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 12013: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 12014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 12015: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 12016: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 12017: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 12018: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 12019: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 12020: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 12021: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 12022: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 12023: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 12024: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 12228: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 12229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 12230: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 12231: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 12232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 12233: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 12234: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 12235: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 12236: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 12237: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 12238: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 12239: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 12240: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 12241: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 12242: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 12654: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 12655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 12656: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 12657: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 12658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 12659: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 12660: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 12661: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 12662: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 12663: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 12664: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 12665: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 12666: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 12667: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 12668: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 12868: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 12869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 12870: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 12871: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 12872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 12873: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 12874: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 12875: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 12876: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 12877: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 12878: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 12879: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 12880: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 12881: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 12882: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 13077: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 13078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 13079: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 13080: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 13081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 13082: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 13083: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 13084: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 13085: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 13086: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 13087: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 13088: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 13089: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 13090: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 13091: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 13504: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 13505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 13506: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 13507: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 13508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 13509: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 13510: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 13511: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 13512: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 13513: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 13514: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 13515: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 13516: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 13517: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 13518: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 13716: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 13717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 13718: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 13719: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 13720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 13721: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 13722: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 13723: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 13724: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 13725: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 13726: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 13727: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 13728: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 13729: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 13730: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 13990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 13991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 13992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 13993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 13994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 13995: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 13996: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 13997: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 13998: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 13999: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 14000: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 14001: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 14002: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 14003: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 14004: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 14080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 14081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 14293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 14294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 14295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 14296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 14297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 14298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 14299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 14300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 14301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 14302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 14303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 14304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 14305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 14306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 14307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 14626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 14627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 14628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 14629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 14630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 14631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 14632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 14633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 14634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 14635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 14636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 14637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 14638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 14639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 14640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 14834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 14835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 14836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 14837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 14838: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 14839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 14840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 14841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 14842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 14843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 14844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 14845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 14846: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 14847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 14848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 15572: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 15573: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 15574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 15575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 15576: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 15577: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 15578: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 15579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 15580: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 15581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 15582: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 15583: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 15584: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 15585: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 15586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 17004: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 17005: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 17006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 17007: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 17008: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 17009: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 17010: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 17011: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 17012: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 17013: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 17014: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 17015: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 17016: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 17017: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 17572: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 17573: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 17574: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 17575: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 17576: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 17577: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 17578: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 17579: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 17580: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 17581: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 17582: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 17583: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 17584: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 18008: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 18009: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 18010: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 18011: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 18012: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 18013: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 18014: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 18015: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 18016: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 18017: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 18018: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 18019: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 18369: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 18370: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 18371: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 18372: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 18373: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 18374: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 18375: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 18376: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 18377: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 18378: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 18379: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 18380: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.35s leader 5, trace 18502: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.35s leader 5, trace 18503: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 194.85s leader 5, trace 18579: estimate 12.45; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 18581: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 18582: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 18583: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 18584: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 18585: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 18586: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 18587: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 18588: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 18589: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 18590: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 18591: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 18592: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 18767: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 18768: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 18769: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 18770: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 18771: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 18772: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 18773: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 18774: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 18775: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 18776: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 18777: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 18978: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 18979: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 18980: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 18981: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 18982: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 18983: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 18984: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 18985: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 18986: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 18987: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 18988: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 19175: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 19176: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 19177: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 19178: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 19179: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 19180: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 19181: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 19182: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 19183: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 19184: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 19185: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 19389: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 19390: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 19391: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 19392: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 19393: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 19394: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 19395: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 19396: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 19397: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 19398: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 19399: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 19561: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 19562: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 19563: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 19564: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 19565: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 19566: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 19567: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 19568: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 19569: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 19570: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 19715: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 19716: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 19717: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 19718: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 19719: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 19720: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 19721: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 19722: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 19723: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 19724: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 19860: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 19861: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 19862: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 19863: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 19864: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 19865: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 19866: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 19867: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 19868: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 19869: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 19985: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 19986: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 19987: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 19988: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 19989: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 19990: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 19991: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 19992: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 19993: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 19994: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 20129: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 20130: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 20131: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 20132: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 20133: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 20134: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 20135: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 20136: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 20137: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 20138: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 20277: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 20278: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 20279: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 20280: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 20281: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 20282: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 20283: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 20284: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 20285: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 20286: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 20406: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 20407: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 20408: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 20409: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 20410: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 20411: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 20412: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 20413: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 20414: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 20415: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 20547: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 20548: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 20549: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 20550: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 20551: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 20552: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 20553: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 20554: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 20555: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 20556: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 20685: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 20686: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 20687: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 20688: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 20689: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 20690: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 20691: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 20692: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 20693: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 20797: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 20798: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 20799: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 20800: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 20801: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 20802: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 20803: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 20804: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 20805: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 20896: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 20897: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 20898: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 20899: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 20900: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 20901: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 20902: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 20903: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 20904: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 21005: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 21006: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 21007: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 21008: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 21009: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 21010: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 21011: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 21012: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 21013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 21121: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 21122: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 21123: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 21124: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 21125: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 21126: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 21127: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 21128: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 21129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 21249: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 21250: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 21251: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 21252: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 21253: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 21254: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 21255: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 21256: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 21257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 21366: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 21367: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 21368: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 21369: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 21370: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 21371: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 21372: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 21373: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 21374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 21485: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 21486: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 21487: estimate 1.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 21488: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 21489: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 21490: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 21491: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 21492: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 21493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 21610: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 21611: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 21612: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 21613: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 21614: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 21615: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 21616: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 21617: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 21618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 21737: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 21738: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 21739: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 21740: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 21741: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 21742: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 21743: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 21744: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 21745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 21853: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 21854: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 21855: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 21856: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 21857: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 21858: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 21859: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 21860: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 21861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 21973: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 21974: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 21975: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 21976: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 21977: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 21978: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 21979: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 21980: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 21981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 22099: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 22100: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 22101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 22102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 22103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 22104: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 22105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 22106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 22107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 22225: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 22226: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 22227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 22228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 22229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 22230: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 22231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 22232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 22233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 22342: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 22343: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 22344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 22345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 22346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 22347: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 22348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 22349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 22350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 22460: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 22461: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 22462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 22463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 22464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 22465: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 22466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 22467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 22468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 22584: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 22585: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 22586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 22587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 22588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 22589: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 22590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 22591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 22592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 22713: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 22714: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 22715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 22716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 22717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 22718: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 22719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 22720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 22721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 22842: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 22843: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 22844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 22845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 22846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 22847: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 22848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 22849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 22850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 22950: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 22951: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 22952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 22953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 22954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 22955: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 22956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 22957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 22958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 23073: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 23074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 23075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 23076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 23077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 23078: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 23079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 23080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 23081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Bren incapacitated
- 1: Ash killed in action
- 1: Soren incapacitated
- 1: Cole killed in action
- 1: Orin killed in action
- 1: Rook killed in action
- 1: Reed killed in action
- 1: Voss incapacitated
- 1: Tern incapacitated
- 1: Holt killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
