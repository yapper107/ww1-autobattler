#include "BattleSim.h"
#include "CommandSim.h"
#include "ManeuverSim.h"
#include "CoordinationSim.h"
#include "TrafficSim.h"
#include <cassert>
#include <algorithm>
#include <chrono>
#include <cmath>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace army;
static std::string Fingerprint(const Record& r) {
    std::ostringstream o;o<<std::setprecision(9);
    auto vec=[&](Vec3 v){o<<v.x<<","<<v.y<<","<<v.z<<";";};
    auto team=[&](const TeamPlan& p){o<<p.bounding<<p.released<<p.moving<<p.serial;vec(p.target);for(auto v:p.holds)vec(v);for(auto v:p.moves)vec(v);for(int id:p.windowTeam)o<<id;for(auto v:p.windows)vec(v);};
    o<<r.winner<<r.duration<<EventLog(r);
    auto contact=[&](const Contact& c){o<<c.known<<c.automaticWeapon<<c.visible<<c.observedAt<<c.registeredAt<<c.aimHeight;vec(c.position);vec(c.aimOffset);o<<c.clearedAt<<c.emptySince<<c.passedAt<<c.lastFireAt;};
    for(const auto& f:r.frames) {
        for(const auto& p:f.platoon){o<<p.leader<<p.sergeant<<p.supportSquad<<p.flankSquad<<p.plans<<p.disruptedUntil<<p.nextPlanAt<<int(p.maneuver);vec(p.sector);}
        o<<f.time;
        for(const auto& cmd:f.command)o<<cmd.leader<<cmd.support<<cmd.advancing<<cmd.supportReady<<cmd.disruptedUntil<<int(cmd.maneuver)<<cmd.hasWaypoint<<cmd.waypoint.x<<cmd.waypoint.y<<cmd.waypoint.z<<cmd.maneuverUntil<<cmd.danger<<int(cmd.progress)<<cmd.idleSeconds<<cmd.recoveries<<cmd.supportNeedsMove<<cmd.supportMoveFrom.x<<cmd.supportMoveFrom.y<<cmd.supportMoveFrom.z;
        for(const auto& cmd:f.command){team(cmd.teamPlan);o<<cmd.engaged<<cmd.pressureSince<<cmd.nextManeuverAt<<cmd.supportUseful<<int(cmd.supportState)<<cmd.supportProblemSince<<cmd.nextSupportMove<<cmd.supportRepositions<<cmd.boundsCompleted<<cmd.building<<cmd.boundStarted<<cmd.boundReleasedAt<<cmd.boundRetryAt<<cmd.buildingUntil<<cmd.buildingRetryAt;o<<int(cmd.phase)<<cmd.planId<<cmd.planStarted<<cmd.commitUntil<<cmd.opportunitySince<<cmd.coveringReady<<cmd.planReason<<cmd.moveExposure<<cmd.lastEffectiveAt<<cmd.preparationSeconds<<cmd.candidateScores;vec(cmd.preparedTarget);o<<cmd.trackedEnemy<<cmd.enemyReferenceAt<<cmd.heavyFireAt;vec(cmd.enemyReference);o<<cmd.friendlyStrength<<cmd.enemyStrength<<cmd.favorableSince<<cmd.unfavorableSince<<cmd.lastContactAt<<cmd.nextAssessmentMove<<cmd.presses<<cmd.withdrawals<<cmd.searchesResumed<<cmd.searching; o<<cmd.searchLeg<<cmd.platoonOrderSerial<<int(cmd.platoonTask)<<cmd.platoonUntil<<cmd.platoonReadySince<<cmd.preparedPlatoonSerial;vec(cmd.mission);vec(cmd.boundOrigin);const auto& b=cmd.movementBlock;o<<int(b.reason)<<b.started<<b.pressure<<b.improvedSince<<b.support<<b.hadSupport<<b.hasAlternative<<b.nextRouteAt<<cmd.failedMoveCount;vec(b.origin);vec(b.target);vec(b.supportPosition);vec(b.alternative);for(auto p:cmd.failedMoves)vec(p);}
        for(const auto& s:f.soldiers) {
            o<<s.lastShotAt<<s.knowledgeRevision;for(const auto& d:s.deliveries){o<<d.shooter<<d.enemy<<d.rounds<<d.firstAt<<d.observedAt;vec(d.origin);vec(d.target);for(float t:d.times)o<<t;}
            for(const auto& r:s.movementReports){o<<r.soldier<<r.order<<r.observedAt;vec(r.destination);}
            for(const auto& r:s.platoonReports){o<<r.squad<<r.leader<<r.active<<r.enemy<<r.engaged<<r.supportUseful<<r.movementBlocked<<r.machineGuns<<r.mobile<<r.suppression<<r.danger<<r.observedAt;vec(r.position);contact(r.contact);}
            const auto& pd=s.platoonOrder;o<<int(pd.task)<<pd.issuer<<pd.serial<<pd.enemy<<pd.issuedAt<<pd.receivedAt<<pd.activatedAt<<pd.expiresAt;vec(pd.position);vec(pd.sector);contact(pd.contact);
            for(float stat:s.stats.value)o<<stat;
            o<<s.maxHealth<<int(s.weapon.def)<<s.magazineRemaining;
            o<<s.position.x<<s.position.y<<s.position.z<<s.health<<s.suppression<<s.rounds<<int(s.action)<<int(s.reason)<<int(s.stance)<<int(s.role)<<s.aim<<s.aimTarget<<s.aimPoint.x<<s.aimPoint.y<<s.aimPoint.z<<s.regrouping;
            o<<s.squad<<s.reactionBase<<s.reactionUntil<<int(s.reactingTo)<<s.pendingReactions<<s.understoodHealth<<s.understoodSuppression<<s.supportReadyAt<<s.reloadUntil<<s.areaFire;
            for(bool wounded:s.knownWounded)o<<wounded;
            o<<s.holdingFire<<s.friendlyRisk<<s.blockedSince<<s.blockedSeconds<<s.lastBlockedAt;
            o<<s.supportActivityAt<<s.reportedSupportRounds<<s.supportReportAt<<s.supportContactAt<<s.supportBlocked<<s.waitingPassage<<s.passageWaitSeconds;
            vec(s.reportedSupportPosition);vec(s.reportedSupportAim);team(s.assignment.teamPlan);
            for(const auto& a:s.fireAreas)o<<a.position.x<<a.position.y<<a.position.z<<a.intensity<<a.observedAt;
            for(int id=0;id<UnitCount;++id){const auto& a=s.allies[id];o<<a.known<<a.visible<<a.position.x<<a.position.y<<a.position.z<<a.observedAt<<a.registeredAt<<a.aimHeight<<s.allyVelocity[id].x<<s.allyVelocity[id].y<<s.allyVelocity[id].z;const auto& lane=s.blockedLanes[id];o<<lane.origin.x<<lane.origin.y<<lane.origin.z<<lane.target.x<<lane.target.y<<lane.target.z<<lane.spread<<lane.observedAt;}
            const auto& a=s.assignment;o<<int(a.task)<<a.issuer<<a.serial<<a.position.x<<a.position.y<<a.position.z<<a.sector.x<<a.sector.y<<a.sector.z<<a.issuedAt<<a.receivedAt<<a.activatedAt;
            for(const auto& report:s.reports)o<<report.known<<report.observedAt<<report.position.x<<report.position.y<<report.position.z<<report.registeredAt;
            for(const auto& k:s.contacts)o<<k.known<<k.visible<<k.position.x<<k.position.y<<k.position.z<<k.observedAt<<k.aimHeight<<k.aimOffset.x<<k.aimOffset.y<<k.registeredAt;
        }
    }
    for(const auto& s:r.shots) {
        o<<s.time<<s.impactTime<<s.owner<<s.start.x<<s.start.y<<s.start.z<<s.end.x<<s.end.y<<s.end.z<<s.hit<<int(s.impact)<<s.target;
        o<<s.suppressive<<s.aimedAt.x<<s.aimedAt.y<<s.aimedAt.z;
        for(const auto& sample:s.flight)o<<sample.time<<sample.position.x<<sample.position.y<<sample.position.z;
        o<<s.victims.size();for(const auto& v:s.victims)o<<v.soldier<<v.time<<v.energy;
    }
    return o.str();
}
static void BallisticsTests() {
    Vec3 p=BallisticPosition({0,0,10},{100,0,0},1);
    assert(std::abs(p.x-100)<0.001f&&std::abs(p.z-5.095f)<0.001f);
    Obstacle wall{{0,0},{0.65f,4},false,true};
    assert(SegmentObstacle({-10,0,1.15f},{10,0,1.15f},wall)>0);
    assert(SegmentObstacle({-10,0,2},{10,0,2},wall)<0); // finite low cover
    wall.building=true;assert(SegmentObstacle({-10,0,2},{10,0,2},wall)>0);
    // Crossing target: neither endpoint is on the firing line, but the paths intersect.
    assert(SegmentSoldier({-5,0,1},{5,0,1},{0,-2},{0,2})>=0);
    assert(SegmentSoldier({-5,0,1},{5,0,1},{0,2},{0,2})<0);
    assert(SegmentSoldier({-5,0,3},{5,0,3},{0,0},{0,0})<0);
    assert(SegmentSoldier({0,0,1},{5,0,1},{0,0},{0,0})==0);
    Shot shot;shot.time=1;shot.impactTime=1.1f;
    shot.flight={{1,{0,0,1}},{1.1f,{10,0,0.95f}}};
    assert(!ProjectilePosition(shot,0.99f,p));
    assert(ProjectilePosition(shot,1.05f,p)&&std::abs(p.x-5)<0.001f);
    assert(!ProjectilePosition(shot,1.11f,p));
}
static void SightAndValleyTests() {
    Map empty;Soldier observer,target;target.team=1;target.id=TeamSize;
    target.position={69,0};assert(SenseEnemy(observer,target,empty,2).visible);
    target.position={70,0};assert(!SenseEnemy(observer,target,empty,2).known);
    EquipWeapon(observer,{WeaponId::MachineGun,{}});target.position={94,0};assert(SenseEnemy(observer,target,empty,2).visible);
    target.position={95,0};assert(!SenseEnemy(observer,target,empty,2).visible);
    EquipWeapon(observer,{WeaponId::Rifle,{}});
    // Perception scales the weapon's engagement range.
    observer.stats.value[size_t(Stat::Perception)]=120;target.position={83,0};assert(SenseEnemy(observer,target,empty,2).visible);
    target.position={85,0};assert(!SenseEnemy(observer,target,empty,2).visible);
    observer.stats=Stats{};target.position={-20,0};assert(SenseEnemy(observer,target,empty,2).visible); // current scan is omnidirectional
    Map valley=MakeSkirmishMap();assert(valley.halfWidth==170&&valley.halfHeight==150);
    observer.position={-30,0};target.position={30,0};assert(!SenseEnemy(observer,target,valley,2).visible);
    assert(!ClearLine3D(valley,{-30,0,4.9f},{30,0,4.9f})); // screens also interrupt upper-floor views
    auto path=FindPath(valley,observer.position,target.position);assert(path.size()>1); // real detour, not invisible decoration
    auto f=InitialFrame(Config{});
    for(const auto& unit:f.soldiers){assert(Walkable(valley,unit.position));for(const auto& enemy:f.soldiers)if(enemy.team!=unit.team)assert(!SenseEnemy(unit,enemy,valley,0).visible);}
    for(float lane:{-138.f,-96.f,0.f,96.f,138.f})for(float sign:{-1.f,1.f}) {
        Vec3 start{sign*140,lane},via{0,lane};
        assert(!FindPath(valley,start,via).empty());assert(!FindPath(valley,via,Vec3{}).empty());
    }
    // Range/occlusion are sensory facts, recognized only after the existing reaction delay.
    ReactionRuntime reactions;std::vector<Event> events;f.soldiers[0].position={0,0};target.position={20,0};
    PendingReaction seen;seen.kind=ReactionKind::Sight;seen.enemy=TeamSize;seen.contact=SenseEnemy(f.soldiers[0],target,empty,0);
    QueueReaction(f.soldiers[0],seen,0,reactions);f.time=.01f;ProcessReactions(f,reactions,events);assert(!f.soldiers[0].contacts[TeamSize].known);
    f.time=2;ProcessReactions(f,reactions,events);assert(f.soldiers[0].contacts[TeamSize].known);
}
static void DeathmatchTests() {
    Config config;Map map;Frame frame=InitialFrame(config);Record record;
    for(auto& s:frame.soldiers)s.position={0,0};
    frame.time=120;assert(!ResolveDeathmatch(record,frame,false,false)); // centre occupation never wins
    assert(ResolveDeathmatch(record,frame,false,true)&&record.winner==-1);
    frame.soldiers[TeamSize].health=0;
    assert(ResolveDeathmatch(record,frame,false,true)&&record.winner==0);
    for(auto& s:frame.soldiers)if(s.team==0)s.health=1; // wounded still count as combatants
    assert(ResolveDeathmatch(record,frame,false,true)&&record.winner==0);
    for(auto& s:frame.soldiers)if(s.team==1)s.health=0;
    assert(!ResolveDeathmatch(record,frame,true,false)); // allow rounds already in flight to land
    assert(ResolveDeathmatch(record,frame,false,false)&&record.winner==0);
    for(auto& s:frame.soldiers)s.health=0;
    assert(ResolveDeathmatch(record,frame,false,false)&&record.winner==-1);
    frame=InitialFrame(config);std::vector<Soldier> squad(frame.soldiers.begin(),frame.soldiers.begin()+SquadSize);
    Soldier leader=squad[0];SquadCommand cmd;cmd.leader=0;cmd.support=7;cmd.advancing=true;
    UpdateSearchMission(leader,squad,map,config,cmd,0);
    assert(cmd.mission.x<0&&std::abs(cmd.mission.y)>20);
    squad[1].position=cmd.mission;UpdateSearchMission(leader,squad,map,config,cmd,4);assert(cmd.searchLeg==1);
    squad[1].position=cmd.mission;UpdateSearchMission(leader,squad,map,config,cmd,8);assert(cmd.mission.x>0); // search passes through centre
    squad[1].position={-40,0};leader.contacts[TeamSize]={true,true,{10,0},10};
    UpdateSearchMission(leader,squad,map,config,cmd,10);assert(cmd.mission.x<0&&Distance(cmd.mission,{10,0})>=31.9f);
    cmd.teamPlan.bounding=true;cmd.teamPlan.released=false;cmd.mission={100,100};int serial=cmd.teamPlan.serial;
    UpdateSearchMission(leader,squad,map,config,cmd,10);assert(!cmd.teamPlan.bounding&&cmd.teamPlan.serial>serial);
    cmd.engaged=true;cmd.teamPlan.bounding=true;cmd.teamPlan.released=true;Vec3 crossingMission=cmd.mission;
    UpdateSearchMission(leader,squad,map,config,cmd,10);assert(cmd.teamPlan.bounding&&Distance(crossingMission,cmd.mission)<0.01f);
    cmd.teamPlan.bounding=false;UpdateSearchMission(leader,squad,map,config,cmd,10);assert(Distance(cmd.mission,squad[1].position)<0.01f);
    auto orders=PlanSquad(leader,squad,map,config,cmd,10);
    for(const auto& o:orders)if(o.recipient==1)assert(o.task==Task::Hold&&Distance(o.position,squad[1].position)<0.01f);
    // A routine regroup order cannot tear a soldier out of useful firing cover.
    map.obstacles={{{0,0},{0.6f,4},false,true}};
    Soldier rifle;rifle.position={-4,0};rifle.contacts[TeamSize]={true,true,{20,0},0};Tactics memory;
    ChooseOrder(rifle,map,config,{},memory,0);assert(memory.assigned);rifle.position=memory.shelter;
    rifle.assignment.task=Task::Rally;rifle.assignment.position={10,0};rifle.assignment.sector={20,0};
    rifle.contacts[TeamSize].observedAt=1;
    auto order=ChooseOrder(rifle,map,config,{},memory,1);assert(memory.assigned&&order.action==Action::Fire&&Distance(order.goal,rifle.position)<0.1f);
    // Exposed advance reacts to a recognized enemy before taking its first hit.
    memory={};rifle.position={-5,0};rifle.action=Action::Advance;rifle.assignment.task=Task::Advance;
    order=ChooseOrder(rifle,map,config,{},memory,1);assert(order.action==Action::Cover&&memory.emergency);
    assert(ProtectedAt(map,order.goal,{20,0},Stance::Crouched));
    // Separated personal cover supports separated reservations, not a shared wall.
    Map pockets;for(float y:{-6.f,0.f,6.f})pockets.obstacles.push_back({{0,y},{0.65f,0.95f},false,true,1.2f});
    std::vector<Vec3> reservations;
    for(float y:{-6.f,0.f,6.f}) {
        rifle.position={-4,y};rifle.contacts[TeamSize]={true,true,{20,y},1};memory={};
        order=ChooseOrder(rifle,pockets,config,reservations,memory,1);assert(memory.assigned);
        for(Vec3 prior:reservations)assert(Distance(prior,order.goal)>3);
        assert(ProtectedAt(pockets,order.goal,{20,y},Stance::Crouched));reservations.push_back(order.goal);
    }
    Map arena=MakeSkirmishMap();int personal=0;
    for(const auto& o:arena.obstacles)if(!o.building&&o.half.x<=1&&o.half.y<=1)++personal;
    assert(personal>=40);std::cout<<"Deathmatch: elimination/timer results, sector search, no centre capture, protected regroup and "<<personal<<" individual cover objects verified\n";
}
static void PlatoonTests() {
    Config config;assert(config.maxSeconds==360);Map map;assert(map.halfWidth==170&&map.halfHeight==150);
    map.obstacles={{{-16,-56},{.6f,7},false,true},{{-16,56},{.6f,7},false,true}};
    Frame f=InitialFrame(config);Soldier lieutenant=f.soldiers[5];
    assert(lieutenant.role==Role::Lieutenant&&f.soldiers[6].role==Role::PlatoonSergeant);
    assert(f.soldiers[0].role==Role::Sergeant&&f.soldiers[1].role==Role::Corporal);
    assert(std::string(RankTag(lieutenant.role))=="LT"&&std::string(RankTag(f.soldiers[6].role))=="PSG");
    assert(PlanPlatoon(lieutenant,map,config,1).empty()); // world knowledge is not an input
    SquadSituation hot;hot.squad=0;hot.leader=0;hot.active=6;hot.position={-20,0};hot.engaged=true;hot.observedAt=1;
    hot.enemy=TeamSize;hot.contact={true,false,{20,0},1};hot.contact.automaticWeapon=true;
    SquadSituation flank;flank.squad=1;flank.leader=8;flank.active=8;flank.mobile=6;flank.position={-40,-70};flank.observedAt=1;
    lieutenant.platoonReports[0]=hot;lieutenant.platoonReports[1]=flank;lieutenant.reports[TeamSize]=hot.contact;
    auto orders=PlanPlatoon(lieutenant,map,config,2);assert(orders.size()==2);
    assert(orders[0].directive.task==PlatoonTask::Support&&orders[1].recipient==8&&orders[1].directive.task==PlatoonTask::FlankNorth);
    assert(Distance(orders[1].directive.position,flank.position)<=35);
    lieutenant.platoonReports[1].position.y=70;orders=PlanPlatoon(lieutenant,map,config,2);assert(orders.size()==2&&orders[1].directive.task==PlatoonTask::FlankSouth);
    lieutenant.platoonReports[1].engaged=true;assert(PlanPlatoon(lieutenant,map,config,2).size()==2); // engagement is a scored cost, not a veto
    lieutenant.platoonReports[0].supportUseful=true;lieutenant.platoonReports[1].mobile=6;
    lieutenant.platoonReports[1].position.x=-35;
    assert(PlanPlatoon(lieutenant,map,config,2).size()==2); // lightly engaged rifles can envelop
    lieutenant.platoonReports[1].machineGuns=1;assert(PlanPlatoon(lieutenant,map,config,2).front().recipient==8); // productive MG becomes the anchor
    lieutenant.platoonReports[1].machineGuns=0;lieutenant.platoonReports[1].suppression=.7f;
    assert(!PlanPlatoon(lieutenant,map,config,2).empty()); // intent remains subject to local soldier safety
    lieutenant.platoonReports[1].suppression=0;
    lieutenant.platoonReports[1].engaged=false;assert(PlanPlatoon(lieutenant,map,config,20).empty());
    // Actual two-hop communication: squad -> platoon sergeant -> lieutenant.
    f=InitialFrame(config);NeutraliseStats(f);PlatoonRuntime transport;ReactionRuntime reactions;std::vector<Event> events;
    f.platoon[0].nextPlanAt=f.platoon[1].nextPlanAt=100;
    for(auto& s:f.soldiers)if(s.squad==0)s.position={-20,0};else if(s.squad==1)s.position={-40,-70};
    f.command[0].engaged=true;f.soldiers[0].contacts[TeamSize]={true,true,{20,0},0};f.soldiers[0].contacts[TeamSize].automaticWeapon=true;
    auto update=[&](float time){f.time=time;ProcessReactions(f,reactions,events);UpdatePlatoon(f,map,config,transport,reactions,events);};
    update(0);update(.74f);assert(f.soldiers[6].platoonReports[0].squad<0);
    update(.76f);update(.77f);assert(f.soldiers[6].platoonReports[0].squad<0);
    update(1.6f);assert(f.soldiers[6].platoonReports[0].squad==0&&f.soldiers[5].platoonReports[0].squad<0);
    update(2);update(2.8f);assert(f.soldiers[5].platoonReports[0].squad<0);
    update(3.6f);assert(f.soldiers[5].platoonReports[0].squad==0&&!f.soldiers[5].reports[TeamSize].visible&&f.soldiers[5].reports[TeamSize].automaticWeapon);
    f.platoon[0].nextPlanAt=3.6f;update(3.6f);assert(f.platoon[0].plans==1&&f.platoon[0].flankSquad==1);
    update(4.4f);update(4.41f);assert(f.soldiers[8].platoonOrder.serial==0);
    update(5.6f);auto& order=f.soldiers[8].platoonOrder;
    assert(order.serial>0&&order.issuedAt<order.receivedAt&&order.receivedAt<order.activatedAt);
    SquadCommand cmd;cmd.danger=1;ApplyPlatoonDirective(f.soldiers[8],cmd,5.6f);assert(!cmd.hasWaypoint);
    cmd.danger=0;ApplyPlatoonDirective(f.soldiers[8],cmd,5.6f);assert(cmd.hasWaypoint&&cmd.maneuver==Maneuver::FlankNorth);
    assert(Distance(cmd.waypoint,order.position)<0.01f);int serial=cmd.platoonOrderSerial;
    cmd.hasWaypoint=false;ApplyPlatoonDirective(f.soldiers[8],cmd,6);assert(!cmd.hasWaypoint&&cmd.platoonOrderSerial==serial);
    ApplyPlatoonDirective(f.soldiers[8],cmd,70);assert(cmd.platoonTask==PlatoonTask::None);
    // Succession retains the new commander's own reports, never copies the dead leader.
    f.soldiers[5].reports[TeamSize+1]={true,false,{80,0},9};f.soldiers[5].health=0;
    update(10);assert(f.platoon[0].leader==-1);update(12.9f);assert(f.platoon[0].leader==-1);
    update(13.1f);assert(f.platoon[0].leader==6&&!f.soldiers[6].reports[TeamSize+1].known);
    std::cout<<"Platoon: report/relay/order reactions, north/south coordination, stale knowledge, local danger veto, expiry and succession verified\n";
}
static void BuildingTests() {
    Map map;AddBuilding(map,{0,0});
    assert(map.buildings.size()==1&&map.windows.size()==18);
    assert(ClearLine(map,{-8,0},{-4,0},0.48f)); // doorway
    assert(!ClearLine(map,{-8,2.6f},{-4,2.6f},0.48f)); // cannot walk through a window
    assert(ClearLine3D(map,{-8,2.6f,1.5f},{8,2.6f,1.5f}));
    assert(!ClearLine3D(map,{-8,2.6f,0.8f},{8,2.6f,0.8f}));
    assert(ClearLine3D(map,{-8,2.6f,4.7f},{8,2.6f,4.7f}));
    assert(!ClearLine3D(map,{0,2,1.5f},{0,2,4.7f})); // slab blocks bullets between floors
    Vec3 upper{4.15f,2.6f,UpperFloor};
    assert(ProtectedAt(map,upper,{25,2.6f,UpperFloor},Stance::Crouched));
    assert(!ProtectedAt(map,upper,{25,2.6f,UpperFloor},Stance::Standing));
    auto path=FindPath(map,{-8,0},upper);assert(!path.empty());
    bool climbed=false;Vec3 from{-8,0};
    for(auto to:path){assert(ClearLine(map,from,to,0.48f));if(std::abs(to.z-from.z)>1){climbed=true;assert(OnStairs(map,(from+to)*0.5f));}from=to;}
    assert(climbed&&Distance(path.back(),upper)<0.01f);
    assert(!ClearLine(map,{-8,0},upper,0.48f)); // no diagonal shortcut up through a wall
    assert(!FindPath(map,upper,{-8,0}).empty());
    assert(!FindPath(map,{0,-0.8f,1.6f},upper).empty()); // new orders midway up stairs
    assert(!Walkable(map,{8,0,UpperFloor}));
    assert(SegmentSoldier({0,0,1.5f},{5,0,1.5f},{2,0,UpperFloor},{2,0,UpperFloor})<0);
    assert(SegmentSoldier({0,0,4.7f},{5,0,4.7f},{2,0,UpperFloor},{2,0,UpperFloor})>=0);
    Soldier gun;gun.position=upper;gun.action=Action::Fire;
    gun.contacts[TeamSize]={true,true,{25,2.6f,UpperFloor},0};gun.contacts[TeamSize].aimHeight=4.7f;
    assert(SelectFireSolution(gun,map,0).enemy==TeamSize);
    gun.allies[1]={true,true,{15,2.6f,0},0};gun.allies[1].aimHeight=1.85f;
    assert(!ShouldHoldFire(gun,FriendlyFireRisk(gun,map,{25,2.6f,4.7f},0)));
    gun.allies[1].position.z=UpperFloor;gun.allies[1].aimHeight=UpperFloor+1.85f;
    assert(ShouldHoldFire(gun,FriendlyFireRisk(gun,map,{25,2.6f,4.7f},0)));
    assert(ShotSpread(gun)>0.032f&&VerticalSpread(gun)>0.008f);
    // Building broad-phase culling must give exactly the same first physical hit.
    for(int i=0;i<240;++i){Vec3 a{-10,float(i%17)-8,float(i%9)*0.8f},b{10,float((i*7)%17)-8,float((i*5)%9)*0.8f};
        float exact=2;for(const auto& o:map.obstacles){float t=SegmentObstacle(a,b,o);if(t>=0)exact=std::min(exact,t);}
        if(exact>1)exact=-1;
        assert(std::abs(exact-MapContact(map,a,b))<0.00001f);
        assert(ClearLine3D(map,a,b)==(exact<0));
        Map unculled=map;for(auto& building:unculled.buildings)building.obstacleCount=0;
        assert(ClearLine(map,a,b,0.48f)==ClearLine(unculled,a,b,0.48f));
    }

}
static void TacticsTests() {
    Map m;m.obstacles={{{0,0},{0.65f,4},false}};
    Config c;Soldier s;s.position={-6,0};s.contacts[TeamSize]={true,true,{10,0},0};
    Tactics t;auto order=ChooseOrder(s,m,c,{},t,0);
    assert(t.assigned&&order.action==Action::Cover);
    const auto first=t.shelter;
    assert(!ClearLine(m,first,{10,0})&&ClearLine(m,t.peek,{10,0}));
    s.position=s.position+Vec3{0.5f,0};s.contacts[TeamSize].position.y=0.1f;
    order=ChooseOrder(s,m,c,{},t,0.6f);
    assert(Distance(first,order.goal)<0.001f); // commit despite a slightly moving contact
    s.position=t.shelter;
    order=ChooseOrder(s,m,c,{},t,1.2f);assert(order.action==Action::Cover&&order.reason==Reason::Peek);
    s.position=t.peek;order=ChooseOrder(s,m,c,{},t,1.8f);assert(order.action==Action::Fire);
    order=ChooseOrder(s,m,c,{},t,3.1f);assert(order.action==Action::Fire);
    s.position=t.peek;
    order=ChooseOrder(s,m,c,{},t,3.7f);assert(order.action==Action::Fire&&order.reason==Reason::CoverFire);
    order=ChooseOrder(s,m,c,{},t,4.3f);assert(order.action==Action::Fire);
    s.suppression=0.9f;
    order=ChooseOrder(s,m,c,{},t,4.9f);assert(!t.peeking&&order.reason==Reason::Suppressed&&Distance(order.goal,first)<0.001f);
    s.suppression=0;s.contacts[TeamSize+1]={true,true,{-10,0},5};
    order=ChooseOrder(s,m,c,{},t,5.5f);assert(!t.assigned||Distance(t.shelter,first)>1);
    s.health=20;order=ChooseOrder(s,m,c,{},t,6.1f);assert(order.reason!=Reason::Injury);
    s.health=100;s.position={-6,0};s.contacts[TeamSize+1]={};Tactics other;
    order=ChooseOrder(s,m,c,{first},other,0);
    assert(!other.assigned||Distance(other.shelter,first)>=1.4f);
    // No personal contact means no reaction to enemies outside this input.
    s.contacts={};other={};order=ChooseOrder(s,m,c,{},other,0);
    assert(!other.assigned&&order.reason==Reason::AwaitOrders);
}
static void LowCoverTests() {
    Map map;map.obstacles={{{0,0},{0.6f,3},false,true}};
    Soldier s;s.position={-5,0};s.contacts[TeamSize]={true,true,{10,0},0};
    Config c;Tactics memory;
    auto order=ChooseOrder(s,map,c,{},memory,0);
    assert(memory.assigned&&memory.halfCover);
    s.position=memory.shelter;
    order=ChooseOrder(s,map,c,{},memory,0.5f);
    assert(order.stance==Stance::Standing&&order.reason==Reason::PopUp);
    assert(ProtectedAt(map,s.position,{10,0},Stance::Crouched));
    assert(!ProtectedAt(map,s.position,{10,0},Stance::Standing));
    Vec3 from{10,0,1.5f},to{s.position.x,s.position.y,1.5f};
    assert(ClearLine3D(map,from,to));
    assert(SegmentSoldier(from,to,s.position,s.position,BodyHeight(Stance::Standing))>=0);
    assert(SegmentSoldier(from,to,s.position,s.position,BodyHeight(Stance::Crouched))<0);
    assert(!ClearLine3D(map,{10,0,1.5f},{s.position.x,s.position.y,0.7f}));
    order=ChooseOrder(s,map,c,{},memory,2.4f);
    assert(order.action==Action::Fire&&order.stance==Stance::Standing&&order.reason==Reason::PopUp);
    s.rounds=1;s.reloadUntil=4.5f;
    order=ChooseOrder(s,map,c,{},memory,2.45f);
    assert(!memory.peeking&&order.stance==Stance::Crouched);
    order=ChooseOrder(s,map,c,{},memory,4.3f);
    assert(order.stance==Stance::Crouched); // stay down through reload
    order=ChooseOrder(s,map,c,{},memory,4.6f);assert(memory.peeking);
    s.health=80;s.suppression=0.7f;order=ChooseOrder(s,map,c,{},memory,4.65f);
    assert(!memory.peeking&&order.stance==Stance::Crouched); // hit reaction before next broad decision
    map.obstacles[0].halfCover=false;s={};s.position={-5,0};s.contacts[TeamSize]={true,true,{10,0},0};memory={};
    order=ChooseOrder(s,map,c,{},memory,0);assert(memory.assigned);
    Vec3 delta=memory.peek-memory.shelter;float length=Length(delta);
    Vec3 justBefore=memory.peek-delta*(0.06f/length);
    assert(ClearLine3D(map,{memory.peek.x,memory.peek.y,1.5f},{10,0,1.45f}));
    assert(!ClearLine3D(map,{justBefore.x,justBefore.y,1.5f},{10,0,1.45f}));
    assert(ProtectedAt(map,memory.shelter,{10,0},Stance::Standing));
    s.position=memory.peek;memory.peeking=true;memory.roundsAtPeek=0;memory.healthAtPeek=100;memory.phaseUntil=1.2f;s.rounds=1;s.suppression=0.7f;
    order=ChooseOrder(s,map,c,{},memory,0.05f);
    assert(!memory.peeking&&Distance(order.goal,memory.shelter)<0.001f);
}
static void CommandAndAimTests() {
    Config c;Map map=MakeSkirmishMap();Frame f=InitialFrame(c);CommandRuntime runtime;std::vector<Event> events;
    assert(f.soldiers[0].role==Role::Sergeant&&f.soldiers[1].role==Role::Corporal&&f.soldiers[7].machineGun);
    auto advance=[&](float to){while(f.time+0.001f<to){f.time+=TickSeconds;UpdateCommands(f,map,c,runtime,events);}};
    advance(0.05f);
    assert(f.soldiers[7].assignment.task==Task::None);
    advance(0.75f);assert(f.soldiers[7].assignment.task==Task::None);
    advance(1.7f);
    const auto gunOrder=f.soldiers[7].assignment;
    assert(gunOrder.activatedAt>=gunOrder.receivedAt+ReactionSeconds(f.soldiers[7],ReactionKind::Order)-0.001f);
    assert(gunOrder.task==Task::Overwatch&&gunOrder.issuer==0&&gunOrder.receivedAt>=gunOrder.issuedAt+MessageDelay);
    assert(ProtectedAt(map,gunOrder.position,gunOrder.sector,Stance::Crouched));
    assert(f.soldiers[2].assignment.issuer!=0);
    advance(3.5f);
    assert(f.soldiers[2].assignment.issuer==1&&f.soldiers[2].assignment.task!=Task::None);
    auto gun=f.soldiers[7];Tactics tactics;
    auto movement=ChooseOrder(gun,map,c,{},tactics,1.7f);
    assert(tactics.assigned&&Distance(movement.goal,gunOrder.position)<0.01f);
    gun.position=gunOrder.position;movement=ChooseOrder(gun,map,c,{},tactics,2);
    assert(movement.stance==Stance::Standing&&movement.action==Action::Fire);
    gun.health=20;movement=ChooseOrder(gun,map,c,{},tactics,2.1f);assert(movement.action!=Action::Retreat);
    gun.health=100;gun.suppression=0.55f;tactics={};
    ChooseOrder(gun,map,c,{},tactics,3);
    movement=ChooseOrder(gun,map,c,{},tactics,7);
    assert(!tactics.peeking&&movement.stance==Stance::Crouched); // suppression can veto a peek
    c.doctrine=Doctrine::Aggressive;gun.suppression=0.45f;
    ChooseOrder(gun,map,c,{},tactics,7.05f);
    movement=ChooseOrder(gun,map,c,{},tactics,7.1f);
    assert(tactics.peeking&&movement.action==Action::Fire); // separate enter/abort thresholds prevent peek chatter
    gun.suppression=0.8f;ChooseOrder(gun,map,c,{},tactics,7.15f);assert(!tactics.peeking);
    c.doctrine=Doctrine::Balanced;
    // Information is inaccessible until both transport and individual reaction finish.
    f.soldiers[2].contacts[TeamSize]={true,true,{12,5},4.f};runtime.nextReport[2]=0;
    advance(4.05f);assert(!f.soldiers[1].reports[TeamSize].known);
    advance(4.75f);assert(!f.soldiers[1].reports[TeamSize].known);
    advance(5.8f);assert(f.soldiers[1].reports[TeamSize].known&&!f.soldiers[0].reports[TeamSize].known);
    advance(8.f);assert(f.soldiers[0].reports[TeamSize].known&&!f.soldiers[0].contacts[TeamSize].known);
    assert(f.soldiers[0].reports[TeamSize].observedAt==4.f);
    assert(!WithReports(f.soldiers[0],15).contacts[TeamSize].known);
    const int priorSerial=f.soldiers[7].assignment.serial;
    f.soldiers[0].health=0;advance(8.1f);
    assert(f.command[0].leader==-1&&f.soldiers[7].assignment.serial==priorSerial);
    advance(10.95f);assert(f.command[0].leader==-1);
    advance(11.2f);assert(f.command[0].leader==1);
    // Aim requires time, degrades under suppression, and cannot persist while moving.
    Soldier calm;calm.action=Action::Fire;Soldier suppressed=calm;suppressed.suppression=0.5f;
    UpdateAim(calm,8,{10,0},0.1f);UpdateAim(suppressed,8,{10,0},0.1f);
    assert(calm.aim<1&&calm.aim>suppressed.aim&&ShotSpread(suppressed)>ShotSpread(calm));
    UpdateAim(calm,8,{10,0},0.4f);assert(calm.aim==1);
    UpdateAim(calm,9,{10,0},0.05f);assert(calm.aim<0.2f);
    calm.action=Action::Cover;UpdateAim(calm,9,{10,0},0.1f);assert(calm.aim==0);
    suppressed.suppression=0.9f;UpdateAim(suppressed,8,{10,0},0.1f);assert(suppressed.aim==0);
}
static void ReactionAndMachineGunTests() {
    Frame f=InitialFrame(Config{});ReactionRuntime rt;std::vector<Event> events;
    auto& soldier=f.soldiers[2];PendingReaction p;p.kind=ReactionKind::Sight;p.enemy=TeamSize;
    p.contact={true,true,{20,7},1.f};QueueReaction(soldier,p,1,rt);
    f.time=rt.pending.front().readyAt-0.01f;ProcessReactions(f,rt,events);assert(!soldier.contacts[TeamSize].known);
    f.soldiers[TeamSize].position={70,40};f.time+=0.02f;ProcessReactions(f,rt,events);
    assert(soldier.contacts[TeamSize].known&&soldier.contacts[TeamSize].position.x==20);
    Soldier suppressed=soldier;suppressed.suppression=0.8f;
    assert(ReactionSeconds(suppressed,ReactionKind::Sight)>ReactionSeconds(soldier,ReactionKind::Sight));
    assert(VerticalSpread(suppressed)>VerticalSpread(soldier));
    // A slower old stress reaction must not replace a newer recognised sample.
    p={};p.kind=ReactionKind::UnderFire;p.suppression=0.8f;
    QueueReaction(suppressed,p,2,rt);
    p.suppression=0;QueueReaction(soldier,p,2.05f,rt);
    f.time=2.05f+ReactionSeconds(soldier,ReactionKind::UnderFire)+0.01f;
    ProcessReactions(f,rt,events);assert(soldier.understoodSuppression==0);
    f.time=3;ProcessReactions(f,rt,events);assert(soldier.understoodSuppression==0);
    Soldier gun;gun.id=7;EquipWeapon(gun,{WeaponId::MachineGun,{}});gun.assignment.task=Task::Overwatch;gun.position={-10,0};gun.action=Action::Fire;
    gun.contacts[TeamSize]={true,false,{10,0},2.f};Map empty;empty.obstacles.clear();
    auto solution=SelectFireSolution(gun,empty,4);assert(solution.enemy==TeamSize&&solution.area&&solution.point.x==10);
    assert(SelectFireSolution(gun,empty,8.1f).enemy<0);
    EquipWeapon(gun,{WeaponId::Rifle,{}});assert(SelectFireSolution(gun,empty,4).area); // rifles assigned overwatch now suppress remembered contacts
    EquipWeapon(gun,{WeaponId::MachineGun,{}});Tactics memory;memory.assigned=true;memory.peeking=true;memory.halfCover=true;
    memory.peek=memory.shelter=gun.position;memory.expires=100;memory.phaseUntil=20;memory.roundsAtPeek=0;
    gun.rounds=4;auto order=ChooseOrder(gun,empty,Config{}, {},memory,4);
    assert(memory.peeking&&order.action==Action::Fire); // no rifle-like duck after 1-3 rounds
    gun.rounds=18;order=ChooseOrder(gun,empty,Config{}, {},memory,4.1f);assert(memory.peeking); // watching does not end at the burst boundary
    const auto initial=InitialFrame(Config{});int sides[2]={0,0},officers[2]={0,0},sergeants[2]={0,0},guns[2]={0,0};
    for(const auto& s:initial.soldiers) {
        ++sides[s.team];officers[s.team]+=s.role==Role::Sergeant;sergeants[s.team]+=s.role==Role::Corporal;guns[s.team]+=s.machineGun;
        assert(s.squad==s.id/SquadSize&&s.reactionBase>=0.25f&&s.reactionBase<=0.6f);
    }
    for(int side=0;side<2;++side)assert(sides[side]==32&&officers[side]==4&&sergeants[side]==4&&guns[side]==1);
    for(int team=0;team<2;++team){assert(initial.soldiers[team*TeamSize+5].role==Role::Lieutenant);assert(initial.soldiers[team*TeamSize+6].role==Role::PlatoonSergeant);}
}
static void WoundedRearGuardTests() {
    Config config;Map map;map.obstacles.clear();Frame f=InitialFrame(config);CommandRuntime runtime;std::vector<Event> events;
    for(int i=0;i<SquadSize;++i)f.soldiers[i].position={0,float(i-2)*2};
    auto& wounded=f.soldiers[2];wounded.health=wounded.understoodHealth=20;
    auto advance=[&](float to){while(f.time+0.049f<to){f.time+=0.05f;UpdateCommands(f,map,config,runtime,events);}};
    advance(0.7f);assert(!f.soldiers[1].knownWounded[2]&&wounded.assignment.task!=Task::RearGuard);
    advance(7);assert(f.soldiers[1].knownWounded[2]&&wounded.assignment.task==Task::RearGuard&&wounded.assignment.issuer==1);
    assert(wounded.assignment.position.x<=0&&Walkable(map,wounded.assignment.position));
    const Vec3 rear=wounded.assignment.position;wounded.position=rear;
    advance(14);assert(Distance(rear,wounded.assignment.position)<0.01f&&!f.soldiers[1].regrouping);
    // A badly wounded rifleman at his rear position can aim and shoot.
    wounded.contacts[TeamSize]={true,true,{5,wounded.position.y},f.time};Tactics tactics;
    Map rearCover;rearCover.obstacles={{{wounded.position.x+2,wounded.position.y},{0.6f,3},false,true}};
    auto order=ChooseOrder(wounded,rearCover,config,{},tactics,f.time);
    assert(order.action==Action::Cover&&tactics.assigned);wounded.position=order.goal;
    order=ChooseOrder(wounded,rearCover,config,{},tactics,f.time+1);
    assert(order.action==Action::Fire&&order.reason==Reason::PopUp);
    wounded.action=order.action;
    assert(SelectFireSolution(wounded,map,f.time).enemy==TeamSize);
    UpdateAim(wounded,TeamSize,{5,wounded.position.y},1);assert(wounded.aim==1&&wounded.Active());
    // Mirrored side also falls back, and a wounded MG retains area suppression.
    Soldier red=wounded;red.id=TeamSize+2;red.squad=SquadsPerTeam;red.team=1;red.position={0,0};red.assignment={};
    Soldier redLeader=red;redLeader.id=TeamSize;redLeader.health=redLeader.understoodHealth=100;redLeader.knownWounded[red.id]=true;
    Vec3 redRear=RearPosition(redLeader,red,{redLeader,red},map,14);assert(redRear.x>=0);
    EquipWeapon(wounded,{WeaponId::MachineGun,{}});wounded.contacts[TeamSize].visible=false;
    assert(SelectFireSolution(wounded,map,f.time).area);
    // Leaders only change assignments after learning about an injury. A wounded
    // NCO keeps commanding from the rear; healthy soldiers receive officer orders.
    auto& officer=f.soldiers[0];officer.knownWounded[1]=true;officer.knownWounded[7]=true;
    officer.health=officer.understoodHealth=40;f.command[0].advancing=true;
    std::vector<Soldier> friends(f.soldiers.begin(),f.soldiers.begin()+SquadSize);
    auto plan=PlanSquad(officer,friends,map,config,f.command[0],f.time);
    bool leaderRear=false,ncoRear=false,gunRear=false,healthyAdvance=false;
    for(const auto& p:plan){leaderRear|=p.recipient==0&&p.task==Task::RearGuard;ncoRear|=p.recipient==1&&p.task==Task::RearGuard;gunRear|=p.recipient==7&&p.task==Task::RearGuard;healthyAdvance|=p.recipient==3&&p.task==Task::Advance;}
    assert(leaderRear&&ncoRear&&gunRear&&healthyAdvance);
    // Prefer reachable cover behind the healthy front, with separate reservations.
    Map cover;cover.obstacles={{{-15,0},{0.6f,4},false,true}};
    officer.contacts={};officer.reports={};officer.position={0,0};friends[3].position={0,0};
    wounded.position={0,0};wounded.assignment={};EquipWeapon(wounded,{WeaponId::Rifle,{}});
    const Vec3 covered=RearPosition(officer,wounded,friends,cover,14);
    assert(covered.x<-10&&ProtectedAt(cover,covered,{0,0},Stance::Crouched));
    const Vec3 separate=RearPosition(officer,wounded,friends,cover,14,{covered});assert(Distance(covered,separate)>=1.5f);
    // A blind rear position must not be retained indefinitely after injury.
    Map blocked;blocked.obstacles={{{-25,0},{0.6f,4},false,true},{{-15,0},{0.6f,6},false},{{-5,0},{0.6f,4},false,true}};
    Soldier leader;leader.id=0;leader.position={0,0};leader.contacts[TeamSize]={true,true,{15,0},14};
    Soldier injured;injured.id=2;injured.health=injured.understoodHealth=35;injured.position={-26.2f,0};
    injured.assignment.task=Task::RearGuard;injured.assignment.position=injured.position;leader.knownWounded[2]=true;
    Vec3 useful=RearPosition(leader,injured,{leader,injured},blocked,14);
    assert(useful.x>-15&&ClearLine3D(blocked,{useful.x,useful.y,1.5f},{15,0,1.45f}));
    injured.position=useful;injured.assignment.position=useful;
    assert(Distance(RearPosition(leader,injured,{leader,injured},blocked,14),useful)<0.01f);

}
static void ManeuverAndFireLaneTests() {
    Config config;Map map;map.obstacles.clear();Frame f=InitialFrame(config);
    auto& leader=f.soldiers[0];leader.position={-30,0};auto point=f.soldiers[1];point.position=leader.position;
    std::vector<Soldier> squad{leader,point};SquadCommand command;command.advancing=true;
    UpdateManeuver(leader,squad,map,config,{},command,10);assert(!command.hasWaypoint);
    RememberFireArea(leader,{{-12,0},0.9f,10});
    UpdateManeuver(leader,squad,map,config,{},command,10);assert(!command.hasWaypoint);
    RememberFireArea(leader,{{-12,0},0.9f,16});
    UpdateManeuver(leader,squad,map,config,{},command,16);assert(!command.hasWaypoint); // fire location alone does not invent an enemy track or a cover destination
    assert(FireDanger(leader,{-12,0},17)>0);assert(FireDanger(leader,{-12,0},35)==0);
    // Reports cannot reveal danger until processed, and retain their original location/time.
    leader.fireAreas={};ReactionRuntime reaction;std::vector<Event> events;
    PendingReaction report;report.kind=ReactionKind::FireReport;report.fireArea={{-12,0},0.9f,10};QueueReaction(leader,report,10,reaction);
    f.time=10.01f;ProcessReactions(f,reaction,events);assert(FireDanger(leader,{-12,0},f.time)==0);
    f.time=11;ProcessReactions(f,reaction,events);assert(FireDanger(leader,{-12,0},f.time)>0.5f);
    Soldier gun;gun.id=7;EquipWeapon(gun,{WeaponId::MachineGun,{}});gun.assignment.task=Task::Overwatch;gun.position={0,0};
    gun.allies[2]={true,true,{15,0},10,1.85f};
    assert(ShouldHoldFire(gun,FriendlyFireRisk(gun,map,{40,0,1.45f},10)));
    gun.allies[2].position.y=1.25f;
    assert(ShouldHoldFire(gun,FriendlyFireRisk(gun,map,{40,0,1.45f},10)));
    Soldier rifle=gun;EquipWeapon(rifle,{WeaponId::Rifle,{}});
    assert(!ShouldHoldFire(rifle,FriendlyFireRisk(rifle,map,{40,0,1.45f},10)));
    gun.allies[2].position.y=3;gun.allyVelocity[2]={0,-3.2f};
    assert(ShouldHoldFire(gun,FriendlyFireRisk(gun,map,{40,0,1.45f},10))); // predicted crossing
    assert(FriendlyFireRisk(gun,map,{40,0,1.45f},12)==0); // stale sighting
    gun.allies[2].position={15,0};gun.allyVelocity[2]={};
    gun.contacts[TeamSize]={true,true,{40,0},10};gun.contacts[TeamSize+1]={true,true,{0,30},10};
    assert(SelectFireSolution(gun,map,10).enemy==TeamSize+1); // choose a clear alternate target
    map.obstacles={{{8,0},{0.6f,4},false}};
    assert(FriendlyFireRisk(gun,map,{40,0,1.45f},10)==0); // solid wall occludes the friendly
    // Persistent blockage travels gunner -> officer -> sergeant -> movement order.
    map.obstacles.clear();f=InitialFrame(config);CommandRuntime runtime;events.clear();
    for(int i=0;i<SquadSize;++i)f.soldiers[i].position={-20,float(i-2)*3};
    auto& support=f.soldiers[7];support.position={-30,0};support.holdingFire=true;support.blockedSince=0;support.blockedSeconds=1.5f;support.aimPoint={30,0};
    auto advance=[&](float to){while(f.time+0.049f<to){f.time+=0.05f;UpdateCommands(f,map,config,runtime,events);}};
    advance(0.9f);assert(f.soldiers[0].blockedLanes[7].observedAt<0);
    advance(9);assert(f.soldiers[0].blockedLanes[7].observedAt>0&&f.soldiers[1].blockedLanes[7].observedAt>0);
    assert(f.soldiers[8].blockedLanes[7].observedAt>0); // report shared with neighbouring officer
    const auto& blocker=f.soldiers[2];assert(blocker.assignment.task==Task::ClearLane);
    assert(!InReportedFireLane(f.soldiers[1],2,blocker.assignment.position,f.time));
    assert(InReportedFireLane(f.soldiers[1],2,blocker.position,f.time));
    auto clear=ClearReportedFireLane(f.soldiers[1],blocker,{0,0},map,f.time);assert(Distance(clear,blocker.assignment.position)<0.01f);
}
static void MovementRecoveryAndShelterTests() {
    Config config;Map depot=MakeSkirmishMap();auto f=InitialFrame(config);
    for(int squad:{0,3,4,7}) {
        const auto& s=f.soldiers[squad*SquadSize+1];
        Vec3 blocked=depot.buildings[squad%depot.buildings.size()].center+Vec3{5,2.6f},resolved;
        assert(!Walkable(depot,blocked));
        assert(ResolveOrderPosition(depot,s.position,blocked,resolved));
        assert(Walkable(depot,resolved)&&Distance(resolved,blocked)<=8&&Distance(resolved,s.position)>20);
        const auto path=FindPath(depot,s.position,resolved);assert(!path.empty()&&Distance(path.back(),resolved)<0.01f);
    }
    Map sealed;sealed.obstacles={{{0,0},{200,200},true}};Vec3 impossible;
    assert(!ResolveOrderPosition(sealed,{-70,0},{0,0},impossible));
    // A 12 m gap used to stop the NCO without triggering the 14 m rally rule.
    Map empty;empty.obstacles.clear();CommandRuntime runtime;std::vector<Event> events;
    auto& nco=f.soldiers[1];nco.position={0,0};nco.assignment.task=Task::Advance;nco.assignment.position={20,0};nco.assignment.serial=1;
    for(int id=2;id<7;++id)f.soldiers[id].position={-12,float(id-4)};
    f.time=1;UpdateCommands(f,empty,config,runtime,events);assert(nco.regrouping);
    for(int id=2;id<7;++id){bool rally=false;for(const auto& message:runtime.messages)if(message.sender==1&&message.recipient==id&&message.assignment.task==Task::Rally)rally=true;assert(rally!=IsPlatoonStaff(f.soldiers[id]));}
    for(int id=2;id<7;++id)f.soldiers[id].position={-5,float(id-4)};
    f.time=3.1f;UpdateCommands(f,empty,config,runtime,events);assert(!nco.regrouping);
    // Protective cover remains useful when a second wall blocks its firing angle.
    Map cover;cover.obstacles={{{0,0},{0.6f,4},false,true},{{4,0},{0.6f,6},false}};
    for(Task task:{Task::Flank,Task::PullBack,Task::ClearLane,Task::Rally,Task::Hold}) {
        Soldier s;s.position={-6,6};s.suppression=0.7f;s.contacts[TeamSize]={true,true,{12,8},0};
        s.assignment.task=task;s.assignment.position={20,8};s.assignment.sector={12,8};Tactics memory;
        assert(!ProtectedAt(cover,s.position,{12,8},Stance::Standing));
        auto order=ChooseOrder(s,cover,config,{},memory,0);
        assert(order.action==Action::Cover&&order.reason==Reason::EmergencyCover&&memory.emergency&&memory.defensiveOnly);
        assert(ProtectedAt(cover,order.goal,{12,8},memory.halfCover?Stance::Crouched:Stance::Standing));
        s.position=order.goal;s.stance=memory.halfCover?Stance::Crouched:Stance::Standing;
        order=ChooseOrder(s,cover,config,{},memory,1);assert(order.action==Action::Hold&&order.reason==Reason::ProtectedHold);
        s.suppression=0;s.contacts={};
        order=ChooseOrder(s,cover,config,{},memory,memory.expires+1);
        assert(Distance(order.goal,s.assignment.position)<0.01f); // mission resumes after the safety override
    }
    // Even modest incoming fire overrides a march; a stopped soldier with a
    // registered visible enemy finds cover before suppression builds up.
    for(Task task:{Task::Advance,Task::BoundMove,Task::BoundCover,Task::Rally,Task::Flank,Task::RearGuard})for(bool incoming:{false,true}) {
        Soldier s;s.position={-6,6};s.action=incoming?Action::Advance:Action::Fire;s.suppression=incoming?0.12f:0;
        s.contacts[TeamSize]={true,true,{12,8},0};s.assignment.task=task;s.assignment.position={20,8};s.assignment.sector={12,8};Tactics m;
        auto choice=ChooseOrder(s,cover,config,{},m,0);
        assert(choice.action==Action::Cover&&choice.reason==Reason::EmergencyCover&&m.assigned);
        assert(ProtectedAt(cover,choice.goal,{12,8},m.halfCover?Stance::Crouched:Stance::Standing));
    }
    Soldier exposed;exposed.position={-20,0};exposed.action=Action::Fire;exposed.contacts[TeamSize]={true,true,{15,0},0};
    Tactics none;auto escape=ChooseOrder(exposed,empty,config,{},none,0);
    assert(escape.action==Action::Retreat&&escape.stance==Stance::Crouched&&Distance(escape.goal,exposed.position)>1);
    Soldier idle;idle.position={-6,6};idle.assignment.task=Task::Hold;idle.assignment.position=idle.position;idle.assignment.sector={12,8};Tactics memory;
    auto order=ChooseOrder(idle,cover,config,{},memory,0);assert(order.action==Action::Cover&&memory.emergency);
}
static void SquadProgressTests() {
    Config config;Map map;map.obstacles.clear();auto f=InitialFrame(config);
    Soldier leader=f.soldiers[0];std::vector<Soldier> squad(f.soldiers.begin(),f.soldiers.begin()+SquadSize);
    for(auto& s:squad)s.position={-40,float(s.id-4)*2};
    leader.position={-45,0};
    SquadCommand cmd;cmd.advancing=true;cmd.leader=0;cmd.support=7;ProgressRuntime runtime;
    UpdateSquadProgress(leader,squad,map,{},cmd,runtime,0);
    UpdateSquadProgress(leader,squad,map,{},cmd,runtime,17);assert(cmd.recoveries==0);
    UpdateSquadProgress(leader,squad,map,{},cmd,runtime,19);
    assert(cmd.recoveries==1&&cmd.hasWaypoint&&cmd.maneuver==Maneuver::Reposition&&cmd.supportNeedsMove);
    assert(Walkable(map,cmd.waypoint)&&!FindPath(map,squad[1].position,cmd.waypoint).empty());
    Vec3 first=cmd.waypoint;
    UpdateSquadProgress(leader,squad,map,{},cmd,runtime,23);assert(cmd.recoveries==1&&cmd.idleSeconds==23);
    UpdateSquadProgress(leader,squad,map,{},cmd,runtime,40);assert(cmd.recoveries==2&&Distance(first,cmd.waypoint)>6);
    // Productive support is a successful assignment, regardless of stationary time.
    cmd={};cmd.advancing=true;cmd.leader=0;cmd.support=7;runtime={};
    UpdateSquadProgress(leader,squad,map,{},cmd,runtime,0);
    cmd.supportUseful=true;leader.supportActivityAt=20;UpdateSquadProgress(leader,squad,map,{},cmd,runtime,20);
    assert(cmd.recoveries==0&&cmd.progress==SquadProgress::Supporting);
    leader.supportActivityAt=41;UpdateSquadProgress(leader,squad,map,{},cmd,runtime,41);assert(cmd.recoveries==0&&!cmd.supportNeedsMove);
    cmd.supportUseful=false;leader.supportActivityAt=-100;UpdateSquadProgress(leader,squad,map,{},cmd,runtime,61);assert(cmd.recoveries==1);
    // Suppression and regrouping get time to resolve, but still have a deadline.
    for(bool underFire:{false,true}) {
        cmd={};cmd.advancing=true;cmd.leader=0;cmd.support=7;runtime={};leader.supportActivityAt=-100;
        squad[1].regrouping=!underFire;
        UpdateSquadProgress(leader,squad,map,{},cmd,runtime,0);
        if(underFire)RememberFireArea(leader,{{-40,-1},1,20});
        UpdateSquadProgress(leader,squad,map,{},cmd,runtime,20);
        assert(cmd.recoveries==0&&cmd.progress==(underFire?SquadProgress::UnderFire:SquadProgress::Regrouping));
        if(underFire)RememberFireArea(leader,{{-40,-1},1,31});
        UpdateSquadProgress(leader,squad,map,{},cmd,runtime,underFire?31.f:27.f);assert(cmd.recoveries==1);
        leader.fireAreas={};squad[1].regrouping=false;
    }
    // Actual movement resets the timer; a changed plan alone does not.
    cmd={};cmd.advancing=true;cmd.leader=0;cmd.support=7;runtime={};leader.supportActivityAt=-100;
    UpdateSquadProgress(leader,squad,map,{},cmd,runtime,0);
    for(auto& s:squad)s.position.x+=8;
    UpdateSquadProgress(leader,squad,map,{},cmd,runtime,15);assert(cmd.idleSeconds==0&&cmd.progress==SquadProgress::Moving);
    UpdateSquadProgress(leader,squad,map,{},cmd,runtime,25);assert(cmd.recoveries==0);
    for(const auto& s:squad)leader.knownWounded[s.id]=true;
    UpdateSquadProgress(leader,squad,map,{},cmd,runtime,100);assert(cmd.progress==SquadProgress::RearGuard&&cmd.recoveries==0);
    leader.knownWounded={};
    // Standing in the old centre gives no capture exemption from progress checks.
    for(auto& s:squad)s.position={0,0};
    cmd.mission={40,20};cmd.hasWaypoint=false;runtime={};
    UpdateSquadProgress(leader,squad,map,{},cmd,runtime,180);
    UpdateSquadProgress(leader,squad,map,{},cmd,runtime,200);assert(cmd.recoveries==1);
    // Fire activity is known only after the support report's reaction finishes.
    ReactionRuntime reaction;std::vector<Event> events;PendingReaction report;report.kind=ReactionKind::Ready;report.source=7;report.rounds=12;report.ready=true;
    f.command[0].leader=0;f.command[0].support=7;QueueReaction(f.soldiers[0],report,1,reaction);
    f.time=1.01f;ProcessReactions(f,reaction,events);assert(f.soldiers[0].supportActivityAt<0);
    f.time=2;ProcessReactions(f,reaction,events);assert(f.soldiers[0].reportedSupportRounds==12&&f.soldiers[0].supportActivityAt==2);
}
static void ReassessmentTests() {
    Config config;Map map;map.obstacles={{{-10,0},{0.6f,14},false,true},{{-38,0},{0.6f,14},false,true}};
    auto frame=InitialFrame(config);std::vector<Soldier> squad(frame.soldiers.begin(),frame.soldiers.begin()+8);
    for(auto& s:squad)s.position={-20,float(s.id%3-1)*2};
    Soldier leader=squad[0];leader.contacts[TeamSize]={true,true,{30,0},0};
    SquadCommand cmd;cmd.leader=0;cmd.support=7;cmd.advancing=true;
    // Persistent contacts retain resistance estimates beyond a duck/peek cycle.
    UpdateManeuver(leader,squad,map,config,{},cmd,0);assert(cmd.enemyStrength>0);
    UpdateManeuver(leader,squad,map,config,{},cmd,25);assert(!cmd.searching&&cmd.enemyStrength>0);
    UpdateManeuver(leader,squad,map,config,{},cmd,130);assert(cmd.searching&&cmd.enemyStrength==0);
    leader.contacts={};cmd={};cmd.advancing=true;cmd.searchLeg=0;squad[1].position={50,0};UpdateSearchMission(leader,squad,map,config,cmd,130);
    assert(cmd.searchLeg==2&&cmd.mission.x==45);
    squad[1].position={60,0};UpdateSearchMission(leader,squad,map,config,cmd,131);assert(cmd.mission.x==110);
    // A 300-second old overwatch/shelter commitment must release on a new quiet order.
    Soldier rifle;rifle.id=2;rifle.position={-11.2f,0};rifle.assignment.task=Task::Advance;
    rifle.assignment.position={10,12};rifle.assignment.sector={30,0};
    Tactics memory;memory.assigned=true;memory.emergency=true;memory.halfCover=true;
    memory.shelter=memory.peek=rifle.position;memory.expires=300;
    auto order=ChooseOrder(rifle,map,config,{},memory,25);
    assert(order.action==Action::Advance&&Distance(order.goal,rifle.assignment.position)<0.01f&&!memory.assigned);
    memory.assigned=true;memory.emergency=true;memory.shelter=memory.peek=rifle.position;memory.expires=300;
    rifle.suppression=0.8f;order=ChooseOrder(rifle,map,config,{},memory,25);
    assert(Distance(order.goal,rifle.position)<1&&memory.assigned); // shelter still wins under fire
    // The gun follows a distant searching rifle group even when no firing perch exists.
    map.obstacles.clear();squad.assign(frame.soldiers.begin(),frame.soldiers.begin()+8);
    for(auto& unit:squad)unit.position={30,float(unit.id%3)*2};
    squad[7].position={-50,0};
    leader=squad[0];cmd={};cmd.advancing=true;cmd.support=7;cmd.leader=0;cmd.mission={60,0};
    auto orders=PlanSquad(leader,squad,map,config,cmd,30);bool follows=false;
    for(const auto& o:orders)if(o.recipient==7)follows=o.task==Task::Rally&&o.position.x>15;
    assert(follows);
    // The sergeant becomes the point when the corporal can no longer lead.
    for(bool dead:{false,true}) {
        squad[1].health=dead?0:35;leader.knownWounded[1]=!dead;
        auto plan=PlanSquad(leader,squad,map,config,cmd,30);bool leads=false;
        for(const auto& o:plan)if(o.recipient==leader.id)leads=o.task==Task::Advance&&Distance(o.position,cmd.mission)<0.01f;
        assert(leads);
    }
    for(auto& unit:squad){unit.health=unit.understoodHealth=35;leader.knownWounded[unit.id]=true;}
    leader.health=leader.understoodHealth=35;
    auto woundedPlan=PlanSquad(leader,squad,map,config,cmd,30);
    for(const auto& o:woundedPlan){assert(o.task==Task::RearGuard);assert(Distance(o.position,cmd.mission)<Distance(squad[o.recipient].position,cmd.mission));}
    // Restore a healthy squad for the building release check.
    squad.assign(frame.soldiers.begin(),frame.soldiers.begin()+8);leader=squad[0];

    // Window teams leave an empty sector rather than wait for a long building hold.
    map=MakeSkirmishMap();cmd.building=0;cmd.buildingUntil=100;cmd.teamPlan.windowTeam={{2,3}};
    UpdateCoordination(leader,squad,map,{},cmd,30);assert(cmd.building<0&&cmd.teamPlan.windowTeam[0]<0);
    std::cout<<"Reassessment: delayed covered push/withdrawal, heavier resistance, quiet search, stale cover release, suppression veto and support follow verified\n";
}
static void DigInTests() {
    Map map;map.obstacles={{{0,0},{0.6f,4},false,true}};
    assert(ProtectedAt(map,{-1.2f,0},{20,0},Stance::Crouched));
    assert(!ProtectedAt(map,{1.2f,0},{20,0},Stance::Crouched)); // enemy is on our side of the wall
    assert(!ProtectedAt(map,{-10,0},{20,0},Stance::Crouched)); // distant obstruction is not shelter
    Soldier s;s.position={-4,0};s.contacts[TeamSize]={true,true,{20,0},0};Tactics memory;
    ChooseOrder(s,map,Config{}, {},memory,0);assert(memory.assigned);s.position=memory.shelter;
    for(float time:{1.f,20.f,40.f,60.f}) {s.contacts[TeamSize].observedAt=time;
        auto order=ChooseOrder(s,map,Config{}, {},memory,time);assert(order.action==Action::Fire&&Distance(order.goal,s.position)<0.1f);s.action=order.action;}
    // Ordinary pressure does not break a productive firing line.
    auto f=InitialFrame(Config{});std::vector<Soldier> squad(f.soldiers.begin(),f.soldiers.begin()+8);
    for(auto& unit:squad)unit.position={-1.2f,float(unit.id%3-1)*2};
    Soldier leader=squad[0];leader.contacts[TeamSize]={true,true,{20,0},10};SquadCommand cmd;cmd.advancing=true;cmd.leader=0;cmd.support=7;
    for(auto& unit:squad)unit.contacts[TeamSize]={true,true,{20,0},10};
    RememberFireArea(leader,{{-1,0},0.3f,10});UpdateManeuver(leader,squad,map,Config{}, {},cmd,10);
    assert(cmd.engaged&&!cmd.hasWaypoint);
    UpdateCoordination(leader,squad,map,{},cmd,10);assert(!cmd.teamPlan.bounding);
    ProgressRuntime progress;squad[2].rounds=1;UpdateSquadProgress(leader,squad,map,{},cmd,progress,10);
    ++squad[2].rounds;UpdateSquadProgress(leader,squad,map,{},cmd,progress,50);assert(cmd.recoveries==0);
    // A sustained productive engagement must not trigger a timer-only maneuver.
    ++squad[2].rounds;UpdateSquadProgress(leader,squad,map,{},cmd,progress,76);assert(cmd.recoveries==0);
    cmd.engaged=false;UpdateSquadProgress(leader,squad,map,{},cmd,progress,96);assert(cmd.recoveries==1);
    Map depot=MakeSkirmishMap();assert(depot.buildings.size()==4);
    for(const auto& building:depot.buildings)assert(Distance(building.center,Vec3{})>30);
    for(Vec3 target:std::vector<Vec3>{{0,-46},{0,0},{0,46}})assert(!FindPath(depot,{-70,0},target).empty());
}
static void CoordinationTests() {
    Map map;map.obstacles={{{-27,0},{0.6f,10},false,true}};auto f=InitialFrame(Config{});
    std::vector<Soldier> squad(f.soldiers.begin(),f.soldiers.begin()+SquadSize);
    for(auto& s:squad){s.position={-30,float(s.id%3)*2};s.assignment.task=Task::Advance;}
    Soldier leader=squad[0];leader.contacts[TeamSize]={true,true,{15,0},0};
    SquadCommand cmd;cmd.leader=0;cmd.support=7;cmd.advancing=true;
    UpdateCoordination(leader,squad,map,{},cmd,0);
    assert(cmd.teamPlan.bounding&&!cmd.teamPlan.released);
    auto plan=PlanSquad(leader,squad,map,Config{},cmd,0);bool directive=false;
    for(const auto& p:plan)if(p.recipient==1){assert(p.teamPlan.bounding&&!p.teamPlan.released);directive=true;}
    assert(directive);
    for(auto& s:squad)if(FireTeam(s.id)!=cmd.teamPlan.moving){s.position=cmd.teamPlan.holds[s.id%SquadSize];s.assignment.task=Task::BoundCover;s.assignment.position=s.position;}
    UpdateCoordination(leader,squad,map,{},cmd,4);assert(cmd.teamPlan.released);
    int oldTeam=cmd.teamPlan.moving;
    for(auto& s:squad)if(s.id!=0&&s.id!=7&&FireTeam(s.id)==oldTeam)s.position=TeamOrder(s,cmd.teamPlan,{}).goal;
    leader.contacts[TeamSize].observedAt=8;cmd.engaged=true; // finish the released bound before digging in
    UpdateCoordination(leader,squad,map,{},cmd,8);assert(cmd.boundsCompleted==1&&cmd.teamPlan.moving!=oldTeam&&!cmd.teamPlan.released);
    // Disabled/suppressed covering elements do not release a new bound.
    for(auto& s:squad)s.suppression=0.8f;
    leader.contacts[TeamSize].observedAt=12;UpdateCoordination(leader,squad,map,{},cmd,12);assert(!cmd.teamPlan.released);
    // A hold order in an open field is not a covering element.
    Map bare;bare.obstacles.clear();auto unsafe=cmd;unsafe.teamPlan.released=false;
    for(auto& s:squad){s.suppression=0;s.assignment.task=Task::BoundCover;unsafe.teamPlan.holds[s.id%SquadSize]=s.position;}
    UpdateCoordination(leader,squad,bare,{},unsafe,12);assert(!unsafe.teamPlan.released);
    // Useful overwatch requires a fresh processed report with an angle to known threats.
    cmd={};cmd.leader=0;cmd.support=7;cmd.advancing=true;
    leader.supportReportAt=leader.supportReadyAt=leader.supportContactAt=20;leader.reportedSupportPosition={-40,0};leader.contacts[TeamSize].observedAt=20;
    UpdateCoordination(leader,squad,map,{},cmd,20);assert(cmd.supportUseful&&cmd.supportState==SupportState::Effective);
    leader.supportBlocked=true;
    UpdateCoordination(leader,squad,map,{},cmd,21);assert(!cmd.supportUseful&&cmd.supportState==SupportState::Blocked);
    leader.supportReportAt=leader.supportReadyAt=leader.supportContactAt=30;leader.contacts[TeamSize].observedAt=30;
    UpdateCoordination(leader,squad,map,{},cmd,30);assert(cmd.supportNeedsMove&&cmd.supportRepositions==1);
    UpdateCoordination(leader,squad,map,{},cmd,40);assert(!cmd.supportUseful); // stale communication
    // Buildings receive a small explicit team, and another squad's claim is respected.
    Map building;AddBuilding(building,{0,0});
    for(auto& s:squad){s.position={-9,float(s.id%3)*2};s.suppression=0;}
    leader=squad[0];leader.contacts[TeamSize]={true,true,{25,2.6f},0};
    cmd={};cmd.leader=0;cmd.support=7;cmd.advancing=true;
    UpdateCoordination(leader,squad,building,{},cmd,0);assert(cmd.building==0);
    assert(cmd.teamPlan.windowTeam[0]>=2&&cmd.teamPlan.windowTeam[1]>=2&&cmd.teamPlan.windowTeam[0]!=cmd.teamPlan.windowTeam[1]);
    assert(Distance(cmd.teamPlan.windows[0],cmd.teamPlan.windows[1])>=2.2f);
    SquadCommand other;other.leader=0;other.support=7;other.advancing=true;
    UpdateCoordination(leader,squad,building,{0},other,0);assert(other.building==-1);
    cmd.maneuver=Maneuver::PullBack;UpdateCoordination(leader,squad,building,{},cmd,1);assert(cmd.building==-1&&cmd.teamPlan.windowTeam[0]<0);
    // Passage grants are FIFO and are released after traversal or a casualty.
    TrafficRuntime traffic;auto passages=BuildingPassages(building);
    Soldier left;left.id=2;left.position={-8,0};left.goal={0,2};
    Soldier right;right.id=3;right.position={-3,0};right.goal={-8,0};
    std::vector<TrafficInput> requests{{&left,{-3,0},true},{&right,{-8,0},true}};
    auto decisions=CoordinatePassages(building,passages,requests,traffic,0);
    assert(!decisions[2].waiting&&decisions[3].waiting&&decisions[3].passage==0);
    assert(Walkable(building,decisions[3].holdingPoint));
    assert(SegmentBox(right.position,decisions[3].holdingPoint,{passages[0].center,passages[0].half,false},0.15f)<0);
    for(const auto& p:passages)assert(!InsidePassage(p,decisions[3].holdingPoint,0.5f));
    left.position={-5,0};CoordinatePassages(building,passages,requests,traffic,1);
    left.position={-2,1};requests[0].next={0,2};
    decisions=CoordinatePassages(building,passages,requests,traffic,2);assert(!decisions[3].waiting&&traffic.leases[0][0].owner==3);
    right.health=0;decisions=CoordinatePassages(building,passages,requests,traffic,3);assert(traffic.leases[0][0].owner!=3);
    Vec3 final;assert(ResolveOrderPosition(building,{-8,0},{-5,0},final));assert(!InsidePassage(passages[0],final));
    TrafficRuntime stairs;
    Soldier up;up.id=2;up.position={-3,-0.8f};up.goal={4,2,UpperFloor};
    Soldier down;down.id=3;down.position={3,-0.8f,UpperFloor};down.goal={-4,2};
    std::vector<TrafficInput> climbs{{&up,down.position,true},{&down,up.position,true}};
    decisions=CoordinatePassages(building,passages,climbs,stairs,0);
    assert(!decisions[2].waiting&&decisions[3].waiting&&decisions[3].passage==2);
    assert(Walkable(building,decisions[3].holdingPoint)&&!InsidePassage(passages[2],decisions[3].holdingPoint,0.5f));
    // A stopped owner must evacuate along the stair connection rather than
    // retaining the lock forever or attempting an impossible diagonal floor change.
    up.position={0,-0.8f,UpperFloor*0.5f};
    CoordinatePassages(building,passages,climbs,stairs,0.5f);
    decisions=CoordinatePassages(building,passages,climbs,stairs,2.6f);
    assert(decisions[2].waiting&&stairs.leases[0][2].evacuating);
    assert(!InsidePassage(passages[2],decisions[2].holdingPoint));
    assert(!FindPath(building,up.position,decisions[2].holdingPoint).empty());
    up.position={3.9f,1,UpperFloor};climbs[0].next=up.goal;
    decisions=CoordinatePassages(building,passages,climbs,stairs,3);assert(!decisions[3].waiting);

}
#include "lab_tests.h"
#include "route_tests.h"
#include "recovery_tests.h"
#include "recovery_gate_tests.h"
#include "foundations_tests.h"
#include "cognition_tests.h"
#include "decision_loop_tests.h"
#include "reliability_tests.h"
#include "scenario_gen_tests.h"
#include "drills_tests.h"
#include "platoon_tests.h"
#include "leader_tests.h"
#include "stats_tests.h"
int main(int argc,char** argv) {
    if(argc>1&&std::string(argv[1])=="--leaders"){LeaderTests();return 0;}
    if(argc>1&&std::string(argv[1])=="--stats"){StatsTests();return 0;}
    if(argc>1&&std::string(argv[1])=="--platoon"){PlatoonTests(argc>2?argv[2]:"all");return 0;}
    if(argc>1&&std::string(argv[1])=="--drills"){DrillsTests(argc>2?argv[2]:"all");return 0;}
    if(argc>1&&std::string(argv[1])=="--generated"){ScenarioGeneratorTests();return 0;}
    if(argc>1&&std::string(argv[1])=="--reliability"){ReliabilityTests();return 0;}
    if(argc>1&&std::string(argv[1])=="--normal-cognition"){NormalMapScenarios();return 0;}
    if(argc>1&&std::string(argv[1])=="--decision-loop"){DecisionLoopTests();return 0;}
    if(argc>1&&std::string(argv[1])=="--cognition"){CognitionTests();return 0;}
    if(argc>1&&std::string(argv[1])=="--foundations"){FoundationsTests();return 0;}
    if(argc>1&&std::string(argv[1])=="--recovery"){RecoveryTests();RecoveryGateTests();return 0;}
    if(argc>1&&std::string(argv[1])=="--routes"){RouteTests();return 0;}
    RouteTests();
    std::cout.setf(std::ios::unitbuf);
    auto begin=std::chrono::steady_clock::now();
    if(argc>1&&std::string(argv[1])=="--encounters"){MGEncounterTests();return 0;}
    Config original;
    assert(SameConfig(original,original));
    {auto changed=original;changed.drills=true;assert(!SameConfig(original,changed));changed=original;changed.family=ScenarioFamily::F1;assert(!SameConfig(original,changed));changed=original;++changed.genSeed;assert(!SameConfig(original,changed));}
    for(int field=0;field<6;++field){Config changed=original;
        switch(field){case 0:++changed.seed;break;case 1:changed.doctrine=Doctrine::Cautious;break;case 2:changed.approach=Approach::North;break;case 3:changed.supportWeapon=false;break;case 4:changed.maxSeconds=60;break;case 5:changed.terrain=Terrain::Trenches;break;}
        assert(!SameConfig(original,changed));
    }
    BallisticsTests();SightAndValleyTests();DeathmatchTests();PlatoonTests();BuildingTests();TacticsTests();LowCoverTests();CommandAndAimTests();ReactionAndMachineGunTests();WoundedRearGuardTests();ManeuverAndFireLaneTests();MovementRecoveryAndShelterTests();SquadProgressTests();CoordinationTests();DigInTests();ReassessmentTests();LabTests();
    if(argc>1){std::cout<<"Focused simulation checks passed\n";return 0;}
    MGEncounterTests();
    Map m; m.obstacles={{{0,0},{2,5},true}};
    assert(!ClearLine(m,{-8,0},{8,0}));
    assert(ClearLine(m,{-8,7},{8,7}));
    assert(std::abs(SegmentBox({-8,0},{8,0},m.obstacles[0])-0.375f)<0.001f);
    auto path=FindPath(m,{-8,0},{8,0});assert(!path.empty());
    Vec3 p{-8,0};for(Vec3 q:path){assert(Walkable(m,q));assert(ClearLine(m,p,q,0.46f));p=q;}
    assert(Distance(p,{8,0})<0.01f);
    assert(FindPath(m,{-8,0},{0,0}).empty());
    Config c;auto one=Simulate(c),two=Simulate(c);
    // Verify recorded rounds vary above and below the compensated vertical aim,
    // and a gun can deliver a stationary burst at a fixed known position.
    bool above=false,below=false;int longestBurst=0;
    std::array<const Shot*,UnitCount> previous{};std::array<int,UnitCount> burstLength{};
    for(const auto& shot:one.shots) {
        if(shot.flight.size()>1) {
            const auto& a=shot.flight[0];const auto& b=shot.flight[1];float dt=b.time-a.time;
            float speed=one.frames.front().soldiers[shot.owner].gun.muzzleVelocity;
            float travel=Distance(shot.start,{shot.aimedAt.x,shot.aimedAt.y})/speed;
            float vertical=(b.position.z-a.position.z)/dt+4.905f*dt;
            float error=vertical-((shot.aimedAt.z-a.position.z)/travel+4.905f*travel);
            above|=error>0.1f;below|=error<-0.1f;
        }
        const auto* prior=previous[shot.owner];
        if(shot.suppressive) {
            bool continues=prior&&prior->suppressive&&shot.time-prior->time<0.16f&&Distance(shot.start,prior->start)<0.001f&&
                Distance({shot.aimedAt.x,shot.aimedAt.y},{prior->aimedAt.x,prior->aimedAt.y})<0.001f;
            burstLength[shot.owner]=continues?burstLength[shot.owner]+1:1;
            longestBurst=std::max(longestBurst,burstLength[shot.owner]);
        }
        previous[shot.owner]=&shot;
    }
    assert(above&&below&&longestBurst>=8);
    std::cout<<"Recorded vertical dispersion: above and below aim; longest stationary MG burst: "<<longestBurst<<" rounds\n";
    auto initial=InitialFrame(c);
    for(int i=0;i<TeamSize;++i)assert(Distance(initial.soldiers[i].position,initial.soldiers[i+TeamSize].position*-1.f)<0.001f);
    assert(Fingerprint(one)==Fingerprint(two));
    c.seed++;auto changed=Simulate(c);assert(Fingerprint(one)!=Fingerprint(changed));
    size_t pairedBounds=0,windowTeamRounds=0,passageWaits=0,usefulSupport=0,engagedFire=0;int completedBounds=0;
    auto coordination=[&](const Record& r){
        for(const auto& f:r.frames){for(const auto& cmd:f.command)usefulSupport+=cmd.supportUseful;
            for(int q=0;q<SquadCount;++q){bool moving=false,covering=false;
                for(const auto& s:f.soldiers)if(s.Active()&&s.squad==q){engagedFire+=f.command[q].engaged&&s.action==Action::Fire;moving|=s.assignment.task==Task::BoundMove;covering|=s.assignment.task==Task::BoundCover;passageWaits+=s.waitingPassage>=0;}
                pairedBounds+=moving&&covering;
            }
        }
        for(const auto& cmd:r.frames.back().command)completedBounds+=cmd.boundsCompleted;
        for(const auto& shot:r.shots){auto at=std::upper_bound(r.frames.begin(),r.frames.end(),shot.time,[](float t,const Frame& f){return t<f.time;});
            if(at!=r.frames.begin()&&(at-1)->soldiers[shot.owner].assignment.task==Task::Window)++windowTeamRounds;
        }
    };
    coordination(one);coordination(changed);
    int results[3]={0,0,0};size_t totalShots=0,totalHits=0,memories=0,settled=0,coverFire=0,crouched=0,popUps=0,overwatchRounds=0;
    size_t upperShots=0,groundWindowShots=0,stairSamples=0;
    size_t rearRounds=0,heldFire=0,laneOrders=0,flankFrames=0,pullBackFrames=0,friendlyHits=0,multiVictim=0;
    for(int seed=100;seed<104;++seed) {
        c.seed=seed;c.doctrine=Doctrine(seed%3);c.approach=Approach((seed/3)%3);c.supportWeapon=seed%2;
        auto r=Simulate(c);++results[r.winner+1];coordination(r);
        assert(r.frames.front().time==0);assert(r.frames.back().time==r.duration);
        assert(r.duration>1&&r.duration<=c.maxSeconds+0.1f);
        assert(!r.shots.empty());assert(!r.conclusion.empty());
        float time=-1;std::array<float,UnitCount> health;
        for(int id=0;id<UnitCount;++id)health[id]=r.frames.front().soldiers[id].maxHealth;
        for(const auto& f:r.frames) {
            assert(f.time>time);time=f.time;
            for(const auto& cmd:f.command)if(cmd.hasWaypoint){if(cmd.maneuver==Maneuver::PullBack)++pullBackFrames;else ++flankFrames;}
            for(const auto& s:f.soldiers) {
                heldFire+=s.holdingFire;laneOrders+=s.assignment.task==Task::ClearLane;
                assert(std::isfinite(s.position.x)&&std::isfinite(s.position.y));
                assert(Walkable(r.map,s.position));
                assert(s.health>=0&&s.health<=health[s.id]);health[s.id]=s.health;
                assert(s.suppression>=0&&s.suppression<=1);
                assert(s.aim>=0&&s.aim<=1);
                if(s.assignment.task!=Task::None) {assert(s.assignment.issuer/SquadSize==s.squad);assert(s.assignment.receivedAt<=f.time);}
                for(const auto& report:s.reports)if(report.known){assert(!report.visible);assert(report.observedAt<=f.time);}
                if(s.reason==Reason::Settle)++settled;
                if(s.position.z>0.1f&&s.position.z<UpperFloor-0.1f&&OnStairs(r.map,s.position))++stairSamples;
                if(s.reason==Reason::CoverFire)++coverFire;
                if(s.Active()&&s.stance==Stance::Crouched)++crouched;
                if(s.reason==Reason::PopUp||s.reason==Reason::SuppressiveFire)++popUps;
                if(!s.Active())assert(s.action==Action::Wounded||s.action==Action::Killed);
                for(int j=0;j<UnitCount;++j) {
                    const auto& k=s.contacts[j];
                    if(!s.Active())assert(!k.visible);
                    if(k.known){assert(j/TeamSize!=s.team);assert(k.observedAt<=f.time);}
                    if(k.known&&!k.visible)++memories;
                }
            }
        }
        for(const auto& shot:r.shots) {
            ++totalShots;if(shot.hit)++totalHits;
            if(shot.hit&&shot.owner/TeamSize==shot.target/TeamSize)++friendlyHits;
            auto at=std::upper_bound(r.frames.begin(),r.frames.end(),shot.time,[](float t,const Frame& frame){return t<frame.time;});
            if(at!=r.frames.begin()) {
                const auto& shooter=(at-1)->soldiers[shot.owner];
                if(shooter.machineGun&&shooter.assignment.task==Task::Overwatch)++overwatchRounds;
                if(shooter.health<shooter.maxHealth&&shooter.assignment.task==Task::RearGuard)++rearRounds;
            }
            for(const auto& window:r.map.windows)if(Distance(shot.start,window.peek)<0.7f){if(shot.start.z>3)++upperShots;else ++groundWindowShots;break;}
            assert(shot.time<=shot.impactTime&&shot.impactTime<=r.duration);
            assert(!shot.flight.empty()&&shot.flight.front().time==shot.time);
            if(shot.impact!=Shot::Impact::None&&shot.impactTime==shot.time) {
                // A muzzle already touching a body can collide immediately;
                // reaction-delayed friendly awareness does not forbid this geometry.
                const auto& a=shot.flight.front().position;const auto& b=shot.flight.back().position;
                assert(Distance({a.x,a.y},{b.x,b.y})<0.02f&&std::abs(a.z-b.z)<0.02f);
                assert(shot.impact==Shot::Impact::Soldier||shot.impact==Shot::Impact::Cover);
            }
            assert(shot.hit==!shot.victims.empty());
            if(!shot.victims.empty()) {
                assert(shot.target>=0&&shot.target==shot.victims.front().soldier);
                // A round that over-penetrates stops somewhere later; impact is the terminal kind.
                assert(shot.impact==Shot::Impact::Soldier||shot.impact==Shot::Impact::Cover||
                       shot.impact==Shot::Impact::Ground||shot.impact==Shot::Impact::OutOfBounds);
                for(const auto& victim:shot.victims) {
                    bool eventFound=false;
                    for(const auto& e:r.events)if(e.kind==EventKind::Hit&&e.actor==shot.owner&&e.target==victim.soldier&&e.time==victim.time)eventFound=true;
                    assert(eventFound);
                }
                multiVictim+=shot.victims.size()>1;
            }
            // Drag: each segment covers its own starting horizontal speed times its duration,
            // and a body the round leaves takes its share of the energy out of that speed.
            const auto& firer=r.frames.front().soldiers[shot.owner];
            float horizontal=firer.gun.muzzleVelocity;size_t passed=0;
            for(size_t k=1;k<shot.flight.size();++k) {
                const auto& a=shot.flight[k-1];const auto& b=shot.flight[k];
                assert(b.time>=a.time&&std::isfinite(b.position.z)&&b.position.z>=-0.001f);
                float distance=Distance({a.position.x,a.position.y},{b.position.x,b.position.y});
                assert(std::abs(distance-(b.time-a.time)*horizontal)<0.05f);
                horizontal*=std::exp(-firer.gun.dragK*Distance(a.position,b.position));
                while(passed<shot.victims.size()&&shot.victims[passed].time<=b.time) {
                    const float energy=shot.victims[passed].energy;
                    horizontal*=std::sqrt(std::max(0.f,energy-DepositedEnergy(energy))/energy);++passed;
                }
                for(const auto& obstacle:r.map.obstacles) {
                    float hit=SegmentObstacle(a.position,b.position,obstacle);
                    assert(hit<0||(k+1==shot.flight.size()&&shot.impact==Shot::Impact::Cover&&hit>0.99f));
                }
            }
        }
        float previousEvent=-1;
        for(const auto& e:r.events){assert(e.time<=r.duration&&e.time>=previousEvent);previousEvent=e.time;}
    }
    std::cout<<"Coordination integration: paired move/cover frames="<<pairedBounds<<" completed bounds="<<completedBounds<<" window-team rounds="<<windowTeamRounds<<" passage waits="<<passageWaits<<" useful support reports="<<usefulSupport<<"\n";
    // Holding a productive firefight is now the default on this map; these
    // scenarios need not trigger a bound. Explicit phase execution is tested above.
    assert(engagedFire>0&&windowTeamRounds>0&&passageWaits>0&&usefulSupport>0);
    std::cout<<"Hold-and-engage firing samples="<<engagedFire<<"\n";
    assert(totalHits>0&&memories>0&&settled>0&&coverFire>0&&crouched>0&&popUps>0&&overwatchRounds>0);
    assert(upperShots>0&&groundWindowShots>0&&stairSamples>0);
    std::cout<<"Building integration: upper window shots="<<upperShots<<" ground window shots="<<groundWindowShots<<" stair samples="<<stairSamples<<"\n";
    assert(rearRounds>0&&heldFire>0&&laneOrders>0&&flankFrames>0);
    std::cout<<"Squad integration: wounded rear rounds="<<rearRounds<<" holding-fire samples="<<heldFire<<" lane-clearance samples="<<laneOrders<<" flank frames="<<flankFrames<<" fallback frames="<<pullBackFrames<<" friendly hits="<<friendlyHits<<" over-penetrating shots="<<multiVictim<<"\n";
    std::cout<<"PASS: delayed officer/NCO orders, overwatch assignments, reports up the chain, succession, aim acquisition and suppression, crouched hitboxes, protected low-cover positions, pop-up firing, reload shelter, default observation, suppression/reload shelter, active wounded support, minimal corner clearance, gravity, finite cover, moving-target collisions, replay timing, cover commitment/settling/peeking, suppression response, reservations, personal knowledge, navigation, determinism, health invariants\n";
    std::cout<<"4 large-battle sweep: draw="<<results[0]<<" azure="<<results[1]<<" ember="<<results[2]<<" shots="<<totalShots<<" hits="<<totalHits<<" MG-overwatch rounds="<<overwatchRounds<<" crouched samples="<<crouched<<" pop-up samples="<<popUps<<" settling samples="<<settled<<" cover-fire samples="<<coverFire<<" remembered-contact samples="<<memories<<"\n";
    std::cout<<"Default battle: "<<one.duration<<"s; "<<one.shots.size()<<" shots; winner="<<one.winner<<"; "<<one.conclusion<<"\n";
    std::cout<<"Elapsed: "<<std::chrono::duration<double>(std::chrono::steady_clock::now()-begin).count()<<"s\n";
}
