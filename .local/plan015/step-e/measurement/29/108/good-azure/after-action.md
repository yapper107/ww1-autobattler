# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/29/108/good-azure/battle-108-1789674317028636860`

## Battle summary

**Ember** · 300.6 s · 572 shots.

### Turning points

- 33.5s, squad 4: contact (events line 358). First recorded contact.
- 56.4s, squad 0: help call ([trace 9032](#trace-9032)). No completion observed before termination.
- 84.5s, squad 0: withdrawal ([trace 11221](#trace-11221)). 114.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 118.7s, squad 0: withdrawal ([trace 12561](#trace-12561)). 169.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 268.0s, squad 0: withdrawal ([trace 17412](#trace-17412)). 291.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 274.1s, squad 0: help call ([trace 17656](#trace-17656)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 29 shots, 8/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 543 shots, 0/8 lost.

### Decisions and attribution

At 66.8s, squad 0 chose advanced tactically ([trace 9547](#trace-9547)), followed by 1 shots and 0 own casualties; estimate 9.9 against 0 distinct squad-reported contacts; At 263.4s, squad 0 chose leader risk threshold crossed without support ([trace 17292](#trace-17292)), followed by 1 shots and 0 own casualties; estimate 2.5 against 0 distinct squad-reported contacts; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 539](#trace-539)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 538](#trace-538)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150217031523333, 'next_transition': 551}.
- 37.1s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.571749 retreat threshold=0.500000 initiative=delegated ([trace 3857](#trace-3857)). Following evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04731799605128423, 'next_transition': 3871}.

### Communication

152 matched deliveries (mean 0.35s, max 2.40s); 204 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 33.55s, squad 4, contact, evidence events line 358: First recorded contact; .
- 56.35s, squad 0, help call, evidence 9032: NeedSupport; No completion observed before termination.
- 84.45s, squad 0, withdrawal, evidence 11221: BreakContact: believed ratio at least two without superiority; 114.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 118.65s, squad 0, withdrawal, evidence 12561: Withdraw to received rally; 169.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 267.95s, squad 0, withdrawal, evidence 17412: BreakContact: believed ratio at least two without superiority; 291.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 274.05s, squad 0, help call, evidence 17656: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.757855577036504, 'next_transition': 451}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.757855577036504, 'next_transition': 451}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.757855577036504, 'next_transition': 451}.
<a id="trace-451"></a>
<a id="trace-472"></a>
<a id="trace-494"></a>
<a id="trace-515"></a>
<a id="trace-529"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 451): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2299751769664327, 'next_transition': 472}.
<a id="trace-79"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 79): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150217031523333, 'next_transition': 551}.
<a id="trace-538"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 538): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 538. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150217031523333, 'next_transition': 551}.
<a id="trace-539"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 539): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 539. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150217031523333, 'next_transition': 551}.
<a id="trace-551"></a>
<a id="trace-572"></a>
<a id="trace-651"></a>
<a id="trace-668"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 551): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 539. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149642502898536, 'next_transition': 572}.
<a id="trace-670"></a>
<a id="trace-1010"></a>
<a id="trace-1038"></a>
<a id="trace-1068"></a>
<a id="trace-1096"></a>
<a id="trace-1123"></a>
<a id="trace-1164"></a>
<a id="trace-1182"></a>
<a id="trace-1284"></a>
<a id="trace-1303"></a>
<a id="trace-1319"></a>
<a id="trace-1344"></a>
<a id="trace-1365"></a>
<a id="trace-1386"></a>
<a id="trace-1405"></a>
<a id="trace-1439"></a>
<a id="trace-1453"></a>
<a id="trace-1531"></a>
<a id="trace-1548"></a>
<a id="trace-1683"></a>
<a id="trace-1884"></a>
<a id="trace-1911"></a>
<a id="trace-1938"></a>
<a id="trace-1994"></a>
<a id="trace-2008"></a>
<a id="trace-2089"></a>
<a id="trace-2110"></a>
<a id="trace-2124"></a>
<a id="trace-2138"></a>
<a id="trace-2164"></a>
<a id="trace-2178"></a>
<a id="trace-2208"></a>
<a id="trace-2228"></a>
<a id="trace-2315"></a>
<a id="trace-2323"></a>
<a id="trace-2343"></a>
<a id="trace-2356"></a>
<a id="trace-2374"></a>
<a id="trace-2387"></a>
<a id="trace-2403"></a>
<a id="trace-2717"></a>
<a id="trace-2834"></a>
<a id="trace-2876"></a>
<a id="trace-2895"></a>
<a id="trace-2917"></a>
<a id="trace-3291"></a>
<a id="trace-3612"></a>
<a id="trace-3721"></a>
<a id="trace-3749"></a>
<a id="trace-3781"></a>
<a id="trace-3826"></a>
<a id="trace-3873"></a>
<a id="trace-3915"></a>
<a id="trace-3920"></a>
<a id="trace-3931"></a>
<a id="trace-3936"></a>
<a id="trace-4012"></a>
<a id="trace-4025"></a>
<a id="trace-4035"></a>
<a id="trace-4397"></a>
<a id="trace-4408"></a>
<a id="trace-4447"></a>
<a id="trace-4475"></a>
<a id="trace-4560"></a>
<a id="trace-4565"></a>
<a id="trace-4585"></a>
<a id="trace-4597"></a>
<a id="trace-4607"></a>
<a id="trace-4616"></a>
<a id="trace-8104"></a>
<a id="trace-8130"></a>
<a id="trace-8152"></a>
<a id="trace-8174"></a>
<a id="trace-8285"></a>
<a id="trace-8342"></a>
<a id="trace-8392"></a>
<a id="trace-8464"></a>
<a id="trace-8523"></a>
<a id="trace-8582"></a>
<a id="trace-8633"></a>
<a id="trace-8691"></a>
<a id="trace-8753"></a>
<a id="trace-8812"></a>
<a id="trace-8925"></a>
<a id="trace-8983"></a>
<a id="trace-9023"></a>
<a id="trace-9069"></a>
<a id="trace-9098"></a>
<a id="trace-9116"></a>
<a id="trace-9158"></a>
<a id="trace-9183"></a>
<a id="trace-9200"></a>
<a id="trace-9300"></a>
<a id="trace-9328"></a>
<a id="trace-9344"></a>
<a id="trace-9372"></a>
<a id="trace-9386"></a>
<a id="trace-9396"></a>
<a id="trace-9416"></a>
<a id="trace-9526"></a>
<a id="trace-10037"></a>
<a id="trace-10075"></a>
<a id="trace-10094"></a>
<a id="trace-10107"></a>
<a id="trace-10210"></a>
<a id="trace-10222"></a>
<a id="trace-10242"></a>
<a id="trace-10263"></a>
<a id="trace-10274"></a>
<a id="trace-10295"></a>
<a id="trace-10306"></a>
<a id="trace-10327"></a>
<a id="trace-10370"></a>
<a id="trace-10474"></a>
<a id="trace-10506"></a>
<a id="trace-10543"></a>
<a id="trace-10588"></a>
<a id="trace-10632"></a>
<a id="trace-10722"></a>
<a id="trace-10762"></a>
<a id="trace-10804"></a>
<a id="trace-10837"></a>
<a id="trace-10879"></a>
<a id="trace-11019"></a>
<a id="trace-11069"></a>
<a id="trace-11109"></a>
<a id="trace-11135"></a>
<a id="trace-11184"></a>
<a id="trace-11198"></a>
<a id="trace-11216"></a>
<a id="trace-11401"></a>
<a id="trace-11475"></a>
<a id="trace-11502"></a>
<a id="trace-11509"></a>
<a id="trace-11524"></a>
<a id="trace-11551"></a>
<a id="trace-11561"></a>
<a id="trace-11572"></a>
<a id="trace-11589"></a>
<a id="trace-11669"></a>
<a id="trace-11681"></a>
<a id="trace-11700"></a>
<a id="trace-11718"></a>
<a id="trace-11728"></a>
<a id="trace-11739"></a>
<a id="trace-11751"></a>
<a id="trace-11824"></a>
<a id="trace-11832"></a>
<a id="trace-11844"></a>
<a id="trace-11851"></a>
<a id="trace-11863"></a>
<a id="trace-11873"></a>
<a id="trace-11890"></a>
<a id="trace-11904"></a>
<a id="trace-11912"></a>
<a id="trace-11988"></a>
<a id="trace-11996"></a>
<a id="trace-12012"></a>
<a id="trace-12033"></a>
<a id="trace-12112"></a>
<a id="trace-12117"></a>
<a id="trace-12140"></a>
<a id="trace-12152"></a>
<a id="trace-12224"></a>
<a id="trace-12241"></a>
<a id="trace-12249"></a>
<a id="trace-12257"></a>
<a id="trace-12265"></a>
<a id="trace-12269"></a>
<a id="trace-12282"></a>
<a id="trace-12359"></a>
<a id="trace-12363"></a>
<a id="trace-12374"></a>
<a id="trace-12378"></a>
<a id="trace-12387"></a>
<a id="trace-12399"></a>
<a id="trace-12406"></a>
<a id="trace-12426"></a>
<a id="trace-12432"></a>
<a id="trace-12507"></a>
<a id="trace-12523"></a>
<a id="trace-12548"></a>
<a id="trace-12551"></a>
<a id="trace-12558"></a>
<a id="trace-12620"></a>
<a id="trace-12627"></a>
<a id="trace-12640"></a>
<a id="trace-12705"></a>
<a id="trace-12708"></a>
<a id="trace-12730"></a>
<a id="trace-12734"></a>
<a id="trace-12742"></a>
<a id="trace-12749"></a>
<a id="trace-12758"></a>
<a id="trace-12765"></a>
<a id="trace-12830"></a>
<a id="trace-12833"></a>
<a id="trace-12840"></a>
<a id="trace-12850"></a>
<a id="trace-12854"></a>
<a id="trace-12866"></a>
<a id="trace-12875"></a>
<a id="trace-12882"></a>
<a id="trace-12947"></a>
<a id="trace-12950"></a>
<a id="trace-12958"></a>
<a id="trace-12961"></a>
<a id="trace-12968"></a>
<a id="trace-12973"></a>
<a id="trace-12982"></a>
<a id="trace-13127"></a>
<a id="trace-13139"></a>
<a id="trace-13142"></a>
<a id="trace-13154"></a>
<a id="trace-13169"></a>
<a id="trace-13179"></a>
<a id="trace-13256"></a>
<a id="trace-13272"></a>
<a id="trace-13276"></a>
<a id="trace-13283"></a>
<a id="trace-13286"></a>
<a id="trace-13297"></a>
<a id="trace-13310"></a>
<a id="trace-13380"></a>
<a id="trace-13393"></a>
<a id="trace-13400"></a>
<a id="trace-13473"></a>
<a id="trace-13495"></a>
<a id="trace-13505"></a>
<a id="trace-13569"></a>
<a id="trace-13572"></a>
<a id="trace-13580"></a>
<a id="trace-13585"></a>
<a id="trace-13593"></a>
<a id="trace-13602"></a>
<a id="trace-13620"></a>
<a id="trace-13633"></a>
<a id="trace-13639"></a>
<a id="trace-13716"></a>
<a id="trace-13720"></a>
<a id="trace-13731"></a>
<a id="trace-13749"></a>
<a id="trace-13759"></a>
<a id="trace-13824"></a>
<a id="trace-13827"></a>
<a id="trace-13838"></a>
<a id="trace-13844"></a>
<a id="trace-13851"></a>
<a id="trace-13909"></a>
<a id="trace-13917"></a>
<a id="trace-13936"></a>
<a id="trace-13943"></a>
<a id="trace-14013"></a>
<a id="trace-14020"></a>
<a id="trace-14032"></a>
<a id="trace-14035"></a>
<a id="trace-14044"></a>
<a id="trace-14055"></a>
<a id="trace-14149"></a>
<a id="trace-14156"></a>
<a id="trace-14165"></a>
<a id="trace-14184"></a>
<a id="trace-14188"></a>
<a id="trace-14200"></a>
<a id="trace-14205"></a>
<a id="trace-14216"></a>
<a id="trace-14221"></a>
<a id="trace-14288"></a>
<a id="trace-14291"></a>
<a id="trace-14297"></a>
<a id="trace-14299"></a>
<a id="trace-14307"></a>
<a id="trace-14317"></a>
<a id="trace-14321"></a>
<a id="trace-14333"></a>
<a id="trace-14341"></a>
<a id="trace-14406"></a>
<a id="trace-14411"></a>
<a id="trace-14417"></a>
<a id="trace-14420"></a>
<a id="trace-14429"></a>
<a id="trace-14437"></a>
<a id="trace-14441"></a>
<a id="trace-14449"></a>
<a id="trace-14455"></a>
<a id="trace-14528"></a>
<a id="trace-14538"></a>
<a id="trace-14541"></a>
<a id="trace-14551"></a>
<a id="trace-14561"></a>
<a id="trace-14566"></a>
<a id="trace-14575"></a>
<a id="trace-14580"></a>
<a id="trace-14646"></a>
<a id="trace-14654"></a>
<a id="trace-14712"></a>
<a id="trace-14724"></a>
<a id="trace-14734"></a>
<a id="trace-14741"></a>
<a id="trace-14757"></a>
<a id="trace-14763"></a>
<a id="trace-14839"></a>
<a id="trace-14843"></a>
<a id="trace-14851"></a>
<a id="trace-14864"></a>
<a id="trace-14885"></a>
<a id="trace-14890"></a>
<a id="trace-14960"></a>
<a id="trace-14967"></a>
<a id="trace-14971"></a>
<a id="trace-14978"></a>
<a id="trace-14983"></a>
<a id="trace-14993"></a>
<a id="trace-14999"></a>
<a id="trace-15009"></a>
<a id="trace-15084"></a>
<a id="trace-15098"></a>
<a id="trace-15114"></a>
<a id="trace-15184"></a>
<a id="trace-15202"></a>
<a id="trace-15268"></a>
<a id="trace-15273"></a>
<a id="trace-15283"></a>
<a id="trace-15286"></a>
<a id="trace-15298"></a>
<a id="trace-15305"></a>
<a id="trace-15320"></a>
<a id="trace-15333"></a>
<a id="trace-15398"></a>
<a id="trace-15401"></a>
<a id="trace-15409"></a>
<a id="trace-15424"></a>
<a id="trace-15430"></a>
<a id="trace-15439"></a>
<a id="trace-15449"></a>
<a id="trace-15462"></a>
<a id="trace-15575"></a>
<a id="trace-15642"></a>
<a id="trace-15658"></a>
<a id="trace-15678"></a>
<a id="trace-15686"></a>
<a id="trace-15694"></a>
<a id="trace-15708"></a>
<a id="trace-15715"></a>
<a id="trace-15794"></a>
<a id="trace-15803"></a>
<a id="trace-15807"></a>
<a id="trace-15819"></a>
<a id="trace-15822"></a>
<a id="trace-15830"></a>
<a id="trace-15844"></a>
<a id="trace-15913"></a>
<a id="trace-15923"></a>
<a id="trace-15937"></a>
<a id="trace-16003"></a>
<a id="trace-16005"></a>
<a id="trace-16016"></a>
<a id="trace-16022"></a>
<a id="trace-16031"></a>
<a id="trace-16037"></a>
<a id="trace-16104"></a>
<a id="trace-16130"></a>
<a id="trace-16142"></a>
<a id="trace-16237"></a>
<a id="trace-16240"></a>
<a id="trace-16248"></a>
<a id="trace-16265"></a>
<a id="trace-16278"></a>
<a id="trace-16283"></a>
<a id="trace-16353"></a>
<a id="trace-16360"></a>
<a id="trace-16368"></a>
<a id="trace-16382"></a>
<a id="trace-16390"></a>
<a id="trace-16402"></a>
<a id="trace-16476"></a>
<a id="trace-16486"></a>
<a id="trace-16500"></a>
<a id="trace-16514"></a>
<a id="trace-16622"></a>
<a id="trace-16811"></a>
<a id="trace-16820"></a>
<a id="trace-16886"></a>
<a id="trace-16893"></a>
<a id="trace-16904"></a>
<a id="trace-16913"></a>
<a id="trace-16918"></a>
<a id="trace-16921"></a>
<a id="trace-16931"></a>
<a id="trace-17167"></a>
<a id="trace-17177"></a>
<a id="trace-17244"></a>
<a id="trace-17256"></a>
<a id="trace-17272"></a>
<a id="trace-17279"></a>
<a id="trace-17288"></a>
<a id="trace-17298"></a>
<a id="trace-17308"></a>
<a id="trace-17313"></a>
<a id="trace-17382"></a>
<a id="trace-17389"></a>
<a id="trace-17395"></a>
<a id="trace-17403"></a>
<a id="trace-17409"></a>
<a id="trace-17411"></a>
<a id="trace-17532"></a>
<a id="trace-17538"></a>
<a id="trace-17549"></a>
<a id="trace-17554"></a>
<a id="trace-17621"></a>
<a id="trace-17624"></a>
<a id="trace-17632"></a>
<a id="trace-17635"></a>
<a id="trace-17641"></a>
<a id="trace-17648"></a>
<a id="trace-17653"></a>
<a id="trace-17665"></a>
<a id="trace-17669"></a>
<a id="trace-17735"></a>
<a id="trace-17739"></a>
<a id="trace-17744"></a>
<a id="trace-17753"></a>
<a id="trace-17755"></a>
<a id="trace-17762"></a>
<a id="trace-17766"></a>
<a id="trace-17775"></a>
<a id="trace-17780"></a>
<a id="trace-17851"></a>
<a id="trace-17853"></a>
<a id="trace-17858"></a>
<a id="trace-17861"></a>
<a id="trace-17868"></a>
<a id="trace-17872"></a>
<a id="trace-17949"></a>
<a id="trace-17954"></a>
<a id="trace-17960"></a>
<a id="trace-17963"></a>
<a id="trace-17971"></a>
<a id="trace-17977"></a>
<a id="trace-17980"></a>
<a id="trace-17992"></a>
<a id="trace-17997"></a>
<a id="trace-18060"></a>
<a id="trace-18068"></a>
<a id="trace-18070"></a>
<a id="trace-18086"></a>
<a id="trace-18104"></a>
<a id="trace-18112"></a>
<a id="trace-18176"></a>
<a id="trace-18182"></a>
<a id="trace-18191"></a>
<a id="trace-18194"></a>
<a id="trace-18211"></a>
<a id="trace-18217"></a>
<a id="trace-18280"></a>
- 5.70s–300.30s (×455), actor 37, squad 4 (trace 670): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 594. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.039375, 'next_transition': 1010}.
<a id="trace-682"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 682): received platoon directive. Knowledge: actor memory at 5.00s, trace 581. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5362692272749328, 'next_transition': 1008}.
<a id="trace-1008"></a>
<a id="trace-1036"></a>
<a id="trace-1066"></a>
<a id="trace-1094"></a>
<a id="trace-1121"></a>
<a id="trace-1162"></a>
<a id="trace-1180"></a>
<a id="trace-1198"></a>
<a id="trace-1282"></a>
<a id="trace-1301"></a>
<a id="trace-1317"></a>
<a id="trace-1342"></a>
<a id="trace-1363"></a>
<a id="trace-1384"></a>
<a id="trace-1403"></a>
<a id="trace-1415"></a>
<a id="trace-1437"></a>
<a id="trace-1451"></a>
<a id="trace-1529"></a>
<a id="trace-1546"></a>
- 6.20s–15.70s (×20), actor 5, squad 0 (trace 1008): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 586. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9365011087588431, 'next_transition': 1036}.
<a id="trace-1551"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 1551): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1456. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10184751444630159, 'next_transition': 1681}.
<a id="trace-1552"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 1552): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1456. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10184751444630159, 'next_transition': 1681}.
<a id="trace-1681"></a>
- 16.25s–16.25s (×1), actor 5, squad 0 (trace 1681): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1461. Next observer evidence: None.
<a id="trace-1687"></a>
- 16.35s–16.35s (×1), actor 0, squad 0 (trace 1687): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 1456. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1275035930866263, 'next_transition': 1858}.
<a id="trace-1858"></a>
<a id="trace-1882"></a>
<a id="trace-1909"></a>
<a id="trace-1936"></a>
<a id="trace-1965"></a>
<a id="trace-1992"></a>
<a id="trace-2006"></a>
<a id="trace-2087"></a>
<a id="trace-2108"></a>
<a id="trace-2122"></a>
<a id="trace-2136"></a>
<a id="trace-2162"></a>
<a id="trace-2176"></a>
<a id="trace-2194"></a>
<a id="trace-2206"></a>
<a id="trace-2226"></a>
<a id="trace-2239"></a>
<a id="trace-2313"></a>
<a id="trace-2321"></a>
<a id="trace-2341"></a>
<a id="trace-2354"></a>
<a id="trace-2372"></a>
<a id="trace-2385"></a>
<a id="trace-2401"></a>
- 16.75s–28.25s (×24), actor 5, squad 0 (trace 1858): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1461. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6984523928546309, 'next_transition': 1882}.
<a id="trace-2404"></a>
- 28.25s–28.25s (×1), actor 0, squad 0 (trace 2404): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 25.00s, trace 2244. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2715}.
<a id="trace-2715"></a>
<a id="trace-2730"></a>
<a id="trace-2748"></a>
<a id="trace-2832"></a>
<a id="trace-2846"></a>
<a id="trace-2864"></a>
<a id="trace-2874"></a>
<a id="trace-2893"></a>
<a id="trace-2915"></a>
<a id="trace-2934"></a>
<a id="trace-2956"></a>
- 28.75s–33.75s (×11), actor 5, squad 0 (trace 2715): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2249. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4580067695084352, 'next_transition': 2730}.
<a id="trace-2970"></a>
- 34.05s–34.05s (×1), actor 0, squad 0 (trace 2970): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 2752. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874975301548573, 'next_transition': 3289}.
<a id="trace-2971"></a>
- 34.05s–34.05s (×1), actor 0, squad 0 (trace 2971): bounding overwatch. Knowledge: actor memory at 30.00s, trace 2752. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874975301548573, 'next_transition': 3289}.
<a id="trace-2972"></a>
- 34.05s–34.05s (×1), actor 0, squad 0 (trace 2972): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 2752. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874975301548573, 'next_transition': 3289}.
<a id="trace-3289"></a>
- 34.25s–34.25s (×1), actor 5, squad 0 (trace 3289): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2757. Next observer evidence: None.
<a id="trace-3293"></a>
- 34.30s–34.30s (×1), actor 0, squad 0 (trace 3293): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 2752. Next observer evidence: {'until': 34.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.12240227342276974, 'next_transition': 3610}.
<a id="trace-3610"></a>
<a id="trace-3719"></a>
<a id="trace-3747"></a>
<a id="trace-3779"></a>
<a id="trace-3824"></a>
- 34.75s–36.75s (×5), actor 5, squad 0 (trace 3610): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2757. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2657578978877448, 'next_transition': 3719}.
<a id="trace-472"></a>
- 37.10s–37.10s (×1), actor 5, squad 0 (events line 472): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3857"></a>
- 37.10s–37.10s (×1), actor 5, squad 0 (trace 3857): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.571749 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 3857. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04731799605128423, 'next_transition': 3871}.
<a id="trace-3858"></a>
- 37.10s–37.10s (×1), actor 5, squad 0 (trace 3858): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.571749 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 3858. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04731799605128423, 'next_transition': 3871}.
<a id="trace-3871"></a>
<a id="trace-3895"></a>
- 37.25s–37.75s (×2), actor 5, squad 0 (trace 3871): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 37.10s, trace 3858. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06562392995556189, 'next_transition': 3895}.
<a id="trace-3898"></a>
- 37.80s–37.80s (×1), actor 0, squad 0 (trace 3898): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 3627. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09771620502762074, 'next_transition': 3913}.
<a id="trace-3913"></a>
<a id="trace-3918"></a>
<a id="trace-3929"></a>
<a id="trace-3934"></a>
<a id="trace-4010"></a>
<a id="trace-4023"></a>
<a id="trace-4033"></a>
- 38.25s–41.25s (×7), actor 5, squad 0 (trace 3913): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 37.10s, trace 3858. Next observer evidence: {'until': 38.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07061207201366132, 'next_transition': 3918}.
<a id="trace-4036"></a>
- 41.25s–41.25s (×1), actor 0, squad 0 (trace 4036): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 3939. Next observer evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.09911462016902453, 'next_transition': 4338}.
<a id="trace-4338"></a>
<a id="trace-4358"></a>
<a id="trace-4386"></a>
<a id="trace-4395"></a>
<a id="trace-4406"></a>
<a id="trace-4445"></a>
<a id="trace-4473"></a>
- 41.75s–44.75s (×7), actor 5, squad 0 (trace 4338): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3944. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16616794778443053, 'next_transition': 4358}.
<a id="trace-4476"></a>
- 44.75s–44.75s (×1), actor 0, squad 0 (trace 4476): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 3939. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44075655194229313, 'next_transition': 4558}.
<a id="trace-4558"></a>
<a id="trace-4563"></a>
<a id="trace-4583"></a>
<a id="trace-4595"></a>
<a id="trace-4605"></a>
<a id="trace-4614"></a>
- 45.25s–47.75s (×6), actor 5, squad 0 (trace 4558): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4485. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14164114340914505, 'next_transition': 4563}.
<a id="trace-4617"></a>
- 47.75s–47.75s (×1), actor 0, squad 0 (trace 4617): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 4480. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8102}.
<a id="trace-7844"></a>
- 47.75s–47.75s (×1), actor 0, squad 0 (trace 7844): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 4480. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8102}.
<a id="trace-7845"></a>
- 47.75s–47.75s (×1), actor 0, squad 0 (trace 7845): MoveTactically. Knowledge: actor memory at 45.00s, trace 4480. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8102}.
<a id="trace-7846"></a>
- 47.75s–47.75s (×1), actor 0, squad 0 (trace 7846): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 4480. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8102}.
<a id="trace-8102"></a>
<a id="trace-8128"></a>
<a id="trace-8150"></a>
<a id="trace-8172"></a>
<a id="trace-8283"></a>
<a id="trace-8340"></a>
<a id="trace-8390"></a>
<a id="trace-8462"></a>
<a id="trace-8521"></a>
<a id="trace-8580"></a>
<a id="trace-8631"></a>
<a id="trace-8689"></a>
<a id="trace-8751"></a>
<a id="trace-8810"></a>
<a id="trace-8923"></a>
<a id="trace-8981"></a>
<a id="trace-9021"></a>
- 48.25s–56.25s (×17), actor 5, squad 0 (trace 8102): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4485. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8128}.
<a id="trace-9032"></a>
- 56.35s–56.35s (×1), actor 0, squad 0 (trace 9032): NeedSupport. Knowledge: actor memory at 55.00s, trace 8829. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6389250706195754, 'next_transition': 9067}.
<a id="trace-9067"></a>
- 56.75s–56.75s (×1), actor 5, squad 0 (trace 9067): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 8833. Next observer evidence: {'until': 57, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9247635368758436, 'next_transition': 9088}.
<a id="trace-9088"></a>
- 57.05s–57.05s (×1), actor 5, squad 0 (trace 9088): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 57.05s, trace 9088. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45000289734696136, 'next_transition': 9096}.
<a id="trace-9096"></a>
<a id="trace-9114"></a>
<a id="trace-9138"></a>
<a id="trace-9156"></a>
<a id="trace-9181"></a>
<a id="trace-9198"></a>
<a id="trace-9280"></a>
<a id="trace-9298"></a>
<a id="trace-9313"></a>
<a id="trace-9326"></a>
<a id="trace-9342"></a>
<a id="trace-9370"></a>
<a id="trace-9384"></a>
<a id="trace-9394"></a>
<a id="trace-9414"></a>
<a id="trace-9425"></a>
<a id="trace-9500"></a>
<a id="trace-9510"></a>
- 57.25s–65.75s (×18), actor 5, squad 0 (trace 9096): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 57.05s, trace 9088. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9335119803514081, 'next_transition': 9114}.
<a id="trace-9513"></a>
- 65.95s–65.95s (×1), actor 0, squad 0 (trace 9513): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 65.00s, trace 9433. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7246258656117321, 'next_transition': 9524}.
<a id="trace-9524"></a>
<a id="trace-9535"></a>
- 66.25s–66.75s (×2), actor 5, squad 0 (trace 9524): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 9437. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.534235007750449, 'next_transition': 9535}.
<a id="trace-9542"></a>
- 66.85s–66.85s (×1), actor 0, squad 0 (trace 9542): Reorganise: completed/failed drill. Knowledge: actor memory at 65.00s, trace 9433. Next observer evidence: {'until': 67.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.532848772969117, 'next_transition': 10024}.
<a id="trace-9547"></a>
- 66.85s–66.85s (×1), actor 0, squad 0 (trace 9547): MoveTactically. Knowledge: actor memory at 65.00s, trace 9433. Next observer evidence: {'until': 67.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.532848772969117, 'next_transition': 10024}.
<a id="trace-9548"></a>
- 66.85s–66.85s (×1), actor 0, squad 0 (trace 9548): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 65.00s, trace 9433. Next observer evidence: {'until': 67.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.532848772969117, 'next_transition': 10024}.
<a id="trace-10024"></a>
<a id="trace-10035"></a>
<a id="trace-10058"></a>
<a id="trace-10073"></a>
<a id="trace-10092"></a>
- 67.25s–69.25s (×5), actor 5, squad 0 (trace 10024): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 9437. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5369159833155862, 'next_transition': 10035}.
<a id="trace-10097"></a>
- 69.35s–69.35s (×1), actor 5, squad 0 (trace 10097): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.355723 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 69.35s, trace 10097. Next observer evidence: None.
<a id="trace-10098"></a>
- 69.35s–69.35s (×1), actor 5, squad 0 (trace 10098): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.355723 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 69.35s, trace 10098. Next observer evidence: None.
<a id="trace-910"></a>
- 69.35s–69.35s (×1), actor 5, squad 0 (events line 910): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5369476796310085, 'next_transition': 10105}.
<a id="trace-10105"></a>
<a id="trace-10194"></a>
<a id="trace-10208"></a>
<a id="trace-10220"></a>
<a id="trace-10240"></a>
<a id="trace-10261"></a>
<a id="trace-10272"></a>
<a id="trace-10293"></a>
<a id="trace-10304"></a>
<a id="trace-10325"></a>
<a id="trace-10368"></a>
<a id="trace-10472"></a>
<a id="trace-10504"></a>
<a id="trace-10541"></a>
<a id="trace-10586"></a>
<a id="trace-10630"></a>
- 69.75s–77.25s (×16), actor 5, squad 0 (trace 10105): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 69.35s, trace 10098. Next observer evidence: {'until': 70.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8306032921074279, 'next_transition': 10194}.
<a id="trace-10657"></a>
- 77.55s–77.55s (×1), actor 1, squad 0 (trace 10657): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 75.00s, trace 10386. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07286050636634953, 'next_transition': 10719}.
<a id="trace-10704"></a>
- 77.55s–77.55s (×1), actor 1, squad 0 (trace 10704): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 75.00s, trace 10386. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07286050636634953, 'next_transition': 10719}.
<a id="trace-10719"></a>
<a id="trace-10759"></a>
<a id="trace-10801"></a>
<a id="trace-10877"></a>
<a id="trace-10982"></a>
<a id="trace-11017"></a>
<a id="trace-11067"></a>
<a id="trace-11107"></a>
<a id="trace-11133"></a>
<a id="trace-11161"></a>
<a id="trace-11182"></a>
<a id="trace-11196"></a>
<a id="trace-11214"></a>
- 77.75s–84.25s (×13), actor 5, squad 0 (trace 10719): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 10389. Next observer evidence: {'until': 78.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21403702003708794, 'next_transition': 10759}.
<a id="trace-11221"></a>
- 84.45s–84.45s (×1), actor 1, squad 0 (trace 11221): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 80.00s, trace 10898. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06485750000000001, 'next_transition': 11399}.
<a id="trace-11222"></a>
- 84.45s–84.45s (×1), actor 1, squad 0 (trace 11222): rearward bound: one stationary suppressing element. Knowledge: actor memory at 80.00s, trace 10898. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06485750000000001, 'next_transition': 11399}.
<a id="trace-11399"></a>
<a id="trace-11473"></a>
<a id="trace-11500"></a>
<a id="trace-11507"></a>
<a id="trace-11522"></a>
<a id="trace-11534"></a>
<a id="trace-11549"></a>
<a id="trace-11559"></a>
<a id="trace-11570"></a>
<a id="trace-11587"></a>
<a id="trace-11656"></a>
<a id="trace-11667"></a>
<a id="trace-11679"></a>
<a id="trace-11686"></a>
<a id="trace-11698"></a>
<a id="trace-11705"></a>
<a id="trace-11716"></a>
<a id="trace-11726"></a>
<a id="trace-11737"></a>
<a id="trace-11749"></a>
<a id="trace-11822"></a>
<a id="trace-11830"></a>
<a id="trace-11842"></a>
<a id="trace-11849"></a>
<a id="trace-11861"></a>
<a id="trace-11871"></a>
<a id="trace-11879"></a>
<a id="trace-11888"></a>
<a id="trace-11902"></a>
<a id="trace-11910"></a>
<a id="trace-11986"></a>
<a id="trace-11994"></a>
<a id="trace-12010"></a>
<a id="trace-12017"></a>
<a id="trace-12024"></a>
<a id="trace-12031"></a>
- 84.75s–102.75s (×36), actor 5, squad 0 (trace 11399): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 10901. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19428749999999995, 'next_transition': 11473}.
<a id="trace-12041"></a>
- 103.10s–103.10s (×1), actor 1, squad 0 (trace 12041): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 11917. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06484999999999985, 'next_transition': 12110}.
<a id="trace-12053"></a>
- 103.10s–103.10s (×1), actor 1, squad 0 (trace 12053): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 11917. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06484999999999985, 'next_transition': 12110}.
<a id="trace-12110"></a>
<a id="trace-12115"></a>
<a id="trace-12138"></a>
<a id="trace-12150"></a>
<a id="trace-12216"></a>
<a id="trace-12233"></a>
<a id="trace-12246"></a>
<a id="trace-12262"></a>
<a id="trace-12279"></a>
<a id="trace-12356"></a>
<a id="trace-12371"></a>
<a id="trace-12384"></a>
- 103.25s–112.25s (×12), actor 5, squad 0 (trace 12110): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 11919. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13429999999999964, 'next_transition': 12115}.
<a id="trace-12394"></a>
- 113.10s–113.10s (×1), actor 1, squad 0 (trace 12394): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 110.00s, trace 12294. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31775278491923814, 'next_transition': 12396}.
<a id="trace-12396"></a>
- 113.25s–113.25s (×1), actor 5, squad 0 (trace 12396): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 12296. Next observer evidence: {'until': 114, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7154378936780631, 'next_transition': 12414}.
<a id="trace-12414"></a>
- 114.05s–114.05s (×1), actor 1, squad 0 (trace 12414): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 12294. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12423}.
<a id="trace-12423"></a>
<a id="trace-12504"></a>
<a id="trace-12520"></a>
- 114.25s–116.25s (×3), actor 5, squad 0 (trace 12423): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 12296. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.052496391516199926, 'next_transition': 12504}.
<a id="trace-1502"></a>
- 116.45s–116.45s (×1), actor 5, squad 0 (events line 1502): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2349923257375768, 'next_transition': 12545}.
<a id="trace-12526"></a>
- 116.45s–116.45s (×1), actor 5, squad 0 (trace 12526): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.185531 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 116.45s, trace 12526. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2349923257375768, 'next_transition': 12545}.
<a id="trace-12527"></a>
- 116.45s–116.45s (×1), actor 5, squad 0 (trace 12527): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.185531 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 116.45s, trace 12527. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2349923257375768, 'next_transition': 12545}.
<a id="trace-12545"></a>
- 117.25s–117.25s (×1), actor 5, squad 0 (trace 12545): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 116.45s, trace 12527. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 12561}.
<a id="trace-12561"></a>
- 118.65s–118.65s (×1), actor 1, squad 0 (trace 12561): Withdraw to received rally. Knowledge: actor memory at 115.00s, trace 12436. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.871102539921316, 'next_transition': 12715}.
<a id="trace-12562"></a>
- 118.65s–118.65s (×1), actor 1, squad 0 (trace 12562): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 12436. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.871102539921316, 'next_transition': 12715}.
<a id="trace-12715"></a>
<a id="trace-12727"></a>
<a id="trace-12739"></a>
- 121.25s–123.25s (×3), actor 1, squad 0 (trace 12715): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 120.00s, trace 12645. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1340420423212942, 'next_transition': 12727}.
<a id="trace-1522"></a>
- 123.35s–123.35s (×1), actor 1, squad 0 (events line 1522): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339923500663496, 'next_transition': 12755}.
<a id="trace-12743"></a>
- 123.35s–123.35s (×1), actor 1, squad 0 (trace 12743): renew committed intent (75 s lifetime). Knowledge: actor memory at 123.35s, trace 12743. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339923500663496, 'next_transition': 12755}.
<a id="trace-12755"></a>
<a id="trace-12827"></a>
<a id="trace-12837"></a>
<a id="trace-12847"></a>
<a id="trace-12859"></a>
<a id="trace-12872"></a>
<a id="trace-12944"></a>
<a id="trace-12955"></a>
<a id="trace-12965"></a>
<a id="trace-12979"></a>
- 124.25s–133.30s (×10), actor 1, squad 0 (trace 12755): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 123.35s, trace 12743. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1340422120724838, 'next_transition': 12827}.
<a id="trace-12989"></a>
- 134.25s–134.25s (×1), actor 1, squad 0 (trace 12989): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 12884. Next observer evidence: None.
<a id="trace-12990"></a>
- 134.25s–134.25s (×1), actor 1, squad 0 (trace 12990): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 12884. Next observer evidence: None.
<a id="trace-13047"></a>
<a id="trace-13124"></a>
<a id="trace-13136"></a>
<a id="trace-13151"></a>
<a id="trace-13161"></a>
<a id="trace-13176"></a>
<a id="trace-13253"></a>
<a id="trace-13269"></a>
<a id="trace-13280"></a>
<a id="trace-13290"></a>
<a id="trace-13303"></a>
<a id="trace-13377"></a>
<a id="trace-13390"></a>
- 134.30s–146.30s (×13), actor 1, squad 0 (trace 13047): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 130.00s, trace 12884. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13124}.
<a id="trace-13403"></a>
- 146.85s–146.85s (×1), actor 1, squad 0 (trace 13403): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 145.00s, trace 13313. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13460}.
<a id="trace-13404"></a>
- 146.85s–146.85s (×1), actor 1, squad 0 (trace 13404): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 145.00s, trace 13313. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13460}.
<a id="trace-13460"></a>
<a id="trace-13482"></a>
<a id="trace-13492"></a>
<a id="trace-13566"></a>
<a id="trace-13577"></a>
<a id="trace-13590"></a>
<a id="trace-13612"></a>
<a id="trace-13630"></a>
<a id="trace-13700"></a>
<a id="trace-13706"></a>
<a id="trace-13713"></a>
<a id="trace-13728"></a>
<a id="trace-13746"></a>
<a id="trace-13821"></a>
<a id="trace-13835"></a>
<a id="trace-13848"></a>
- 147.30s–162.30s (×16), actor 1, squad 0 (trace 13460): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 145.00s, trace 13313. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5102916731879914, 'next_transition': 13482}.
<a id="trace-13853"></a>
- 162.45s–162.45s (×1), actor 1, squad 0 (trace 13853): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 13761. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13914}.
<a id="trace-13854"></a>
- 162.45s–162.45s (×1), actor 1, squad 0 (trace 13854): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 13761. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13914}.
<a id="trace-13914"></a>
<a id="trace-13933"></a>
<a id="trace-14010"></a>
<a id="trace-14029"></a>
<a id="trace-14041"></a>
<a id="trace-14052"></a>
<a id="trace-14070"></a>
- 163.30s–169.30s (×7), actor 1, squad 0 (trace 13914): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 160.00s, trace 13761. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0237670465613735, 'next_transition': 13933}.
<a id="trace-14073"></a>
- 169.30s–169.30s (×1), actor 1, squad 0 (trace 14073): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 165.00s, trace 13944. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750413840912236, 'next_transition': 14146}.
<a id="trace-14146"></a>
<a id="trace-14162"></a>
<a id="trace-14181"></a>
<a id="trace-14213"></a>
<a id="trace-14285"></a>
<a id="trace-14294"></a>
<a id="trace-14303"></a>
<a id="trace-14314"></a>
<a id="trace-14330"></a>
<a id="trace-14403"></a>
<a id="trace-14414"></a>
<a id="trace-14426"></a>
<a id="trace-14434"></a>
<a id="trace-14446"></a>
- 170.30s–184.30s (×14), actor 1, squad 0 (trace 14146): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 170.00s, trace 14081. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450346835566391, 'next_transition': 14162}.
<a id="trace-1669"></a>
- 185.15s–185.15s (×1), actor 1, squad 0 (events line 1669): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14467"></a>
- 185.15s–185.15s (×1), actor 1, squad 0 (trace 14467): renew committed intent (75 s lifetime). Knowledge: actor memory at 185.15s, trace 14467. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14519}.
<a id="trace-14519"></a>
<a id="trace-14535"></a>
<a id="trace-14547"></a>
- 185.30s–187.30s (×3), actor 1, squad 0 (trace 14519): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 185.15s, trace 14467. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14535}.
<a id="trace-1683"></a>
- 188.25s–188.25s (×1), actor 1, squad 0 (events line 1683): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14554"></a>
- 188.25s–188.25s (×1), actor 1, squad 0 (trace 14554): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.935252 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 188.25s, trace 14554. Next observer evidence: None.
<a id="trace-14555"></a>
- 188.25s–188.25s (×1), actor 1, squad 0 (trace 14555): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.935252 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 188.25s, trace 14555. Next observer evidence: None.
<a id="trace-14557"></a>
<a id="trace-14572"></a>
<a id="trace-14641"></a>
<a id="trace-14651"></a>
- 188.30s–191.30s (×4), actor 1, squad 0 (trace 14557): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 188.25s, trace 14555. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14572}.
<a id="trace-14656"></a>
- 191.45s–191.45s (×1), actor 1, squad 0 (trace 14656): MoveTactically. Knowledge: actor memory at 190.00s, trace 14581. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14721}.
<a id="trace-14657"></a>
- 191.45s–191.45s (×1), actor 1, squad 0 (trace 14657): traveling overwatch. Knowledge: actor memory at 190.00s, trace 14581. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14721}.
<a id="trace-14658"></a>
- 191.45s–191.45s (×1), actor 1, squad 0 (trace 14658): received platoon directive. Knowledge: actor memory at 190.00s, trace 14581. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14721}.
<a id="trace-14721"></a>
<a id="trace-14738"></a>
<a id="trace-14754"></a>
<a id="trace-14825"></a>
<a id="trace-14836"></a>
<a id="trace-14848"></a>
<a id="trace-14861"></a>
<a id="trace-14882"></a>
<a id="trace-14953"></a>
<a id="trace-14964"></a>
<a id="trace-14975"></a>
<a id="trace-14990"></a>
<a id="trace-15006"></a>
<a id="trace-15081"></a>
<a id="trace-15095"></a>
- 192.30s–206.30s (×15), actor 1, squad 0 (trace 14721): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 190.00s, trace 14581. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0237405790653196, 'next_transition': 14738}.
<a id="trace-15103"></a>
- 206.85s–206.85s (×1), actor 1, squad 0 (trace 15103): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 205.00s, trace 15015. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15109}.
<a id="trace-15109"></a>
- 207.30s–207.30s (×1), actor 1, squad 0 (trace 15109): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 205.00s, trace 15015. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15115}.
<a id="trace-15115"></a>
- 207.85s–207.85s (×1), actor 1, squad 0 (trace 15115): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 205.00s, trace 15015. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15176}.
<a id="trace-15176"></a>
<a id="trace-15191"></a>
<a id="trace-15265"></a>
<a id="trace-15280"></a>
<a id="trace-15295"></a>
<a id="trace-15311"></a>
<a id="trace-15326"></a>
<a id="trace-15395"></a>
<a id="trace-15406"></a>
- 208.30s–216.30s (×9), actor 1, squad 0 (trace 15176): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 205.00s, trace 15015. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5102586436308543, 'next_transition': 15191}.
<a id="trace-1759"></a>
- 216.35s–216.35s (×1), actor 1, squad 0 (events line 1759): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15410"></a>
- 216.35s–216.35s (×1), actor 1, squad 0 (trace 15410): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 216.35s, trace 15410. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1340191770975518, 'next_transition': 15421}.
<a id="trace-15411"></a>
- 216.35s–216.35s (×1), actor 1, squad 0 (trace 15411): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 216.35s, trace 15411. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1340191770975518, 'next_transition': 15421}.
<a id="trace-15421"></a>
<a id="trace-15436"></a>
<a id="trace-15459"></a>
- 217.30s–219.30s (×3), actor 1, squad 0 (trace 15421): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 216.35s, trace 15411. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1340192061865622, 'next_transition': 15436}.
<a id="trace-15464"></a>
- 219.45s–219.45s (×1), actor 1, squad 0 (trace 15464): traveling. Knowledge: actor memory at 216.35s, trace 15411. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9071653657961168, 'next_transition': 15639}.
<a id="trace-15465"></a>
- 219.45s–219.45s (×1), actor 1, squad 0 (trace 15465): received platoon directive. Knowledge: actor memory at 216.35s, trace 15411. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9071653657961168, 'next_transition': 15639}.
<a id="trace-15639"></a>
<a id="trace-15655"></a>
<a id="trace-15671"></a>
<a id="trace-15683"></a>
<a id="trace-15705"></a>
<a id="trace-15782"></a>
<a id="trace-15800"></a>
<a id="trace-15816"></a>
<a id="trace-15827"></a>
<a id="trace-15841"></a>
<a id="trace-15910"></a>
<a id="trace-15928"></a>
- 220.30s–231.30s (×12), actor 1, squad 0 (trace 15639): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 220.00s, trace 15577. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.157786671285158, 'next_transition': 15655}.
<a id="trace-15942"></a>
- 232.05s–232.05s (×1), actor 1, squad 0 (trace 15942): traveling overwatch. Knowledge: actor memory at 230.00s, trace 15849. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.059604228876816774, 'next_transition': 16000}.
<a id="trace-15943"></a>
- 232.05s–232.05s (×1), actor 1, squad 0 (trace 15943): matching received arrivals: traveling stage complete. Knowledge: actor memory at 230.00s, trace 15849. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.059604228876816774, 'next_transition': 16000}.
<a id="trace-16000"></a>
<a id="trace-16013"></a>
<a id="trace-16028"></a>
<a id="trace-16098"></a>
<a id="trace-16108"></a>
<a id="trace-16123"></a>
<a id="trace-16139"></a>
<a id="trace-16156"></a>
<a id="trace-16226"></a>
<a id="trace-16234"></a>
<a id="trace-16245"></a>
<a id="trace-16257"></a>
<a id="trace-16275"></a>
<a id="trace-16350"></a>
<a id="trace-16365"></a>
<a id="trace-16377"></a>
<a id="trace-16387"></a>
<a id="trace-16399"></a>
<a id="trace-16469"></a>
<a id="trace-16483"></a>
<a id="trace-16508"></a>
- 232.30s–252.30s (×21), actor 1, squad 0 (trace 16000): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 230.00s, trace 15849. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28350814115294715, 'next_transition': 16013}.
<a id="trace-16518"></a>
- 253.05s–253.05s (×1), actor 1, squad 0 (trace 16518): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 250.00s, trace 16409. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16615}.
<a id="trace-16615"></a>
- 253.30s–253.30s (×1), actor 1, squad 0 (trace 16615): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 250.00s, trace 16409. Next observer evidence: {'until': 253.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16619}.
<a id="trace-16619"></a>
- 253.50s–253.50s (×1), actor 1, squad 0 (trace 16619): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 253.50s, trace 16619. Next observer evidence: {'until': 254, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22704917996989113, 'next_transition': 16626}.
<a id="trace-16626"></a>
- 254.05s–254.05s (×1), actor 1, squad 0 (trace 16626): ReactToContact: cover and return fire. Knowledge: actor memory at 253.50s, trace 16619. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18508292229430573, 'next_transition': 16808}.
<a id="trace-16627"></a>
- 254.05s–254.05s (×1), actor 1, squad 0 (trace 16627): bounding overwatch. Knowledge: actor memory at 253.50s, trace 16619. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18508292229430573, 'next_transition': 16808}.
<a id="trace-16628"></a>
- 254.05s–254.05s (×1), actor 1, squad 0 (trace 16628): new contact inside 100 m. Knowledge: actor memory at 253.50s, trace 16619. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18508292229430573, 'next_transition': 16808}.
<a id="trace-16808"></a>
- 254.30s–254.30s (×1), actor 1, squad 0 (trace 16808): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 253.50s, trace 16619. Next observer evidence: {'until': 257.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 4.691156055995943, 'next_transition': 16922}.
<a id="trace-16922"></a>
- 257.95s–257.95s (×1), actor 4, squad 0 (trace 16922): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 255.00s, trace 16824. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600027556319073, 'next_transition': 16928}.
<a id="trace-16928"></a>
- 258.30s–258.30s (×1), actor 4, squad 0 (trace 16928): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 255.00s, trace 16824. Next observer evidence: {'until': 259, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.519999800257928, 'next_transition': 16936}.
<a id="trace-16936"></a>
- 259.05s–259.05s (×1), actor 4, squad 0 (trace 16936): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 255.00s, trace 16824. Next observer evidence: {'until': 259.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300001289682418, 'next_transition': 17164}.
<a id="trace-17164"></a>
- 259.30s–259.30s (×1), actor 4, squad 0 (trace 17164): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 255.00s, trace 16824. Next observer evidence: {'until': 259.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.870716526421093, 'next_transition': 17180}.
<a id="trace-17180"></a>
- 259.90s–259.90s (×1), actor 4, squad 0 (trace 17180): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 259.90s, trace 17180. Next observer evidence: None.
<a id="trace-17181"></a>
- 259.90s–259.90s (×1), actor 4, squad 0 (trace 17181): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 259.90s, trace 17181. Next observer evidence: None.
<a id="trace-1917"></a>
- 259.90s–259.90s (×1), actor 4, squad 0 (events line 1917): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1986381844514222, 'next_transition': 17241}.
<a id="trace-17241"></a>
<a id="trace-17253"></a>
- 260.30s–261.30s (×2), actor 4, squad 0 (trace 17241): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 260.00s, trace 17183. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1499978947453275, 'next_transition': 17253}.
<a id="trace-17261"></a>
- 261.60s–261.60s (×1), actor 4, squad 0 (trace 17261): received platoon directive; retain contact cover stage. Knowledge: actor memory at 260.00s, trace 17183. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.846653738739345, 'next_transition': 17269}.
<a id="trace-17269"></a>
- 262.30s–262.30s (×1), actor 4, squad 0 (trace 17269): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 260.00s, trace 17183. Next observer evidence: None.
<a id="trace-17273"></a>
- 262.40s–262.40s (×1), actor 4, squad 0 (trace 17273): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 260.00s, trace 17183. Next observer evidence: {'until': 263.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.150006629850166, 'next_transition': 17285}.
<a id="trace-17285"></a>
- 263.30s–263.30s (×1), actor 4, squad 0 (trace 17285): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 260.00s, trace 17183. Next observer evidence: None.
<a id="trace-17291"></a>
- 263.35s–263.35s (×1), actor 4, squad 0 (trace 17291): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 260.00s, trace 17183. Next observer evidence: None.
<a id="trace-17292"></a>
- 263.40s–263.40s (×1), actor 4, squad 0 (trace 17292): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 263.40s, trace 17292. Next observer evidence: {'until': 264.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17305}.
<a id="trace-17305"></a>
<a id="trace-17379"></a>
- 264.30s–265.30s (×2), actor 4, squad 0 (trace 17305): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 263.40s, trace 17292. Next observer evidence: {'until': 265.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5001229576814085, 'next_transition': 17379}.
<a id="trace-1990"></a>
- 265.50s–265.50s (×1), actor 4, squad 0 (events line 1990): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.211227143850401, 'next_transition': 17392}.
<a id="trace-17384"></a>
- 265.50s–265.50s (×1), actor 4, squad 0 (trace 17384): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.086579 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 265.50s, trace 17384. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.211227143850401, 'next_transition': 17392}.
<a id="trace-17385"></a>
- 265.50s–265.50s (×1), actor 4, squad 0 (trace 17385): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.086579 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 265.50s, trace 17385. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.211227143850401, 'next_transition': 17392}.
<a id="trace-17392"></a>
<a id="trace-17406"></a>
- 266.30s–267.30s (×2), actor 4, squad 0 (trace 17392): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 265.50s, trace 17385. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23801141254149985, 'next_transition': 17406}.
<a id="trace-17412"></a>
- 267.95s–267.95s (×1), actor 4, squad 0 (trace 17412): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 265.50s, trace 17385. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17529}.
<a id="trace-17413"></a>
- 267.95s–267.95s (×1), actor 4, squad 0 (trace 17413): rearward bound: one stationary suppressing element. Knowledge: actor memory at 265.50s, trace 17385. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17529}.
<a id="trace-17529"></a>
<a id="trace-17546"></a>
<a id="trace-17618"></a>
<a id="trace-17629"></a>
<a id="trace-17637"></a>
<a id="trace-17645"></a>
- 268.30s–273.30s (×6), actor 4, squad 0 (trace 17529): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 265.50s, trace 17385. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17546}.
<a id="trace-17656"></a>
- 274.05s–274.05s (×1), actor 4, squad 0 (trace 17656): NeedSupport. Knowledge: actor memory at 270.00s, trace 17559. Next observer evidence: {'until': 274.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17662}.
<a id="trace-17662"></a>
<a id="trace-17732"></a>
<a id="trace-17741"></a>
<a id="trace-17750"></a>
<a id="trace-17759"></a>
<a id="trace-17840"></a>
<a id="trace-17848"></a>
<a id="trace-17855"></a>
<a id="trace-17865"></a>
<a id="trace-17880"></a>
<a id="trace-17946"></a>
<a id="trace-17957"></a>
<a id="trace-17965"></a>
<a id="trace-17974"></a>
<a id="trace-17989"></a>
<a id="trace-18057"></a>
<a id="trace-18065"></a>
- 274.30s–291.30s (×17), actor 4, squad 0 (trace 17662): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 270.00s, trace 17559. Next observer evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17732}.
<a id="trace-18071"></a>
- 291.80s–291.80s (×1), actor 4, squad 0 (trace 18071): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 290.00s, trace 17999. Next observer evidence: {'until': 292.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18076}.
<a id="trace-18076"></a>
<a id="trace-18090"></a>
<a id="trace-18101"></a>
<a id="trace-18179"></a>
<a id="trace-18188"></a>
<a id="trace-18199"></a>
<a id="trace-18208"></a>
<a id="trace-18277"></a>
- 292.30s–300.30s (×8), actor 4, squad 0 (trace 18076): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 290.00s, trace 17999. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18090}.

## Net delivery

152 matched order/radio deliveries; 204 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.350s; maximum 2.400s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 2754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 2755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 2762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 2763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3627: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3635: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3639: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3640: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3641: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3642: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 3857: estimate 8.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 3858: estimate 8.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 3939: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3940: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 3941: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 3942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3944: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3945: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3947: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3948: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 3949: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 3950: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3951: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3952: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3953: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3954: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 4480: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4481: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 4482: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 4483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4485: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4486: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4488: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4489: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 4490: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 4491: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4492: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4493: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4494: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4495: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 8195: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 8196: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 8197: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 8198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 8199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 8200: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 8201: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 8202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 8203: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 8204: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 8205: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 8206: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 8207: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 8208: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 8209: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 8210: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 8829: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8830: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 8831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8833: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8834: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8835: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8836: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8837: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8838: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8839: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8840: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8841: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8842: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8843: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 57.05s leader 5, trace 9088: estimate 9.47; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 9204: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 9205: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 9206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 9207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 9208: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 9209: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 9210: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 9211: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 9212: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 9213: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 9214: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 9215: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 9216: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 9217: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 9218: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 9433: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 9434: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 9435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 9436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 9437: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 9438: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 9439: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 9440: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 9441: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 9442: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 9443: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 9444: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 9445: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 9446: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.35s leader 5, trace 10097: estimate 9.74; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.35s leader 5, trace 10098: estimate 9.74; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 10115: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 10116: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 10117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 10118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 10119: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 10120: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 10121: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 10122: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 10123: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 10124: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 10125: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 10126: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 10127: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 10128: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 10386: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 10387: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 10388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 10389: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 10390: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 10391: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 10392: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 10393: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 10394: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 10395: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 10396: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 10397: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 10398: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 10898: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 10899: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 10900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 10901: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 10902: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 10903: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 10904: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 10905: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 10906: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 10907: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 10908: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 10909: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 10910: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 11404: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 11405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 11406: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 11407: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 11408: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 11409: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 11410: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 11411: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 11412: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 11413: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 11414: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 11415: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 11590: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 11591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 11592: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 11593: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 11594: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 11595: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 11596: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 11597: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 11598: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 11599: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 11600: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 11601: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 11753: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 11754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 11755: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 11756: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 11757: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 11758: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 11759: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 11760: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 11761: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 11762: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 11763: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 11764: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 11917: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 11918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 11919: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 11920: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 11921: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 11922: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 11923: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 11924: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 11925: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 11926: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 11927: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 11928: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 12155: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 12156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 12157: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 12158: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 12159: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 12160: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 12161: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 12162: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 12163: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 12164: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 12165: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 12294: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 12295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 12296: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 12297: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 12298: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 12299: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 12300: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 12301: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 12302: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 12303: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 12304: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 12436: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 12437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 12438: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 12439: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 12440: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 12441: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 12442: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 12443: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 12444: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 12445: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 12446: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 116.45s leader 5, trace 12526: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 116.45s leader 5, trace 12527: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 12645: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 12646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 12647: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 12648: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 12649: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 12650: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 12651: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 12652: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 12653: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 12654: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.35s leader 1, trace 12743: estimate 8.60; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 12767: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 12768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 12769: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 12770: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 12771: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 12772: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 12773: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 12774: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 12775: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 12776: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 12884: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 12885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 12886: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 12887: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 12888: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 12889: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 12890: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 12891: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 12892: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 12893: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 13060: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 13061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 13062: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 13063: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 13064: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 13065: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 13066: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 13067: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 13068: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 13069: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 13192: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 13193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 13194: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 13195: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 13196: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 13197: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 13198: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 13199: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 13200: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 13201: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 13313: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 13314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 13315: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 13316: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 13317: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 13318: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 13319: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 13320: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 13321: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 13322: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 13507: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 13508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 13509: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 13510: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 13511: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 13512: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 13513: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 13514: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 13515: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 13516: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 13641: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 13642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 13643: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 13644: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 13645: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 13646: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 13647: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 13648: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 13649: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 13650: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 13761: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 13762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 13763: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 13764: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 13765: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 13766: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 13767: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 13768: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 13769: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 13770: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 13944: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 13945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 13946: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 13947: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 13948: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 13949: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 13950: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 13951: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 13952: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 13953: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 14081: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 14082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 14083: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 14084: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 14085: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 14086: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 14087: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 14088: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 14089: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 14090: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 14222: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 14223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 14224: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 14225: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 14226: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 14227: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 14228: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 14229: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 14230: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 14231: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 14342: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 14343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 14344: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 14345: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 14346: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 14347: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 14348: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 14349: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 14350: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 14351: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 14457: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 14458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 14459: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 14460: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 14461: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 14462: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 14463: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 14464: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 14465: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 14466: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.15s leader 1, trace 14467: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 188.25s leader 1, trace 14554: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 188.25s leader 1, trace 14555: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 14581: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 14582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 14583: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 14584: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 14585: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 14586: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 14587: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 14588: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 14589: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 14590: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 14764: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 14765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 14766: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 14767: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 14768: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 14769: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 14770: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 14771: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 14772: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 14773: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 14892: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 14893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 14894: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 14895: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 14896: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 14897: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 14898: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 14899: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 14900: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 14901: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 15015: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 15016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 15017: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 15018: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 15019: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 15020: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 15021: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 15022: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 15023: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 15024: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 15205: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 15206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 15207: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 15208: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 15209: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 15210: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 15211: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 15212: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 15213: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 15214: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 15336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 15337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 15338: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 15339: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 15340: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 15341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 15342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 15343: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 15344: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 15345: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 216.35s leader 1, trace 15410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 216.35s leader 1, trace 15411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 15577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 15578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 15579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 15580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 15581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 15582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 15583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 15584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 15585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 15586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 15716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 15717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 15718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 15719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 15720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 15721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 15722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 15723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 15724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 15725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 15849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 15850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 15851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 15852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 15853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 15854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 15855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 15856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 15857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 15858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 16038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 16039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 16040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 16041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 16042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 16043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 16044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 16045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 16046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 16047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 16164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 16165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 16166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 16167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 16168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 16169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 16170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 16171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 16172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 16173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 16289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 16290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 16291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 16292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 16293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 16294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 16295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 16296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 16297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 16298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 16409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 16410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 16411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 16412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 16413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 16414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 16415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 16416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 16417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 16418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 253.50s leader 1, trace 16619: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 16824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 16825: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 16826: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 16827: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 16828: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 16829: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 16830: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 16831: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 16832: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.90s leader 4, trace 17180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.90s leader 4, trace 17181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 17183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 17184: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 17185: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 17186: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 17187: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 17188: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 17189: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 17190: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 17191: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 263.40s leader 4, trace 17292: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 17318: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 17319: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 17320: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 17321: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 17322: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 17323: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 17324: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 17325: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 17326: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.50s leader 4, trace 17384: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.50s leader 4, trace 17385: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 17559: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 17560: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 17561: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 17562: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 17563: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 17564: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 17565: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 17566: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 17567: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 17672: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 17673: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 17674: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 17675: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 17676: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 17677: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 17678: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 17679: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 17680: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 17782: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 17783: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 17784: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 17785: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 17786: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 17787: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 17788: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 17789: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 17790: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 17887: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 17888: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 17889: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 17890: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 17891: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 17892: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 17893: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 17894: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 17895: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 17999: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 18000: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 18001: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 18002: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 18003: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 18004: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 18005: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 18006: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 18007: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 18114: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 18115: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 18116: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 18117: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 18118: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 18119: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 18120: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 18121: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 18122: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 18219: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 18220: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 18221: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 18222: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 18223: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 18224: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 18225: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 18226: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 18227: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Soren killed in action
- 1: Reed incapacitated
- 1: Vale killed in action
- 1: Ash killed in action
- 1: Moss incapacitated
- 1: Iven incapacitated
- 1: Rook killed in action
- 1: Tern killed in action

## Outcome attribution

- 116.45s, evidence 1502: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2349923257375768, 'next_transition': 12545}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 116.45s, evidence 12526: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.185531 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2349923257375768, 'next_transition': 12545}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 116.45s, evidence 12527: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.185531 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2349923257375768, 'next_transition': 12545}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 123.35s, evidence 1522: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339923500663496, 'next_transition': 12755}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 185.15s, evidence 1669: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
