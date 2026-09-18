# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/16/107/good-azure/battle-107-1789673988931283316`

## Battle summary

**Ember** · 360 s · 285 shots.

### Turning points

- 26.4s, squad 4: contact (events line 289). First recorded contact.
- 45.3s, squad 0: help call ([trace 8084](#trace-8084)). No completion observed before termination.
- 53.8s, squad 0: help call ([trace 9763](#trace-9763)). No completion observed before termination.
- 54.8s, squad 0: withdrawal ([trace 9798](#trace-9798)). 133.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 139.6s, squad 0: withdrawal ([trace 13736](#trace-13736)). 189.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 195.2s, squad 0: withdrawal ([trace 15670](#trace-15670)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 59 shots, 5/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 226 shots, 2/8 lost.

### Decisions and attribution

At 54.8s, squad 0 chose broke contact ([trace 9798](#trace-9798)), followed by 1 shots and 0 own casualties; estimate 9.7 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 530](#trace-530)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 529](#trace-529)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450054772374603, 'next_transition': 543}.
- 31.1s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.012177 retreat threshold=0.500000 initiative=delegated ([trace 4018](#trace-4018)). Following evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17674842391804615, 'next_transition': 4025}.

### Communication

132 matched deliveries (mean 0.46s, max 2.35s); 251 explicit drops; 5 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 26.45s, squad 4, contact, evidence events line 289: First recorded contact; .
- 45.30s, squad 0, help call, evidence 8084: NeedSupport; No completion observed before termination.
- 53.80s, squad 0, help call, evidence 9763: NeedSupport; No completion observed before termination.
- 54.75s, squad 0, withdrawal, evidence 9798: BreakContact: believed ratio at least two without superiority; 133.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 139.55s, squad 0, withdrawal, evidence 13736: Withdraw to received rally; 189.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 195.20s, squad 0, withdrawal, evidence 15670: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791567613047233, 'next_transition': 444}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791567613047233, 'next_transition': 444}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791567613047233, 'next_transition': 444}.
<a id="trace-444"></a>
<a id="trace-464"></a>
<a id="trace-485"></a>
<a id="trace-507"></a>
<a id="trace-521"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 444): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599778680181817, 'next_transition': 464}.
<a id="trace-79"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 79): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450054772374603, 'next_transition': 543}.
<a id="trace-529"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 529): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 529. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450054772374603, 'next_transition': 543}.
<a id="trace-530"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 530): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 530. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450054772374603, 'next_transition': 543}.
<a id="trace-543"></a>
<a id="trace-565"></a>
<a id="trace-642"></a>
<a id="trace-659"></a>
<a id="trace-681"></a>
<a id="trace-704"></a>
<a id="trace-720"></a>
<a id="trace-744"></a>
<a id="trace-770"></a>
<a id="trace-792"></a>
<a id="trace-811"></a>
<a id="trace-820"></a>
<a id="trace-905"></a>
<a id="trace-915"></a>
<a id="trace-929"></a>
<a id="trace-945"></a>
<a id="trace-968"></a>
<a id="trace-983"></a>
- 4.20s–12.70s (×18), actor 5, squad 0 (trace 543): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 530. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449955130226991, 'next_transition': 565}.
<a id="trace-706"></a>
<a id="trace-772"></a>
<a id="trace-794"></a>
<a id="trace-822"></a>
<a id="trace-907"></a>
<a id="trace-917"></a>
<a id="trace-931"></a>
<a id="trace-970"></a>
<a id="trace-1521"></a>
<a id="trace-1538"></a>
<a id="trace-1646"></a>
<a id="trace-1693"></a>
<a id="trace-1707"></a>
<a id="trace-1729"></a>
<a id="trace-1744"></a>
<a id="trace-1776"></a>
<a id="trace-1857"></a>
<a id="trace-1877"></a>
<a id="trace-1907"></a>
<a id="trace-1932"></a>
<a id="trace-1941"></a>
<a id="trace-1955"></a>
<a id="trace-2080"></a>
<a id="trace-2099"></a>
<a id="trace-2120"></a>
<a id="trace-2198"></a>
<a id="trace-2210"></a>
<a id="trace-3029"></a>
<a id="trace-3044"></a>
<a id="trace-3851"></a>
<a id="trace-3884"></a>
<a id="trace-3901"></a>
<a id="trace-3918"></a>
<a id="trace-4006"></a>
<a id="trace-4014"></a>
<a id="trace-4027"></a>
<a id="trace-4033"></a>
<a id="trace-4046"></a>
<a id="trace-4066"></a>
<a id="trace-4076"></a>
<a id="trace-4087"></a>
<a id="trace-4104"></a>
<a id="trace-4189"></a>
<a id="trace-4204"></a>
<a id="trace-4216"></a>
<a id="trace-4233"></a>
<a id="trace-4261"></a>
<a id="trace-4865"></a>
<a id="trace-4873"></a>
<a id="trace-4975"></a>
<a id="trace-5017"></a>
<a id="trace-5037"></a>
<a id="trace-5063"></a>
<a id="trace-7799"></a>
<a id="trace-7936"></a>
<a id="trace-7958"></a>
<a id="trace-7981"></a>
<a id="trace-8081"></a>
<a id="trace-8686"></a>
<a id="trace-8713"></a>
<a id="trace-8738"></a>
<a id="trace-8765"></a>
<a id="trace-8796"></a>
<a id="trace-8832"></a>
<a id="trace-8853"></a>
<a id="trace-8955"></a>
<a id="trace-8982"></a>
<a id="trace-9640"></a>
<a id="trace-9670"></a>
<a id="trace-9695"></a>
<a id="trace-9711"></a>
<a id="trace-9738"></a>
<a id="trace-9761"></a>
<a id="trace-9797"></a>
<a id="trace-10304"></a>
<a id="trace-10322"></a>
<a id="trace-10354"></a>
<a id="trace-10363"></a>
<a id="trace-10371"></a>
<a id="trace-10396"></a>
<a id="trace-10411"></a>
<a id="trace-10416"></a>
<a id="trace-10492"></a>
<a id="trace-10503"></a>
<a id="trace-10513"></a>
<a id="trace-10530"></a>
<a id="trace-10540"></a>
<a id="trace-10550"></a>
<a id="trace-10564"></a>
<a id="trace-10643"></a>
<a id="trace-10646"></a>
<a id="trace-10655"></a>
<a id="trace-10662"></a>
<a id="trace-10667"></a>
<a id="trace-10672"></a>
<a id="trace-10688"></a>
<a id="trace-10703"></a>
<a id="trace-10711"></a>
<a id="trace-10787"></a>
<a id="trace-10793"></a>
<a id="trace-10808"></a>
<a id="trace-10817"></a>
<a id="trace-10825"></a>
<a id="trace-10832"></a>
<a id="trace-10852"></a>
<a id="trace-10860"></a>
<a id="trace-10864"></a>
<a id="trace-10932"></a>
<a id="trace-10943"></a>
<a id="trace-10968"></a>
<a id="trace-10978"></a>
<a id="trace-10998"></a>
<a id="trace-11006"></a>
<a id="trace-11029"></a>
<a id="trace-11216"></a>
<a id="trace-11257"></a>
<a id="trace-11291"></a>
<a id="trace-11319"></a>
<a id="trace-11335"></a>
<a id="trace-11402"></a>
<a id="trace-11486"></a>
<a id="trace-11512"></a>
<a id="trace-11542"></a>
<a id="trace-11574"></a>
<a id="trace-11604"></a>
<a id="trace-11709"></a>
<a id="trace-11743"></a>
<a id="trace-11834"></a>
<a id="trace-11873"></a>
<a id="trace-11901"></a>
<a id="trace-11935"></a>
<a id="trace-11964"></a>
<a id="trace-12004"></a>
<a id="trace-12041"></a>
<a id="trace-12076"></a>
<a id="trace-12094"></a>
<a id="trace-12191"></a>
<a id="trace-12205"></a>
<a id="trace-12214"></a>
<a id="trace-12222"></a>
<a id="trace-12227"></a>
<a id="trace-12237"></a>
<a id="trace-12243"></a>
<a id="trace-12253"></a>
<a id="trace-12258"></a>
<a id="trace-12330"></a>
<a id="trace-12357"></a>
<a id="trace-12367"></a>
<a id="trace-12373"></a>
<a id="trace-12384"></a>
<a id="trace-12459"></a>
<a id="trace-12661"></a>
<a id="trace-12673"></a>
<a id="trace-12685"></a>
<a id="trace-12693"></a>
<a id="trace-12707"></a>
<a id="trace-12724"></a>
<a id="trace-12737"></a>
<a id="trace-12746"></a>
<a id="trace-12828"></a>
<a id="trace-12835"></a>
<a id="trace-12842"></a>
<a id="trace-12852"></a>
<a id="trace-12860"></a>
<a id="trace-12871"></a>
<a id="trace-12942"></a>
<a id="trace-12959"></a>
<a id="trace-12966"></a>
<a id="trace-12974"></a>
<a id="trace-12983"></a>
<a id="trace-12990"></a>
<a id="trace-13000"></a>
<a id="trace-13007"></a>
<a id="trace-13072"></a>
<a id="trace-13075"></a>
<a id="trace-13090"></a>
<a id="trace-13098"></a>
<a id="trace-13101"></a>
<a id="trace-13110"></a>
<a id="trace-13192"></a>
<a id="trace-13200"></a>
<a id="trace-13213"></a>
<a id="trace-13282"></a>
<a id="trace-13286"></a>
<a id="trace-13300"></a>
<a id="trace-13310"></a>
<a id="trace-13318"></a>
<a id="trace-13330"></a>
<a id="trace-13346"></a>
<a id="trace-13358"></a>
<a id="trace-13420"></a>
<a id="trace-13424"></a>
<a id="trace-13432"></a>
<a id="trace-13437"></a>
<a id="trace-13442"></a>
<a id="trace-13447"></a>
<a id="trace-13456"></a>
<a id="trace-13467"></a>
<a id="trace-13477"></a>
<a id="trace-13645"></a>
<a id="trace-13705"></a>
<a id="trace-13713"></a>
<a id="trace-13734"></a>
<a id="trace-13814"></a>
<a id="trace-13891"></a>
<a id="trace-13912"></a>
<a id="trace-13925"></a>
<a id="trace-13930"></a>
<a id="trace-13944"></a>
<a id="trace-13956"></a>
<a id="trace-13960"></a>
<a id="trace-14023"></a>
<a id="trace-14029"></a>
<a id="trace-14039"></a>
<a id="trace-14045"></a>
<a id="trace-14050"></a>
<a id="trace-14063"></a>
<a id="trace-14069"></a>
<a id="trace-14078"></a>
<a id="trace-14090"></a>
<a id="trace-14152"></a>
<a id="trace-14168"></a>
<a id="trace-14172"></a>
<a id="trace-14284"></a>
<a id="trace-14291"></a>
<a id="trace-14313"></a>
<a id="trace-14335"></a>
<a id="trace-14398"></a>
<a id="trace-14406"></a>
<a id="trace-14421"></a>
<a id="trace-14427"></a>
<a id="trace-14433"></a>
<a id="trace-14438"></a>
<a id="trace-14449"></a>
<a id="trace-14457"></a>
<a id="trace-14466"></a>
<a id="trace-14535"></a>
<a id="trace-14540"></a>
<a id="trace-14551"></a>
<a id="trace-14559"></a>
<a id="trace-14567"></a>
<a id="trace-14577"></a>
<a id="trace-14588"></a>
<a id="trace-14595"></a>
<a id="trace-14603"></a>
<a id="trace-14608"></a>
<a id="trace-14670"></a>
<a id="trace-14684"></a>
<a id="trace-14688"></a>
<a id="trace-14761"></a>
<a id="trace-14778"></a>
<a id="trace-14786"></a>
<a id="trace-14801"></a>
<a id="trace-14811"></a>
<a id="trace-14875"></a>
<a id="trace-14881"></a>
<a id="trace-14893"></a>
<a id="trace-14896"></a>
<a id="trace-14903"></a>
<a id="trace-14908"></a>
<a id="trace-14919"></a>
<a id="trace-14924"></a>
<a id="trace-14933"></a>
<a id="trace-14936"></a>
<a id="trace-15004"></a>
<a id="trace-15018"></a>
<a id="trace-15021"></a>
<a id="trace-15033"></a>
<a id="trace-15036"></a>
<a id="trace-15156"></a>
<a id="trace-15181"></a>
<a id="trace-15243"></a>
<a id="trace-15250"></a>
<a id="trace-15266"></a>
<a id="trace-15279"></a>
<a id="trace-15287"></a>
<a id="trace-15296"></a>
<a id="trace-15305"></a>
<a id="trace-15316"></a>
<a id="trace-15323"></a>
<a id="trace-15387"></a>
<a id="trace-15392"></a>
<a id="trace-15404"></a>
<a id="trace-15408"></a>
<a id="trace-15415"></a>
<a id="trace-15421"></a>
<a id="trace-15430"></a>
<a id="trace-15458"></a>
<a id="trace-15462"></a>
<a id="trace-15532"></a>
<a id="trace-15543"></a>
<a id="trace-15555"></a>
<a id="trace-15565"></a>
<a id="trace-15574"></a>
<a id="trace-15581"></a>
<a id="trace-15592"></a>
<a id="trace-15596"></a>
<a id="trace-15607"></a>
<a id="trace-15609"></a>
<a id="trace-15730"></a>
<a id="trace-15737"></a>
<a id="trace-15751"></a>
<a id="trace-15767"></a>
<a id="trace-15776"></a>
<a id="trace-15805"></a>
<a id="trace-15808"></a>
<a id="trace-15871"></a>
<a id="trace-15876"></a>
<a id="trace-15886"></a>
<a id="trace-15893"></a>
<a id="trace-15903"></a>
<a id="trace-15906"></a>
<a id="trace-15914"></a>
<a id="trace-15920"></a>
<a id="trace-15929"></a>
<a id="trace-15999"></a>
<a id="trace-16002"></a>
<a id="trace-16014"></a>
<a id="trace-16019"></a>
<a id="trace-16148"></a>
<a id="trace-16160"></a>
<a id="trace-16171"></a>
<a id="trace-16179"></a>
<a id="trace-16247"></a>
<a id="trace-16251"></a>
<a id="trace-16265"></a>
<a id="trace-16270"></a>
<a id="trace-16278"></a>
<a id="trace-16293"></a>
<a id="trace-16301"></a>
<a id="trace-16312"></a>
<a id="trace-16316"></a>
<a id="trace-16382"></a>
<a id="trace-16401"></a>
<a id="trace-16405"></a>
<a id="trace-16412"></a>
<a id="trace-16426"></a>
<a id="trace-16435"></a>
<a id="trace-16446"></a>
<a id="trace-16449"></a>
<a id="trace-16512"></a>
<a id="trace-16532"></a>
<a id="trace-16555"></a>
<a id="trace-16561"></a>
<a id="trace-16581"></a>
<a id="trace-16593"></a>
<a id="trace-16656"></a>
<a id="trace-16663"></a>
<a id="trace-16682"></a>
<a id="trace-16684"></a>
<a id="trace-16693"></a>
<a id="trace-16701"></a>
<a id="trace-16708"></a>
<a id="trace-16711"></a>
<a id="trace-16775"></a>
<a id="trace-16784"></a>
<a id="trace-16787"></a>
<a id="trace-16799"></a>
<a id="trace-16802"></a>
<a id="trace-16809"></a>
<a id="trace-16821"></a>
<a id="trace-16826"></a>
<a id="trace-16892"></a>
<a id="trace-16894"></a>
<a id="trace-16902"></a>
<a id="trace-16904"></a>
<a id="trace-16912"></a>
<a id="trace-16915"></a>
<a id="trace-16923"></a>
<a id="trace-16928"></a>
<a id="trace-16940"></a>
<a id="trace-17006"></a>
<a id="trace-17008"></a>
<a id="trace-17017"></a>
<a id="trace-17019"></a>
<a id="trace-17037"></a>
<a id="trace-17041"></a>
<a id="trace-17050"></a>
<a id="trace-17053"></a>
<a id="trace-17116"></a>
<a id="trace-17121"></a>
<a id="trace-17131"></a>
<a id="trace-17134"></a>
<a id="trace-17143"></a>
<a id="trace-17145"></a>
<a id="trace-17154"></a>
<a id="trace-17162"></a>
<a id="trace-17171"></a>
<a id="trace-17233"></a>
<a id="trace-17236"></a>
<a id="trace-17247"></a>
<a id="trace-17256"></a>
<a id="trace-17258"></a>
<a id="trace-17276"></a>
<a id="trace-17283"></a>
<a id="trace-17353"></a>
<a id="trace-17355"></a>
<a id="trace-17363"></a>
<a id="trace-17365"></a>
<a id="trace-17373"></a>
<a id="trace-17388"></a>
<a id="trace-17398"></a>
<a id="trace-17465"></a>
<a id="trace-17467"></a>
<a id="trace-17482"></a>
<a id="trace-17490"></a>
<a id="trace-17497"></a>
<a id="trace-17502"></a>
<a id="trace-17512"></a>
<a id="trace-17577"></a>
<a id="trace-17592"></a>
<a id="trace-17600"></a>
<a id="trace-17617"></a>
<a id="trace-17624"></a>
<a id="trace-17627"></a>
<a id="trace-17690"></a>
<a id="trace-17692"></a>
<a id="trace-17702"></a>
<a id="trace-17712"></a>
<a id="trace-17723"></a>
<a id="trace-17737"></a>
<a id="trace-17805"></a>
<a id="trace-17807"></a>
<a id="trace-17816"></a>
<a id="trace-17824"></a>
<a id="trace-17826"></a>
<a id="trace-17839"></a>
<a id="trace-17849"></a>
<a id="trace-17915"></a>
<a id="trace-17928"></a>
<a id="trace-17934"></a>
<a id="trace-17941"></a>
<a id="trace-17949"></a>
<a id="trace-17960"></a>
<a id="trace-17964"></a>
<a id="trace-18028"></a>
<a id="trace-18038"></a>
<a id="trace-18048"></a>
<a id="trace-18056"></a>
<a id="trace-18067"></a>
<a id="trace-18071"></a>
<a id="trace-18078"></a>
<a id="trace-18081"></a>
<a id="trace-18144"></a>
<a id="trace-18146"></a>
<a id="trace-18155"></a>
<a id="trace-18159"></a>
<a id="trace-18166"></a>
<a id="trace-18169"></a>
<a id="trace-18178"></a>
<a id="trace-18183"></a>
<a id="trace-18194"></a>
<a id="trace-18202"></a>
<a id="trace-18264"></a>
<a id="trace-18273"></a>
<a id="trace-18276"></a>
<a id="trace-18283"></a>
<a id="trace-18286"></a>
<a id="trace-18295"></a>
<a id="trace-18299"></a>
<a id="trace-18306"></a>
<a id="trace-18373"></a>
<a id="trace-18399"></a>
<a id="trace-18401"></a>
<a id="trace-18409"></a>
<a id="trace-18420"></a>
<a id="trace-18423"></a>
<a id="trace-18487"></a>
<a id="trace-18498"></a>
<a id="trace-18500"></a>
<a id="trace-18510"></a>
<a id="trace-18512"></a>
<a id="trace-18536"></a>
<a id="trace-18539"></a>
<a id="trace-18603"></a>
<a id="trace-18612"></a>
<a id="trace-18616"></a>
<a id="trace-18624"></a>
<a id="trace-18633"></a>
<a id="trace-18638"></a>
<a id="trace-18647"></a>
<a id="trace-18654"></a>
<a id="trace-18722"></a>
<a id="trace-18724"></a>
<a id="trace-18732"></a>
<a id="trace-18735"></a>
<a id="trace-18742"></a>
<a id="trace-18753"></a>
<a id="trace-18767"></a>
<a id="trace-18830"></a>
<a id="trace-18834"></a>
<a id="trace-18846"></a>
<a id="trace-18851"></a>
<a id="trace-18860"></a>
<a id="trace-18868"></a>
<a id="trace-18872"></a>
<a id="trace-18884"></a>
<a id="trace-18947"></a>
<a id="trace-18967"></a>
<a id="trace-18973"></a>
<a id="trace-18980"></a>
<a id="trace-18985"></a>
<a id="trace-18998"></a>
<a id="trace-19060"></a>
<a id="trace-19063"></a>
<a id="trace-19074"></a>
<a id="trace-19081"></a>
<a id="trace-19085"></a>
<a id="trace-19092"></a>
<a id="trace-19098"></a>
<a id="trace-19109"></a>
<a id="trace-19174"></a>
<a id="trace-19187"></a>
<a id="trace-19190"></a>
<a id="trace-19207"></a>
<a id="trace-19211"></a>
<a id="trace-19220"></a>
<a id="trace-19286"></a>
<a id="trace-19288"></a>
<a id="trace-19300"></a>
<a id="trace-19303"></a>
<a id="trace-19310"></a>
<a id="trace-19323"></a>
<a id="trace-19327"></a>
<a id="trace-19335"></a>
<a id="trace-19340"></a>
<a id="trace-19402"></a>
<a id="trace-19413"></a>
<a id="trace-19415"></a>
<a id="trace-19430"></a>
<a id="trace-19437"></a>
<a id="trace-19450"></a>
<a id="trace-19455"></a>
<a id="trace-19517"></a>
<a id="trace-19520"></a>
<a id="trace-19530"></a>
<a id="trace-19532"></a>
<a id="trace-19539"></a>
<a id="trace-19543"></a>
<a id="trace-19550"></a>
<a id="trace-19566"></a>
<a id="trace-19631"></a>
<a id="trace-19633"></a>
<a id="trace-19643"></a>
<a id="trace-19664"></a>
<a id="trace-19668"></a>
<a id="trace-19677"></a>
<a id="trace-19680"></a>
- 6.70s–359.80s (×548), actor 37, squad 4 (trace 706): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 585. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 772}.
<a id="trace-987"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 987): traveling overwatch. Knowledge: actor memory at 10.00s, trace 827. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725097581267499, 'next_transition': 1468}.
<a id="trace-988"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 988): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 827. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725097581267499, 'next_transition': 1468}.
<a id="trace-1468"></a>
<a id="trace-1488"></a>
<a id="trace-1519"></a>
<a id="trace-1536"></a>
<a id="trace-1615"></a>
<a id="trace-1644"></a>
<a id="trace-1665"></a>
<a id="trace-1681"></a>
<a id="trace-1691"></a>
<a id="trace-1705"></a>
<a id="trace-1727"></a>
<a id="trace-1742"></a>
<a id="trace-1761"></a>
<a id="trace-1774"></a>
<a id="trace-1855"></a>
<a id="trace-1875"></a>
<a id="trace-1897"></a>
<a id="trace-1905"></a>
<a id="trace-1930"></a>
<a id="trace-1939"></a>
<a id="trace-1953"></a>
- 13.20s–23.25s (×21), actor 5, squad 0 (trace 1468): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 832. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499814012347793, 'next_transition': 1488}.
<a id="trace-1956"></a>
- 23.25s–23.25s (×1), actor 0, squad 0 (trace 1956): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1782. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2078}.
<a id="trace-2078"></a>
<a id="trace-2097"></a>
<a id="trace-2118"></a>
<a id="trace-2196"></a>
<a id="trace-2208"></a>
<a id="trace-2240"></a>
<a id="trace-2249"></a>
- 23.75s–26.75s (×7), actor 5, squad 0 (trace 2078): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1787. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13781237764166904, 'next_transition': 2097}.
<a id="trace-2266"></a>
- 27.10s–27.10s (×1), actor 0, squad 0 (trace 2266): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 2123. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23167533999860002, 'next_transition': 3027}.
<a id="trace-2267"></a>
- 27.10s–27.10s (×1), actor 0, squad 0 (trace 2267): bounding overwatch. Knowledge: actor memory at 25.00s, trace 2123. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23167533999860002, 'next_transition': 3027}.
<a id="trace-2268"></a>
- 27.10s–27.10s (×1), actor 0, squad 0 (trace 2268): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 2123. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23167533999860002, 'next_transition': 3027}.
<a id="trace-3027"></a>
<a id="trace-3042"></a>
- 27.25s–27.75s (×2), actor 5, squad 0 (trace 3027): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2128. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4506994882860216, 'next_transition': 3042}.
<a id="trace-3066"></a>
- 28.10s–28.10s (×1), actor 0, squad 0 (trace 3066): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 2123. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21946158480474273, 'next_transition': 3849}.
<a id="trace-3849"></a>
<a id="trace-3882"></a>
<a id="trace-3899"></a>
<a id="trace-3916"></a>
<a id="trace-4004"></a>
<a id="trace-4012"></a>
- 28.25s–30.75s (×6), actor 5, squad 0 (trace 3849): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2128. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.4297404553722435, 'next_transition': 3882}.
<a id="trace-383"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (events line 383): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4018"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 4018): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.012177 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 4018. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17674842391804615, 'next_transition': 4025}.
<a id="trace-4019"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 4019): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.012177 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 4019. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17674842391804615, 'next_transition': 4025}.
<a id="trace-4025"></a>
<a id="trace-4031"></a>
<a id="trace-4044"></a>
- 31.25s–32.25s (×3), actor 5, squad 0 (trace 4025): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 4019. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3604827764438299, 'next_transition': 4031}.
<a id="trace-4050"></a>
- 32.50s–32.50s (×1), actor 1, squad 0 (trace 4050): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 3928. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19093819577401414, 'next_transition': 4064}.
<a id="trace-4064"></a>
<a id="trace-4074"></a>
<a id="trace-4085"></a>
<a id="trace-4102"></a>
<a id="trace-4110"></a>
<a id="trace-4181"></a>
<a id="trace-4187"></a>
<a id="trace-4202"></a>
<a id="trace-4214"></a>
<a id="trace-4231"></a>
<a id="trace-4241"></a>
<a id="trace-4259"></a>
- 32.75s–38.25s (×12), actor 5, squad 0 (trace 4064): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 4019. Next observer evidence: {'until': 33.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7629485128893124, 'next_transition': 4074}.
<a id="trace-4267"></a>
- 38.60s–38.60s (×1), actor 1, squad 0 (trace 4267): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 4113. Next observer evidence: None.
<a id="trace-4863"></a>
<a id="trace-4871"></a>
<a id="trace-4889"></a>
<a id="trace-4973"></a>
<a id="trace-4990"></a>
<a id="trace-5015"></a>
<a id="trace-5035"></a>
- 38.75s–41.75s (×7), actor 5, squad 0 (trace 4863): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4117. Next observer evidence: {'until': 39.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4871}.
<a id="trace-5055"></a>
- 42.20s–42.20s (×1), actor 1, squad 0 (trace 5055): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 4896. Next observer evidence: None.
<a id="trace-5061"></a>
- 42.25s–42.25s (×1), actor 5, squad 0 (trace 5061): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4900. Next observer evidence: {'until': 42.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.06479999124464535, 'next_transition': 5068}.
<a id="trace-5068"></a>
- 42.45s–42.45s (×1), actor 1, squad 0 (trace 5068): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 4896. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06480008511269297, 'next_transition': 7797}.
<a id="trace-7084"></a>
- 42.45s–42.45s (×1), actor 1, squad 0 (trace 7084): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 4896. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06480008511269297, 'next_transition': 7797}.
<a id="trace-7085"></a>
- 42.45s–42.45s (×1), actor 1, squad 0 (trace 7085): MoveTactically. Knowledge: actor memory at 40.00s, trace 4896. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06480008511269297, 'next_transition': 7797}.
<a id="trace-7086"></a>
- 42.45s–42.45s (×1), actor 1, squad 0 (trace 7086): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 4896. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06480008511269297, 'next_transition': 7797}.
<a id="trace-7797"></a>
- 42.75s–42.75s (×1), actor 5, squad 0 (trace 7797): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4900. Next observer evidence: {'until': 43.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2081362771915831, 'next_transition': 7815}.
<a id="trace-7815"></a>
- 43.20s–43.20s (×1), actor 1, squad 0 (trace 7815): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 40.00s, trace 4896. Next observer evidence: None.
<a id="trace-7934"></a>
<a id="trace-7956"></a>
<a id="trace-7979"></a>
<a id="trace-8000"></a>
<a id="trace-8079"></a>
- 43.25s–45.25s (×5), actor 5, squad 0 (trace 7934): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4900. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22500120441182395, 'next_transition': 7956}.
<a id="trace-8082"></a>
- 45.30s–45.30s (×1), actor 1, squad 0 (trace 8082): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 45.00s, trace 8002. Next observer evidence: {'until': 45.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4495109267978636, 'next_transition': 8103}.
<a id="trace-8084"></a>
- 45.30s–45.30s (×1), actor 1, squad 0 (trace 8084): NeedSupport. Knowledge: actor memory at 45.00s, trace 8002. Next observer evidence: {'until': 45.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4495109267978636, 'next_transition': 8103}.
<a id="trace-8103"></a>
- 45.55s–45.55s (×1), actor 1, squad 0 (trace 8103): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 8002. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4011339835389071, 'next_transition': 8684}.
<a id="trace-8108"></a>
- 45.55s–45.55s (×1), actor 1, squad 0 (trace 8108): MoveTactically. Knowledge: actor memory at 45.00s, trace 8002. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4011339835389071, 'next_transition': 8684}.
<a id="trace-8109"></a>
- 45.55s–45.55s (×1), actor 1, squad 0 (trace 8109): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 45.00s, trace 8002. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4011339835389071, 'next_transition': 8684}.
<a id="trace-8684"></a>
<a id="trace-8711"></a>
<a id="trace-8736"></a>
<a id="trace-8763"></a>
- 45.75s–47.25s (×4), actor 5, squad 0 (trace 8684): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 8005. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4676959841586452, 'next_transition': 8711}.
<a id="trace-8785"></a>
- 47.55s–47.55s (×1), actor 5, squad 0 (trace 8785): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 47.55s, trace 8785. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4055824449143955, 'next_transition': 8794}.
<a id="trace-8794"></a>
<a id="trace-8813"></a>
<a id="trace-8850"></a>
<a id="trace-8952"></a>
- 47.75s–50.25s (×4), actor 5, squad 0 (trace 8794): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 47.55s, trace 8785. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.2156977607806816, 'next_transition': 8813}.
<a id="trace-8999"></a>
- 51.05s–51.05s (×1), actor 1, squad 0 (trace 8999): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 8888. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1285536648809649, 'next_transition': 9637}.
<a id="trace-9000"></a>
- 51.05s–51.05s (×1), actor 1, squad 0 (trace 9000): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 8888. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1285536648809649, 'next_transition': 9637}.
<a id="trace-9637"></a>
<a id="trace-9692"></a>
<a id="trace-9735"></a>
- 51.25s–53.25s (×3), actor 5, squad 0 (trace 9637): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 8891. Next observer evidence: {'until': 52.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8143025078664387, 'next_transition': 9692}.
<a id="trace-9763"></a>
- 53.80s–53.80s (×1), actor 1, squad 0 (trace 9763): NeedSupport. Knowledge: actor memory at 50.00s, trace 8888. Next observer evidence: {'until': 54.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9168752041968449, 'next_transition': 9781}.
<a id="trace-9781"></a>
- 54.25s–54.25s (×1), actor 5, squad 0 (trace 9781): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 8891. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300016718209598, 'next_transition': 9798}.
<a id="trace-9798"></a>
- 54.75s–54.75s (×1), actor 1, squad 0 (trace 9798): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 8888. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6951768349842828, 'next_transition': 10301}.
<a id="trace-9799"></a>
- 54.75s–54.75s (×1), actor 1, squad 0 (trace 9799): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 8888. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6951768349842828, 'next_transition': 10301}.
<a id="trace-10301"></a>
<a id="trace-10339"></a>
<a id="trace-10360"></a>
<a id="trace-10388"></a>
<a id="trace-10408"></a>
<a id="trace-10484"></a>
<a id="trace-10500"></a>
<a id="trace-10520"></a>
<a id="trace-10537"></a>
<a id="trace-10561"></a>
<a id="trace-10640"></a>
<a id="trace-10652"></a>
<a id="trace-10664"></a>
<a id="trace-10680"></a>
- 55.25s–68.25s (×14), actor 5, squad 0 (trace 10301): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 10232. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8901512398780683, 'next_transition': 10339}.
<a id="trace-10695"></a>
- 69.20s–69.20s (×1), actor 1, squad 0 (trace 10695): support established: element delivered fire on threat area. Knowledge: actor memory at 65.00s, trace 10574. Next observer evidence: None.
<a id="trace-10696"></a>
- 69.20s–69.20s (×1), actor 1, squad 0 (trace 10696): Fixing. Knowledge: actor memory at 65.00s, trace 10574. Next observer evidence: None.
<a id="trace-10700"></a>
<a id="trace-10784"></a>
<a id="trace-10805"></a>
<a id="trace-10822"></a>
<a id="trace-10837"></a>
<a id="trace-10857"></a>
<a id="trace-10929"></a>
<a id="trace-10955"></a>
<a id="trace-10975"></a>
<a id="trace-10995"></a>
<a id="trace-11015"></a>
<a id="trace-11112"></a>
<a id="trace-11176"></a>
<a id="trace-11254"></a>
<a id="trace-11316"></a>
<a id="trace-11375"></a>
- 69.25s–84.25s (×16), actor 5, squad 0 (trace 10700): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 10576. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5639520643936967, 'next_transition': 10784}.
<a id="trace-11425"></a>
- 85.05s–85.05s (×1), actor 1, squad 0 (trace 11425): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 85.00s, trace 11412. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06146980412678601, 'next_transition': 11483}.
<a id="trace-11483"></a>
<a id="trace-11539"></a>
<a id="trace-11601"></a>
<a id="trace-11672"></a>
- 85.25s–88.25s (×4), actor 5, squad 0 (trace 11483): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 11414. Next observer evidence: {'until': 86.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2751659118421609, 'next_transition': 11539}.
<a id="trace-11837"></a>
- 90.30s–90.30s (×1), actor 1, squad 0 (trace 11837): support established: element delivered fire on threat area. Knowledge: actor memory at 90.00s, trace 11765. Next observer evidence: {'until': 92.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.4459956858738927, 'next_transition': 11932}.
<a id="trace-11932"></a>
<a id="trace-12001"></a>
<a id="trace-12073"></a>
- 92.25s–94.25s (×3), actor 1, squad 0 (trace 11932): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 90.00s, trace 11765. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0164227229342149, 'next_transition': 12001}.
<a id="trace-12085"></a>
- 94.35s–94.35s (×1), actor 1, squad 0 (trace 12085): renew committed intent (75 s lifetime). Knowledge: actor memory at 94.35s, trace 12085. Next observer evidence: None.
<a id="trace-1205"></a>
- 94.35s–94.35s (×1), actor 1, squad 0 (events line 1205): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 95.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.093176188223176, 'next_transition': 12174}.
<a id="trace-12174"></a>
<a id="trace-12202"></a>
<a id="trace-12219"></a>
<a id="trace-12234"></a>
<a id="trace-12323"></a>
<a id="trace-12337"></a>
<a id="trace-12351"></a>
<a id="trace-12364"></a>
<a id="trace-12381"></a>
<a id="trace-12451"></a>
- 95.25s–105.25s (×10), actor 1, squad 0 (trace 12174): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 95.00s, trace 12106. Next observer evidence: {'until': 96.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.002623217786445, 'next_transition': 12202}.
<a id="trace-12462"></a>
- 105.85s–105.85s (×1), actor 1, squad 0 (trace 12462): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 12391. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2899139572355908, 'next_transition': 12658}.
<a id="trace-12549"></a>
- 105.85s–105.85s (×1), actor 1, squad 0 (trace 12549): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 12391. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2899139572355908, 'next_transition': 12658}.
<a id="trace-12658"></a>
<a id="trace-12682"></a>
<a id="trace-12704"></a>
<a id="trace-12734"></a>
<a id="trace-12808"></a>
<a id="trace-12818"></a>
- 106.25s–111.25s (×6), actor 1, squad 0 (trace 12658): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 105.00s, trace 12391. Next observer evidence: {'until': 107.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8511587701200664, 'next_transition': 12682}.
<a id="trace-12825"></a>
- 111.60s–111.60s (×1), actor 1, squad 0 (trace 12825): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 110.00s, trace 12747. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0721616443645763, 'next_transition': 12832}.
<a id="trace-12832"></a>
<a id="trace-12849"></a>
<a id="trace-12868"></a>
<a id="trace-12939"></a>
<a id="trace-12950"></a>
<a id="trace-12963"></a>
<a id="trace-12980"></a>
<a id="trace-12997"></a>
<a id="trace-13069"></a>
<a id="trace-13083"></a>
<a id="trace-13095"></a>
<a id="trace-13107"></a>
- 112.25s–123.25s (×12), actor 1, squad 0 (trace 12832): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 110.00s, trace 12747. Next observer evidence: {'until': 113.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.7790613123077073, 'next_transition': 12849}.
<a id="trace-13114"></a>
- 123.60s–123.60s (×1), actor 1, squad 0 (trace 13114): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 13008. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43874981866409773, 'next_transition': 13197}.
<a id="trace-13136"></a>
- 123.60s–123.60s (×1), actor 1, squad 0 (trace 13136): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 13008. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43874981866409773, 'next_transition': 13197}.
<a id="trace-13197"></a>
<a id="trace-13279"></a>
<a id="trace-13297"></a>
<a id="trace-13315"></a>
<a id="trace-13327"></a>
<a id="trace-13343"></a>
<a id="trace-13417"></a>
<a id="trace-13429"></a>
<a id="trace-13439"></a>
- 124.25s–132.30s (×9), actor 1, squad 0 (trace 13197): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 120.00s, trace 13008. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1614280001928063, 'next_transition': 13279}.
<a id="trace-13460"></a>
- 133.70s–133.70s (×1), actor 1, squad 0 (trace 13460): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 130.00s, trace 13359. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23498631269832482, 'next_transition': 13474}.
<a id="trace-13474"></a>
- 134.30s–134.30s (×1), actor 1, squad 0 (trace 13474): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 130.00s, trace 13359. Next observer evidence: {'until': 134.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18248471485457404, 'next_transition': 13487}.
<a id="trace-13487"></a>
- 134.70s–134.70s (×1), actor 1, squad 0 (trace 13487): MoveTactically. Knowledge: actor memory at 130.00s, trace 13359. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13587}.
<a id="trace-13488"></a>
- 134.70s–134.70s (×1), actor 1, squad 0 (trace 13488): received platoon directive. Knowledge: actor memory at 130.00s, trace 13359. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13587}.
<a id="trace-13587"></a>
- 135.25s–135.25s (×1), actor 1, squad 0 (trace 13587): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 135.00s, trace 13523. Next observer evidence: None.
<a id="trace-13642"></a>
<a id="trace-13683"></a>
- 135.30s–136.30s (×2), actor 1, squad 0 (trace 13642): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 135.00s, trace 13523. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2624825145710769, 'next_transition': 13683}.
<a id="trace-1355"></a>
- 136.65s–136.65s (×1), actor 1, squad 0 (events line 1355): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13690"></a>
- 136.65s–136.65s (×1), actor 1, squad 0 (trace 13690): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.318298 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 136.65s, trace 13690. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300046578311073, 'next_transition': 13702}.
<a id="trace-13691"></a>
- 136.65s–136.65s (×1), actor 1, squad 0 (trace 13691): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.318298 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 136.65s, trace 13691. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300046578311073, 'next_transition': 13702}.
<a id="trace-13702"></a>
<a id="trace-13719"></a>
<a id="trace-13731"></a>
- 137.30s–139.30s (×3), actor 1, squad 0 (trace 13702): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 136.65s, trace 13691. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.049996509285202, 'next_transition': 13719}.
<a id="trace-13736"></a>
- 139.55s–139.55s (×1), actor 1, squad 0 (trace 13736): Withdraw to received rally. Knowledge: actor memory at 136.65s, trace 13691. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399839708060575, 'next_transition': 13880}.
<a id="trace-13737"></a>
- 139.55s–139.55s (×1), actor 1, squad 0 (trace 13737): rearward bound: one stationary suppressing element. Knowledge: actor memory at 136.65s, trace 13691. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399839708060575, 'next_transition': 13880}.
<a id="trace-13880"></a>
<a id="trace-13902"></a>
<a id="trace-13922"></a>
<a id="trace-13941"></a>
<a id="trace-13953"></a>
<a id="trace-14020"></a>
<a id="trace-14036"></a>
<a id="trace-14047"></a>
<a id="trace-14060"></a>
<a id="trace-14075"></a>
<a id="trace-14149"></a>
<a id="trace-14165"></a>
- 140.30s–151.30s (×12), actor 1, squad 0 (trace 13880): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 140.00s, trace 13817. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9415224486672877, 'next_transition': 13902}.
<a id="trace-14174"></a>
- 152.05s–152.05s (×1), actor 1, squad 0 (trace 14174): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 14091. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14281}.
<a id="trace-14175"></a>
- 152.05s–152.05s (×1), actor 1, squad 0 (trace 14175): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 14091. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14281}.
<a id="trace-14281"></a>
<a id="trace-14303"></a>
<a id="trace-14321"></a>
<a id="trace-14395"></a>
<a id="trace-14418"></a>
<a id="trace-14430"></a>
<a id="trace-14446"></a>
<a id="trace-14463"></a>
<a id="trace-14532"></a>
<a id="trace-14548"></a>
<a id="trace-14564"></a>
<a id="trace-14585"></a>
<a id="trace-14600"></a>
<a id="trace-14667"></a>
<a id="trace-14681"></a>
- 152.30s–166.30s (×15), actor 1, squad 0 (trace 14281): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 150.00s, trace 14091. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.052486646449888874, 'next_transition': 14303}.
<a id="trace-14689"></a>
- 166.80s–166.80s (×1), actor 1, squad 0 (trace 14689): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 165.00s, trace 14609. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30240042445590304, 'next_transition': 14747}.
<a id="trace-14690"></a>
- 166.80s–166.80s (×1), actor 1, squad 0 (trace 14690): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 165.00s, trace 14609. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30240042445590304, 'next_transition': 14747}.
<a id="trace-14747"></a>
<a id="trace-14775"></a>
<a id="trace-14798"></a>
<a id="trace-14872"></a>
<a id="trace-14890"></a>
<a id="trace-14900"></a>
<a id="trace-14916"></a>
<a id="trace-14998"></a>
<a id="trace-15015"></a>
<a id="trace-15030"></a>
<a id="trace-15043"></a>
- 167.30s–178.30s (×11), actor 1, squad 0 (trace 14747): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 165.00s, trace 14609. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2641885539255056, 'next_transition': 14775}.
<a id="trace-15048"></a>
- 178.45s–178.45s (×1), actor 1, squad 0 (trace 15048): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 175.00s, trace 14937. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15167}.
<a id="trace-15049"></a>
- 178.45s–178.45s (×1), actor 1, squad 0 (trace 15049): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 175.00s, trace 14937. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15167}.
<a id="trace-15167"></a>
<a id="trace-15240"></a>
<a id="trace-15263"></a>
<a id="trace-15276"></a>
<a id="trace-15293"></a>
<a id="trace-15313"></a>
<a id="trace-15384"></a>
<a id="trace-15401"></a>
<a id="trace-15412"></a>
<a id="trace-15427"></a>
- 179.30s–188.30s (×10), actor 1, squad 0 (trace 15167): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 175.00s, trace 14937. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0605121127046042, 'next_transition': 15240}.
<a id="trace-15448"></a>
- 189.20s–189.20s (×1), actor 1, squad 0 (trace 15448): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 185.00s, trace 15324. Next observer evidence: None.
<a id="trace-15455"></a>
<a id="trace-15529"></a>
<a id="trace-15552"></a>
<a id="trace-15571"></a>
- 189.30s–192.30s (×4), actor 1, squad 0 (trace 15455): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 185.00s, trace 15324. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559999953042301, 'next_transition': 15529}.
<a id="trace-1514"></a>
- 192.90s–192.90s (×1), actor 1, squad 0 (events line 1514): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15583"></a>
- 192.90s–192.90s (×1), actor 1, squad 0 (trace 15583): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.465432 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 192.90s, trace 15583. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15589}.
<a id="trace-15584"></a>
- 192.90s–192.90s (×1), actor 1, squad 0 (trace 15584): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.465432 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 192.90s, trace 15584. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15589}.
<a id="trace-15589"></a>
<a id="trace-15604"></a>
- 193.30s–194.30s (×2), actor 1, squad 0 (trace 15589): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 192.90s, trace 15584. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15604}.
<a id="trace-15670"></a>
- 195.20s–195.20s (×1), actor 1, squad 0 (trace 15670): Withdraw to received rally. Knowledge: actor memory at 195.00s, trace 15611. Next observer evidence: None.
<a id="trace-15671"></a>
- 195.20s–195.20s (×1), actor 1, squad 0 (trace 15671): rearward bound: one stationary suppressing element. Knowledge: actor memory at 195.00s, trace 15611. Next observer evidence: None.
<a id="trace-15727"></a>
<a id="trace-15748"></a>
<a id="trace-15764"></a>
<a id="trace-15787"></a>
<a id="trace-15802"></a>
<a id="trace-15868"></a>
<a id="trace-15883"></a>
<a id="trace-15900"></a>
<a id="trace-15911"></a>
<a id="trace-15926"></a>
<a id="trace-15996"></a>
<a id="trace-16011"></a>
<a id="trace-16024"></a>
- 195.30s–207.30s (×13), actor 1, squad 0 (trace 15727): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 195.00s, trace 15611. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149885945906932, 'next_transition': 15748}.
<a id="trace-16027"></a>
- 207.30s–207.30s (×1), actor 1, squad 0 (trace 16027): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 205.00s, trace 15937. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16145}.
<a id="trace-16028"></a>
- 207.30s–207.30s (×1), actor 1, squad 0 (trace 16028): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 205.00s, trace 15937. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16145}.
<a id="trace-16145"></a>
<a id="trace-16168"></a>
<a id="trace-16244"></a>
<a id="trace-16262"></a>
<a id="trace-16275"></a>
<a id="trace-16290"></a>
<a id="trace-16309"></a>
<a id="trace-16379"></a>
<a id="trace-16398"></a>
<a id="trace-16409"></a>
<a id="trace-16423"></a>
<a id="trace-16443"></a>
<a id="trace-16509"></a>
- 208.30s–220.30s (×13), actor 1, squad 0 (trace 16145): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 205.00s, trace 15937. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3314252144547811, 'next_transition': 16168}.
<a id="trace-16519"></a>
- 221.05s–221.05s (×1), actor 1, squad 0 (trace 16519): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 220.00s, trace 16450. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15121421464634385, 'next_transition': 16529}.
<a id="trace-16520"></a>
- 221.05s–221.05s (×1), actor 1, squad 0 (trace 16520): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 220.00s, trace 16450. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15121421464634385, 'next_transition': 16529}.
<a id="trace-16529"></a>
<a id="trace-16569"></a>
<a id="trace-16587"></a>
<a id="trace-16653"></a>
<a id="trace-16670"></a>
<a id="trace-16679"></a>
<a id="trace-16690"></a>
<a id="trace-16705"></a>
<a id="trace-16770"></a>
<a id="trace-16781"></a>
<a id="trace-16796"></a>
<a id="trace-16806"></a>
<a id="trace-16818"></a>
<a id="trace-16889"></a>
<a id="trace-16899"></a>
<a id="trace-16909"></a>
<a id="trace-16920"></a>
<a id="trace-16937"></a>
<a id="trace-17003"></a>
<a id="trace-17027"></a>
<a id="trace-17034"></a>
<a id="trace-17047"></a>
<a id="trace-17113"></a>
<a id="trace-17128"></a>
<a id="trace-17140"></a>
<a id="trace-17151"></a>
<a id="trace-17166"></a>
<a id="trace-17230"></a>
<a id="trace-17241"></a>
<a id="trace-17253"></a>
- 221.30s–252.30s (×30), actor 1, squad 0 (trace 16529): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 220.00s, trace 16450. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15118093019807788, 'next_transition': 16569}.
<a id="trace-1655"></a>
- 253.25s–253.25s (×1), actor 1, squad 0 (events line 1655): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17263"></a>
- 253.25s–253.25s (×1), actor 1, squad 0 (trace 17263): renew committed intent (75 s lifetime). Knowledge: actor memory at 253.25s, trace 17263. Next observer evidence: None.
<a id="trace-17266"></a>
<a id="trace-17280"></a>
<a id="trace-17350"></a>
<a id="trace-17360"></a>
<a id="trace-17370"></a>
<a id="trace-17379"></a>
<a id="trace-17392"></a>
<a id="trace-17462"></a>
<a id="trace-17474"></a>
<a id="trace-17486"></a>
<a id="trace-17494"></a>
<a id="trace-17506"></a>
<a id="trace-17574"></a>
<a id="trace-17584"></a>
<a id="trace-17597"></a>
<a id="trace-17611"></a>
<a id="trace-17621"></a>
<a id="trace-17687"></a>
<a id="trace-17698"></a>
<a id="trace-17709"></a>
<a id="trace-17720"></a>
<a id="trace-17734"></a>
<a id="trace-17812"></a>
<a id="trace-17821"></a>
<a id="trace-17831"></a>
<a id="trace-17843"></a>
<a id="trace-17910"></a>
<a id="trace-17925"></a>
<a id="trace-17938"></a>
<a id="trace-17946"></a>
<a id="trace-17957"></a>
<a id="trace-18025"></a>
<a id="trace-18035"></a>
<a id="trace-18045"></a>
<a id="trace-18064"></a>
<a id="trace-18075"></a>
<a id="trace-18141"></a>
<a id="trace-18152"></a>
<a id="trace-18163"></a>
<a id="trace-18175"></a>
<a id="trace-18191"></a>
<a id="trace-18261"></a>
<a id="trace-18270"></a>
<a id="trace-18280"></a>
<a id="trace-18292"></a>
<a id="trace-18303"></a>
<a id="trace-18370"></a>
<a id="trace-18388"></a>
<a id="trace-18396"></a>
<a id="trace-18406"></a>
<a id="trace-18417"></a>
<a id="trace-18484"></a>
<a id="trace-18495"></a>
<a id="trace-18507"></a>
<a id="trace-18521"></a>
<a id="trace-18533"></a>
<a id="trace-18599"></a>
<a id="trace-18609"></a>
<a id="trace-18620"></a>
<a id="trace-18630"></a>
<a id="trace-18644"></a>
- 253.30s–314.30s (×61), actor 1, squad 0 (trace 17266): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 253.25s, trace 17263. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17280}.
<a id="trace-1770"></a>
- 314.85s–314.85s (×1), actor 1, squad 0 (events line 1770): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18655"></a>
- 314.85s–314.85s (×1), actor 1, squad 0 (trace 18655): renew committed intent (75 s lifetime). Knowledge: actor memory at 314.85s, trace 18655. Next observer evidence: {'until': 315.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18719}.
<a id="trace-18719"></a>
<a id="trace-18729"></a>
<a id="trace-18739"></a>
<a id="trace-18750"></a>
<a id="trace-18760"></a>
<a id="trace-18827"></a>
<a id="trace-18843"></a>
<a id="trace-18856"></a>
<a id="trace-18865"></a>
<a id="trace-18877"></a>
<a id="trace-18943"></a>
<a id="trace-18954"></a>
<a id="trace-18964"></a>
<a id="trace-18977"></a>
<a id="trace-18991"></a>
<a id="trace-19057"></a>
<a id="trace-19070"></a>
<a id="trace-19078"></a>
<a id="trace-19089"></a>
<a id="trace-19106"></a>
<a id="trace-19171"></a>
<a id="trace-19184"></a>
<a id="trace-19195"></a>
<a id="trace-19204"></a>
<a id="trace-19217"></a>
<a id="trace-19283"></a>
<a id="trace-19297"></a>
<a id="trace-19307"></a>
<a id="trace-19320"></a>
<a id="trace-19332"></a>
<a id="trace-19399"></a>
<a id="trace-19410"></a>
<a id="trace-19421"></a>
<a id="trace-19434"></a>
<a id="trace-19447"></a>
<a id="trace-19514"></a>
<a id="trace-19527"></a>
<a id="trace-19536"></a>
<a id="trace-19547"></a>
<a id="trace-19563"></a>
<a id="trace-19628"></a>
<a id="trace-19640"></a>
<a id="trace-19652"></a>
<a id="trace-19661"></a>
<a id="trace-19674"></a>
- 315.30s–359.30s (×45), actor 1, squad 0 (trace 18719): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 315.00s, trace 18658. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18729}.

## Net delivery

132 matched order/radio deliveries; 251 explicitly recorded losses; 5 unmatched orders (not classified as lost).
Matched delay: mean 0.459s; maximum 2.350s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 1784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 1785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 1792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 1793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3929: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3933: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3935: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3936: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3937: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3939: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3940: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3941: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3942: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 4018: estimate 5.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 4019: estimate 5.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4113: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4114: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4117: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4118: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4120: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4121: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4122: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4124: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4125: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4126: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4127: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4896: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4897: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4898: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4900: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4901: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4903: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4904: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4905: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4907: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4908: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4909: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4910: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 8002: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 8003: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 8004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 8005: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 8006: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 8007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 8008: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 8009: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 8010: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 8011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 8012: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 8013: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 8014: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 8015: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 47.55s leader 5, trace 8785: estimate 9.81; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 8888: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 8889: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 8890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 8891: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 8892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 8893: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 8894: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 8895: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 8896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 8897: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 8898: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 8899: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 8900: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 10230: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 10231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 10232: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 10233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 10234: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 10235: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 10236: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 10237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 10238: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 10239: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 10240: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 10241: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 10417: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 10418: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 10419: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 10420: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 10421: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 10422: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 10423: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 10424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 10425: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 10426: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 10427: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 10428: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 10574: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 10575: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 10576: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 10577: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 10578: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 10579: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 10580: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 10581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 10582: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 10583: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 10584: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 10585: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 10717: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 10718: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 10719: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 10720: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 10721: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 10722: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 10723: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 10724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 10725: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 10726: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 10727: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 10728: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 10866: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 10867: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 10868: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 10869: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 10870: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 10871: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 10872: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 10873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 10874: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 10875: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 10876: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 11037: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 11038: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 11039: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 11040: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 11041: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 11042: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 11043: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 11044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 11045: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 11046: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 11047: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 11412: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 11413: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 11414: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 11415: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 11416: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 11417: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 11418: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 11419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 11420: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 11421: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 11422: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 11765: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 11766: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 11767: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 11768: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 11769: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 11770: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 11771: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 11772: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 11773: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 11774: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.35s leader 1, trace 12085: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 12106: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 12107: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 12108: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 12109: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 12110: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 12111: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 12112: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 12113: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 12114: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 12115: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 12264: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 12265: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 12266: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 12267: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 12268: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 12269: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 12270: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 12271: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 12272: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 12391: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 12392: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 12393: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 12394: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 12395: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 12396: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 12397: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 12398: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 12399: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 12747: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 12748: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 12749: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 12750: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 12751: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 12752: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 12753: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 12754: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 12755: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 12879: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 12880: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 12881: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 12882: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 12883: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 12884: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 12885: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 12886: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 12887: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 13008: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 13009: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 13010: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 13011: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 13012: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 13013: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 13014: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 13015: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 13016: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 13220: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 13221: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 13222: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 13223: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 13224: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 13225: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 13226: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 13227: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 13228: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 13359: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 13360: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 13361: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 13362: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 13363: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 13364: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 13365: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 13366: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 13367: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 13523: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 13524: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 13525: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 13526: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 13527: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 13528: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 13529: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 13530: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 13531: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.65s leader 1, trace 13690: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.65s leader 1, trace 13691: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 13817: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 13818: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 13819: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 13820: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 13821: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 13822: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 13823: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 13824: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 13825: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 13962: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 13963: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 13964: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 13965: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 13966: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 13967: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 13968: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 13969: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 13970: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 14091: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 14092: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 14093: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 14094: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 14095: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 14096: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 14097: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 14098: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 14099: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 14336: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 14337: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 14338: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 14339: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 14340: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 14341: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 14342: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 14343: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 14344: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 14473: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 14474: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 14475: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 14476: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 14477: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 14478: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 14479: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 14480: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 14481: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 14609: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 14610: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 14611: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 14612: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 14613: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 14614: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 14615: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 14616: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 14617: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 14812: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 14813: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 14814: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 14815: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 14816: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 14817: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 14818: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 14819: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 14820: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 14937: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 14938: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 14939: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 14940: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 14941: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 14942: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 14943: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 14944: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 14945: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 15182: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 15183: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 15184: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 15185: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 15186: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 15187: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 15188: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 15189: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 15190: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 15324: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 15325: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 15326: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 15327: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 15328: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 15329: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 15330: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 15331: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 15332: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 15470: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 15471: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 15472: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 15473: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 15474: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 15475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 15476: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 15477: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 15478: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.90s leader 1, trace 15583: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.90s leader 1, trace 15584: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 15611: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 15612: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 15613: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 15614: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 15615: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 15616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 15617: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 15618: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 15619: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 15810: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 15811: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 15812: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 15813: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 15814: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 15815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 15816: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 15817: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 15818: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 15937: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 15938: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 15939: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 15940: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 15941: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 15942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 15943: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 15944: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 15945: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 16183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 16184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 16185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 16186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 16187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 16188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 16189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 16190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 16191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 16320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 16321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 16322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 16323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 16324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 16325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 16326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 16327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 16328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 16450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 16451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 16452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 16453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 16454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 16455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 16456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 16457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 16458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 16594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 16595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 16596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 16597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 16598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 16599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 16600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 16601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 16602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 16712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 16713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 16714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 16715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 16716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 16717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 16718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 16719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 16720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 16827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 16828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 16829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 16830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 16831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 16832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 16833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 16834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 16835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 16943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 16944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 16945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 16946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 16947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 16948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 16949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 16950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 16951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 17055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 17056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 17057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 17058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 17059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 17060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 17061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 17062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 17063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 17172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 17173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 17174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 17175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 17176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 17177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 17178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 17179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 17180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 253.25s leader 1, trace 17263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 17288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 17289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 17290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 17291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 17292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 17293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 17294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 17295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 17296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 17402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 17403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 17404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 17405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 17406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 17407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 17408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 17409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 17410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 17514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 17515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 17516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 17517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 17518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 17519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 17520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 17521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 17522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 17628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 17629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 17630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 17631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 17632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 17633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 17634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 17635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 17636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 17745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 17746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 17747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 17748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 17749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 17750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 17751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 17752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 17753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 17852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 17853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 17854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 17855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 17856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 17857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 17858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 17859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 17860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 17965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 17966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 17967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 17968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 17969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 17970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 17971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 17972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 17973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 18082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 18083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 18084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 18085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 18086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 18087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 18088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 18089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 18090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 18203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 18204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 18205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 18206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 18207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 18208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 18209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 18210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 18211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 18312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 18313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 18314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 18315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 18316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 18317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 18318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 18319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 18320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 18426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 18427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 18428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 18429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 18430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 18431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 18432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 18433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 18434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 18541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 18542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 18543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 18544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 18545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 18546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 18547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 18548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 18549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 314.85s leader 1, trace 18655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 18658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 18659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 18660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 18661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 18662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 18663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 18664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 18665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 18666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 18768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 18769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 18770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 18771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 18772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 18773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 18774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 18775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 18776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 18885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 18886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 18887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 18888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 18889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 18890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 18891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 18892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 18893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 18999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 19000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 19001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 19002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 19003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 19004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 19005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 19006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 19007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 19113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 19114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 19115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 19116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 19117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 19118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 19119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 19120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 19121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 19223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 19224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 19225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 19226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 19227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 19228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 19229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 19230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 19231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 19341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 19342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 19343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 19344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 19345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 19346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 19347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 19348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 19349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 19456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 19457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 19458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 19459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 19460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 19461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 19462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 19463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 19464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 19570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 19571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 19572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 19573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 19574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 19575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 19576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 19577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 19578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 19681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 19682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 19683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 19684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 19685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 19686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 19687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 19688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 19689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Ash incapacitated
- 1: Moss incapacitated
- 1: Soren incapacitated
- 1: Bram killed in action
- 1: Iven killed in action
- 1: Orin incapacitated

## Outcome attribution

- 136.65s, evidence 1355: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 136.65s, evidence 13690: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.318298 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300046578311073, 'next_transition': 13702}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 136.65s, evidence 13691: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.318298 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300046578311073, 'next_transition': 13702}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 192.90s, evidence 1514: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 192.90s, evidence 15583: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.465432 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15589}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 192.90s, evidence 15584: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.465432 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15589}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 253.25s, evidence 1655: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 314.85s, evidence 1770: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
