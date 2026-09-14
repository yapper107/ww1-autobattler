# First playable: Fractured Works / Deathmatch

## What is playable

Prepare four eight-person Azure squads, then watch them fight four Ember squads: 32 soldiers per side, 64 total. Each squad has one sergeant, one corporal, and six other soldiers. Only Squad 1 on each side equips a machine gunner; the other three squads use riflemen in that slot. In Squad 1, two of those six places are the attached lieutenant and platoon sergeant. Choose a shared doctrine, approach, rifle/machine-gun composition, and random seed. Ember uses a fixed balanced doctrine and one machine gun per platoon. Each squad has its own command chain and deployment lane.

The 340 by 300 metre battlefield has four deployment lanes, twenty six-metre screen pieces forming staggered courts, four enterable buildings on the approaches, cross-facing walls, longer MG positions, and 136 separated individual cover objects. The centre is ordinary terrain with no capture point. The handcrafted layout is generated in Unreal from engine primitives. No purchased or external art assets are required.

The C++ simulator calculates the battle to completion before playback. The observer can see every unit, but each soldier's AI uses personal sightings and delayed reports. Rifles require a recognised personal firing solution; support machine guns may suppress a recently seen or reported position. Select a soldier to inspect that distinction.

## Controls

| Control | Action |
| --- | --- |
| Click preparation options | Cycle doctrine, approach, equipment, or seed |
| Run Battle / Space | Simulate and begin playback; pause or resume during playback |
| Click a soldier or its number | Inspect health, suppression, action, and personal contacts |
| Click the timeline | Seek to a recorded time and pause |
| Left / Right arrow | Seek backward / forward five seconds and pause |
| Tab / speed button | Cycle 0.1x, 0.25x, 0.5x, 1x, 2x, and 4x playback |
| Comma / Period | Step backward / forward 0.01 seconds and pause |
| R / Restart | Replay the existing battle from the start |
| N / Return to Preparation | Edit preparation and run another battle |
| WASD | Pan relative to the current camera angle |
| Q / E | Orbit left / right |
| PageUp / PageDown | Tilt toward overhead / toward ground level |
| Mouse wheel | Zoom; minimum view width is about 5.5 times closer than before |
| C | Centre the camera on the selected soldier |
| Home | Reset the camera |
| Exit button / close window | Quit |

Changing settings is possible only in preparation. Running the same seed and settings again in the same session reuses the last recorded battle immediately; changing settings requires a new calculation. Replay controls do not change the recorded outcome. Repeating identical settings and seed gives the same simulation in the same build; cross-compiler or cross-version determinism is not guaranteed.

## Combat rules in this version

- Soldiers navigate around cover, enter four two-floor buildings through doorways, and use internal stairs to reach the upper floor at 3.2 metres. Both floors have actual window openings and reserved firing positions. Walls, sills, stairs, and the upper floor slab block bullets; the stairwell stays open. Tan barriers labelled LOW are 1.15 m waist-high cover; grey walls are 2.2 m high. Low cover supports a 0.9 m crouched hitbox, then a 1.85 m standing hitbox when the soldier rises to fire.
- Sight stimuli are sampled at 5 Hz, then held until the soldier reacts. Individual base reaction times range from 0.25 to 0.60 seconds; suppression and severe wounds increase the delay. Orders, contact reports, readiness reports, and recognising incoming fire have separate delayed reactions. Soldiers continue their existing action while processing information. Damage and physical impairment still apply immediately. Lost contacts retain their last observed position for up to 10 seconds.
- General decisions run every 0.6 seconds. Movement and replay positions carry elevation; observation heights, body collision, near-miss suppression, and friendly-fire corridors account for it. Unreachable order targets are moved to nearby reachable ground instead of becoming silent stay-put orders. Stalled movement retries its path every two seconds. Active cover cycles and hit/suppression responses run at 20 Hz, alongside movement; swept 3D projectiles update at 200 Hz.
- Rifles and machine guns have different rates of fire, spread, reload intervals, and movement speeds.
- Soldiers acquire a target before firing: baseline 0.45 seconds for rifles and 0.65 seconds for machine guns. Suppression multiplies that time by up to four and widens both horizontal and vertical dispersion. Severe wounds also slow aiming. Movement, loss of a firing solution, and heavy suppression clear aim; switching targets starts acquisition again.
- Suppression can veto leaving cover: cautious soldiers wait below 30%, balanced below 45%, aggressive below 60%. Critical suppression (80%+) prevents firing. These are prototype tuning values.
- Bullets have velocity (rifle 720 m/s, machine gun 680 m/s), gravity, horizontal/vertical spread, and swept collision against finite-height cover and moving soldier cylinders. These speeds are prototype tuning values. Damage occurs on arrival, including possible friendly hits. Each bullet can suppress each nearby enemy once; walls occlude near-miss suppression.
- Soldiers reserve a sheltered position and an observation/firing position using personal contacts and friendly reservations. The default is to watch over low cover or through a window, or stand at the first clear firing angle around a tall wall. Firing a shot does not automatically send them back into hiding. Recognised suppression above 40% / 52% / 65% (cautious / balanced / aggressive), or a magazine/belt reload, sends them into shelter. They resume below 25% / 35% / 50%, after a short 0.7-second recovery interval. Old wounds alone do not veto exposure.
- Overwatch machine guns fire bursts of up to 18 rounds at roughly 10 rounds per second, separated by a one-second firing pause while still observing. They use 60-round belts and take four seconds to reload. They can suppress a recently seen or reported position for up to six seconds without tracking hidden movement. Suppression can interrupt firing.
- Rifle horizontal spread is now 0.047 radians (previously 0.032); MG spread is 0.080 (previously 0.060). Baseline vertical spread increased from 0.008 to 0.014, and suppression adds further error in both axes. These are prototype tuning values; damage remains unchanged.
- Known flanking threats, stalled movement, or an expired position commitment permit relocation. Cover commitments include travel time. Window positions on either floor compete with outdoor cover, accounting for protection, firing angles, orders, and friendly reservations. Stair routes cannot be replaced by diagonal movement through walls or across an unsupported upper floor.
- Soldiers can interrupt flank, regroup, lane-clearance, and rear-position movement to seek nearby shelter after recognising incoming fire. Emergency cover need not offer a firing angle. They hold protected cover and resume the assignment after danger passes; old wounds alone do not trigger endless retreat. Quiet hold orders prefer nearby protected ground.
- Soldiers fire only while stationary in an engaging state. Recognized enemy exposure interrupts ordinary advance and regroup orders before damage is required; soldiers seek local protection or withdraw when no suitable unoccupied cover exists. Deliberate flank/bound movement retains its own safety checks.
- Any surviving wounded soldier remains able to fight. After injury recognition and delayed reports, leaders give them **WOUNDED SUPPORT** orders. A useful protected firing position is retained; otherwise they seek spaced supporting positions, preferring roughly six metres behind the healthy front. They may move closer when old rear cover is blind, and can use building windows on either floor. An arbitrary rear rally point is no longer the fallback. Wounded soldiers remain excluded from assault cohesion checks; wounded squad sergeants and corporals can still command.
- A soldier at zero health becomes incapacitated or killed and stops acting.
- Deathmatch ends when one force is eliminated, after resolving remaining projectiles. At the 360-second limit, the side with more surviving soldiers wins; equal survivors draw. Wounded soldiers above zero health count as survivors. Position never awards points.
- Recorded snapshots at 5 Hz and projectile flight samples allow seeking without rerunning AI. Bright observer tracers follow recorded flights at a fixed screen width, with a 0.022-second trail and a 0.18-second fading afterimage. The enlarged moving head and impact flashes make firing readable at normal speed; use 0.1x or 0.01-second stepping to inspect travel. The trail shows only the path already travelled; the fading afterimage is a visibility aid, not a bullet continuing after collision.
- An event report is saved under the Windows build's `Saved/BattleReports/`. It is a readable report, not a reloadable full replay file. Replays remain in memory for the current session.

## First command hierarchy

- Squad sergeant: chooses a protected low-cover overwatch position and a sector for the machine gunner (or a rifleman if no MG is equipped), then tasks the corporal with the rifle group's advance. The squad sergeant releases the advance after a readiness report or a 28-second fallback wait.
- Corporal: turns that task into individual movement orders, calls distant soldiers back to regroup, and pauses for a separated rifle group. A pause above a 10-metre average separation now issues catch-up orders above seven metres and ends once the average gap falls below seven, avoiding the previous gap between the pause and rally thresholds. The squad sergeant and NCO still fight and use cover themselves.
- Orders take 0.75 seconds per hop, followed by the recipient's reaction time (base reaction multiplied by 1.25 before suppression/wound modifiers). Rifle-group orders travel squad sergeant → corporal → soldier; the support weapon receives its order directly from the squad sergeant. Tactical policies receive friendly state, mapped terrain, and the commander's own knowledge—not hidden enemy positions.
- Contact reports are sent every two seconds and take 0.75 seconds per hop, generally soldier → corporal → squad sergeant, with recipient reaction time at each step. Reports retain the original sighting time, expire after ten seconds, and never count as direct visibility. An overwatch MG may use a fresh recognised report for area suppression.
- The squad sergeant replans every four seconds; the corporal manages execution every two seconds. Unchanged orders are retained to reduce movement churn. Local suppression and unsafe cover can override a movement assignment.
- At each squad sergeant check, a progress monitor measures the healthy assault group's distance toward its current waypoint or search/contact sector. A 2.5-metre improvement resets the movement timer; merely changing orders does not. Stalls trigger a reachable alternate approach, or a withdrawal if the approaches are too dangerous according to received reports. Recovery attempts have an 18-second minimum interval and discourage repeating the same destination. Initial deadlines are 18 seconds normally, 26 while regrouping, 30 under reported fire, and 40 with recent reported support fire. An entirely wounded rear group is exempt. Being at the map centre gives no exemption.
- Support reports now include rounds fired and retain transmission/reaction delays. Recent reported firing gives the rifle group more time, but cannot postpone recovery indefinitely. A stalled squad also repositions a healthy support gunner that has not reported recent fire. The useful-overwatch check below now qualifies this activity signal; it still does not prove that shots suppressed an enemy.
- A squad sergeant casualty causes a three-second command disruption. The corporal takes over, or another surviving soldier if necessary. Existing assignments continue; the replacement retains its own knowledge, without inheriting the dead leader's unseen information. Messages still in transit from dead senders are discarded; already heard messages may finish processing.
- Map labels begin with the squad number: for example, 2:MG8 is squad two's gunner. LT marks the lieutenant, PSG the platoon sergeant, SGT a squad sergeant, CPL their corporal assistant, and MG a machine gunner. At overview zoom, command ranks and the selected soldier retain labels; nearby labels are separated with leader lines. Zoom in for everyone's labels. Select a soldier to see its role, received order, issuer, aim progress, pending reaction, personal sightings, and received reports. The squad command panel shows leadership and the latest reported overwatch readiness.

## Squad responses to dangerous approaches

Squads initially use separate approach lanes and stagger rifle positions with roughly 2.4 metres of lateral spacing. Local cover reservations also require more room between soldiers.

Soldiers remember where they experienced incoming fire, then relay those locations up the chain. These reports fade over 18 seconds; the squad sergeant does not read hidden enemy locations or a global danger map. The squad sergeant checks the intended approach and chooses a quieter northern or southern detour, accounting for nearby friendly approach assignments. The machine gun keeps its support task while the rifle group flanks. If neither flank looks safe, the squad receives pull-back orders and regroups before trying again. Orders remain subject to transmission and reaction delays.

The command panel shows the current manoeuvre, reported danger, progress state, seconds since measured movement, and recovery count. The event report records stalled-plan revisions. These are prototype rules on flat terrain, not a full tactical planner; an unobserved route may still be dangerous, and playtesting is still needed to assess tactical balance.

## Scope limits

This now includes a first squad-level chain of command with delayed orders, reports, and succession. Command above platoon level, leader personalities beyond the selected doctrine, persistent campaigns, recruitment, fatigue, progression, magic, and destruction remain future milestones. Message transport uses a fixed delay plus individual reaction times; radios, range limits, misunderstood reports, and faction-specific command styles are not yet modelled.

The exterior terrain remains flat; soldiers can move vertically on mapped building stairs. Perception, aiming, projectile collision, and cover checks account for floor elevation, body/eye height, and stance. Buildings have two fixed floors and open roofs for observation. Press **F** to hide/show the upper walls and floor for a ground-floor cutaway; this changes only rendering. Shelter checks sample both shoulders and the centre at torso/head height; cover does not grant a damage-reduction bonus or invulnerability. Crouching uses a compressed placeholder mesh; wall peeking is a short step-out rather than a skeletal lean animation. There are no hills, jumping/climbing through windows, doors that open or close, penetration, ricochet, or destruction. Stairs use a continuous navigation slope with visible stepped geometry. Buildings remain prototype geometry. Wounds are abstract health changes rather than anatomical injuries. Character graphics are placeholders, and there is no audio yet.

The observer view is omniscient; the inspector shows each soldier's separate knowledge. Friendly fire remains physically possible. Shooters recognise friendly positions after a reaction delay, estimate their movement, and assess the projected firing corridor including dispersion. Machine guns use a wider safety margin. Shooters prefer another clear target or hold fire when a friendly is at risk. Sustained or repeated blockage totalling one second triggers a delayed clearance report. The squad sergeant/corporal orders blocking soldiers aside, keeps rear-guard destinations clear, and shares lane reports with neighbouring squad sergeants. Information can be delayed or stale; this does not grant friendly immunity.

## Useful playtest questions

- Can you follow where contact begins and why soldiers stop, move, or retreat?
- Do the preparation choices produce understandable differences?
- Is the fight interesting to watch at normal speed and at 2x?
- Does the inspector explain behavior that initially seems strange?
- Which missing behavior is most important to the intended fantasy?

## Coordinated movement and personal shelter

Healthy rifle elements split into teams A and B while a healthy corporal and fresh contact information are available. The squad sergeant plans short bounds along a reachable route. Both elements establish positions first; movement is released only after a member of the covering element has received its order, reached a protected firing position, and has a mapped angle toward the approach or known threats. Teams exchange roles on arrival. A failed bound or prolonged readiness wait falls back to the normal maneuver planner, with a retry delay. Casualties, wounds, changed approaches, and progress recovery can cancel the bound. Personal danger and friendly-lane clearance can still override it.

A building receives up to two designated healthy riflemen with useful window angles, while the rest of the squad retains its assault and support roles. Friendly squads avoid claiming the same building. When the squad is not engaged, the assignment expires after 32 seconds and has a 16-second reassignment delay; losses, a withdrawal, or the squad moving away release it sooner. Wounded support and emergency shelter can also use buildings. This is a support-team assignment, not room-by-room clearing.

Support readiness reports describe actual deployment, recent contact information, location, blockage, and rounds fired. The squad sergeant checks whether that reported position can cover the current approach or fresh known threats. Persistent blockage, stale contact information, or a useless angle prompts a support relocation, with an eight-second problem window and a sixteen-second retry interval. Useful reported support qualifies the extended squad-progress deadline. The squad panel shows support status, the current moving team, completed bounds, and window-team size.

Friendly traffic shares doorway and stair passage reservations. Earlier requests receive priority; soldiers already inside finish first. Others seek a nearby holding point, preferring protection, then resume their original assignment. A stopped passage owner clears to a holding point via a valid path, including finishing the stair connection. Passage reservations are released after exit or casualty. This coordinates friendly traffic only; hidden enemies are never supplied to this scheduler.

Soldiers no longer need heavy suppression before reacting to open-ground exposure. Light recognized incoming fire, or a visible enemy while stopped without nearby shelter, triggers a cover search. Valid wall peeks and low-cover observation retain their existing shelter and normal suppression thresholds. Safety searches can use protective positions without firing angles. If no shelter is reachable, the soldier crouches and withdraws; a blocked emergency cover approach is reconsidered after 1.5 seconds without progress. Perception and reaction delays still apply. Brief exposure while crossing or yielding remains possible.

## Hold-and-engage tuning

The current map replaces eight repeated central buildings with four outlying two-floor strongpoints. Staggered outdoor fire bases face the opposing front, short broken walls screen lateral movement, and the centre and outer edges offer distinct approaches. Deployment remains mirrored at 32 versus 32. This is a handcrafted greybox with flat outdoor terrain; stairs and upper floors retain their physical elevation.

Soldiers keep useful cover while fresh known contacts remain in their firing angle. Routine advance/hold order updates preserve that position. Explicit flank, withdrawal, lane-clearance, moving-bound, window, and wounded-support changes can still move them. Actual suppression causes ducking and recovery at the same position, rather than requiring a new destination.

A squad with at least two protected firing positions facing fresh known enemies enters **HOLD & ENGAGE**, shown in the command panel. It suspends new automatic bounds while exchanging useful fire; a released short crossing finishes before the group settles. Ordinary incoming fire no longer immediately triggers a quieter flank: danger must stay above the doctrine threshold across planning checks for six seconds, or fourteen while engaged, and maneuver changes have a thirty-second cooldown. A productive engagement gets sixty-five seconds before the progress monitor revises a stalled attack. A useful building team can retain its position beyond the previous timer while its squad is engaged.

Protection now requires nearby physical obstruction in the direction of the threat, tested at the torso/head and both shoulders. An obstruction more than three metres away does not count as local shelter. This prevents soldiers treating the wrong side of a barrier, or open ground behind a distant obstruction, as a valid cover position. Peeking remains deliberately exposed and returns to the remembered shelter under suppression.

## Battlefield scale and sight limits

The current map doubles both dimensions of the previous battlefield, giving four times the area. Deployment moves from x = +/-70 metres to +/-140 metres, and squad lane spacing increases from 24 to 48 metres. Twenty solid, six-metre-high screen pieces interrupt long views from the ground and upper floors. Their staggered ends provide central detours and broader northern/southern routes. Four buildings sit on the flanking approaches. Cover placement leaves clearance around buildings and the large blockers. Rock masses are impassable and stop bullets; exterior ground remains flat.

Default battle time is six minutes to allow the longer approach. Until contact reports arrive, squad sergeants assign their support weapon a sector forty metres ahead instead of requiring an unobstructed view all the way across the map. The preparation approach setting also uses wider flank destinations.

Enemy spotting is limited to less than 70 metres for ordinary soldiers and less than 95 metres for equipped machine gunners, measured in 3D. These ranges are unchanged. Perception samples the target's exposed body and requires a clear physical sight line; a taller observer does not see through a six-metre obstacle. Scanning is currently omnidirectional, with no facing cone, weather, or darkness model. Sensory observations still pass through individual reaction delays. The inspector displays sight range; the observer camera sees all units independently of their knowledge. Lost contacts retain their last observed position briefly, with ordinary memory expiring after ten seconds; MG area fire uses sightings/reports no older than six seconds.

## Deathmatch search and individual cover

Squad sergeants search separate mapped sectors when they have no fresh contacts. On arrival, their search advances through and beyond the centre, then around other lanes. Searches use map knowledge and friendly positions; fresh observations and received reports supply enemy locations. A contact approach stops roughly 32 metres short of the reported position. A squad already fighting from useful cover holds its firing positions, and routine regroup orders no longer cancel a soldier's useful cover memory. Deliberate flank, withdrawal and firing-lane clearance orders remain available.

Short low blocks (1.2 metres high) and standing wall fragments (1.9 metres high) provide separated personal shelter; existing reservations prevent soldiers choosing occupied positions. Larger low walls remain available to support weapons. Obstacles are currently static and solid; this pass provides varied routes and engagements, not destructible terrain.

The mouse wheel now changes zoom proportionally down to 0.055 of the full map view (previously 0.3). Click a soldier and press C to centre on them before zooming in. Home restores the map view.

## Platoon command and rank markers

Each side still has 32 soldiers in four squads. Squad 1 contains an attached lieutenant and platoon sergeant in two former rifleman slots. Each squad is led by a sergeant with a corporal assistant. The attached staff follow their host squad, use cover and fight, and are excluded from its assault formation, MG replacement and squad succession. If the lieutenant is lost, the platoon sergeant assumes command after three seconds; a surviving squad leader can succeed if both are lost.

Squad situation reports travel to the platoon sergeant, who relays received reports to the lieutenant. Reports include the squad's position, strength, engagement, support activity, danger and a recent contact. Both hops take 0.75 seconds plus the recipient's reaction delay. The lieutenant chooses a supporting squad already in contact and an available squad for a north/south flank. Routes are evaluated against received danger and known enemy sightlines; hidden enemy positions never enter the policy. Commands travel down with their own delay, expire after 55 seconds and allow local danger/withdrawal to take priority. Existing orders continue through command disruption, and successors retain their own knowledge.

Rank tags remain visible at overview zoom. Gold helmet markers distinguish platoon staff: one bar for LT, three stripes for PSG. White helmet stripes identify squad NCOs: three for SGT, two for CPL. The inspector names the role, and the platoon panel shows support/flank squads and fresh received report counts.

The battlefield is 340 × 300 metres, with covered outer routes and 136 individual cover objects. Deathmatch now lasts up to six minutes. Elimination still ends it early; surviving headcount decides at the limit, with equal counts a draw.


## Contact reassessment and continued search

Squad leaders now estimate local fighting strength from their own recognized contacts and received reports no older than ten seconds within 85 metres of the point soldier. Nearby squad members contribute less when wounded or suppressed; a friendly MG contributes more. Each known enemy counts as 1.25 ordinary soldiers to allow for uncertainty. Enemy health, hidden reinforcements and unseen deaths are not available to this policy. These are temporary tactical weights, not the planned persistent soldier stat system.

A favorable ratio of at least 1.7 for eight seconds permits a short advance to protected cover, provided reported fire is low. The existing fireteams supply covering fire and bounds; moving positions prefer separate cover, with a soldier staying put if no suitable place is found. A ratio below 0.7 for six seconds permits a withdrawal to reachable cover farther from known threats. Routes reject close crossings of reported enemies and excessive reported fire. Plans have cooldowns; new resistance or heavy fire cancels a press. Equal fights can still settle into sustained firing. Safe cover and available support remain constraints, so numerical advantage is not an unconditional charge.

When contact expires, riflemen release obsolete cover commitments on a changed mission. The MG follows the searching group rather than indefinitely preserving an old overwatch position; window teams leave empty sectors. The outward search skips sectors already passed during fighting. If the corporal is dead or known wounded, the sergeant leads the search. A squad made entirely of wounded survivors can take short search steps while quiet, preferring separated nearby shelter, and resumes its wounded support behavior upon renewed contact. Incoming suppression still takes priority over moving.

The squad panel shows PRESS TO COVER, WITHDRAW, or SEARCH / ADVANCE and the local estimated strength. The event record includes strength-based orders and contact-quiet search resumption. Search means investigating mapped sectors or following reported contacts; it does not reveal the surviving enemy roster. Estimates, timing and retreat coordination remain prototype behavior for playtesting.


## Coordinated plans and offline investigation

The squad panel now shows Search, Establish Fire, Hold/Suppress, Prepare Movement, Bound, Withdraw or Regroup with a plan ID. Productive fire and support do not expire into automatic repositioning. Equivalent orders retain cover; movement commitments allow completion before refreshing a moving formation anchor. Emergency shelter stays on the current floor where possible, and actual movement/passage waits count as progress toward an assigned cover position.

A press needs ready, active covering fire and an eight-second prepared opportunity: a different protected approach, observed withdrawal, or reduced received fire while contact and friendly suppression continue. Numbers alone cannot trigger the move. One fireteam moves while the other covers, and MGs can cover the first stage of withdrawal. Local danger and newly reported resistance can cancel execution.

Battle reports are saved automatically and can be investigated with the tools in `docs/BATTLE_LAB.md`. Geometry uses explicit revisions and stable obstacle/cover IDs; actual destructible structures remain future work.


## Rifle maneuver and known machine-gun positions

Rifle squads can prepare lateral covered flanks up to 28 metres away with eight seconds of sustained opportunity and covering fire. Two sheltered riflemen may cover the maneuver. Platoon support assignments retain their firing role. Reported mobility, suppression and MG equipment let the lieutenant select a lightly engaged rifle squad for an envelopment while retaining pinned groups and useful MG anchors. Platoon orders use covered stages within 35 metres. Enemy machine guns are recognized only through visibility and normal reaction/report transport; these contacts receive higher planning priority and are identified in diagnostics.


## Movement interrupted by fire

Squads retain blocked movement objectives and hold until support/pressure improves or a different protected route is prepared. Eight seconds of sustained readiness is required for resumption; elapsed retry timers alone do not release movement. Delayed, order-specific reports tell leaders when soldiers abandon an advance for shelter. Late reports about obsolete orders are ignored by movement policy. Blocked status reaches platoon command, support can reposition, and emergency withdrawals/searches remain available. The inspector shows BLOCKED / HOLD.


## Suppression persistence

Suppression recovers at 0.15 per second instead of 0.19. With no further incoming hits or near misses, full suppression takes about 6.7 seconds to clear (previously 5.3), and about 3.2 seconds to fall below the balanced doctrine's 0.52 duck threshold (previously 2.5), before reaction/decision delays. Continued incoming fire replenishes suppression. These are prototype tuning values, inspired by the sustained covering-fire/flanking window described in the Brothers in Arms: Road to Hill 30 manual, not measured timings from that game.


## Initiative and persistent planning

Leaders retain uncertain enemy tracks for up to roughly two minutes, with faster confidence decay after passing the position. Locally observing the uncertainty patch empty for three seconds clears a track; occluded patches remain uncertain. Reports retain observation times and cleared positions resist obsolete positive reports. Immediate rifle targeting remains short-lived: two seconds after personal loss of sight, or six seconds for assigned rifle overwatch/bound-cover suppression.

Only soldiers recognized below 55 health receive wounded maneuver restrictions. Both sides have independently configurable doctrine. Squad candidates compare holding, left/right flanks, closing, withdrawal, and the platoon's consolidation/envelopment intent. A current executable move persists to arrival, failure or a safety interruption. Protected movement prepares for two seconds; exposed assaults require eight continuous seconds of observed, reported covering fire on the primary overlooking position. Current pressure and matched execution-failure reports can still pause movement; failed destinations are remembered.

Platoon command assigns support, main effort, reserve and consolidation roles using received squad situations. Casualties, blocked/engaged changes and completed stages can trigger replanning; unchanged orders are retained. Squad planning reacts to meaningful knowledge changes, with bounded periodic reassessment and explicit preparation/execution deadlines. Emergency shelter, ducking and friendly-fire holds remain individual decisions.
