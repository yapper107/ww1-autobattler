# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/19/107/good-ember/battle-107-1789674068689870417`

## Battle summary

**Ember** · 360 s · 442 shots.

### Turning points

- 18.1s, squad 4: contact (events line 234). First recorded contact.
- 26.7s, squad 0: withdrawal ([trace 10917](#trace-10917)). 91.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 45.0s, squad 0: help call ([trace 15725](#trace-15725)). 130.8s, squad 1: answered a neighbour with support by fire.
- 48.8s, squad 1: help call ([trace 15993](#trace-15993)). No completion observed before termination.
- 102.4s, squad 0: withdrawal ([trace 20096](#trace-20096)). 121.5s, squad 0: took cover and returned fire.
- 117.7s, squad 0: help call ([trace 21063](#trace-21063)). 130.8s, squad 1: answered a neighbour with support by fire.
- 125.7s, squad 0: withdrawal ([trace 21560](#trace-21560)). 285.6s, squad 0: took cover and returned fire.
- 130.8s, squad 1: help answer ([trace 21874](#trace-21874)). 136.4s, squad 1: advanced tactically.
- 285.6s, squad 0: help call ([trace 29696](#trace-29696)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 209 shots, 6/8 lost.
- **1** — FightHere; chose prepared a base of fire, answered a neighbour with support by fire and 2 further drill types; no completed objective recorded; 17 shots, 4/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 173 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 43 shots, 0/4 lost.

### Decisions and attribution

At 49.8s, squad 1 chose advanced tactically ([trace 16036](#trace-16036)), followed by 1 shots and 0 own casualties; estimate 4.5 against 0 distinct squad-reported contacts; At 61.2s, squad 1 chose took cover and returned fire ([trace 17201](#trace-17201)), followed by 1 shots and 0 own casualties; estimate 12.3 against 0 distinct squad-reported contacts; At 165.4s, squad 1 chose FightHere: nearest known group ([trace 24849](#trace-24849)), followed by 1 shots and 0 own casualties; estimate 4.0 against 1 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1416](#trace-1416)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1439}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1418](#trace-1418)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09010529482916087, 'next_transition': 1830}.

### Communication

250 matched deliveries (mean 0.57s, max 5.45s); 178 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.05s, squad 4, contact, evidence events line 234: First recorded contact; .
- 26.70s, squad 0, withdrawal, evidence 10917: BreakContact: believed ratio at least two without superiority; 91.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 45.05s, squad 0, help call, evidence 15725: NeedSupport; 130.8s, squad 1: answered a neighbour with support by fire.
- 48.80s, squad 1, help call, evidence 15993: NeedSupport; No completion observed before termination.
- 102.40s, squad 0, withdrawal, evidence 20096: BreakContact: believed ratio at least two without superiority; 121.5s, squad 0: took cover and returned fire.
- 117.70s, squad 0, help call, evidence 21063: NeedSupport; 130.8s, squad 1: answered a neighbour with support by fire.
- 125.65s, squad 0, withdrawal, evidence 21560: BreakContact: believed ratio at least two without superiority; 285.6s, squad 0: took cover and returned fire.
- 130.80s, squad 1, help answer, evidence 21874: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 136.4s, squad 1: advanced tactically.
- 285.55s, squad 0, help call, evidence 29696: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.94528647263559, 'next_transition': 967}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.94528647263559, 'next_transition': 967}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.94528647263559, 'next_transition': 967}.
<a id="trace-319"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 319): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.266115147882335, 'next_transition': 152}.
<a id="trace-320"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 320): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.266115147882335, 'next_transition': 152}.
<a id="trace-321"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 321): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.266115147882335, 'next_transition': 152}.
<a id="trace-686"></a>
<a id="trace-688"></a>
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-751"></a>
<a id="trace-753"></a>
<a id="trace-779"></a>
<a id="trace-781"></a>
<a id="trace-803"></a>
<a id="trace-805"></a>
<a id="trace-828"></a>
<a id="trace-830"></a>
<a id="trace-859"></a>
<a id="trace-861"></a>
<a id="trace-971"></a>
<a id="trace-973"></a>
<a id="trace-1002"></a>
<a id="trace-1004"></a>
<a id="trace-1043"></a>
<a id="trace-1045"></a>
<a id="trace-1067"></a>
<a id="trace-1069"></a>
<a id="trace-1100"></a>
<a id="trace-1102"></a>
<a id="trace-1136"></a>
<a id="trace-1138"></a>
<a id="trace-1174"></a>
<a id="trace-1176"></a>
<a id="trace-1193"></a>
<a id="trace-1195"></a>
<a id="trace-1215"></a>
<a id="trace-1217"></a>
<a id="trace-1308"></a>
<a id="trace-1310"></a>
<a id="trace-1328"></a>
<a id="trace-1330"></a>
<a id="trace-1350"></a>
<a id="trace-1352"></a>
<a id="trace-1378"></a>
<a id="trace-1380"></a>
<a id="trace-1413"></a>
<a id="trace-1415"></a>
<a id="trace-1443"></a>
<a id="trace-1445"></a>
<a id="trace-1798"></a>
<a id="trace-1800"></a>
<a id="trace-1826"></a>
<a id="trace-1828"></a>
<a id="trace-2196"></a>
<a id="trace-2198"></a>
<a id="trace-2221"></a>
<a id="trace-2223"></a>
<a id="trace-2315"></a>
<a id="trace-2317"></a>
<a id="trace-2353"></a>
<a id="trace-2355"></a>
<a id="trace-2387"></a>
<a id="trace-2389"></a>
<a id="trace-2422"></a>
<a id="trace-2424"></a>
<a id="trace-2441"></a>
<a id="trace-2443"></a>
<a id="trace-2830"></a>
<a id="trace-2832"></a>
<a id="trace-3259"></a>
<a id="trace-3261"></a>
<a id="trace-3681"></a>
<a id="trace-3683"></a>
<a id="trace-4950"></a>
<a id="trace-4952"></a>
<a id="trace-5433"></a>
<a id="trace-5435"></a>
<a id="trace-5598"></a>
<a id="trace-5600"></a>
<a id="trace-5688"></a>
<a id="trace-5690"></a>
<a id="trace-6181"></a>
<a id="trace-6183"></a>
<a id="trace-6683"></a>
<a id="trace-6685"></a>
<a id="trace-6767"></a>
<a id="trace-6769"></a>
<a id="trace-7238"></a>
<a id="trace-7240"></a>
<a id="trace-7292"></a>
<a id="trace-7294"></a>
<a id="trace-7347"></a>
<a id="trace-7349"></a>
<a id="trace-7404"></a>
<a id="trace-7406"></a>
<a id="trace-7444"></a>
<a id="trace-7446"></a>
<a id="trace-10403"></a>
<a id="trace-10405"></a>
<a id="trace-10435"></a>
<a id="trace-10437"></a>
<a id="trace-10887"></a>
<a id="trace-10889"></a>
<a id="trace-11289"></a>
<a id="trace-11291"></a>
<a id="trace-11326"></a>
<a id="trace-11328"></a>
<a id="trace-11371"></a>
<a id="trace-11373"></a>
<a id="trace-11438"></a>
<a id="trace-11440"></a>
<a id="trace-11484"></a>
<a id="trace-11486"></a>
<a id="trace-11528"></a>
<a id="trace-11530"></a>
<a id="trace-11569"></a>
<a id="trace-11571"></a>
<a id="trace-11674"></a>
<a id="trace-11676"></a>
<a id="trace-11710"></a>
<a id="trace-11712"></a>
<a id="trace-11740"></a>
<a id="trace-11742"></a>
<a id="trace-11756"></a>
<a id="trace-11758"></a>
<a id="trace-12195"></a>
<a id="trace-12197"></a>
<a id="trace-12214"></a>
<a id="trace-12216"></a>
<a id="trace-12251"></a>
<a id="trace-12253"></a>
<a id="trace-12287"></a>
<a id="trace-12289"></a>
<a id="trace-12317"></a>
<a id="trace-12319"></a>
<a id="trace-12350"></a>
<a id="trace-12352"></a>
<a id="trace-12449"></a>
<a id="trace-12451"></a>
<a id="trace-12474"></a>
<a id="trace-12476"></a>
<a id="trace-12513"></a>
<a id="trace-12515"></a>
<a id="trace-12954"></a>
<a id="trace-12956"></a>
<a id="trace-12978"></a>
<a id="trace-12980"></a>
<a id="trace-13007"></a>
<a id="trace-13009"></a>
<a id="trace-13055"></a>
<a id="trace-13057"></a>
<a id="trace-13086"></a>
<a id="trace-13088"></a>
<a id="trace-13124"></a>
<a id="trace-13126"></a>
<a id="trace-13158"></a>
<a id="trace-13160"></a>
<a id="trace-13263"></a>
<a id="trace-13265"></a>
<a id="trace-13293"></a>
<a id="trace-13295"></a>
<a id="trace-13317"></a>
<a id="trace-13319"></a>
<a id="trace-13342"></a>
<a id="trace-13344"></a>
<a id="trace-13364"></a>
<a id="trace-13366"></a>
<a id="trace-13383"></a>
<a id="trace-13385"></a>
<a id="trace-13406"></a>
<a id="trace-13408"></a>
<a id="trace-13422"></a>
<a id="trace-13424"></a>
<a id="trace-13446"></a>
<a id="trace-13448"></a>
<a id="trace-15591"></a>
<a id="trace-15593"></a>
<a id="trace-15798"></a>
<a id="trace-15800"></a>
<a id="trace-15820"></a>
<a id="trace-15822"></a>
<a id="trace-15869"></a>
<a id="trace-15871"></a>
<a id="trace-15892"></a>
<a id="trace-15894"></a>
<a id="trace-15917"></a>
<a id="trace-15919"></a>
<a id="trace-15937"></a>
<a id="trace-15939"></a>
<a id="trace-15961"></a>
<a id="trace-15963"></a>
<a id="trace-15986"></a>
<a id="trace-15988"></a>
<a id="trace-16014"></a>
<a id="trace-16016"></a>
<a id="trace-16028"></a>
<a id="trace-16030"></a>
<a id="trace-16325"></a>
<a id="trace-16327"></a>
<a id="trace-16348"></a>
<a id="trace-16350"></a>
<a id="trace-16368"></a>
<a id="trace-16370"></a>
<a id="trace-16395"></a>
<a id="trace-16397"></a>
<a id="trace-16416"></a>
<a id="trace-16418"></a>
<a id="trace-16437"></a>
<a id="trace-16439"></a>
<a id="trace-16457"></a>
<a id="trace-16459"></a>
<a id="trace-16472"></a>
<a id="trace-16474"></a>
<a id="trace-16497"></a>
<a id="trace-16499"></a>
<a id="trace-16518"></a>
<a id="trace-16520"></a>
<a id="trace-16598"></a>
<a id="trace-16600"></a>
<a id="trace-16618"></a>
<a id="trace-16620"></a>
<a id="trace-16647"></a>
<a id="trace-16649"></a>
<a id="trace-16671"></a>
<a id="trace-16673"></a>
<a id="trace-16697"></a>
<a id="trace-16699"></a>
<a id="trace-16867"></a>
<a id="trace-16869"></a>
<a id="trace-16903"></a>
<a id="trace-16905"></a>
<a id="trace-16932"></a>
<a id="trace-16934"></a>
<a id="trace-17062"></a>
<a id="trace-17064"></a>
<a id="trace-17082"></a>
<a id="trace-17084"></a>
<a id="trace-17170"></a>
<a id="trace-17172"></a>
<a id="trace-17182"></a>
<a id="trace-17184"></a>
<a id="trace-17197"></a>
<a id="trace-17199"></a>
<a id="trace-17430"></a>
<a id="trace-17432"></a>
<a id="trace-17444"></a>
<a id="trace-17446"></a>
<a id="trace-17463"></a>
<a id="trace-17465"></a>
<a id="trace-17492"></a>
<a id="trace-17494"></a>
<a id="trace-17515"></a>
<a id="trace-17517"></a>
<a id="trace-17536"></a>
<a id="trace-17538"></a>
<a id="trace-17553"></a>
<a id="trace-17555"></a>
<a id="trace-17629"></a>
<a id="trace-17631"></a>
<a id="trace-17643"></a>
<a id="trace-17645"></a>
<a id="trace-17658"></a>
<a id="trace-17660"></a>
<a id="trace-17670"></a>
<a id="trace-17672"></a>
<a id="trace-17791"></a>
<a id="trace-17793"></a>
<a id="trace-17803"></a>
<a id="trace-17805"></a>
<a id="trace-17825"></a>
<a id="trace-17827"></a>
<a id="trace-17844"></a>
<a id="trace-17846"></a>
<a id="trace-17863"></a>
<a id="trace-17865"></a>
<a id="trace-17877"></a>
<a id="trace-17879"></a>
<a id="trace-17956"></a>
<a id="trace-17958"></a>
<a id="trace-17971"></a>
<a id="trace-17973"></a>
<a id="trace-17986"></a>
<a id="trace-17988"></a>
<a id="trace-17998"></a>
<a id="trace-18000"></a>
<a id="trace-18014"></a>
<a id="trace-18016"></a>
<a id="trace-18020"></a>
<a id="trace-18022"></a>
<a id="trace-18142"></a>
<a id="trace-18144"></a>
<a id="trace-18243"></a>
<a id="trace-18245"></a>
<a id="trace-18267"></a>
<a id="trace-18269"></a>
<a id="trace-18368"></a>
<a id="trace-18370"></a>
<a id="trace-18450"></a>
<a id="trace-18452"></a>
<a id="trace-18463"></a>
<a id="trace-18465"></a>
<a id="trace-18480"></a>
<a id="trace-18482"></a>
<a id="trace-18488"></a>
<a id="trace-18490"></a>
<a id="trace-18502"></a>
<a id="trace-18504"></a>
<a id="trace-18510"></a>
<a id="trace-18512"></a>
<a id="trace-18527"></a>
<a id="trace-18529"></a>
<a id="trace-18539"></a>
<a id="trace-18541"></a>
<a id="trace-18560"></a>
<a id="trace-18562"></a>
<a id="trace-18571"></a>
<a id="trace-18573"></a>
<a id="trace-18648"></a>
<a id="trace-18650"></a>
<a id="trace-18665"></a>
<a id="trace-18667"></a>
<a id="trace-18681"></a>
<a id="trace-18683"></a>
<a id="trace-18694"></a>
<a id="trace-18696"></a>
<a id="trace-18711"></a>
<a id="trace-18713"></a>
<a id="trace-18720"></a>
<a id="trace-18722"></a>
<a id="trace-18739"></a>
<a id="trace-18741"></a>
<a id="trace-18753"></a>
<a id="trace-18755"></a>
<a id="trace-18783"></a>
<a id="trace-18785"></a>
<a id="trace-18794"></a>
<a id="trace-18796"></a>
<a id="trace-18872"></a>
<a id="trace-18874"></a>
<a id="trace-18882"></a>
<a id="trace-18884"></a>
<a id="trace-18898"></a>
<a id="trace-18900"></a>
<a id="trace-18908"></a>
<a id="trace-18910"></a>
<a id="trace-18924"></a>
<a id="trace-18926"></a>
<a id="trace-18936"></a>
<a id="trace-18938"></a>
<a id="trace-18955"></a>
<a id="trace-18957"></a>
<a id="trace-18968"></a>
<a id="trace-18970"></a>
<a id="trace-18990"></a>
<a id="trace-18992"></a>
<a id="trace-19003"></a>
<a id="trace-19005"></a>
<a id="trace-19090"></a>
<a id="trace-19092"></a>
<a id="trace-19106"></a>
<a id="trace-19108"></a>
<a id="trace-19122"></a>
<a id="trace-19124"></a>
<a id="trace-19138"></a>
<a id="trace-19140"></a>
<a id="trace-19161"></a>
<a id="trace-19163"></a>
<a id="trace-19198"></a>
<a id="trace-19200"></a>
<a id="trace-19226"></a>
<a id="trace-19228"></a>
<a id="trace-19390"></a>
<a id="trace-19392"></a>
<a id="trace-19427"></a>
<a id="trace-19429"></a>
<a id="trace-19450"></a>
<a id="trace-19452"></a>
<a id="trace-19545"></a>
<a id="trace-19547"></a>
<a id="trace-19563"></a>
<a id="trace-19565"></a>
<a id="trace-19594"></a>
<a id="trace-19596"></a>
<a id="trace-19616"></a>
<a id="trace-19618"></a>
<a id="trace-19643"></a>
<a id="trace-19645"></a>
<a id="trace-19656"></a>
<a id="trace-19658"></a>
<a id="trace-19682"></a>
<a id="trace-19684"></a>
<a id="trace-19762"></a>
<a id="trace-19764"></a>
<a id="trace-19789"></a>
<a id="trace-19791"></a>
<a id="trace-19818"></a>
<a id="trace-19820"></a>
<a id="trace-19906"></a>
<a id="trace-19908"></a>
<a id="trace-19919"></a>
<a id="trace-19921"></a>
<a id="trace-20044"></a>
<a id="trace-20046"></a>
<a id="trace-20061"></a>
<a id="trace-20063"></a>
<a id="trace-20085"></a>
<a id="trace-20087"></a>
<a id="trace-20269"></a>
<a id="trace-20271"></a>
<a id="trace-20306"></a>
<a id="trace-20308"></a>
<a id="trace-20332"></a>
<a id="trace-20334"></a>
<a id="trace-20367"></a>
<a id="trace-20369"></a>
<a id="trace-20387"></a>
<a id="trace-20389"></a>
<a id="trace-20484"></a>
<a id="trace-20486"></a>
<a id="trace-20503"></a>
<a id="trace-20505"></a>
<a id="trace-20522"></a>
<a id="trace-20524"></a>
<a id="trace-20536"></a>
<a id="trace-20538"></a>
<a id="trace-20559"></a>
<a id="trace-20561"></a>
<a id="trace-20575"></a>
<a id="trace-20577"></a>
<a id="trace-20602"></a>
<a id="trace-20604"></a>
<a id="trace-20616"></a>
<a id="trace-20618"></a>
<a id="trace-20647"></a>
<a id="trace-20649"></a>
<a id="trace-20664"></a>
<a id="trace-20666"></a>
<a id="trace-20750"></a>
<a id="trace-20752"></a>
<a id="trace-20772"></a>
<a id="trace-20774"></a>
<a id="trace-20800"></a>
<a id="trace-20802"></a>
<a id="trace-20813"></a>
<a id="trace-20815"></a>
<a id="trace-20835"></a>
<a id="trace-20837"></a>
<a id="trace-20849"></a>
<a id="trace-20851"></a>
<a id="trace-20871"></a>
<a id="trace-20873"></a>
<a id="trace-20883"></a>
<a id="trace-20885"></a>
<a id="trace-20904"></a>
<a id="trace-20906"></a>
<a id="trace-20917"></a>
<a id="trace-20919"></a>
<a id="trace-20993"></a>
<a id="trace-20995"></a>
<a id="trace-21005"></a>
<a id="trace-21007"></a>
<a id="trace-21023"></a>
<a id="trace-21025"></a>
<a id="trace-21039"></a>
<a id="trace-21041"></a>
<a id="trace-21059"></a>
<a id="trace-21061"></a>
<a id="trace-21070"></a>
<a id="trace-21072"></a>
<a id="trace-21089"></a>
<a id="trace-21091"></a>
<a id="trace-21099"></a>
<a id="trace-21101"></a>
<a id="trace-21117"></a>
<a id="trace-21119"></a>
<a id="trace-21127"></a>
<a id="trace-21129"></a>
<a id="trace-21204"></a>
<a id="trace-21206"></a>
<a id="trace-21220"></a>
<a id="trace-21222"></a>
<a id="trace-21240"></a>
<a id="trace-21242"></a>
<a id="trace-21331"></a>
<a id="trace-21333"></a>
<a id="trace-21355"></a>
<a id="trace-21357"></a>
<a id="trace-21377"></a>
<a id="trace-21379"></a>
<a id="trace-21410"></a>
<a id="trace-21412"></a>
<a id="trace-21428"></a>
<a id="trace-21430"></a>
<a id="trace-21457"></a>
<a id="trace-21459"></a>
<a id="trace-21469"></a>
<a id="trace-21471"></a>
<a id="trace-21549"></a>
<a id="trace-21551"></a>
<a id="trace-21663"></a>
<a id="trace-21665"></a>
<a id="trace-21677"></a>
<a id="trace-21679"></a>
<a id="trace-21696"></a>
<a id="trace-21698"></a>
<a id="trace-21719"></a>
<a id="trace-21721"></a>
<a id="trace-21727"></a>
<a id="trace-21729"></a>
<a id="trace-21743"></a>
<a id="trace-21745"></a>
<a id="trace-21754"></a>
<a id="trace-21756"></a>
<a id="trace-21772"></a>
<a id="trace-21774"></a>
<a id="trace-21786"></a>
<a id="trace-21788"></a>
<a id="trace-21864"></a>
<a id="trace-21866"></a>
<a id="trace-21871"></a>
<a id="trace-21873"></a>
<a id="trace-22824"></a>
<a id="trace-22826"></a>
<a id="trace-22835"></a>
<a id="trace-22837"></a>
<a id="trace-22861"></a>
<a id="trace-22863"></a>
<a id="trace-22880"></a>
<a id="trace-22882"></a>
<a id="trace-22899"></a>
<a id="trace-22901"></a>
<a id="trace-22908"></a>
<a id="trace-22910"></a>
<a id="trace-22925"></a>
<a id="trace-22927"></a>
<a id="trace-22940"></a>
<a id="trace-22942"></a>
<a id="trace-23014"></a>
<a id="trace-23016"></a>
<a id="trace-23027"></a>
<a id="trace-23029"></a>
<a id="trace-23050"></a>
<a id="trace-23052"></a>
<a id="trace-23144"></a>
<a id="trace-23146"></a>
<a id="trace-23248"></a>
<a id="trace-23250"></a>
<a id="trace-23255"></a>
<a id="trace-23257"></a>
<a id="trace-23279"></a>
<a id="trace-23281"></a>
<a id="trace-23287"></a>
<a id="trace-23289"></a>
<a id="trace-23304"></a>
<a id="trace-23306"></a>
<a id="trace-23313"></a>
<a id="trace-23315"></a>
<a id="trace-23390"></a>
<a id="trace-23392"></a>
<a id="trace-23404"></a>
<a id="trace-23406"></a>
<a id="trace-23423"></a>
<a id="trace-23425"></a>
<a id="trace-23433"></a>
<a id="trace-23435"></a>
<a id="trace-23453"></a>
<a id="trace-23455"></a>
<a id="trace-23550"></a>
<a id="trace-23552"></a>
<a id="trace-23578"></a>
<a id="trace-23580"></a>
<a id="trace-23594"></a>
<a id="trace-23596"></a>
<a id="trace-23613"></a>
<a id="trace-23615"></a>
<a id="trace-23620"></a>
<a id="trace-23622"></a>
<a id="trace-23690"></a>
<a id="trace-23692"></a>
<a id="trace-23703"></a>
<a id="trace-23705"></a>
<a id="trace-23720"></a>
<a id="trace-23722"></a>
<a id="trace-23727"></a>
<a id="trace-23729"></a>
<a id="trace-23744"></a>
<a id="trace-23746"></a>
<a id="trace-23753"></a>
<a id="trace-23755"></a>
<a id="trace-23858"></a>
<a id="trace-23860"></a>
<a id="trace-23874"></a>
<a id="trace-23876"></a>
<a id="trace-23891"></a>
<a id="trace-23893"></a>
<a id="trace-23913"></a>
<a id="trace-23915"></a>
<a id="trace-23991"></a>
<a id="trace-23993"></a>
<a id="trace-24005"></a>
<a id="trace-24007"></a>
<a id="trace-24021"></a>
<a id="trace-24023"></a>
<a id="trace-24029"></a>
<a id="trace-24031"></a>
<a id="trace-24049"></a>
<a id="trace-24051"></a>
<a id="trace-24061"></a>
<a id="trace-24063"></a>
<a id="trace-24079"></a>
<a id="trace-24081"></a>
<a id="trace-24092"></a>
<a id="trace-24094"></a>
<a id="trace-24111"></a>
<a id="trace-24113"></a>
<a id="trace-24122"></a>
<a id="trace-24124"></a>
<a id="trace-24196"></a>
<a id="trace-24198"></a>
<a id="trace-24326"></a>
<a id="trace-24328"></a>
<a id="trace-24357"></a>
<a id="trace-24359"></a>
<a id="trace-24378"></a>
<a id="trace-24380"></a>
<a id="trace-24405"></a>
<a id="trace-24407"></a>
<a id="trace-24416"></a>
<a id="trace-24418"></a>
<a id="trace-24527"></a>
<a id="trace-24529"></a>
<a id="trace-24539"></a>
<a id="trace-24541"></a>
<a id="trace-24555"></a>
<a id="trace-24557"></a>
<a id="trace-24568"></a>
<a id="trace-24570"></a>
<a id="trace-24643"></a>
<a id="trace-24645"></a>
<a id="trace-24656"></a>
<a id="trace-24658"></a>
<a id="trace-24671"></a>
<a id="trace-24673"></a>
<a id="trace-24682"></a>
<a id="trace-24684"></a>
<a id="trace-24699"></a>
<a id="trace-24701"></a>
<a id="trace-24714"></a>
<a id="trace-24716"></a>
<a id="trace-24732"></a>
<a id="trace-24734"></a>
<a id="trace-24740"></a>
<a id="trace-24742"></a>
<a id="trace-24756"></a>
<a id="trace-24758"></a>
<a id="trace-24769"></a>
<a id="trace-24771"></a>
<a id="trace-24842"></a>
<a id="trace-24844"></a>
<a id="trace-24858"></a>
<a id="trace-24860"></a>
<a id="trace-24982"></a>
<a id="trace-24984"></a>
<a id="trace-24988"></a>
<a id="trace-24990"></a>
<a id="trace-25058"></a>
<a id="trace-25060"></a>
<a id="trace-25073"></a>
<a id="trace-25075"></a>
<a id="trace-25092"></a>
<a id="trace-25094"></a>
<a id="trace-25107"></a>
<a id="trace-25109"></a>
<a id="trace-25125"></a>
<a id="trace-25127"></a>
<a id="trace-25140"></a>
<a id="trace-25142"></a>
<a id="trace-25219"></a>
<a id="trace-25221"></a>
<a id="trace-25235"></a>
<a id="trace-25237"></a>
<a id="trace-25254"></a>
<a id="trace-25256"></a>
<a id="trace-25264"></a>
<a id="trace-25266"></a>
<a id="trace-25282"></a>
<a id="trace-25284"></a>
<a id="trace-25294"></a>
<a id="trace-25296"></a>
<a id="trace-25315"></a>
<a id="trace-25317"></a>
<a id="trace-25328"></a>
<a id="trace-25330"></a>
<a id="trace-25344"></a>
<a id="trace-25346"></a>
<a id="trace-25458"></a>
<a id="trace-25460"></a>
<a id="trace-25534"></a>
<a id="trace-25536"></a>
<a id="trace-25546"></a>
<a id="trace-25548"></a>
<a id="trace-25566"></a>
<a id="trace-25568"></a>
<a id="trace-25576"></a>
<a id="trace-25578"></a>
<a id="trace-25592"></a>
<a id="trace-25594"></a>
<a id="trace-25602"></a>
<a id="trace-25604"></a>
<a id="trace-25624"></a>
<a id="trace-25626"></a>
<a id="trace-25635"></a>
<a id="trace-25637"></a>
<a id="trace-25654"></a>
<a id="trace-25656"></a>
<a id="trace-25665"></a>
<a id="trace-25667"></a>
<a id="trace-25747"></a>
<a id="trace-25749"></a>
<a id="trace-25759"></a>
<a id="trace-25761"></a>
<a id="trace-25783"></a>
<a id="trace-25785"></a>
<a id="trace-25794"></a>
<a id="trace-25796"></a>
<a id="trace-25813"></a>
<a id="trace-25815"></a>
<a id="trace-26353"></a>
<a id="trace-26355"></a>
<a id="trace-26370"></a>
<a id="trace-26372"></a>
<a id="trace-26377"></a>
<a id="trace-26379"></a>
<a id="trace-26390"></a>
<a id="trace-26392"></a>
<a id="trace-26396"></a>
<a id="trace-26398"></a>
<a id="trace-26463"></a>
<a id="trace-26465"></a>
<a id="trace-26473"></a>
<a id="trace-26475"></a>
<a id="trace-26487"></a>
<a id="trace-26489"></a>
<a id="trace-26501"></a>
<a id="trace-26503"></a>
<a id="trace-26512"></a>
<a id="trace-26514"></a>
<a id="trace-26522"></a>
<a id="trace-26524"></a>
<a id="trace-26537"></a>
<a id="trace-26539"></a>
<a id="trace-26545"></a>
<a id="trace-26547"></a>
<a id="trace-26558"></a>
<a id="trace-26560"></a>
<a id="trace-26566"></a>
<a id="trace-26568"></a>
<a id="trace-26631"></a>
<a id="trace-26633"></a>
<a id="trace-26644"></a>
<a id="trace-26646"></a>
<a id="trace-26658"></a>
<a id="trace-26660"></a>
<a id="trace-26669"></a>
<a id="trace-26671"></a>
<a id="trace-26680"></a>
<a id="trace-26682"></a>
<a id="trace-26692"></a>
<a id="trace-26694"></a>
<a id="trace-26710"></a>
<a id="trace-26712"></a>
<a id="trace-26717"></a>
<a id="trace-26719"></a>
<a id="trace-26728"></a>
<a id="trace-26730"></a>
<a id="trace-26733"></a>
<a id="trace-26735"></a>
<a id="trace-26796"></a>
<a id="trace-26798"></a>
<a id="trace-26805"></a>
<a id="trace-26807"></a>
<a id="trace-26819"></a>
<a id="trace-26821"></a>
<a id="trace-26826"></a>
<a id="trace-26828"></a>
<a id="trace-26837"></a>
<a id="trace-26839"></a>
<a id="trace-26848"></a>
<a id="trace-26850"></a>
<a id="trace-26867"></a>
<a id="trace-26869"></a>
<a id="trace-26872"></a>
<a id="trace-26874"></a>
<a id="trace-26883"></a>
<a id="trace-26885"></a>
<a id="trace-26888"></a>
<a id="trace-26890"></a>
<a id="trace-26957"></a>
<a id="trace-26959"></a>
<a id="trace-26964"></a>
<a id="trace-26966"></a>
<a id="trace-26978"></a>
<a id="trace-26980"></a>
<a id="trace-26983"></a>
<a id="trace-26985"></a>
<a id="trace-26991"></a>
<a id="trace-26993"></a>
<a id="trace-26999"></a>
<a id="trace-27001"></a>
<a id="trace-27013"></a>
<a id="trace-27015"></a>
<a id="trace-27018"></a>
<a id="trace-27020"></a>
<a id="trace-27028"></a>
<a id="trace-27030"></a>
<a id="trace-27038"></a>
<a id="trace-27040"></a>
<a id="trace-27111"></a>
<a id="trace-27113"></a>
<a id="trace-27118"></a>
<a id="trace-27120"></a>
<a id="trace-27133"></a>
<a id="trace-27135"></a>
<a id="trace-27144"></a>
<a id="trace-27146"></a>
<a id="trace-27152"></a>
<a id="trace-27154"></a>
<a id="trace-27157"></a>
<a id="trace-27159"></a>
<a id="trace-27168"></a>
<a id="trace-27170"></a>
<a id="trace-27172"></a>
<a id="trace-27174"></a>
<a id="trace-27181"></a>
<a id="trace-27183"></a>
<a id="trace-27189"></a>
<a id="trace-27191"></a>
<a id="trace-27258"></a>
<a id="trace-27260"></a>
<a id="trace-27269"></a>
<a id="trace-27271"></a>
<a id="trace-27286"></a>
<a id="trace-27288"></a>
<a id="trace-27292"></a>
<a id="trace-27294"></a>
<a id="trace-27305"></a>
<a id="trace-27307"></a>
<a id="trace-27315"></a>
<a id="trace-27317"></a>
<a id="trace-27331"></a>
<a id="trace-27333"></a>
<a id="trace-27337"></a>
<a id="trace-27339"></a>
<a id="trace-27348"></a>
<a id="trace-27350"></a>
<a id="trace-27354"></a>
<a id="trace-27356"></a>
<a id="trace-27418"></a>
<a id="trace-27420"></a>
<a id="trace-27427"></a>
<a id="trace-27429"></a>
<a id="trace-27442"></a>
<a id="trace-27444"></a>
<a id="trace-27448"></a>
<a id="trace-27450"></a>
<a id="trace-27459"></a>
<a id="trace-27461"></a>
<a id="trace-27465"></a>
<a id="trace-27467"></a>
<a id="trace-27482"></a>
<a id="trace-27484"></a>
<a id="trace-27491"></a>
<a id="trace-27493"></a>
<a id="trace-27503"></a>
<a id="trace-27505"></a>
<a id="trace-27513"></a>
<a id="trace-27515"></a>
<a id="trace-27577"></a>
<a id="trace-27579"></a>
<a id="trace-27587"></a>
<a id="trace-27589"></a>
<a id="trace-27600"></a>
<a id="trace-27602"></a>
<a id="trace-27607"></a>
<a id="trace-27609"></a>
<a id="trace-27616"></a>
<a id="trace-27618"></a>
<a id="trace-27623"></a>
<a id="trace-27625"></a>
<a id="trace-27637"></a>
<a id="trace-27639"></a>
<a id="trace-27646"></a>
<a id="trace-27648"></a>
<a id="trace-27660"></a>
<a id="trace-27662"></a>
<a id="trace-27673"></a>
<a id="trace-27675"></a>
<a id="trace-27742"></a>
<a id="trace-27744"></a>
<a id="trace-27756"></a>
<a id="trace-27758"></a>
<a id="trace-27774"></a>
<a id="trace-27776"></a>
<a id="trace-27782"></a>
<a id="trace-27784"></a>
<a id="trace-27795"></a>
<a id="trace-27797"></a>
<a id="trace-27802"></a>
<a id="trace-27804"></a>
<a id="trace-27815"></a>
<a id="trace-27817"></a>
<a id="trace-27820"></a>
<a id="trace-27822"></a>
<a id="trace-27830"></a>
<a id="trace-27832"></a>
<a id="trace-27836"></a>
<a id="trace-27838"></a>
<a id="trace-27902"></a>
<a id="trace-27904"></a>
<a id="trace-27911"></a>
<a id="trace-27913"></a>
<a id="trace-27931"></a>
<a id="trace-27933"></a>
<a id="trace-27940"></a>
<a id="trace-27942"></a>
<a id="trace-27950"></a>
<a id="trace-27952"></a>
<a id="trace-27958"></a>
<a id="trace-27960"></a>
<a id="trace-27974"></a>
<a id="trace-27976"></a>
<a id="trace-27979"></a>
<a id="trace-27981"></a>
<a id="trace-27990"></a>
<a id="trace-27992"></a>
<a id="trace-27997"></a>
<a id="trace-27999"></a>
<a id="trace-28063"></a>
<a id="trace-28065"></a>
<a id="trace-28074"></a>
<a id="trace-28076"></a>
<a id="trace-28089"></a>
<a id="trace-28091"></a>
<a id="trace-28101"></a>
<a id="trace-28103"></a>
<a id="trace-28112"></a>
<a id="trace-28114"></a>
<a id="trace-28125"></a>
<a id="trace-28127"></a>
<a id="trace-28144"></a>
<a id="trace-28146"></a>
<a id="trace-28148"></a>
<a id="trace-28150"></a>
<a id="trace-28159"></a>
<a id="trace-28161"></a>
<a id="trace-28170"></a>
<a id="trace-28172"></a>
<a id="trace-28234"></a>
<a id="trace-28236"></a>
<a id="trace-28241"></a>
<a id="trace-28243"></a>
<a id="trace-28253"></a>
<a id="trace-28255"></a>
<a id="trace-28259"></a>
<a id="trace-28261"></a>
<a id="trace-28267"></a>
<a id="trace-28269"></a>
<a id="trace-28278"></a>
<a id="trace-28280"></a>
<a id="trace-28292"></a>
<a id="trace-28294"></a>
<a id="trace-28301"></a>
<a id="trace-28303"></a>
<a id="trace-28315"></a>
<a id="trace-28317"></a>
<a id="trace-28322"></a>
<a id="trace-28324"></a>
<a id="trace-28390"></a>
<a id="trace-28392"></a>
<a id="trace-28399"></a>
<a id="trace-28401"></a>
<a id="trace-28418"></a>
<a id="trace-28420"></a>
<a id="trace-28424"></a>
<a id="trace-28426"></a>
<a id="trace-28432"></a>
<a id="trace-28434"></a>
<a id="trace-28441"></a>
<a id="trace-28443"></a>
<a id="trace-28452"></a>
<a id="trace-28454"></a>
<a id="trace-28457"></a>
<a id="trace-28459"></a>
<a id="trace-28468"></a>
<a id="trace-28470"></a>
<a id="trace-28474"></a>
<a id="trace-28476"></a>
<a id="trace-28543"></a>
<a id="trace-28545"></a>
<a id="trace-28551"></a>
<a id="trace-28553"></a>
<a id="trace-28570"></a>
<a id="trace-28572"></a>
<a id="trace-28584"></a>
<a id="trace-28586"></a>
<a id="trace-28596"></a>
<a id="trace-28598"></a>
<a id="trace-28613"></a>
<a id="trace-28615"></a>
<a id="trace-28626"></a>
<a id="trace-28628"></a>
<a id="trace-28632"></a>
<a id="trace-28634"></a>
<a id="trace-28642"></a>
<a id="trace-28644"></a>
<a id="trace-28649"></a>
<a id="trace-28651"></a>
<a id="trace-28717"></a>
<a id="trace-28719"></a>
<a id="trace-28727"></a>
<a id="trace-28729"></a>
<a id="trace-28742"></a>
<a id="trace-28744"></a>
<a id="trace-28749"></a>
<a id="trace-28751"></a>
<a id="trace-28759"></a>
<a id="trace-28761"></a>
<a id="trace-28776"></a>
<a id="trace-28778"></a>
<a id="trace-28795"></a>
<a id="trace-28797"></a>
<a id="trace-28806"></a>
<a id="trace-28808"></a>
<a id="trace-28820"></a>
<a id="trace-28822"></a>
<a id="trace-28828"></a>
<a id="trace-28830"></a>
<a id="trace-28897"></a>
<a id="trace-28899"></a>
<a id="trace-28907"></a>
<a id="trace-28909"></a>
<a id="trace-28920"></a>
<a id="trace-28922"></a>
<a id="trace-28928"></a>
<a id="trace-28930"></a>
<a id="trace-28942"></a>
<a id="trace-28944"></a>
<a id="trace-28950"></a>
<a id="trace-28952"></a>
<a id="trace-28965"></a>
<a id="trace-28967"></a>
<a id="trace-28974"></a>
<a id="trace-28976"></a>
<a id="trace-28989"></a>
<a id="trace-28991"></a>
<a id="trace-28998"></a>
<a id="trace-29000"></a>
<a id="trace-29065"></a>
<a id="trace-29067"></a>
<a id="trace-29074"></a>
<a id="trace-29076"></a>
<a id="trace-29089"></a>
<a id="trace-29091"></a>
<a id="trace-29094"></a>
<a id="trace-29096"></a>
<a id="trace-29105"></a>
<a id="trace-29107"></a>
<a id="trace-29112"></a>
<a id="trace-29114"></a>
<a id="trace-29124"></a>
<a id="trace-29126"></a>
<a id="trace-29131"></a>
<a id="trace-29133"></a>
<a id="trace-29142"></a>
<a id="trace-29144"></a>
<a id="trace-29149"></a>
<a id="trace-29151"></a>
<a id="trace-29215"></a>
<a id="trace-29217"></a>
<a id="trace-29226"></a>
<a id="trace-29228"></a>
<a id="trace-29243"></a>
<a id="trace-29245"></a>
<a id="trace-29248"></a>
<a id="trace-29250"></a>
<a id="trace-29259"></a>
<a id="trace-29261"></a>
<a id="trace-29268"></a>
<a id="trace-29270"></a>
<a id="trace-29281"></a>
<a id="trace-29283"></a>
<a id="trace-29289"></a>
<a id="trace-29291"></a>
<a id="trace-29299"></a>
<a id="trace-29301"></a>
<a id="trace-29307"></a>
<a id="trace-29309"></a>
<a id="trace-29373"></a>
<a id="trace-29375"></a>
<a id="trace-29384"></a>
<a id="trace-29386"></a>
<a id="trace-29398"></a>
<a id="trace-29400"></a>
<a id="trace-29403"></a>
<a id="trace-29405"></a>
<a id="trace-29419"></a>
<a id="trace-29421"></a>
<a id="trace-29426"></a>
<a id="trace-29428"></a>
<a id="trace-29442"></a>
<a id="trace-29444"></a>
<a id="trace-29452"></a>
<a id="trace-29454"></a>
<a id="trace-29464"></a>
<a id="trace-29466"></a>
<a id="trace-29469"></a>
<a id="trace-29471"></a>
<a id="trace-29533"></a>
<a id="trace-29535"></a>
<a id="trace-29541"></a>
<a id="trace-29543"></a>
<a id="trace-29553"></a>
<a id="trace-29555"></a>
<a id="trace-29558"></a>
<a id="trace-29560"></a>
<a id="trace-29570"></a>
<a id="trace-29572"></a>
<a id="trace-29576"></a>
<a id="trace-29578"></a>
<a id="trace-29591"></a>
<a id="trace-29593"></a>
<a id="trace-29597"></a>
<a id="trace-29599"></a>
<a id="trace-29612"></a>
<a id="trace-29614"></a>
<a id="trace-29623"></a>
<a id="trace-29625"></a>
<a id="trace-29688"></a>
<a id="trace-29690"></a>
<a id="trace-29715"></a>
<a id="trace-29717"></a>
<a id="trace-29730"></a>
<a id="trace-29732"></a>
<a id="trace-29734"></a>
<a id="trace-29736"></a>
<a id="trace-29745"></a>
<a id="trace-29747"></a>
<a id="trace-29755"></a>
<a id="trace-29757"></a>
<a id="trace-29769"></a>
<a id="trace-29771"></a>
<a id="trace-29777"></a>
<a id="trace-29779"></a>
<a id="trace-29793"></a>
<a id="trace-29795"></a>
<a id="trace-29802"></a>
<a id="trace-29804"></a>
<a id="trace-29870"></a>
<a id="trace-29872"></a>
<a id="trace-29886"></a>
<a id="trace-29888"></a>
<a id="trace-29911"></a>
<a id="trace-29913"></a>
<a id="trace-29920"></a>
<a id="trace-29922"></a>
<a id="trace-29935"></a>
<a id="trace-29937"></a>
<a id="trace-29949"></a>
<a id="trace-29951"></a>
<a id="trace-29964"></a>
<a id="trace-29966"></a>
<a id="trace-29974"></a>
<a id="trace-29976"></a>
<a id="trace-29984"></a>
<a id="trace-29986"></a>
<a id="trace-29995"></a>
<a id="trace-29997"></a>
<a id="trace-30061"></a>
<a id="trace-30063"></a>
<a id="trace-30069"></a>
<a id="trace-30071"></a>
<a id="trace-30084"></a>
<a id="trace-30086"></a>
<a id="trace-30091"></a>
<a id="trace-30093"></a>
<a id="trace-30108"></a>
<a id="trace-30110"></a>
<a id="trace-30120"></a>
<a id="trace-30122"></a>
<a id="trace-30137"></a>
<a id="trace-30139"></a>
<a id="trace-30145"></a>
<a id="trace-30147"></a>
<a id="trace-30160"></a>
<a id="trace-30162"></a>
<a id="trace-30168"></a>
<a id="trace-30170"></a>
<a id="trace-30234"></a>
<a id="trace-30236"></a>
<a id="trace-30244"></a>
<a id="trace-30246"></a>
<a id="trace-30256"></a>
<a id="trace-30258"></a>
<a id="trace-30261"></a>
<a id="trace-30263"></a>
<a id="trace-30273"></a>
<a id="trace-30275"></a>
<a id="trace-30282"></a>
<a id="trace-30284"></a>
<a id="trace-30295"></a>
<a id="trace-30297"></a>
<a id="trace-30309"></a>
<a id="trace-30311"></a>
<a id="trace-30324"></a>
<a id="trace-30326"></a>
<a id="trace-30331"></a>
<a id="trace-30333"></a>
<a id="trace-30398"></a>
<a id="trace-30400"></a>
<a id="trace-30411"></a>
<a id="trace-30413"></a>
<a id="trace-30425"></a>
<a id="trace-30427"></a>
<a id="trace-30431"></a>
<a id="trace-30433"></a>
<a id="trace-30447"></a>
<a id="trace-30449"></a>
<a id="trace-30455"></a>
<a id="trace-30457"></a>
<a id="trace-30468"></a>
<a id="trace-30470"></a>
<a id="trace-30476"></a>
<a id="trace-30478"></a>
<a id="trace-30487"></a>
<a id="trace-30489"></a>
<a id="trace-30496"></a>
<a id="trace-30498"></a>
<a id="trace-30564"></a>
<a id="trace-30566"></a>
<a id="trace-30575"></a>
<a id="trace-30577"></a>
<a id="trace-30591"></a>
<a id="trace-30593"></a>
<a id="trace-30598"></a>
<a id="trace-30600"></a>
<a id="trace-30616"></a>
<a id="trace-30618"></a>
<a id="trace-30623"></a>
<a id="trace-30625"></a>
<a id="trace-30637"></a>
<a id="trace-30639"></a>
<a id="trace-30644"></a>
<a id="trace-30646"></a>
<a id="trace-30656"></a>
<a id="trace-30658"></a>
<a id="trace-30664"></a>
<a id="trace-30666"></a>
<a id="trace-30729"></a>
<a id="trace-30731"></a>
<a id="trace-30741"></a>
<a id="trace-30743"></a>
<a id="trace-30755"></a>
<a id="trace-30757"></a>
<a id="trace-30762"></a>
<a id="trace-30764"></a>
<a id="trace-30779"></a>
<a id="trace-30781"></a>
<a id="trace-30790"></a>
<a id="trace-30792"></a>
<a id="trace-30806"></a>
<a id="trace-30808"></a>
<a id="trace-30816"></a>
<a id="trace-30818"></a>
<a id="trace-30827"></a>
<a id="trace-30829"></a>
<a id="trace-30833"></a>
<a id="trace-30835"></a>
<a id="trace-30899"></a>
<a id="trace-30901"></a>
<a id="trace-30911"></a>
<a id="trace-30913"></a>
<a id="trace-30922"></a>
<a id="trace-30924"></a>
<a id="trace-30931"></a>
<a id="trace-30933"></a>
<a id="trace-30943"></a>
<a id="trace-30945"></a>
<a id="trace-30952"></a>
<a id="trace-30954"></a>
<a id="trace-30967"></a>
<a id="trace-30969"></a>
<a id="trace-30979"></a>
<a id="trace-30981"></a>
<a id="trace-31003"></a>
<a id="trace-31005"></a>
<a id="trace-31072"></a>
<a id="trace-31074"></a>
<a id="trace-31081"></a>
<a id="trace-31083"></a>
<a id="trace-31093"></a>
<a id="trace-31095"></a>
<a id="trace-31101"></a>
<a id="trace-31103"></a>
<a id="trace-31113"></a>
<a id="trace-31115"></a>
<a id="trace-31121"></a>
<a id="trace-31123"></a>
<a id="trace-31134"></a>
<a id="trace-31136"></a>
<a id="trace-31141"></a>
<a id="trace-31143"></a>
<a id="trace-31153"></a>
<a id="trace-31155"></a>
<a id="trace-31162"></a>
<a id="trace-31164"></a>
<a id="trace-31235"></a>
<a id="trace-31237"></a>
<a id="trace-31247"></a>
<a id="trace-31249"></a>
<a id="trace-31262"></a>
<a id="trace-31264"></a>
<a id="trace-31268"></a>
<a id="trace-31270"></a>
<a id="trace-31284"></a>
<a id="trace-31286"></a>
<a id="trace-31293"></a>
<a id="trace-31295"></a>
<a id="trace-31306"></a>
<a id="trace-31308"></a>
<a id="trace-31316"></a>
<a id="trace-31318"></a>
<a id="trace-31325"></a>
<a id="trace-31327"></a>
<a id="trace-31332"></a>
<a id="trace-31334"></a>
<a id="trace-31398"></a>
<a id="trace-31400"></a>
<a id="trace-31421"></a>
<a id="trace-31423"></a>
<a id="trace-31430"></a>
<a id="trace-31432"></a>
<a id="trace-31448"></a>
<a id="trace-31450"></a>
<a id="trace-31455"></a>
<a id="trace-31457"></a>
<a id="trace-31471"></a>
<a id="trace-31473"></a>
<a id="trace-31484"></a>
<a id="trace-31486"></a>
<a id="trace-31493"></a>
<a id="trace-31495"></a>
<a id="trace-31503"></a>
<a id="trace-31505"></a>
<a id="trace-31569"></a>
<a id="trace-31571"></a>
<a id="trace-31578"></a>
<a id="trace-31580"></a>
<a id="trace-31591"></a>
<a id="trace-31593"></a>
<a id="trace-31598"></a>
<a id="trace-31600"></a>
<a id="trace-31612"></a>
<a id="trace-31614"></a>
<a id="trace-31620"></a>
<a id="trace-31622"></a>
<a id="trace-31637"></a>
<a id="trace-31639"></a>
<a id="trace-31646"></a>
<a id="trace-31648"></a>
<a id="trace-31660"></a>
<a id="trace-31662"></a>
<a id="trace-31669"></a>
<a id="trace-31671"></a>
<a id="trace-31739"></a>
<a id="trace-31741"></a>
<a id="trace-31760"></a>
<a id="trace-31762"></a>
<a id="trace-31767"></a>
<a id="trace-31769"></a>
<a id="trace-31780"></a>
<a id="trace-31782"></a>
<a id="trace-31787"></a>
<a id="trace-31789"></a>
<a id="trace-31802"></a>
<a id="trace-31804"></a>
<a id="trace-31810"></a>
<a id="trace-31812"></a>
<a id="trace-31823"></a>
<a id="trace-31825"></a>
<a id="trace-31829"></a>
<a id="trace-31831"></a>
<a id="trace-31900"></a>
<a id="trace-31902"></a>
<a id="trace-31913"></a>
<a id="trace-31915"></a>
<a id="trace-31926"></a>
<a id="trace-31928"></a>
<a id="trace-31939"></a>
<a id="trace-31941"></a>
<a id="trace-31950"></a>
<a id="trace-31952"></a>
<a id="trace-31959"></a>
<a id="trace-31961"></a>
<a id="trace-31973"></a>
<a id="trace-31975"></a>
<a id="trace-31983"></a>
<a id="trace-31985"></a>
<a id="trace-31995"></a>
<a id="trace-31997"></a>
<a id="trace-32001"></a>
<a id="trace-32003"></a>
<a id="trace-32067"></a>
<a id="trace-32069"></a>
<a id="trace-32077"></a>
<a id="trace-32079"></a>
<a id="trace-32090"></a>
<a id="trace-32092"></a>
<a id="trace-32103"></a>
<a id="trace-32105"></a>
<a id="trace-32127"></a>
<a id="trace-32129"></a>
<a id="trace-32144"></a>
<a id="trace-32146"></a>
<a id="trace-32152"></a>
<a id="trace-32154"></a>
<a id="trace-32163"></a>
<a id="trace-32165"></a>
<a id="trace-32170"></a>
<a id="trace-32172"></a>
- 1.60s–359.80s (×1424), actor 37, squad 4 (trace 686): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3989038537848636, 'next_transition': 713}.
<a id="trace-967"></a>
<a id="trace-969"></a>
<a id="trace-1063"></a>
<a id="trace-1065"></a>
<a id="trace-1096"></a>
<a id="trace-1098"></a>
<a id="trace-1132"></a>
<a id="trace-1134"></a>
<a id="trace-1170"></a>
<a id="trace-1172"></a>
<a id="trace-1211"></a>
<a id="trace-1213"></a>
<a id="trace-1304"></a>
<a id="trace-1306"></a>
<a id="trace-1324"></a>
<a id="trace-1326"></a>
<a id="trace-1346"></a>
<a id="trace-1348"></a>
<a id="trace-1374"></a>
<a id="trace-1376"></a>
<a id="trace-1409"></a>
<a id="trace-1411"></a>
- 5.70s–12.20s (×22), actor 5, squad 0 (trace 967): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 874. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.628816807105248, 'next_transition': 1063}.
<a id="trace-151"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 151): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1439}.
<a id="trace-152"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 152): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09010529482916087, 'next_transition': 1830}.
<a id="trace-1416"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1416): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1416. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1439}.
<a id="trace-1417"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1417): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1417. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1439}.
<a id="trace-1418"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1418): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1418. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09010529482916087, 'next_transition': 1830}.
<a id="trace-1419"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1419): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1419. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09010529482916087, 'next_transition': 1830}.
<a id="trace-1439"></a>
<a id="trace-1441"></a>
- 12.70s–12.70s (×2), actor 5, squad 0 (trace 1439): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1419. Next observer evidence: None.
<a id="trace-1447"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1447): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1225. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250579557341044, 'next_transition': 1794}.
<a id="trace-1448"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1448): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1225. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250579557341044, 'next_transition': 1794}.
<a id="trace-1794"></a>
<a id="trace-1796"></a>
<a id="trace-1822"></a>
<a id="trace-1824"></a>
<a id="trace-2311"></a>
<a id="trace-2313"></a>
<a id="trace-2383"></a>
<a id="trace-2385"></a>
<a id="trace-2826"></a>
<a id="trace-2828"></a>
<a id="trace-3677"></a>
<a id="trace-3679"></a>
- 13.20s–18.75s (×12), actor 5, squad 0 (trace 1794): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1419. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41342321830299067, 'next_transition': 1822}.
<a id="trace-1830"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1830): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1233. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.665037309489109, 'next_transition': 2460}.
<a id="trace-1831"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1831): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1233. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.665037309489109, 'next_transition': 2460}.
<a id="trace-2460"></a>
- 17.60s–17.60s (×1), actor 8, squad 1 (trace 2460): received platoon directive. Knowledge: actor memory at 15.00s, trace 2242. Next observer evidence: {'until': 18, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.86899460579563, 'next_transition': 2858}.
<a id="trace-2858"></a>
- 18.10s–18.10s (×1), actor 8, squad 1 (trace 2858): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2242. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7568596586725187, 'next_transition': 3274}.
<a id="trace-2859"></a>
- 18.10s–18.10s (×1), actor 8, squad 1 (trace 2859): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2242. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7568596586725187, 'next_transition': 3274}.
<a id="trace-2860"></a>
<a id="trace-3274"></a>
<a id="trace-4111"></a>
- 18.10s–18.95s (×3), actor 8, squad 1 (trace 2860): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2242. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7568596586725187, 'next_transition': 3274}.
<a id="trace-3684"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 3684): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2234. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249076205899876, 'next_transition': 4507}.
<a id="trace-3685"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 3685): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2234. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249076205899876, 'next_transition': 4507}.
<a id="trace-3686"></a>
<a id="trace-4507"></a>
- 18.75s–19.00s (×2), actor 0, squad 0 (trace 3686): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2234. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249076205899876, 'next_transition': 4507}.
<a id="trace-4946"></a>
<a id="trace-4948"></a>
- 19.25s–19.25s (×2), actor 5, squad 0 (trace 4946): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2239. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25593485248964826, 'next_transition': 4979}.
<a id="trace-4979"></a>
- 19.50s–19.50s (×1), actor 0, squad 0 (trace 4979): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2234. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150017703108341, 'next_transition': 5429}.
<a id="trace-5429"></a>
<a id="trace-5431"></a>
<a id="trace-5594"></a>
<a id="trace-5596"></a>
<a id="trace-5684"></a>
<a id="trace-5686"></a>
- 19.75s–20.75s (×6), actor 5, squad 0 (trace 5429): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2239. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.787549797809011, 'next_transition': 5594}.
<a id="trace-5717"></a>
<a id="trace-6226"></a>
- 21.00s–21.50s (×2), actor 0, squad 0 (trace 5717): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 5463. Next observer evidence: {'until': 21.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875174462344403, 'next_transition': 6226}.
<a id="trace-6679"></a>
<a id="trace-6681"></a>
<a id="trace-6763"></a>
<a id="trace-6765"></a>
- 21.75s–22.25s (×4), actor 5, squad 0 (trace 6679): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5468. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.890208765538397, 'next_transition': 6763}.
<a id="trace-6770"></a>
- 22.25s–22.25s (×1), actor 0, squad 0 (trace 6770): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 5463. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5242748218302531, 'next_transition': 7234}.
<a id="trace-7234"></a>
<a id="trace-7236"></a>
<a id="trace-7288"></a>
<a id="trace-7290"></a>
<a id="trace-7343"></a>
<a id="trace-7345"></a>
<a id="trace-7400"></a>
<a id="trace-7402"></a>
<a id="trace-10399"></a>
<a id="trace-10401"></a>
<a id="trace-10431"></a>
<a id="trace-10433"></a>
<a id="trace-10883"></a>
<a id="trace-10885"></a>
- 22.75s–26.25s (×14), actor 5, squad 0 (trace 7234): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5468. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5197807267041556, 'next_transition': 7288}.
<a id="trace-7241"></a>
- 22.75s–22.75s (×1), actor 8, squad 1 (trace 7241): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 5471. Next observer evidence: {'until': 24.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.653462507229148, 'next_transition': 7450}.
<a id="trace-7450"></a>
- 24.80s–24.80s (×1), actor 8, squad 1 (trace 7450): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 20.00s, trace 5471. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1818099101568724, 'next_transition': 10445}.
<a id="trace-10241"></a>
- 24.80s–24.80s (×1), actor 8, squad 1 (trace 10241): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 20.00s, trace 5471. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1818099101568724, 'next_transition': 10445}.
<a id="trace-10242"></a>
- 24.80s–24.80s (×1), actor 8, squad 1 (trace 10242): MoveTactically. Knowledge: actor memory at 20.00s, trace 5471. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1818099101568724, 'next_transition': 10445}.
<a id="trace-10243"></a>
- 24.80s–24.80s (×1), actor 8, squad 1 (trace 10243): contact cover complete: assessment resumes closure. Knowledge: actor memory at 20.00s, trace 5471. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1818099101568724, 'next_transition': 10445}.
<a id="trace-10445"></a>
- 25.90s–25.90s (×1), actor 8, squad 1 (trace 10445): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 10320. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5447931280976873, 'next_transition': 11533}.
<a id="trace-10446"></a>
- 25.90s–25.90s (×1), actor 8, squad 1 (trace 10446): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 10320. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5447931280976873, 'next_transition': 11533}.
<a id="trace-10917"></a>
- 26.70s–26.70s (×1), actor 0, squad 0 (trace 10917): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 10312. Next observer evidence: None.
<a id="trace-10918"></a>
- 26.70s–26.70s (×1), actor 0, squad 0 (trace 10918): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 10312. Next observer evidence: None.
<a id="trace-11285"></a>
<a id="trace-11287"></a>
<a id="trace-11322"></a>
<a id="trace-11324"></a>
<a id="trace-11367"></a>
<a id="trace-11369"></a>
<a id="trace-11434"></a>
<a id="trace-11436"></a>
<a id="trace-11480"></a>
<a id="trace-11482"></a>
<a id="trace-11670"></a>
<a id="trace-11672"></a>
<a id="trace-12210"></a>
<a id="trace-12212"></a>
<a id="trace-12283"></a>
<a id="trace-12285"></a>
<a id="trace-12445"></a>
<a id="trace-12447"></a>
<a id="trace-12470"></a>
<a id="trace-12472"></a>
<a id="trace-12509"></a>
<a id="trace-12511"></a>
<a id="trace-12950"></a>
<a id="trace-12952"></a>
<a id="trace-12974"></a>
<a id="trace-12976"></a>
<a id="trace-13003"></a>
<a id="trace-13005"></a>
<a id="trace-13082"></a>
<a id="trace-13084"></a>
<a id="trace-13120"></a>
<a id="trace-13122"></a>
<a id="trace-13154"></a>
<a id="trace-13156"></a>
<a id="trace-13259"></a>
<a id="trace-13261"></a>
<a id="trace-13289"></a>
<a id="trace-13291"></a>
<a id="trace-13313"></a>
<a id="trace-13315"></a>
<a id="trace-13360"></a>
<a id="trace-13362"></a>
<a id="trace-13379"></a>
<a id="trace-13381"></a>
<a id="trace-13402"></a>
<a id="trace-13404"></a>
<a id="trace-15587"></a>
<a id="trace-15589"></a>
- 26.75s–44.75s (×48), actor 5, squad 0 (trace 11285): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 10317. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4083543168809738, 'next_transition': 11322}.
<a id="trace-11533"></a>
- 29.25s–29.25s (×1), actor 8, squad 1 (trace 11533): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 10320. Next observer evidence: {'until': 32, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.117896061520256, 'next_transition': 11772}.
<a id="trace-11772"></a>
- 32.15s–32.15s (×1), actor 8, squad 1 (trace 11772): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 11592. Next observer evidence: {'until': 36.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.879009673429482, 'next_transition': 12500}.
<a id="trace-12500"></a>
- 36.20s–36.20s (×1), actor 8, squad 1 (trace 12500): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 12376. Next observer evidence: {'until': 36.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3150001094642666, 'next_transition': 12531}.
<a id="trace-12531"></a>
- 36.65s–36.65s (×1), actor 8, squad 1 (trace 12531): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 12376. Next observer evidence: {'until': 39.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.048889092618986, 'next_transition': 810}.
<a id="trace-810"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (events line 810): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13173"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 13173): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.792314 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 13173. Next observer evidence: {'until': 40, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3138798016793197, 'next_transition': 13247}.
<a id="trace-13174"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 13174): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.792314 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 13174. Next observer evidence: {'until': 40, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3138798016793197, 'next_transition': 13247}.
<a id="trace-13247"></a>
- 40.15s–40.15s (×1), actor 8, squad 1 (trace 13247): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 13185. Next observer evidence: {'until': 44.4, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.4280729544750348, 'next_transition': 13457}.
<a id="trace-13457"></a>
- 44.50s–44.50s (×1), actor 8, squad 1 (trace 13457): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 13185. Next observer evidence: None.
<a id="trace-15310"></a>
- 44.50s–44.50s (×1), actor 8, squad 1 (trace 15310): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 13185. Next observer evidence: None.
<a id="trace-15311"></a>
- 44.50s–44.50s (×1), actor 8, squad 1 (trace 15311): MoveTactically. Knowledge: actor memory at 40.00s, trace 13185. Next observer evidence: None.
<a id="trace-15312"></a>
- 44.50s–44.50s (×1), actor 8, squad 1 (trace 15312): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 13185. Next observer evidence: None.
<a id="trace-15454"></a>
- 44.50s–44.50s (×1), actor 8, squad 1 (trace 15454): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 40.00s, trace 13185. Next observer evidence: None.
<a id="trace-15458"></a>
- 44.55s–44.55s (×1), actor 8, squad 1 (trace 15458): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 40.00s, trace 13185. Next observer evidence: {'until': 45, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15119428891330497, 'next_transition': 15732}.
<a id="trace-15623"></a>
- 45.05s–45.05s (×1), actor 1, squad 0 (trace 15623): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 15598. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17998439603975885, 'next_transition': 15796}.
<a id="trace-15624"></a>
- 45.05s–45.05s (×1), actor 1, squad 0 (trace 15624): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 15598. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17998439603975885, 'next_transition': 15796}.
<a id="trace-15725"></a>
- 45.05s–45.05s (×1), actor 1, squad 0 (trace 15725): NeedSupport. Knowledge: actor memory at 45.00s, trace 15598. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17998439603975885, 'next_transition': 15796}.
<a id="trace-15732"></a>
- 45.05s–45.05s (×1), actor 8, squad 1 (trace 15732): received platoon directive; retain held slots. Knowledge: actor memory at 45.00s, trace 15605. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 2.7794251633821716, 'next_transition': 15991}.
<a id="trace-15796"></a>
<a id="trace-15818"></a>
<a id="trace-15867"></a>
<a id="trace-15888"></a>
<a id="trace-15890"></a>
<a id="trace-15913"></a>
<a id="trace-15915"></a>
<a id="trace-15982"></a>
<a id="trace-15984"></a>
<a id="trace-16010"></a>
<a id="trace-16012"></a>
<a id="trace-16024"></a>
<a id="trace-16026"></a>
<a id="trace-16321"></a>
<a id="trace-16323"></a>
<a id="trace-16344"></a>
<a id="trace-16346"></a>
<a id="trace-16364"></a>
<a id="trace-16366"></a>
<a id="trace-16391"></a>
<a id="trace-16393"></a>
<a id="trace-16414"></a>
<a id="trace-16435"></a>
<a id="trace-16455"></a>
<a id="trace-16495"></a>
<a id="trace-16514"></a>
<a id="trace-16516"></a>
<a id="trace-16594"></a>
<a id="trace-16596"></a>
<a id="trace-16614"></a>
<a id="trace-16616"></a>
<a id="trace-16643"></a>
<a id="trace-16645"></a>
<a id="trace-16693"></a>
<a id="trace-16695"></a>
- 45.25s–57.25s (×35), actor 5, squad 0 (trace 15796): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 15602. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2791180497164084, 'next_transition': 15818}.
<a id="trace-15991"></a>
- 48.80s–48.80s (×1), actor 9, squad 1 (trace 15991): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 45.00s, trace 15606. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750025316249492, 'next_transition': 16033}.
<a id="trace-15993"></a>
- 48.80s–48.80s (×1), actor 9, squad 1 (trace 15993): NeedSupport. Knowledge: actor memory at 45.00s, trace 15606. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750025316249492, 'next_transition': 16033}.
<a id="trace-16033"></a>
- 49.80s–49.80s (×1), actor 9, squad 1 (trace 16033): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 15606. Next observer evidence: {'until': 58.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 7.940941425810893, 'next_transition': 16940}.
<a id="trace-16036"></a>
- 49.80s–49.80s (×1), actor 9, squad 1 (trace 16036): MoveTactically. Knowledge: actor memory at 45.00s, trace 15606. Next observer evidence: {'until': 58.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 7.940941425810893, 'next_transition': 16940}.
<a id="trace-16037"></a>
- 49.80s–49.80s (×1), actor 9, squad 1 (trace 16037): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 45.00s, trace 15606. Next observer evidence: {'until': 58.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 7.940941425810893, 'next_transition': 16940}.
<a id="trace-16702"></a>
- 57.25s–57.25s (×1), actor 1, squad 0 (trace 16702): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 16525. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3538174599512044, 'next_transition': 16863}.
<a id="trace-16703"></a>
- 57.25s–57.25s (×1), actor 1, squad 0 (trace 16703): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 16525. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3538174599512044, 'next_transition': 16863}.
<a id="trace-16863"></a>
<a id="trace-16865"></a>
<a id="trace-16899"></a>
<a id="trace-16901"></a>
<a id="trace-16928"></a>
<a id="trace-16930"></a>
<a id="trace-17078"></a>
<a id="trace-17080"></a>
<a id="trace-17166"></a>
<a id="trace-17168"></a>
<a id="trace-17193"></a>
<a id="trace-17195"></a>
<a id="trace-17426"></a>
<a id="trace-17428"></a>
<a id="trace-17440"></a>
<a id="trace-17442"></a>
<a id="trace-17459"></a>
<a id="trace-17461"></a>
<a id="trace-17488"></a>
<a id="trace-17490"></a>
<a id="trace-17511"></a>
<a id="trace-17513"></a>
<a id="trace-17532"></a>
<a id="trace-17534"></a>
<a id="trace-17549"></a>
<a id="trace-17551"></a>
<a id="trace-17625"></a>
<a id="trace-17627"></a>
<a id="trace-17639"></a>
<a id="trace-17641"></a>
<a id="trace-17654"></a>
<a id="trace-17656"></a>
<a id="trace-17666"></a>
<a id="trace-17668"></a>
<a id="trace-17787"></a>
<a id="trace-17789"></a>
<a id="trace-17799"></a>
<a id="trace-17801"></a>
<a id="trace-17821"></a>
<a id="trace-17823"></a>
<a id="trace-17840"></a>
<a id="trace-17842"></a>
<a id="trace-17859"></a>
<a id="trace-17861"></a>
<a id="trace-17873"></a>
<a id="trace-17875"></a>
<a id="trace-17952"></a>
<a id="trace-17954"></a>
<a id="trace-17967"></a>
<a id="trace-17969"></a>
<a id="trace-17982"></a>
<a id="trace-17984"></a>
<a id="trace-17994"></a>
<a id="trace-17996"></a>
<a id="trace-18010"></a>
<a id="trace-18012"></a>
<a id="trace-18138"></a>
<a id="trace-18140"></a>
<a id="trace-18364"></a>
<a id="trace-18366"></a>
<a id="trace-18446"></a>
<a id="trace-18448"></a>
<a id="trace-18476"></a>
<a id="trace-18478"></a>
<a id="trace-18484"></a>
<a id="trace-18486"></a>
<a id="trace-18498"></a>
<a id="trace-18500"></a>
<a id="trace-18506"></a>
<a id="trace-18508"></a>
<a id="trace-18523"></a>
<a id="trace-18525"></a>
<a id="trace-18535"></a>
<a id="trace-18537"></a>
<a id="trace-18556"></a>
<a id="trace-18558"></a>
<a id="trace-18567"></a>
<a id="trace-18569"></a>
<a id="trace-18644"></a>
<a id="trace-18646"></a>
<a id="trace-18661"></a>
<a id="trace-18663"></a>
- 57.75s–80.75s (×82), actor 5, squad 0 (trace 16863): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 16529. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3496319280541501, 'next_transition': 16899}.
<a id="trace-16940"></a>
- 58.90s–58.90s (×1), actor 9, squad 1 (trace 16940): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 55.00s, trace 16532. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.955253846499221, 'next_transition': 17201}.
<a id="trace-17052"></a>
- 58.90s–58.90s (×1), actor 9, squad 1 (trace 17052): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 55.00s, trace 16532. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.955253846499221, 'next_transition': 17201}.
<a id="trace-17201"></a>
- 61.25s–61.25s (×1), actor 9, squad 1 (trace 17201): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 17104. Next observer evidence: {'until': 64.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 5.482790727917238, 'next_transition': 17543}.
<a id="trace-17202"></a>
- 61.25s–61.25s (×1), actor 9, squad 1 (trace 17202): new contact inside 100 m. Knowledge: actor memory at 60.00s, trace 17104. Next observer evidence: {'until': 64.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 5.482790727917238, 'next_transition': 17543}.
<a id="trace-17543"></a>
- 64.65s–64.65s (×1), actor 9, squad 1 (trace 17543): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 17104. Next observer evidence: {'until': 66.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9060999640942063, 'next_transition': 17677}.
<a id="trace-17677"></a>
- 66.90s–66.90s (×1), actor 9, squad 1 (trace 17677): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 65.00s, trace 17564. Next observer evidence: None.
<a id="trace-17678"></a>
<a id="trace-18024"></a>
- 66.95s–72.85s (×2), actor 9, squad 1 (trace 17678): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 65.00s, trace 17564. Next observer evidence: {'until': 72.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.07069000000000036, 'next_transition': 18024}.
<a id="trace-18152"></a>
- 73.65s–73.65s (×1), actor 9, squad 1 (trace 18152): MoveTactically. Knowledge: actor memory at 70.00s, trace 17890. Next observer evidence: {'until': 74.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18277}.
<a id="trace-18153"></a>
- 73.65s–73.65s (×1), actor 9, squad 1 (trace 18153): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 70.00s, trace 17890. Next observer evidence: {'until': 74.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18277}.
<a id="trace-18234"></a>
- 73.65s–73.65s (×1), actor 9, squad 1 (trace 18234): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 70.00s, trace 17890. Next observer evidence: {'until': 74.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18277}.
<a id="trace-18277"></a>
- 74.50s–74.50s (×1), actor 9, squad 1 (trace 18277): recovering: retry accepted element corridor in column. Knowledge: actor memory at 70.00s, trace 17890. Next observer evidence: {'until': 75, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18396}.
<a id="trace-18358"></a>
- 74.50s–74.50s (×1), actor 9, squad 1 (trace 18358): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 70.00s, trace 17890. Next observer evidence: {'until': 75, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18396}.
<a id="trace-18396"></a>
- 75.00s–75.00s (×1), actor 9, squad 1 (trace 18396): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 75.00s, trace 18382. Next observer evidence: {'until': 95, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1508}.
<a id="trace-1373"></a>
- 81.30s–81.30s (×1), actor 5, squad 0 (events line 1373): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18684"></a>
- 81.30s–81.30s (×1), actor 5, squad 0 (trace 18684): renew committed intent (75 s lifetime). Knowledge: actor memory at 81.30s, trace 18684. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18690}.
<a id="trace-18690"></a>
<a id="trace-18692"></a>
<a id="trace-18707"></a>
<a id="trace-18709"></a>
<a id="trace-18716"></a>
<a id="trace-18718"></a>
<a id="trace-18779"></a>
<a id="trace-18781"></a>
<a id="trace-18790"></a>
<a id="trace-18792"></a>
<a id="trace-18868"></a>
<a id="trace-18870"></a>
<a id="trace-18878"></a>
<a id="trace-18880"></a>
<a id="trace-18894"></a>
<a id="trace-18896"></a>
<a id="trace-18920"></a>
<a id="trace-18922"></a>
<a id="trace-18932"></a>
<a id="trace-18934"></a>
<a id="trace-18951"></a>
<a id="trace-18953"></a>
<a id="trace-18964"></a>
<a id="trace-18966"></a>
<a id="trace-18986"></a>
<a id="trace-18988"></a>
<a id="trace-18999"></a>
<a id="trace-19001"></a>
<a id="trace-19086"></a>
<a id="trace-19088"></a>
<a id="trace-19102"></a>
<a id="trace-19104"></a>
<a id="trace-19118"></a>
<a id="trace-19120"></a>
- 81.75s–91.25s (×34), actor 5, squad 0 (trace 18690): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 81.30s, trace 18684. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18707}.
<a id="trace-19126"></a>
- 91.45s–91.45s (×1), actor 1, squad 0 (trace 19126): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 90.00s, trace 19009. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19134}.
<a id="trace-19134"></a>
<a id="trace-19136"></a>
<a id="trace-19157"></a>
<a id="trace-19159"></a>
- 91.75s–92.25s (×4), actor 5, squad 0 (trace 19134): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 19013. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19157}.
<a id="trace-19166"></a>
- 92.45s–92.45s (×1), actor 1, squad 0 (trace 19166): MoveTactically. Knowledge: actor memory at 90.00s, trace 19009. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19194}.
<a id="trace-19167"></a>
- 92.45s–92.45s (×1), actor 1, squad 0 (trace 19167): received platoon directive. Knowledge: actor memory at 90.00s, trace 19009. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19194}.
<a id="trace-19194"></a>
<a id="trace-19196"></a>
<a id="trace-19222"></a>
<a id="trace-19224"></a>
- 92.75s–93.25s (×4), actor 5, squad 0 (trace 19194): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 19013. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19222}.
<a id="trace-19229"></a>
- 93.45s–93.45s (×1), actor 1, squad 0 (trace 19229): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 19009. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24749700835708285, 'next_transition': 19446}.
<a id="trace-19446"></a>
<a id="trace-19448"></a>
<a id="trace-19559"></a>
<a id="trace-19561"></a>
<a id="trace-19590"></a>
<a id="trace-19592"></a>
<a id="trace-19612"></a>
<a id="trace-19614"></a>
<a id="trace-19639"></a>
<a id="trace-19641"></a>
<a id="trace-19678"></a>
<a id="trace-19680"></a>
- 94.75s–98.25s (×12), actor 5, squad 0 (trace 19446): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 19013. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3499835229818749, 'next_transition': 19559}.
<a id="trace-1508"></a>
- 95.15s–95.15s (×1), actor 5, squad 1 (events line 1508): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19489"></a>
- 95.15s–95.15s (×1), actor 5, squad 1 (trace 19489): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.268332 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.15s, trace 19489. Next observer evidence: {'until': 101, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19946}.
<a id="trace-19490"></a>
- 95.15s–95.15s (×1), actor 5, squad 1 (trace 19490): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.268332 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.15s, trace 19490. Next observer evidence: {'until': 101, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19946}.
<a id="trace-19685"></a>
- 98.30s–98.30s (×1), actor 1, squad 0 (trace 19685): ReactToContact: cover and return fire. Knowledge: actor memory at 95.00s, trace 19457. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1700056495427942, 'next_transition': 19785}.
<a id="trace-19686"></a>
- 98.30s–98.30s (×1), actor 1, squad 0 (trace 19686): new contact inside 100 m. Knowledge: actor memory at 95.00s, trace 19457. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1700056495427942, 'next_transition': 19785}.
<a id="trace-19785"></a>
<a id="trace-19787"></a>
<a id="trace-19814"></a>
<a id="trace-19816"></a>
<a id="trace-19902"></a>
<a id="trace-19904"></a>
<a id="trace-20040"></a>
<a id="trace-20042"></a>
<a id="trace-20081"></a>
<a id="trace-20083"></a>
- 99.25s–102.25s (×10), actor 5, squad 0 (trace 19785): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.15s, trace 19490. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999632252479242, 'next_transition': 19814}.
<a id="trace-19946"></a>
- 101.15s–101.15s (×1), actor 9, squad 1 (trace 19946): received platoon directive. Knowledge: actor memory at 100.00s, trace 19829. Next observer evidence: {'until': 102, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20074}.
<a id="trace-20025"></a>
- 101.15s–101.15s (×1), actor 9, squad 1 (trace 20025): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 100.00s, trace 19829. Next observer evidence: {'until': 102, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20074}.
<a id="trace-20074"></a>
- 102.15s–102.15s (×1), actor 9, squad 1 (trace 20074): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 100.00s, trace 19829. Next observer evidence: {'until': 122.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1772}.
<a id="trace-20093"></a>
- 102.40s–102.40s (×1), actor 1, squad 0 (trace 20093): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 100.00s, trace 19822. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22426227792600903, 'next_transition': 20265}.
<a id="trace-20096"></a>
- 102.40s–102.40s (×1), actor 1, squad 0 (trace 20096): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 100.00s, trace 19822. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22426227792600903, 'next_transition': 20265}.
<a id="trace-20097"></a>
- 102.40s–102.40s (×1), actor 1, squad 0 (trace 20097): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 19822. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22426227792600903, 'next_transition': 20265}.
<a id="trace-20265"></a>
<a id="trace-20267"></a>
<a id="trace-20302"></a>
<a id="trace-20304"></a>
<a id="trace-20328"></a>
<a id="trace-20330"></a>
<a id="trace-20363"></a>
<a id="trace-20365"></a>
<a id="trace-20383"></a>
<a id="trace-20385"></a>
<a id="trace-20480"></a>
<a id="trace-20482"></a>
<a id="trace-20499"></a>
<a id="trace-20501"></a>
<a id="trace-20518"></a>
<a id="trace-20520"></a>
<a id="trace-20532"></a>
<a id="trace-20534"></a>
<a id="trace-20555"></a>
<a id="trace-20557"></a>
<a id="trace-20571"></a>
<a id="trace-20573"></a>
<a id="trace-20598"></a>
<a id="trace-20600"></a>
<a id="trace-20612"></a>
<a id="trace-20614"></a>
- 102.75s–108.75s (×26), actor 5, squad 0 (trace 20265): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 19826. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6261945755206513, 'next_transition': 20302}.
<a id="trace-1663"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (events line 1663): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4057984011061509, 'next_transition': 20643}.
<a id="trace-20626"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 20626): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.328593 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 108.95s, trace 20626. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4057984011061509, 'next_transition': 20643}.
<a id="trace-20627"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 20627): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.328593 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 108.95s, trace 20627. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4057984011061509, 'next_transition': 20643}.
<a id="trace-20643"></a>
<a id="trace-20645"></a>
<a id="trace-20660"></a>
<a id="trace-20662"></a>
<a id="trace-20746"></a>
<a id="trace-20748"></a>
<a id="trace-20768"></a>
<a id="trace-20770"></a>
<a id="trace-20796"></a>
<a id="trace-20798"></a>
<a id="trace-20809"></a>
<a id="trace-20811"></a>
<a id="trace-20831"></a>
<a id="trace-20833"></a>
<a id="trace-20845"></a>
<a id="trace-20847"></a>
<a id="trace-20867"></a>
<a id="trace-20869"></a>
<a id="trace-20879"></a>
<a id="trace-20881"></a>
<a id="trace-20900"></a>
<a id="trace-20902"></a>
<a id="trace-20913"></a>
<a id="trace-20915"></a>
<a id="trace-20989"></a>
<a id="trace-20991"></a>
<a id="trace-21001"></a>
<a id="trace-21003"></a>
<a id="trace-21019"></a>
<a id="trace-21021"></a>
<a id="trace-21055"></a>
<a id="trace-21057"></a>
- 109.25s–117.25s (×32), actor 5, squad 0 (trace 20643): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.95s, trace 20627. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15726037350465358, 'next_transition': 20660}.
<a id="trace-21063"></a>
- 117.70s–117.70s (×1), actor 1, squad 0 (trace 21063): NeedSupport. Knowledge: actor memory at 115.00s, trace 20922. Next observer evidence: {'until': 118.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.19440253630662593, 'next_transition': 21085}.
<a id="trace-21085"></a>
<a id="trace-21087"></a>
<a id="trace-21095"></a>
<a id="trace-21097"></a>
<a id="trace-21113"></a>
<a id="trace-21115"></a>
<a id="trace-21123"></a>
<a id="trace-21125"></a>
<a id="trace-21200"></a>
<a id="trace-21202"></a>
- 118.25s–120.25s (×10), actor 5, squad 0 (trace 21085): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 20926. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12959759978251037, 'next_transition': 21095}.
<a id="trace-21212"></a>
- 120.50s–120.50s (×1), actor 1, squad 0 (trace 21212): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 120.00s, trace 21131. Next observer evidence: {'until': 120.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.06480000000000022, 'next_transition': 21216}.
<a id="trace-21216"></a>
<a id="trace-21218"></a>
<a id="trace-21236"></a>
<a id="trace-21238"></a>
- 120.75s–121.25s (×4), actor 5, squad 0 (trace 21216): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 21135. Next observer evidence: {'until': 121.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13883333333333306, 'next_transition': 21236}.
<a id="trace-21246"></a>
- 121.50s–121.50s (×1), actor 1, squad 0 (trace 21246): Reorganise: completed/failed drill. Knowledge: actor memory at 120.00s, trace 21131. Next observer evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21327}.
<a id="trace-21251"></a>
- 121.50s–121.50s (×1), actor 1, squad 0 (trace 21251): ReactToContact: cover and return fire. Knowledge: actor memory at 120.00s, trace 21131. Next observer evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21327}.
<a id="trace-21252"></a>
- 121.50s–121.50s (×1), actor 1, squad 0 (trace 21252): Reorganise complete: known contact. Knowledge: actor memory at 120.00s, trace 21131. Next observer evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21327}.
<a id="trace-21327"></a>
<a id="trace-21329"></a>
<a id="trace-21351"></a>
<a id="trace-21353"></a>
<a id="trace-21373"></a>
<a id="trace-21375"></a>
<a id="trace-21424"></a>
<a id="trace-21426"></a>
<a id="trace-21453"></a>
<a id="trace-21455"></a>
<a id="trace-21545"></a>
<a id="trace-21547"></a>
- 121.75s–125.25s (×12), actor 5, squad 0 (trace 21327): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 21135. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21351}.
<a id="trace-1772"></a>
- 122.80s–122.80s (×1), actor 5, squad 1 (events line 1772): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1835}.
<a id="trace-21383"></a>
- 122.80s–122.80s (×1), actor 5, squad 1 (trace 21383): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.328905 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 122.80s, trace 21383. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1835}.
<a id="trace-21384"></a>
- 122.80s–122.80s (×1), actor 5, squad 1 (trace 21384): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.328905 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 122.80s, trace 21384. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1835}.
<a id="trace-21557"></a>
- 125.65s–125.65s (×1), actor 1, squad 0 (trace 21557): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 125.00s, trace 21479. Next observer evidence: None.
<a id="trace-21560"></a>
- 125.65s–125.65s (×1), actor 1, squad 0 (trace 21560): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 125.00s, trace 21479. Next observer evidence: None.
<a id="trace-21561"></a>
- 125.65s–125.65s (×1), actor 1, squad 0 (trace 21561): rearward bound: one stationary suppressing element. Knowledge: actor memory at 125.00s, trace 21479. Next observer evidence: None.
<a id="trace-21659"></a>
<a id="trace-21661"></a>
- 125.75s–125.75s (×2), actor 5, squad 0 (trace 21659): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 21482. Next observer evidence: {'until': 128.8, 'shots': 2, 'casualties': 2, 'mean_displacement': 0.0, 'next_transition': 1834}.
<a id="trace-1834"></a>
- 128.85s–128.85s (×1), actor 6, squad 0 (events line 1834): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1835"></a>
- 128.85s–128.85s (×1), actor 6, squad 1 (events line 1835): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21757"></a>
- 128.85s–128.85s (×1), actor 6, squad 0 (trace 21757): renew committed intent (75 s lifetime). Knowledge: actor memory at 128.85s, trace 21757. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21768}.
<a id="trace-21758"></a>
- 128.85s–128.85s (×1), actor 6, squad 1 (trace 21758): renew committed intent (75 s lifetime). Knowledge: actor memory at 128.85s, trace 21758. Next observer evidence: {'until': 130.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21874}.
<a id="trace-21768"></a>
<a id="trace-21860"></a>
<a id="trace-22818"></a>
<a id="trace-22820"></a>
<a id="trace-22855"></a>
<a id="trace-22857"></a>
- 129.30s–132.30s (×6), actor 6, squad 0 (trace 21768): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 128.85s, trace 21758. Next observer evidence: {'until': 130.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21860}.
<a id="trace-21874"></a>
- 130.80s–130.80s (×1), actor 9, squad 1 (trace 21874): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 130.00s, trace 21794. Next observer evidence: {'until': 131.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22839}.
<a id="trace-21875"></a>
- 130.80s–130.80s (×1), actor 9, squad 1 (trace 21875): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 130.00s, trace 21794. Next observer evidence: {'until': 131.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22839}.
<a id="trace-22839"></a>
- 131.80s–131.80s (×1), actor 9, squad 1 (trace 22839): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 130.00s, trace 21794. Next observer evidence: {'until': 134.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.622500375741872, 'next_transition': 1877}.
<a id="trace-22885"></a>
- 133.10s–133.10s (×1), actor 6, squad 0 (trace 22885): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 133.10s, trace 22885. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11810993290151289, 'next_transition': 22893}.
<a id="trace-22893"></a>
<a id="trace-22895"></a>
<a id="trace-22919"></a>
<a id="trace-22921"></a>
<a id="trace-23008"></a>
<a id="trace-23010"></a>
<a id="trace-23044"></a>
<a id="trace-23046"></a>
<a id="trace-23243"></a>
<a id="trace-23273"></a>
<a id="trace-23275"></a>
<a id="trace-23298"></a>
<a id="trace-23300"></a>
<a id="trace-23384"></a>
<a id="trace-23386"></a>
<a id="trace-23417"></a>
<a id="trace-23419"></a>
<a id="trace-23447"></a>
<a id="trace-23449"></a>
<a id="trace-23572"></a>
<a id="trace-23574"></a>
<a id="trace-23607"></a>
<a id="trace-23609"></a>
<a id="trace-23685"></a>
<a id="trace-23714"></a>
<a id="trace-23716"></a>
<a id="trace-23738"></a>
<a id="trace-23740"></a>
<a id="trace-23852"></a>
<a id="trace-23854"></a>
<a id="trace-23885"></a>
<a id="trace-23887"></a>
<a id="trace-23985"></a>
<a id="trace-23987"></a>
<a id="trace-24017"></a>
<a id="trace-24043"></a>
<a id="trace-24045"></a>
<a id="trace-24073"></a>
<a id="trace-24075"></a>
<a id="trace-24105"></a>
<a id="trace-24107"></a>
<a id="trace-24190"></a>
<a id="trace-24192"></a>
<a id="trace-24351"></a>
<a id="trace-24353"></a>
- 133.30s–156.30s (×45), actor 6, squad 0 (trace 22893): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 133.10s, trace 22885. Next observer evidence: {'until': 134.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22919}.
<a id="trace-1877"></a>
- 134.50s–134.50s (×1), actor 6, squad 1 (events line 1877): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.37748778937979, 'next_transition': 23053}.
<a id="trace-22933"></a>
- 134.50s–134.50s (×1), actor 6, squad 1 (trace 22933): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.448097 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 134.50s, trace 22933. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.37748778937979, 'next_transition': 23053}.
<a id="trace-22934"></a>
- 134.50s–134.50s (×1), actor 6, squad 1 (trace 22934): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.448097 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 134.50s, trace 22934. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.37748778937979, 'next_transition': 23053}.
<a id="trace-23053"></a>
- 136.35s–136.35s (×1), actor 9, squad 1 (trace 23053): MoveTactically. Knowledge: actor memory at 135.00s, trace 22948. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23147}.
<a id="trace-23054"></a>
- 136.35s–136.35s (×1), actor 9, squad 1 (trace 23054): received platoon directive. Knowledge: actor memory at 135.00s, trace 22948. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23147}.
<a id="trace-23133"></a>
- 136.35s–136.35s (×1), actor 9, squad 1 (trace 23133): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 135.00s, trace 22948. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23147}.
<a id="trace-23147"></a>
- 136.80s–136.80s (×1), actor 9, squad 1 (trace 23147): recovering: retry accepted element corridor in column. Knowledge: actor memory at 135.00s, trace 22948. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23258}.
<a id="trace-23224"></a>
- 136.80s–136.80s (×1), actor 9, squad 1 (trace 23224): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 135.00s, trace 22948. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23258}.
<a id="trace-23258"></a>
- 137.80s–137.80s (×1), actor 9, squad 1 (trace 23258): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 135.00s, trace 22948. Next observer evidence: {'until': 140, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1914}.
<a id="trace-1914"></a>
- 140.10s–140.10s (×1), actor 6, squad 1 (events line 1914): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23337"></a>
- 140.10s–140.10s (×1), actor 6, squad 1 (trace 23337): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.454178 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 140.10s, trace 23337. Next observer evidence: {'until': 142.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23458}.
<a id="trace-23338"></a>
- 140.10s–140.10s (×1), actor 6, squad 1 (trace 23338): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.454178 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 140.10s, trace 23338. Next observer evidence: {'until': 142.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23458}.
<a id="trace-23458"></a>
- 142.45s–142.45s (×1), actor 9, squad 1 (trace 23458): received platoon directive. Knowledge: actor memory at 140.00s, trace 23324. Next observer evidence: {'until': 143.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23589}.
<a id="trace-23543"></a>
- 142.45s–142.45s (×1), actor 9, squad 1 (trace 23543): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 140.00s, trace 23324. Next observer evidence: {'until': 143.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23589}.
<a id="trace-23589"></a>
- 143.45s–143.45s (×1), actor 9, squad 1 (trace 23589): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 140.00s, trace 23324. Next observer evidence: {'until': 145.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1946}.
<a id="trace-1946"></a>
- 145.75s–145.75s (×1), actor 6, squad 1 (events line 1946): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 148, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23762}.
<a id="trace-23698"></a>
- 145.75s–145.75s (×1), actor 6, squad 1 (trace 23698): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.515940 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 145.75s, trace 23698. Next observer evidence: {'until': 148, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23762}.
<a id="trace-23699"></a>
- 145.75s–145.75s (×1), actor 6, squad 1 (trace 23699): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.515940 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 145.75s, trace 23699. Next observer evidence: {'until': 148, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23762}.
<a id="trace-23762"></a>
- 148.10s–148.10s (×1), actor 9, squad 1 (trace 23762): received platoon directive. Knowledge: actor memory at 145.00s, trace 23628. Next observer evidence: {'until': 155.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.927896303432609, 'next_transition': 24202}.
<a id="trace-23841"></a>
- 148.10s–148.10s (×1), actor 9, squad 1 (trace 23841): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 145.00s, trace 23628. Next observer evidence: {'until': 155.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.927896303432609, 'next_transition': 24202}.
<a id="trace-24202"></a>
- 155.40s–155.40s (×1), actor 9, squad 1 (trace 24202): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 155.00s, trace 24132. Next observer evidence: {'until': 157.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8202186459461402, 'next_transition': 24419}.
<a id="trace-24364"></a>
- 156.55s–156.55s (×1), actor 2, squad 0 (trace 24364): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 155.00s, trace 24128. Next observer evidence: {'until': 157.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.5083513502264941, 'next_transition': 24399}.
<a id="trace-24399"></a>
<a id="trace-24401"></a>
<a id="trace-24521"></a>
<a id="trace-24523"></a>
<a id="trace-24549"></a>
<a id="trace-24551"></a>
<a id="trace-24637"></a>
<a id="trace-24639"></a>
<a id="trace-24665"></a>
<a id="trace-24667"></a>
<a id="trace-24693"></a>
<a id="trace-24695"></a>
<a id="trace-24726"></a>
<a id="trace-24728"></a>
<a id="trace-24750"></a>
<a id="trace-24752"></a>
<a id="trace-24836"></a>
<a id="trace-24838"></a>
<a id="trace-24976"></a>
<a id="trace-24978"></a>
<a id="trace-25052"></a>
<a id="trace-25054"></a>
<a id="trace-25086"></a>
<a id="trace-25088"></a>
<a id="trace-25119"></a>
<a id="trace-25121"></a>
<a id="trace-25213"></a>
<a id="trace-25215"></a>
<a id="trace-25248"></a>
<a id="trace-25250"></a>
<a id="trace-25276"></a>
<a id="trace-25278"></a>
<a id="trace-25309"></a>
<a id="trace-25311"></a>
<a id="trace-25338"></a>
<a id="trace-25340"></a>
<a id="trace-25528"></a>
<a id="trace-25530"></a>
<a id="trace-25560"></a>
<a id="trace-25562"></a>
<a id="trace-25586"></a>
<a id="trace-25588"></a>
<a id="trace-25618"></a>
<a id="trace-25620"></a>
<a id="trace-25648"></a>
<a id="trace-25650"></a>
<a id="trace-25742"></a>
<a id="trace-25777"></a>
<a id="trace-25779"></a>
<a id="trace-25807"></a>
<a id="trace-25809"></a>
<a id="trace-26366"></a>
<a id="trace-26386"></a>
<a id="trace-26459"></a>
<a id="trace-26483"></a>
<a id="trace-26508"></a>
<a id="trace-26533"></a>
<a id="trace-26554"></a>
<a id="trace-26627"></a>
- 157.30s–190.30s (×59), actor 6, squad 0 (trace 24399): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 155.00s, trace 24130. Next observer evidence: {'until': 158.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5587082808809978, 'next_transition': 24521}.
<a id="trace-24419"></a>
- 157.80s–157.80s (×1), actor 9, squad 1 (trace 24419): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 155.00s, trace 24132. Next observer evidence: {'until': 165.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.007659414877152, 'next_transition': 2066}.
<a id="trace-24508"></a>
- 157.80s–157.80s (×1), actor 9, squad 1 (trace 24508): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 155.00s, trace 24132. Next observer evidence: {'until': 165.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.007659414877152, 'next_transition': 2066}.
<a id="trace-2066"></a>
- 165.40s–165.40s (×1), actor 6, squad 1 (events line 2066): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24848"></a>
- 165.40s–165.40s (×1), actor 6, squad 1 (trace 24848): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.989552 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 165.40s, trace 24848. Next observer evidence: {'until': 166.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24867}.
<a id="trace-24849"></a>
- 165.40s–165.40s (×1), actor 6, squad 1 (trace 24849): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.989552 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 165.40s, trace 24849. Next observer evidence: {'until': 166.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24867}.
<a id="trace-24867"></a>
- 166.20s–166.20s (×1), actor 9, squad 1 (trace 24867): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 165.00s, trace 24777. Next observer evidence: {'until': 167.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24998}.
<a id="trace-24998"></a>
- 167.20s–167.20s (×1), actor 9, squad 1 (trace 24998): received platoon directive. Knowledge: actor memory at 165.00s, trace 24777. Next observer evidence: {'until': 174.6, 'shots': 3, 'casualties': 1, 'mean_displacement': 4.405181779342369, 'next_transition': 25351}.
<a id="trace-25351"></a>
- 174.60s–174.60s (×1), actor 9, squad 1 (trace 25351): ReactToContact: cover and return fire. Knowledge: actor memory at 170.00s, trace 25155. Next observer evidence: {'until': 177.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.350405838755504, 'next_transition': 25609}.
<a id="trace-25352"></a>
- 174.60s–174.60s (×1), actor 9, squad 1 (trace 25352): new contact inside 100 m. Knowledge: actor memory at 170.00s, trace 25155. Next observer evidence: {'until': 177.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.350405838755504, 'next_transition': 25609}.
<a id="trace-25609"></a>
- 177.90s–177.90s (×1), actor 9, squad 1 (trace 25609): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 175.00s, trace 25468. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.616032418004242, 'next_transition': 2150}.
<a id="trace-2150"></a>
- 182.30s–182.30s (×1), actor 6, squad 1 (events line 2150): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 182.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4422415052886831, 'next_transition': 25952}.
<a id="trace-25816"></a>
- 182.30s–182.30s (×1), actor 6, squad 1 (trace 25816): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.559711 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 182.30s, trace 25816. Next observer evidence: {'until': 182.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4422415052886831, 'next_transition': 25952}.
<a id="trace-25817"></a>
- 182.30s–182.30s (×1), actor 6, squad 1 (trace 25817): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.559711 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 182.30s, trace 25817. Next observer evidence: {'until': 182.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4422415052886831, 'next_transition': 25952}.
<a id="trace-25818"></a>
<a id="trace-25952"></a>
<a id="trace-26084"></a>
<a id="trace-26215"></a>
- 182.30s–182.60s (×4), actor 9, squad 1 (trace 25818): new contact inside 100 m. Knowledge: actor memory at 180.00s, trace 25676. Next observer evidence: {'until': 182.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4422415052886831, 'next_transition': 25952}.
<a id="trace-2189"></a>
- 190.75s–190.75s (×1), actor 6, squad 0 (events line 2189): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26654}.
<a id="trace-26640"></a>
- 190.75s–190.75s (×1), actor 6, squad 0 (trace 26640): renew committed intent (75 s lifetime). Knowledge: actor memory at 190.75s, trace 26640. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26654}.
<a id="trace-26654"></a>
<a id="trace-26676"></a>
<a id="trace-26706"></a>
<a id="trace-26724"></a>
<a id="trace-26792"></a>
- 191.30s–195.30s (×5), actor 6, squad 0 (trace 26654): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 190.75s, trace 26640. Next observer evidence: {'until': 192.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26676}.
<a id="trace-26813"></a>
- 196.25s–196.25s (×1), actor 6, squad 0 (trace 26813): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 196.25s, trace 26813. Next observer evidence: None.
<a id="trace-26815"></a>
<a id="trace-26833"></a>
<a id="trace-26863"></a>
<a id="trace-26879"></a>
<a id="trace-26953"></a>
<a id="trace-26974"></a>
<a id="trace-26987"></a>
<a id="trace-27009"></a>
<a id="trace-27024"></a>
<a id="trace-27107"></a>
<a id="trace-27129"></a>
<a id="trace-27148"></a>
<a id="trace-27164"></a>
<a id="trace-27177"></a>
<a id="trace-27254"></a>
<a id="trace-27282"></a>
<a id="trace-27301"></a>
<a id="trace-27327"></a>
<a id="trace-27344"></a>
<a id="trace-27414"></a>
<a id="trace-27438"></a>
<a id="trace-27455"></a>
<a id="trace-27478"></a>
<a id="trace-27499"></a>
<a id="trace-27573"></a>
<a id="trace-27596"></a>
<a id="trace-27612"></a>
<a id="trace-27633"></a>
<a id="trace-27656"></a>
<a id="trace-27738"></a>
<a id="trace-27770"></a>
<a id="trace-27791"></a>
<a id="trace-27811"></a>
<a id="trace-27826"></a>
<a id="trace-27927"></a>
<a id="trace-27946"></a>
<a id="trace-27970"></a>
<a id="trace-27986"></a>
<a id="trace-28059"></a>
<a id="trace-28085"></a>
<a id="trace-28108"></a>
<a id="trace-28140"></a>
<a id="trace-28155"></a>
<a id="trace-28230"></a>
<a id="trace-28249"></a>
<a id="trace-28263"></a>
<a id="trace-28288"></a>
<a id="trace-28311"></a>
<a id="trace-28386"></a>
<a id="trace-28414"></a>
<a id="trace-28428"></a>
<a id="trace-28448"></a>
<a id="trace-28464"></a>
<a id="trace-28539"></a>
<a id="trace-28566"></a>
<a id="trace-28592"></a>
- 196.30s–252.30s (×56), actor 6, squad 0 (trace 26815): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 196.25s, trace 26813. Next observer evidence: {'until': 197.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26833}.
<a id="trace-2414"></a>
- 252.50s–252.50s (×1), actor 6, squad 0 (events line 2414): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 253.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28622}.
<a id="trace-28601"></a>
- 252.50s–252.50s (×1), actor 6, squad 0 (trace 28601): renew committed intent (75 s lifetime). Knowledge: actor memory at 252.50s, trace 28601. Next observer evidence: {'until': 253.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28622}.
<a id="trace-28622"></a>
<a id="trace-28638"></a>
<a id="trace-28713"></a>
<a id="trace-28738"></a>
<a id="trace-28755"></a>
<a id="trace-28791"></a>
<a id="trace-28816"></a>
<a id="trace-28893"></a>
<a id="trace-28916"></a>
<a id="trace-28938"></a>
<a id="trace-28961"></a>
<a id="trace-28985"></a>
<a id="trace-29061"></a>
<a id="trace-29085"></a>
<a id="trace-29101"></a>
<a id="trace-29120"></a>
<a id="trace-29138"></a>
<a id="trace-29211"></a>
<a id="trace-29239"></a>
<a id="trace-29255"></a>
<a id="trace-29277"></a>
<a id="trace-29295"></a>
<a id="trace-29369"></a>
<a id="trace-29394"></a>
<a id="trace-29415"></a>
<a id="trace-29438"></a>
<a id="trace-29460"></a>
<a id="trace-29529"></a>
<a id="trace-29549"></a>
<a id="trace-29587"></a>
<a id="trace-29608"></a>
- 253.30s–284.30s (×31), actor 6, squad 0 (trace 28622): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 252.50s, trace 28601. Next observer evidence: {'until': 254.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28638}.
<a id="trace-29695"></a>
- 285.55s–285.55s (×1), actor 2, squad 0 (trace 29695): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 285.00s, trace 29627. Next observer evidence: {'until': 285.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 29701}.
<a id="trace-29696"></a>
- 285.55s–285.55s (×1), actor 2, squad 0 (trace 29696): NeedSupport. Knowledge: actor memory at 285.00s, trace 29627. Next observer evidence: {'until': 285.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 29701}.
<a id="trace-29701"></a>
- 285.60s–285.60s (×1), actor 2, squad 0 (trace 29701): Reorganise: completed/failed drill. Knowledge: actor memory at 285.00s, trace 29627. Next observer evidence: {'until': 286.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29726}.
<a id="trace-29703"></a>
- 285.60s–285.60s (×1), actor 2, squad 0 (trace 29703): ReactToContact: cover and return fire. Knowledge: actor memory at 285.00s, trace 29627. Next observer evidence: {'until': 286.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29726}.
<a id="trace-29704"></a>
- 285.60s–285.60s (×1), actor 2, squad 0 (trace 29704): Reorganise complete: known contact. Knowledge: actor memory at 285.00s, trace 29627. Next observer evidence: {'until': 286.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29726}.
<a id="trace-29726"></a>
<a id="trace-29741"></a>
<a id="trace-29765"></a>
- 286.30s–288.30s (×3), actor 6, squad 0 (trace 29726): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 285.00s, trace 29629. Next observer evidence: {'until': 287.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29741}.
<a id="trace-29783"></a>
- 289.10s–289.10s (×1), actor 2, squad 0 (trace 29783): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 285.00s, trace 29627. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150113966192341, 'next_transition': 29789}.
<a id="trace-29785"></a>
- 289.10s–289.10s (×1), actor 2, squad 0 (trace 29785): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 285.00s, trace 29627. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150113966192341, 'next_transition': 29789}.
<a id="trace-29789"></a>
<a id="trace-29866"></a>
- 289.30s–290.30s (×2), actor 6, squad 0 (trace 29789): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 285.00s, trace 29629. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749755363179463, 'next_transition': 29866}.
<a id="trace-2640"></a>
- 290.80s–290.80s (×1), actor 6, squad 0 (events line 2640): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29891"></a>
- 290.80s–290.80s (×1), actor 6, squad 0 (trace 29891): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.677752 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 290.80s, trace 29891. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362712001069937, 'next_transition': 29907}.
<a id="trace-29892"></a>
- 290.80s–290.80s (×1), actor 6, squad 0 (trace 29892): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.677752 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 290.80s, trace 29892. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362712001069937, 'next_transition': 29907}.
<a id="trace-29907"></a>
<a id="trace-29931"></a>
- 291.30s–292.30s (×2), actor 6, squad 0 (trace 29907): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 290.80s, trace 29892. Next observer evidence: {'until': 292.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29931}.
<a id="trace-29942"></a>
- 292.70s–292.70s (×1), actor 2, squad 0 (trace 29942): MoveTactically. Knowledge: actor memory at 290.00s, trace 29808. Next observer evidence: None.
<a id="trace-29943"></a>
- 292.70s–292.70s (×1), actor 2, squad 0 (trace 29943): received platoon directive. Knowledge: actor memory at 290.00s, trace 29808. Next observer evidence: None.
<a id="trace-29947"></a>
- 292.75s–292.75s (×1), actor 2, squad 0 (trace 29947): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 290.00s, trace 29808. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29960}.
<a id="trace-29960"></a>
<a id="trace-29980"></a>
<a id="trace-30057"></a>
<a id="trace-30080"></a>
<a id="trace-30104"></a>
<a id="trace-30133"></a>
<a id="trace-30156"></a>
<a id="trace-30230"></a>
<a id="trace-30252"></a>
<a id="trace-30269"></a>
<a id="trace-30291"></a>
<a id="trace-30320"></a>
<a id="trace-30394"></a>
<a id="trace-30421"></a>
<a id="trace-30443"></a>
<a id="trace-30464"></a>
<a id="trace-30483"></a>
<a id="trace-30560"></a>
<a id="trace-30587"></a>
<a id="trace-30612"></a>
<a id="trace-30633"></a>
<a id="trace-30652"></a>
<a id="trace-30725"></a>
<a id="trace-30751"></a>
<a id="trace-30775"></a>
<a id="trace-30802"></a>
<a id="trace-30823"></a>
<a id="trace-30895"></a>
<a id="trace-30918"></a>
<a id="trace-30939"></a>
<a id="trace-30963"></a>
<a id="trace-30992"></a>
<a id="trace-31068"></a>
<a id="trace-31089"></a>
<a id="trace-31109"></a>
<a id="trace-31130"></a>
<a id="trace-31149"></a>
<a id="trace-31231"></a>
<a id="trace-31258"></a>
<a id="trace-31280"></a>
<a id="trace-31302"></a>
<a id="trace-31321"></a>
<a id="trace-31394"></a>
<a id="trace-31417"></a>
<a id="trace-31444"></a>
<a id="trace-31467"></a>
<a id="trace-31489"></a>
<a id="trace-31565"></a>
<a id="trace-31587"></a>
<a id="trace-31608"></a>
<a id="trace-31633"></a>
<a id="trace-31656"></a>
<a id="trace-31735"></a>
<a id="trace-31756"></a>
<a id="trace-31776"></a>
<a id="trace-31798"></a>
<a id="trace-31819"></a>
<a id="trace-31896"></a>
<a id="trace-31922"></a>
<a id="trace-31946"></a>
- 293.30s–352.30s (×60), actor 6, squad 0 (trace 29960): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 290.80s, trace 29892. Next observer evidence: {'until': 294.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29980}.
<a id="trace-31954"></a>
- 352.40s–352.40s (×1), actor 6, squad 0 (trace 31954): renew committed intent (75 s lifetime). Knowledge: actor memory at 352.40s, trace 31954. Next observer evidence: {'until': 352.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3082}.
<a id="trace-3082"></a>
- 352.40s–352.40s (×1), actor 6, squad 0 (events line 3082): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 353.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31969}.
<a id="trace-31969"></a>
<a id="trace-31991"></a>
<a id="trace-32063"></a>
<a id="trace-32086"></a>
<a id="trace-32113"></a>
<a id="trace-32140"></a>
<a id="trace-32159"></a>
- 353.30s–359.30s (×7), actor 6, squad 0 (trace 31969): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 352.40s, trace 31954. Next observer evidence: {'until': 354.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31991}.

## Net delivery

250 matched order/radio deliveries; 178 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.569s; maximum 5.450s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 5463: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 5464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 5465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 5466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 5467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 5468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 5469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 5470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 5471: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 5472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 5473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 5474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 5475: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 5476: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 5477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 5478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 5479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 5480: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 5481: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 5482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 5483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 5484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 5485: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 5486: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 10312: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 10313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 10314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 10315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 10316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 10317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 10318: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 10319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 10320: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 10321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 10322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 10323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 10324: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 10325: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 10326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 10327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 10328: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 10329: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 10330: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 10331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 10332: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 10333: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 10334: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 10335: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 11584: estimate 14.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 11585: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 11586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 11587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 11588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 11589: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 11590: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 11591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 11592: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 11593: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 11594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 11595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 11596: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 11597: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 11598: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 11599: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 11600: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 11601: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 11602: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 11603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 11604: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 11605: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 11606: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 11607: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 12368: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 12369: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 12370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 12371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 12372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 12373: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 12374: estimate 13.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 12375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 12376: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 12377: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 12378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 12379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 12380: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 12381: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 12382: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 12383: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 12384: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 12385: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 12386: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 12387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 12388: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 12389: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 12390: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 12391: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 13173: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 13174: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 13178: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 13179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 13180: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 13181: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 13182: estimate 13.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 13183: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 13184: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 13185: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 13186: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 13187: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 13188: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 13189: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 13190: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 13191: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 13192: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 13193: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 13194: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 13195: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 13196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 13197: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 13198: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 13199: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 13200: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 15598: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 15599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 15600: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 15601: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 15602: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 15603: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 15604: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 15605: estimate 13.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 15606: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 15607: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 15608: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 15609: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 15610: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 15611: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 15612: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 15613: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 15614: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 15615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 15616: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 15617: estimate 13.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 15618: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 15619: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 16248: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 16249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 16250: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 16251: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 16252: estimate 14.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 16253: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 16254: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 16255: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 16256: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 16257: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 16258: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 16259: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 16260: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 16261: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 16262: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 16263: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 16264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 16265: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 16266: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 16267: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 16268: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 16525: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 16526: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 16527: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 16528: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 16529: estimate 14.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 16530: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 16531: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 16532: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 16533: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 16534: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 16535: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 16536: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 16537: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 16538: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 16539: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 16540: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 16541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 16542: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 16543: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 16544: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 16545: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 17097: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 17098: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 17099: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 17100: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 17101: estimate 14.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 17102: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 17103: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 17104: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 17105: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 17106: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 17107: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 17108: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 17109: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 17110: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 17111: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 17112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 17113: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 17114: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 17115: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 17116: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 17557: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 17558: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 17559: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 17560: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 17561: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 17562: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 17563: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 17564: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 17565: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 17566: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 17567: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 17568: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 17569: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 17570: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 17571: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 17572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 17573: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 17574: estimate 13.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 17575: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 17576: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 17883: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 17884: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 17885: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 17886: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 17887: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 17888: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 17889: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 17890: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 17891: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 17892: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 17893: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 17894: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 17895: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 17896: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 17897: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 17898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 17899: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 17900: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 17901: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 17902: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 18375: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 18376: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 18377: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 18378: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 18379: estimate 14.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 18380: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 18381: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 18382: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 18383: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 18384: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 18385: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 18386: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 18387: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 18388: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 18389: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 18390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 18391: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 18392: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 18393: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 18394: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 18576: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 18577: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 18578: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 18579: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 18580: estimate 14.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 18581: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 18582: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 18583: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 18584: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 18585: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 18586: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 18587: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 18588: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 18589: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 18590: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 18591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 18592: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 18593: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 18594: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 18595: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.30s leader 5, trace 18684: estimate 14.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 18798: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 18799: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 18800: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 18801: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 18802: estimate 14.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 18803: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 18804: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 18805: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 18806: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 18807: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 18808: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 18809: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 18810: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 18811: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 18812: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 18813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 18814: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 18815: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 18816: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 18817: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 19009: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 19010: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 19011: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 19012: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 19013: estimate 14.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 19014: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 19015: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 19016: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 19017: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 19018: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 19019: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 19020: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 19021: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 19022: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 19023: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 19024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 19025: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 19026: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 19027: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 19028: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 19457: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 19458: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 19459: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 19460: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 19461: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 19462: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 19463: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 19464: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 19465: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 19466: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 19467: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 19468: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 19469: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 19470: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 19471: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 19472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 19473: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 19474: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 19475: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 19476: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.15s leader 5, trace 19489: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.15s leader 5, trace 19490: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 19822: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 19823: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 19824: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 19825: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 19826: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 19827: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 19828: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 19829: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 19830: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 19831: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 19832: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 19833: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 19834: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 19835: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 19836: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 19837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 19838: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 19839: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 19840: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 19841: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 20396: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 20397: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 20398: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 20399: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 20400: estimate 13.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 20401: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 20402: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 20403: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 20404: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 20405: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 20406: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 20407: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 20408: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 20409: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 20410: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 20411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 20412: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 20413: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 20414: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 20415: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 20626: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 20627: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 20676: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 20677: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 20678: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 20679: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 20680: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 20681: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 20682: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 20683: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 20684: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 20685: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 20686: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 20687: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 20688: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 20689: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 20690: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 20691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 20692: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 20693: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 20694: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 20695: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 20922: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 20923: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 20924: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 20925: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 20926: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 20927: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 20928: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 20929: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 20930: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 20931: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 20932: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 20933: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 20934: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 20935: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 20936: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 20937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 20938: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 20939: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 20940: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 20941: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 21131: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 21132: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 21133: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 21134: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 21135: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 21136: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 21137: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 21138: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 21139: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 21140: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 21141: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 21142: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 21143: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 21144: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 21145: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 21146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 21147: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 21148: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 21149: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 21150: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.80s leader 5, trace 21383: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.80s leader 5, trace 21384: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 21479: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 21480: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 21481: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 21482: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 21483: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 21484: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 21485: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 21486: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 21487: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 21488: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 21489: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 21490: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 21491: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 21492: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 21493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 21494: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 21495: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 21496: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 21497: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 128.85s leader 6, trace 21757: estimate 11.41; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 128.85s leader 6, trace 21758: estimate 11.41; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 21790: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 21791: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 21792: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 21793: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 21794: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 21795: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 21796: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 21797: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 21798: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 21799: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 21800: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 21801: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 21802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 21803: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 21804: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 21805: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 21806: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 133.10s leader 6, trace 22885: estimate 11.22; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 134.50s leader 6, trace 22933: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 134.50s leader 6, trace 22934: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 22944: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 22945: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 22946: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 22947: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 22948: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 22949: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 22950: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 22951: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 22952: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 22953: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 22954: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 22955: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 22956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 22957: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 22958: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 22959: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 22960: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 23320: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 23321: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 23322: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 23323: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 23324: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 11, trace 23325: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 23326: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 23327: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 23328: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 23329: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 23330: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 23331: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 23332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 23333: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 23334: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 23335: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 23336: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.10s leader 6, trace 23337: estimate 11.01; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.10s leader 6, trace 23338: estimate 11.01; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 23624: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 23625: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 23626: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 23627: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 23628: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 11, trace 23629: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 23630: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 23631: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 23632: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 23633: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 23634: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 23635: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 23636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 23637: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 23638: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 23639: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 23640: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.75s leader 6, trace 23698: estimate 9.69; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.75s leader 6, trace 23699: estimate 9.69; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 23918: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 23919: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 23920: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 23921: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 23922: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 11, trace 23923: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 23924: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 23925: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 23926: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 23927: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 23928: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 23929: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 23930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 23931: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 23932: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 23933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 23934: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 24128: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 24129: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 24130: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 24131: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 24132: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 11, trace 24133: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 24134: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 24135: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 24136: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 24137: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 24138: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 24139: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 24140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 24141: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 24142: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 24143: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 24144: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 24574: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 24575: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 24576: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 24577: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 24578: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 11, trace 24579: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 24580: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 24581: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 24582: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 24583: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 24584: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 24585: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 24586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 24587: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 24588: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 24589: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 24590: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 24774: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 24775: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 24776: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 24777: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 11, trace 24778: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 24779: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 24780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 24781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 24782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 24783: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 24784: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 24785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 24786: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 24787: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 24788: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 24789: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.40s leader 6, trace 24848: estimate 4.04; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.40s leader 6, trace 24849: estimate 4.04; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 25152: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 25153: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 25154: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 25155: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 11, trace 25156: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 25157: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 25158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 25159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 25160: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 25161: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 25162: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 25163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 25164: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 25165: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 25166: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 25167: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 25465: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 25466: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 25467: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 25468: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 25469: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 25470: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 25471: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 25472: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 25473: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 25474: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 25475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 25476: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 25477: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 25478: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 25479: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 25673: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 25674: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 25675: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 25676: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 25677: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 25678: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 25679: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 25680: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 25681: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 25682: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 25683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 25684: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 25685: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 25686: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 25687: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 182.30s leader 6, trace 25816: estimate 5.36; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 182.30s leader 6, trace 25817: estimate 5.36; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 26401: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 26402: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 26403: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 26404: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 26405: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 26406: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 26407: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 26408: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 26409: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 26410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 26411: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 26412: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 26413: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 26414: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 26571: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 26572: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 26573: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 26574: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 26575: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 26576: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 26577: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 26578: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 26579: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 26580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 26581: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 26582: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 26583: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 26584: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.75s leader 6, trace 26640: estimate 5.25; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 26736: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 26737: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 26738: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 26739: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 26740: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 26741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 26742: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 26743: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 26744: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 26745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 26746: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 26747: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 26748: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 26749: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 196.25s leader 6, trace 26813: estimate 5.17; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 26897: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 26898: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 26899: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 26900: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 26901: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 26902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 26903: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 26904: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 26905: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 26906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 26907: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 26908: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 26909: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 26910: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 27046: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 27047: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 27048: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 27049: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 27050: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 27051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 27052: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 27053: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 27054: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 27055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 27056: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 27057: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 27058: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 27059: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 27193: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 27194: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 27195: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 27196: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 27197: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 27198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 27199: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 27200: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 27201: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 27202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 27203: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 27204: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 27205: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 27206: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 27357: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 27358: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 27359: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 27360: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 27361: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 27362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 27363: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 27364: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 27365: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 27366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 27367: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 27368: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 27369: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 27370: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 2, trace 27516: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 27517: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 27518: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 27519: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 27520: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 27521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 27522: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 27523: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 27524: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 27525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 27526: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 27527: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 27528: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 27529: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 2, trace 27678: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 27679: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 27680: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 27681: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 27682: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 27683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 27684: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 27685: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 27686: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 27687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 27688: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 27689: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 27690: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 27691: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 2, trace 27841: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 27842: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 27843: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 27844: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 27845: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 27846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 27847: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 27848: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 27849: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 27850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 27851: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 27852: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 27853: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 27854: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 2, trace 28003: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 28004: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 28005: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 28006: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 28007: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 28008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 28009: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 28010: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 28011: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 28012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 28013: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 28014: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 28015: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 28016: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 2, trace 28174: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 28175: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 28176: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 28177: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 28178: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 28179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 28180: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 28181: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 28182: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 28183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 28184: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 28185: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 28186: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 28187: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 2, trace 28330: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 28331: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 28332: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 28333: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 28334: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 28335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 28336: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 28337: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 28338: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 28339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 28340: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 28341: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 28342: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 28343: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 2, trace 28480: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 28481: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 28482: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 28483: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 28484: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 28485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 28486: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 28487: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 28488: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 28489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 28490: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 28491: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 28492: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 28493: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 252.50s leader 6, trace 28601: estimate 4.49; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 2, trace 28654: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 28655: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 28656: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 28657: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 28658: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 28659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 28660: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 28661: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 28662: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 28663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 28664: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 28665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 28666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 28667: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 2, trace 28836: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 28837: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 28838: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 28839: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 28840: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 28841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 28842: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 28843: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 28844: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 28845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 28846: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 28847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 28848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 28849: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 2, trace 29002: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 29003: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 29004: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 29005: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 29006: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 29007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 29008: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 29009: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 29010: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 29011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 29012: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 29013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 29014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 29015: estimate 1.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 2, trace 29153: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 29154: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 29155: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 29156: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 29157: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 29158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 29159: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 29160: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 29161: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 29162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 29163: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 29164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 29165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 29166: estimate 1.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 2, trace 29313: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 29314: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 29315: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 29316: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 29317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 29318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 29319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 29320: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 29321: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 29322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 29323: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 29324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 29325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 29326: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 2, trace 29473: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 29474: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 29475: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 29476: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 29477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 29478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 29479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 29480: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 29481: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 29482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 29483: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 29484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 29485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 29486: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 2, trace 29627: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 29628: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 29629: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 29630: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 29631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 29632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 29633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 29634: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 29635: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 29636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 29637: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 29638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 29639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 29640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 2, trace 29808: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 29809: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 29810: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 29811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 29812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 29813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 29814: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 29815: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 29816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 29817: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 29818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 29819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 29820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.80s leader 6, trace 29891: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.80s leader 6, trace 29892: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 2, trace 30001: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 30002: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 30003: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 30004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 30005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 30006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 30007: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 30008: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 30009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 30010: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 30011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 30012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 30013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 2, trace 30173: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 30174: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 30175: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 30176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 30177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 30178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 30179: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 30180: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 30181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 30182: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 30183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 30184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 30185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 2, trace 30339: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 30340: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 30341: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 30342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 30343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 30344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 30345: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 30346: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 30347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 30348: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 30349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 30350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 30351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 2, trace 30500: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 30501: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 30502: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 30503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 30504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 30505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 30506: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 30507: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 30508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 30509: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 30510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 30511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 30512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 2, trace 30668: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 30669: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 30670: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 30671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 30672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 30673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 30674: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 30675: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 30676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 30677: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 30678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 30679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 30680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 2, trace 30839: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 30840: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 30841: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 30842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 30843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 30844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 30845: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 30846: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 30847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 30848: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 30849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 30850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 30851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 2, trace 31007: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 31008: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 31009: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 31010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 31011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 31012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 31013: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 31014: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 31015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 31016: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 31017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 31018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 31019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 2, trace 31167: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 31168: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 31169: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 31170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 31171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 31172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 31173: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 31174: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 31175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 31176: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 31177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 31178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 31179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 2, trace 31338: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 31339: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 31340: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 31341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 31342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 31343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 31344: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 31345: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 31346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 31347: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 31348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 31349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 31350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 2, trace 31507: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 31508: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 31509: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 31510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 31511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 31512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 31513: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 31514: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 31515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 31516: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 31517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 31518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 31519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 2, trace 31674: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 31675: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 31676: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 31677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 31678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 31679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 31680: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 31681: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 31682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 31683: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 31684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 31685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 31686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 2, trace 31838: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 31839: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 31840: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 31841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 31842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 31843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 31844: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 31845: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 31846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 31847: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 31848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 31849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 31850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 352.40s leader 6, trace 31954: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 2, trace 32006: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 32007: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 32008: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 32009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 32010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 32011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 32012: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 32013: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 32014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 32015: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 32016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 32017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 32018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 2, trace 32175: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 32176: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 32177: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 32178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 32179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 32180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 32181: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 32182: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 32183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 32184: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 32185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 32186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 32187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Dane killed in action
- 1: Bren incapacitated
- 1: Voss killed in action
- 1: Ash killed in action
- 1: Iven incapacitated
- 1: Rook killed in action
- 1: Reed incapacitated
- 1: Ellis incapacitated
- 1: Cole killed in action
- 1: Tern killed in action

## Outcome attribution

- 75.00s, evidence 18396: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 95, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1508}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 102.15s, evidence 20074: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 122.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1772}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 137.80s, evidence 23258: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 140, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1914}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 143.45s, evidence 23589: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 145.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1946}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
