# After-action report

Run: `.local/plan015/review-c4/diagnostics/D08/battle-107-1789666262748156485`

## Battle summary

**Azure** · 240 s · 551 shots.

### Turning points

- 4.5s, squad 4: contact (events line 67). First recorded contact.
- 10.9s, squad 0: assault ([trace 4864](#trace-4864)). 236.6s, squad 0: objective receipts and no known enemy: consolidate on remaining threats.

### Squads

- **0** — No platoon intent recorded; chose took cover and returned fire, prepared a base of fire and 1 further drill types; consolidated; 548 shots, 0/8 lost.
- **1** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 0 shots, 0/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 3 shots, 1/1 lost.
- **7** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 0 shots, 0/1 lost.

### Decisions and attribution

At 10.9s, squad 0 chose prepared a base of fire ([trace 4416](#trace-4416)), followed by 24 shots and 0 own casualties; estimate 1.5 against 0 distinct squad-reported contacts; At 6.6s, squad 0 chose took cover and returned fire ([trace 2156](#trace-2156)), followed by 5 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 9](#trace-9)), followed by 3 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Communication

173 matched deliveries (mean 0.74s, max 1.35s); 0 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 4.45s, squad 4, contact, evidence events line 67: First recorded contact; .
- 10.90s, squad 0, assault, evidence 4864: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 236.6s, squad 0: objective receipts and no known enemy: consolidate on remaining threats.

## Appendix: command timeline

<a id="trace-9"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 9): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 6.4, 'shots': 3, 'casualties': 0, 'mean_displacement': 7.556303104327981, 'next_transition': 2156}.
<a id="trace-10"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 10): traveling overwatch. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 6.4, 'shots': 3, 'casualties': 0, 'mean_displacement': 7.556303104327981, 'next_transition': 2156}.
<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 6.4, 'shots': 3, 'casualties': 0, 'mean_displacement': 7.556303104327981, 'next_transition': 2156}.
<a id="trace-2156"></a>
- 6.55s–6.55s (×1), actor 0, squad 0 (trace 2156): ReactToContact: cover and return fire. Knowledge: actor memory at 5.00s, trace 2071. Next observer evidence: {'until': 9.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.5523718756550955, 'next_transition': 4326}.
<a id="trace-2157"></a>
- 6.55s–6.55s (×1), actor 0, squad 0 (trace 2157): bounding overwatch. Knowledge: actor memory at 5.00s, trace 2071. Next observer evidence: {'until': 9.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.5523718756550955, 'next_transition': 4326}.
<a id="trace-2158"></a>
- 6.55s–6.55s (×1), actor 0, squad 0 (trace 2158): new contact inside 100 m. Knowledge: actor memory at 5.00s, trace 2071. Next observer evidence: {'until': 9.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.5523718756550955, 'next_transition': 4326}.
<a id="trace-4326"></a>
- 9.30s–9.30s (×1), actor 0, squad 0 (trace 4326): Fixing. Knowledge: actor memory at 5.00s, trace 2071. Next observer evidence: {'until': 10.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4414}.
<a id="trace-4414"></a>
- 10.90s–10.90s (×1), actor 0, squad 0 (trace 4414): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 10.00s, trace 4346. Next observer evidence: {'until': 15, 'shots': 24, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6114}.
<a id="trace-4416"></a>
- 10.90s–10.90s (×1), actor 0, squad 0 (trace 4416): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 10.00s, trace 4346. Next observer evidence: {'until': 15, 'shots': 24, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6114}.
<a id="trace-4864"></a>
- 10.90s–10.90s (×1), actor 0, squad 0 (trace 4864): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 10.00s, trace 4346. Next observer evidence: {'until': 15, 'shots': 24, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6114}.
<a id="trace-4865"></a>
- 10.90s–10.90s (×1), actor 0, squad 0 (trace 4865): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 10.00s, trace 4346. Next observer evidence: {'until': 15, 'shots': 24, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6114}.
<a id="trace-5979"></a>
- 10.90s–10.90s (×1), actor 0, squad 0 (trace 5979): Assaulting. Knowledge: actor memory at 10.00s, trace 4346. Next observer evidence: {'until': 15, 'shots': 24, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6114}.
<a id="trace-6114"></a>
- 15.10s–15.10s (×1), actor 0, squad 0 (trace 6114): support established: element delivered fire on threat area. Knowledge: actor memory at 15.00s, trace 6047. Next observer evidence: {'until': 19.4, 'shots': 40, 'casualties': 0, 'mean_displacement': 0.5884532015566645, 'next_transition': 6286}.
<a id="trace-6115"></a>
<a id="trace-6286"></a>
<a id="trace-6593"></a>
<a id="trace-6833"></a>
<a id="trace-7077"></a>
<a id="trace-7378"></a>
<a id="trace-7625"></a>
<a id="trace-7935"></a>
<a id="trace-8181"></a>
<a id="trace-8416"></a>
- 15.10s–74.55s (×10), actor 0, squad 0 (trace 6115): support established: next buddy rush, at most five seconds. Knowledge: actor memory at 15.00s, trace 6047. Next observer evidence: {'until': 19.4, 'shots': 40, 'casualties': 0, 'mean_displacement': 0.5884532015566645, 'next_transition': 6286}.
<a id="trace-8732"></a>
- 81.75s–81.75s (×1), actor 0, squad 0 (trace 8732): matching arrivals at flank: form assault line at five metre intervals. Knowledge: actor memory at 80.00s, trace 8650. Next observer evidence: {'until': 87, 'shots': 47, 'casualties': 0, 'mean_displacement': 2.4525579678144136, 'next_transition': 9071}.
<a id="trace-9071"></a>
- 87.15s–87.15s (×1), actor 0, squad 0 (trace 9071): phase-line receipt: lift base fire before objective crossing. Knowledge: actor memory at 85.00s, trace 8984. Next observer evidence: {'until': 89, 'shots': 17, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9121}.
<a id="trace-9072"></a>
- 87.15s–87.15s (×1), actor 0, squad 0 (trace 9072): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 85.00s, trace 8984. Next observer evidence: {'until': 89, 'shots': 17, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9121}.
<a id="trace-9073"></a>
- 87.15s–87.15s (×1), actor 0, squad 0 (trace 9073): PhaseLine. Knowledge: actor memory at 85.00s, trace 8984. Next observer evidence: {'until': 89, 'shots': 17, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9121}.
<a id="trace-9121"></a>
- 89.00s–89.00s (×1), actor 0, squad 0 (trace 9121): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 85.00s, trace 8984. Next observer evidence: {'until': 96, 'shots': 5, 'casualties': 0, 'mean_displacement': 3.240581147876287, 'next_transition': 9430}.
<a id="trace-9430"></a>
- 96.15s–96.15s (×1), actor 0, squad 0 (trace 9430): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 95.00s, trace 9358. Next observer evidence: {'until': 97, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9441}.
<a id="trace-9441"></a>
- 97.15s–97.15s (×1), actor 0, squad 0 (trace 9441): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 95.00s, trace 9358. Next observer evidence: {'until': 103.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 1.6931126448423328, 'next_transition': 9684}.
<a id="trace-9442"></a>
- 97.15s–97.15s (×1), actor 0, squad 0 (trace 9442): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 95.00s, trace 9358. Next observer evidence: {'until': 103.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 1.6931126448423328, 'next_transition': 9684}.
<a id="trace-9684"></a>
- 103.95s–103.95s (×1), actor 0, squad 0 (trace 9684): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 100.00s, trace 9586. Next observer evidence: {'until': 104.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9692}.
<a id="trace-9692"></a>
- 104.95s–104.95s (×1), actor 0, squad 0 (trace 9692): support permission paused. Knowledge: actor memory at 100.00s, trace 9586. Next observer evidence: {'until': 106.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9769}.
<a id="trace-9769"></a>
- 106.45s–106.45s (×1), actor 0, squad 0 (trace 9769): support permission resumed. Knowledge: actor memory at 105.00s, trace 9693. Next observer evidence: {'until': 114, 'shots': 4, 'casualties': 0, 'mean_displacement': 3.369346833431235, 'next_transition': 10030}.
<a id="trace-9770"></a>
- 106.45s–106.45s (×1), actor 0, squad 0 (trace 9770): fresh objective contact: delivered buddy fire permits short assault bound. Knowledge: actor memory at 105.00s, trace 9693. Next observer evidence: {'until': 114, 'shots': 4, 'casualties': 0, 'mean_displacement': 3.369346833431235, 'next_transition': 10030}.
<a id="trace-10030"></a>
- 114.15s–114.15s (×1), actor 0, squad 0 (trace 10030): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 110.00s, trace 9918. Next observer evidence: {'until': 115, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0960847713284997, 'next_transition': 10055}.
<a id="trace-10055"></a>
- 115.10s–115.10s (×1), actor 0, squad 0 (trace 10055): support permission paused. Knowledge: actor memory at 115.00s, trace 10041. Next observer evidence: {'until': 116.6, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10126}.
<a id="trace-10126"></a>
- 116.75s–116.75s (×1), actor 0, squad 0 (trace 10126): support permission resumed. Knowledge: actor memory at 115.00s, trace 10041. Next observer evidence: {'until': 122, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.9841691990431892, 'next_transition': 10358}.
<a id="trace-10127"></a>
- 116.75s–116.75s (×1), actor 0, squad 0 (trace 10127): fresh objective contact: delivered buddy fire permits short assault bound. Knowledge: actor memory at 115.00s, trace 10041. Next observer evidence: {'until': 122, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.9841691990431892, 'next_transition': 10358}.
<a id="trace-10358"></a>
- 122.00s–122.00s (×1), actor 0, squad 0 (trace 10358): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 120.00s, trace 10277. Next observer evidence: {'until': 123, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10367}.
<a id="trace-10367"></a>
- 123.00s–123.00s (×1), actor 0, squad 0 (trace 10367): support permission paused. Knowledge: actor memory at 120.00s, trace 10277. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10375}.
<a id="trace-10375"></a>
- 123.25s–123.25s (×1), actor 0, squad 0 (trace 10375): support permission resumed. Knowledge: actor memory at 120.00s, trace 10277. Next observer evidence: {'until': 129.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 1.993148782156771, 'next_transition': 10590}.
<a id="trace-10376"></a>
- 123.25s–123.25s (×1), actor 0, squad 0 (trace 10376): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 120.00s, trace 10277. Next observer evidence: {'until': 129.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 1.993148782156771, 'next_transition': 10590}.
<a id="trace-10590"></a>
- 129.75s–129.75s (×1), actor 0, squad 0 (trace 10590): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 125.00s, trace 10468. Next observer evidence: {'until': 130.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10670}.
<a id="trace-10670"></a>
- 130.75s–130.75s (×1), actor 0, squad 0 (trace 10670): support permission paused. Knowledge: actor memory at 130.00s, trace 10597. Next observer evidence: {'until': 131.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10684}.
<a id="trace-10684"></a>
- 131.75s–131.75s (×1), actor 0, squad 0 (trace 10684): support permission resumed. Knowledge: actor memory at 130.00s, trace 10597. Next observer evidence: {'until': 135.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.49072904646588084, 'next_transition': 10911}.
<a id="trace-10685"></a>
- 131.75s–131.75s (×1), actor 0, squad 0 (trace 10685): fresh objective contact: delivered buddy fire permits short assault bound. Knowledge: actor memory at 130.00s, trace 10597. Next observer evidence: {'until': 135.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.49072904646588084, 'next_transition': 10911}.
<a id="trace-10911"></a>
- 135.75s–135.75s (×1), actor 0, squad 0 (trace 10911): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 135.00s, trace 10842. Next observer evidence: {'until': 136, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10918}.
<a id="trace-10918"></a>
- 136.00s–136.00s (×1), actor 0, squad 0 (trace 10918): support permission paused. Knowledge: actor memory at 135.00s, trace 10842. Next observer evidence: {'until': 138.4, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10940}.
<a id="trace-10940"></a>
- 138.40s–138.40s (×1), actor 0, squad 0 (trace 10940): support permission resumed. Knowledge: actor memory at 135.00s, trace 10842. Next observer evidence: {'until': 142.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.492189930803064, 'next_transition': 11123}.
<a id="trace-10941"></a>
- 138.40s–138.40s (×1), actor 0, squad 0 (trace 10941): fresh objective contact: delivered buddy fire permits short assault bound. Knowledge: actor memory at 135.00s, trace 10842. Next observer evidence: {'until': 142.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.492189930803064, 'next_transition': 11123}.
<a id="trace-11123"></a>
- 142.35s–142.35s (×1), actor 0, squad 0 (trace 11123): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 140.00s, trace 11030. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11131}.
<a id="trace-11131"></a>
- 143.35s–143.35s (×1), actor 0, squad 0 (trace 11131): support permission paused. Knowledge: actor memory at 140.00s, trace 11030. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11780597781299715, 'next_transition': 11147}.
<a id="trace-11147"></a>
- 144.35s–144.35s (×1), actor 0, squad 0 (trace 11147): support permission resumed. Knowledge: actor memory at 140.00s, trace 11030. Next observer evidence: {'until': 147.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24500070766798268, 'next_transition': 11358}.
<a id="trace-11148"></a>
- 144.35s–144.35s (×1), actor 0, squad 0 (trace 11148): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 140.00s, trace 11030. Next observer evidence: {'until': 147.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24500070766798268, 'next_transition': 11358}.
<a id="trace-11358"></a>
- 147.75s–147.75s (×1), actor 0, squad 0 (trace 11358): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 145.00s, trace 11256. Next observer evidence: {'until': 148.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11368}.
<a id="trace-11368"></a>
- 148.75s–148.75s (×1), actor 0, squad 0 (trace 11368): support permission paused. Knowledge: actor memory at 145.00s, trace 11256. Next observer evidence: {'until': 149.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11381}.
<a id="trace-11381"></a>
- 149.75s–149.75s (×1), actor 0, squad 0 (trace 11381): support permission resumed. Knowledge: actor memory at 145.00s, trace 11256. Next observer evidence: {'until': 153.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5315572769902362, 'next_transition': 11557}.
<a id="trace-11382"></a>
- 149.75s–149.75s (×1), actor 0, squad 0 (trace 11382): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 145.00s, trace 11256. Next observer evidence: {'until': 153.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5315572769902362, 'next_transition': 11557}.
<a id="trace-11557"></a>
- 153.85s–153.85s (×1), actor 0, squad 0 (trace 11557): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 150.00s, trace 11448. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11568}.
<a id="trace-11568"></a>
- 154.85s–154.85s (×1), actor 0, squad 0 (trace 11568): support permission paused. Knowledge: actor memory at 150.00s, trace 11448. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07843863095957908, 'next_transition': 11643}.
<a id="trace-11643"></a>
- 155.85s–155.85s (×1), actor 0, squad 0 (trace 11643): support permission resumed. Knowledge: actor memory at 155.00s, trace 11569. Next observer evidence: {'until': 158.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875338500661459, 'next_transition': 11788}.
<a id="trace-11644"></a>
- 155.85s–155.85s (×1), actor 0, squad 0 (trace 11644): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 155.00s, trace 11569. Next observer evidence: {'until': 158.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875338500661459, 'next_transition': 11788}.
<a id="trace-11788"></a>
- 158.60s–158.60s (×1), actor 0, squad 0 (trace 11788): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 155.00s, trace 11569. Next observer evidence: {'until': 159.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11799}.
<a id="trace-11799"></a>
- 159.60s–159.60s (×1), actor 0, squad 0 (trace 11799): support permission paused. Knowledge: actor memory at 155.00s, trace 11569. Next observer evidence: {'until': 160.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04368056461402477, 'next_transition': 11875}.
<a id="trace-11875"></a>
- 160.60s–160.60s (×1), actor 0, squad 0 (trace 11875): support permission resumed. Knowledge: actor memory at 160.00s, trace 11808. Next observer evidence: {'until': 163.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11972}.
<a id="trace-11876"></a>
- 160.60s–160.60s (×1), actor 0, squad 0 (trace 11876): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 160.00s, trace 11808. Next observer evidence: {'until': 163.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11972}.
<a id="trace-11972"></a>
- 163.45s–163.45s (×1), actor 0, squad 0 (trace 11972): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 160.00s, trace 11808. Next observer evidence: {'until': 164.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11984}.
<a id="trace-11984"></a>
- 164.45s–164.45s (×1), actor 0, squad 0 (trace 11984): support permission paused. Knowledge: actor memory at 160.00s, trace 11808. Next observer evidence: {'until': 165.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12061}.
<a id="trace-12061"></a>
- 165.45s–165.45s (×1), actor 0, squad 0 (trace 12061): support permission resumed. Knowledge: actor memory at 165.00s, trace 11996. Next observer evidence: {'until': 168.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500310446138846, 'next_transition': 12208}.
<a id="trace-12062"></a>
- 165.45s–165.45s (×1), actor 0, squad 0 (trace 12062): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 165.00s, trace 11996. Next observer evidence: {'until': 168.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500310446138846, 'next_transition': 12208}.
<a id="trace-12208"></a>
- 168.75s–168.75s (×1), actor 0, squad 0 (trace 12208): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 165.00s, trace 11996. Next observer evidence: {'until': 169.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12219}.
<a id="trace-12219"></a>
- 169.75s–169.75s (×1), actor 0, squad 0 (trace 12219): support permission paused. Knowledge: actor memory at 165.00s, trace 11996. Next observer evidence: {'until': 170.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.019685873107383085, 'next_transition': 12292}.
<a id="trace-12292"></a>
- 170.75s–170.75s (×1), actor 0, squad 0 (trace 12292): support permission resumed. Knowledge: actor memory at 170.00s, trace 12225. Next observer evidence: {'until': 173.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12391}.
<a id="trace-12293"></a>
- 170.75s–170.75s (×1), actor 0, squad 0 (trace 12293): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 170.00s, trace 12225. Next observer evidence: {'until': 173.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12391}.
<a id="trace-12391"></a>
- 173.60s–173.60s (×1), actor 0, squad 0 (trace 12391): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 170.00s, trace 12225. Next observer evidence: {'until': 174.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12401}.
<a id="trace-12401"></a>
- 174.60s–174.60s (×1), actor 0, squad 0 (trace 12401): support permission paused. Knowledge: actor memory at 170.00s, trace 12225. Next observer evidence: {'until': 175.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12478}.
<a id="trace-12478"></a>
- 175.60s–175.60s (×1), actor 0, squad 0 (trace 12478): support permission resumed. Knowledge: actor memory at 175.00s, trace 12409. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09472475946789204, 'next_transition': 12626}.
<a id="trace-12479"></a>
- 175.60s–175.60s (×1), actor 0, squad 0 (trace 12479): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 175.00s, trace 12409. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09472475946789204, 'next_transition': 12626}.
<a id="trace-12626"></a>
- 178.35s–178.35s (×1), actor 0, squad 0 (trace 12626): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 175.00s, trace 12409. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12638}.
<a id="trace-12638"></a>
- 179.35s–179.35s (×1), actor 0, squad 0 (trace 12638): support permission paused. Knowledge: actor memory at 175.00s, trace 12409. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12714}.
<a id="trace-12714"></a>
- 180.35s–180.35s (×1), actor 0, squad 0 (trace 12714): support permission resumed. Knowledge: actor memory at 180.00s, trace 12649. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12810}.
<a id="trace-12715"></a>
- 180.35s–180.35s (×1), actor 0, squad 0 (trace 12715): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 180.00s, trace 12649. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12810}.
<a id="trace-12810"></a>
- 183.20s–183.20s (×1), actor 0, squad 0 (trace 12810): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 180.00s, trace 12649. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12822}.
<a id="trace-12822"></a>
- 184.20s–184.20s (×1), actor 0, squad 0 (trace 12822): support permission paused. Knowledge: actor memory at 180.00s, trace 12649. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12900}.
<a id="trace-12900"></a>
- 185.20s–185.20s (×1), actor 0, squad 0 (trace 12900): support permission resumed. Knowledge: actor memory at 185.00s, trace 12836. Next observer evidence: {'until': 187.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09843750000000001, 'next_transition': 13043}.
<a id="trace-12901"></a>
- 185.20s–185.20s (×1), actor 0, squad 0 (trace 12901): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 185.00s, trace 12836. Next observer evidence: {'until': 187.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09843750000000001, 'next_transition': 13043}.
<a id="trace-13043"></a>
- 187.95s–187.95s (×1), actor 0, squad 0 (trace 13043): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 185.00s, trace 12836. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13056}.
<a id="trace-13056"></a>
- 188.95s–188.95s (×1), actor 0, squad 0 (trace 13056): support permission paused. Knowledge: actor memory at 185.00s, trace 12836. Next observer evidence: {'until': 189.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0390625, 'next_transition': 13070}.
<a id="trace-13070"></a>
- 189.95s–189.95s (×1), actor 0, squad 0 (trace 13070): support permission resumed. Knowledge: actor memory at 185.00s, trace 12836. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13229}.
<a id="trace-13071"></a>
- 189.95s–189.95s (×1), actor 0, squad 0 (trace 13071): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 185.00s, trace 12836. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13229}.
<a id="trace-13229"></a>
- 192.80s–192.80s (×1), actor 0, squad 0 (trace 13229): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 190.00s, trace 13137. Next observer evidence: {'until': 193.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13241}.
<a id="trace-13241"></a>
- 193.80s–193.80s (×1), actor 0, squad 0 (trace 13241): support permission paused. Knowledge: actor memory at 190.00s, trace 13137. Next observer evidence: {'until': 194.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13256}.
<a id="trace-13256"></a>
- 194.80s–194.80s (×1), actor 0, squad 0 (trace 13256): support permission resumed. Knowledge: actor memory at 190.00s, trace 13137. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13454}.
<a id="trace-13257"></a>
- 194.80s–194.80s (×1), actor 0, squad 0 (trace 13257): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 190.00s, trace 13137. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13454}.
<a id="trace-13454"></a>
- 197.30s–197.30s (×1), actor 0, squad 0 (trace 13454): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 195.00s, trace 13364. Next observer evidence: {'until': 197.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13464}.
<a id="trace-13464"></a>
- 197.55s–197.55s (×1), actor 0, squad 0 (trace 13464): support permission paused. Knowledge: actor memory at 195.00s, trace 13364. Next observer evidence: {'until': 198.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13477}.
<a id="trace-13477"></a>
- 198.55s–198.55s (×1), actor 0, squad 0 (trace 13477): support permission resumed. Knowledge: actor memory at 195.00s, trace 13364. Next observer evidence: {'until': 201.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13647}.
<a id="trace-13478"></a>
- 198.55s–198.55s (×1), actor 0, squad 0 (trace 13478): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 195.00s, trace 13364. Next observer evidence: {'until': 201.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13647}.
<a id="trace-13647"></a>
- 201.55s–201.55s (×1), actor 0, squad 0 (trace 13647): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 200.00s, trace 13562. Next observer evidence: {'until': 202.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13653}.
<a id="trace-13653"></a>
- 202.55s–202.55s (×1), actor 0, squad 0 (trace 13653): support permission paused. Knowledge: actor memory at 200.00s, trace 13562. Next observer evidence: {'until': 203.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13667}.
<a id="trace-13667"></a>
- 203.55s–203.55s (×1), actor 0, squad 0 (trace 13667): support permission resumed. Knowledge: actor memory at 200.00s, trace 13562. Next observer evidence: {'until': 206, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13868}.
<a id="trace-13668"></a>
- 203.55s–203.55s (×1), actor 0, squad 0 (trace 13668): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 200.00s, trace 13562. Next observer evidence: {'until': 206, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13868}.
<a id="trace-13868"></a>
- 206.05s–206.05s (×1), actor 0, squad 0 (trace 13868): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 205.00s, trace 13801. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13878}.
<a id="trace-13878"></a>
- 206.30s–206.30s (×1), actor 0, squad 0 (trace 13878): support permission paused. Knowledge: actor memory at 205.00s, trace 13801. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13889}.
<a id="trace-13889"></a>
- 207.30s–207.30s (×1), actor 0, squad 0 (trace 13889): support permission resumed. Knowledge: actor memory at 205.00s, trace 13801. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14060}.
<a id="trace-13890"></a>
- 207.30s–207.30s (×1), actor 0, squad 0 (trace 13890): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 205.00s, trace 13801. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14060}.
<a id="trace-14060"></a>
- 210.30s–210.30s (×1), actor 0, squad 0 (trace 14060): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 210.00s, trace 13988. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14067}.
<a id="trace-14067"></a>
- 211.30s–211.30s (×1), actor 0, squad 0 (trace 14067): support permission paused. Knowledge: actor memory at 210.00s, trace 13988. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14079}.
<a id="trace-14079"></a>
- 212.30s–212.30s (×1), actor 0, squad 0 (trace 14079): support permission resumed. Knowledge: actor memory at 210.00s, trace 13988. Next observer evidence: {'until': 214.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14219}.
<a id="trace-14080"></a>
- 212.30s–212.30s (×1), actor 0, squad 0 (trace 14080): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 210.00s, trace 13988. Next observer evidence: {'until': 214.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14219}.
<a id="trace-14219"></a>
- 214.80s–214.80s (×1), actor 0, squad 0 (trace 14219): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 210.00s, trace 13988. Next observer evidence: {'until': 215, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14240}.
<a id="trace-14240"></a>
- 215.05s–215.05s (×1), actor 0, squad 0 (trace 14240): support permission paused. Knowledge: actor memory at 215.00s, trace 14225. Next observer evidence: {'until': 216, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14303}.
<a id="trace-14303"></a>
- 216.05s–216.05s (×1), actor 0, squad 0 (trace 14303): support permission resumed. Knowledge: actor memory at 215.00s, trace 14225. Next observer evidence: {'until': 219, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14409}.
<a id="trace-14304"></a>
- 216.05s–216.05s (×1), actor 0, squad 0 (trace 14304): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 215.00s, trace 14225. Next observer evidence: {'until': 219, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14409}.
<a id="trace-14409"></a>
- 219.05s–219.05s (×1), actor 0, squad 0 (trace 14409): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 215.00s, trace 14225. Next observer evidence: {'until': 220, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14429}.
<a id="trace-14429"></a>
- 220.05s–220.05s (×1), actor 0, squad 0 (trace 14429): support permission paused. Knowledge: actor memory at 220.00s, trace 14417. Next observer evidence: {'until': 221, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14493}.
<a id="trace-14493"></a>
- 221.05s–221.05s (×1), actor 0, squad 0 (trace 14493): support permission resumed. Knowledge: actor memory at 220.00s, trace 14417. Next observer evidence: {'until': 223.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14631}.
<a id="trace-14494"></a>
- 221.05s–221.05s (×1), actor 0, squad 0 (trace 14494): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 220.00s, trace 14417. Next observer evidence: {'until': 223.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14631}.
<a id="trace-14631"></a>
- 223.55s–223.55s (×1), actor 0, squad 0 (trace 14631): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 220.00s, trace 14417. Next observer evidence: {'until': 223.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14641}.
<a id="trace-14641"></a>
- 223.80s–223.80s (×1), actor 0, squad 0 (trace 14641): support permission paused. Knowledge: actor memory at 220.00s, trace 14417. Next observer evidence: {'until': 224.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14654}.
<a id="trace-14654"></a>
- 224.80s–224.80s (×1), actor 0, squad 0 (trace 14654): support permission resumed. Knowledge: actor memory at 220.00s, trace 14417. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14821}.
<a id="trace-14655"></a>
- 224.80s–224.80s (×1), actor 0, squad 0 (trace 14655): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 220.00s, trace 14417. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14821}.
<a id="trace-14821"></a>
- 227.80s–227.80s (×1), actor 0, squad 0 (trace 14821): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 225.00s, trace 14724. Next observer evidence: {'until': 228.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14830}.
<a id="trace-14830"></a>
- 228.80s–228.80s (×1), actor 0, squad 0 (trace 14830): support permission paused. Knowledge: actor memory at 225.00s, trace 14724. Next observer evidence: {'until': 229.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14844}.
<a id="trace-14844"></a>
- 229.80s–229.80s (×1), actor 0, squad 0 (trace 14844): support permission resumed. Knowledge: actor memory at 225.00s, trace 14724. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15043}.
<a id="trace-14845"></a>
- 229.80s–229.80s (×1), actor 0, squad 0 (trace 14845): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 225.00s, trace 14724. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15043}.
<a id="trace-15043"></a>
- 232.30s–232.30s (×1), actor 0, squad 0 (trace 15043): assault buddy holds accepted endpoint and covers the other pair on objective. Knowledge: actor memory at 230.00s, trace 14953. Next observer evidence: {'until': 232.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15053}.
<a id="trace-15053"></a>
- 232.55s–232.55s (×1), actor 0, squad 0 (trace 15053): support permission paused. Knowledge: actor memory at 230.00s, trace 14953. Next observer evidence: {'until': 233.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15066}.
<a id="trace-15066"></a>
- 233.55s–233.55s (×1), actor 0, squad 0 (trace 15066): support permission resumed. Knowledge: actor memory at 230.00s, trace 14953. Next observer evidence: {'until': 236.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15236}.
<a id="trace-15067"></a>
- 233.55s–233.55s (×1), actor 0, squad 0 (trace 15067): no fresh objective contact: stationary buddy overwatch permits short assault bound. Knowledge: actor memory at 230.00s, trace 14953. Next observer evidence: {'until': 236.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15236}.
<a id="trace-15236"></a>
- 236.55s–236.55s (×1), actor 0, squad 0 (trace 15236): objective receipts and no known enemy: consolidate on remaining threats. Knowledge: actor memory at 235.00s, trace 15151. Next observer evidence: {'until': 240, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.937658968958159, 'next_transition': None}.

## Net delivery

173 matched order/radio deliveries; 0 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.735s; maximum 1.350s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 2071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 2072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 2073: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 2074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 2075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 2076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 2077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 2078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 13, trace 2079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 14, trace 2080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 2081: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 63, trace 2082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 4346: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 4347: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 4348: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 4349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 4350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 4351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 4352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 4353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 13, trace 4354: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 14, trace 4355: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 4356: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 63, trace 4357: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 6047: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 6048: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 6049: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 6050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 6051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 6052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 6053: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 6054: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 13, trace 6055: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 14, trace 6056: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 6057: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 63, trace 6058: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 6399: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 6400: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 6401: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 6402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 6403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 6404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 6405: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 6406: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 13, trace 6407: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 14, trace 6408: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 6409: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 63, trace 6410: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 6526: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 6527: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 6528: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 6529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 6530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 6531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 6532: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 6533: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 13, trace 6534: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 14, trace 6535: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 6536: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 63, trace 6537: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 6749: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6750: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6751: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 6752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6755: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6756: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 13, trace 6757: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 14, trace 6758: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6759: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 63, trace 6760: estimate 1.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 6973: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 6974: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 6975: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 6976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 6977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 6978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 6979: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 6980: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 13, trace 6981: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 14, trace 6982: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 6983: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 63, trace 6984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 7189: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 7190: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 7191: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 7192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7195: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7196: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 13, trace 7197: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 14, trace 7198: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7199: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 63, trace 7200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 7304: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 7305: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 7306: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 7307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7310: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7311: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 13, trace 7312: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 14, trace 7313: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7314: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 63, trace 7315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 7528: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7529: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 7530: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 7531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7534: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7535: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 13, trace 7536: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 14, trace 7537: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7538: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 63, trace 7539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 7746: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 7747: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 7748: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 7749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 7750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 7751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 7752: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 7753: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 13, trace 7754: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 14, trace 7755: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 7756: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 63, trace 7757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 7869: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 7870: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 7871: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 7872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 7873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 7874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 7875: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 7876: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 13, trace 7877: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 14, trace 7878: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 7879: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 63, trace 7880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 8091: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 8092: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 8093: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 8094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 8095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 8096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 8097: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 8098: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 13, trace 8099: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 14, trace 8100: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 8101: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 63, trace 8102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 8306: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 8307: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 8308: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 8309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 8310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 8311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 8312: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 8313: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 13, trace 8314: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 14, trace 8315: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 8316: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 63, trace 8317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 8527: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 8528: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 8529: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 8530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 8531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 8532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 8533: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 8534: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 13, trace 8535: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 14, trace 8536: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 8537: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 63, trace 8538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 8650: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 8651: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 8652: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 8653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 8654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 8655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 8656: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 8657: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 13, trace 8658: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 14, trace 8659: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 8660: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 63, trace 8661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 8984: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 8985: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 8986: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 8987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 8988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 8989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 8990: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 8991: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 13, trace 8992: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 14, trace 8993: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 8994: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 63, trace 8995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 9232: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 9233: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 9234: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 9235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 9236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 9237: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 9238: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 9239: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 13, trace 9240: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 14, trace 9241: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 9242: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 63, trace 9243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 9358: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 9359: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 9360: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 9361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 9362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 9363: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 9364: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 9365: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 13, trace 9366: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 14, trace 9367: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 9368: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 63, trace 9369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 9586: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 9587: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 9588: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 9589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 9590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 9591: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 9592: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 9593: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 13, trace 9594: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 14, trace 9595: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 9596: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 63, trace 9597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 9693: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 9694: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 9695: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 9696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 9697: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 9698: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 9699: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 9700: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 13, trace 9701: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 14, trace 9702: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 9703: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 63, trace 9704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 9918: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 9919: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 9920: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 9921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 9922: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 9923: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 9924: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 9925: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 13, trace 9926: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 14, trace 9927: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 9928: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 63, trace 9929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 10041: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 10042: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 10043: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 10044: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 10045: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 10046: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 10047: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 10048: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 13, trace 10049: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 14, trace 10050: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 10051: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 63, trace 10052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 10277: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 10278: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 10279: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 10280: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 10281: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 10282: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 10283: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 10284: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 13, trace 10285: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 14, trace 10286: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 10287: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 63, trace 10288: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 10468: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 10469: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 10470: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 10471: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 10472: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 10473: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 10474: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 10475: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 13, trace 10476: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 14, trace 10477: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 10478: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 63, trace 10479: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 10597: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 10598: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 10599: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 10600: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 10601: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 10602: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 10603: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 10604: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 13, trace 10605: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 14, trace 10606: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 10607: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 63, trace 10608: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 10842: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 10843: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 10844: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 10845: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 10846: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 10847: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 10848: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 10849: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 13, trace 10850: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 14, trace 10851: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 63, trace 10852: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 11030: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 11031: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 11032: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 11033: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 11034: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 11035: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 11036: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 11037: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 13, trace 11038: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 14, trace 11039: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 63, trace 11040: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 11256: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 11257: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 11258: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 11259: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 11260: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 11261: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 11262: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 11263: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 13, trace 11264: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 14, trace 11265: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 63, trace 11266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 11448: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 11449: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 11450: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 11451: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 11452: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 11453: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 11454: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 11455: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 13, trace 11456: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 14, trace 11457: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 63, trace 11458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 11569: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 11570: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 11571: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 11572: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 11573: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 11574: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 11575: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 11576: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 13, trace 11577: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 14, trace 11578: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 63, trace 11579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 11808: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 11809: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 11810: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 11811: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 11812: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 11813: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 11814: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 11815: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 13, trace 11816: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 14, trace 11817: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 63, trace 11818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 11996: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 11997: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 11998: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 11999: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 12000: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 12001: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 12002: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 12003: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 13, trace 12004: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 14, trace 12005: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 63, trace 12006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 12225: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 12226: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 12227: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 12228: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 12229: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 12230: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 12231: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 12232: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 13, trace 12233: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 14, trace 12234: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 63, trace 12235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 12409: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 12410: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 12411: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 12412: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 12413: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 12414: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 12415: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 12416: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 13, trace 12417: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 14, trace 12418: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 63, trace 12419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 12649: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 12650: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 12651: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 12652: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 12653: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 12654: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 12655: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 12656: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 13, trace 12657: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 14, trace 12658: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 63, trace 12659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 12836: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 12837: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 12838: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 12839: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 12840: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 12841: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 12842: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 12843: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 13, trace 12844: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 14, trace 12845: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 63, trace 12846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 13137: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 13138: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 13139: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 13140: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 13141: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 13142: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 13143: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 13144: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 13, trace 13145: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 14, trace 13146: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 63, trace 13147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 13364: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 13365: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 13366: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 13367: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 13368: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 13369: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 13370: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 13371: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 13, trace 13372: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 14, trace 13373: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 63, trace 13374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 0, trace 13562: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 13563: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 13564: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 13565: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 13566: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 13567: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 13568: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 13569: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 13, trace 13570: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 14, trace 13571: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 63, trace 13572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 0, trace 13801: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 13802: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 13803: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 13804: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 13805: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 13806: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 13807: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 13808: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 13, trace 13809: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 14, trace 13810: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 63, trace 13811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 0, trace 13988: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 13989: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 13990: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 13991: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 13992: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 13993: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 13994: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 13995: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 13, trace 13996: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 14, trace 13997: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 63, trace 13998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 0, trace 14225: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 14226: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 14227: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 14228: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 14229: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 14230: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 14231: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 14232: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 13, trace 14233: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 14, trace 14234: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 63, trace 14235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 0, trace 14417: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 14418: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 2, trace 14419: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 14420: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 14421: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 14422: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 14423: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 14424: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 13, trace 14425: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 14, trace 14426: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 63, trace 14427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 0, trace 14724: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 14725: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 2, trace 14726: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 14727: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 14728: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 14729: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 14730: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 14731: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 13, trace 14732: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 14, trace 14733: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 63, trace 14734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 0, trace 14953: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 14954: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 2, trace 14955: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 14956: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 14957: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 14958: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 14959: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 14960: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 13, trace 14961: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 14, trace 14962: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 63, trace 14963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 0, trace 15151: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 15152: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 2, trace 15153: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 15154: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 15155: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 15156: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 15157: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 15158: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 13, trace 15159: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 14, trace 15160: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 63, trace 15161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 0, trace 15599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 15600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 2, trace 15601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 15602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 15603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 15604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 15605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 15606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 13, trace 15607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 14, trace 15608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 63, trace 15609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Voss killed in action

## Outcome attribution

- 236.55s, evidence 15236: objective receipts and no known enemy: consolidate on remaining threats. Following evidence: {'until': 240, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.937658968958159, 'next_transition': None}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
