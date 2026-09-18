# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/23/109/good-ember/battle-109-1789674189944596188`

## Battle summary

**Ember** · 360 s · 273 shots.

### Turning points

- 24.4s, squad 4: contact (events line 234). First recorded contact.
- 29.4s, squad 0: withdrawal ([trace 2001](#trace-2001)). 44.9s, squad 0: advanced tactically.
- 43.9s, squad 0: help call ([trace 2846](#trace-2846)). No completion observed before termination.
- 47.0s, squad 0: help call ([trace 3131](#trace-3131)). No completion observed before termination.
- 84.6s, squad 0: withdrawal ([trace 5107](#trace-5107)). 101.0s, squad 0: took cover and returned fire.
- 96.6s, squad 0: help call ([trace 5902](#trace-5902)). No completion observed before termination.
- 104.3s, squad 0: withdrawal ([trace 6156](#trace-6156)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; no completed objective recorded; 10 shots, 4/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 263 shots, 1/6 lost.

### Decisions and attribution

At 84.6s, squad 0 chose broke contact ([trace 5107](#trace-5107)), followed by 1 shots and 0 own casualties; estimate 3.0 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 11.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 853](#trace-853)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 852](#trace-852)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.357607892181436, 'next_transition': 873}.
- 38.9s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.084253 retreat threshold=0.220000 initiative=requires intent ([trace 2671](#trace-2671)). Following evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22232071414787624, 'next_transition': 2687}.

### Communication

108 matched deliveries (mean 0.53s, max 5.25s); 101 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 24.35s, squad 4, contact, evidence events line 234: First recorded contact; .
- 29.40s, squad 0, withdrawal, evidence 2001: BreakContact: believed ratio at least two without superiority; 44.9s, squad 0: advanced tactically.
- 43.85s, squad 0, help call, evidence 2846: NeedSupport; No completion observed before termination.
- 47.05s, squad 0, help call, evidence 3131: NeedSupport; No completion observed before termination.
- 84.55s, squad 0, withdrawal, evidence 5107: BreakContact: believed ratio at least two without superiority; 101.0s, squad 0: took cover and returned fire.
- 96.55s, squad 0, help call, evidence 5902: NeedSupport; No completion observed before termination.
- 104.30s, squad 0, withdrawal, evidence 6156: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.170499094483233, 'next_transition': 502}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.170499094483233, 'next_transition': 502}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.170499094483233, 'next_transition': 502}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
<a id="trace-409"></a>
<a id="trace-428"></a>
<a id="trace-504"></a>
<a id="trace-518"></a>
<a id="trace-542"></a>
<a id="trace-562"></a>
<a id="trace-575"></a>
<a id="trace-592"></a>
<a id="trace-614"></a>
<a id="trace-635"></a>
<a id="trace-646"></a>
<a id="trace-654"></a>
<a id="trace-736"></a>
<a id="trace-745"></a>
<a id="trace-849"></a>
<a id="trace-875"></a>
<a id="trace-898"></a>
<a id="trace-916"></a>
<a id="trace-935"></a>
<a id="trace-952"></a>
<a id="trace-977"></a>
<a id="trace-992"></a>
<a id="trace-1070"></a>
<a id="trace-1081"></a>
<a id="trace-1100"></a>
<a id="trace-1114"></a>
<a id="trace-1236"></a>
<a id="trace-1253"></a>
<a id="trace-1280"></a>
<a id="trace-1295"></a>
<a id="trace-1316"></a>
<a id="trace-1334"></a>
<a id="trace-1408"></a>
<a id="trace-1522"></a>
<a id="trace-1539"></a>
<a id="trace-1550"></a>
<a id="trace-1564"></a>
<a id="trace-1580"></a>
<a id="trace-1596"></a>
<a id="trace-1606"></a>
<a id="trace-1620"></a>
<a id="trace-1634"></a>
<a id="trace-1708"></a>
<a id="trace-1715"></a>
<a id="trace-1883"></a>
<a id="trace-1899"></a>
<a id="trace-1924"></a>
<a id="trace-1932"></a>
<a id="trace-1952"></a>
<a id="trace-1977"></a>
<a id="trace-1996"></a>
<a id="trace-2295"></a>
<a id="trace-2376"></a>
<a id="trace-2389"></a>
<a id="trace-2412"></a>
<a id="trace-2418"></a>
<a id="trace-2435"></a>
<a id="trace-2459"></a>
<a id="trace-2473"></a>
<a id="trace-2486"></a>
<a id="trace-2500"></a>
<a id="trace-2506"></a>
<a id="trace-2585"></a>
<a id="trace-2595"></a>
<a id="trace-2614"></a>
<a id="trace-2629"></a>
<a id="trace-2638"></a>
<a id="trace-2644"></a>
<a id="trace-2657"></a>
<a id="trace-2669"></a>
<a id="trace-2689"></a>
<a id="trace-2696"></a>
<a id="trace-2776"></a>
<a id="trace-2792"></a>
<a id="trace-2802"></a>
<a id="trace-2808"></a>
<a id="trace-2822"></a>
<a id="trace-2830"></a>
<a id="trace-2836"></a>
<a id="trace-2843"></a>
<a id="trace-2863"></a>
<a id="trace-2874"></a>
<a id="trace-3036"></a>
<a id="trace-3046"></a>
<a id="trace-3119"></a>
<a id="trace-3127"></a>
<a id="trace-3140"></a>
<a id="trace-3152"></a>
<a id="trace-3163"></a>
<a id="trace-3175"></a>
<a id="trace-3182"></a>
<a id="trace-3187"></a>
<a id="trace-3423"></a>
<a id="trace-3430"></a>
<a id="trace-3453"></a>
<a id="trace-3457"></a>
<a id="trace-3475"></a>
<a id="trace-3494"></a>
<a id="trace-3506"></a>
<a id="trace-3514"></a>
<a id="trace-3534"></a>
<a id="trace-3542"></a>
<a id="trace-3618"></a>
<a id="trace-3626"></a>
<a id="trace-3644"></a>
<a id="trace-3655"></a>
<a id="trace-3667"></a>
<a id="trace-3675"></a>
<a id="trace-3689"></a>
<a id="trace-3695"></a>
<a id="trace-3708"></a>
<a id="trace-3718"></a>
<a id="trace-3795"></a>
<a id="trace-3808"></a>
<a id="trace-3821"></a>
<a id="trace-3826"></a>
<a id="trace-3894"></a>
<a id="trace-3908"></a>
<a id="trace-3926"></a>
<a id="trace-3934"></a>
<a id="trace-3953"></a>
<a id="trace-3963"></a>
<a id="trace-4039"></a>
<a id="trace-4047"></a>
<a id="trace-4062"></a>
<a id="trace-4073"></a>
<a id="trace-4089"></a>
<a id="trace-4107"></a>
<a id="trace-4117"></a>
<a id="trace-4137"></a>
<a id="trace-4146"></a>
<a id="trace-4226"></a>
<a id="trace-4237"></a>
<a id="trace-4247"></a>
<a id="trace-4258"></a>
<a id="trace-4270"></a>
<a id="trace-4278"></a>
<a id="trace-4294"></a>
<a id="trace-4299"></a>
<a id="trace-4541"></a>
<a id="trace-4555"></a>
<a id="trace-4635"></a>
<a id="trace-4642"></a>
<a id="trace-4657"></a>
<a id="trace-4664"></a>
<a id="trace-4681"></a>
<a id="trace-4693"></a>
<a id="trace-4702"></a>
<a id="trace-4706"></a>
<a id="trace-4712"></a>
<a id="trace-4717"></a>
<a id="trace-4797"></a>
<a id="trace-4812"></a>
<a id="trace-4993"></a>
<a id="trace-5014"></a>
<a id="trace-5035"></a>
<a id="trace-5048"></a>
<a id="trace-5069"></a>
<a id="trace-5086"></a>
<a id="trace-5101"></a>
<a id="trace-5278"></a>
<a id="trace-5352"></a>
<a id="trace-5368"></a>
<a id="trace-5381"></a>
<a id="trace-5393"></a>
<a id="trace-5403"></a>
<a id="trace-5415"></a>
<a id="trace-5425"></a>
<a id="trace-5440"></a>
<a id="trace-5453"></a>
<a id="trace-5462"></a>
<a id="trace-5555"></a>
<a id="trace-5594"></a>
<a id="trace-5612"></a>
<a id="trace-5739"></a>
<a id="trace-5761"></a>
<a id="trace-5772"></a>
<a id="trace-5778"></a>
<a id="trace-5793"></a>
<a id="trace-5799"></a>
<a id="trace-5810"></a>
<a id="trace-5881"></a>
<a id="trace-5887"></a>
<a id="trace-5898"></a>
<a id="trace-5912"></a>
<a id="trace-5925"></a>
<a id="trace-5934"></a>
<a id="trace-5945"></a>
<a id="trace-5956"></a>
<a id="trace-5964"></a>
<a id="trace-5975"></a>
<a id="trace-6048"></a>
<a id="trace-6057"></a>
<a id="trace-6099"></a>
<a id="trace-6111"></a>
<a id="trace-6123"></a>
<a id="trace-6129"></a>
<a id="trace-6138"></a>
<a id="trace-6144"></a>
<a id="trace-6155"></a>
<a id="trace-6192"></a>
<a id="trace-6270"></a>
<a id="trace-6274"></a>
<a id="trace-6292"></a>
<a id="trace-6297"></a>
<a id="trace-6305"></a>
<a id="trace-6310"></a>
<a id="trace-6321"></a>
<a id="trace-6328"></a>
<a id="trace-6339"></a>
<a id="trace-6347"></a>
<a id="trace-6419"></a>
<a id="trace-6427"></a>
<a id="trace-6435"></a>
<a id="trace-6446"></a>
<a id="trace-6459"></a>
<a id="trace-6465"></a>
<a id="trace-6479"></a>
<a id="trace-6484"></a>
<a id="trace-6495"></a>
<a id="trace-6504"></a>
<a id="trace-6572"></a>
<a id="trace-6577"></a>
<a id="trace-6589"></a>
<a id="trace-6594"></a>
<a id="trace-6602"></a>
<a id="trace-6613"></a>
<a id="trace-6621"></a>
<a id="trace-6628"></a>
<a id="trace-6635"></a>
<a id="trace-6640"></a>
<a id="trace-6704"></a>
<a id="trace-6709"></a>
<a id="trace-6720"></a>
<a id="trace-6725"></a>
<a id="trace-6731"></a>
<a id="trace-6736"></a>
<a id="trace-6740"></a>
<a id="trace-6746"></a>
<a id="trace-6751"></a>
<a id="trace-6816"></a>
<a id="trace-6820"></a>
<a id="trace-6828"></a>
<a id="trace-6831"></a>
<a id="trace-6839"></a>
<a id="trace-6844"></a>
<a id="trace-6850"></a>
<a id="trace-6854"></a>
<a id="trace-6859"></a>
<a id="trace-6869"></a>
<a id="trace-6933"></a>
<a id="trace-6938"></a>
<a id="trace-6948"></a>
<a id="trace-6952"></a>
<a id="trace-6959"></a>
<a id="trace-6964"></a>
<a id="trace-6971"></a>
<a id="trace-6975"></a>
<a id="trace-6980"></a>
<a id="trace-6986"></a>
<a id="trace-7049"></a>
<a id="trace-7055"></a>
<a id="trace-7062"></a>
<a id="trace-7065"></a>
<a id="trace-7071"></a>
<a id="trace-7076"></a>
<a id="trace-7083"></a>
<a id="trace-7090"></a>
<a id="trace-7099"></a>
<a id="trace-7105"></a>
<a id="trace-7170"></a>
<a id="trace-7174"></a>
<a id="trace-7182"></a>
<a id="trace-7189"></a>
<a id="trace-7197"></a>
<a id="trace-7203"></a>
<a id="trace-7210"></a>
<a id="trace-7214"></a>
<a id="trace-7221"></a>
<a id="trace-7228"></a>
<a id="trace-7295"></a>
<a id="trace-7301"></a>
<a id="trace-7311"></a>
<a id="trace-7315"></a>
<a id="trace-7321"></a>
<a id="trace-7328"></a>
<a id="trace-7332"></a>
<a id="trace-7335"></a>
<a id="trace-7340"></a>
<a id="trace-7345"></a>
<a id="trace-7410"></a>
<a id="trace-7415"></a>
<a id="trace-7423"></a>
<a id="trace-7427"></a>
<a id="trace-7438"></a>
<a id="trace-7447"></a>
<a id="trace-7452"></a>
<a id="trace-7457"></a>
<a id="trace-7462"></a>
<a id="trace-7468"></a>
<a id="trace-7534"></a>
<a id="trace-7539"></a>
<a id="trace-7550"></a>
<a id="trace-7554"></a>
<a id="trace-7563"></a>
<a id="trace-7570"></a>
<a id="trace-7577"></a>
<a id="trace-7584"></a>
<a id="trace-7593"></a>
<a id="trace-7600"></a>
<a id="trace-7664"></a>
<a id="trace-7668"></a>
<a id="trace-7675"></a>
<a id="trace-7678"></a>
<a id="trace-7685"></a>
<a id="trace-7690"></a>
<a id="trace-7695"></a>
<a id="trace-7699"></a>
<a id="trace-7705"></a>
<a id="trace-7711"></a>
<a id="trace-7779"></a>
<a id="trace-7788"></a>
<a id="trace-7795"></a>
<a id="trace-7798"></a>
<a id="trace-7804"></a>
<a id="trace-7810"></a>
<a id="trace-7816"></a>
<a id="trace-7820"></a>
<a id="trace-7827"></a>
<a id="trace-7833"></a>
<a id="trace-7901"></a>
<a id="trace-7907"></a>
<a id="trace-7915"></a>
<a id="trace-7923"></a>
<a id="trace-7932"></a>
<a id="trace-7939"></a>
<a id="trace-7945"></a>
<a id="trace-7948"></a>
<a id="trace-7954"></a>
<a id="trace-7959"></a>
<a id="trace-8024"></a>
<a id="trace-8027"></a>
<a id="trace-8034"></a>
<a id="trace-8038"></a>
<a id="trace-8044"></a>
<a id="trace-8052"></a>
<a id="trace-8060"></a>
<a id="trace-8065"></a>
<a id="trace-8073"></a>
<a id="trace-8078"></a>
<a id="trace-8144"></a>
<a id="trace-8147"></a>
<a id="trace-8155"></a>
<a id="trace-8158"></a>
<a id="trace-8165"></a>
<a id="trace-8174"></a>
<a id="trace-8180"></a>
<a id="trace-8188"></a>
<a id="trace-8195"></a>
<a id="trace-8201"></a>
<a id="trace-8275"></a>
<a id="trace-8284"></a>
<a id="trace-8287"></a>
<a id="trace-8293"></a>
<a id="trace-8298"></a>
<a id="trace-8304"></a>
<a id="trace-8308"></a>
<a id="trace-8312"></a>
<a id="trace-8319"></a>
<a id="trace-8383"></a>
<a id="trace-8387"></a>
<a id="trace-8396"></a>
<a id="trace-8402"></a>
<a id="trace-8413"></a>
<a id="trace-8418"></a>
<a id="trace-8424"></a>
<a id="trace-8427"></a>
<a id="trace-8433"></a>
<a id="trace-8439"></a>
<a id="trace-8503"></a>
<a id="trace-8510"></a>
<a id="trace-8519"></a>
<a id="trace-8524"></a>
<a id="trace-8533"></a>
<a id="trace-8539"></a>
<a id="trace-8552"></a>
<a id="trace-8559"></a>
<a id="trace-8565"></a>
<a id="trace-8570"></a>
<a id="trace-8635"></a>
<a id="trace-8640"></a>
<a id="trace-8647"></a>
<a id="trace-8652"></a>
<a id="trace-8657"></a>
<a id="trace-8662"></a>
<a id="trace-8668"></a>
<a id="trace-8671"></a>
<a id="trace-8678"></a>
<a id="trace-8686"></a>
<a id="trace-8754"></a>
<a id="trace-8759"></a>
<a id="trace-8767"></a>
<a id="trace-8771"></a>
<a id="trace-8777"></a>
<a id="trace-8784"></a>
<a id="trace-8789"></a>
<a id="trace-8793"></a>
<a id="trace-8800"></a>
<a id="trace-8807"></a>
<a id="trace-8876"></a>
<a id="trace-8881"></a>
<a id="trace-8891"></a>
<a id="trace-8896"></a>
<a id="trace-8906"></a>
<a id="trace-8913"></a>
<a id="trace-8917"></a>
<a id="trace-8922"></a>
<a id="trace-8926"></a>
<a id="trace-8932"></a>
<a id="trace-8996"></a>
<a id="trace-8999"></a>
<a id="trace-9007"></a>
<a id="trace-9011"></a>
<a id="trace-9018"></a>
<a id="trace-9025"></a>
<a id="trace-9034"></a>
<a id="trace-9041"></a>
<a id="trace-9046"></a>
<a id="trace-9054"></a>
<a id="trace-9118"></a>
<a id="trace-9122"></a>
<a id="trace-9131"></a>
<a id="trace-9136"></a>
<a id="trace-9146"></a>
<a id="trace-9152"></a>
<a id="trace-9158"></a>
<a id="trace-9162"></a>
<a id="trace-9169"></a>
<a id="trace-9179"></a>
<a id="trace-9246"></a>
<a id="trace-9251"></a>
<a id="trace-9257"></a>
<a id="trace-9261"></a>
<a id="trace-9267"></a>
<a id="trace-9272"></a>
<a id="trace-9278"></a>
<a id="trace-9281"></a>
<a id="trace-9286"></a>
<a id="trace-9293"></a>
<a id="trace-9358"></a>
<a id="trace-9362"></a>
<a id="trace-9373"></a>
<a id="trace-9382"></a>
<a id="trace-9389"></a>
<a id="trace-9395"></a>
<a id="trace-9402"></a>
<a id="trace-9407"></a>
<a id="trace-9416"></a>
<a id="trace-9422"></a>
<a id="trace-9486"></a>
<a id="trace-9489"></a>
<a id="trace-9498"></a>
<a id="trace-9503"></a>
<a id="trace-9509"></a>
<a id="trace-9519"></a>
<a id="trace-9527"></a>
<a id="trace-9532"></a>
<a id="trace-9537"></a>
<a id="trace-9542"></a>
<a id="trace-9607"></a>
<a id="trace-9610"></a>
<a id="trace-9617"></a>
<a id="trace-9621"></a>
<a id="trace-9627"></a>
<a id="trace-9633"></a>
<a id="trace-9639"></a>
<a id="trace-9646"></a>
<a id="trace-9654"></a>
<a id="trace-9662"></a>
<a id="trace-9731"></a>
<a id="trace-9736"></a>
<a id="trace-9747"></a>
<a id="trace-9751"></a>
<a id="trace-9757"></a>
<a id="trace-9762"></a>
<a id="trace-9768"></a>
<a id="trace-9773"></a>
<a id="trace-9777"></a>
<a id="trace-9785"></a>
<a id="trace-9849"></a>
<a id="trace-9854"></a>
<a id="trace-9865"></a>
<a id="trace-9871"></a>
<a id="trace-9878"></a>
<a id="trace-9883"></a>
<a id="trace-9888"></a>
<a id="trace-9892"></a>
<a id="trace-9897"></a>
<a id="trace-9903"></a>
<a id="trace-9967"></a>
<a id="trace-9973"></a>
<a id="trace-9981"></a>
<a id="trace-9986"></a>
<a id="trace-9995"></a>
<a id="trace-10005"></a>
<a id="trace-10018"></a>
<a id="trace-10022"></a>
<a id="trace-10027"></a>
<a id="trace-10032"></a>
<a id="trace-10097"></a>
<a id="trace-10102"></a>
<a id="trace-10108"></a>
<a id="trace-10113"></a>
<a id="trace-10118"></a>
<a id="trace-10125"></a>
<a id="trace-10131"></a>
<a id="trace-10134"></a>
<a id="trace-10151"></a>
<a id="trace-10216"></a>
<a id="trace-10220"></a>
<a id="trace-10227"></a>
<a id="trace-10231"></a>
<a id="trace-10237"></a>
<a id="trace-10245"></a>
<a id="trace-10250"></a>
<a id="trace-10254"></a>
<a id="trace-10262"></a>
<a id="trace-10269"></a>
<a id="trace-10338"></a>
<a id="trace-10345"></a>
<a id="trace-10356"></a>
<a id="trace-10360"></a>
<a id="trace-10367"></a>
<a id="trace-10374"></a>
<a id="trace-10378"></a>
<a id="trace-10383"></a>
<a id="trace-10387"></a>
<a id="trace-10393"></a>
<a id="trace-10457"></a>
<a id="trace-10460"></a>
<a id="trace-10469"></a>
<a id="trace-10473"></a>
<a id="trace-10482"></a>
<a id="trace-10490"></a>
<a id="trace-10498"></a>
<a id="trace-10502"></a>
<a id="trace-10507"></a>
<a id="trace-10515"></a>
<a id="trace-10579"></a>
<a id="trace-10583"></a>
<a id="trace-10592"></a>
<a id="trace-10597"></a>
<a id="trace-10607"></a>
<a id="trace-10614"></a>
<a id="trace-10620"></a>
<a id="trace-10624"></a>
<a id="trace-10634"></a>
<a id="trace-10644"></a>
<a id="trace-10707"></a>
<a id="trace-10712"></a>
<a id="trace-10718"></a>
<a id="trace-10722"></a>
<a id="trace-10728"></a>
<a id="trace-10733"></a>
<a id="trace-10739"></a>
<a id="trace-10742"></a>
<a id="trace-10748"></a>
<a id="trace-10755"></a>
<a id="trace-10820"></a>
<a id="trace-10827"></a>
<a id="trace-10838"></a>
<a id="trace-10844"></a>
<a id="trace-10850"></a>
<a id="trace-10856"></a>
<a id="trace-10863"></a>
<a id="trace-10868"></a>
<a id="trace-10877"></a>
<a id="trace-10883"></a>
<a id="trace-10947"></a>
<a id="trace-10951"></a>
<a id="trace-10960"></a>
<a id="trace-10965"></a>
<a id="trace-10974"></a>
<a id="trace-10984"></a>
<a id="trace-10989"></a>
<a id="trace-10993"></a>
<a id="trace-10998"></a>
<a id="trace-11003"></a>
<a id="trace-11068"></a>
<a id="trace-11071"></a>
<a id="trace-11079"></a>
<a id="trace-11084"></a>
<a id="trace-11092"></a>
<a id="trace-11097"></a>
<a id="trace-11103"></a>
<a id="trace-11112"></a>
<a id="trace-11121"></a>
<a id="trace-11128"></a>
<a id="trace-11194"></a>
<a id="trace-11199"></a>
<a id="trace-11210"></a>
<a id="trace-11214"></a>
<a id="trace-11221"></a>
<a id="trace-11225"></a>
<a id="trace-11231"></a>
<a id="trace-11236"></a>
<a id="trace-11241"></a>
<a id="trace-11249"></a>
<a id="trace-11315"></a>
<a id="trace-11321"></a>
<a id="trace-11331"></a>
<a id="trace-11334"></a>
<a id="trace-11342"></a>
<a id="trace-11346"></a>
<a id="trace-11351"></a>
<a id="trace-11355"></a>
<a id="trace-11360"></a>
<a id="trace-11366"></a>
<a id="trace-11430"></a>
<a id="trace-11437"></a>
<a id="trace-11445"></a>
<a id="trace-11450"></a>
<a id="trace-11463"></a>
<a id="trace-11472"></a>
<a id="trace-11483"></a>
<a id="trace-11487"></a>
<a id="trace-11492"></a>
<a id="trace-11497"></a>
<a id="trace-11562"></a>
<a id="trace-11567"></a>
<a id="trace-11573"></a>
<a id="trace-11578"></a>
<a id="trace-11584"></a>
<a id="trace-11590"></a>
<a id="trace-11597"></a>
<a id="trace-11603"></a>
<a id="trace-11613"></a>
<a id="trace-11618"></a>
<a id="trace-11682"></a>
<a id="trace-11686"></a>
<a id="trace-11693"></a>
<a id="trace-11697"></a>
<a id="trace-11703"></a>
<a id="trace-11710"></a>
<a id="trace-11716"></a>
<a id="trace-11721"></a>
<a id="trace-11729"></a>
<a id="trace-11736"></a>
<a id="trace-11808"></a>
<a id="trace-11815"></a>
<a id="trace-11823"></a>
<a id="trace-11826"></a>
<a id="trace-11833"></a>
<a id="trace-11839"></a>
<a id="trace-11844"></a>
<a id="trace-11849"></a>
<a id="trace-11855"></a>
<a id="trace-11861"></a>
<a id="trace-11926"></a>
<a id="trace-11929"></a>
<a id="trace-11938"></a>
<a id="trace-11944"></a>
<a id="trace-11954"></a>
<a id="trace-11960"></a>
<a id="trace-11965"></a>
<a id="trace-11969"></a>
<a id="trace-11975"></a>
<a id="trace-11983"></a>
<a id="trace-12047"></a>
<a id="trace-12051"></a>
<a id="trace-12060"></a>
<a id="trace-12065"></a>
<a id="trace-12076"></a>
<a id="trace-12082"></a>
<a id="trace-12090"></a>
<a id="trace-12095"></a>
<a id="trace-12105"></a>
<a id="trace-12112"></a>
<a id="trace-12175"></a>
<a id="trace-12180"></a>
<a id="trace-12186"></a>
<a id="trace-12190"></a>
<a id="trace-12196"></a>
<a id="trace-12200"></a>
<a id="trace-12206"></a>
<a id="trace-12210"></a>
<a id="trace-12217"></a>
<a id="trace-12224"></a>
<a id="trace-12294"></a>
<a id="trace-12301"></a>
<a id="trace-12308"></a>
<a id="trace-12314"></a>
<a id="trace-12320"></a>
<a id="trace-12325"></a>
<a id="trace-12332"></a>
<a id="trace-12337"></a>
<a id="trace-12346"></a>
<a id="trace-12352"></a>
<a id="trace-12418"></a>
<a id="trace-12422"></a>
<a id="trace-12431"></a>
<a id="trace-12439"></a>
<a id="trace-12448"></a>
<a id="trace-12454"></a>
<a id="trace-12458"></a>
<a id="trace-12462"></a>
<a id="trace-12467"></a>
<a id="trace-12472"></a>
- 1.60s–359.80s (×713), actor 37, squad 4 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4830056986028501, 'next_transition': 351}.
<a id="trace-502"></a>
<a id="trace-516"></a>
<a id="trace-540"></a>
<a id="trace-560"></a>
<a id="trace-573"></a>
<a id="trace-590"></a>
<a id="trace-612"></a>
<a id="trace-633"></a>
<a id="trace-734"></a>
<a id="trace-743"></a>
- 5.20s–10.70s (×10), actor 5, squad 0 (trace 502): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 435. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2200251165556706, 'next_transition': 516}.
<a id="trace-749"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 749): traveling overwatch. Knowledge: actor memory at 10.00s, trace 656. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4000150516238515, 'next_transition': 847}.
<a id="trace-750"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 750): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 656. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4000150516238515, 'next_transition': 847}.
<a id="trace-847"></a>
- 11.20s–11.20s (×1), actor 5, squad 0 (trace 847): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 659. Next observer evidence: None.
<a id="trace-115"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 115): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.357607892181436, 'next_transition': 873}.
<a id="trace-852"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 852): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 852. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.357607892181436, 'next_transition': 873}.
<a id="trace-853"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 853): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 853. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.357607892181436, 'next_transition': 873}.
<a id="trace-873"></a>
<a id="trace-896"></a>
<a id="trace-914"></a>
<a id="trace-933"></a>
<a id="trace-975"></a>
<a id="trace-1068"></a>
<a id="trace-1079"></a>
<a id="trace-1098"></a>
- 11.70s–16.25s (×8), actor 5, squad 0 (trace 873): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 853. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48498397112668007, 'next_transition': 896}.
<a id="trace-1115"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 1115): received platoon directive. Knowledge: actor memory at 15.00s, trace 994. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945006361372331, 'next_transition': 1234}.
<a id="trace-1234"></a>
<a id="trace-1293"></a>
<a id="trace-1314"></a>
<a id="trace-1406"></a>
- 17.25s–20.25s (×4), actor 5, squad 0 (trace 1234): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 997. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5653316425407678, 'next_transition': 1293}.
<a id="trace-1409"></a>
- 20.25s–20.25s (×1), actor 0, squad 0 (trace 1409): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1337. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1520}.
<a id="trace-1520"></a>
<a id="trace-1537"></a>
<a id="trace-1548"></a>
<a id="trace-1562"></a>
<a id="trace-1604"></a>
<a id="trace-1618"></a>
<a id="trace-1632"></a>
<a id="trace-1713"></a>
- 20.75s–25.75s (×8), actor 5, squad 0 (trace 1520): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1340. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18374961959151856, 'next_transition': 1537}.
<a id="trace-1716"></a>
- 25.75s–25.75s (×1), actor 0, squad 0 (trace 1716): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 1638. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5365341031039793, 'next_transition': 1881}.
<a id="trace-1717"></a>
- 25.75s–25.75s (×1), actor 0, squad 0 (trace 1717): bounding overwatch. Knowledge: actor memory at 25.00s, trace 1638. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5365341031039793, 'next_transition': 1881}.
<a id="trace-1718"></a>
- 25.75s–25.75s (×1), actor 0, squad 0 (trace 1718): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 1638. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5365341031039793, 'next_transition': 1881}.
<a id="trace-1881"></a>
<a id="trace-1922"></a>
<a id="trace-1930"></a>
<a id="trace-1950"></a>
<a id="trace-1975"></a>
<a id="trace-1994"></a>
- 26.25s–29.25s (×6), actor 5, squad 0 (trace 1881): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1641. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4343499012403405, 'next_transition': 1922}.
<a id="trace-2001"></a>
- 29.40s–29.40s (×1), actor 0, squad 0 (trace 2001): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 1638. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08498987235416787, 'next_transition': 2293}.
<a id="trace-2002"></a>
- 29.40s–29.40s (×1), actor 0, squad 0 (trace 2002): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 1638. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08498987235416787, 'next_transition': 2293}.
<a id="trace-2293"></a>
<a id="trace-2374"></a>
<a id="trace-2387"></a>
<a id="trace-2410"></a>
<a id="trace-2416"></a>
<a id="trace-2457"></a>
<a id="trace-2484"></a>
<a id="trace-2498"></a>
<a id="trace-2593"></a>
<a id="trace-2612"></a>
<a id="trace-2636"></a>
<a id="trace-2655"></a>
<a id="trace-2667"></a>
- 29.75s–38.75s (×13), actor 5, squad 0 (trace 2293): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1641. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2550012934389853, 'next_transition': 2374}.
<a id="trace-323"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 323): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2671"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 2671): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.084253 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 2671. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22232071414787624, 'next_transition': 2687}.
<a id="trace-2672"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 2672): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.084253 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 2672. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22232071414787624, 'next_transition': 2687}.
<a id="trace-2687"></a>
<a id="trace-2694"></a>
<a id="trace-2790"></a>
<a id="trace-2806"></a>
<a id="trace-2820"></a>
<a id="trace-2828"></a>
<a id="trace-2834"></a>
<a id="trace-2841"></a>
- 39.25s–43.75s (×8), actor 5, squad 0 (trace 2687): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 2672. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100077987969868, 'next_transition': 2694}.
<a id="trace-2845"></a>
- 43.85s–43.85s (×1), actor 1, squad 0 (trace 2845): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 40.00s, trace 2703. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2861}.
<a id="trace-2846"></a>
- 43.85s–43.85s (×1), actor 1, squad 0 (trace 2846): NeedSupport. Knowledge: actor memory at 40.00s, trace 2703. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2861}.
<a id="trace-2861"></a>
<a id="trace-2872"></a>
- 44.25s–44.75s (×2), actor 5, squad 0 (trace 2861): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 2705. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2872}.
<a id="trace-2875"></a>
- 44.85s–44.85s (×1), actor 1, squad 0 (trace 2875): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 2703. Next observer evidence: {'until': 45.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599893565931168, 'next_transition': 3048}.
<a id="trace-2879"></a>
- 44.85s–44.85s (×1), actor 1, squad 0 (trace 2879): MoveTactically. Knowledge: actor memory at 40.00s, trace 2703. Next observer evidence: {'until': 45.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599893565931168, 'next_transition': 3048}.
<a id="trace-2880"></a>
- 44.85s–44.85s (×1), actor 1, squad 0 (trace 2880): Reorganise complete. Knowledge: actor memory at 40.00s, trace 2703. Next observer evidence: {'until': 45.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599893565931168, 'next_transition': 3048}.
<a id="trace-3048"></a>
- 45.85s–45.85s (×1), actor 1, squad 0 (trace 3048): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 45.00s, trace 2969. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039712710938313, 'next_transition': 3117}.
<a id="trace-3117"></a>
<a id="trace-3125"></a>
- 46.25s–46.75s (×2), actor 5, squad 0 (trace 3117): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 2971. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5355181064500996, 'next_transition': 3125}.
<a id="trace-3131"></a>
- 47.05s–47.05s (×1), actor 1, squad 0 (trace 3131): NeedSupport. Knowledge: actor memory at 45.00s, trace 2969. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.133979230304522, 'next_transition': 3150}.
<a id="trace-3150"></a>
- 47.75s–47.75s (×1), actor 5, squad 0 (trace 3150): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 2971. Next observer evidence: {'until': 50, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.8350326134724746, 'next_transition': 3201}.
<a id="trace-3201"></a>
- 50.05s–50.05s (×1), actor 1, squad 0 (trace 3201): traveling. Knowledge: actor memory at 50.00s, trace 3189. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12598808356348548, 'next_transition': 3421}.
<a id="trace-3202"></a>
- 50.05s–50.05s (×1), actor 1, squad 0 (trace 3202): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 50.00s, trace 3189. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12598808356348548, 'next_transition': 3421}.
<a id="trace-3421"></a>
<a id="trace-3455"></a>
<a id="trace-3492"></a>
<a id="trace-3504"></a>
<a id="trace-3616"></a>
<a id="trace-3624"></a>
<a id="trace-3642"></a>
<a id="trace-3665"></a>
<a id="trace-3687"></a>
<a id="trace-3693"></a>
<a id="trace-3706"></a>
<a id="trace-3716"></a>
<a id="trace-3806"></a>
<a id="trace-3819"></a>
- 50.25s–61.25s (×14), actor 5, squad 0 (trace 3421): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 3191. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.35829144225498, 'next_transition': 3455}.
<a id="trace-3833"></a>
- 62.15s–62.15s (×1), actor 1, squad 0 (trace 3833): traveling overwatch. Knowledge: actor memory at 60.00s, trace 3720. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37799091893761794, 'next_transition': 3892}.
<a id="trace-3834"></a>
- 62.15s–62.15s (×1), actor 1, squad 0 (trace 3834): matching received arrivals: traveling stage complete. Knowledge: actor memory at 60.00s, trace 3720. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37799091893761794, 'next_transition': 3892}.
<a id="trace-3892"></a>
<a id="trace-3932"></a>
<a id="trace-3951"></a>
<a id="trace-3961"></a>
<a id="trace-4045"></a>
<a id="trace-4060"></a>
<a id="trace-4081"></a>
<a id="trace-4087"></a>
<a id="trace-4105"></a>
<a id="trace-4135"></a>
<a id="trace-4144"></a>
<a id="trace-4224"></a>
<a id="trace-4235"></a>
<a id="trace-4245"></a>
<a id="trace-4256"></a>
<a id="trace-4268"></a>
<a id="trace-4297"></a>
- 62.25s–73.75s (×17), actor 5, squad 0 (trace 3892): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 3722. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5435123152260233, 'next_transition': 3932}.
<a id="trace-4301"></a>
- 73.85s–73.85s (×1), actor 1, squad 0 (trace 4301): ReactToContact: cover and return fire. Knowledge: actor memory at 70.00s, trace 4150. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7039675210953462, 'next_transition': 4539}.
<a id="trace-4302"></a>
- 73.85s–73.85s (×1), actor 1, squad 0 (trace 4302): bounding overwatch. Knowledge: actor memory at 70.00s, trace 4150. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7039675210953462, 'next_transition': 4539}.
<a id="trace-4303"></a>
- 73.85s–73.85s (×1), actor 1, squad 0 (trace 4303): new contact inside 100 m. Knowledge: actor memory at 70.00s, trace 4150. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7039675210953462, 'next_transition': 4539}.
<a id="trace-4539"></a>
<a id="trace-4553"></a>
<a id="trace-4633"></a>
<a id="trace-4640"></a>
<a id="trace-4655"></a>
<a id="trace-4662"></a>
<a id="trace-4679"></a>
<a id="trace-4691"></a>
<a id="trace-4704"></a>
<a id="trace-4710"></a>
<a id="trace-4715"></a>
- 74.25s–79.75s (×11), actor 5, squad 0 (trace 4539): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 4152. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12508199957036992, 'next_transition': 4553}.
<a id="trace-4732"></a>
- 80.10s–80.10s (×1), actor 4, squad 0 (trace 4732): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 80.00s, trace 4718. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2207542503427546, 'next_transition': 4795}.
<a id="trace-4795"></a>
<a id="trace-4810"></a>
- 80.25s–80.75s (×2), actor 5, squad 0 (trace 4795): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 4719. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.321998375391108, 'next_transition': 4810}.
<a id="trace-4819"></a>
- 81.10s–81.10s (×1), actor 4, squad 0 (trace 4819): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 80.00s, trace 4718. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.576874620453088, 'next_transition': 4991}.
<a id="trace-4991"></a>
<a id="trace-5012"></a>
<a id="trace-5033"></a>
<a id="trace-5046"></a>
<a id="trace-5067"></a>
<a id="trace-5084"></a>
- 81.25s–83.75s (×6), actor 5, squad 0 (trace 4991): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 4719. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9489869531811848, 'next_transition': 5012}.
<a id="trace-5107"></a>
- 84.55s–84.55s (×1), actor 4, squad 0 (trace 5107): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 80.00s, trace 4718. Next observer evidence: {'until': 86.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.206947095048851, 'next_transition': 5379}.
<a id="trace-5108"></a>
- 84.55s–84.55s (×1), actor 4, squad 0 (trace 5108): rearward bound: one stationary suppressing element. Knowledge: actor memory at 80.00s, trace 4718. Next observer evidence: {'until': 86.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.206947095048851, 'next_transition': 5379}.
<a id="trace-5379"></a>
- 86.25s–86.25s (×1), actor 5, squad 0 (trace 5379): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 5284. Next observer evidence: {'until': 86.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5388}.
<a id="trace-5388"></a>
- 86.60s–86.60s (×1), actor 4, squad 0 (trace 5388): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 5283. Next observer evidence: {'until': 86.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5391}.
<a id="trace-5391"></a>
<a id="trace-5401"></a>
<a id="trace-5413"></a>
<a id="trace-5423"></a>
- 86.75s–88.25s (×4), actor 5, squad 0 (trace 5391): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 5284. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5401}.
<a id="trace-5430"></a>
- 88.55s–88.55s (×1), actor 4, squad 0 (trace 5430): support established: element delivered fire on threat area. Knowledge: actor memory at 85.00s, trace 5283. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5048551007639176, 'next_transition': 5451}.
<a id="trace-5431"></a>
- 88.55s–88.55s (×1), actor 4, squad 0 (trace 5431): Fixing. Knowledge: actor memory at 85.00s, trace 5283. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5048551007639176, 'next_transition': 5451}.
<a id="trace-5451"></a>
<a id="trace-5460"></a>
<a id="trace-5592"></a>
- 89.25s–90.75s (×3), actor 5, squad 0 (trace 5451): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 5284. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1037751705912835, 'next_transition': 5460}.
<a id="trace-5623"></a>
- 91.55s–91.55s (×1), actor 4, squad 0 (trace 5623): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 5473. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10160000000000036, 'next_transition': 5737}.
<a id="trace-5624"></a>
- 91.55s–91.55s (×1), actor 4, squad 0 (trace 5624): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 5473. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10160000000000036, 'next_transition': 5737}.
<a id="trace-5737"></a>
<a id="trace-5759"></a>
<a id="trace-5797"></a>
<a id="trace-5808"></a>
<a id="trace-5879"></a>
<a id="trace-5896"></a>
- 91.75s–96.25s (×6), actor 5, squad 0 (trace 5737): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5474. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18147499999999983, 'next_transition': 5759}.
<a id="trace-5901"></a>
- 96.55s–96.55s (×1), actor 4, squad 0 (trace 5901): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 95.00s, trace 5812. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2708936059045136, 'next_transition': 5910}.
<a id="trace-5902"></a>
- 96.55s–96.55s (×1), actor 4, squad 0 (trace 5902): NeedSupport. Knowledge: actor memory at 95.00s, trace 5812. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2708936059045136, 'next_transition': 5910}.
<a id="trace-5910"></a>
<a id="trace-5923"></a>
<a id="trace-5932"></a>
<a id="trace-5943"></a>
<a id="trace-5954"></a>
<a id="trace-5962"></a>
<a id="trace-5973"></a>
<a id="trace-6046"></a>
<a id="trace-6055"></a>
- 96.75s–100.75s (×9), actor 5, squad 0 (trace 5910): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 5813. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2054422812632113, 'next_transition': 5923}.
<a id="trace-6065"></a>
- 100.90s–100.90s (×1), actor 4, squad 0 (trace 6065): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 100.00s, trace 5976. Next observer evidence: None.
<a id="trace-6066"></a>
- 100.95s–100.95s (×1), actor 4, squad 0 (trace 6066): Reorganise: completed/failed drill. Knowledge: actor memory at 100.00s, trace 5976. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.017753913348416, 'next_transition': 6121}.
<a id="trace-6068"></a>
- 100.95s–100.95s (×1), actor 4, squad 0 (trace 6068): ReactToContact: cover and return fire. Knowledge: actor memory at 100.00s, trace 5976. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.017753913348416, 'next_transition': 6121}.
<a id="trace-6069"></a>
- 100.95s–100.95s (×1), actor 4, squad 0 (trace 6069): Reorganise complete: known contact. Knowledge: actor memory at 100.00s, trace 5976. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.017753913348416, 'next_transition': 6121}.
<a id="trace-6121"></a>
<a id="trace-6127"></a>
<a id="trace-6136"></a>
<a id="trace-6142"></a>
<a id="trace-6153"></a>
- 102.25s–104.25s (×5), actor 5, squad 0 (trace 6121): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 5977. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1424417893257581, 'next_transition': 6127}.
<a id="trace-6156"></a>
- 104.30s–104.30s (×1), actor 4, squad 0 (trace 6156): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 100.00s, trace 5976. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1424034459649415, 'next_transition': 6190}.
<a id="trace-6157"></a>
- 104.30s–104.30s (×1), actor 4, squad 0 (trace 6157): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 5976. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1424034459649415, 'next_transition': 6190}.
<a id="trace-6190"></a>
<a id="trace-6268"></a>
<a id="trace-6272"></a>
<a id="trace-6295"></a>
<a id="trace-6308"></a>
<a id="trace-6319"></a>
<a id="trace-6326"></a>
<a id="trace-6337"></a>
<a id="trace-6345"></a>
<a id="trace-6417"></a>
- 104.75s–110.25s (×10), actor 5, squad 0 (trace 6190): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 5977. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7103242145491155, 'next_transition': 6268}.
<a id="trace-768"></a>
- 110.55s–110.55s (×1), actor 5, squad 0 (events line 768): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5711712495195947, 'next_transition': 6425}.
<a id="trace-6421"></a>
- 110.55s–110.55s (×1), actor 5, squad 0 (trace 6421): renew committed intent (75 s lifetime). Knowledge: actor memory at 110.55s, trace 6421. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5711712495195947, 'next_transition': 6425}.
<a id="trace-6425"></a>
<a id="trace-6463"></a>
<a id="trace-6477"></a>
<a id="trace-6482"></a>
<a id="trace-6493"></a>
<a id="trace-6570"></a>
<a id="trace-6587"></a>
<a id="trace-6592"></a>
<a id="trace-6600"></a>
<a id="trace-6611"></a>
<a id="trace-6619"></a>
<a id="trace-6626"></a>
<a id="trace-6633"></a>
<a id="trace-6707"></a>
<a id="trace-6715"></a>
<a id="trace-6718"></a>
<a id="trace-6729"></a>
- 110.75s–122.75s (×17), actor 5, squad 0 (trace 6425): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.55s, trace 6421. Next observer evidence: {'until': 112.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.9447910916947668, 'next_transition': 6463}.

## Net delivery

108 matched order/radio deliveries; 101 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.528s; maximum 5.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1645: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1646: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1647: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1648: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1649: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2297: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2303: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2304: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2305: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2306: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2307: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2308: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2509: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2513: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2515: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2516: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2517: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2518: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2519: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2520: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 2671: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 2672: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 2702: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 2704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2705: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2706: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 2707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2708: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2709: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 2710: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2711: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2712: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 2713: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 2969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 2970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2971: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2972: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 2973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2974: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2975: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 2976: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 2977: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 2978: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 2979: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3191: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3192: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3194: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3195: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3196: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3197: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3198: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3199: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3549: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3550: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3552: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3553: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 3554: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3555: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3556: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3557: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 3721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3722: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3723: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 3724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3725: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3726: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 3727: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3728: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3729: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 3730: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 3970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 3971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3972: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3973: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 3974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 3975: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 3976: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 3977: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 3978: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 3979: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 3980: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4152: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4153: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4155: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4156: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4157: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4158: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4159: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4160: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4557: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4559: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4560: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4562: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4563: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4564: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4565: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4566: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4567: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4718: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4719: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4720: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 4721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4722: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4723: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 4724: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4725: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4726: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4727: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5283: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5284: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5285: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 5286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5287: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5288: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5289: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5290: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5291: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5292: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5473: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5474: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5475: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 5476: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5477: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5478: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5479: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5480: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5481: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5482: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5812: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5813: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5814: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 5815: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5816: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5817: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 5818: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5819: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5820: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5821: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5976: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5977: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5978: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5979: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5980: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 5981: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5982: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5983: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5984: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 6202: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6203: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 6204: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 6205: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6206: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 6207: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6208: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6209: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 6210: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 6348: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6349: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6350: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6351: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6352: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 6353: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6354: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6355: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 6356: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.55s leader 5, trace 6421: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6506: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6507: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6508: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6509: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6510: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 6511: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6512: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6513: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6514: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6641: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6642: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6643: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6644: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6645: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6646: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6647: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6754: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6755: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6756: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6757: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6758: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6759: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6760: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6870: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6871: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6872: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6873: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6874: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6875: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 6876: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 6987: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 6988: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 6989: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 6990: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6991: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6992: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 6993: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7107: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 7108: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7109: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7110: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7111: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7112: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 7113: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7229: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 7230: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7231: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7232: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7233: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7234: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 7235: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7347: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7348: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7349: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7350: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7351: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7352: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 7353: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7472: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 7473: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7474: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7475: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7476: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7477: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 7478: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 7602: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 7603: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 7604: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 7605: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 7606: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 7607: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 7608: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 7714: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 7715: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 7716: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 7717: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 7718: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 7719: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 7720: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 7837: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 7838: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 7839: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 7840: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 7841: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 7842: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 7843: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 7961: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 7962: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 7963: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 7964: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 7965: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 7966: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 7967: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 8081: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 8082: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 8083: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 8084: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 8085: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 8086: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 8087: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 8206: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 8207: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 8208: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 8209: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 8210: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 8211: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 8212: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 8320: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 8321: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 8322: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 8323: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 8324: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 8325: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 8326: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 8440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 8441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 8442: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 8443: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 8444: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 8445: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 8446: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 8573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 8574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 8575: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 8576: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 8577: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 8578: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 8579: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 8688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 8689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 8690: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 8691: estimate 1.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 8692: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 8693: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 8694: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 8811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 8812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 8813: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 8814: estimate 1.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 8815: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 8816: estimate 1.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 8817: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 8935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 8936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 8937: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 8938: estimate 1.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 8939: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 8940: estimate 1.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 8941: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 9055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 9056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 9057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 9058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 9059: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 9060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 9061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 9181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 9182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 9183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 9184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 9185: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 9186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 9187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 9295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 9296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 9297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 9298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 9299: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 9300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 9301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 9423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 9424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 9425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 9426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 9427: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 9428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 9429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 9544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 9545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 9546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 9547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 9548: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 9549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 9550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 9668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 9669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 9670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 9671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 9672: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 9673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 9674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 9786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 9787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 9788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 9789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 9790: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 9791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 9792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 9904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 9905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 9906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 9907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 9908: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 9909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 9910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 10035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 10036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 10037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 10038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 10039: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 10040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 10041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 10153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 10154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 10155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 10156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 10157: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 10158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 10159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 10273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 10274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 10275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 10276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 10277: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 10278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 10279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 10396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 10397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 10398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 10399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 10400: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 10401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 10402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 10516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 10517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 10518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 10519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 10520: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 10521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 10522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 10645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 10646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 10647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 10648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 10649: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 10650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 10651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 10757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 10758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 10759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 10760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 10761: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 10762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 10763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 10884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 10885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 10886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 10887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 10888: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 10889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 10890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 11005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 11006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 11007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 11008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 11009: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 11010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 11011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 11132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 11133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 11134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 11135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 11136: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 11137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 11138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 11250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 11251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 11252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 11253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 11254: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 11255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 11256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 11367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 11368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 11369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 11370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 11371: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 11372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 11373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 11500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 11501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 11502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 11503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 11504: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 11505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 11506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 11619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 11620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 11621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 11622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 11623: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 11624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 11625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 11740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 11741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 11742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 11743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 11744: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 11745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 11746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 11864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 11865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 11866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 11867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 11868: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 11869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 11870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 11984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 11985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 11986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 11987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 11988: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 11989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 11990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 12113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 12114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 12115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 12116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 12117: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 12118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 12119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 12228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 12229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 12230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 12231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 12232: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 12233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 12234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 12353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 12354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 12355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 12356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 12357: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 12358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 12359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 12474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 12475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 12476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 12477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 12478: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 12479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 12480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Rook killed in action
- 1: Reed killed in action
- 1: Bram incapacitated
- 1: Tern incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
