# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/3/109/good-azure/battle-109-1789673696487253880`

## Battle summary

**Ember** · 360 s · 207 shots.

### Turning points

- 14.3s, squad 4: contact (events line 157). First recorded contact.
- 22.2s, squad 0: withdrawal ([trace 1979](#trace-1979)). 33.7s, squad 0: took cover and returned fire.
- 32.7s, squad 0: help call ([trace 2660](#trace-2660)). No completion observed before termination.
- 37.9s, squad 0: withdrawal ([trace 2863](#trace-2863)). 58.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 68.5s, squad 0: withdrawal ([trace 4156](#trace-4156)). 113.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 185.7s, squad 0: withdrawal ([trace 9966](#trace-9966)). 258.3s, squad 0: took cover and returned fire.
- 211.4s, squad 0: help call ([trace 11602](#trace-11602)). No completion observed before termination.
- 253.0s, squad 0: help call ([trace 13081](#trace-13081)). No completion observed before termination.
- 262.1s, squad 0: withdrawal ([trace 13500](#trace-13500)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 16 shots, 3/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 191 shots, 0/6 lost.

### Decisions and attribution

At 185.1s, squad 0 chose leader risk threshold crossed without support ([trace 9896](#trace-9896)), followed by 1 shots and 0 own casualties; estimate 5.4 against 4 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 389](#trace-389)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 388](#trace-388)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000094896109019, 'next_transition': 402}.
- 21.1s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477223 retreat threshold=0.500000 initiative=delegated ([trace 1922](#trace-1922)). Following evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1844095546643326, 'next_transition': 1933}.

### Communication

211 matched deliveries (mean 0.25s, max 1.50s); 244 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.35s, squad 4, contact, evidence events line 157: First recorded contact; .
- 22.25s, squad 0, withdrawal, evidence 1979: BreakContact: believed ratio at least two without superiority; 33.7s, squad 0: took cover and returned fire.
- 32.70s, squad 0, help call, evidence 2660: NeedSupport; No completion observed before termination.
- 37.85s, squad 0, withdrawal, evidence 2863: BreakContact: believed ratio at least two without superiority; 58.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 68.45s, squad 0, withdrawal, evidence 4156: Withdraw to received rally; 113.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 185.65s, squad 0, withdrawal, evidence 9966: BreakContact: believed ratio at least two without superiority; 258.3s, squad 0: took cover and returned fire.
- 211.45s, squad 0, help call, evidence 11602: NeedSupport; No completion observed before termination.
- 253.00s, squad 0, help call, evidence 13081: NeedSupport; No completion observed before termination.
- 262.05s, squad 0, withdrawal, evidence 13500: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028726018899436, 'next_transition': 323}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028726018899436, 'next_transition': 323}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028726018899436, 'next_transition': 323}.
<a id="trace-323"></a>
<a id="trace-341"></a>
<a id="trace-357"></a>
<a id="trace-372"></a>
<a id="trace-383"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 323): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2200042408263083, 'next_transition': 341}.
<a id="trace-59"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 59): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000094896109019, 'next_transition': 402}.
<a id="trace-388"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 388): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 388. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000094896109019, 'next_transition': 402}.
<a id="trace-389"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 389): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 389. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000094896109019, 'next_transition': 402}.
<a id="trace-402"></a>
<a id="trace-421"></a>
<a id="trace-495"></a>
<a id="trace-507"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 402): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 389. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.799996465134876, 'next_transition': 421}.
<a id="trace-509"></a>
<a id="trace-661"></a>
<a id="trace-685"></a>
<a id="trace-707"></a>
<a id="trace-751"></a>
<a id="trace-782"></a>
<a id="trace-799"></a>
<a id="trace-812"></a>
<a id="trace-896"></a>
<a id="trace-909"></a>
<a id="trace-925"></a>
<a id="trace-938"></a>
<a id="trace-974"></a>
<a id="trace-987"></a>
<a id="trace-998"></a>
<a id="trace-1148"></a>
<a id="trace-1229"></a>
<a id="trace-1237"></a>
<a id="trace-1255"></a>
<a id="trace-1275"></a>
<a id="trace-1284"></a>
<a id="trace-1530"></a>
<a id="trace-1549"></a>
<a id="trace-1797"></a>
<a id="trace-1893"></a>
<a id="trace-1912"></a>
<a id="trace-1935"></a>
<a id="trace-1950"></a>
<a id="trace-1978"></a>
<a id="trace-2235"></a>
<a id="trace-2260"></a>
<a id="trace-2283"></a>
<a id="trace-2323"></a>
<a id="trace-2411"></a>
<a id="trace-2431"></a>
<a id="trace-2453"></a>
<a id="trace-2465"></a>
<a id="trace-2476"></a>
<a id="trace-2486"></a>
<a id="trace-2500"></a>
<a id="trace-2526"></a>
<a id="trace-2538"></a>
<a id="trace-2617"></a>
<a id="trace-2623"></a>
<a id="trace-2635"></a>
<a id="trace-2643"></a>
<a id="trace-2653"></a>
<a id="trace-2670"></a>
<a id="trace-2681"></a>
<a id="trace-2699"></a>
<a id="trace-2715"></a>
<a id="trace-2727"></a>
<a id="trace-2805"></a>
<a id="trace-2813"></a>
<a id="trace-2847"></a>
<a id="trace-2854"></a>
<a id="trace-2860"></a>
<a id="trace-2931"></a>
<a id="trace-2941"></a>
<a id="trace-2956"></a>
<a id="trace-2964"></a>
<a id="trace-3040"></a>
<a id="trace-3058"></a>
<a id="trace-3068"></a>
<a id="trace-3076"></a>
<a id="trace-3099"></a>
<a id="trace-3110"></a>
<a id="trace-3117"></a>
<a id="trace-3133"></a>
<a id="trace-3148"></a>
<a id="trace-3220"></a>
<a id="trace-3229"></a>
<a id="trace-3244"></a>
<a id="trace-3251"></a>
<a id="trace-3261"></a>
<a id="trace-3270"></a>
<a id="trace-3288"></a>
<a id="trace-3505"></a>
<a id="trace-3520"></a>
<a id="trace-3529"></a>
<a id="trace-3551"></a>
<a id="trace-3570"></a>
<a id="trace-3593"></a>
<a id="trace-3602"></a>
<a id="trace-3626"></a>
<a id="trace-3702"></a>
<a id="trace-3711"></a>
<a id="trace-3724"></a>
<a id="trace-3753"></a>
<a id="trace-3762"></a>
<a id="trace-3784"></a>
<a id="trace-3792"></a>
<a id="trace-3815"></a>
<a id="trace-3832"></a>
<a id="trace-3912"></a>
<a id="trace-3941"></a>
<a id="trace-3949"></a>
<a id="trace-3965"></a>
<a id="trace-3974"></a>
<a id="trace-3985"></a>
<a id="trace-3993"></a>
<a id="trace-4094"></a>
<a id="trace-4101"></a>
<a id="trace-4125"></a>
<a id="trace-4133"></a>
<a id="trace-4146"></a>
<a id="trace-4216"></a>
<a id="trace-4230"></a>
<a id="trace-4246"></a>
<a id="trace-4342"></a>
<a id="trace-4353"></a>
<a id="trace-4367"></a>
<a id="trace-4377"></a>
<a id="trace-4393"></a>
<a id="trace-4401"></a>
<a id="trace-4420"></a>
<a id="trace-4431"></a>
<a id="trace-4504"></a>
<a id="trace-4512"></a>
<a id="trace-4524"></a>
<a id="trace-4552"></a>
<a id="trace-4573"></a>
<a id="trace-4591"></a>
<a id="trace-4602"></a>
<a id="trace-4785"></a>
<a id="trace-4798"></a>
<a id="trace-4836"></a>
<a id="trace-4852"></a>
<a id="trace-4863"></a>
<a id="trace-4877"></a>
<a id="trace-4884"></a>
<a id="trace-4987"></a>
<a id="trace-5011"></a>
<a id="trace-5035"></a>
<a id="trace-5048"></a>
<a id="trace-5064"></a>
<a id="trace-5075"></a>
<a id="trace-5090"></a>
<a id="trace-5099"></a>
<a id="trace-5177"></a>
<a id="trace-5199"></a>
<a id="trace-5241"></a>
<a id="trace-5252"></a>
<a id="trace-5324"></a>
<a id="trace-5333"></a>
<a id="trace-5446"></a>
<a id="trace-5461"></a>
<a id="trace-5476"></a>
<a id="trace-5481"></a>
<a id="trace-5503"></a>
<a id="trace-5521"></a>
<a id="trace-5608"></a>
<a id="trace-5615"></a>
<a id="trace-5629"></a>
<a id="trace-5641"></a>
<a id="trace-5660"></a>
<a id="trace-5669"></a>
<a id="trace-5683"></a>
<a id="trace-5688"></a>
<a id="trace-5807"></a>
<a id="trace-5819"></a>
<a id="trace-5918"></a>
<a id="trace-5929"></a>
<a id="trace-5946"></a>
<a id="trace-5966"></a>
<a id="trace-5980"></a>
<a id="trace-5991"></a>
<a id="trace-6007"></a>
<a id="trace-6022"></a>
<a id="trace-6097"></a>
<a id="trace-6115"></a>
<a id="trace-6124"></a>
<a id="trace-6136"></a>
<a id="trace-6149"></a>
<a id="trace-6160"></a>
<a id="trace-6173"></a>
<a id="trace-6184"></a>
<a id="trace-6202"></a>
<a id="trace-6300"></a>
<a id="trace-6306"></a>
<a id="trace-6326"></a>
<a id="trace-6347"></a>
<a id="trace-6364"></a>
<a id="trace-6394"></a>
<a id="trace-6404"></a>
<a id="trace-6411"></a>
<a id="trace-6484"></a>
<a id="trace-6501"></a>
<a id="trace-6533"></a>
<a id="trace-6547"></a>
<a id="trace-6721"></a>
<a id="trace-7022"></a>
<a id="trace-7036"></a>
<a id="trace-7047"></a>
<a id="trace-7063"></a>
<a id="trace-7078"></a>
<a id="trace-7101"></a>
<a id="trace-7182"></a>
<a id="trace-7189"></a>
<a id="trace-7210"></a>
<a id="trace-7223"></a>
<a id="trace-7242"></a>
<a id="trace-7255"></a>
<a id="trace-7270"></a>
<a id="trace-7277"></a>
<a id="trace-7291"></a>
<a id="trace-7301"></a>
<a id="trace-7372"></a>
<a id="trace-7380"></a>
<a id="trace-7396"></a>
<a id="trace-7412"></a>
<a id="trace-7423"></a>
<a id="trace-7612"></a>
<a id="trace-7631"></a>
<a id="trace-7644"></a>
<a id="trace-7651"></a>
<a id="trace-7735"></a>
<a id="trace-7749"></a>
<a id="trace-7769"></a>
<a id="trace-7786"></a>
<a id="trace-7793"></a>
<a id="trace-7810"></a>
<a id="trace-7821"></a>
<a id="trace-7844"></a>
<a id="trace-7859"></a>
<a id="trace-7961"></a>
<a id="trace-7969"></a>
<a id="trace-7984"></a>
<a id="trace-7992"></a>
<a id="trace-8012"></a>
<a id="trace-8025"></a>
<a id="trace-8037"></a>
<a id="trace-8047"></a>
<a id="trace-8125"></a>
<a id="trace-8132"></a>
<a id="trace-8150"></a>
<a id="trace-8186"></a>
<a id="trace-8209"></a>
<a id="trace-8221"></a>
<a id="trace-8304"></a>
<a id="trace-8319"></a>
<a id="trace-8489"></a>
<a id="trace-8505"></a>
<a id="trace-8516"></a>
<a id="trace-8529"></a>
<a id="trace-8540"></a>
<a id="trace-8646"></a>
<a id="trace-8660"></a>
<a id="trace-8679"></a>
<a id="trace-8720"></a>
<a id="trace-8728"></a>
<a id="trace-8746"></a>
<a id="trace-8765"></a>
<a id="trace-8840"></a>
<a id="trace-8866"></a>
<a id="trace-8892"></a>
<a id="trace-8900"></a>
<a id="trace-8916"></a>
<a id="trace-8941"></a>
<a id="trace-9004"></a>
<a id="trace-9086"></a>
<a id="trace-9111"></a>
<a id="trace-9123"></a>
<a id="trace-9154"></a>
<a id="trace-9165"></a>
<a id="trace-9176"></a>
<a id="trace-9198"></a>
<a id="trace-9209"></a>
<a id="trace-9286"></a>
<a id="trace-9294"></a>
<a id="trace-9308"></a>
<a id="trace-9324"></a>
<a id="trace-9335"></a>
<a id="trace-9360"></a>
<a id="trace-9365"></a>
<a id="trace-9372"></a>
<a id="trace-9568"></a>
<a id="trace-9591"></a>
<a id="trace-9603"></a>
<a id="trace-9784"></a>
<a id="trace-9812"></a>
<a id="trace-9824"></a>
<a id="trace-9838"></a>
<a id="trace-9849"></a>
<a id="trace-9865"></a>
<a id="trace-9882"></a>
<a id="trace-10231"></a>
<a id="trace-10246"></a>
<a id="trace-10276"></a>
<a id="trace-10292"></a>
<a id="trace-10324"></a>
<a id="trace-10352"></a>
<a id="trace-10448"></a>
<a id="trace-10498"></a>
<a id="trace-10542"></a>
<a id="trace-10606"></a>
<a id="trace-10686"></a>
<a id="trace-10730"></a>
<a id="trace-10870"></a>
<a id="trace-10977"></a>
<a id="trace-11127"></a>
<a id="trace-11148"></a>
<a id="trace-11163"></a>
<a id="trace-11175"></a>
<a id="trace-11252"></a>
<a id="trace-11267"></a>
<a id="trace-11287"></a>
<a id="trace-11299"></a>
<a id="trace-11316"></a>
<a id="trace-11419"></a>
<a id="trace-11439"></a>
<a id="trace-11444"></a>
<a id="trace-11460"></a>
<a id="trace-11471"></a>
<a id="trace-11483"></a>
<a id="trace-11492"></a>
<a id="trace-11503"></a>
<a id="trace-11582"></a>
<a id="trace-11598"></a>
<a id="trace-11610"></a>
<a id="trace-11621"></a>
<a id="trace-11632"></a>
<a id="trace-11643"></a>
<a id="trace-11651"></a>
<a id="trace-11855"></a>
<a id="trace-11872"></a>
<a id="trace-11953"></a>
<a id="trace-11957"></a>
<a id="trace-11969"></a>
<a id="trace-11979"></a>
<a id="trace-11985"></a>
<a id="trace-11989"></a>
<a id="trace-11998"></a>
<a id="trace-12008"></a>
<a id="trace-12101"></a>
<a id="trace-12112"></a>
<a id="trace-12127"></a>
<a id="trace-12144"></a>
<a id="trace-12149"></a>
<a id="trace-12158"></a>
<a id="trace-12166"></a>
<a id="trace-12178"></a>
<a id="trace-12194"></a>
<a id="trace-12266"></a>
<a id="trace-12288"></a>
<a id="trace-12295"></a>
<a id="trace-12306"></a>
<a id="trace-12316"></a>
<a id="trace-12364"></a>
<a id="trace-12437"></a>
<a id="trace-12448"></a>
<a id="trace-12459"></a>
<a id="trace-12465"></a>
<a id="trace-12474"></a>
<a id="trace-12486"></a>
<a id="trace-12496"></a>
<a id="trace-12507"></a>
<a id="trace-12521"></a>
<a id="trace-12531"></a>
<a id="trace-12614"></a>
<a id="trace-12620"></a>
<a id="trace-12627"></a>
<a id="trace-12633"></a>
<a id="trace-12640"></a>
<a id="trace-12646"></a>
<a id="trace-12654"></a>
<a id="trace-12660"></a>
<a id="trace-12734"></a>
<a id="trace-12740"></a>
<a id="trace-12751"></a>
<a id="trace-12760"></a>
<a id="trace-12777"></a>
<a id="trace-12791"></a>
<a id="trace-12797"></a>
<a id="trace-12812"></a>
<a id="trace-12826"></a>
<a id="trace-12911"></a>
<a id="trace-12922"></a>
<a id="trace-12932"></a>
<a id="trace-12942"></a>
<a id="trace-12952"></a>
<a id="trace-12960"></a>
<a id="trace-12965"></a>
<a id="trace-12976"></a>
<a id="trace-12982"></a>
<a id="trace-13052"></a>
<a id="trace-13056"></a>
<a id="trace-13062"></a>
<a id="trace-13067"></a>
<a id="trace-13078"></a>
<a id="trace-13098"></a>
<a id="trace-13109"></a>
<a id="trace-13119"></a>
<a id="trace-13191"></a>
<a id="trace-13197"></a>
<a id="trace-13208"></a>
<a id="trace-13216"></a>
<a id="trace-13231"></a>
<a id="trace-13368"></a>
<a id="trace-13384"></a>
<a id="trace-13393"></a>
<a id="trace-13465"></a>
<a id="trace-13488"></a>
<a id="trace-13498"></a>
<a id="trace-13698"></a>
<a id="trace-13706"></a>
<a id="trace-13718"></a>
<a id="trace-13733"></a>
<a id="trace-13765"></a>
<a id="trace-13842"></a>
<a id="trace-13863"></a>
<a id="trace-13870"></a>
<a id="trace-13879"></a>
<a id="trace-13897"></a>
<a id="trace-13904"></a>
<a id="trace-13998"></a>
<a id="trace-14011"></a>
<a id="trace-14025"></a>
<a id="trace-14034"></a>
<a id="trace-14053"></a>
<a id="trace-14073"></a>
<a id="trace-14157"></a>
<a id="trace-14165"></a>
<a id="trace-14173"></a>
<a id="trace-14179"></a>
<a id="trace-14191"></a>
<a id="trace-14196"></a>
<a id="trace-14281"></a>
<a id="trace-14286"></a>
<a id="trace-14293"></a>
<a id="trace-14308"></a>
<a id="trace-14316"></a>
<a id="trace-14331"></a>
<a id="trace-14341"></a>
<a id="trace-14347"></a>
<a id="trace-14422"></a>
<a id="trace-14439"></a>
<a id="trace-14446"></a>
<a id="trace-14454"></a>
<a id="trace-14470"></a>
<a id="trace-14481"></a>
<a id="trace-14490"></a>
<a id="trace-14567"></a>
<a id="trace-14572"></a>
<a id="trace-14582"></a>
<a id="trace-14589"></a>
<a id="trace-14605"></a>
<a id="trace-14621"></a>
<a id="trace-14630"></a>
<a id="trace-14639"></a>
<a id="trace-14647"></a>
<a id="trace-14716"></a>
<a id="trace-14721"></a>
<a id="trace-14729"></a>
<a id="trace-14734"></a>
<a id="trace-14744"></a>
<a id="trace-14749"></a>
<a id="trace-14761"></a>
<a id="trace-14768"></a>
<a id="trace-14780"></a>
<a id="trace-14795"></a>
<a id="trace-14865"></a>
<a id="trace-14872"></a>
<a id="trace-14880"></a>
<a id="trace-14885"></a>
<a id="trace-14895"></a>
<a id="trace-14900"></a>
<a id="trace-14916"></a>
<a id="trace-14933"></a>
<a id="trace-15009"></a>
<a id="trace-15022"></a>
<a id="trace-15041"></a>
<a id="trace-15046"></a>
<a id="trace-15055"></a>
<a id="trace-15072"></a>
<a id="trace-15078"></a>
<a id="trace-15158"></a>
<a id="trace-15176"></a>
<a id="trace-15188"></a>
<a id="trace-15197"></a>
<a id="trace-15205"></a>
<a id="trace-15223"></a>
<a id="trace-15293"></a>
<a id="trace-15298"></a>
<a id="trace-15306"></a>
<a id="trace-15319"></a>
<a id="trace-15327"></a>
<a id="trace-15336"></a>
<a id="trace-15346"></a>
<a id="trace-15367"></a>
<a id="trace-15436"></a>
<a id="trace-15442"></a>
<a id="trace-15453"></a>
<a id="trace-15474"></a>
<a id="trace-15482"></a>
<a id="trace-15491"></a>
<a id="trace-15509"></a>
<a id="trace-15578"></a>
<a id="trace-15601"></a>
<a id="trace-15612"></a>
<a id="trace-15628"></a>
<a id="trace-15636"></a>
<a id="trace-15645"></a>
<a id="trace-15653"></a>
<a id="trace-15727"></a>
<a id="trace-15736"></a>
<a id="trace-15741"></a>
<a id="trace-15753"></a>
<a id="trace-15763"></a>
<a id="trace-15773"></a>
<a id="trace-15790"></a>
<a id="trace-15796"></a>
<a id="trace-15880"></a>
<a id="trace-15887"></a>
<a id="trace-15896"></a>
<a id="trace-15903"></a>
<a id="trace-15912"></a>
<a id="trace-15920"></a>
<a id="trace-15936"></a>
<a id="trace-16011"></a>
<a id="trace-16016"></a>
<a id="trace-16024"></a>
<a id="trace-16048"></a>
<a id="trace-16057"></a>
<a id="trace-16064"></a>
<a id="trace-16075"></a>
<a id="trace-16082"></a>
<a id="trace-16153"></a>
<a id="trace-16163"></a>
<a id="trace-16172"></a>
<a id="trace-16177"></a>
<a id="trace-16192"></a>
<a id="trace-16209"></a>
<a id="trace-16224"></a>
<a id="trace-16295"></a>
<a id="trace-16302"></a>
<a id="trace-16312"></a>
<a id="trace-16318"></a>
<a id="trace-16333"></a>
<a id="trace-16339"></a>
<a id="trace-16347"></a>
<a id="trace-16356"></a>
<a id="trace-16365"></a>
<a id="trace-16373"></a>
<a id="trace-16441"></a>
<a id="trace-16447"></a>
<a id="trace-16455"></a>
<a id="trace-16474"></a>
<a id="trace-16481"></a>
<a id="trace-16491"></a>
<a id="trace-16499"></a>
<a id="trace-16513"></a>
- 5.70s–359.30s (×552), actor 37, squad 4 (trace 509): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 434. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23623503842739046, 'next_transition': 661}.
<a id="trace-518"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 518): traveling overwatch. Knowledge: actor memory at 5.00s, trace 425. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5570094391110296, 'next_transition': 659}.
<a id="trace-519"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 519): received platoon directive. Knowledge: actor memory at 5.00s, trace 425. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5570094391110296, 'next_transition': 659}.
<a id="trace-659"></a>
<a id="trace-683"></a>
<a id="trace-705"></a>
<a id="trace-725"></a>
<a id="trace-749"></a>
<a id="trace-780"></a>
<a id="trace-797"></a>
<a id="trace-810"></a>
<a id="trace-894"></a>
<a id="trace-907"></a>
<a id="trace-923"></a>
<a id="trace-936"></a>
<a id="trace-955"></a>
<a id="trace-972"></a>
<a id="trace-985"></a>
<a id="trace-996"></a>
- 6.20s–13.70s (×16), actor 5, squad 0 (trace 659): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 428. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.84356598480356, 'next_transition': 683}.
<a id="trace-1007"></a>
- 13.95s–13.95s (×1), actor 0, squad 0 (trace 1007): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 816. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1126}.
<a id="trace-1126"></a>
<a id="trace-1146"></a>
<a id="trace-1227"></a>
<a id="trace-1235"></a>
<a id="trace-1253"></a>
<a id="trace-1273"></a>
<a id="trace-1282"></a>
- 14.20s–17.25s (×7), actor 5, squad 0 (trace 1126): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 819. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.026250438942890943, 'next_transition': 1146}.
<a id="trace-1290"></a>
- 17.45s–17.45s (×1), actor 0, squad 0 (trace 1290): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1152. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18999034775545623, 'next_transition': 1503}.
<a id="trace-1291"></a>
- 17.45s–17.45s (×1), actor 0, squad 0 (trace 1291): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1152. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18999034775545623, 'next_transition': 1503}.
<a id="trace-1292"></a>
- 17.45s–17.45s (×1), actor 0, squad 0 (trace 1292): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1152. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18999034775545623, 'next_transition': 1503}.
<a id="trace-1503"></a>
<a id="trace-1528"></a>
<a id="trace-1547"></a>
- 17.75s–18.75s (×3), actor 5, squad 0 (trace 1503): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1155. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4126246497732746, 'next_transition': 1528}.
<a id="trace-1550"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 1550): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1152. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.51164633375136, 'next_transition': 1776}.
<a id="trace-1776"></a>
<a id="trace-1795"></a>
<a id="trace-1891"></a>
<a id="trace-1910"></a>
- 19.25s–20.75s (×4), actor 5, squad 0 (trace 1776): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1155. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3903443457717975, 'next_transition': 1795}.
<a id="trace-263"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (events line 263): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1921"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 1921): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 21.05s, trace 1921. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1844095546643326, 'next_transition': 1933}.
<a id="trace-1922"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 1922): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477223 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 1922. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1844095546643326, 'next_transition': 1933}.
<a id="trace-1923"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 1923): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477223 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 1923. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1844095546643326, 'next_transition': 1933}.
<a id="trace-1933"></a>
<a id="trace-1948"></a>
<a id="trace-1976"></a>
- 21.25s–22.25s (×3), actor 5, squad 0 (trace 1933): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 1923. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08596607704657565, 'next_transition': 1948}.
<a id="trace-1979"></a>
- 22.25s–22.25s (×1), actor 0, squad 0 (trace 1979): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 1809. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1392023611335994, 'next_transition': 2233}.
<a id="trace-1980"></a>
- 22.25s–22.25s (×1), actor 0, squad 0 (trace 1980): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 1809. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1392023611335994, 'next_transition': 2233}.
<a id="trace-2233"></a>
<a id="trace-2258"></a>
<a id="trace-2281"></a>
<a id="trace-2305"></a>
<a id="trace-2321"></a>
<a id="trace-2409"></a>
<a id="trace-2429"></a>
<a id="trace-2451"></a>
<a id="trace-2463"></a>
<a id="trace-2474"></a>
<a id="trace-2484"></a>
<a id="trace-2498"></a>
<a id="trace-2513"></a>
<a id="trace-2524"></a>
<a id="trace-2536"></a>
<a id="trace-2615"></a>
<a id="trace-2621"></a>
<a id="trace-2633"></a>
<a id="trace-2641"></a>
<a id="trace-2651"></a>
- 22.75s–32.25s (×20), actor 5, squad 0 (trace 2233): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 1923. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24114910849814897, 'next_transition': 2258}.
<a id="trace-2659"></a>
- 32.70s–32.70s (×1), actor 1, squad 0 (trace 2659): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 30.00s, trace 2541. Next observer evidence: None.
<a id="trace-2660"></a>
- 32.70s–32.70s (×1), actor 1, squad 0 (trace 2660): NeedSupport. Knowledge: actor memory at 30.00s, trace 2541. Next observer evidence: None.
<a id="trace-2668"></a>
<a id="trace-2679"></a>
- 32.75s–33.25s (×2), actor 5, squad 0 (trace 2668): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2543. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.101790731839126, 'next_transition': 2679}.
<a id="trace-2683"></a>
- 33.70s–33.70s (×1), actor 1, squad 0 (trace 2683): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 2541. Next observer evidence: None.
<a id="trace-2687"></a>
- 33.70s–33.70s (×1), actor 1, squad 0 (trace 2687): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 2541. Next observer evidence: None.
<a id="trace-2688"></a>
- 33.70s–33.70s (×1), actor 1, squad 0 (trace 2688): Reorganise complete: known contact. Knowledge: actor memory at 30.00s, trace 2541. Next observer evidence: None.
<a id="trace-2697"></a>
<a id="trace-2713"></a>
<a id="trace-2725"></a>
<a id="trace-2803"></a>
<a id="trace-2811"></a>
<a id="trace-2826"></a>
<a id="trace-2845"></a>
<a id="trace-2852"></a>
<a id="trace-2858"></a>
- 33.75s–37.75s (×9), actor 5, squad 0 (trace 2697): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2543. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1340046100390118, 'next_transition': 2713}.
<a id="trace-2863"></a>
- 37.85s–37.85s (×1), actor 1, squad 0 (trace 2863): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 2737. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25201302902826306, 'next_transition': 2929}.
<a id="trace-2864"></a>
- 37.85s–37.85s (×1), actor 1, squad 0 (trace 2864): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 2737. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25201302902826306, 'next_transition': 2929}.
<a id="trace-2929"></a>
<a id="trace-2939"></a>
<a id="trace-2954"></a>
<a id="trace-2962"></a>
<a id="trace-3038"></a>
<a id="trace-3056"></a>
<a id="trace-3066"></a>
<a id="trace-3074"></a>
<a id="trace-3090"></a>
<a id="trace-3097"></a>
<a id="trace-3108"></a>
<a id="trace-3115"></a>
<a id="trace-3131"></a>
<a id="trace-3146"></a>
<a id="trace-3218"></a>
<a id="trace-3227"></a>
<a id="trace-3242"></a>
<a id="trace-3249"></a>
<a id="trace-3259"></a>
<a id="trace-3268"></a>
<a id="trace-3286"></a>
<a id="trace-3298"></a>
<a id="trace-3308"></a>
- 38.25s–49.25s (×23), actor 5, squad 0 (trace 2929): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2739. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2834825607609486, 'next_transition': 2939}.
<a id="trace-3312"></a>
- 49.45s–49.45s (×1), actor 1, squad 0 (trace 3312): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 3149. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199419962423525, 'next_transition': 3420}.
<a id="trace-3313"></a>
- 49.45s–49.45s (×1), actor 1, squad 0 (trace 3313): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 3149. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199419962423525, 'next_transition': 3420}.
<a id="trace-3420"></a>
<a id="trace-3503"></a>
<a id="trace-3518"></a>
<a id="trace-3527"></a>
<a id="trace-3549"></a>
<a id="trace-3568"></a>
<a id="trace-3581"></a>
<a id="trace-3591"></a>
<a id="trace-3600"></a>
<a id="trace-3617"></a>
<a id="trace-3624"></a>
<a id="trace-3700"></a>
<a id="trace-3709"></a>
<a id="trace-3722"></a>
<a id="trace-3739"></a>
<a id="trace-3751"></a>
<a id="trace-3760"></a>
- 49.75s–57.75s (×17), actor 5, squad 0 (trace 3420): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3151. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18900325657123423, 'next_transition': 3503}.
<a id="trace-3769"></a>
- 58.15s–58.15s (×1), actor 1, squad 0 (trace 3769): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 55.00s, trace 3629. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35401879535940395, 'next_transition': 3782}.
<a id="trace-3782"></a>
<a id="trace-3790"></a>
<a id="trace-3813"></a>
<a id="trace-3830"></a>
<a id="trace-3910"></a>
<a id="trace-3931"></a>
<a id="trace-3939"></a>
<a id="trace-3947"></a>
<a id="trace-3963"></a>
<a id="trace-3972"></a>
<a id="trace-3983"></a>
<a id="trace-3991"></a>
<a id="trace-4004"></a>
<a id="trace-4013"></a>
<a id="trace-4092"></a>
<a id="trace-4099"></a>
- 58.25s–65.75s (×16), actor 5, squad 0 (trace 3782): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3631. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7079618761853202, 'next_transition': 3790}.
<a id="trace-570"></a>
- 66.05s–66.05s (×1), actor 5, squad 0 (events line 570): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4108"></a>
- 66.05s–66.05s (×1), actor 5, squad 0 (trace 4108): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358409 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.05s, trace 4108. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4123}.
<a id="trace-4109"></a>
- 66.05s–66.05s (×1), actor 5, squad 0 (trace 4109): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358409 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.05s, trace 4109. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4123}.
<a id="trace-4123"></a>
<a id="trace-4131"></a>
<a id="trace-4139"></a>
<a id="trace-4144"></a>
<a id="trace-4152"></a>
- 66.25s–68.25s (×5), actor 5, squad 0 (trace 4123): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.05s, trace 4109. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4131}.
<a id="trace-4156"></a>
- 68.45s–68.45s (×1), actor 1, squad 0 (trace 4156): Withdraw to received rally. Knowledge: actor memory at 65.00s, trace 4025. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4214}.
<a id="trace-4157"></a>
- 68.45s–68.45s (×1), actor 1, squad 0 (trace 4157): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 4025. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4214}.
<a id="trace-4214"></a>
<a id="trace-4228"></a>
<a id="trace-4244"></a>
<a id="trace-4316"></a>
<a id="trace-4325"></a>
<a id="trace-4340"></a>
<a id="trace-4351"></a>
<a id="trace-4365"></a>
<a id="trace-4375"></a>
<a id="trace-4391"></a>
<a id="trace-4399"></a>
<a id="trace-4418"></a>
<a id="trace-4429"></a>
<a id="trace-4502"></a>
<a id="trace-4510"></a>
<a id="trace-4522"></a>
<a id="trace-4532"></a>
<a id="trace-4544"></a>
<a id="trace-4550"></a>
<a id="trace-4571"></a>
<a id="trace-4579"></a>
<a id="trace-4589"></a>
<a id="trace-4600"></a>
- 68.75s–79.75s (×23), actor 5, squad 0 (trace 4214): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.05s, trace 4109. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.031489001254406145, 'next_transition': 4228}.
<a id="trace-4616"></a>
- 80.05s–80.05s (×1), actor 1, squad 0 (trace 4616): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 4604. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4783}.
<a id="trace-4617"></a>
- 80.05s–80.05s (×1), actor 1, squad 0 (trace 4617): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 4604. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4783}.
<a id="trace-4783"></a>
<a id="trace-4796"></a>
<a id="trace-4823"></a>
<a id="trace-4834"></a>
<a id="trace-4850"></a>
<a id="trace-4861"></a>
<a id="trace-4875"></a>
<a id="trace-4882"></a>
<a id="trace-4898"></a>
<a id="trace-4909"></a>
<a id="trace-4985"></a>
<a id="trace-4992"></a>
<a id="trace-5009"></a>
<a id="trace-5023"></a>
<a id="trace-5033"></a>
<a id="trace-5046"></a>
<a id="trace-5062"></a>
<a id="trace-5073"></a>
<a id="trace-5088"></a>
<a id="trace-5097"></a>
<a id="trace-5175"></a>
<a id="trace-5185"></a>
<a id="trace-5197"></a>
<a id="trace-5205"></a>
<a id="trace-5218"></a>
<a id="trace-5227"></a>
<a id="trace-5239"></a>
<a id="trace-5250"></a>
- 80.25s–93.75s (×28), actor 5, squad 0 (trace 4783): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 4606. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4796}.
<a id="trace-5254"></a>
- 94.05s–94.05s (×1), actor 1, squad 0 (trace 5254): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 5101. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1965063888420059, 'next_transition': 5322}.
<a id="trace-5255"></a>
- 94.05s–94.05s (×1), actor 1, squad 0 (trace 5255): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 5101. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1965063888420059, 'next_transition': 5322}.
<a id="trace-5322"></a>
<a id="trace-5331"></a>
<a id="trace-5423"></a>
<a id="trace-5444"></a>
<a id="trace-5459"></a>
<a id="trace-5474"></a>
<a id="trace-5479"></a>
<a id="trace-5501"></a>
<a id="trace-5508"></a>
<a id="trace-5519"></a>
<a id="trace-5527"></a>
<a id="trace-5606"></a>
<a id="trace-5613"></a>
<a id="trace-5627"></a>
<a id="trace-5639"></a>
<a id="trace-5658"></a>
<a id="trace-5667"></a>
<a id="trace-5681"></a>
<a id="trace-5686"></a>
- 94.25s–103.75s (×19), actor 5, squad 0 (trace 5322): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5103. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2039955224998843, 'next_transition': 5331}.
<a id="trace-5692"></a>
- 104.10s–104.10s (×1), actor 1, squad 0 (trace 5692): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 5531. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5805}.
<a id="trace-5693"></a>
- 104.10s–104.10s (×1), actor 1, squad 0 (trace 5693): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 5531. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5805}.
<a id="trace-5805"></a>
<a id="trace-5817"></a>
<a id="trace-5902"></a>
<a id="trace-5916"></a>
<a id="trace-5927"></a>
<a id="trace-5944"></a>
<a id="trace-5954"></a>
<a id="trace-5964"></a>
<a id="trace-5978"></a>
<a id="trace-5989"></a>
<a id="trace-6005"></a>
<a id="trace-6020"></a>
<a id="trace-6095"></a>
<a id="trace-6113"></a>
<a id="trace-6122"></a>
<a id="trace-6134"></a>
<a id="trace-6147"></a>
<a id="trace-6158"></a>
<a id="trace-6171"></a>
<a id="trace-6182"></a>
- 104.25s–113.75s (×20), actor 5, squad 0 (trace 5805): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 5533. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5817}.
<a id="trace-6185"></a>
- 113.85s–113.85s (×1), actor 1, squad 0 (trace 6185): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 6025. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5900989142305607, 'next_transition': 6200}.
<a id="trace-6200"></a>
<a id="trace-6217"></a>
<a id="trace-6298"></a>
<a id="trace-6304"></a>
<a id="trace-6324"></a>
<a id="trace-6345"></a>
<a id="trace-6362"></a>
<a id="trace-6376"></a>
<a id="trace-6387"></a>
<a id="trace-6392"></a>
<a id="trace-6402"></a>
<a id="trace-6409"></a>
<a id="trace-6482"></a>
<a id="trace-6487"></a>
<a id="trace-6494"></a>
<a id="trace-6499"></a>
- 114.25s–121.75s (×16), actor 5, squad 0 (trace 6200): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 6027. Next observer evidence: {'until': 114.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5624833060164718, 'next_transition': 6217}.
<a id="trace-980"></a>
- 122.00s–122.00s (×1), actor 5, squad 0 (events line 980): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6512}.
<a id="trace-6503"></a>
- 122.00s–122.00s (×1), actor 5, squad 0 (trace 6503): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.784970 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 122.00s, trace 6503. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6512}.
<a id="trace-6504"></a>
- 122.00s–122.00s (×1), actor 5, squad 0 (trace 6504): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.784970 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 122.00s, trace 6504. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6512}.
<a id="trace-6512"></a>
<a id="trace-6521"></a>
- 122.25s–122.75s (×2), actor 5, squad 0 (trace 6512): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 122.00s, trace 6504. Next observer evidence: {'until': 122.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6521}.
<a id="trace-986"></a>
- 123.20s–123.20s (×1), actor 5, squad 0 (events line 986): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6524"></a>
- 123.20s–123.20s (×1), actor 5, squad 0 (trace 6524): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 123.20s, trace 6524. Next observer evidence: None.
<a id="trace-6525"></a>
- 123.20s–123.20s (×1), actor 5, squad 0 (trace 6525): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 123.20s, trace 6525. Next observer evidence: None.
<a id="trace-6530"></a>
<a id="trace-6545"></a>
- 123.25s–123.75s (×2), actor 5, squad 0 (trace 6530): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 123.20s, trace 6525. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6545}.
<a id="trace-6550"></a>
- 124.05s–124.05s (×1), actor 1, squad 0 (trace 6550): MoveTactically. Knowledge: actor memory at 120.00s, trace 6413. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6719}.
<a id="trace-6551"></a>
- 124.05s–124.05s (×1), actor 1, squad 0 (trace 6551): traveling. Knowledge: actor memory at 120.00s, trace 6413. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6719}.
<a id="trace-6552"></a>
- 124.05s–124.05s (×1), actor 1, squad 0 (trace 6552): received platoon directive. Knowledge: actor memory at 120.00s, trace 6413. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6719}.
<a id="trace-6719"></a>
<a id="trace-6729"></a>
- 124.25s–124.75s (×2), actor 5, squad 0 (trace 6719): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 123.20s, trace 6525. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6729}.
<a id="trace-6755"></a>
- 125.05s–125.05s (×1), actor 1, squad 0 (trace 6755): received platoon directive. Knowledge: actor memory at 125.00s, trace 6743. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18297225835902897, 'next_transition': 6976}.
<a id="trace-6976"></a>
<a id="trace-6980"></a>
<a id="trace-7009"></a>
<a id="trace-7020"></a>
<a id="trace-7034"></a>
<a id="trace-7045"></a>
<a id="trace-7061"></a>
<a id="trace-7076"></a>
<a id="trace-7090"></a>
<a id="trace-7099"></a>
<a id="trace-7180"></a>
<a id="trace-7187"></a>
<a id="trace-7208"></a>
<a id="trace-7221"></a>
<a id="trace-7240"></a>
<a id="trace-7253"></a>
<a id="trace-7268"></a>
<a id="trace-7275"></a>
<a id="trace-7289"></a>
<a id="trace-7299"></a>
<a id="trace-7370"></a>
<a id="trace-7378"></a>
<a id="trace-7394"></a>
<a id="trace-7410"></a>
<a id="trace-7421"></a>
- 125.25s–137.30s (×25), actor 5, squad 0 (trace 6976): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 6745. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7081989035832417, 'next_transition': 6980}.
<a id="trace-7430"></a>
- 137.65s–137.65s (×1), actor 1, squad 0 (trace 7430): matching received arrivals: traveling stage complete. Knowledge: actor memory at 135.00s, trace 7302. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25201370819421137, 'next_transition': 7591}.
<a id="trace-7591"></a>
<a id="trace-7610"></a>
<a id="trace-7629"></a>
<a id="trace-7642"></a>
<a id="trace-7649"></a>
<a id="trace-7733"></a>
<a id="trace-7747"></a>
<a id="trace-7759"></a>
<a id="trace-7767"></a>
<a id="trace-7784"></a>
<a id="trace-7791"></a>
<a id="trace-7808"></a>
<a id="trace-7819"></a>
<a id="trace-7842"></a>
<a id="trace-7857"></a>
<a id="trace-7937"></a>
<a id="trace-7942"></a>
<a id="trace-7959"></a>
<a id="trace-7982"></a>
<a id="trace-7990"></a>
<a id="trace-8010"></a>
<a id="trace-8023"></a>
<a id="trace-8035"></a>
<a id="trace-8045"></a>
<a id="trace-8123"></a>
<a id="trace-8130"></a>
- 137.80s–150.80s (×26), actor 5, squad 0 (trace 7591): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 7304. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040070838100743, 'next_transition': 7610}.
<a id="trace-8134"></a>
- 150.85s–150.85s (×1), actor 1, squad 0 (trace 8134): matching received arrivals: deployment leg complete. Knowledge: actor memory at 150.00s, trace 8049. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040000396825401, 'next_transition': 8143}.
<a id="trace-8143"></a>
<a id="trace-8148"></a>
<a id="trace-8167"></a>
<a id="trace-8184"></a>
<a id="trace-8201"></a>
<a id="trace-8207"></a>
<a id="trace-8219"></a>
- 151.30s–154.30s (×7), actor 5, squad 0 (trace 8143): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 8051. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6930000288600289, 'next_transition': 8148}.
<a id="trace-1238"></a>
- 154.40s–154.40s (×1), actor 5, squad 0 (events line 1238): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8222"></a>
- 154.40s–154.40s (×1), actor 5, squad 0 (trace 8222): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 154.40s, trace 8222. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8231}.
<a id="trace-8223"></a>
- 154.40s–154.40s (×1), actor 5, squad 0 (trace 8223): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 154.40s, trace 8223. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8231}.
<a id="trace-8231"></a>
<a id="trace-8302"></a>
<a id="trace-8308"></a>
<a id="trace-8317"></a>
- 154.80s–156.30s (×4), actor 5, squad 0 (trace 8231): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 154.40s, trace 8223. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8302}.
<a id="trace-8320"></a>
- 156.45s–156.45s (×1), actor 1, squad 0 (trace 8320): Reorganise: completed/failed drill. Knowledge: actor memory at 155.00s, trace 8235. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8487}.
<a id="trace-8324"></a>
- 156.45s–156.45s (×1), actor 1, squad 0 (trace 8324): MoveTactically. Knowledge: actor memory at 155.00s, trace 8235. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8487}.
<a id="trace-8325"></a>
- 156.45s–156.45s (×1), actor 1, squad 0 (trace 8325): Reorganise complete. Knowledge: actor memory at 155.00s, trace 8235. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8487}.
<a id="trace-8487"></a>
<a id="trace-8503"></a>
<a id="trace-8514"></a>
<a id="trace-8527"></a>
<a id="trace-8538"></a>
<a id="trace-8552"></a>
<a id="trace-8566"></a>
<a id="trace-8644"></a>
<a id="trace-8658"></a>
<a id="trace-8669"></a>
<a id="trace-8677"></a>
<a id="trace-8695"></a>
<a id="trace-8704"></a>
<a id="trace-8718"></a>
<a id="trace-8726"></a>
<a id="trace-8744"></a>
<a id="trace-8763"></a>
<a id="trace-8838"></a>
<a id="trace-8849"></a>
<a id="trace-8864"></a>
<a id="trace-8874"></a>
<a id="trace-8890"></a>
<a id="trace-8898"></a>
<a id="trace-8914"></a>
<a id="trace-8930"></a>
<a id="trace-8939"></a>
- 156.80s–169.30s (×26), actor 5, squad 0 (trace 8487): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 8237. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.031500006349206904, 'next_transition': 8503}.
<a id="trace-8944"></a>
- 169.45s–169.45s (×1), actor 1, squad 0 (trace 8944): traveling overwatch. Knowledge: actor memory at 165.00s, trace 8766. Next observer evidence: {'until': 169.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039999999999992, 'next_transition': 9002}.
<a id="trace-8945"></a>
- 169.45s–169.45s (×1), actor 1, squad 0 (trace 8945): matching received arrivals: traveling stage complete. Knowledge: actor memory at 165.00s, trace 8766. Next observer evidence: {'until': 169.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039999999999992, 'next_transition': 9002}.
<a id="trace-9002"></a>
<a id="trace-9084"></a>
<a id="trace-9099"></a>
<a id="trace-9109"></a>
<a id="trace-9121"></a>
<a id="trace-9138"></a>
<a id="trace-9152"></a>
<a id="trace-9163"></a>
<a id="trace-9174"></a>
<a id="trace-9196"></a>
<a id="trace-9207"></a>
<a id="trace-9284"></a>
<a id="trace-9292"></a>
<a id="trace-9306"></a>
<a id="trace-9322"></a>
<a id="trace-9333"></a>
<a id="trace-9343"></a>
<a id="trace-9358"></a>
<a id="trace-9363"></a>
<a id="trace-9370"></a>
- 169.80s–179.30s (×20), actor 5, squad 0 (trace 9002): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 8768. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040000015873022, 'next_transition': 9084}.
<a id="trace-9374"></a>
- 179.40s–179.40s (×1), actor 1, squad 0 (trace 9374): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 175.00s, trace 9213. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20399981087246144, 'next_transition': 9486}.
<a id="trace-9486"></a>
<a id="trace-9566"></a>
<a id="trace-9589"></a>
<a id="trace-9601"></a>
- 179.80s–181.30s (×4), actor 5, squad 0 (trace 9486): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 9215. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1946794497834838, 'next_transition': 9566}.
<a id="trace-9606"></a>
- 181.55s–181.55s (×1), actor 1, squad 0 (trace 9606): ReactToContact: cover and return fire. Knowledge: actor memory at 180.00s, trace 9489. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7608014985166172, 'next_transition': 9782}.
<a id="trace-9607"></a>
- 181.55s–181.55s (×1), actor 1, squad 0 (trace 9607): bounding overwatch. Knowledge: actor memory at 180.00s, trace 9489. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7608014985166172, 'next_transition': 9782}.
<a id="trace-9608"></a>
- 181.55s–181.55s (×1), actor 1, squad 0 (trace 9608): new contact inside 100 m. Knowledge: actor memory at 180.00s, trace 9489. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7608014985166172, 'next_transition': 9782}.
<a id="trace-9782"></a>
<a id="trace-9810"></a>
<a id="trace-9822"></a>
<a id="trace-9836"></a>
<a id="trace-9847"></a>
<a id="trace-9863"></a>
<a id="trace-9880"></a>
- 181.80s–184.80s (×7), actor 5, squad 0 (trace 9782): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 9491. Next observer evidence: {'until': 182.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.24236503856968844, 'next_transition': 9810}.
<a id="trace-9896"></a>
- 185.10s–185.10s (×1), actor 5, squad 0 (trace 9896): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 185.10s, trace 9896. Next observer evidence: {'until': 185.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4583930025362285, 'next_transition': 9954}.
<a id="trace-9954"></a>
- 185.30s–185.30s (×1), actor 5, squad 0 (trace 9954): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.10s, trace 9896. Next observer evidence: {'until': 185.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6345099334113607, 'next_transition': 1490}.
<a id="trace-1490"></a>
- 185.60s–185.60s (×1), actor 5, squad 0 (events line 1490): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9961"></a>
- 185.60s–185.60s (×1), actor 5, squad 0 (trace 9961): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.434697 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 185.60s, trace 9961. Next observer evidence: None.
<a id="trace-9962"></a>
- 185.60s–185.60s (×1), actor 5, squad 0 (trace 9962): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.434697 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 185.60s, trace 9962. Next observer evidence: None.
<a id="trace-9966"></a>
- 185.65s–185.65s (×1), actor 1, squad 0 (trace 9966): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 185.00s, trace 9884. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22923212546923555, 'next_transition': 10210}.
<a id="trace-9967"></a>
- 185.65s–185.65s (×1), actor 1, squad 0 (trace 9967): rearward bound: one stationary suppressing element. Knowledge: actor memory at 185.00s, trace 9884. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22923212546923555, 'next_transition': 10210}.
<a id="trace-10210"></a>
<a id="trace-10229"></a>
<a id="trace-10244"></a>
<a id="trace-10262"></a>
<a id="trace-10274"></a>
<a id="trace-10290"></a>
<a id="trace-10312"></a>
<a id="trace-10322"></a>
<a id="trace-10350"></a>
<a id="trace-10446"></a>
<a id="trace-10468"></a>
<a id="trace-10496"></a>
<a id="trace-10513"></a>
<a id="trace-10540"></a>
<a id="trace-10574"></a>
<a id="trace-10604"></a>
<a id="trace-10639"></a>
<a id="trace-10684"></a>
<a id="trace-10728"></a>
<a id="trace-10833"></a>
<a id="trace-10868"></a>
<a id="trace-10912"></a>
<a id="trace-10939"></a>
<a id="trace-10975"></a>
- 185.80s–197.30s (×24), actor 5, squad 0 (trace 10210): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.60s, trace 9962. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05442000235207604, 'next_transition': 10229}.
<a id="trace-10999"></a>
- 197.65s–197.65s (×1), actor 1, squad 0 (trace 10999): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 195.00s, trace 10743. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25198669480621444, 'next_transition': 11108}.
<a id="trace-11000"></a>
- 197.65s–197.65s (×1), actor 1, squad 0 (trace 11000): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 195.00s, trace 10743. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25198669480621444, 'next_transition': 11108}.
<a id="trace-11108"></a>
<a id="trace-11125"></a>
<a id="trace-11146"></a>
<a id="trace-11161"></a>
<a id="trace-11173"></a>
<a id="trace-11250"></a>
<a id="trace-11265"></a>
<a id="trace-11279"></a>
<a id="trace-11285"></a>
<a id="trace-11297"></a>
<a id="trace-11303"></a>
<a id="trace-11309"></a>
<a id="trace-11314"></a>
<a id="trace-11326"></a>
<a id="trace-11342"></a>
<a id="trace-11412"></a>
<a id="trace-11417"></a>
<a id="trace-11437"></a>
<a id="trace-11442"></a>
<a id="trace-11454"></a>
<a id="trace-11458"></a>
<a id="trace-11469"></a>
<a id="trace-11481"></a>
<a id="trace-11490"></a>
<a id="trace-11501"></a>
<a id="trace-11580"></a>
<a id="trace-11586"></a>
<a id="trace-11596"></a>
- 197.80s–211.30s (×28), actor 5, squad 0 (trace 11108): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 10745. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19174606947039727, 'next_transition': 11125}.
<a id="trace-11602"></a>
- 211.45s–211.45s (×1), actor 1, squad 0 (trace 11602): NeedSupport. Knowledge: actor memory at 210.00s, trace 11504. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12581082691088236, 'next_transition': 11608}.
<a id="trace-11608"></a>
<a id="trace-11619"></a>
<a id="trace-11630"></a>
<a id="trace-11641"></a>
<a id="trace-11649"></a>
- 211.80s–213.80s (×5), actor 5, squad 0 (trace 11608): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 11506. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12977827628690405, 'next_transition': 11619}.
<a id="trace-11653"></a>
- 213.85s–213.85s (×1), actor 1, squad 0 (trace 11653): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 210.00s, trace 11504. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1468799552267034, 'next_transition': 11853}.
<a id="trace-11791"></a>
- 213.85s–213.85s (×1), actor 1, squad 0 (trace 11791): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 210.00s, trace 11504. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1468799552267034, 'next_transition': 11853}.
<a id="trace-11853"></a>
<a id="trace-11870"></a>
<a id="trace-11951"></a>
<a id="trace-11955"></a>
<a id="trace-11967"></a>
<a id="trace-11977"></a>
<a id="trace-11983"></a>
<a id="trace-11987"></a>
<a id="trace-11996"></a>
<a id="trace-12006"></a>
<a id="trace-12015"></a>
<a id="trace-12024"></a>
<a id="trace-12099"></a>
<a id="trace-12110"></a>
<a id="trace-12119"></a>
<a id="trace-12125"></a>
<a id="trace-12142"></a>
<a id="trace-12147"></a>
<a id="trace-12156"></a>
<a id="trace-12164"></a>
<a id="trace-12176"></a>
<a id="trace-12192"></a>
<a id="trace-12264"></a>
<a id="trace-12275"></a>
<a id="trace-12286"></a>
<a id="trace-12293"></a>
<a id="trace-12304"></a>
<a id="trace-12314"></a>
<a id="trace-12328"></a>
<a id="trace-12341"></a>
<a id="trace-12353"></a>
- 214.30s–229.30s (×31), actor 5, squad 0 (trace 11853): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 11506. Next observer evidence: {'until': 214.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22308247394335218, 'next_transition': 11870}.
<a id="trace-12355"></a>
- 229.45s–229.45s (×1), actor 1, squad 0 (trace 12355): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 225.00s, trace 12195. Next observer evidence: {'until': 229.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04181999999999988, 'next_transition': 12362}.
<a id="trace-12362"></a>
<a id="trace-12435"></a>
<a id="trace-12446"></a>
<a id="trace-12457"></a>
<a id="trace-12463"></a>
<a id="trace-12472"></a>
<a id="trace-12484"></a>
<a id="trace-12494"></a>
<a id="trace-12505"></a>
<a id="trace-12519"></a>
<a id="trace-12529"></a>
<a id="trace-12601"></a>
<a id="trace-12612"></a>
<a id="trace-12618"></a>
<a id="trace-12625"></a>
<a id="trace-12631"></a>
<a id="trace-12638"></a>
<a id="trace-12644"></a>
<a id="trace-12652"></a>
<a id="trace-12658"></a>
<a id="trace-12732"></a>
<a id="trace-12738"></a>
<a id="trace-12749"></a>
<a id="trace-12758"></a>
<a id="trace-12767"></a>
<a id="trace-12775"></a>
<a id="trace-12789"></a>
<a id="trace-12795"></a>
<a id="trace-12810"></a>
<a id="trace-12824"></a>
<a id="trace-12899"></a>
- 229.80s–245.30s (×31), actor 5, squad 0 (trace 12362): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 12197. Next observer evidence: {'until': 230.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17032000000000025, 'next_transition': 12435}.
<a id="trace-1952"></a>
- 245.70s–245.70s (×1), actor 5, squad 0 (events line 1952): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 245.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08862000000000023, 'next_transition': 12909}.
<a id="trace-12906"></a>
- 245.70s–245.70s (×1), actor 5, squad 0 (trace 12906): renew committed intent (75 s lifetime). Knowledge: actor memory at 245.70s, trace 12906. Next observer evidence: {'until': 245.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08862000000000023, 'next_transition': 12909}.
<a id="trace-12909"></a>
<a id="trace-12920"></a>
<a id="trace-12930"></a>
<a id="trace-12940"></a>
<a id="trace-12950"></a>
<a id="trace-12958"></a>
<a id="trace-12963"></a>
<a id="trace-12974"></a>
<a id="trace-12980"></a>
<a id="trace-13050"></a>
<a id="trace-13054"></a>
<a id="trace-13060"></a>
<a id="trace-13065"></a>
<a id="trace-13071"></a>
<a id="trace-13076"></a>
- 245.80s–252.80s (×15), actor 5, squad 0 (trace 12909): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.70s, trace 12906. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13586000000000026, 'next_transition': 12920}.
<a id="trace-13081"></a>
- 253.00s–253.00s (×1), actor 1, squad 0 (trace 13081): NeedSupport. Knowledge: actor memory at 250.00s, trace 12983. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00031999999999996474, 'next_transition': 13090}.
<a id="trace-13090"></a>
<a id="trace-13096"></a>
<a id="trace-13107"></a>
<a id="trace-13117"></a>
<a id="trace-13189"></a>
<a id="trace-13195"></a>
<a id="trace-13201"></a>
<a id="trace-13206"></a>
<a id="trace-13214"></a>
- 253.30s–257.30s (×9), actor 5, squad 0 (trace 13090): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 12985. Next observer evidence: {'until': 253.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0009199999999999875, 'next_transition': 13096}.
<a id="trace-13217"></a>
- 257.30s–257.30s (×1), actor 1, squad 0 (trace 13217): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 255.00s, trace 13121. Next observer evidence: {'until': 257.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 13222}.
<a id="trace-13222"></a>
<a id="trace-13229"></a>
- 257.80s–258.30s (×2), actor 5, squad 0 (trace 13222): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 13123. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13229}.
<a id="trace-13232"></a>
- 258.30s–258.30s (×1), actor 1, squad 0 (trace 13232): Reorganise: completed/failed drill. Knowledge: actor memory at 255.00s, trace 13121. Next observer evidence: {'until': 258.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13366}.
<a id="trace-13235"></a>
- 258.30s–258.30s (×1), actor 1, squad 0 (trace 13235): ReactToContact: cover and return fire. Knowledge: actor memory at 255.00s, trace 13121. Next observer evidence: {'until': 258.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13366}.
<a id="trace-13236"></a>
- 258.30s–258.30s (×1), actor 1, squad 0 (trace 13236): Reorganise complete: known contact. Knowledge: actor memory at 255.00s, trace 13121. Next observer evidence: {'until': 258.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13366}.
<a id="trace-13366"></a>
<a id="trace-13382"></a>
<a id="trace-13391"></a>
<a id="trace-13463"></a>
<a id="trace-13473"></a>
<a id="trace-13486"></a>
- 258.80s–261.30s (×6), actor 5, squad 0 (trace 13366): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 13123. Next observer evidence: {'until': 259.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13382}.
<a id="trace-1999"></a>
- 261.45s–261.45s (×1), actor 5, squad 0 (events line 1999): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13489"></a>
- 261.45s–261.45s (×1), actor 5, squad 0 (trace 13489): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.231270 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 261.45s, trace 13489. Next observer evidence: {'until': 261.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875415067029643, 'next_transition': 13496}.
<a id="trace-13490"></a>
- 261.45s–261.45s (×1), actor 5, squad 0 (trace 13490): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.231270 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 261.45s, trace 13490. Next observer evidence: {'until': 261.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875415067029643, 'next_transition': 13496}.
<a id="trace-13496"></a>
- 261.80s–261.80s (×1), actor 5, squad 0 (trace 13496): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 261.45s, trace 13490. Next observer evidence: {'until': 262, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40681146868198126, 'next_transition': 13500}.
<a id="trace-13500"></a>
- 262.05s–262.05s (×1), actor 1, squad 0 (trace 13500): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 260.00s, trace 13394. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4068202939385506, 'next_transition': 13696}.
<a id="trace-13501"></a>
- 262.05s–262.05s (×1), actor 1, squad 0 (trace 13501): rearward bound: one stationary suppressing element. Knowledge: actor memory at 260.00s, trace 13394. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4068202939385506, 'next_transition': 13696}.
<a id="trace-13696"></a>
<a id="trace-13704"></a>
- 262.30s–262.80s (×2), actor 5, squad 0 (trace 13696): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 261.45s, trace 13490. Next observer evidence: {'until': 262.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2597818146829125, 'next_transition': 13704}.
<a id="trace-13712"></a>
- 263.05s–263.05s (×1), actor 1, squad 0 (trace 13712): received Withdraw: retain retirement bound and receipts; extend rally. Knowledge: actor memory at 260.00s, trace 13394. Next observer evidence: {'until': 263.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5643137157284197, 'next_transition': 13716}.
<a id="trace-13716"></a>
<a id="trace-13731"></a>
<a id="trace-13753"></a>
<a id="trace-13763"></a>
<a id="trace-13840"></a>
<a id="trace-13847"></a>
<a id="trace-13861"></a>
<a id="trace-13868"></a>
<a id="trace-13877"></a>
<a id="trace-13882"></a>
<a id="trace-13895"></a>
<a id="trace-13902"></a>
<a id="trace-13916"></a>
<a id="trace-13920"></a>
<a id="trace-13993"></a>
<a id="trace-13996"></a>
<a id="trace-14005"></a>
<a id="trace-14009"></a>
<a id="trace-14023"></a>
<a id="trace-14032"></a>
- 263.30s–272.80s (×20), actor 5, squad 0 (trace 13716): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 261.45s, trace 13490. Next observer evidence: {'until': 263.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0584636142285269, 'next_transition': 13731}.
<a id="trace-14041"></a>
- 273.25s–273.25s (×1), actor 1, squad 0 (trace 14041): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 270.00s, trace 13923. Next observer evidence: None.
<a id="trace-14042"></a>
- 273.25s–273.25s (×1), actor 1, squad 0 (trace 14042): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 270.00s, trace 13923. Next observer evidence: None.
<a id="trace-14048"></a>
<a id="trace-14051"></a>
<a id="trace-14071"></a>
<a id="trace-14076"></a>
<a id="trace-14143"></a>
<a id="trace-14149"></a>
<a id="trace-14155"></a>
<a id="trace-14163"></a>
<a id="trace-14171"></a>
<a id="trace-14177"></a>
<a id="trace-14189"></a>
<a id="trace-14194"></a>
<a id="trace-14205"></a>
<a id="trace-14210"></a>
<a id="trace-14279"></a>
<a id="trace-14284"></a>
<a id="trace-14291"></a>
<a id="trace-14299"></a>
<a id="trace-14306"></a>
<a id="trace-14314"></a>
<a id="trace-14325"></a>
<a id="trace-14329"></a>
<a id="trace-14339"></a>
<a id="trace-14345"></a>
<a id="trace-14416"></a>
<a id="trace-14420"></a>
<a id="trace-14437"></a>
<a id="trace-14444"></a>
<a id="trace-14452"></a>
<a id="trace-14459"></a>
<a id="trace-14468"></a>
<a id="trace-14479"></a>
<a id="trace-14488"></a>
<a id="trace-14494"></a>
<a id="trace-14565"></a>
<a id="trace-14570"></a>
<a id="trace-14580"></a>
<a id="trace-14587"></a>
<a id="trace-14597"></a>
<a id="trace-14603"></a>
<a id="trace-14619"></a>
<a id="trace-14628"></a>
<a id="trace-14637"></a>
<a id="trace-14645"></a>
<a id="trace-14714"></a>
<a id="trace-14719"></a>
<a id="trace-14727"></a>
<a id="trace-14732"></a>
<a id="trace-14742"></a>
<a id="trace-14747"></a>
<a id="trace-14759"></a>
<a id="trace-14766"></a>
<a id="trace-14778"></a>
<a id="trace-14793"></a>
<a id="trace-14863"></a>
<a id="trace-14870"></a>
<a id="trace-14878"></a>
<a id="trace-14883"></a>
<a id="trace-14893"></a>
<a id="trace-14898"></a>
<a id="trace-14908"></a>
<a id="trace-14914"></a>
<a id="trace-14924"></a>
<a id="trace-14931"></a>
<a id="trace-15000"></a>
<a id="trace-15007"></a>
<a id="trace-15020"></a>
<a id="trace-15030"></a>
<a id="trace-15039"></a>
<a id="trace-15044"></a>
<a id="trace-15053"></a>
<a id="trace-15060"></a>
<a id="trace-15070"></a>
<a id="trace-15076"></a>
<a id="trace-15145"></a>
<a id="trace-15149"></a>
<a id="trace-15156"></a>
<a id="trace-15164"></a>
<a id="trace-15174"></a>
<a id="trace-15186"></a>
<a id="trace-15195"></a>
<a id="trace-15203"></a>
<a id="trace-15216"></a>
<a id="trace-15221"></a>
<a id="trace-15291"></a>
<a id="trace-15296"></a>
<a id="trace-15304"></a>
<a id="trace-15309"></a>
<a id="trace-15317"></a>
<a id="trace-15325"></a>
<a id="trace-15334"></a>
<a id="trace-15344"></a>
<a id="trace-15359"></a>
<a id="trace-15365"></a>
<a id="trace-15434"></a>
<a id="trace-15440"></a>
<a id="trace-15451"></a>
- 273.30s–321.30s (×97), actor 5, squad 0 (trace 14048): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 13924. Next observer evidence: {'until': 273.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599827308899048, 'next_transition': 14051}.
<a id="trace-2266"></a>
- 321.45s–321.45s (×1), actor 5, squad 0 (events line 2266): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15454"></a>
- 321.45s–321.45s (×1), actor 5, squad 0 (trace 15454): renew committed intent (75 s lifetime). Knowledge: actor memory at 321.45s, trace 15454. Next observer evidence: {'until': 321.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15459}.
<a id="trace-15459"></a>
<a id="trace-15468"></a>
<a id="trace-15472"></a>
<a id="trace-15480"></a>
<a id="trace-15489"></a>
<a id="trace-15499"></a>
<a id="trace-15507"></a>
<a id="trace-15576"></a>
<a id="trace-15582"></a>
<a id="trace-15594"></a>
<a id="trace-15599"></a>
<a id="trace-15610"></a>
<a id="trace-15615"></a>
<a id="trace-15626"></a>
<a id="trace-15634"></a>
<a id="trace-15643"></a>
<a id="trace-15651"></a>
<a id="trace-15719"></a>
<a id="trace-15725"></a>
<a id="trace-15734"></a>
<a id="trace-15739"></a>
<a id="trace-15751"></a>
<a id="trace-15761"></a>
<a id="trace-15771"></a>
<a id="trace-15779"></a>
<a id="trace-15788"></a>
<a id="trace-15794"></a>
<a id="trace-15863"></a>
<a id="trace-15871"></a>
<a id="trace-15878"></a>
<a id="trace-15885"></a>
<a id="trace-15894"></a>
<a id="trace-15901"></a>
<a id="trace-15910"></a>
<a id="trace-15918"></a>
<a id="trace-15934"></a>
<a id="trace-15941"></a>
<a id="trace-16009"></a>
<a id="trace-16014"></a>
<a id="trace-16022"></a>
<a id="trace-16029"></a>
<a id="trace-16037"></a>
<a id="trace-16046"></a>
<a id="trace-16055"></a>
<a id="trace-16062"></a>
<a id="trace-16073"></a>
<a id="trace-16080"></a>
<a id="trace-16151"></a>
<a id="trace-16161"></a>
<a id="trace-16170"></a>
<a id="trace-16175"></a>
<a id="trace-16184"></a>
<a id="trace-16190"></a>
<a id="trace-16199"></a>
<a id="trace-16207"></a>
<a id="trace-16217"></a>
<a id="trace-16222"></a>
<a id="trace-16293"></a>
<a id="trace-16300"></a>
<a id="trace-16310"></a>
<a id="trace-16316"></a>
<a id="trace-16331"></a>
<a id="trace-16337"></a>
<a id="trace-16345"></a>
<a id="trace-16354"></a>
<a id="trace-16363"></a>
<a id="trace-16371"></a>
<a id="trace-16439"></a>
<a id="trace-16445"></a>
<a id="trace-16453"></a>
<a id="trace-16459"></a>
<a id="trace-16472"></a>
<a id="trace-16479"></a>
<a id="trace-16489"></a>
<a id="trace-16497"></a>
<a id="trace-16511"></a>
<a id="trace-16519"></a>
- 321.80s–359.80s (×77), actor 5, squad 0 (trace 15459): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 321.45s, trace 15454. Next observer evidence: {'until': 322.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15468}.

## Net delivery

211 matched order/radio deliveries; 244 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.250s; maximum 1.500s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1153: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1160: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1161: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1162: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1163: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1809: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1810: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1813: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1815: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1816: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1817: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1818: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1819: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1820: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 1921: estimate 6.88; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 1922: estimate 6.88; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 1923: estimate 6.88; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2333: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2334: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2336: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2337: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2339: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2340: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2341: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2342: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2343: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2344: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2541: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2543: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2544: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2546: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2547: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2548: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2549: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2550: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2551: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2737: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2739: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2740: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2742: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2743: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2744: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2745: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2746: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2747: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2965: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 2966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2967: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2968: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 2969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2970: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2971: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 2972: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2973: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2974: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 2975: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3149: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3151: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3152: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3154: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3155: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3156: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3157: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3158: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3159: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3427: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3429: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3430: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3432: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3433: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3434: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3435: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3436: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3437: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3629: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3631: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3632: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3634: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3635: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 3636: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3637: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3638: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3639: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3834: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 3835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3836: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3837: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 3838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3839: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3840: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 3841: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3842: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3843: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 3844: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4025: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4027: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4028: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 4029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4030: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4031: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4032: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4033: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4034: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4035: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.05s leader 5, trace 4108: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.05s leader 5, trace 4109: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4248: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4250: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4251: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4253: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4254: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4255: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4256: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4257: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4258: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4432: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4434: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4435: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4437: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4438: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4439: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4440: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4441: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4442: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4604: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4606: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4607: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 4608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4609: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4610: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 4611: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4612: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4613: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4614: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 4915: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 4916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4917: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 4918: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 4919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 4920: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4921: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 4922: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4923: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4924: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 4925: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5101: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5103: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5104: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 5105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5106: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5107: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5108: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5109: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5110: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5111: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5346: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5348: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5349: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 5350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5351: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5352: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 5353: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5354: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5355: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5356: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5531: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5533: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5534: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 5535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5536: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5537: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 5538: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5539: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5540: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5541: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5830: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 5831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5832: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5833: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 5834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5835: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5836: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 5837: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5838: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5839: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 5840: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6025: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 6026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6027: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6028: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 6029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6030: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6031: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 6032: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6033: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6034: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 6035: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6220: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6222: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6223: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 6224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6225: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6226: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 6227: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6228: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6229: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6230: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6413: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 6414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6415: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6416: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 6417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6418: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6419: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 6420: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6421: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6422: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6423: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.00s leader 5, trace 6503: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.00s leader 5, trace 6504: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.20s leader 5, trace 6524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.20s leader 5, trace 6525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 6744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 6747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6748: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6749: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 6750: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6751: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6752: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6753: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 7103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 7104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 7105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 7106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 7107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 7108: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 7109: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 7110: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 7111: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 7112: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 7113: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 7303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 7305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 7306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 7307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 7309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 7312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 7658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 7660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 7661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 7664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 7667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 7864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 7866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 7867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 7870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 7873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 8049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 8050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 8051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 8052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 8053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 8054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 8055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 8056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 8057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 8058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 8059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 154.40s leader 5, trace 8222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 154.40s leader 5, trace 8223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 8235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 8236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 8237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 8238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 8239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 8240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 8241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 8242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 8243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 8244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 8245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 8568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 8569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 8570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 8571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 8572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 8573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 8574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 8575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 8576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 8577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 8578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 8767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 8768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 8769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 8770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 8771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 8772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 8773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 8776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 9007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 9008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 9009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 9010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 9011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 9012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 9013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 9014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 9015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 9016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 9017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 9213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 9214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 9215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 9216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 9217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 9218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 9219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 9220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 9221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 9222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 9223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 9490: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 9492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 9493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 9494: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 9495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 9496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9497: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9498: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 9499: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9884: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 9885: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 9887: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 9888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 9889: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 9890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 9891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9892: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9893: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 9894: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.10s leader 5, trace 9896: estimate 5.41; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.60s leader 5, trace 9961: estimate 5.40; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.60s leader 5, trace 9962: estimate 5.40; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 10360: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 10361: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 10362: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 10363: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 10364: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 10365: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 10366: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 10367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 10368: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 10369: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 10370: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 10743: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 10744: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 10745: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 10746: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 10747: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 10748: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 10749: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 10750: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 10751: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 10752: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 10753: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 11180: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 11181: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 11182: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 11183: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 11184: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 11185: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 11186: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 11187: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 11188: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 11189: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 11190: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 11345: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 11346: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 11347: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 11348: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 11349: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 11350: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 11351: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 11352: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 11353: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 11354: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 11355: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 11504: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 11505: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 11506: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 11507: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 11508: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 11509: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 11510: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 11511: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 11512: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 11513: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 11514: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 11874: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 11875: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 11876: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 11877: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 11878: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 11879: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 11880: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 11881: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 11882: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 11883: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 11884: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 12026: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 12027: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 12028: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 12029: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 12030: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 12031: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 12032: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 12033: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 12034: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 12035: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 12036: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 12195: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 12196: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 12197: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 12198: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 12199: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 12200: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 12201: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 12202: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 12203: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 12204: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 12205: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 12365: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 12366: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 12367: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 12368: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 12369: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 12370: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 12371: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 12372: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 12373: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 12374: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 12375: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 12534: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 12535: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 12536: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 12537: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 12538: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 12539: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 12540: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 12541: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 12542: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 12543: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 12544: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 12662: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 12663: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 12664: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 12665: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 12666: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 12667: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 12668: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 12669: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 12670: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 12671: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 12672: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 12829: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 12830: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 12831: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 12832: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 12833: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 12834: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 12835: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 12836: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 12837: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 12838: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 12839: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.70s leader 5, trace 12906: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 12983: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 12984: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 12985: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 12986: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 12987: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 12988: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 12989: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 12990: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 12991: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 12992: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 12993: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 13121: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 13122: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 13123: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 13124: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 13125: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 13126: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 13127: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 13128: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 13129: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 13130: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 13131: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 13394: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 13395: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 13396: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 13397: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 13398: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 13399: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 13400: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 13401: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 13402: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 13403: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.45s leader 5, trace 13489: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.45s leader 5, trace 13490: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 13773: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 13774: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 13775: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 13776: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 13777: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 13778: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 13779: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 13780: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 13781: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 13923: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 13924: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 13925: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 13926: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 13927: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 13928: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 13929: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 13930: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 13931: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 14078: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 14079: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 14080: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 14081: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 14082: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 14083: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 14084: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 14085: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 14086: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 14212: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 14213: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 14214: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 14215: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 14216: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 14217: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 14218: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 14219: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 14220: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 14349: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 14350: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 14351: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 14352: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 14353: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 14354: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 14355: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 14356: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 14357: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 14498: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 14499: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 14500: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 14501: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 14502: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 14503: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 14504: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 14505: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 14506: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 14648: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 14649: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 14650: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 14651: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 14652: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 14653: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 14654: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 14655: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 14656: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 14797: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 14798: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 14799: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 14800: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 14801: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 14802: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 14803: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 14804: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 14805: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 14936: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 14937: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 14938: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 14939: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 14940: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 14941: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 14942: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 14943: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 14944: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 15079: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 15080: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 15081: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 15082: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 15083: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 15084: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 15085: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 15086: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 15087: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 15225: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 15226: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 15227: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 15228: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 15229: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 15230: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 15231: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 15232: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 15233: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 15370: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 15371: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 15372: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 15373: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 15374: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 15375: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 15376: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 15377: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 15378: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 321.45s leader 5, trace 15454: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 15510: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 15511: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 15512: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 15513: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 15514: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 15515: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 15516: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 15517: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 15518: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 15654: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 15655: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 15656: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 15657: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 15658: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 15659: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 15660: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 15661: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 15662: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 15799: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 15800: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 15801: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 15802: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 15803: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 15804: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 15805: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 15806: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 15807: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 15943: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 15944: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 15945: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 15946: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 15947: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 15948: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 15949: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 15950: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 15951: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 16084: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 16085: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 16086: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 16087: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 16088: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 16089: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 16090: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 16091: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 16092: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 16229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 16230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 16231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 16232: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 16233: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 16234: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 16235: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 16236: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 16237: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 16374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 16375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 16376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 16377: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 16378: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 16379: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 16380: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 16381: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 16382: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 16521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 16522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 16523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 16524: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 16525: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 16526: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 16527: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 16528: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 16529: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Tern incapacitated
- 1: Reed killed in action

## Outcome attribution

- 66.05s, evidence 570: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 66.05s, evidence 4108: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358409 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4123}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 66.05s, evidence 4109: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358409 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4123}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 261.45s, evidence 1999: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 261.45s, evidence 13489: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.231270 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 261.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875415067029643, 'next_transition': 13496}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 261.45s, evidence 13490: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.231270 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 261.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875415067029643, 'next_transition': 13496}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 321.45s, evidence 2266: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
