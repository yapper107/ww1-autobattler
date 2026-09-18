# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/18/107/good-ember/battle-107-1789674040980042711`

## Battle summary

**Ember** · 360 s · 729 shots.

### Turning points

- 17.9s, squad 4: contact (events line 226). First recorded contact.
- 35.5s, squad 0: withdrawal ([trace 10741](#trace-10741)). 162.1s, squad 0: took cover and returned fire.
- 48.4s, squad 1: help call ([trace 13934](#trace-13934)). No completion observed before termination.
- 50.0s, squad 1: withdrawal ([trace 14444](#trace-14444)). No completion observed before termination.
- 60.9s, squad 0: help call ([trace 15203](#trace-15203)). No completion observed before termination.
- 136.6s, squad 0: help call ([trace 20357](#trace-20357)). No completion observed before termination.
- 166.0s, squad 0: withdrawal ([trace 21648](#trace-21648)). 186.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 288.0s, squad 0: help call ([trace 27623](#trace-27623)). No completion observed before termination.
- 295.5s, squad 0: withdrawal ([trace 28326](#trace-28326)). 315.7s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 34 shots, 5/8 lost.
- **1** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; no completed objective recorded; 4 shots, 4/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 593 shots, 3/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 98 shots, 0/4 lost.

### Decisions and attribution

At 42.5s, squad 1 chose prepared a base of fire ([trace 11414](#trace-11414)), followed by 0 shots and 2 own casualties; estimate 12.0 against 0 distinct squad-reported contacts; At 42.5s, squad 1 chose advanced tactically ([trace 13373](#trace-13373)), followed by 0 shots and 2 own casualties; estimate 12.0 against 0 distinct squad-reported contacts; At 27.0s, squad 1 chose took cover and returned fire ([trace 7341](#trace-7341)), followed by 0 shots and 1 own casualties; estimate 3.4 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1617](#trace-1617)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46218223414736515, 'next_transition': 1649}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1619](#trace-1619)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09011320051052447, 'next_transition': 1726}.

### Communication

340 matched deliveries (mean 0.44s, max 5.50s); 262 explicit drops; 4 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.90s, squad 4, contact, evidence events line 226: First recorded contact; .
- 35.45s, squad 0, withdrawal, evidence 10741: BreakContact: believed ratio at least two without superiority; 162.1s, squad 0: took cover and returned fire.
- 48.40s, squad 1, help call, evidence 13934: NeedSupport; No completion observed before termination.
- 49.95s, squad 1, withdrawal, evidence 14444: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 60.85s, squad 0, help call, evidence 15203: NeedSupport; No completion observed before termination.
- 136.55s, squad 0, help call, evidence 20357: NeedSupport; No completion observed before termination.
- 166.00s, squad 0, withdrawal, evidence 21648: BreakContact: believed ratio at least two without superiority; 186.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 288.00s, squad 0, help call, evidence 27623: NeedSupport; No completion observed before termination.
- 295.45s, squad 0, withdrawal, evidence 28326: BreakContact: believed ratio at least two without superiority; 315.7s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.431434012347726, 'next_transition': 983}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.431434012347726, 'next_transition': 983}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.431434012347726, 'next_transition': 983}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.266075418966672, 'next_transition': 162}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.266075418966672, 'next_transition': 162}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.266075418966672, 'next_transition': 162}.
<a id="trace-701"></a>
<a id="trace-703"></a>
<a id="trace-729"></a>
<a id="trace-731"></a>
<a id="trace-766"></a>
<a id="trace-768"></a>
<a id="trace-793"></a>
<a id="trace-795"></a>
<a id="trace-817"></a>
<a id="trace-819"></a>
<a id="trace-842"></a>
<a id="trace-844"></a>
<a id="trace-873"></a>
<a id="trace-875"></a>
<a id="trace-987"></a>
<a id="trace-989"></a>
<a id="trace-1018"></a>
<a id="trace-1020"></a>
<a id="trace-1060"></a>
<a id="trace-1062"></a>
<a id="trace-1085"></a>
<a id="trace-1087"></a>
<a id="trace-1115"></a>
<a id="trace-1117"></a>
<a id="trace-1149"></a>
<a id="trace-1151"></a>
<a id="trace-1180"></a>
<a id="trace-1182"></a>
<a id="trace-1200"></a>
<a id="trace-1202"></a>
<a id="trace-1220"></a>
<a id="trace-1222"></a>
<a id="trace-1311"></a>
<a id="trace-1313"></a>
<a id="trace-1333"></a>
<a id="trace-1335"></a>
<a id="trace-1537"></a>
<a id="trace-1539"></a>
<a id="trace-1574"></a>
<a id="trace-1576"></a>
<a id="trace-1613"></a>
<a id="trace-1615"></a>
<a id="trace-1653"></a>
<a id="trace-1655"></a>
<a id="trace-1688"></a>
<a id="trace-1690"></a>
<a id="trace-1720"></a>
<a id="trace-1722"></a>
<a id="trace-2059"></a>
<a id="trace-2061"></a>
<a id="trace-2087"></a>
<a id="trace-2089"></a>
<a id="trace-2178"></a>
<a id="trace-2180"></a>
<a id="trace-2200"></a>
<a id="trace-2202"></a>
<a id="trace-2232"></a>
<a id="trace-2234"></a>
<a id="trace-2261"></a>
<a id="trace-2263"></a>
<a id="trace-2282"></a>
<a id="trace-2284"></a>
<a id="trace-2675"></a>
<a id="trace-2677"></a>
<a id="trace-2711"></a>
<a id="trace-2713"></a>
<a id="trace-3689"></a>
<a id="trace-3691"></a>
<a id="trace-3752"></a>
<a id="trace-3754"></a>
<a id="trace-3805"></a>
<a id="trace-3807"></a>
<a id="trace-3938"></a>
<a id="trace-3940"></a>
<a id="trace-3962"></a>
<a id="trace-3964"></a>
<a id="trace-4031"></a>
<a id="trace-4033"></a>
<a id="trace-4057"></a>
<a id="trace-4059"></a>
<a id="trace-4116"></a>
<a id="trace-4118"></a>
<a id="trace-4139"></a>
<a id="trace-4141"></a>
<a id="trace-4168"></a>
<a id="trace-4170"></a>
<a id="trace-4186"></a>
<a id="trace-4188"></a>
<a id="trace-4215"></a>
<a id="trace-4217"></a>
<a id="trace-4243"></a>
<a id="trace-4245"></a>
<a id="trace-7252"></a>
<a id="trace-7254"></a>
<a id="trace-7270"></a>
<a id="trace-7272"></a>
<a id="trace-7314"></a>
<a id="trace-7316"></a>
<a id="trace-7328"></a>
<a id="trace-7330"></a>
<a id="trace-7795"></a>
<a id="trace-7797"></a>
<a id="trace-7814"></a>
<a id="trace-7816"></a>
<a id="trace-7844"></a>
<a id="trace-7846"></a>
<a id="trace-7865"></a>
<a id="trace-7867"></a>
<a id="trace-9726"></a>
<a id="trace-9728"></a>
<a id="trace-9753"></a>
<a id="trace-9755"></a>
<a id="trace-9853"></a>
<a id="trace-9855"></a>
<a id="trace-9875"></a>
<a id="trace-9877"></a>
<a id="trace-10243"></a>
<a id="trace-10245"></a>
<a id="trace-10446"></a>
<a id="trace-10448"></a>
<a id="trace-10478"></a>
<a id="trace-10480"></a>
<a id="trace-10508"></a>
<a id="trace-10510"></a>
<a id="trace-10553"></a>
<a id="trace-10555"></a>
<a id="trace-10579"></a>
<a id="trace-10581"></a>
<a id="trace-10603"></a>
<a id="trace-10605"></a>
<a id="trace-10632"></a>
<a id="trace-10634"></a>
<a id="trace-10727"></a>
<a id="trace-10729"></a>
<a id="trace-10992"></a>
<a id="trace-10994"></a>
<a id="trace-11023"></a>
<a id="trace-11025"></a>
<a id="trace-11060"></a>
<a id="trace-11062"></a>
<a id="trace-11093"></a>
<a id="trace-11095"></a>
<a id="trace-11113"></a>
<a id="trace-11115"></a>
<a id="trace-11154"></a>
<a id="trace-11156"></a>
<a id="trace-11179"></a>
<a id="trace-11181"></a>
<a id="trace-11197"></a>
<a id="trace-11199"></a>
<a id="trace-11226"></a>
<a id="trace-11228"></a>
<a id="trace-11315"></a>
<a id="trace-11317"></a>
<a id="trace-11337"></a>
<a id="trace-11339"></a>
<a id="trace-11362"></a>
<a id="trace-11364"></a>
<a id="trace-11381"></a>
<a id="trace-11383"></a>
<a id="trace-11402"></a>
<a id="trace-11404"></a>
<a id="trace-13587"></a>
<a id="trace-13589"></a>
<a id="trace-13610"></a>
<a id="trace-13612"></a>
<a id="trace-13629"></a>
<a id="trace-13631"></a>
<a id="trace-13650"></a>
<a id="trace-13652"></a>
<a id="trace-13683"></a>
<a id="trace-13685"></a>
<a id="trace-13778"></a>
<a id="trace-13780"></a>
<a id="trace-13808"></a>
<a id="trace-13810"></a>
<a id="trace-13833"></a>
<a id="trace-13835"></a>
<a id="trace-13864"></a>
<a id="trace-13866"></a>
<a id="trace-13881"></a>
<a id="trace-13883"></a>
<a id="trace-13892"></a>
<a id="trace-13894"></a>
<a id="trace-13921"></a>
<a id="trace-13923"></a>
<a id="trace-14224"></a>
<a id="trace-14226"></a>
<a id="trace-14409"></a>
<a id="trace-14411"></a>
<a id="trace-14429"></a>
<a id="trace-14431"></a>
<a id="trace-14651"></a>
<a id="trace-14653"></a>
<a id="trace-14703"></a>
<a id="trace-14705"></a>
<a id="trace-14725"></a>
<a id="trace-14727"></a>
<a id="trace-14742"></a>
<a id="trace-14744"></a>
<a id="trace-14777"></a>
<a id="trace-14779"></a>
<a id="trace-14798"></a>
<a id="trace-14800"></a>
<a id="trace-14815"></a>
<a id="trace-14817"></a>
<a id="trace-14831"></a>
<a id="trace-14833"></a>
<a id="trace-14850"></a>
<a id="trace-14852"></a>
<a id="trace-14867"></a>
<a id="trace-14869"></a>
<a id="trace-14941"></a>
<a id="trace-14943"></a>
<a id="trace-14960"></a>
<a id="trace-14962"></a>
<a id="trace-14983"></a>
<a id="trace-14985"></a>
<a id="trace-15000"></a>
<a id="trace-15002"></a>
<a id="trace-15020"></a>
<a id="trace-15022"></a>
<a id="trace-15033"></a>
<a id="trace-15035"></a>
<a id="trace-15051"></a>
<a id="trace-15053"></a>
<a id="trace-15066"></a>
<a id="trace-15068"></a>
<a id="trace-15083"></a>
<a id="trace-15085"></a>
<a id="trace-15096"></a>
<a id="trace-15098"></a>
<a id="trace-15175"></a>
<a id="trace-15177"></a>
<a id="trace-15197"></a>
<a id="trace-15199"></a>
<a id="trace-15221"></a>
<a id="trace-15223"></a>
<a id="trace-15234"></a>
<a id="trace-15236"></a>
<a id="trace-15249"></a>
<a id="trace-15251"></a>
<a id="trace-15262"></a>
<a id="trace-15264"></a>
<a id="trace-15457"></a>
<a id="trace-15459"></a>
<a id="trace-15472"></a>
<a id="trace-15474"></a>
<a id="trace-15511"></a>
<a id="trace-15513"></a>
<a id="trace-15524"></a>
<a id="trace-15526"></a>
<a id="trace-15600"></a>
<a id="trace-15602"></a>
<a id="trace-15619"></a>
<a id="trace-15621"></a>
<a id="trace-15648"></a>
<a id="trace-15650"></a>
<a id="trace-15666"></a>
<a id="trace-15668"></a>
<a id="trace-15686"></a>
<a id="trace-15688"></a>
<a id="trace-15697"></a>
<a id="trace-15699"></a>
<a id="trace-15717"></a>
<a id="trace-15719"></a>
<a id="trace-15732"></a>
<a id="trace-15734"></a>
<a id="trace-15757"></a>
<a id="trace-15759"></a>
<a id="trace-15772"></a>
<a id="trace-15774"></a>
<a id="trace-15844"></a>
<a id="trace-15846"></a>
<a id="trace-15863"></a>
<a id="trace-15865"></a>
<a id="trace-15878"></a>
<a id="trace-15880"></a>
<a id="trace-15889"></a>
<a id="trace-15891"></a>
<a id="trace-15905"></a>
<a id="trace-15907"></a>
<a id="trace-15914"></a>
<a id="trace-15916"></a>
<a id="trace-15928"></a>
<a id="trace-15930"></a>
<a id="trace-15940"></a>
<a id="trace-15942"></a>
<a id="trace-15960"></a>
<a id="trace-15962"></a>
<a id="trace-16103"></a>
<a id="trace-16105"></a>
<a id="trace-16184"></a>
<a id="trace-16186"></a>
<a id="trace-16220"></a>
<a id="trace-16222"></a>
<a id="trace-16257"></a>
<a id="trace-16259"></a>
<a id="trace-16271"></a>
<a id="trace-16273"></a>
<a id="trace-16298"></a>
<a id="trace-16300"></a>
<a id="trace-16326"></a>
<a id="trace-16328"></a>
<a id="trace-16339"></a>
<a id="trace-16341"></a>
<a id="trace-16355"></a>
<a id="trace-16357"></a>
<a id="trace-16369"></a>
<a id="trace-16371"></a>
<a id="trace-16381"></a>
<a id="trace-16383"></a>
<a id="trace-16456"></a>
<a id="trace-16458"></a>
<a id="trace-16473"></a>
<a id="trace-16475"></a>
<a id="trace-16493"></a>
<a id="trace-16495"></a>
<a id="trace-16506"></a>
<a id="trace-16508"></a>
<a id="trace-16524"></a>
<a id="trace-16526"></a>
<a id="trace-16538"></a>
<a id="trace-16540"></a>
<a id="trace-16549"></a>
<a id="trace-16551"></a>
<a id="trace-16556"></a>
<a id="trace-16558"></a>
<a id="trace-16572"></a>
<a id="trace-16574"></a>
<a id="trace-16585"></a>
<a id="trace-16587"></a>
<a id="trace-16662"></a>
<a id="trace-16664"></a>
<a id="trace-16893"></a>
<a id="trace-16895"></a>
<a id="trace-16908"></a>
<a id="trace-16910"></a>
<a id="trace-16929"></a>
<a id="trace-16931"></a>
<a id="trace-16962"></a>
<a id="trace-16964"></a>
<a id="trace-16973"></a>
<a id="trace-16975"></a>
<a id="trace-16993"></a>
<a id="trace-16995"></a>
<a id="trace-17019"></a>
<a id="trace-17021"></a>
<a id="trace-17038"></a>
<a id="trace-17040"></a>
<a id="trace-17057"></a>
<a id="trace-17059"></a>
<a id="trace-17132"></a>
<a id="trace-17134"></a>
<a id="trace-17154"></a>
<a id="trace-17156"></a>
<a id="trace-17170"></a>
<a id="trace-17172"></a>
<a id="trace-17185"></a>
<a id="trace-17187"></a>
<a id="trace-17208"></a>
<a id="trace-17210"></a>
<a id="trace-17237"></a>
<a id="trace-17239"></a>
<a id="trace-17274"></a>
<a id="trace-17276"></a>
<a id="trace-17292"></a>
<a id="trace-17294"></a>
<a id="trace-17319"></a>
<a id="trace-17321"></a>
<a id="trace-17346"></a>
<a id="trace-17348"></a>
<a id="trace-17424"></a>
<a id="trace-17426"></a>
<a id="trace-17585"></a>
<a id="trace-17587"></a>
<a id="trace-17610"></a>
<a id="trace-17612"></a>
<a id="trace-17636"></a>
<a id="trace-17638"></a>
<a id="trace-17657"></a>
<a id="trace-17659"></a>
<a id="trace-17684"></a>
<a id="trace-17686"></a>
<a id="trace-17708"></a>
<a id="trace-17710"></a>
<a id="trace-17728"></a>
<a id="trace-17730"></a>
<a id="trace-17752"></a>
<a id="trace-17754"></a>
<a id="trace-17767"></a>
<a id="trace-17769"></a>
<a id="trace-17838"></a>
<a id="trace-17840"></a>
<a id="trace-17851"></a>
<a id="trace-17853"></a>
<a id="trace-17866"></a>
<a id="trace-17868"></a>
<a id="trace-17877"></a>
<a id="trace-17879"></a>
<a id="trace-17894"></a>
<a id="trace-17896"></a>
<a id="trace-17903"></a>
<a id="trace-17905"></a>
<a id="trace-17917"></a>
<a id="trace-17919"></a>
<a id="trace-18139"></a>
<a id="trace-18141"></a>
<a id="trace-18162"></a>
<a id="trace-18164"></a>
<a id="trace-18189"></a>
<a id="trace-18191"></a>
<a id="trace-18268"></a>
<a id="trace-18270"></a>
<a id="trace-18282"></a>
<a id="trace-18284"></a>
<a id="trace-18309"></a>
<a id="trace-18311"></a>
<a id="trace-18327"></a>
<a id="trace-18329"></a>
<a id="trace-18344"></a>
<a id="trace-18346"></a>
<a id="trace-18357"></a>
<a id="trace-18359"></a>
<a id="trace-18377"></a>
<a id="trace-18379"></a>
<a id="trace-18388"></a>
<a id="trace-18390"></a>
<a id="trace-18407"></a>
<a id="trace-18409"></a>
<a id="trace-18419"></a>
<a id="trace-18421"></a>
<a id="trace-18494"></a>
<a id="trace-18496"></a>
<a id="trace-18509"></a>
<a id="trace-18511"></a>
<a id="trace-18521"></a>
<a id="trace-18523"></a>
<a id="trace-18532"></a>
<a id="trace-18534"></a>
<a id="trace-18550"></a>
<a id="trace-18552"></a>
<a id="trace-18561"></a>
<a id="trace-18563"></a>
<a id="trace-18695"></a>
<a id="trace-18697"></a>
<a id="trace-18712"></a>
<a id="trace-18714"></a>
<a id="trace-18744"></a>
<a id="trace-18746"></a>
<a id="trace-18763"></a>
<a id="trace-18765"></a>
<a id="trace-18837"></a>
<a id="trace-18839"></a>
<a id="trace-18871"></a>
<a id="trace-18873"></a>
<a id="trace-18893"></a>
<a id="trace-18895"></a>
<a id="trace-18906"></a>
<a id="trace-18908"></a>
<a id="trace-18929"></a>
<a id="trace-18931"></a>
<a id="trace-19225"></a>
<a id="trace-19227"></a>
<a id="trace-19269"></a>
<a id="trace-19271"></a>
<a id="trace-19299"></a>
<a id="trace-19301"></a>
<a id="trace-19331"></a>
<a id="trace-19333"></a>
<a id="trace-19363"></a>
<a id="trace-19365"></a>
<a id="trace-19449"></a>
<a id="trace-19451"></a>
<a id="trace-19506"></a>
<a id="trace-19508"></a>
<a id="trace-19578"></a>
<a id="trace-19580"></a>
<a id="trace-19648"></a>
<a id="trace-19650"></a>
<a id="trace-19694"></a>
<a id="trace-19696"></a>
<a id="trace-19894"></a>
<a id="trace-19896"></a>
<a id="trace-19945"></a>
<a id="trace-19947"></a>
<a id="trace-19982"></a>
<a id="trace-19984"></a>
<a id="trace-20023"></a>
<a id="trace-20025"></a>
<a id="trace-20042"></a>
<a id="trace-20044"></a>
<a id="trace-20116"></a>
<a id="trace-20118"></a>
<a id="trace-20137"></a>
<a id="trace-20382"></a>
<a id="trace-20384"></a>
<a id="trace-20421"></a>
<a id="trace-20423"></a>
<a id="trace-20444"></a>
<a id="trace-20446"></a>
<a id="trace-20524"></a>
<a id="trace-20526"></a>
<a id="trace-20569"></a>
<a id="trace-20571"></a>
<a id="trace-20628"></a>
<a id="trace-20630"></a>
<a id="trace-20686"></a>
<a id="trace-20688"></a>
<a id="trace-20723"></a>
<a id="trace-20725"></a>
<a id="trace-20798"></a>
<a id="trace-20826"></a>
<a id="trace-20828"></a>
<a id="trace-20844"></a>
<a id="trace-20846"></a>
<a id="trace-20873"></a>
<a id="trace-20875"></a>
<a id="trace-20889"></a>
<a id="trace-20891"></a>
<a id="trace-20960"></a>
<a id="trace-20962"></a>
<a id="trace-20979"></a>
<a id="trace-20981"></a>
<a id="trace-20996"></a>
<a id="trace-20998"></a>
<a id="trace-21019"></a>
<a id="trace-21021"></a>
<a id="trace-21035"></a>
<a id="trace-21037"></a>
<a id="trace-21104"></a>
<a id="trace-21106"></a>
<a id="trace-21122"></a>
<a id="trace-21124"></a>
<a id="trace-21145"></a>
<a id="trace-21147"></a>
<a id="trace-21211"></a>
<a id="trace-21213"></a>
<a id="trace-21276"></a>
<a id="trace-21278"></a>
<a id="trace-21395"></a>
<a id="trace-21397"></a>
<a id="trace-21435"></a>
<a id="trace-21437"></a>
<a id="trace-21479"></a>
<a id="trace-21481"></a>
<a id="trace-21518"></a>
<a id="trace-21520"></a>
<a id="trace-21545"></a>
<a id="trace-21547"></a>
<a id="trace-21634"></a>
<a id="trace-21636"></a>
<a id="trace-21708"></a>
<a id="trace-21710"></a>
<a id="trace-21748"></a>
<a id="trace-21750"></a>
<a id="trace-21770"></a>
<a id="trace-21772"></a>
<a id="trace-21809"></a>
<a id="trace-21811"></a>
<a id="trace-21882"></a>
<a id="trace-21884"></a>
<a id="trace-21912"></a>
<a id="trace-21914"></a>
<a id="trace-21938"></a>
<a id="trace-21940"></a>
<a id="trace-21960"></a>
<a id="trace-21962"></a>
<a id="trace-21977"></a>
<a id="trace-21979"></a>
<a id="trace-22050"></a>
<a id="trace-22052"></a>
<a id="trace-22070"></a>
<a id="trace-22072"></a>
<a id="trace-22096"></a>
<a id="trace-22098"></a>
<a id="trace-22119"></a>
<a id="trace-22121"></a>
<a id="trace-22138"></a>
<a id="trace-22140"></a>
<a id="trace-22211"></a>
<a id="trace-22213"></a>
<a id="trace-22236"></a>
<a id="trace-22238"></a>
<a id="trace-22410"></a>
<a id="trace-22412"></a>
<a id="trace-22449"></a>
<a id="trace-22451"></a>
<a id="trace-22489"></a>
<a id="trace-22491"></a>
<a id="trace-22572"></a>
<a id="trace-22574"></a>
<a id="trace-22595"></a>
<a id="trace-22597"></a>
<a id="trace-22626"></a>
<a id="trace-22628"></a>
<a id="trace-22661"></a>
<a id="trace-22663"></a>
<a id="trace-22701"></a>
<a id="trace-22703"></a>
<a id="trace-22790"></a>
<a id="trace-22792"></a>
<a id="trace-22819"></a>
<a id="trace-22821"></a>
<a id="trace-22840"></a>
<a id="trace-22842"></a>
<a id="trace-22862"></a>
<a id="trace-22864"></a>
<a id="trace-22873"></a>
<a id="trace-22875"></a>
<a id="trace-22950"></a>
<a id="trace-22952"></a>
<a id="trace-22970"></a>
<a id="trace-22972"></a>
<a id="trace-22996"></a>
<a id="trace-22998"></a>
<a id="trace-23009"></a>
<a id="trace-23011"></a>
<a id="trace-23019"></a>
<a id="trace-23021"></a>
<a id="trace-23088"></a>
<a id="trace-23090"></a>
<a id="trace-23101"></a>
<a id="trace-23103"></a>
<a id="trace-23119"></a>
<a id="trace-23121"></a>
<a id="trace-23137"></a>
<a id="trace-23139"></a>
<a id="trace-23160"></a>
<a id="trace-23162"></a>
<a id="trace-23230"></a>
<a id="trace-23243"></a>
<a id="trace-23245"></a>
<a id="trace-23257"></a>
<a id="trace-23259"></a>
<a id="trace-23269"></a>
<a id="trace-23271"></a>
<a id="trace-23285"></a>
<a id="trace-23287"></a>
<a id="trace-23369"></a>
<a id="trace-23371"></a>
<a id="trace-23383"></a>
<a id="trace-23385"></a>
<a id="trace-23413"></a>
<a id="trace-23415"></a>
<a id="trace-23607"></a>
<a id="trace-23609"></a>
<a id="trace-23635"></a>
<a id="trace-23637"></a>
<a id="trace-23722"></a>
<a id="trace-23724"></a>
<a id="trace-23758"></a>
<a id="trace-23760"></a>
<a id="trace-23794"></a>
<a id="trace-23796"></a>
<a id="trace-23811"></a>
<a id="trace-23813"></a>
<a id="trace-23837"></a>
<a id="trace-23839"></a>
<a id="trace-23917"></a>
<a id="trace-23919"></a>
<a id="trace-23942"></a>
<a id="trace-23944"></a>
<a id="trace-23967"></a>
<a id="trace-23969"></a>
<a id="trace-24005"></a>
<a id="trace-24007"></a>
<a id="trace-24029"></a>
<a id="trace-24031"></a>
<a id="trace-24105"></a>
<a id="trace-24107"></a>
<a id="trace-24285"></a>
<a id="trace-24287"></a>
<a id="trace-24319"></a>
<a id="trace-24321"></a>
<a id="trace-24351"></a>
<a id="trace-24353"></a>
<a id="trace-24383"></a>
<a id="trace-24385"></a>
<a id="trace-24464"></a>
<a id="trace-24466"></a>
<a id="trace-24491"></a>
<a id="trace-24493"></a>
<a id="trace-24572"></a>
<a id="trace-24574"></a>
<a id="trace-24601"></a>
<a id="trace-24603"></a>
<a id="trace-24618"></a>
<a id="trace-24620"></a>
<a id="trace-24695"></a>
<a id="trace-24697"></a>
<a id="trace-24721"></a>
<a id="trace-24723"></a>
<a id="trace-24759"></a>
<a id="trace-24761"></a>
<a id="trace-24775"></a>
<a id="trace-24777"></a>
<a id="trace-24793"></a>
<a id="trace-24795"></a>
<a id="trace-24864"></a>
<a id="trace-24866"></a>
<a id="trace-24885"></a>
<a id="trace-24887"></a>
<a id="trace-24909"></a>
<a id="trace-24911"></a>
<a id="trace-24946"></a>
<a id="trace-24948"></a>
<a id="trace-24967"></a>
<a id="trace-24969"></a>
<a id="trace-25044"></a>
<a id="trace-25046"></a>
<a id="trace-25220"></a>
<a id="trace-25222"></a>
<a id="trace-25245"></a>
<a id="trace-25247"></a>
<a id="trace-25281"></a>
<a id="trace-25283"></a>
<a id="trace-25319"></a>
<a id="trace-25321"></a>
<a id="trace-25402"></a>
<a id="trace-25404"></a>
<a id="trace-25427"></a>
<a id="trace-25429"></a>
<a id="trace-25448"></a>
<a id="trace-25450"></a>
<a id="trace-25474"></a>
<a id="trace-25476"></a>
<a id="trace-25647"></a>
<a id="trace-25649"></a>
<a id="trace-25743"></a>
<a id="trace-25745"></a>
<a id="trace-25787"></a>
<a id="trace-25789"></a>
<a id="trace-25822"></a>
<a id="trace-25824"></a>
<a id="trace-25837"></a>
<a id="trace-25839"></a>
<a id="trace-25883"></a>
<a id="trace-25885"></a>
<a id="trace-25963"></a>
<a id="trace-25965"></a>
<a id="trace-26003"></a>
<a id="trace-26005"></a>
<a id="trace-26024"></a>
<a id="trace-26026"></a>
<a id="trace-26054"></a>
<a id="trace-26056"></a>
<a id="trace-26074"></a>
<a id="trace-26076"></a>
<a id="trace-26150"></a>
<a id="trace-26152"></a>
<a id="trace-26168"></a>
<a id="trace-26170"></a>
<a id="trace-26189"></a>
<a id="trace-26191"></a>
<a id="trace-26372"></a>
<a id="trace-26374"></a>
<a id="trace-26408"></a>
<a id="trace-26410"></a>
<a id="trace-26499"></a>
<a id="trace-26501"></a>
<a id="trace-26527"></a>
<a id="trace-26529"></a>
<a id="trace-26548"></a>
<a id="trace-26550"></a>
<a id="trace-26571"></a>
<a id="trace-26573"></a>
<a id="trace-26592"></a>
<a id="trace-26594"></a>
<a id="trace-26676"></a>
<a id="trace-26678"></a>
<a id="trace-26720"></a>
<a id="trace-26722"></a>
<a id="trace-26751"></a>
<a id="trace-26753"></a>
<a id="trace-26772"></a>
<a id="trace-26774"></a>
<a id="trace-26796"></a>
<a id="trace-26798"></a>
<a id="trace-26870"></a>
<a id="trace-26872"></a>
<a id="trace-26903"></a>
<a id="trace-26905"></a>
<a id="trace-26928"></a>
<a id="trace-26930"></a>
<a id="trace-26960"></a>
<a id="trace-26962"></a>
<a id="trace-26982"></a>
<a id="trace-26984"></a>
<a id="trace-27288"></a>
<a id="trace-27290"></a>
<a id="trace-27562"></a>
<a id="trace-27564"></a>
<a id="trace-27599"></a>
<a id="trace-27601"></a>
<a id="trace-27781"></a>
<a id="trace-27783"></a>
<a id="trace-27813"></a>
<a id="trace-27815"></a>
<a id="trace-27886"></a>
<a id="trace-27888"></a>
<a id="trace-28087"></a>
<a id="trace-28089"></a>
<a id="trace-28168"></a>
<a id="trace-28170"></a>
<a id="trace-28214"></a>
<a id="trace-28216"></a>
<a id="trace-28249"></a>
<a id="trace-28251"></a>
<a id="trace-28320"></a>
<a id="trace-28322"></a>
<a id="trace-28535"></a>
<a id="trace-28537"></a>
<a id="trace-28568"></a>
<a id="trace-28570"></a>
<a id="trace-28595"></a>
<a id="trace-28597"></a>
<a id="trace-28619"></a>
<a id="trace-28621"></a>
<a id="trace-28691"></a>
<a id="trace-28693"></a>
<a id="trace-28721"></a>
<a id="trace-28723"></a>
<a id="trace-28754"></a>
<a id="trace-28756"></a>
<a id="trace-28776"></a>
<a id="trace-28778"></a>
<a id="trace-28800"></a>
<a id="trace-28802"></a>
<a id="trace-28873"></a>
<a id="trace-28875"></a>
<a id="trace-28896"></a>
<a id="trace-28898"></a>
<a id="trace-28923"></a>
<a id="trace-28925"></a>
<a id="trace-28945"></a>
<a id="trace-28947"></a>
<a id="trace-28969"></a>
<a id="trace-28971"></a>
<a id="trace-29038"></a>
<a id="trace-29040"></a>
<a id="trace-29071"></a>
<a id="trace-29073"></a>
<a id="trace-29099"></a>
<a id="trace-29101"></a>
<a id="trace-29122"></a>
<a id="trace-29124"></a>
<a id="trace-29140"></a>
<a id="trace-29142"></a>
<a id="trace-29211"></a>
<a id="trace-29213"></a>
<a id="trace-29245"></a>
<a id="trace-29247"></a>
<a id="trace-29277"></a>
<a id="trace-29279"></a>
<a id="trace-29289"></a>
<a id="trace-29291"></a>
<a id="trace-29311"></a>
<a id="trace-29313"></a>
<a id="trace-29372"></a>
<a id="trace-29374"></a>
<a id="trace-29390"></a>
<a id="trace-29392"></a>
<a id="trace-29413"></a>
<a id="trace-29415"></a>
<a id="trace-29426"></a>
<a id="trace-29428"></a>
<a id="trace-29449"></a>
<a id="trace-29451"></a>
<a id="trace-29521"></a>
<a id="trace-29523"></a>
<a id="trace-29534"></a>
<a id="trace-29536"></a>
<a id="trace-29551"></a>
<a id="trace-29553"></a>
<a id="trace-29560"></a>
<a id="trace-29562"></a>
<a id="trace-29572"></a>
<a id="trace-29574"></a>
<a id="trace-29640"></a>
<a id="trace-29642"></a>
<a id="trace-29670"></a>
<a id="trace-29672"></a>
<a id="trace-29686"></a>
<a id="trace-29688"></a>
<a id="trace-29696"></a>
<a id="trace-29698"></a>
<a id="trace-29707"></a>
<a id="trace-29709"></a>
<a id="trace-29769"></a>
<a id="trace-29771"></a>
<a id="trace-29789"></a>
<a id="trace-29791"></a>
<a id="trace-29813"></a>
<a id="trace-29815"></a>
<a id="trace-29832"></a>
<a id="trace-29834"></a>
<a id="trace-29843"></a>
<a id="trace-29845"></a>
<a id="trace-29905"></a>
<a id="trace-29907"></a>
<a id="trace-29922"></a>
<a id="trace-29924"></a>
<a id="trace-29940"></a>
<a id="trace-29942"></a>
<a id="trace-29958"></a>
<a id="trace-29960"></a>
<a id="trace-29973"></a>
<a id="trace-29975"></a>
<a id="trace-30045"></a>
<a id="trace-30047"></a>
<a id="trace-30060"></a>
<a id="trace-30062"></a>
<a id="trace-30076"></a>
<a id="trace-30078"></a>
<a id="trace-30087"></a>
<a id="trace-30089"></a>
<a id="trace-30097"></a>
<a id="trace-30099"></a>
<a id="trace-30165"></a>
<a id="trace-30167"></a>
<a id="trace-30195"></a>
<a id="trace-30197"></a>
<a id="trace-30212"></a>
<a id="trace-30214"></a>
<a id="trace-30222"></a>
<a id="trace-30224"></a>
<a id="trace-30232"></a>
<a id="trace-30234"></a>
<a id="trace-30294"></a>
<a id="trace-30296"></a>
<a id="trace-30318"></a>
<a id="trace-30320"></a>
<a id="trace-30344"></a>
<a id="trace-30346"></a>
<a id="trace-30365"></a>
<a id="trace-30367"></a>
<a id="trace-30378"></a>
<a id="trace-30380"></a>
- 1.60s–359.30s (×939), actor 37, squad 4 (trace 701): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39486361591713726, 'next_transition': 729}.
<a id="trace-983"></a>
<a id="trace-985"></a>
<a id="trace-1081"></a>
<a id="trace-1083"></a>
<a id="trace-1111"></a>
<a id="trace-1113"></a>
<a id="trace-1145"></a>
<a id="trace-1147"></a>
<a id="trace-1176"></a>
<a id="trace-1178"></a>
<a id="trace-1216"></a>
<a id="trace-1218"></a>
<a id="trace-1307"></a>
<a id="trace-1309"></a>
<a id="trace-1329"></a>
<a id="trace-1331"></a>
- 5.70s–10.70s (×16), actor 5, squad 0 (trace 983): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 888. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.6451223294571475, 'next_transition': 1081}.
<a id="trace-1342"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1342): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1228. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37875645463310514, 'next_transition': 1533}.
<a id="trace-1343"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1343): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1228. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37875645463310514, 'next_transition': 1533}.
<a id="trace-1533"></a>
<a id="trace-1535"></a>
<a id="trace-1570"></a>
<a id="trace-1572"></a>
<a id="trace-1609"></a>
<a id="trace-1611"></a>
- 11.20s–12.20s (×6), actor 5, squad 0 (trace 1533): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1233. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5606254249610254, 'next_transition': 1570}.
<a id="trace-161"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 161): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46218223414736515, 'next_transition': 1649}.
<a id="trace-162"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 162): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09011320051052447, 'next_transition': 1726}.
<a id="trace-1617"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1617): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1617. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46218223414736515, 'next_transition': 1649}.
<a id="trace-1618"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1618): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1618. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46218223414736515, 'next_transition': 1649}.
<a id="trace-1619"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1619): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1619. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09011320051052447, 'next_transition': 1726}.
<a id="trace-1620"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1620): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1620. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09011320051052447, 'next_transition': 1726}.
<a id="trace-1649"></a>
<a id="trace-1651"></a>
<a id="trace-1684"></a>
<a id="trace-1686"></a>
<a id="trace-1716"></a>
<a id="trace-1718"></a>
<a id="trace-2174"></a>
<a id="trace-2176"></a>
<a id="trace-2228"></a>
<a id="trace-2230"></a>
<a id="trace-2671"></a>
<a id="trace-2673"></a>
- 12.70s–17.75s (×12), actor 5, squad 0 (trace 1649): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1620. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3725206482124384, 'next_transition': 1684}.
<a id="trace-1726"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1726): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1236. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.703582824461559, 'next_transition': 2300}.
<a id="trace-1727"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1727): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1236. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.703582824461559, 'next_transition': 2300}.
<a id="trace-2300"></a>
- 17.60s–17.60s (×1), actor 8, squad 1 (trace 2300): received platoon directive. Knowledge: actor memory at 15.00s, trace 2104. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.097600682159902, 'next_transition': 3295}.
<a id="trace-2714"></a>
- 18.25s–18.25s (×1), actor 0, squad 0 (trace 2714): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2096. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874897812829067, 'next_transition': 3010}.
<a id="trace-2715"></a>
- 18.25s–18.25s (×1), actor 0, squad 0 (trace 2715): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2096. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874897812829067, 'next_transition': 3010}.
<a id="trace-2716"></a>
<a id="trace-3010"></a>
- 18.25s–18.50s (×2), actor 0, squad 0 (trace 2716): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2096. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874897812829067, 'next_transition': 3010}.
<a id="trace-3295"></a>
- 18.60s–18.60s (×1), actor 8, squad 1 (trace 3295): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2104. Next observer evidence: {'until': 22.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.4850695439189865, 'next_transition': 4123}.
<a id="trace-3296"></a>
- 18.60s–18.60s (×1), actor 8, squad 1 (trace 3296): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2104. Next observer evidence: {'until': 22.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.4850695439189865, 'next_transition': 4123}.
<a id="trace-3297"></a>
- 18.60s–18.60s (×1), actor 8, squad 1 (trace 3297): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2104. Next observer evidence: {'until': 22.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.4850695439189865, 'next_transition': 4123}.
<a id="trace-3685"></a>
<a id="trace-3687"></a>
<a id="trace-3748"></a>
<a id="trace-3750"></a>
<a id="trace-3801"></a>
<a id="trace-3803"></a>
<a id="trace-3934"></a>
<a id="trace-3936"></a>
<a id="trace-3958"></a>
<a id="trace-3960"></a>
<a id="trace-4053"></a>
<a id="trace-4055"></a>
- 18.75s–21.75s (×12), actor 5, squad 0 (trace 3685): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2101. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2733302080622181, 'next_transition': 3748}.
<a id="trace-4095"></a>
- 22.20s–22.20s (×1), actor 0, squad 0 (trace 4095): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3829. Next observer evidence: None.
<a id="trace-4112"></a>
<a id="trace-4114"></a>
<a id="trace-4135"></a>
<a id="trace-4137"></a>
<a id="trace-4164"></a>
<a id="trace-4166"></a>
<a id="trace-4182"></a>
<a id="trace-4184"></a>
<a id="trace-4211"></a>
<a id="trace-4213"></a>
<a id="trace-7248"></a>
<a id="trace-7250"></a>
<a id="trace-7266"></a>
<a id="trace-7268"></a>
<a id="trace-7310"></a>
<a id="trace-7312"></a>
<a id="trace-7324"></a>
<a id="trace-7326"></a>
<a id="trace-7791"></a>
<a id="trace-7793"></a>
<a id="trace-7810"></a>
<a id="trace-7812"></a>
<a id="trace-7840"></a>
<a id="trace-7842"></a>
<a id="trace-7861"></a>
<a id="trace-7863"></a>
- 22.25s–28.75s (×26), actor 5, squad 0 (trace 4112): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3834. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21987917480435804, 'next_transition': 4135}.
<a id="trace-4123"></a>
- 22.40s–22.40s (×1), actor 8, squad 1 (trace 4123): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3837. Next observer evidence: {'until': 24.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.385583035277894, 'next_transition': 4247}.
<a id="trace-4247"></a>
- 24.75s–24.75s (×1), actor 8, squad 1 (trace 4247): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 20.00s, trace 3837. Next observer evidence: {'until': 27, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.043408330346669, 'next_transition': 7341}.
<a id="trace-7110"></a>
- 24.75s–24.75s (×1), actor 8, squad 1 (trace 7110): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 20.00s, trace 3837. Next observer evidence: {'until': 27, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.043408330346669, 'next_transition': 7341}.
<a id="trace-7111"></a>
- 24.75s–24.75s (×1), actor 8, squad 1 (trace 7111): MoveTactically. Knowledge: actor memory at 20.00s, trace 3837. Next observer evidence: {'until': 27, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.043408330346669, 'next_transition': 7341}.
<a id="trace-7112"></a>
- 24.75s–24.75s (×1), actor 8, squad 1 (trace 7112): contact cover complete: assessment resumes closure. Knowledge: actor memory at 20.00s, trace 3837. Next observer evidence: {'until': 27, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.043408330346669, 'next_transition': 7341}.
<a id="trace-7341"></a>
- 27.00s–27.00s (×1), actor 8, squad 1 (trace 7341): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 7185. Next observer evidence: {'until': 30.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 6.016022908985248, 'next_transition': 9870}.
<a id="trace-7342"></a>
- 27.00s–27.00s (×1), actor 8, squad 1 (trace 7342): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 7185. Next observer evidence: {'until': 30.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 6.016022908985248, 'next_transition': 9870}.
<a id="trace-7876"></a>
- 29.05s–29.05s (×1), actor 1, squad 0 (trace 7876): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 25.00s, trace 7178. Next observer evidence: {'until': 30.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5582167944980159, 'next_transition': 9851}.
<a id="trace-9582"></a>
- 29.05s–29.05s (×1), actor 1, squad 0 (trace 9582): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 25.00s, trace 7178. Next observer evidence: {'until': 30.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5582167944980159, 'next_transition': 9851}.
<a id="trace-9583"></a>
- 29.05s–29.05s (×1), actor 1, squad 0 (trace 9583): MoveTactically. Knowledge: actor memory at 25.00s, trace 7178. Next observer evidence: {'until': 30.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5582167944980159, 'next_transition': 9851}.
<a id="trace-9584"></a>
- 29.05s–29.05s (×1), actor 1, squad 0 (trace 9584): contact cover complete: assessment resumes closure. Knowledge: actor memory at 25.00s, trace 7178. Next observer evidence: {'until': 30.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5582167944980159, 'next_transition': 9851}.
<a id="trace-9851"></a>
- 30.25s–30.25s (×1), actor 5, squad 0 (trace 9851): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 9772. Next observer evidence: {'until': 31.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.299665742635331, 'next_transition': 10258}.
<a id="trace-9870"></a>
- 30.45s–30.45s (×1), actor 9, squad 1 (trace 9870): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 9775. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3257353755290568, 'next_transition': 9886}.
<a id="trace-9886"></a>
- 31.05s–31.05s (×1), actor 9, squad 1 (trace 9886): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 9775. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.628998321464164, 'next_transition': 10637}.
<a id="trace-10258"></a>
- 31.65s–31.65s (×1), actor 1, squad 0 (trace 10258): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 9768. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6779235644422374, 'next_transition': 10504}.
<a id="trace-10259"></a>
- 31.65s–31.65s (×1), actor 1, squad 0 (trace 10259): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 9768. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6779235644422374, 'next_transition': 10504}.
<a id="trace-10504"></a>
<a id="trace-10506"></a>
<a id="trace-10577"></a>
<a id="trace-10725"></a>
- 32.75s–35.25s (×4), actor 5, squad 0 (trace 10504): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 9772. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9931685405919588, 'next_transition': 10577}.
<a id="trace-10637"></a>
- 34.75s–34.75s (×1), actor 9, squad 1 (trace 10637): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 9775. Next observer evidence: {'until': 42.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.185699826334824, 'next_transition': 11414}.
<a id="trace-10741"></a>
- 35.45s–35.45s (×1), actor 1, squad 0 (trace 10741): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 10650. Next observer evidence: {'until': 35.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08625286026002689, 'next_transition': 10988}.
<a id="trace-10742"></a>
- 35.45s–35.45s (×1), actor 1, squad 0 (trace 10742): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 10650. Next observer evidence: {'until': 35.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08625286026002689, 'next_transition': 10988}.
<a id="trace-10988"></a>
<a id="trace-10990"></a>
<a id="trace-11019"></a>
<a id="trace-11021"></a>
<a id="trace-11056"></a>
<a id="trace-11058"></a>
<a id="trace-11089"></a>
<a id="trace-11091"></a>
<a id="trace-11109"></a>
<a id="trace-11111"></a>
<a id="trace-11175"></a>
<a id="trace-11177"></a>
<a id="trace-11193"></a>
<a id="trace-11195"></a>
<a id="trace-11222"></a>
<a id="trace-11224"></a>
- 35.75s–39.75s (×16), actor 5, squad 0 (trace 10988): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 10654. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18540621694439657, 'next_transition': 11019}.
<a id="trace-714"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (events line 714): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11233"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 11233): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.946514 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 11233. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48960553735806817, 'next_transition': 11311}.
<a id="trace-11234"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 11234): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.946514 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 11234. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48960553735806817, 'next_transition': 11311}.
<a id="trace-11311"></a>
<a id="trace-11313"></a>
<a id="trace-11333"></a>
<a id="trace-11335"></a>
<a id="trace-11358"></a>
<a id="trace-11360"></a>
<a id="trace-11398"></a>
<a id="trace-11400"></a>
<a id="trace-13583"></a>
<a id="trace-13585"></a>
<a id="trace-13606"></a>
<a id="trace-13608"></a>
<a id="trace-13679"></a>
<a id="trace-13681"></a>
<a id="trace-13774"></a>
<a id="trace-13776"></a>
<a id="trace-13804"></a>
<a id="trace-13806"></a>
<a id="trace-13829"></a>
<a id="trace-13831"></a>
<a id="trace-13860"></a>
<a id="trace-13862"></a>
<a id="trace-13877"></a>
<a id="trace-13879"></a>
<a id="trace-14220"></a>
<a id="trace-14222"></a>
- 40.25s–48.75s (×26), actor 5, squad 0 (trace 11311): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 11240. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48960138485358573, 'next_transition': 11333}.
<a id="trace-11414"></a>
- 42.55s–42.55s (×1), actor 9, squad 1 (trace 11414): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 11243. Next observer evidence: {'until': 48.4, 'shots': 0, 'casualties': 2, 'mean_displacement': 3.170243662011741, 'next_transition': 13932}.
<a id="trace-13372"></a>
- 42.55s–42.55s (×1), actor 9, squad 1 (trace 13372): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 11243. Next observer evidence: {'until': 48.4, 'shots': 0, 'casualties': 2, 'mean_displacement': 3.170243662011741, 'next_transition': 13932}.
<a id="trace-13373"></a>
- 42.55s–42.55s (×1), actor 9, squad 1 (trace 13373): MoveTactically. Knowledge: actor memory at 40.00s, trace 11243. Next observer evidence: {'until': 48.4, 'shots': 0, 'casualties': 2, 'mean_displacement': 3.170243662011741, 'next_transition': 13932}.
<a id="trace-13374"></a>
- 42.55s–42.55s (×1), actor 9, squad 1 (trace 13374): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 11243. Next observer evidence: {'until': 48.4, 'shots': 0, 'casualties': 2, 'mean_displacement': 3.170243662011741, 'next_transition': 13932}.
<a id="trace-13932"></a>
- 48.40s–48.40s (×1), actor 11, squad 1 (trace 13932): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 45.00s, trace 13703. Next observer evidence: None.
<a id="trace-13934"></a>
- 48.40s–48.40s (×1), actor 11, squad 1 (trace 13934): NeedSupport. Knowledge: actor memory at 45.00s, trace 13703. Next observer evidence: None.
<a id="trace-13943"></a>
- 48.45s–48.45s (×1), actor 11, squad 1 (trace 13943): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 13703. Next observer evidence: {'until': 49.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6193494433259301, 'next_transition': 14444}.
<a id="trace-13946"></a>
- 48.45s–48.45s (×1), actor 11, squad 1 (trace 13946): MoveTactically. Knowledge: actor memory at 45.00s, trace 13703. Next observer evidence: {'until': 49.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6193494433259301, 'next_transition': 14444}.
<a id="trace-13947"></a>
- 48.45s–48.45s (×1), actor 11, squad 1 (trace 13947): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 45.00s, trace 13703. Next observer evidence: {'until': 49.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6193494433259301, 'next_transition': 14444}.
<a id="trace-14245"></a>
- 49.10s–49.10s (×1), actor 1, squad 0 (trace 14245): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 13694. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2615560298755865, 'next_transition': 14405}.
<a id="trace-14282"></a>
- 49.10s–49.10s (×1), actor 1, squad 0 (trace 14282): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 13694. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2615560298755865, 'next_transition': 14405}.
<a id="trace-14405"></a>
<a id="trace-14407"></a>
<a id="trace-14425"></a>
<a id="trace-14427"></a>
<a id="trace-14647"></a>
<a id="trace-14649"></a>
<a id="trace-14699"></a>
<a id="trace-14701"></a>
<a id="trace-14723"></a>
<a id="trace-14740"></a>
<a id="trace-14775"></a>
<a id="trace-14796"></a>
<a id="trace-14813"></a>
<a id="trace-14848"></a>
<a id="trace-14863"></a>
<a id="trace-14865"></a>
<a id="trace-14937"></a>
<a id="trace-14939"></a>
<a id="trace-14956"></a>
<a id="trace-14958"></a>
<a id="trace-14979"></a>
<a id="trace-14981"></a>
<a id="trace-15016"></a>
<a id="trace-15018"></a>
<a id="trace-15029"></a>
<a id="trace-15031"></a>
<a id="trace-15047"></a>
<a id="trace-15049"></a>
<a id="trace-15062"></a>
<a id="trace-15064"></a>
<a id="trace-15092"></a>
<a id="trace-15094"></a>
<a id="trace-15171"></a>
<a id="trace-15173"></a>
- 49.25s–60.25s (×34), actor 5, squad 0 (trace 14405): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 13698. Next observer evidence: {'until': 49.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1296008932004998, 'next_transition': 14425}.
<a id="trace-14444"></a>
- 49.95s–49.95s (×1), actor 11, squad 1 (trace 14444): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 45.00s, trace 13703. Next observer evidence: {'until': 53.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.841656383181277, 'next_transition': 925}.
<a id="trace-14445"></a>
- 49.95s–49.95s (×1), actor 11, squad 1 (trace 14445): rearward bound: one stationary suppressing element. Knowledge: actor memory at 45.00s, trace 13703. Next observer evidence: {'until': 53.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.841656383181277, 'next_transition': 925}.
<a id="trace-925"></a>
- 53.65s–53.65s (×1), actor 5, squad 1 (events line 925): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14825"></a>
- 53.65s–53.65s (×1), actor 5, squad 1 (trace 14825): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.446261 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 14825. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-14826"></a>
- 53.65s–53.65s (×1), actor 5, squad 1 (trace 14826): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.446261 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 14826. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-15203"></a>
- 60.85s–60.85s (×1), actor 1, squad 0 (trace 15203): NeedSupport. Knowledge: actor memory at 60.00s, trace 15104. Next observer evidence: {'until': 61.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.49499539976730883, 'next_transition': 15219}.
<a id="trace-15219"></a>
<a id="trace-15232"></a>
<a id="trace-15247"></a>
<a id="trace-15260"></a>
- 61.25s–62.75s (×4), actor 5, squad 0 (trace 15219): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 15108. Next observer evidence: {'until': 61.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18000463996287186, 'next_transition': 15232}.
<a id="trace-15269"></a>
- 62.85s–62.85s (×1), actor 1, squad 0 (trace 15269): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 15104. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29250593156543486, 'next_transition': 15455}.
<a id="trace-15291"></a>
- 62.85s–62.85s (×1), actor 1, squad 0 (trace 15291): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 15104. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29250593156543486, 'next_transition': 15455}.
<a id="trace-15455"></a>
<a id="trace-15470"></a>
<a id="trace-15509"></a>
<a id="trace-15522"></a>
<a id="trace-15598"></a>
<a id="trace-15617"></a>
<a id="trace-15646"></a>
<a id="trace-15664"></a>
<a id="trace-15684"></a>
<a id="trace-15695"></a>
<a id="trace-15715"></a>
<a id="trace-15730"></a>
<a id="trace-15755"></a>
<a id="trace-15770"></a>
<a id="trace-15842"></a>
<a id="trace-15861"></a>
<a id="trace-15876"></a>
<a id="trace-15887"></a>
<a id="trace-15903"></a>
<a id="trace-15926"></a>
- 63.25s–73.25s (×20), actor 5, squad 0 (trace 15455): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 15108. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18975977466523436, 'next_transition': 15470}.
<a id="trace-15973"></a>
- 74.50s–74.50s (×1), actor 1, squad 0 (trace 15973): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 15778. Next observer evidence: {'until': 74.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15428524007412575, 'next_transition': 16101}.
<a id="trace-15990"></a>
- 74.50s–74.50s (×1), actor 1, squad 0 (trace 15990): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 15778. Next observer evidence: {'until': 74.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15428524007412575, 'next_transition': 16101}.
<a id="trace-16101"></a>
<a id="trace-16182"></a>
<a id="trace-16255"></a>
<a id="trace-16269"></a>
<a id="trace-16296"></a>
<a id="trace-16324"></a>
<a id="trace-16337"></a>
<a id="trace-16353"></a>
<a id="trace-16367"></a>
<a id="trace-16379"></a>
<a id="trace-16454"></a>
<a id="trace-16471"></a>
<a id="trace-16504"></a>
<a id="trace-16522"></a>
<a id="trace-16536"></a>
<a id="trace-16570"></a>
<a id="trace-16583"></a>
<a id="trace-16660"></a>
- 74.75s–85.25s (×18), actor 5, squad 0 (trace 16101): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 15782. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40777314241488094, 'next_transition': 16182}.
<a id="trace-16670"></a>
- 85.65s–85.65s (×1), actor 1, squad 0 (trace 16670): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 16595. Next observer evidence: None.
<a id="trace-16732"></a>
- 85.65s–85.65s (×1), actor 1, squad 0 (trace 16732): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 16595. Next observer evidence: None.
<a id="trace-16891"></a>
<a id="trace-16906"></a>
<a id="trace-16960"></a>
<a id="trace-16971"></a>
<a id="trace-16991"></a>
<a id="trace-17017"></a>
<a id="trace-17036"></a>
<a id="trace-17055"></a>
<a id="trace-17130"></a>
<a id="trace-17152"></a>
<a id="trace-17168"></a>
<a id="trace-17183"></a>
<a id="trace-17206"></a>
<a id="trace-17235"></a>
<a id="trace-17272"></a>
<a id="trace-17344"></a>
- 85.75s–94.75s (×16), actor 5, squad 0 (trace 16891): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 16599. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1937019580569645, 'next_transition': 16906}.
<a id="trace-17434"></a>
- 95.45s–95.45s (×1), actor 1, squad 0 (trace 17434): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 95.00s, trace 17359. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06479821994594682, 'next_transition': 17583}.
<a id="trace-17471"></a>
- 95.45s–95.45s (×1), actor 1, squad 0 (trace 17471): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 95.00s, trace 17359. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06479821994594682, 'next_transition': 17583}.
<a id="trace-17583"></a>
<a id="trace-17608"></a>
<a id="trace-17634"></a>
<a id="trace-17655"></a>
<a id="trace-17706"></a>
<a id="trace-17750"></a>
<a id="trace-17765"></a>
<a id="trace-17836"></a>
<a id="trace-17864"></a>
<a id="trace-17892"></a>
<a id="trace-17901"></a>
<a id="trace-17915"></a>
- 95.75s–103.25s (×12), actor 5, squad 0 (trace 17583): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 17363. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1943951870204986, 'next_transition': 17608}.
<a id="trace-17922"></a>
- 103.25s–103.25s (×1), actor 1, squad 0 (trace 17922): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 17774. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2591986788065132, 'next_transition': 18137}.
<a id="trace-17974"></a>
- 103.25s–103.25s (×1), actor 1, squad 0 (trace 17974): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 17774. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2591986788065132, 'next_transition': 18137}.
<a id="trace-18137"></a>
<a id="trace-18160"></a>
<a id="trace-18187"></a>
<a id="trace-18266"></a>
<a id="trace-18280"></a>
<a id="trace-18307"></a>
<a id="trace-18325"></a>
<a id="trace-18342"></a>
<a id="trace-18355"></a>
<a id="trace-18375"></a>
<a id="trace-18386"></a>
- 103.75s–108.75s (×11), actor 5, squad 0 (trace 18137): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 17778. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38879562560961173, 'next_transition': 18160}.
<a id="trace-1363"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (events line 1363): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6191806215222895, 'next_transition': 18405}.
<a id="trace-18397"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 18397): renew committed intent (75 s lifetime). Knowledge: actor memory at 108.95s, trace 18397. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6191806215222895, 'next_transition': 18405}.
<a id="trace-18405"></a>
<a id="trace-18417"></a>
<a id="trace-18492"></a>
<a id="trace-18507"></a>
<a id="trace-18519"></a>
<a id="trace-18530"></a>
<a id="trace-18548"></a>
<a id="trace-18559"></a>
- 109.25s–112.75s (×8), actor 5, squad 0 (trace 18405): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.95s, trace 18397. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6192220640494207, 'next_transition': 18417}.
<a id="trace-18572"></a>
- 112.90s–112.90s (×1), actor 1, squad 0 (trace 18572): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 18429. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5299480135995301, 'next_transition': 18693}.
<a id="trace-18579"></a>
- 112.90s–112.90s (×1), actor 1, squad 0 (trace 18579): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 18429. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5299480135995301, 'next_transition': 18693}.
<a id="trace-18693"></a>
<a id="trace-18710"></a>
<a id="trace-18742"></a>
<a id="trace-18761"></a>
<a id="trace-18835"></a>
<a id="trace-18855"></a>
<a id="trace-18875"></a>
<a id="trace-18897"></a>
<a id="trace-18910"></a>
<a id="trace-18921"></a>
<a id="trace-18933"></a>
- 113.25s–119.25s (×11), actor 5, squad 0 (trace 18693): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 18433. Next observer evidence: {'until': 113.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2946743975508256, 'next_transition': 18710}.
<a id="trace-18939"></a>
- 119.65s–119.65s (×1), actor 1, squad 0 (trace 18939): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 115.00s, trace 18769. Next observer evidence: None.
<a id="trace-19001"></a>
- 119.65s–119.65s (×1), actor 1, squad 0 (trace 19001): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 115.00s, trace 18769. Next observer evidence: None.
<a id="trace-19159"></a>
<a id="trace-19229"></a>
<a id="trace-19246"></a>
<a id="trace-19273"></a>
<a id="trace-19283"></a>
<a id="trace-19303"></a>
<a id="trace-19322"></a>
<a id="trace-19349"></a>
<a id="trace-19367"></a>
<a id="trace-19453"></a>
<a id="trace-19478"></a>
<a id="trace-19510"></a>
<a id="trace-19582"></a>
<a id="trace-19618"></a>
<a id="trace-19652"></a>
<a id="trace-19679"></a>
<a id="trace-19698"></a>
- 119.75s–129.30s (×17), actor 5, squad 0 (trace 19159): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 18773. Next observer evidence: {'until': 120.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.023554353122520733, 'next_transition': 19229}.
<a id="trace-19709"></a>
- 129.60s–129.60s (×1), actor 1, squad 0 (trace 19709): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 125.00s, trace 19388. Next observer evidence: {'until': 129.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1293306405565343, 'next_transition': 19827}.
<a id="trace-19710"></a>
- 129.60s–129.60s (×1), actor 1, squad 0 (trace 19710): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 125.00s, trace 19388. Next observer evidence: {'until': 129.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1293306405565343, 'next_transition': 19827}.
<a id="trace-19827"></a>
<a id="trace-19898"></a>
<a id="trace-19928"></a>
<a id="trace-19966"></a>
<a id="trace-19986"></a>
<a id="trace-20008"></a>
<a id="trace-20027"></a>
<a id="trace-20120"></a>
<a id="trace-20127"></a>
<a id="trace-20139"></a>
- 129.80s–136.30s (×10), actor 5, squad 0 (trace 19827): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 19392. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2393590145855968, 'next_transition': 19898}.
<a id="trace-20144"></a>
- 136.55s–136.55s (×1), actor 1, squad 0 (trace 20144): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 20056. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20370}.
<a id="trace-20206"></a>
- 136.55s–136.55s (×1), actor 1, squad 0 (trace 20206): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 20056. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20370}.
<a id="trace-20357"></a>
- 136.55s–136.55s (×1), actor 1, squad 0 (trace 20357): NeedSupport. Knowledge: actor memory at 135.00s, trace 20056. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20370}.
<a id="trace-20370"></a>
<a id="trace-20386"></a>
<a id="trace-20407"></a>
<a id="trace-20429"></a>
<a id="trace-20460"></a>
<a id="trace-20542"></a>
<a id="trace-20573"></a>
<a id="trace-20632"></a>
<a id="trace-20690"></a>
<a id="trace-20727"></a>
<a id="trace-20806"></a>
<a id="trace-20836"></a>
<a id="trace-20848"></a>
<a id="trace-20862"></a>
<a id="trace-20877"></a>
<a id="trace-20882"></a>
<a id="trace-20893"></a>
<a id="trace-20898"></a>
<a id="trace-20964"></a>
<a id="trace-20988"></a>
<a id="trace-21000"></a>
<a id="trace-21010"></a>
<a id="trace-21023"></a>
<a id="trace-21028"></a>
<a id="trace-21042"></a>
<a id="trace-21108"></a>
<a id="trace-21114"></a>
<a id="trace-21126"></a>
<a id="trace-21132"></a>
<a id="trace-21149"></a>
<a id="trace-21179"></a>
<a id="trace-21215"></a>
<a id="trace-21240"></a>
<a id="trace-21313"></a>
<a id="trace-21399"></a>
<a id="trace-21417"></a>
<a id="trace-21439"></a>
<a id="trace-21451"></a>
- 136.80s–161.80s (×38), actor 5, squad 0 (trace 20370): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 20060. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20386}.
<a id="trace-21456"></a>
- 161.85s–161.85s (×1), actor 1, squad 0 (trace 21456): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 160.00s, trace 21328. Next observer evidence: {'until': 162, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21458}.
<a id="trace-21458"></a>
- 162.10s–162.10s (×1), actor 1, squad 0 (trace 21458): Reorganise: completed/failed drill. Knowledge: actor memory at 160.00s, trace 21328. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21483}.
<a id="trace-21463"></a>
- 162.10s–162.10s (×1), actor 1, squad 0 (trace 21463): ReactToContact: cover and return fire. Knowledge: actor memory at 160.00s, trace 21328. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21483}.
<a id="trace-21464"></a>
- 162.10s–162.10s (×1), actor 1, squad 0 (trace 21464): Reorganise complete: known contact. Knowledge: actor memory at 160.00s, trace 21328. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21483}.
<a id="trace-21483"></a>
<a id="trace-21492"></a>
<a id="trace-21522"></a>
<a id="trace-21534"></a>
<a id="trace-21549"></a>
<a id="trace-21564"></a>
<a id="trace-21638"></a>
<a id="trace-21644"></a>
- 162.30s–165.80s (×8), actor 5, squad 0 (trace 21483): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 21332. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21492}.
<a id="trace-21648"></a>
- 166.00s–166.00s (×1), actor 1, squad 0 (trace 21648): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 165.00s, trace 21574. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000095502428265, 'next_transition': 21712}.
<a id="trace-21649"></a>
- 166.00s–166.00s (×1), actor 1, squad 0 (trace 21649): rearward bound: one stationary suppressing element. Knowledge: actor memory at 165.00s, trace 21574. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000095502428265, 'next_transition': 21712}.
<a id="trace-21712"></a>
<a id="trace-21724"></a>
<a id="trace-21752"></a>
<a id="trace-21774"></a>
<a id="trace-21797"></a>
<a id="trace-21813"></a>
<a id="trace-21886"></a>
<a id="trace-21900"></a>
<a id="trace-21916"></a>
<a id="trace-21923"></a>
<a id="trace-21942"></a>
<a id="trace-21954"></a>
<a id="trace-21964"></a>
<a id="trace-21972"></a>
<a id="trace-21987"></a>
<a id="trace-22054"></a>
<a id="trace-22059"></a>
<a id="trace-22074"></a>
<a id="trace-22084"></a>
<a id="trace-22100"></a>
- 166.30s–177.30s (×20), actor 5, squad 0 (trace 21712): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 21577. Next observer evidence: {'until': 166.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630009976993312, 'next_transition': 21724}.
<a id="trace-1874"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (events line 1874): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0756063801687553, 'next_transition': 22123}.
<a id="trace-22114"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (trace 22114): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.05s, trace 22114. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0756063801687553, 'next_transition': 22123}.
<a id="trace-22123"></a>
<a id="trace-22131"></a>
<a id="trace-22142"></a>
<a id="trace-22145"></a>
<a id="trace-22215"></a>
<a id="trace-22227"></a>
<a id="trace-22240"></a>
- 178.30s–181.30s (×7), actor 5, squad 0 (trace 22123): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.05s, trace 22114. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2268033044046951, 'next_transition': 22131}.
<a id="trace-22243"></a>
- 181.65s–181.65s (×1), actor 1, squad 0 (trace 22243): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 180.00s, trace 22147. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22401}.
<a id="trace-22244"></a>
- 181.65s–181.65s (×1), actor 1, squad 0 (trace 22244): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 180.00s, trace 22147. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22401}.
<a id="trace-22401"></a>
<a id="trace-22434"></a>
<a id="trace-22453"></a>
<a id="trace-22473"></a>
<a id="trace-22493"></a>
- 181.80s–184.30s (×5), actor 5, squad 0 (trace 22401): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 22150. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.047499330567895855, 'next_transition': 22434}.
<a id="trace-22494"></a>
- 184.30s–184.30s (×1), actor 1, squad 0 (trace 22494): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 180.00s, trace 22147. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0000141419093413, 'next_transition': 22576}.
<a id="trace-22576"></a>
<a id="trace-22583"></a>
<a id="trace-22599"></a>
- 185.30s–186.30s (×3), actor 5, squad 0 (trace 22576): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 22517. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5149914853976814, 'next_transition': 22583}.
<a id="trace-22604"></a>
- 186.40s–186.40s (×1), actor 1, squad 0 (trace 22604): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 185.00s, trace 22514. Next observer evidence: {'until': 186.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5899529730736267, 'next_transition': 22614}.
<a id="trace-22614"></a>
<a id="trace-22630"></a>
<a id="trace-22684"></a>
<a id="trace-22705"></a>
<a id="trace-22716"></a>
<a id="trace-22794"></a>
<a id="trace-22804"></a>
<a id="trace-22823"></a>
<a id="trace-22844"></a>
<a id="trace-22856"></a>
<a id="trace-22866"></a>
<a id="trace-22869"></a>
<a id="trace-22954"></a>
<a id="trace-22958"></a>
<a id="trace-22974"></a>
<a id="trace-22978"></a>
<a id="trace-23005"></a>
<a id="trace-23015"></a>
<a id="trace-23023"></a>
<a id="trace-23092"></a>
<a id="trace-23096"></a>
<a id="trace-23107"></a>
<a id="trace-23123"></a>
<a id="trace-23128"></a>
<a id="trace-23141"></a>
<a id="trace-23154"></a>
<a id="trace-23164"></a>
<a id="trace-23168"></a>
<a id="trace-23232"></a>
- 186.80s–205.30s (×29), actor 5, squad 0 (trace 22614): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 22517. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5901072618964771, 'next_transition': 22630}.
<a id="trace-2018"></a>
- 205.65s–205.65s (×1), actor 5, squad 0 (events line 2018): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23234"></a>
- 205.65s–205.65s (×1), actor 5, squad 0 (trace 23234): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.812686 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 205.65s, trace 23234. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23247}.
<a id="trace-23235"></a>
- 205.65s–205.65s (×1), actor 5, squad 0 (trace 23235): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.812686 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 205.65s, trace 23235. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23247}.
<a id="trace-23247"></a>
<a id="trace-23250"></a>
<a id="trace-23261"></a>
<a id="trace-23265"></a>
<a id="trace-23273"></a>
<a id="trace-23280"></a>
<a id="trace-23297"></a>
<a id="trace-23373"></a>
<a id="trace-23387"></a>
- 206.30s–211.30s (×9), actor 5, squad 0 (trace 23247): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.65s, trace 23235. Next observer evidence: {'until': 206.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23250}.
<a id="trace-23389"></a>
- 211.65s–211.65s (×1), actor 1, squad 0 (trace 23389): MoveTactically. Knowledge: actor memory at 210.00s, trace 23298. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23402}.
<a id="trace-23390"></a>
- 211.65s–211.65s (×1), actor 1, squad 0 (trace 23390): traveling overwatch. Knowledge: actor memory at 210.00s, trace 23298. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23402}.
<a id="trace-23391"></a>
- 211.65s–211.65s (×1), actor 1, squad 0 (trace 23391): received platoon directive. Knowledge: actor memory at 210.00s, trace 23298. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23402}.
<a id="trace-23402"></a>
<a id="trace-23417"></a>
- 211.80s–212.30s (×2), actor 5, squad 0 (trace 23402): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 23301. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23417}.
<a id="trace-23425"></a>
- 212.65s–212.65s (×1), actor 1, squad 0 (trace 23425): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 210.00s, trace 23298. Next observer evidence: {'until': 212.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23595}.
<a id="trace-23595"></a>
<a id="trace-23611"></a>
<a id="trace-23620"></a>
<a id="trace-23639"></a>
<a id="trace-23655"></a>
<a id="trace-23726"></a>
<a id="trace-23762"></a>
<a id="trace-23798"></a>
<a id="trace-23815"></a>
<a id="trace-23841"></a>
- 212.80s–219.30s (×10), actor 5, squad 0 (trace 23595): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 23301. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23611}.
<a id="trace-2094"></a>
- 219.50s–219.50s (×1), actor 5, squad 0 (events line 2094): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 219.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5653263888763316, 'next_transition': 23849}.
<a id="trace-23844"></a>
- 219.50s–219.50s (×1), actor 5, squad 0 (trace 23844): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.987989 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 219.50s, trace 23844. Next observer evidence: {'until': 219.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5653263888763316, 'next_transition': 23849}.
<a id="trace-23845"></a>
- 219.50s–219.50s (×1), actor 5, squad 0 (trace 23845): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.987989 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 219.50s, trace 23845. Next observer evidence: {'until': 219.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5653263888763316, 'next_transition': 23849}.
<a id="trace-23849"></a>
<a id="trace-23921"></a>
<a id="trace-23946"></a>
<a id="trace-23957"></a>
<a id="trace-23986"></a>
<a id="trace-24009"></a>
<a id="trace-24033"></a>
<a id="trace-24043"></a>
<a id="trace-24109"></a>
- 219.80s–225.30s (×9), actor 5, squad 0 (trace 23849): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 219.50s, trace 23845. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5883602379770416, 'next_transition': 23921}.
<a id="trace-24113"></a>
- 225.45s–225.45s (×1), actor 1, squad 0 (trace 24113): bounding overwatch. Knowledge: actor memory at 225.00s, trace 24047. Next observer evidence: {'until': 225.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400050039865709, 'next_transition': 24275}.
<a id="trace-24114"></a>
- 225.45s–225.45s (×1), actor 1, squad 0 (trace 24114): received platoon directive. Knowledge: actor memory at 225.00s, trace 24047. Next observer evidence: {'until': 225.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400050039865709, 'next_transition': 24275}.
<a id="trace-24275"></a>
<a id="trace-24289"></a>
<a id="trace-24323"></a>
<a id="trace-24332"></a>
<a id="trace-24355"></a>
<a id="trace-24387"></a>
<a id="trace-24391"></a>
<a id="trace-24468"></a>
<a id="trace-24484"></a>
<a id="trace-24495"></a>
- 225.80s–231.30s (×10), actor 5, squad 0 (trace 24275): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 24050. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400055420548856, 'next_transition': 24289}.
<a id="trace-24497"></a>
- 231.45s–231.45s (×1), actor 1, squad 0 (trace 24497): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 230.00s, trace 24405. Next observer evidence: {'until': 231.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24507}.
<a id="trace-24507"></a>
- 231.80s–231.80s (×1), actor 5, squad 0 (trace 24507): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 24408. Next observer evidence: {'until': 232, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24511}.
<a id="trace-24511"></a>
- 232.05s–232.05s (×1), actor 1, squad 0 (trace 24511): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 230.00s, trace 24405. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24576}.
<a id="trace-24576"></a>
<a id="trace-24593"></a>
<a id="trace-24605"></a>
<a id="trace-24607"></a>
<a id="trace-24622"></a>
<a id="trace-24630"></a>
<a id="trace-24699"></a>
<a id="trace-24725"></a>
<a id="trace-24746"></a>
<a id="trace-24763"></a>
<a id="trace-24779"></a>
<a id="trace-24788"></a>
<a id="trace-24797"></a>
<a id="trace-24800"></a>
<a id="trace-24868"></a>
<a id="trace-24879"></a>
<a id="trace-24889"></a>
<a id="trace-24913"></a>
<a id="trace-24929"></a>
<a id="trace-24950"></a>
<a id="trace-24959"></a>
<a id="trace-24971"></a>
<a id="trace-24980"></a>
- 232.30s–244.80s (×23), actor 5, squad 0 (trace 24576): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 24408. Next observer evidence: {'until': 232.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24593}.
<a id="trace-25038"></a>
- 245.25s–245.25s (×1), actor 1, squad 0 (trace 25038): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 245.00s, trace 24981. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.127058403980847, 'next_transition': 25059}.
<a id="trace-25059"></a>
- 246.25s–246.25s (×1), actor 1, squad 0 (trace 25059): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 245.00s, trace 24981. Next observer evidence: None.
<a id="trace-25224"></a>
<a id="trace-25231"></a>
- 246.30s–246.80s (×2), actor 5, squad 0 (trace 25224): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 24984. Next observer evidence: {'until': 246.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25231}.
<a id="trace-2256"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (events line 2256): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25238"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (trace 25238): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=8.762333 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 247.10s, trace 25238. Next observer evidence: {'until': 247.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6112571104484652, 'next_transition': 25265}.
<a id="trace-25239"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (trace 25239): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=8.762333 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 247.10s, trace 25239. Next observer evidence: {'until': 247.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6112571104484652, 'next_transition': 25265}.
<a id="trace-25265"></a>
<a id="trace-25285"></a>
<a id="trace-25297"></a>
<a id="trace-25338"></a>
<a id="trace-25406"></a>
<a id="trace-25435"></a>
<a id="trace-25467"></a>
<a id="trace-25478"></a>
- 247.80s–253.30s (×8), actor 5, squad 0 (trace 25265): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 247.10s, trace 25239. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5900138753784675, 'next_transition': 25285}.
<a id="trace-25482"></a>
- 253.65s–253.65s (×1), actor 1, squad 0 (trace 25482): received platoon directive. Knowledge: actor memory at 250.00s, trace 25339. Next observer evidence: {'until': 253.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5050066931370333, 'next_transition': 25640}.
<a id="trace-25640"></a>
<a id="trace-25651"></a>
<a id="trace-25672"></a>
<a id="trace-25759"></a>
<a id="trace-25791"></a>
<a id="trace-25826"></a>
<a id="trace-25841"></a>
- 253.80s–258.30s (×7), actor 5, squad 0 (trace 25640): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 25342. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0099780276788748, 'next_transition': 25651}.
<a id="trace-25848"></a>
- 258.45s–258.45s (×1), actor 1, squad 0 (trace 25848): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 255.00s, trace 25681. Next observer evidence: {'until': 258.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200006375656537, 'next_transition': 25872}.
<a id="trace-25872"></a>
<a id="trace-25887"></a>
<a id="trace-25973"></a>
- 258.80s–260.80s (×3), actor 5, squad 0 (trace 25872): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 25684. Next observer evidence: {'until': 259.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3674909363, 'next_transition': 25887}.
<a id="trace-25980"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (trace 25980): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 260.90s, trace 25980. Next observer evidence: None.
<a id="trace-25981"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (trace 25981): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 260.90s, trace 25981. Next observer evidence: None.
<a id="trace-2356"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (events line 2356): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36750410284818885, 'next_transition': 26007}.
<a id="trace-26007"></a>
<a id="trace-26028"></a>
<a id="trace-26058"></a>
<a id="trace-26066"></a>
<a id="trace-26078"></a>
<a id="trace-26087"></a>
<a id="trace-26154"></a>
<a id="trace-26160"></a>
<a id="trace-26182"></a>
- 261.30s–266.80s (×9), actor 5, squad 0 (trace 26007): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.90s, trace 25981. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5249958782906989, 'next_transition': 26028}.
<a id="trace-26198"></a>
- 267.45s–267.45s (×1), actor 1, squad 0 (trace 26198): traveling overwatch. Knowledge: actor memory at 265.00s, trace 26092. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26356}.
<a id="trace-26199"></a>
- 267.45s–267.45s (×1), actor 1, squad 0 (trace 26199): received platoon directive. Knowledge: actor memory at 265.00s, trace 26092. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26356}.
<a id="trace-26356"></a>
<a id="trace-26376"></a>
<a id="trace-26412"></a>
<a id="trace-26432"></a>
<a id="trace-26503"></a>
<a id="trace-26517"></a>
<a id="trace-26536"></a>
<a id="trace-26552"></a>
<a id="trace-26561"></a>
<a id="trace-26575"></a>
<a id="trace-26585"></a>
<a id="trace-26596"></a>
<a id="trace-26611"></a>
<a id="trace-26680"></a>
<a id="trace-26699"></a>
<a id="trace-26724"></a>
<a id="trace-26734"></a>
<a id="trace-26755"></a>
<a id="trace-26762"></a>
<a id="trace-26776"></a>
<a id="trace-26787"></a>
<a id="trace-26800"></a>
<a id="trace-26874"></a>
<a id="trace-26885"></a>
<a id="trace-26907"></a>
<a id="trace-26914"></a>
<a id="trace-26932"></a>
<a id="trace-26947"></a>
<a id="trace-26964"></a>
<a id="trace-26971"></a>
<a id="trace-26986"></a>
- 267.80s–284.30s (×31), actor 5, squad 0 (trace 26356): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 26095. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26376}.
<a id="trace-26993"></a>
- 284.70s–284.70s (×1), actor 1, squad 0 (trace 26993): ReactToContact: cover and return fire. Knowledge: actor memory at 280.00s, trace 26808. Next observer evidence: {'until': 284.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23454354853127252, 'next_transition': 27222}.
<a id="trace-26994"></a>
- 284.70s–284.70s (×1), actor 1, squad 0 (trace 26994): bounding overwatch. Knowledge: actor memory at 280.00s, trace 26808. Next observer evidence: {'until': 284.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23454354853127252, 'next_transition': 27222}.
<a id="trace-26995"></a>
- 284.70s–284.70s (×1), actor 1, squad 0 (trace 26995): new contact inside 100 m. Knowledge: actor memory at 280.00s, trace 26808. Next observer evidence: {'until': 284.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23454354853127252, 'next_transition': 27222}.
<a id="trace-27222"></a>
<a id="trace-27292"></a>
<a id="trace-27311"></a>
- 284.80s–285.80s (×3), actor 5, squad 0 (trace 27222): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 26810. Next observer evidence: {'until': 285.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8232500200897162, 'next_transition': 27292}.
<a id="trace-27314"></a>
- 285.95s–285.95s (×1), actor 1, squad 0 (trace 27314): new contact inside 100 m. Knowledge: actor memory at 285.00s, trace 27231. Next observer evidence: {'until': 286.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.11311513101261014, 'next_transition': 27583}.
<a id="trace-27583"></a>
<a id="trace-27603"></a>
<a id="trace-27616"></a>
- 286.80s–287.80s (×3), actor 5, squad 0 (trace 27583): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 285.00s, trace 27233. Next observer evidence: {'until': 287.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27603}.
<a id="trace-27621"></a>
- 288.00s–288.00s (×1), actor 1, squad 0 (trace 27621): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 285.00s, trace 27231. Next observer evidence: {'until': 288.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27637}.
<a id="trace-27623"></a>
- 288.00s–288.00s (×1), actor 1, squad 0 (trace 27623): NeedSupport. Knowledge: actor memory at 285.00s, trace 27231. Next observer evidence: {'until': 288.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27637}.
<a id="trace-27637"></a>
- 288.25s–288.25s (×1), actor 1, squad 0 (trace 27637): Reorganise: completed/failed drill. Knowledge: actor memory at 285.00s, trace 27231. Next observer evidence: None.
<a id="trace-27640"></a>
- 288.25s–288.25s (×1), actor 1, squad 0 (trace 27640): ReactToContact: cover and return fire. Knowledge: actor memory at 285.00s, trace 27231. Next observer evidence: None.
<a id="trace-27641"></a>
- 288.25s–288.25s (×1), actor 1, squad 0 (trace 27641): Reorganise complete: known contact. Knowledge: actor memory at 285.00s, trace 27231. Next observer evidence: None.
<a id="trace-27785"></a>
- 288.30s–288.30s (×1), actor 5, squad 0 (trace 27785): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 285.00s, trace 27233. Next observer evidence: {'until': 288.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2595}.
<a id="trace-2595"></a>
- 288.50s–288.50s (×1), actor 5, squad 0 (events line 2595): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 289.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7087499170098694, 'next_transition': 27817}.
<a id="trace-27789"></a>
- 288.50s–288.50s (×1), actor 5, squad 0 (trace 27789): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=5.098358 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 288.50s, trace 27789. Next observer evidence: {'until': 289.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7087499170098694, 'next_transition': 27817}.
<a id="trace-27790"></a>
- 288.50s–288.50s (×1), actor 5, squad 0 (trace 27790): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=5.098358 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 288.50s, trace 27790. Next observer evidence: {'until': 289.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7087499170098694, 'next_transition': 27817}.
<a id="trace-27817"></a>
<a id="trace-27890"></a>
<a id="trace-27917"></a>
- 289.30s–290.80s (×3), actor 5, squad 0 (trace 27817): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 288.50s, trace 27790. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.668671451829548, 'next_transition': 27890}.
<a id="trace-27927"></a>
- 290.90s–290.90s (×1), actor 1, squad 0 (trace 27927): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 290.00s, trace 27830. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6305673631074576, 'next_transition': 28091}.
<a id="trace-28091"></a>
<a id="trace-28121"></a>
<a id="trace-28190"></a>
<a id="trace-28218"></a>
<a id="trace-28235"></a>
<a id="trace-28261"></a>
- 291.30s–294.80s (×6), actor 5, squad 0 (trace 28091): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 27832. Next observer evidence: {'until': 291.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9458204808764469, 'next_transition': 28121}.
<a id="trace-28326"></a>
- 295.45s–295.45s (×1), actor 1, squad 0 (trace 28326): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 295.00s, trace 28264. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20957499999999996, 'next_transition': 28519}.
<a id="trace-28327"></a>
- 295.45s–295.45s (×1), actor 1, squad 0 (trace 28327): rearward bound: one stationary suppressing element. Knowledge: actor memory at 295.00s, trace 28264. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20957499999999996, 'next_transition': 28519}.
<a id="trace-28519"></a>
<a id="trace-28539"></a>
<a id="trace-28553"></a>
<a id="trace-28572"></a>
<a id="trace-28584"></a>
<a id="trace-28599"></a>
<a id="trace-28623"></a>
<a id="trace-28706"></a>
<a id="trace-28725"></a>
<a id="trace-28735"></a>
<a id="trace-28758"></a>
<a id="trace-28766"></a>
<a id="trace-28787"></a>
<a id="trace-28804"></a>
<a id="trace-28811"></a>
<a id="trace-28877"></a>
<a id="trace-28900"></a>
<a id="trace-28911"></a>
<a id="trace-28927"></a>
<a id="trace-28932"></a>
<a id="trace-28958"></a>
<a id="trace-28973"></a>
<a id="trace-29042"></a>
- 295.80s–310.30s (×23), actor 5, squad 0 (trace 28519): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 28266. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21570250001448757, 'next_transition': 28539}.
<a id="trace-29064"></a>
- 311.25s–311.25s (×1), actor 1, squad 0 (trace 29064): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 310.00s, trace 28982. Next observer evidence: None.
<a id="trace-29065"></a>
- 311.25s–311.25s (×1), actor 1, squad 0 (trace 29065): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 310.00s, trace 28982. Next observer evidence: None.
<a id="trace-29075"></a>
<a id="trace-29080"></a>
<a id="trace-29103"></a>
<a id="trace-29110"></a>
<a id="trace-29126"></a>
<a id="trace-29130"></a>
- 311.30s–313.80s (×6), actor 5, squad 0 (trace 29075): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 310.00s, trace 28983. Next observer evidence: {'until': 311.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600367616162242, 'next_transition': 29080}.
<a id="trace-29133"></a>
- 313.85s–313.85s (×1), actor 5, squad 0 (trace 29133): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 313.85s, trace 29133. Next observer evidence: {'until': 314.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399622637026317, 'next_transition': 29144}.
<a id="trace-29144"></a>
<a id="trace-29154"></a>
- 314.30s–314.80s (×2), actor 5, squad 0 (trace 29144): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 313.85s, trace 29133. Next observer evidence: {'until': 314.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599748798201411, 'next_transition': 29154}.
<a id="trace-29221"></a>
- 315.70s–315.70s (×1), actor 1, squad 0 (trace 29221): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 315.00s, trace 29157. Next observer evidence: None.
<a id="trace-29225"></a>
- 315.75s–315.75s (×1), actor 1, squad 0 (trace 29225): MoveTactically. Knowledge: actor memory at 315.00s, trace 29157. Next observer evidence: {'until': 315.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199811318513116, 'next_transition': 29233}.
<a id="trace-29226"></a>
- 315.75s–315.75s (×1), actor 1, squad 0 (trace 29226): traveling overwatch. Knowledge: actor memory at 315.00s, trace 29157. Next observer evidence: {'until': 315.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199811318513116, 'next_transition': 29233}.
<a id="trace-29227"></a>
- 315.75s–315.75s (×1), actor 1, squad 0 (trace 29227): received platoon directive. Knowledge: actor memory at 315.00s, trace 29157. Next observer evidence: {'until': 315.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199811318513116, 'next_transition': 29233}.
<a id="trace-29233"></a>
- 315.80s–315.80s (×1), actor 5, squad 0 (trace 29233): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 315.00s, trace 29158. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399937486539858, 'next_transition': 29249}.
<a id="trace-29234"></a>
- 315.80s–315.80s (×1), actor 1, squad 0 (trace 29234): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 315.00s, trace 29157. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399937486539858, 'next_transition': 29249}.
<a id="trace-29249"></a>
<a id="trace-29264"></a>
<a id="trace-29281"></a>
<a id="trace-29283"></a>
<a id="trace-29293"></a>
<a id="trace-29307"></a>
<a id="trace-29315"></a>
<a id="trace-29317"></a>
<a id="trace-29376"></a>
<a id="trace-29394"></a>
<a id="trace-29398"></a>
<a id="trace-29417"></a>
<a id="trace-29419"></a>
<a id="trace-29430"></a>
<a id="trace-29434"></a>
<a id="trace-29453"></a>
<a id="trace-29465"></a>
<a id="trace-29538"></a>
<a id="trace-29542"></a>
<a id="trace-29555"></a>
<a id="trace-29564"></a>
<a id="trace-29567"></a>
<a id="trace-29644"></a>
<a id="trace-29655"></a>
<a id="trace-29677"></a>
<a id="trace-29690"></a>
<a id="trace-29692"></a>
<a id="trace-29700"></a>
<a id="trace-29702"></a>
<a id="trace-29711"></a>
<a id="trace-29773"></a>
<a id="trace-29793"></a>
<a id="trace-29799"></a>
<a id="trace-29817"></a>
<a id="trace-29836"></a>
<a id="trace-29838"></a>
<a id="trace-29909"></a>
<a id="trace-29915"></a>
<a id="trace-29926"></a>
<a id="trace-29931"></a>
<a id="trace-29944"></a>
<a id="trace-29947"></a>
<a id="trace-29962"></a>
<a id="trace-29964"></a>
<a id="trace-29977"></a>
<a id="trace-29989"></a>
<a id="trace-30054"></a>
<a id="trace-30064"></a>
<a id="trace-30080"></a>
<a id="trace-30082"></a>
<a id="trace-30092"></a>
<a id="trace-30107"></a>
<a id="trace-30179"></a>
<a id="trace-30199"></a>
<a id="trace-30203"></a>
<a id="trace-30216"></a>
<a id="trace-30218"></a>
<a id="trace-30226"></a>
<a id="trace-30228"></a>
<a id="trace-30237"></a>
<a id="trace-30298"></a>
<a id="trace-30304"></a>
<a id="trace-30322"></a>
<a id="trace-30328"></a>
- 316.30s–356.80s (×64), actor 5, squad 0 (trace 29249): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 315.00s, trace 29158. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.260002160491982, 'next_transition': 29264}.
<a id="trace-2879"></a>
- 357.50s–357.50s (×1), actor 5, squad 0 (events line 2879): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 357.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30361}.
<a id="trace-30348"></a>
- 357.50s–357.50s (×1), actor 5, squad 0 (trace 30348): renew committed intent (75 s lifetime). Knowledge: actor memory at 357.50s, trace 30348. Next observer evidence: {'until': 357.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30361}.
<a id="trace-30361"></a>
<a id="trace-30369"></a>
<a id="trace-30371"></a>
- 357.80s–358.80s (×3), actor 5, squad 0 (trace 30361): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 357.50s, trace 30348. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30369}.
<a id="trace-2890"></a>
- 358.85s–358.85s (×1), actor 5, squad 0 (events line 2890): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30372"></a>
- 358.85s–358.85s (×1), actor 5, squad 0 (trace 30372): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.212375 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 358.85s, trace 30372. Next observer evidence: {'until': 359.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30382}.
<a id="trace-30373"></a>
- 358.85s–358.85s (×1), actor 5, squad 0 (trace 30373): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.212375 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 358.85s, trace 30373. Next observer evidence: {'until': 359.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30382}.
<a id="trace-30382"></a>
<a id="trace-30384"></a>
- 359.30s–359.80s (×2), actor 5, squad 0 (trace 30382): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 358.85s, trace 30373. Next observer evidence: {'until': 359.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30384}.

## Net delivery

340 matched order/radio deliveries; 262 explicitly recorded losses; 4 unmatched orders (not classified as lost).
Matched delay: mean 0.439s; maximum 5.500s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3829: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3837: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 3839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 3840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3841: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3842: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3844: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3846: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3847: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3850: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 3851: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 3852: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 7178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 7179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 7180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 7181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 7182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 7183: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 7184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 7185: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 7186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 7187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 7188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 7189: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 7190: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 7191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 7192: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 7193: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 7194: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 7195: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 7196: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 7197: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 7198: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 7199: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 9768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 9769: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 9770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 9771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 9772: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 9773: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 9774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 9775: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 9776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 9777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 9778: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 9779: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 9780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 9781: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 9782: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 9783: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 9784: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 9785: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 9786: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 9787: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 9788: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 10650: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 10651: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 10652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 10653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 10654: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 10655: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 10656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 10657: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 10658: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 10659: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 10660: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 10661: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 10662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 10663: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 10664: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 10665: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 10666: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 10667: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 10668: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 10669: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 10670: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 11233: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 11234: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 11236: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 11237: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 11238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 11239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 11240: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 11241: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 11242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 11243: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 11244: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 11245: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 11246: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 11247: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 11248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 11249: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 11250: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 11251: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 11252: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 11253: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 11254: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 11255: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 11256: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 13694: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 13695: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 13696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 13697: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 13698: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 13699: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 13700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 13701: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 13702: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 13703: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 13704: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 13705: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 13706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 13707: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 13708: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 13709: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 13710: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 13711: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 13712: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 13713: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 13714: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 14565: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 14566: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 14567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 14568: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 14569: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 14570: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 14571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 14572: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 14573: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 14574: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 14575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 14576: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 14577: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 14578: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 14579: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 14580: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 14581: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 14582: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 14583: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 14825: estimate 12.33; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 14826: estimate 12.33; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 14874: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 14875: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 14876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 14877: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 14878: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 14879: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 14880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 14881: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 14882: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 14883: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 14884: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 14885: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 14886: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 14887: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 14888: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 14889: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 14890: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 14891: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 15104: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 15105: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 15106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 15107: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 15108: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 15109: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 15110: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 15111: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 15112: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 15113: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 15114: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 15115: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 15116: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 15117: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 15118: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 15119: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 15120: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 15121: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 15534: estimate 13.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 15535: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 15536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 15537: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 15538: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 15539: estimate 13.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 15540: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 15541: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 15542: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 15543: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 15544: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 15545: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 15546: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 15547: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 15548: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 15549: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 15550: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 15551: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 15778: estimate 13.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 15779: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 15780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 15781: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 15782: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 15783: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 15784: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 15785: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 15786: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 15787: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 15788: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 15789: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 15790: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 15791: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 15792: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 15793: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 15794: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 15795: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 16111: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 16112: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 16113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 16114: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 16115: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 16116: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 16117: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 16118: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 16119: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 16120: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 16121: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 16122: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 16123: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 16124: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 16125: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 16126: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 16127: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 16128: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 16387: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 16388: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 16389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 16390: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 16391: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 16392: estimate 13.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 16393: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 16394: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 16395: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 16396: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 16397: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 16398: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 16399: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 16400: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 16401: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 16402: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 16403: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 16404: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 16595: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 16596: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 16597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 16598: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 16599: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 16600: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 16601: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 16602: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 16603: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 16604: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 16605: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 16606: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 16607: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 16608: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 16609: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 16610: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 16611: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 16612: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 17066: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 17067: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 17068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 17069: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 17070: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 17071: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 17072: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 17073: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 17074: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 17075: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 17076: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 17077: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 17078: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 17079: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 17080: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 17081: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 17082: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 17083: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 17359: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 17360: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 17361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 17362: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 17363: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 17364: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 17365: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 17366: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 17367: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 17368: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 17369: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 17370: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 17371: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 17372: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 17373: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 17374: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 17375: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 17774: estimate 13.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 17775: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 17776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 17777: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 17778: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 17779: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 17780: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 17781: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 17782: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 17783: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 17784: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 17785: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 17786: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 17787: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 17788: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 17789: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 17790: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 18202: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 18203: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 18204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 18205: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 18206: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 18207: estimate 13.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 18208: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 18209: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 18210: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 18211: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 18212: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 18213: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 18214: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 18215: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 18216: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 18217: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 18218: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 18397: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 18429: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 18430: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 18431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 18432: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 18433: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 18434: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 18435: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 18436: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 18437: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 18438: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 18439: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 18440: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 18441: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 18442: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 18443: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 18444: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 18445: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 18769: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 18770: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 18771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 18772: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 18773: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 18774: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 18775: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 18776: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 18777: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 18778: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 18779: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 18780: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 18781: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 18782: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 18783: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 18784: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 18785: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 19162: estimate 13.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 19163: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 19164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 19165: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 19166: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 19167: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 19168: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 19169: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 19170: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 19171: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 19172: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 19173: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 19174: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 19175: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 19176: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 19177: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 19388: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 19389: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 19390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 19391: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 19392: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 19393: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 19394: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 19395: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 19396: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 19397: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 19398: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 19399: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 19400: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 19401: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 19402: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 19403: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 19833: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 19834: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 19835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 19836: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 19837: estimate 13.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 19838: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 19839: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 19840: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 19841: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 19842: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 19843: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 19844: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 19845: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 19846: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 19847: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 19848: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 20056: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 20057: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 20058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 20059: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 20060: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 20061: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 20062: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 20063: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 20064: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 20065: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 20066: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 20067: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 20068: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 20069: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 20070: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 20071: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 20463: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 20464: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 20465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 20466: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 20467: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 20468: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 20469: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 20470: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 20471: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 20472: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 20473: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 20474: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 20475: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 20476: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 20477: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 20478: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 20738: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 20739: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 20740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 20741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 20742: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 20743: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 20744: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 20745: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 20746: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 20747: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 20748: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 20749: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 20750: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 20751: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 20752: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 20753: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 20902: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 20903: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 20904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 20905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 20906: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 20907: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 20908: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 20909: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 20910: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 20911: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 20912: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 20913: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 20914: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 20915: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 20916: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 20917: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 21046: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 21047: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 21048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 21049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 21050: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 21051: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 21052: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 21053: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 21054: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 21055: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 21056: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 21057: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 21058: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 21059: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 21060: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 21061: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 21328: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 21329: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 21330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 21331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 21332: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 21333: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 21334: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 21335: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 21336: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 21337: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 21338: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 21339: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 21340: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 21341: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 21342: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 21343: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 21574: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 21575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 21576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 21577: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 21578: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 21579: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 21580: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 21581: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 21582: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 21583: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 21584: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 21585: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 21586: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 21587: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 21588: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 21824: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 21825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 21826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 21827: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 21828: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 21829: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 21830: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 21831: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 21832: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 21833: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 21834: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 21835: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 21836: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 21837: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 21838: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 21989: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 21990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 21991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 21992: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 21993: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 21994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 21995: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 21996: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 21997: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 21998: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 21999: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 22000: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 22001: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 22002: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 22003: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.05s leader 5, trace 22114: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 22147: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 22148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 22149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 22150: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 22151: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 22152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 22153: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 22154: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 22155: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 22156: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 22157: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 22158: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 22159: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 22160: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 22161: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 22514: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 22515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 22516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 22517: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 22518: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 22519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 22520: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 22521: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 22522: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 22523: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 22524: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 22525: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 22526: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 22527: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 22528: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 22717: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 22718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 22719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 22720: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 22721: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 22722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 22723: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 22724: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 22725: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 22726: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 22727: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 22728: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 22729: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 22730: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 22731: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 22884: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 22885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 22886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 22887: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 22888: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 22889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 22890: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 22891: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 22892: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 22893: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 22894: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 22895: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 22896: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 22897: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 22898: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 23028: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 23029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 23030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 23031: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 23032: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 23033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 23034: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 23035: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 23036: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 23037: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 23038: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 23039: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 23040: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 23041: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 23042: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 23169: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 23170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 23171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 23172: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 23173: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 23174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 23175: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 23176: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 23177: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 23178: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 23179: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 23180: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 23181: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 23182: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 23183: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.65s leader 5, trace 23234: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.65s leader 5, trace 23235: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 23298: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 23299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 23300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 23301: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 23302: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 23303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 23304: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 23305: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 23306: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 23307: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 23308: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 23309: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 23310: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 23311: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 23312: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 23659: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 23660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 23661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 23662: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 23663: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 23664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 23665: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 23666: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 23667: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 23668: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 23669: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 23670: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 23671: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 23672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 23673: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 219.50s leader 5, trace 23844: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 219.50s leader 5, trace 23845: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 23853: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 23854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 23855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 23856: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 23857: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 23858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 23859: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 23860: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 23861: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 23862: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 23863: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 23864: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 23865: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 23866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 23867: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 24047: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 24048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 24049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 24050: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 24051: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 24052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 24053: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 24054: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 24055: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 24056: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 24057: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 24058: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 24059: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 24060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 24061: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 24405: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 24406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 24407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 24408: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 24409: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 24410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 24411: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 24412: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 24413: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 24414: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 24415: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 24416: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 24417: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 24418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 24419: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 24636: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 24637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 24638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 24639: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 24640: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 24641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 24642: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 24643: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 24644: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 24645: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 24646: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 24647: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 24648: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 24649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 24650: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 24801: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 24802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 24803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 24804: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 24805: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 24806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 24807: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 24808: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 24809: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 24810: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 24811: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 24812: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 24813: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 24814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 24815: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 24981: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 24982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 24983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 24984: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 24985: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 24986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 24987: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 24988: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 24989: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 24990: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 24991: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 24992: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 24993: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 24994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 24995: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.10s leader 5, trace 25238: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.10s leader 5, trace 25239: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 25339: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 25340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 25341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 25342: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 25343: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 25344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 25345: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 25346: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 25347: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 25348: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 25349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 25350: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 25351: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 25352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 25353: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 25681: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 25682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 25683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 25684: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 25685: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 25686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 25687: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 25688: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 25689: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 25690: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 25691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 25692: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 25693: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 25694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 25695: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 25901: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 25902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 25903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 25904: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 25905: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 25906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 25907: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 25908: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 25909: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 25910: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 25911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 25912: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 25913: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 25914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 25915: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 25980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 25981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 26092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 26093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 26094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 26095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 26096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 26097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 26098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 26099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 26100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 26101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 26102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 26103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 26104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 26105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 26106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 26433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 26434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 26435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 26436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 26437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 26438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 26439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 26440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 26441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 26442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 26443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 26444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 26445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 26446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 26447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 26616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 26617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 26618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 26619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 26620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 26621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 26622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 26623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 26624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 26625: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 26626: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 26627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 26628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 26629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 26630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 26808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 26809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 26810: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 26811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 26812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 26813: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 26814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 26815: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 26816: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 26817: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 26818: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 26819: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 26820: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 26821: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 27231: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 27232: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 27233: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 27234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 27235: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 27236: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 27237: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 27238: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 27239: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 27240: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 27241: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 27242: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 27243: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 27244: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 288.50s leader 5, trace 27789: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 288.50s leader 5, trace 27790: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 27830: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 27831: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 27832: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 27833: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 27834: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 27835: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 27836: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 27837: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 27838: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 27839: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 27840: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 27841: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 27842: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 28264: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 28265: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 28266: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 28267: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 28268: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 28269: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 28270: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 28271: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 28272: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 28273: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 28274: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 28275: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 28276: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 28631: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 28632: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 28633: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 28634: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 28635: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 28636: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 28637: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 28638: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 28639: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 28640: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 28641: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 28642: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 28643: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 28818: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 28819: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 28820: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 28821: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 28822: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 28823: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 28824: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 28825: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 28826: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 28827: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 28828: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 28829: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 28982: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 28983: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 28984: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 28985: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 28986: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 28987: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 28988: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 28989: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 28990: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 28991: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 28992: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 28993: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 313.85s leader 5, trace 29133: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 29157: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 29158: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 29159: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 29160: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 29161: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 29162: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 29163: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 29164: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 29165: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 29166: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 29167: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 29168: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 29318: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 29319: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 29320: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 29321: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 29322: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 29323: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 29324: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 29325: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 29326: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 29327: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 29328: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 29329: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 29467: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 29468: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 29469: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 29470: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 29471: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 29472: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 29473: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 29474: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 29475: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 29476: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 29477: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 29478: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 29584: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 29585: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 29586: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 29587: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 29588: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 29589: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 29590: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 29591: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 29592: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 29593: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 29594: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 29595: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 29714: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 29715: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 29716: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 29717: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 29718: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 29719: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 29720: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 29721: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 29722: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 29723: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 29724: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 29725: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 29851: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 29852: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 29853: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 29854: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 29855: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 29856: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 29857: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 29858: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 29859: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 29860: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 29861: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 29862: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 29991: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 29992: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 29993: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 29994: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 29995: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 29996: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 29997: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 29998: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 29999: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 30000: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 30001: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 30002: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 30111: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 30112: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 30113: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 30114: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 30115: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 30116: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 30117: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 30118: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 30119: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 30120: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 30121: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 30122: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 30240: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 30241: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 30242: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 30243: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 30244: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 30245: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 30246: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 30247: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 30248: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 30249: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 30250: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 30251: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 357.50s leader 5, trace 30348: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.85s leader 5, trace 30372: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.85s leader 5, trace 30373: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 30385: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 30386: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 30387: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 30388: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 30389: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 30390: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 30391: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 30392: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 30393: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 30394: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 30395: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 30396: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bram incapacitated
- 1: Vale incapacitated
- 1: Bren incapacitated
- 1: Cole incapacitated
- 1: Dane killed in action
- 1: Ellis incapacitated
- 1: Voss incapacitated
- 1: Holt incapacitated
- 1: Soren incapacitated
- 1: Ash killed in action
- 1: Reed incapacitated
- 1: Tern incapacitated

## Outcome attribution

- 358.85s, evidence 2890: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 358.85s, evidence 30372: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.212375 retreat threshold=0.220000 initiative=requires intent. Following evidence: {'until': 359.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30382}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 358.85s, evidence 30373: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.212375 retreat threshold=0.220000 initiative=requires intent. Following evidence: {'until': 359.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30382}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
