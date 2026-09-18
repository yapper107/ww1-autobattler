# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/2/107/good-azure/battle-107-1789673660339760688`

## Battle summary

**Ember** · 360 s · 18 shots.

### Turning points

- 19.9s, squad 4: contact (events line 200). First recorded contact.

### Squads

- **0** — FightHere; chose advanced tactically, took cover and returned fire; no completed objective recorded; 0 shots, 1/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 18 shots, 0/4 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 266](#trace-266)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 27.3s, squad 0 chose FightHere: nearest known group ([trace 1758](#trace-1758)), followed by 0 shots and 0 own casualties; estimate 1.5 against 1 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 265](#trace-265)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300041229962763, 'next_transition': 279}.
- 27.3s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.349380 retreat threshold=0.500000 initiative=delegated ([trace 1757](#trace-1757)). Following evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1761}.

### Communication

42 matched deliveries (mean 0.11s, max 0.75s); 249 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 19.85s, squad 4, contact, evidence events line 200: First recorded contact; .

## Appendix: command timeline

<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018794169231863, 'next_transition': 211}.
<a id="trace-12"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 12): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018794169231863, 'next_transition': 211}.
<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018794169231863, 'next_transition': 211}.
<a id="trace-211"></a>
<a id="trace-232"></a>
<a id="trace-240"></a>
<a id="trace-253"></a>
<a id="trace-258"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.260018416181004, 'next_transition': 232}.
<a id="trace-44"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 44): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300041229962763, 'next_transition': 279}.
<a id="trace-265"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 265): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 265. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300041229962763, 'next_transition': 279}.
<a id="trace-266"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 266): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300041229962763, 'next_transition': 279}.
<a id="trace-279"></a>
<a id="trace-290"></a>
<a id="trace-364"></a>
<a id="trace-371"></a>
<a id="trace-391"></a>
<a id="trace-398"></a>
<a id="trace-413"></a>
<a id="trace-425"></a>
<a id="trace-444"></a>
<a id="trace-467"></a>
<a id="trace-480"></a>
<a id="trace-487"></a>
<a id="trace-570"></a>
- 4.20s–10.20s (×13), actor 5, squad 0 (trace 279): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630004122996275, 'next_transition': 290}.
<a id="trace-400"></a>
<a id="trace-446"></a>
<a id="trace-469"></a>
<a id="trace-489"></a>
<a id="trace-572"></a>
<a id="trace-661"></a>
<a id="trace-683"></a>
<a id="trace-714"></a>
<a id="trace-785"></a>
<a id="trace-796"></a>
<a id="trace-888"></a>
<a id="trace-932"></a>
<a id="trace-941"></a>
<a id="trace-959"></a>
<a id="trace-973"></a>
<a id="trace-991"></a>
<a id="trace-1076"></a>
<a id="trace-1091"></a>
<a id="trace-1112"></a>
<a id="trace-1128"></a>
<a id="trace-1137"></a>
<a id="trace-1149"></a>
<a id="trace-1157"></a>
<a id="trace-1279"></a>
<a id="trace-1290"></a>
<a id="trace-1367"></a>
<a id="trace-1601"></a>
<a id="trace-1756"></a>
<a id="trace-1763"></a>
<a id="trace-1778"></a>
<a id="trace-1794"></a>
<a id="trace-1800"></a>
<a id="trace-1804"></a>
<a id="trace-1881"></a>
<a id="trace-1885"></a>
<a id="trace-1892"></a>
<a id="trace-1896"></a>
<a id="trace-1905"></a>
<a id="trace-1909"></a>
<a id="trace-1916"></a>
<a id="trace-1923"></a>
<a id="trace-1931"></a>
<a id="trace-2009"></a>
<a id="trace-2021"></a>
<a id="trace-2027"></a>
<a id="trace-2036"></a>
<a id="trace-2052"></a>
<a id="trace-2059"></a>
<a id="trace-2070"></a>
<a id="trace-2152"></a>
<a id="trace-2169"></a>
<a id="trace-2178"></a>
<a id="trace-2189"></a>
<a id="trace-2198"></a>
<a id="trace-2208"></a>
<a id="trace-2214"></a>
<a id="trace-2225"></a>
<a id="trace-2307"></a>
<a id="trace-2314"></a>
<a id="trace-2327"></a>
<a id="trace-2333"></a>
<a id="trace-2345"></a>
<a id="trace-2354"></a>
<a id="trace-2377"></a>
<a id="trace-2388"></a>
<a id="trace-2467"></a>
<a id="trace-2474"></a>
<a id="trace-2487"></a>
<a id="trace-2494"></a>
<a id="trace-2507"></a>
<a id="trace-2513"></a>
<a id="trace-2523"></a>
<a id="trace-2533"></a>
<a id="trace-2552"></a>
<a id="trace-2627"></a>
<a id="trace-2634"></a>
<a id="trace-2656"></a>
<a id="trace-2669"></a>
<a id="trace-2676"></a>
<a id="trace-2692"></a>
<a id="trace-2702"></a>
<a id="trace-2711"></a>
<a id="trace-2792"></a>
<a id="trace-2805"></a>
<a id="trace-2812"></a>
<a id="trace-2833"></a>
<a id="trace-2847"></a>
<a id="trace-2855"></a>
<a id="trace-2866"></a>
<a id="trace-2944"></a>
<a id="trace-2953"></a>
<a id="trace-2964"></a>
<a id="trace-2973"></a>
<a id="trace-2986"></a>
<a id="trace-2992"></a>
<a id="trace-3013"></a>
<a id="trace-3024"></a>
<a id="trace-3034"></a>
<a id="trace-3109"></a>
<a id="trace-3115"></a>
<a id="trace-3127"></a>
<a id="trace-3136"></a>
<a id="trace-3147"></a>
<a id="trace-3156"></a>
<a id="trace-3172"></a>
<a id="trace-3183"></a>
<a id="trace-3191"></a>
<a id="trace-3268"></a>
<a id="trace-3275"></a>
<a id="trace-3297"></a>
<a id="trace-3309"></a>
<a id="trace-3326"></a>
<a id="trace-3335"></a>
<a id="trace-3350"></a>
<a id="trace-3453"></a>
<a id="trace-3466"></a>
<a id="trace-3472"></a>
<a id="trace-3483"></a>
<a id="trace-3494"></a>
<a id="trace-3512"></a>
<a id="trace-3585"></a>
<a id="trace-3591"></a>
<a id="trace-3604"></a>
<a id="trace-3612"></a>
<a id="trace-3625"></a>
<a id="trace-3652"></a>
<a id="trace-3666"></a>
<a id="trace-3749"></a>
<a id="trace-3775"></a>
<a id="trace-3781"></a>
<a id="trace-3792"></a>
<a id="trace-3802"></a>
<a id="trace-3813"></a>
<a id="trace-3821"></a>
<a id="trace-3833"></a>
<a id="trace-3840"></a>
<a id="trace-3922"></a>
<a id="trace-3934"></a>
<a id="trace-3943"></a>
<a id="trace-3959"></a>
<a id="trace-3967"></a>
<a id="trace-3978"></a>
<a id="trace-3991"></a>
<a id="trace-4001"></a>
<a id="trace-4012"></a>
<a id="trace-4100"></a>
<a id="trace-4145"></a>
<a id="trace-4154"></a>
<a id="trace-4161"></a>
<a id="trace-4173"></a>
<a id="trace-4260"></a>
<a id="trace-4272"></a>
<a id="trace-4279"></a>
<a id="trace-4289"></a>
<a id="trace-4299"></a>
<a id="trace-4309"></a>
<a id="trace-4318"></a>
<a id="trace-4327"></a>
<a id="trace-4335"></a>
<a id="trace-4435"></a>
<a id="trace-4446"></a>
<a id="trace-4452"></a>
<a id="trace-4462"></a>
<a id="trace-4471"></a>
<a id="trace-4480"></a>
<a id="trace-4563"></a>
<a id="trace-4587"></a>
<a id="trace-4598"></a>
<a id="trace-4605"></a>
<a id="trace-4617"></a>
<a id="trace-4625"></a>
<a id="trace-4634"></a>
<a id="trace-4645"></a>
<a id="trace-4716"></a>
<a id="trace-4726"></a>
<a id="trace-4744"></a>
<a id="trace-4755"></a>
<a id="trace-4762"></a>
<a id="trace-4772"></a>
<a id="trace-4780"></a>
<a id="trace-4790"></a>
<a id="trace-4798"></a>
<a id="trace-4873"></a>
<a id="trace-4882"></a>
<a id="trace-4895"></a>
<a id="trace-4905"></a>
<a id="trace-4916"></a>
<a id="trace-4992"></a>
<a id="trace-5009"></a>
<a id="trace-5019"></a>
<a id="trace-5094"></a>
<a id="trace-5103"></a>
<a id="trace-5114"></a>
<a id="trace-5126"></a>
<a id="trace-5141"></a>
<a id="trace-5157"></a>
<a id="trace-5171"></a>
<a id="trace-5178"></a>
<a id="trace-5193"></a>
<a id="trace-5278"></a>
<a id="trace-5321"></a>
<a id="trace-5334"></a>
<a id="trace-5370"></a>
<a id="trace-5378"></a>
<a id="trace-5458"></a>
<a id="trace-5476"></a>
<a id="trace-5487"></a>
<a id="trace-5495"></a>
<a id="trace-5505"></a>
<a id="trace-5521"></a>
<a id="trace-5531"></a>
<a id="trace-5603"></a>
<a id="trace-5610"></a>
<a id="trace-5624"></a>
<a id="trace-5631"></a>
<a id="trace-5643"></a>
<a id="trace-5664"></a>
<a id="trace-5670"></a>
<a id="trace-5679"></a>
<a id="trace-5688"></a>
<a id="trace-5759"></a>
<a id="trace-5777"></a>
<a id="trace-5783"></a>
<a id="trace-5794"></a>
<a id="trace-5808"></a>
<a id="trace-5826"></a>
<a id="trace-5843"></a>
<a id="trace-5915"></a>
<a id="trace-5924"></a>
<a id="trace-5932"></a>
<a id="trace-5941"></a>
<a id="trace-5951"></a>
<a id="trace-5960"></a>
<a id="trace-5971"></a>
<a id="trace-5979"></a>
<a id="trace-5992"></a>
<a id="trace-6073"></a>
<a id="trace-6079"></a>
<a id="trace-6090"></a>
<a id="trace-6099"></a>
<a id="trace-6108"></a>
<a id="trace-6119"></a>
<a id="trace-6129"></a>
<a id="trace-6135"></a>
<a id="trace-6145"></a>
<a id="trace-6153"></a>
<a id="trace-6226"></a>
<a id="trace-6246"></a>
<a id="trace-6252"></a>
<a id="trace-6276"></a>
<a id="trace-6285"></a>
<a id="trace-6294"></a>
<a id="trace-6303"></a>
<a id="trace-6309"></a>
<a id="trace-6382"></a>
<a id="trace-6389"></a>
<a id="trace-6399"></a>
<a id="trace-6406"></a>
<a id="trace-6418"></a>
<a id="trace-6427"></a>
<a id="trace-6438"></a>
<a id="trace-6451"></a>
<a id="trace-6461"></a>
<a id="trace-6470"></a>
<a id="trace-6547"></a>
<a id="trace-6557"></a>
<a id="trace-6564"></a>
<a id="trace-6575"></a>
<a id="trace-6584"></a>
<a id="trace-6601"></a>
<a id="trace-6619"></a>
<a id="trace-6695"></a>
<a id="trace-6706"></a>
<a id="trace-6715"></a>
<a id="trace-6731"></a>
<a id="trace-6740"></a>
<a id="trace-6751"></a>
<a id="trace-6758"></a>
<a id="trace-6768"></a>
<a id="trace-6774"></a>
<a id="trace-6847"></a>
<a id="trace-6859"></a>
<a id="trace-6867"></a>
<a id="trace-6880"></a>
<a id="trace-6893"></a>
<a id="trace-6901"></a>
<a id="trace-6912"></a>
<a id="trace-6928"></a>
<a id="trace-6935"></a>
<a id="trace-7008"></a>
<a id="trace-7014"></a>
<a id="trace-7023"></a>
<a id="trace-7032"></a>
<a id="trace-7043"></a>
<a id="trace-7054"></a>
<a id="trace-7065"></a>
<a id="trace-7072"></a>
<a id="trace-7086"></a>
<a id="trace-7094"></a>
<a id="trace-7167"></a>
<a id="trace-7174"></a>
<a id="trace-7184"></a>
<a id="trace-7199"></a>
<a id="trace-7210"></a>
<a id="trace-7236"></a>
<a id="trace-7243"></a>
<a id="trace-7317"></a>
<a id="trace-7326"></a>
<a id="trace-7339"></a>
<a id="trace-7347"></a>
<a id="trace-7358"></a>
<a id="trace-7366"></a>
<a id="trace-7376"></a>
<a id="trace-7385"></a>
<a id="trace-7393"></a>
<a id="trace-7473"></a>
<a id="trace-7480"></a>
<a id="trace-7490"></a>
<a id="trace-7499"></a>
<a id="trace-7534"></a>
<a id="trace-7540"></a>
<a id="trace-7549"></a>
<a id="trace-7558"></a>
<a id="trace-7629"></a>
<a id="trace-7638"></a>
<a id="trace-7647"></a>
<a id="trace-7653"></a>
<a id="trace-7665"></a>
<a id="trace-7686"></a>
<a id="trace-7695"></a>
<a id="trace-7708"></a>
<a id="trace-7715"></a>
<a id="trace-7787"></a>
<a id="trace-7803"></a>
<a id="trace-7812"></a>
<a id="trace-7822"></a>
<a id="trace-7840"></a>
<a id="trace-7848"></a>
<a id="trace-7858"></a>
<a id="trace-7867"></a>
<a id="trace-7942"></a>
<a id="trace-7957"></a>
<a id="trace-7977"></a>
<a id="trace-7988"></a>
<a id="trace-8003"></a>
<a id="trace-8019"></a>
<a id="trace-8093"></a>
<a id="trace-8100"></a>
<a id="trace-8128"></a>
<a id="trace-8139"></a>
<a id="trace-8148"></a>
<a id="trace-8159"></a>
<a id="trace-8169"></a>
<a id="trace-8175"></a>
<a id="trace-8254"></a>
<a id="trace-8264"></a>
<a id="trace-8271"></a>
<a id="trace-8283"></a>
<a id="trace-8291"></a>
<a id="trace-8302"></a>
<a id="trace-8321"></a>
<a id="trace-8330"></a>
<a id="trace-8405"></a>
<a id="trace-8412"></a>
<a id="trace-8422"></a>
<a id="trace-8429"></a>
<a id="trace-8440"></a>
<a id="trace-8449"></a>
<a id="trace-8460"></a>
<a id="trace-8467"></a>
<a id="trace-8476"></a>
<a id="trace-8558"></a>
<a id="trace-8568"></a>
<a id="trace-8577"></a>
<a id="trace-8584"></a>
<a id="trace-8616"></a>
<a id="trace-8623"></a>
<a id="trace-8633"></a>
<a id="trace-8639"></a>
<a id="trace-8712"></a>
<a id="trace-8723"></a>
<a id="trace-8732"></a>
<a id="trace-8743"></a>
<a id="trace-8754"></a>
<a id="trace-8762"></a>
<a id="trace-8773"></a>
<a id="trace-8781"></a>
<a id="trace-8800"></a>
<a id="trace-8873"></a>
<a id="trace-8879"></a>
<a id="trace-8897"></a>
<a id="trace-8906"></a>
<a id="trace-8918"></a>
<a id="trace-8935"></a>
<a id="trace-8945"></a>
<a id="trace-9025"></a>
<a id="trace-9032"></a>
<a id="trace-9045"></a>
<a id="trace-9052"></a>
<a id="trace-9062"></a>
<a id="trace-9090"></a>
<a id="trace-9105"></a>
<a id="trace-9180"></a>
<a id="trace-9187"></a>
<a id="trace-9204"></a>
<a id="trace-9223"></a>
<a id="trace-9236"></a>
<a id="trace-9245"></a>
<a id="trace-9261"></a>
<a id="trace-9334"></a>
<a id="trace-9358"></a>
<a id="trace-9369"></a>
<a id="trace-9394"></a>
<a id="trace-9404"></a>
<a id="trace-9415"></a>
<a id="trace-9487"></a>
<a id="trace-9496"></a>
<a id="trace-9511"></a>
<a id="trace-9522"></a>
<a id="trace-9544"></a>
<a id="trace-9560"></a>
<a id="trace-9638"></a>
<a id="trace-9647"></a>
<a id="trace-9666"></a>
<a id="trace-9676"></a>
<a id="trace-9685"></a>
<a id="trace-9703"></a>
<a id="trace-9722"></a>
<a id="trace-9800"></a>
<a id="trace-9809"></a>
<a id="trace-9818"></a>
<a id="trace-9827"></a>
<a id="trace-9848"></a>
<a id="trace-9867"></a>
<a id="trace-9875"></a>
<a id="trace-9948"></a>
<a id="trace-9967"></a>
<a id="trace-9982"></a>
<a id="trace-9993"></a>
<a id="trace-10002"></a>
<a id="trace-10011"></a>
<a id="trace-10021"></a>
<a id="trace-10027"></a>
<a id="trace-10100"></a>
<a id="trace-10111"></a>
<a id="trace-10122"></a>
<a id="trace-10129"></a>
<a id="trace-10141"></a>
<a id="trace-10149"></a>
<a id="trace-10161"></a>
<a id="trace-10170"></a>
<a id="trace-10177"></a>
<a id="trace-10186"></a>
<a id="trace-10258"></a>
<a id="trace-10274"></a>
<a id="trace-10282"></a>
<a id="trace-10295"></a>
<a id="trace-10305"></a>
<a id="trace-10317"></a>
<a id="trace-10323"></a>
<a id="trace-10333"></a>
<a id="trace-10414"></a>
<a id="trace-10446"></a>
<a id="trace-10456"></a>
<a id="trace-10467"></a>
<a id="trace-10486"></a>
<a id="trace-10493"></a>
<a id="trace-10566"></a>
<a id="trace-10585"></a>
<a id="trace-10596"></a>
<a id="trace-10606"></a>
<a id="trace-10614"></a>
<a id="trace-10640"></a>
<a id="trace-10647"></a>
<a id="trace-10726"></a>
<a id="trace-10737"></a>
<a id="trace-10749"></a>
<a id="trace-10771"></a>
<a id="trace-10781"></a>
<a id="trace-10787"></a>
<a id="trace-10797"></a>
<a id="trace-10804"></a>
<a id="trace-10877"></a>
<a id="trace-10884"></a>
<a id="trace-10894"></a>
<a id="trace-10901"></a>
<a id="trace-10911"></a>
<a id="trace-10935"></a>
<a id="trace-10960"></a>
<a id="trace-11033"></a>
<a id="trace-11040"></a>
<a id="trace-11050"></a>
<a id="trace-11057"></a>
<a id="trace-11075"></a>
<a id="trace-11086"></a>
<a id="trace-11095"></a>
<a id="trace-11115"></a>
<a id="trace-11194"></a>
<a id="trace-11222"></a>
<a id="trace-11231"></a>
<a id="trace-11242"></a>
<a id="trace-11248"></a>
<a id="trace-11265"></a>
<a id="trace-11337"></a>
<a id="trace-11346"></a>
<a id="trace-11362"></a>
<a id="trace-11376"></a>
<a id="trace-11388"></a>
<a id="trace-11399"></a>
<a id="trace-11406"></a>
<a id="trace-11416"></a>
<a id="trace-11493"></a>
<a id="trace-11509"></a>
<a id="trace-11518"></a>
<a id="trace-11547"></a>
<a id="trace-11555"></a>
<a id="trace-11570"></a>
<a id="trace-11650"></a>
<a id="trace-11656"></a>
<a id="trace-11665"></a>
<a id="trace-11674"></a>
<a id="trace-11683"></a>
<a id="trace-11703"></a>
<a id="trace-11709"></a>
<a id="trace-11720"></a>
<a id="trace-11728"></a>
<a id="trace-11802"></a>
<a id="trace-11824"></a>
<a id="trace-11830"></a>
<a id="trace-11850"></a>
<a id="trace-11859"></a>
<a id="trace-11876"></a>
<a id="trace-11882"></a>
<a id="trace-11955"></a>
<a id="trace-11964"></a>
<a id="trace-11974"></a>
<a id="trace-11982"></a>
<a id="trace-11998"></a>
<a id="trace-12007"></a>
<a id="trace-12017"></a>
<a id="trace-12033"></a>
<a id="trace-12113"></a>
<a id="trace-12119"></a>
<a id="trace-12129"></a>
<a id="trace-12167"></a>
<a id="trace-12173"></a>
<a id="trace-12185"></a>
<a id="trace-12196"></a>
- 6.70s–359.80s (×548), actor 37, squad 4 (trace 400): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 300. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26232157136691503, 'next_transition': 446}.
<a id="trace-575"></a>
- 10.35s–10.35s (×1), actor 0, squad 0 (trace 575): traveling overwatch. Knowledge: actor memory at 10.00s, trace 492. Next observer evidence: {'until': 10.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47247176819333797, 'next_transition': 602}.
<a id="trace-576"></a>
- 10.35s–10.35s (×1), actor 0, squad 0 (trace 576): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 492. Next observer evidence: {'until': 10.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47247176819333797, 'next_transition': 602}.
<a id="trace-602"></a>
- 10.40s–10.40s (×1), actor 0, squad 0 (trace 602): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 492. Next observer evidence: {'until': 10.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724964103906173, 'next_transition': 659}.
<a id="trace-659"></a>
<a id="trace-681"></a>
<a id="trace-691"></a>
<a id="trace-712"></a>
<a id="trace-738"></a>
<a id="trace-750"></a>
<a id="trace-764"></a>
<a id="trace-783"></a>
<a id="trace-794"></a>
<a id="trace-877"></a>
<a id="trace-886"></a>
<a id="trace-906"></a>
<a id="trace-919"></a>
<a id="trace-930"></a>
<a id="trace-939"></a>
<a id="trace-957"></a>
<a id="trace-971"></a>
<a id="trace-982"></a>
<a id="trace-989"></a>
<a id="trace-1074"></a>
<a id="trace-1089"></a>
<a id="trace-1101"></a>
<a id="trace-1110"></a>
<a id="trace-1126"></a>
<a id="trace-1135"></a>
<a id="trace-1147"></a>
<a id="trace-1155"></a>
- 10.70s–23.75s (×27), actor 5, squad 0 (trace 659): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 494. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3385150886577124, 'next_transition': 681}.
<a id="trace-1163"></a>
- 24.20s–24.20s (×1), actor 0, squad 0 (trace 1163): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 996. Next observer evidence: None.
<a id="trace-1164"></a>
- 24.20s–24.20s (×1), actor 0, squad 0 (trace 1164): bounding overwatch. Knowledge: actor memory at 20.00s, trace 996. Next observer evidence: None.
<a id="trace-1165"></a>
- 24.20s–24.20s (×1), actor 0, squad 0 (trace 1165): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 996. Next observer evidence: None.
<a id="trace-1277"></a>
<a id="trace-1288"></a>
<a id="trace-1365"></a>
- 24.25s–25.25s (×3), actor 5, squad 0 (trace 1277): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 998. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.022580605062752227, 'next_transition': 1288}.
<a id="trace-1368"></a>
<a id="trace-1485"></a>
- 25.25s–25.65s (×2), actor 0, squad 0 (trace 1368): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 1292. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18601109173917557, 'next_transition': 1485}.
<a id="trace-1599"></a>
<a id="trace-1612"></a>
- 25.75s–26.25s (×2), actor 5, squad 0 (trace 1599): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1294. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25893100070289016, 'next_transition': 1612}.
<a id="trace-1619"></a>
- 26.70s–26.70s (×1), actor 0, squad 0 (trace 1619): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 1292. Next observer evidence: None.
<a id="trace-1731"></a>
<a id="trace-1754"></a>
- 26.75s–27.25s (×2), actor 5, squad 0 (trace 1731): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1294. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.09757016465728671, 'next_transition': 1754}.
<a id="trace-264"></a>
- 27.30s–27.30s (×1), actor 5, squad 0 (events line 264): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1757"></a>
- 27.30s–27.30s (×1), actor 5, squad 0 (trace 1757): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.349380 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 27.30s, trace 1757. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1761}.
<a id="trace-1758"></a>
- 27.30s–27.30s (×1), actor 5, squad 0 (trace 1758): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.349380 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 27.30s, trace 1758. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1761}.
<a id="trace-1761"></a>
<a id="trace-1776"></a>
<a id="trace-1792"></a>
<a id="trace-1798"></a>
<a id="trace-1802"></a>
- 27.75s–29.75s (×5), actor 5, squad 0 (trace 1761): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 27.30s, trace 1758. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1776}.
<a id="trace-1873"></a>
- 30.20s–30.20s (×1), actor 1, squad 0 (trace 1873): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 1805. Next observer evidence: None.
<a id="trace-1879"></a>
<a id="trace-1883"></a>
<a id="trace-1890"></a>
<a id="trace-1894"></a>
<a id="trace-1903"></a>
<a id="trace-1907"></a>
<a id="trace-1914"></a>
<a id="trace-1921"></a>
<a id="trace-1929"></a>
<a id="trace-1933"></a>
<a id="trace-2004"></a>
<a id="trace-2007"></a>
- 30.25s–35.75s (×12), actor 5, squad 0 (trace 1879): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1806. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399563269070075, 'next_transition': 1883}.
<a id="trace-2010"></a>
- 35.95s–35.95s (×1), actor 1, squad 0 (trace 2010): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 35.00s, trace 1935. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150001763667916, 'next_transition': 2019}.
<a id="trace-2019"></a>
<a id="trace-2025"></a>
<a id="trace-2034"></a>
<a id="trace-2040"></a>
<a id="trace-2050"></a>
<a id="trace-2057"></a>
<a id="trace-2068"></a>
<a id="trace-2075"></a>
<a id="trace-2150"></a>
<a id="trace-2156"></a>
<a id="trace-2167"></a>
<a id="trace-2176"></a>
<a id="trace-2187"></a>
<a id="trace-2196"></a>
<a id="trace-2206"></a>
<a id="trace-2212"></a>
<a id="trace-2223"></a>
<a id="trace-2230"></a>
<a id="trace-2305"></a>
<a id="trace-2312"></a>
<a id="trace-2325"></a>
<a id="trace-2331"></a>
<a id="trace-2343"></a>
<a id="trace-2352"></a>
<a id="trace-2361"></a>
<a id="trace-2375"></a>
<a id="trace-2386"></a>
<a id="trace-2392"></a>
<a id="trace-2465"></a>
<a id="trace-2472"></a>
<a id="trace-2485"></a>
<a id="trace-2492"></a>
<a id="trace-2505"></a>
<a id="trace-2511"></a>
<a id="trace-2521"></a>
<a id="trace-2531"></a>
<a id="trace-2541"></a>
<a id="trace-2550"></a>
<a id="trace-2625"></a>
<a id="trace-2632"></a>
<a id="trace-2647"></a>
<a id="trace-2654"></a>
<a id="trace-2667"></a>
<a id="trace-2674"></a>
<a id="trace-2685"></a>
<a id="trace-2690"></a>
<a id="trace-2700"></a>
<a id="trace-2709"></a>
<a id="trace-2781"></a>
<a id="trace-2790"></a>
<a id="trace-2803"></a>
<a id="trace-2810"></a>
<a id="trace-2825"></a>
<a id="trace-2831"></a>
<a id="trace-2845"></a>
<a id="trace-2853"></a>
<a id="trace-2864"></a>
<a id="trace-2870"></a>
<a id="trace-2942"></a>
<a id="trace-2951"></a>
<a id="trace-2962"></a>
<a id="trace-2971"></a>
<a id="trace-2984"></a>
<a id="trace-2990"></a>
<a id="trace-3002"></a>
<a id="trace-3011"></a>
<a id="trace-3022"></a>
<a id="trace-3032"></a>
<a id="trace-3107"></a>
<a id="trace-3113"></a>
<a id="trace-3125"></a>
<a id="trace-3134"></a>
<a id="trace-3145"></a>
<a id="trace-3154"></a>
<a id="trace-3164"></a>
<a id="trace-3170"></a>
<a id="trace-3181"></a>
<a id="trace-3189"></a>
<a id="trace-3266"></a>
<a id="trace-3273"></a>
<a id="trace-3288"></a>
<a id="trace-3295"></a>
<a id="trace-3307"></a>
<a id="trace-3316"></a>
<a id="trace-3324"></a>
<a id="trace-3333"></a>
<a id="trace-3343"></a>
<a id="trace-3348"></a>
<a id="trace-3423"></a>
<a id="trace-3429"></a>
<a id="trace-3442"></a>
<a id="trace-3451"></a>
<a id="trace-3464"></a>
<a id="trace-3470"></a>
<a id="trace-3481"></a>
<a id="trace-3492"></a>
<a id="trace-3502"></a>
<a id="trace-3510"></a>
<a id="trace-3583"></a>
<a id="trace-3589"></a>
<a id="trace-3602"></a>
<a id="trace-3610"></a>
<a id="trace-3623"></a>
- 36.25s–87.25s (×103), actor 5, squad 0 (trace 2019): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 1936. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2025}.
<a id="trace-3627"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 3627): renew committed intent (75 s lifetime). Knowledge: actor memory at 87.35s, trace 3627. Next observer evidence: None.
<a id="trace-646"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (events line 646): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3633}.
<a id="trace-3633"></a>
<a id="trace-3644"></a>
<a id="trace-3650"></a>
- 87.75s–88.75s (×3), actor 5, squad 0 (trace 3633): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.35s, trace 3627. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3644}.
<a id="trace-3655"></a>
- 88.95s–88.95s (×1), actor 1, squad 0 (trace 3655): new contact inside 100 m. Knowledge: actor memory at 85.00s, trace 3514. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3664}.
<a id="trace-3664"></a>
<a id="trace-3677"></a>
<a id="trace-3747"></a>
<a id="trace-3759"></a>
<a id="trace-3773"></a>
<a id="trace-3779"></a>
<a id="trace-3790"></a>
- 89.25s–92.25s (×7), actor 5, squad 0 (trace 3664): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.35s, trace 3627. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3677}.
<a id="trace-3795"></a>
- 92.55s–92.55s (×1), actor 1, squad 0 (trace 3795): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 90.00s, trace 3679. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3800}.
<a id="trace-3797"></a>
- 92.55s–92.55s (×1), actor 1, squad 0 (trace 3797): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 90.00s, trace 3679. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3800}.
<a id="trace-3800"></a>
<a id="trace-3811"></a>
<a id="trace-3819"></a>
<a id="trace-3831"></a>
<a id="trace-3838"></a>
<a id="trace-3920"></a>
<a id="trace-3932"></a>
<a id="trace-3941"></a>
- 92.75s–96.75s (×8), actor 5, squad 0 (trace 3800): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 3680. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3811}.
<a id="trace-811"></a>
- 96.95s–96.95s (×1), actor 5, squad 0 (events line 811): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3946"></a>
- 96.95s–96.95s (×1), actor 5, squad 0 (trace 3946): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.835945 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 96.95s, trace 3946. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3957}.
<a id="trace-3947"></a>
- 96.95s–96.95s (×1), actor 5, squad 0 (trace 3947): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.835945 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 96.95s, trace 3947. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3957}.
<a id="trace-3957"></a>
<a id="trace-3965"></a>
<a id="trace-3976"></a>
- 97.25s–98.25s (×3), actor 5, squad 0 (trace 3957): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 96.95s, trace 3947. Next observer evidence: {'until': 97.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3965}.
<a id="trace-3981"></a>
- 98.55s–98.55s (×1), actor 1, squad 0 (trace 3981): MoveTactically. Knowledge: actor memory at 95.00s, trace 3845. Next observer evidence: None.
<a id="trace-3982"></a>
- 98.55s–98.55s (×1), actor 1, squad 0 (trace 3982): received platoon directive. Knowledge: actor memory at 95.00s, trace 3845. Next observer evidence: None.
<a id="trace-3986"></a>
- 98.60s–98.60s (×1), actor 1, squad 0 (trace 3986): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 3845. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3989}.
<a id="trace-3989"></a>
<a id="trace-3999"></a>
<a id="trace-4010"></a>
<a id="trace-4088"></a>
<a id="trace-4098"></a>
<a id="trace-4112"></a>
<a id="trace-4122"></a>
<a id="trace-4134"></a>
<a id="trace-4143"></a>
<a id="trace-4152"></a>
<a id="trace-4159"></a>
<a id="trace-4171"></a>
<a id="trace-4180"></a>
<a id="trace-4252"></a>
<a id="trace-4258"></a>
<a id="trace-4270"></a>
<a id="trace-4277"></a>
<a id="trace-4287"></a>
<a id="trace-4297"></a>
<a id="trace-4307"></a>
<a id="trace-4316"></a>
<a id="trace-4325"></a>
<a id="trace-4333"></a>
<a id="trace-4406"></a>
<a id="trace-4413"></a>
<a id="trace-4426"></a>
<a id="trace-4433"></a>
<a id="trace-4444"></a>
<a id="trace-4450"></a>
<a id="trace-4460"></a>
<a id="trace-4469"></a>
<a id="trace-4478"></a>
<a id="trace-4490"></a>
<a id="trace-4561"></a>
<a id="trace-4567"></a>
<a id="trace-4578"></a>
<a id="trace-4585"></a>
<a id="trace-4596"></a>
<a id="trace-4603"></a>
<a id="trace-4615"></a>
<a id="trace-4623"></a>
<a id="trace-4632"></a>
<a id="trace-4643"></a>
<a id="trace-4714"></a>
<a id="trace-4724"></a>
<a id="trace-4736"></a>
<a id="trace-4742"></a>
<a id="trace-4753"></a>
<a id="trace-4760"></a>
<a id="trace-4770"></a>
<a id="trace-4778"></a>
<a id="trace-4788"></a>
<a id="trace-4796"></a>
<a id="trace-4871"></a>
- 98.75s–125.25s (×54), actor 5, squad 0 (trace 3989): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 96.95s, trace 3947. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3999}.
<a id="trace-1072"></a>
- 125.75s–125.75s (×1), actor 5, squad 0 (events line 1072): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4893}.
<a id="trace-4880"></a>
- 125.75s–125.75s (×1), actor 5, squad 0 (trace 4880): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 4805. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4893}.
<a id="trace-4883"></a>
- 125.75s–125.75s (×1), actor 5, squad 0 (trace 4883): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 125.75s, trace 4883. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4893}.
<a id="trace-4884"></a>
- 125.75s–125.75s (×1), actor 5, squad 0 (trace 4884): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 125.75s, trace 4884. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4893}.
<a id="trace-4893"></a>
<a id="trace-4903"></a>
<a id="trace-4914"></a>
- 126.25s–127.25s (×3), actor 5, squad 0 (trace 4893): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.75s, trace 4884. Next observer evidence: {'until': 126.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4903}.
<a id="trace-4917"></a>
- 127.35s–127.35s (×1), actor 1, squad 0 (trace 4917): traveling. Knowledge: actor memory at 125.00s, trace 4804. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4975}.
<a id="trace-4918"></a>
- 127.35s–127.35s (×1), actor 1, squad 0 (trace 4918): received platoon directive. Knowledge: actor memory at 125.00s, trace 4804. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4975}.
<a id="trace-4975"></a>
<a id="trace-4990"></a>
<a id="trace-4997"></a>
<a id="trace-5007"></a>
<a id="trace-5017"></a>
<a id="trace-5092"></a>
<a id="trace-5101"></a>
<a id="trace-5112"></a>
<a id="trace-5124"></a>
<a id="trace-5139"></a>
<a id="trace-5155"></a>
<a id="trace-5169"></a>
<a id="trace-5176"></a>
<a id="trace-5191"></a>
- 127.75s–134.30s (×14), actor 5, squad 0 (trace 4975): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.75s, trace 4884. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749999999999886, 'next_transition': 4990}.
<a id="trace-5200"></a>
- 134.65s–134.65s (×1), actor 1, squad 0 (trace 5200): traveling overwatch. Knowledge: actor memory at 130.00s, trace 5021. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200001322751132, 'next_transition': 5204}.
<a id="trace-5201"></a>
- 134.65s–134.65s (×1), actor 1, squad 0 (trace 5201): matching received arrivals: traveling stage complete. Knowledge: actor memory at 130.00s, trace 5021. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200001322751132, 'next_transition': 5204}.
<a id="trace-5204"></a>
<a id="trace-5276"></a>
<a id="trace-5283"></a>
<a id="trace-5296"></a>
<a id="trace-5309"></a>
<a id="trace-5319"></a>
<a id="trace-5332"></a>
<a id="trace-5348"></a>
<a id="trace-5358"></a>
<a id="trace-5368"></a>
<a id="trace-5376"></a>
<a id="trace-5449"></a>
<a id="trace-5456"></a>
<a id="trace-5468"></a>
<a id="trace-5474"></a>
<a id="trace-5485"></a>
<a id="trace-5493"></a>
<a id="trace-5503"></a>
<a id="trace-5512"></a>
<a id="trace-5519"></a>
<a id="trace-5529"></a>
<a id="trace-5601"></a>
<a id="trace-5608"></a>
<a id="trace-5622"></a>
<a id="trace-5629"></a>
<a id="trace-5641"></a>
<a id="trace-5652"></a>
<a id="trace-5662"></a>
<a id="trace-5668"></a>
<a id="trace-5677"></a>
<a id="trace-5686"></a>
<a id="trace-5757"></a>
<a id="trace-5766"></a>
<a id="trace-5775"></a>
<a id="trace-5781"></a>
<a id="trace-5792"></a>
<a id="trace-5806"></a>
<a id="trace-5817"></a>
<a id="trace-5824"></a>
<a id="trace-5836"></a>
<a id="trace-5841"></a>
<a id="trace-5913"></a>
<a id="trace-5922"></a>
<a id="trace-5930"></a>
<a id="trace-5939"></a>
<a id="trace-5949"></a>
<a id="trace-5958"></a>
<a id="trace-5969"></a>
<a id="trace-5977"></a>
<a id="trace-5990"></a>
<a id="trace-5998"></a>
<a id="trace-6071"></a>
<a id="trace-6077"></a>
<a id="trace-6088"></a>
<a id="trace-6097"></a>
<a id="trace-6106"></a>
<a id="trace-6117"></a>
<a id="trace-6127"></a>
<a id="trace-6133"></a>
<a id="trace-6143"></a>
<a id="trace-6151"></a>
<a id="trace-6224"></a>
<a id="trace-6232"></a>
<a id="trace-6244"></a>
<a id="trace-6250"></a>
<a id="trace-6262"></a>
<a id="trace-6274"></a>
<a id="trace-6283"></a>
<a id="trace-6292"></a>
<a id="trace-6301"></a>
<a id="trace-6307"></a>
<a id="trace-6380"></a>
<a id="trace-6387"></a>
<a id="trace-6397"></a>
<a id="trace-6404"></a>
<a id="trace-6416"></a>
<a id="trace-6425"></a>
<a id="trace-6436"></a>
<a id="trace-6449"></a>
<a id="trace-6459"></a>
<a id="trace-6468"></a>
<a id="trace-6540"></a>
<a id="trace-6545"></a>
<a id="trace-6555"></a>
<a id="trace-6562"></a>
<a id="trace-6573"></a>
<a id="trace-6582"></a>
<a id="trace-6593"></a>
<a id="trace-6599"></a>
<a id="trace-6609"></a>
<a id="trace-6617"></a>
<a id="trace-6693"></a>
<a id="trace-6704"></a>
<a id="trace-6713"></a>
<a id="trace-6719"></a>
<a id="trace-6729"></a>
<a id="trace-6738"></a>
<a id="trace-6749"></a>
<a id="trace-6756"></a>
<a id="trace-6766"></a>
<a id="trace-6772"></a>
<a id="trace-6845"></a>
- 134.80s–185.30s (×102), actor 5, squad 0 (trace 5204): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 5022. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400003201057578, 'next_transition': 5276}.
<a id="trace-1542"></a>
- 185.75s–185.75s (×1), actor 5, squad 0 (events line 1542): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6856}.
<a id="trace-6854"></a>
- 185.75s–185.75s (×1), actor 5, squad 0 (trace 6854): renew committed intent (75 s lifetime). Knowledge: actor memory at 185.75s, trace 6854. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6856}.
<a id="trace-6856"></a>
<a id="trace-6865"></a>
<a id="trace-6878"></a>
<a id="trace-6891"></a>
<a id="trace-6899"></a>
<a id="trace-6910"></a>
<a id="trace-6917"></a>
<a id="trace-6926"></a>
<a id="trace-6933"></a>
<a id="trace-7006"></a>
<a id="trace-7012"></a>
<a id="trace-7021"></a>
<a id="trace-7030"></a>
<a id="trace-7041"></a>
<a id="trace-7052"></a>
<a id="trace-7063"></a>
<a id="trace-7070"></a>
<a id="trace-7084"></a>
<a id="trace-7092"></a>
<a id="trace-7165"></a>
<a id="trace-7172"></a>
<a id="trace-7182"></a>
<a id="trace-7188"></a>
<a id="trace-7197"></a>
<a id="trace-7208"></a>
<a id="trace-7217"></a>
<a id="trace-7225"></a>
<a id="trace-7234"></a>
<a id="trace-7241"></a>
<a id="trace-7315"></a>
<a id="trace-7324"></a>
<a id="trace-7337"></a>
<a id="trace-7345"></a>
<a id="trace-7356"></a>
<a id="trace-7364"></a>
<a id="trace-7374"></a>
<a id="trace-7383"></a>
<a id="trace-7391"></a>
<a id="trace-7400"></a>
<a id="trace-7471"></a>
<a id="trace-7478"></a>
<a id="trace-7488"></a>
<a id="trace-7497"></a>
<a id="trace-7510"></a>
<a id="trace-7522"></a>
<a id="trace-7532"></a>
<a id="trace-7538"></a>
<a id="trace-7547"></a>
<a id="trace-7556"></a>
<a id="trace-7627"></a>
<a id="trace-7636"></a>
<a id="trace-7645"></a>
<a id="trace-7651"></a>
<a id="trace-7663"></a>
<a id="trace-7673"></a>
<a id="trace-7684"></a>
<a id="trace-7693"></a>
<a id="trace-7706"></a>
<a id="trace-7713"></a>
<a id="trace-7785"></a>
<a id="trace-7794"></a>
<a id="trace-7801"></a>
<a id="trace-7810"></a>
<a id="trace-7820"></a>
<a id="trace-7828"></a>
<a id="trace-7838"></a>
<a id="trace-7846"></a>
<a id="trace-7856"></a>
<a id="trace-7865"></a>
<a id="trace-7940"></a>
<a id="trace-7946"></a>
<a id="trace-7955"></a>
<a id="trace-7966"></a>
<a id="trace-7975"></a>
<a id="trace-7986"></a>
<a id="trace-7996"></a>
<a id="trace-8001"></a>
<a id="trace-8011"></a>
<a id="trace-8017"></a>
<a id="trace-8091"></a>
<a id="trace-8098"></a>
<a id="trace-8109"></a>
<a id="trace-8114"></a>
<a id="trace-8126"></a>
<a id="trace-8137"></a>
<a id="trace-8146"></a>
<a id="trace-8167"></a>
<a id="trace-8173"></a>
<a id="trace-8246"></a>
<a id="trace-8252"></a>
<a id="trace-8262"></a>
<a id="trace-8269"></a>
<a id="trace-8281"></a>
<a id="trace-8289"></a>
<a id="trace-8300"></a>
<a id="trace-8311"></a>
<a id="trace-8319"></a>
<a id="trace-8328"></a>
<a id="trace-8403"></a>
<a id="trace-8410"></a>
<a id="trace-8420"></a>
<a id="trace-8427"></a>
<a id="trace-8438"></a>
<a id="trace-8447"></a>
<a id="trace-8458"></a>
<a id="trace-8465"></a>
<a id="trace-8474"></a>
<a id="trace-8484"></a>
<a id="trace-8556"></a>
<a id="trace-8566"></a>
<a id="trace-8575"></a>
<a id="trace-8582"></a>
<a id="trace-8596"></a>
<a id="trace-8604"></a>
<a id="trace-8614"></a>
<a id="trace-8621"></a>
<a id="trace-8631"></a>
<a id="trace-8637"></a>
<a id="trace-8710"></a>
- 185.80s–245.30s (×119), actor 5, squad 0 (trace 6856): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.75s, trace 6854. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6865}.
<a id="trace-1999"></a>
- 245.75s–245.75s (×1), actor 5, squad 0 (events line 1999): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 245.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8720}.
<a id="trace-8718"></a>
- 245.75s–245.75s (×1), actor 5, squad 0 (trace 8718): renew committed intent (75 s lifetime). Knowledge: actor memory at 245.75s, trace 8718. Next observer evidence: {'until': 245.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8720}.
<a id="trace-8720"></a>
<a id="trace-8730"></a>
<a id="trace-8741"></a>
<a id="trace-8752"></a>
<a id="trace-8760"></a>
<a id="trace-8771"></a>
<a id="trace-8779"></a>
<a id="trace-8791"></a>
<a id="trace-8798"></a>
<a id="trace-8871"></a>
<a id="trace-8877"></a>
<a id="trace-8886"></a>
<a id="trace-8895"></a>
<a id="trace-8904"></a>
<a id="trace-8916"></a>
<a id="trace-8928"></a>
<a id="trace-8933"></a>
<a id="trace-8943"></a>
<a id="trace-8951"></a>
<a id="trace-9023"></a>
<a id="trace-9030"></a>
<a id="trace-9043"></a>
<a id="trace-9050"></a>
<a id="trace-9060"></a>
<a id="trace-9071"></a>
<a id="trace-9080"></a>
<a id="trace-9088"></a>
<a id="trace-9098"></a>
<a id="trace-9103"></a>
<a id="trace-9178"></a>
<a id="trace-9185"></a>
<a id="trace-9195"></a>
<a id="trace-9202"></a>
<a id="trace-9213"></a>
<a id="trace-9221"></a>
<a id="trace-9234"></a>
<a id="trace-9243"></a>
<a id="trace-9251"></a>
<a id="trace-9259"></a>
<a id="trace-9332"></a>
<a id="trace-9338"></a>
<a id="trace-9348"></a>
<a id="trace-9356"></a>
<a id="trace-9367"></a>
<a id="trace-9376"></a>
<a id="trace-9387"></a>
<a id="trace-9392"></a>
<a id="trace-9402"></a>
<a id="trace-9413"></a>
<a id="trace-9485"></a>
<a id="trace-9494"></a>
<a id="trace-9503"></a>
<a id="trace-9509"></a>
<a id="trace-9520"></a>
<a id="trace-9530"></a>
<a id="trace-9542"></a>
<a id="trace-9549"></a>
<a id="trace-9558"></a>
<a id="trace-9564"></a>
<a id="trace-9636"></a>
<a id="trace-9645"></a>
<a id="trace-9654"></a>
<a id="trace-9664"></a>
<a id="trace-9674"></a>
<a id="trace-9683"></a>
<a id="trace-9695"></a>
<a id="trace-9701"></a>
<a id="trace-9712"></a>
<a id="trace-9720"></a>
<a id="trace-9793"></a>
<a id="trace-9798"></a>
<a id="trace-9807"></a>
<a id="trace-9816"></a>
<a id="trace-9825"></a>
<a id="trace-9837"></a>
<a id="trace-9846"></a>
<a id="trace-9853"></a>
<a id="trace-9865"></a>
<a id="trace-9873"></a>
<a id="trace-9946"></a>
<a id="trace-9954"></a>
<a id="trace-9965"></a>
<a id="trace-9971"></a>
<a id="trace-9980"></a>
<a id="trace-9991"></a>
<a id="trace-10000"></a>
<a id="trace-10009"></a>
<a id="trace-10019"></a>
<a id="trace-10025"></a>
<a id="trace-10098"></a>
<a id="trace-10109"></a>
<a id="trace-10120"></a>
<a id="trace-10127"></a>
<a id="trace-10139"></a>
<a id="trace-10147"></a>
<a id="trace-10159"></a>
<a id="trace-10168"></a>
<a id="trace-10184"></a>
<a id="trace-10256"></a>
<a id="trace-10263"></a>
<a id="trace-10272"></a>
<a id="trace-10280"></a>
<a id="trace-10293"></a>
<a id="trace-10303"></a>
<a id="trace-10315"></a>
<a id="trace-10321"></a>
<a id="trace-10331"></a>
<a id="trace-10342"></a>
<a id="trace-10412"></a>
<a id="trace-10421"></a>
<a id="trace-10429"></a>
<a id="trace-10434"></a>
<a id="trace-10444"></a>
<a id="trace-10454"></a>
<a id="trace-10465"></a>
<a id="trace-10473"></a>
<a id="trace-10484"></a>
<a id="trace-10491"></a>
<a id="trace-10564"></a>
<a id="trace-10574"></a>
<a id="trace-10583"></a>
- 245.80s–306.30s (×121), actor 5, squad 0 (trace 8720): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.75s, trace 8718. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8730}.
<a id="trace-2463"></a>
- 306.55s–306.55s (×1), actor 5, squad 0 (events line 2463): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10588"></a>
- 306.55s–306.55s (×1), actor 5, squad 0 (trace 10588): renew committed intent (75 s lifetime). Knowledge: actor memory at 306.55s, trace 10588. Next observer evidence: {'until': 306.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10594}.
<a id="trace-10594"></a>
<a id="trace-10604"></a>
<a id="trace-10612"></a>
<a id="trace-10623"></a>
<a id="trace-10629"></a>
<a id="trace-10638"></a>
<a id="trace-10645"></a>
<a id="trace-10719"></a>
<a id="trace-10724"></a>
<a id="trace-10735"></a>
<a id="trace-10747"></a>
<a id="trace-10757"></a>
<a id="trace-10769"></a>
<a id="trace-10779"></a>
<a id="trace-10785"></a>
<a id="trace-10795"></a>
<a id="trace-10802"></a>
<a id="trace-10875"></a>
<a id="trace-10882"></a>
<a id="trace-10892"></a>
<a id="trace-10899"></a>
<a id="trace-10909"></a>
<a id="trace-10921"></a>
<a id="trace-10933"></a>
<a id="trace-10943"></a>
<a id="trace-10953"></a>
<a id="trace-10958"></a>
<a id="trace-11031"></a>
<a id="trace-11038"></a>
<a id="trace-11048"></a>
<a id="trace-11055"></a>
<a id="trace-11066"></a>
<a id="trace-11073"></a>
<a id="trace-11084"></a>
<a id="trace-11093"></a>
<a id="trace-11102"></a>
<a id="trace-11113"></a>
<a id="trace-11187"></a>
<a id="trace-11192"></a>
<a id="trace-11204"></a>
<a id="trace-11210"></a>
<a id="trace-11220"></a>
<a id="trace-11229"></a>
<a id="trace-11240"></a>
<a id="trace-11246"></a>
<a id="trace-11255"></a>
<a id="trace-11263"></a>
<a id="trace-11335"></a>
<a id="trace-11344"></a>
<a id="trace-11354"></a>
<a id="trace-11360"></a>
<a id="trace-11374"></a>
<a id="trace-11386"></a>
<a id="trace-11397"></a>
<a id="trace-11404"></a>
<a id="trace-11414"></a>
<a id="trace-11420"></a>
<a id="trace-11491"></a>
<a id="trace-11500"></a>
<a id="trace-11507"></a>
<a id="trace-11516"></a>
<a id="trace-11526"></a>
<a id="trace-11535"></a>
<a id="trace-11545"></a>
<a id="trace-11553"></a>
<a id="trace-11568"></a>
<a id="trace-11576"></a>
<a id="trace-11648"></a>
<a id="trace-11654"></a>
<a id="trace-11663"></a>
<a id="trace-11672"></a>
<a id="trace-11681"></a>
<a id="trace-11692"></a>
<a id="trace-11701"></a>
<a id="trace-11707"></a>
<a id="trace-11718"></a>
<a id="trace-11726"></a>
<a id="trace-11800"></a>
<a id="trace-11813"></a>
<a id="trace-11822"></a>
<a id="trace-11828"></a>
<a id="trace-11838"></a>
<a id="trace-11848"></a>
<a id="trace-11857"></a>
<a id="trace-11866"></a>
<a id="trace-11874"></a>
<a id="trace-11880"></a>
<a id="trace-11953"></a>
<a id="trace-11962"></a>
<a id="trace-11972"></a>
<a id="trace-11980"></a>
<a id="trace-11996"></a>
<a id="trace-12005"></a>
<a id="trace-12015"></a>
<a id="trace-12024"></a>
<a id="trace-12031"></a>
<a id="trace-12040"></a>
<a id="trace-12111"></a>
<a id="trace-12117"></a>
<a id="trace-12127"></a>
<a id="trace-12134"></a>
<a id="trace-12145"></a>
<a id="trace-12154"></a>
<a id="trace-12165"></a>
<a id="trace-12171"></a>
<a id="trace-12183"></a>
<a id="trace-12194"></a>
- 306.80s–359.80s (×107), actor 5, squad 0 (trace 10594): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 306.55s, trace 10588. Next observer evidence: {'until': 307.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10604}.

## Net delivery

42 matched order/radio deliveries; 249 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.107s; maximum 0.750s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1000: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1001: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1292: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1296: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1297: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1298: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1299: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 27.30s leader 5, trace 1757: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 27.30s leader 5, trace 1758: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1806: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1807: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1808: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1809: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1810: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1811: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 1935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 1936: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 1937: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 1938: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 1939: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 1940: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 1941: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2079: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2080: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2081: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2082: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2083: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2084: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 2233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2234: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2235: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2236: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2237: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 2238: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 2239: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 2397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 2398: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 2399: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 2400: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 2401: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 2402: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 2403: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 2554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 2555: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 2556: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 2557: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 2558: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 2559: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 2560: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 2712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 2713: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 2714: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 2715: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 2716: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 2717: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 2718: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 2874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 2875: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 2876: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 2877: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 2878: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 2879: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 2880: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 3037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 3038: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 3039: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 3040: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 3041: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 3042: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 3043: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 3194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 3195: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 3196: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 3197: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 3198: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 3199: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 3200: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 3354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 3355: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 3356: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 3357: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 3358: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 3359: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 3360: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 3514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 3515: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 3516: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 3517: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 3518: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 3519: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 3520: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 3627: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 3679: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 3680: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 3681: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 3682: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 3683: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 3684: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 3685: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 3845: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 3846: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 3847: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 3848: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 3849: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 3850: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 3851: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 96.95s leader 5, trace 3946: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 96.95s leader 5, trace 3947: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 4015: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 4016: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 4017: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 4018: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 4019: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 4020: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 4021: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 4183: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 4184: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 4185: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 4186: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 4187: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 4188: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 4189: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 4339: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 4340: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 4341: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 4342: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 4343: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 4344: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 4345: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 4493: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 4494: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 4495: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 4496: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 4497: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 4498: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 4499: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 4646: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 4647: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 4648: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 4649: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 4650: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 4651: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 4652: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 4804: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 4805: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 4806: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 4807: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 4808: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 4809: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 4810: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.75s leader 5, trace 4883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.75s leader 5, trace 4884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 5021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 5022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 5023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 5024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 5025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 5026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 5027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 5207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 5208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 5209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 5210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 5211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 5212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 5213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 5382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 5383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 5384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 5385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 5386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 5387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 5388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 5533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 5534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 5535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 5536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 5537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 5538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 5539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 5689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 5690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 5691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 5692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 5693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 5694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 5695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 5846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 5847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 5848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 5849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 5850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 5851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 5852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 6001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 6002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 6003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 6004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 6005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 6006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 6007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 6155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 6156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 6157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 6158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 6159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 6160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 6161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 6313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 6314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 6315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 6316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 6317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 6318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 6319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 6472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 6473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 6474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 6475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 6476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 6477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 6478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 6621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 6622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 6623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 6624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 6625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 6626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 6627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 6777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 6778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 6779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 6780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 6781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 6782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 6783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.75s leader 5, trace 6854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 6937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 6938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 6939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 6940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 6941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 6942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 6943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 7096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 7097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 7098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 7099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 7100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 7101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 7102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 7248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 7249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 7250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 7251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 7252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 7253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 7254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 7403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 7404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 7405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 7406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 7407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 7408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 7409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 7559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 7560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 7561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 7562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 7563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 7564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 7565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 7718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 7719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 7720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 7721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 7722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 7723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 7724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 7869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 7870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 7871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 7872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 7873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 7874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 7875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 8021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 8022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 8023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 8024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 8025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 8026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 8027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 8179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 8180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 8181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 8182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 8183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 8184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 8185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 8332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 8333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 8334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 8335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 8336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 8337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 8338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 8486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 8487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 8488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 8489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 8490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 8491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 8492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 8642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 8643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 8644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 8645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 8646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 8647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 8648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.75s leader 5, trace 8718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 8802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 8803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 8804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 8805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 8806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 8807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 8808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 8954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 8955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 8956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 8957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 8958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 8959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 8960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 9111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 9112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 9113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 9114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 9115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 9116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 9117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 9264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 9265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 9266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 9267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 9268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 9269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 9270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 9417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 9418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 9419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 9420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 9421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 9422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 9423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 9569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 9570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 9571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 9572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 9573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 9574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 9575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 9724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 9725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 9726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 9727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 9728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 9729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 9730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 9877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 9878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 9879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 9880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 9881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 9882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 9883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 10031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 10032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 10033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 10034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 10035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 10036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 10037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 10188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 10189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 10190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 10191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 10192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 10193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 10194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 10344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 10345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 10346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 10347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 10348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 10349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 10350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 10497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 10498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 10499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 10500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 10501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 10502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 10503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 306.55s leader 5, trace 10588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 10650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 10651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 10652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 10653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 10654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 10655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 10656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 10806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 10807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 10808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 10809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 10810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 10811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 10812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 10964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 10965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 10966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 10967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 10968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 10969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 10970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 11117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 11118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 11119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 11120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 11121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 11122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 11123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 11266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 11267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 11268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 11269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 11270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 11271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 11272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 11424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 11425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 11426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 11427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 11428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 11429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 11430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 11579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 11580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 11581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 11582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 11583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 11584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 11585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 11730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 11731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 11732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 11733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 11734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 11735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 11736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 11886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 11887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 11888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 11889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 11890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 11891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 11892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 12043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 12044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 12045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 12046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 12047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 12048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 12049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 12197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 12198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 12199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 12200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 12201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 12202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 12203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
