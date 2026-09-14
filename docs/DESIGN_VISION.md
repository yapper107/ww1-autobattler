# GAME PROJECT — MASTER CONTEXT / DESIGN VISION

I am designing a large-scale, persistent-army tactical autobattler/management game. Treat everything below as the current project vision. Help me refine, prototype, design, and eventually implement this game. Do not assume every detail is final; challenge ideas when there is a clear technical or design reason to do so, but preserve the core vision.

## 1. HIGH-LEVEL CONCEPT

The game is a military management/autobattler built around approximately 50v50 to 100v100 battles, potentially becoming larger later.

The player DOES NOT directly control soldiers during combat.

Instead, the player:

* Recruits soldiers.
* Equips them.
* Organizes them into units.
* Chooses officers.
* Develops soldiers and officers.
* Chooses tactics/doctrine.
* Manages reserves.
* Manages injuries and fatigue.
* Prepares the army for campaigns.
* Makes strategic decisions between battles.

Once combat begins, the player's army fights completely autonomously.

The player's officers make tactical decisions based on their personalities, abilities, experience, available information, doctrine, current orders, and battlefield conditions.

The fundamental fantasy is:

"You build the army. Your officers command the battle. Your soldiers try to survive it."

The player should feel responsible for what happens without directly controlling what happens.

---

# 2. THREE PRIMARY GAMEPLAY LAYERS

The game has three major layers:

## BUILD

Between campaigns, the player manages the military organization.

The player can:

* Recruit soldiers.
* Purchase equipment.
* Replace losses.
* Equip individual soldiers.
* Train soldiers.
* Promote soldiers.
* Select officers.
* Organize squads and larger formations.
* Manage reserves.
* Develop doctrine/tactics.
* Purchase or unlock weapons/equipment.
* Prepare for the next campaign.

Soldiers are persistent characters rather than disposable units.

They have:

* Names.
* Appearance.
* Equipment.
* Rank.
* Experience.
* Skills.
* Traits.
* Injuries.
* Fatigue.
* Battle history.
* Campaign history.
* Relationships/cohesion.
* Potentially medals/decorations.

The player should become attached to individual soldiers and officers.

---

# 3. CAMPAIGN LAYER

Once a campaign begins, the player becomes logistically constrained.

The player cannot freely return to the normal marketplace and purchase whatever they want.

The army enters the campaign with:

* Soldiers.
* Reserves.
* Officers.
* Weapons.
* Equipment.
* Supplies.
* Specialists.

Losses matter.

Soldiers can become:

* Killed.
* Wounded.
* Exhausted.
* Temporarily unavailable.
* Permanently injured.

The player rotates tired or wounded soldiers out and replaces them with reserve personnel.

Reinforcements during campaigns are limited and may occur through events.

Examples:

* A reinforcement convoy arrives.
* New recruits are assigned.
* A specialist is transferred to the army.
* An elite unit temporarily joins.
* Equipment is captured.
* A supply convoy is destroyed.
* A local volunteer force joins.
* A rare officer becomes available.

The player generally cannot simply request exactly what they want.

Campaigns should create attrition.

A force that begins a campaign with 100 excellent soldiers may finish with a mixture of surviving veterans, replacements, wounded personnel, battlefield promotions, and inexperienced recruits.

Campaigns may contain branching missions.

Winning or losing individual battles does not necessarily immediately end the campaign.

Retreat can sometimes be strategically correct.

Actions in one mission can influence later missions.

Example:

Capturing an enemy supply depot might provide supplies.

Destroying enemy artillery might make later missions easier.

Failing to capture a bridge might force another route.

---

# 4. PERSISTENT SOLDIERS

Soldiers should become emergent characters.

Possible attributes include:

* Marksmanship
* Awareness
* Reaction time
* Courage
* Discipline
* Stamina
* Initiative
* Weapon proficiency
* Medical ability
* Leadership
* Aggression
* Intelligence/tactical ability

Progression should not simply be "+5 damage."

Veterans should behave differently.

Examples:

A veteran might:

* Find cover faster.
* React to contact faster.
* Identify threats better.
* Remain functional while suppressed.
* Follow orders more reliably.
* Make better independent decisions.
* Communicate information more accurately.

Soldiers can develop traits through experience.

Examples:

* Battle Hardened
* Quick Eye
* Aggressive
* Cautious
* Squad Loyal
* Steady Under Fire
* Poor Initiative
* Natural Leader

Soldiers can potentially form relationships and squad cohesion.

Keeping soldiers together across multiple campaigns may increase their effectiveness.

Losing a longtime squad leader should potentially affect morale.

---

# 5. COMMAND HIERARCHY

Each army has an actual AI command hierarchy.

A rough baseline for approximately 100 soldiers is:

GENERAL
|
+-- SUB-COMMANDER A
|       |
|       +-- Squad
|       +-- Squad
|       +-- Squad
|
+-- SUB-COMMANDER B
|
+-- SUB-COMMANDER C
|
+-- SUB-COMMANDER D

Each sub-commander controls a section of the army.

The hierarchy continues downward until approximately eight-person squads.

A baseline squad might contain:

* 1 officer/squad leader
* 1 sergeant/NCO
* approximately 6 other soldiers

Exact structures can vary by faction.

The officer and sergeant should not necessarily perform identical functions.

For example:

Officer:

* Tactical decision-making.
* Interprets higher-level orders.
* Determines squad objectives.

Sergeant:

* Handles execution.
* Maintains discipline.
* Assigns soldiers to immediate tasks.
* Maintains squad cohesion.

If an officer dies, the sergeant may assume command.

If both die, another soldier may have to assume command depending on rank, experience, leadership, and initiative.

---

# 6. INFORMATION IS NOT OMNISCIENT

This is a CORE SYSTEM.

AI agents should NOT automatically know the true state of the battlefield.

The simulation knows everything.

Individual soldiers do not.

Information travels upward.

Orders travel downward.

Example:

Soldier spots enemy
->
Soldier's knowledge updated
->
Soldier reports enemy
->
Squad leadership learns about enemy
->
Sub-commander receives report
->
General potentially receives report

Information can be:

* Delayed.
* Incorrect.
* Incomplete.
* Outdated.
* Misinterpreted.
* Lost entirely.

If an enemy moves after being observed, soldiers may continue believing the enemy occupies their previous position.

Different soldiers/officers can have different mental models of the battlefield.

This creates opportunities for:

* Reconnaissance.
* Communication systems.
* Scouts.
* Radios.
* Magic.
* Electronic warfare.
* Deception.
* Illusions.
* Stealth.

Officers must make decisions based on what THEY KNOW rather than accessing the authoritative game state.

---

# 7. OFFICER AI

Officers are extremely important characters.

They should NOT simply provide passive stat bonuses.

Officers actually make decisions.

Possible officer attributes:

* Aggression.
* Caution.
* Tactical intelligence.
* Initiative.
* Adaptability.
* Leadership.
* Communication.
* Defensive ability.
* Offensive ability.
* Risk tolerance.
* Experience.

Different officers should approach identical situations differently.

Example:

An aggressive officer might:

* Establish suppression.
* Immediately attempt a flank.
* Assault aggressively.

A cautious officer might:

* Establish defensive positions.
* Gather additional information.
* Determine enemy strength.
* Advance slowly.

Neither personality should automatically be superior.

Officers can improve through experience.

Veteran command structures should behave noticeably better than inexperienced ones.

Command casualties should matter.

If a commander dies:

* Subordinates continue existing orders.
* Coordination may deteriorate.
* Succession occurs.
* A replacement assumes command.
* Information may need to be reconstructed.
* New orders eventually propagate.

Individual squads can continue functioning while higher-level command is disrupted.

---

# 8. FACTION DIFFERENCES

There will likely be multiple factions and/or races.

Different factions can have fundamentally different military organizations.

Faction differences should NOT primarily be simple numerical bonuses.

Examples:

Professional army:

* Smaller units.
* Many NCOs.
* Excellent decentralized command.
* Good individual initiative.

Mass/conscript army:

* Larger units.
* Fewer officers.
* Poor individual initiative.
* Strong while command remains intact.
* Severe degradation when officers die.

Machine faction:

* Extremely rapid information sharing.
* Excellent coordination.
* Potentially predictable doctrine.
* Vulnerable to destruction of command/network nodes.

Warrior culture:

* Excellent individual initiative.
* Strong fighters.
* Weak centralized coordination.
* Officer casualties less damaging.

Other factions can use completely different command structures.

Army sizes do not necessarily have to be identical.

For example:

96 elite professional soldiers

versus

150 poorly trained mass infantry

could be balanced.

---

# 9. POSSIBLE SETTING

The current preferred direction is an ORIGINAL fantasy/retrofuturistic military setting rather than Star Wars, historical WWI, or historical WWII.

The setting may resemble approximately 1930s–1960s military technology combined with magic and fictional technological development.

Think:

* Rifles.
* Machine guns.
* Mortars.
* Artillery.
* Tanks.
* Radios.
* Aircraft.
* Fortifications.
* Automatic weapons.

Combined with:

* Magic.
* Magical materials.
* Magical communication.
* Wards/barriers.
* Magical reconnaissance.
* Illusions.
* Magical weapons.
* Supernatural races.
* Technology enhanced by magic.

The world should NOT simply be "WWII but with wizards."

It should be a completely fictional world with its own nations, races, cultures, politics, technology, equipment, and military doctrine.

One possible worldbuilding premise:

The world is experiencing its first truly industrialized magical war.

Magic existed previously, but industrialization has recently allowed magical effects to be manufactured, standardized, amplified, weaponized, and deployed on an enormous scale.

Technology and doctrine are changing faster than military institutions can adapt.

This allows older traditional officers and younger innovative officers to approach warfare differently.

Magic should generally interact with existing systems rather than simply functioning as "spells that deal damage."

Examples:

* Magical smoke/fog.
* Wards providing temporary cover.
* Illusions creating false battlefield information.
* Magical reconnaissance.
* Communication interference.
* Detection.
* Anti-armor magic.
* Magical engineering.
* Healing/medical magic, if appropriate.
* Enhanced ammunition.

Magic users may function as military specialists rather than every soldier being a wizard.

---

# 10. BATTLE PHILOSOPHY

The player DOES NOT control the battle once it begins.

No RTS micromanagement.

No selecting soldiers and clicking enemies.

No ordering individual soldiers behind specific pieces of cover.

The player's decisions happened before the battle.

The player's officers and soldiers execute those decisions.

This creates tension because the player must trust the organization they built.

A loss should make the player think:

"Why did my army fail?"

rather than:

"I didn't click fast enough."

---

# 11. PRE-SIMULATED BATTLES

This is another CORE TECHNICAL PRINCIPLE.

Battles should ideally be simulated BEFORE they are rendered.

Separate:

SIMULATION:
"What actually happened?"

from

PRESENTATION:
"Show me what happened."

The authoritative battle simulator determines:

* Movement.
* Perception.
* Decisions.
* Orders.
* Communication.
* Shooting.
* Projectiles.
* Hits.
* Injuries.
* Death.
* Suppression.
* Morale.
* Cover.
* Destruction.
* Terrain changes.
* Tactical decisions.
* Victory/defeat.

After simulation, a battle record/replay is produced.

The graphics engine then renders that record.

The renderer DOES NOT decide battle outcomes.

This allows expensive AI calculations without requiring them to execute at 60 FPS alongside graphics.

---

# 12. BATTLE RECORD / REPLAY SYSTEM

Battle simulation produces something conceptually similar to:

BattleRecord
InitialWorldState
SoldierStates
MovementTracks
ProjectileEvents
WeaponEvents
PerceptionEvents
CommunicationEvents
CommandEvents
AnimationEvents
DestructionEvents
CasualtyEvents
FinalWorldState

Example:

00:17.310
Soldier 31 detects Enemy 41.

00:18.002
Soldier 31 reports contact.

00:19.140
Squad leader orders squad into cover.

00:21.731
Enemy 41 fires.

00:21.982
Projectile impacts wall.

00:23.114
Squad begins suppression.

03:47.281
Officer orders second squad to flank.

The graphics engine replays these events.

The player should potentially be able to:

* Pause.
* Rewind.
* Fast-forward.
* Slow motion.
* Free-camera.
* Follow individual soldiers.
* Follow officers.
* Watch from soldier POV.
* Review what a particular soldier knew at a specific moment.

Battles can be saved and watched later.

---

# 13. PROJECTILE SIMULATION

Projectiles should be actually simulated.

However, thousands of bullets should NOT necessarily become full physics-engine actors.

The custom simulator can use lightweight projectile data.

For example:

Projectile:

* Position.
* Velocity.
* Mass.
* Drag.
* Penetration.
* Projectile type.
* Owner.

Projectile simulation determines:

trajectory
->
collision
->
material interaction
->
penetration/ricochet
->
damage
->
suppression

Different projectile classes can use different simulation complexity.

Examples:

* Rifle bullets.
* Machine-gun rounds.
* Shotgun pellets.
* Artillery.
* Mortars.
* Rockets.
* Tank shells.
* Magical projectiles.

The simulation can potentially operate at different update rates for different systems.

---

# 14. VARIABLE SIMULATION FREQUENCY

Not everything needs to update at the same frequency.

Possible conceptual structure:

Projectiles:
High-frequency/sub-stepped as necessary.

Movement:
Approximately 20–30 Hz.

Collision/cover:
Approximately 10–20 Hz.

Perception:
Approximately 5–10 Hz.

Individual soldier decisions:
Approximately 2–5 Hz and/or event-driven.

Squad leadership:
Approximately 1–2 Hz and/or event-driven.

Higher command:
Lower-frequency and primarily event-driven.

These numbers are NOT final.

The goal is to avoid performing expensive AI calculations unnecessarily.

Because simulation is offline/precomputed, it does not need to remain synchronized with real-world time.

A ten-minute battle could theoretically take only several seconds to calculate.

---

# 15. COVER

Cover is important.

Soldiers should understand their environment rather than simply running toward enemies.

Cover evaluation may consider:

* Protection from known enemies.
* Material.
* Thickness.
* Visibility.
* Distance.
* Exposure.
* Nearby allies.
* Firing opportunities.
* Current orders.
* Suppression.
* Route safety.

Soldiers should choose cover based partly on what enemies they KNOW about.

Unknown enemies should not magically influence their decisions.

---

# 16. DESTRUCTIBLE ENVIRONMENTS

Destruction is important for selling the warfare fantasy.

However, completely arbitrary voxel destruction everywhere may be unnecessarily expensive.

Prefer controlled/descrete structural destruction.

Objects can have structural sections/nodes.

Example:

Wall:

* Material.
* Thickness.
* Structural health.
* Penetration resistance.
* Support connections.
* Current damage state.

Large impacts can destroy sections.

Destroyed sections affect:

* Line of sight.
* Cover.
* Navigation.
* Firing positions.
* Movement.
* Structural support.

Unsupported structures can collapse.

Rubble can potentially become new cover.

Destruction should have approximately three conceptual levels:

LEVEL 1 — COSMETIC

Examples:

* Bullet decals.
* Tiny debris.
* Sparks.
* Dirt impacts.

No gameplay effect.

Renderer only.

LEVEL 2 — TACTICAL

Examples:

* Doors destroyed.
* Windows destroyed.
* Small wall sections damaged.
* Trees destroyed.
* Sandbags destroyed.

Simulation tracks these when they affect gameplay.

LEVEL 3 — STRUCTURAL

Examples:

* Walls collapse.
* Buildings collapse.
* Bridges destroyed.
* Major craters.

Simulation tracks these authoritatively.

---

# 17. GRAPHICS ENGINE

Current preferred direction:

UNREAL ENGINE 5

Potentially use Unreal for:

* Rendering.
* Lighting.
* Animation.
* Audio.
* VFX.
* Environment creation.
* Character rendering.
* Destruction presentation.
* Replay visualization.
* Camera systems.

Potentially use a custom C++ simulation library for authoritative battle resolution.

Conceptually:

CAMPAIGN / LOADOUT
|
v
CUSTOM BATTLE SIMULATOR
|
v
BATTLE RECORD
|
v
UNREAL ENGINE PRESENTATION

The simulation should ideally remain sufficiently independent from Unreal that core battle logic is not tightly coupled to rendering.

---

# 18. DATA-ORIENTED SIMULATION

The simulator should probably use a data-oriented/ECS-like architecture.

Avoid enormous inheritance/object hierarchies for every soldier/projectile.

Potential conceptual storage:

Positions[]
Velocities[]
Health[]
Morale[]
SquadIDs[]
CurrentOrders[]
WeaponIDs[]
Suppression[]
KnowledgeStates[]

ProjectilePosition[]
ProjectileVelocity[]
ProjectileEnergy[]
ProjectileType[]
ProjectileOwner[]

This should improve:

* Cache locality.
* Batch processing.
* Parallelization.
* SIMD opportunities.
* Large-scale simulation performance.

Exact architecture remains to be determined.

---

# 19. GRAPHICAL ART DIRECTION

Current preferred direction:

STYLIZED REALISM.

Do not pursue extreme photorealism.

The game needs potentially hundreds of soldiers, vehicles, projectiles, smoke, destruction, magic, debris, and large environments simultaneously.

Visual priorities:

1. Battlefield readability.
2. Strong faction silhouettes.
3. Excellent animation.
4. Excellent effects.
5. Convincing destruction.
6. Atmospheric lighting.
7. Character customization.
8. Performance.
9. Fine texture detail.

Characters should be highly modular.

Possible components:

* Body.
* Head.
* Hair.
* Helmet.
* Face gear.
* Torso.
* Armor.
* Backpack.
* Belt.
* Legs.
* Boots.
* Gloves.
* Weapon.
* Weapon attachments.
* Insignia.
* Rank.
* Campaign decorations.

A relatively limited number of assets should combine into thousands of visually distinct soldiers.

Different factions should have immediately recognizable silhouettes.

---

# 20. LOD / RENDERING STRATEGY

Rendering should aggressively scale detail based on distance.

Nearby soldiers:

* Full skeletal mesh.
* Detailed animations.
* Detailed equipment.
* Potential facial animation.
* High-quality effects.

Medium distance:

* Simplified mesh.
* Reduced animation complexity.
* Reduced bones.

Long distance:

* Extremely simplified geometry.
* Cheap animation.
* Potential impostors where appropriate.

Do not spend GPU resources on details the player cannot perceive.

Destruction should similarly cheat visually.

For example, a building explosion may visually contain hundreds of fragments while only a small number are actual physical rigid bodies.

Other debris can be:

* GPU particles.
* VFX
