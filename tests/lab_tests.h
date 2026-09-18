#include "Diagnostics.h"
#include "PlanSim.h"
static void RifleFlankTests(){
    Map map;Soldier s;s.id=8;s.position={0,0};s.assignment.task=Task::Overwatch;
    Soldier enemy;enemy.id=39;enemy.team=1;EquipWeapon(enemy,{WeaponId::MachineGun,{}});enemy.position={20,0};
    assert(SenseEnemy(s,enemy,map,0).automaticWeapon);enemy.position={100,0};assert(!SenseEnemy(s,enemy,map,0).known);
    s.contacts[39]={true,false,{30,0},0};assert(SelectFireSolution(s,map,4).area);
    s.assignment.task=Task::Hold;assert(SelectFireSolution(s,map,1).area);assert(SelectFireSolution(s,map,4).enemy<0);
    FireDelivery d;d.shooter=15;d.enemy=39;d.rounds=3;d.target={30,0};d.firstAt=d.observedAt=4;RememberDelivery(s,d);
    assert(CoveringCrossing(s,map,{0,0},{15,0},4));
    assert(!CoveringCrossing(s,map,{0,0},{15,0},11)); // old rounds cannot cover a new crossing
    s.deliveries={};d.enemy=40;d.target={30,25};RememberDelivery(s,d);assert(!CoveringCrossing(s,map,{0,0},{15,0},4));
    s.deliveries={};d.enemy=39;d.target={30,0};RememberDelivery(s,d);
    s.contacts[40]={true,false,{20,20},0};s.contacts[40].automaticWeapon=true;assert(!CoveringCrossing(s,map,{0,0},{15,0},4)); // a different dominant MG overlooking this route is not suppressed
    std::cout<<"Rifle suppression: remembered fire, expiry, specific track/crossing delivery evidence verified\n";
}
static void MovementCommitmentTests(){
    Config config;auto f=InitialFrame(config);Map map;
    std::vector<Soldier> squad(f.soldiers.begin()+8,f.soldiers.begin()+16);
    for(auto& s:squad)s.position={-20,0};
    auto leader=squad[0];SquadCommand cmd;cmd.leader=8;cmd.support=15;cmd.advancing=true;
    cmd.hasWaypoint=true;cmd.waypoint={-8,12};cmd.maneuver=Maneuver::Press;cmd.planId=4;cmd.maneuverUntil=40;cmd.moveExposure=1;
    ProgressRuntime progress;Diagnostics trace;
    for(float t:{0.f,4.f,8.f,12.f,28.f,52.f}){
        leader.contacts[32]={true,true,{30,0},t};RememberFireArea(leader,{{-20,0},1,t});
        UpdateSquadPlan(leader,squad,map,config,{}, {},cmd,progress,&trace,t);
        assert(cmd.movementBlock.reason!=MoveBlock::None&&cmd.hasWaypoint&&cmd.planId==4&&!cmd.teamPlan.released);
    }
    int pauses=0;for(const auto& e:trace.entries)pauses+=e.kind=="movement_paused";assert(pauses==1);
    // Track clearance can release a search, but waiting on its own cannot retry the failed destination.
    leader.contacts[32].clearedAt=53;UpdateSquadPlan(leader,squad,map,config,{}, {},cmd,progress,&trace,54);
    assert(cmd.searching&&cmd.movementBlock.reason==MoveBlock::None);
    // Delayed evidence cannot change a leader before receipt plus recognition.
    ReactionRuntime rt;std::vector<Event> events;PendingReaction report;report.kind=ReactionKind::DeliveryReport;report.delivery.shooter=15;report.delivery.enemy=39;report.delivery.rounds=3;report.delivery.target={30,0};report.delivery.firstAt=report.delivery.observedAt=0;
    QueueReaction(f.soldiers[8],report,0,rt);f.time=.01f;ProcessReactions(f,rt,events);assert(f.soldiers[8].deliveries[0].shooter<0);
    f.time=1;ProcessReactions(f,rt,events);bool known=false;for(const auto& d:f.soldiers[8].deliveries)known|=d.shooter==15;assert(known);
    // Coordination runs after maneuver assessment and can independently time out
    // a bound. That transition must still produce a causal pause event.
    SquadCommand late;late.leader=8;late.support=15;late.advancing=true;late.hasWaypoint=true;
    late.waypoint=late.mission={20,0};late.maneuverUntil=100;late.teamPlan.bounding=late.teamPlan.released=true;
    late.teamPlan.target={20,0};late.boundReleasedAt=0;
    for(auto& p:late.teamPlan.moves)p={20,0};
    auto quietLeader=squad.front();quietLeader.contacts={};quietLeader.reports={};
    ProgressRuntime lateProgress;Diagnostics lateTrace;
    UpdateSquadPlan(quietLeader,squad,map,config,{}, {},late,lateProgress,&lateTrace,20);
    assert(late.movementBlock.reason==MoveBlock::Execution);
    int latePauses=0;for(const auto& e:lateTrace.entries)latePauses+=e.kind=="movement_paused";
    assert(latePauses==1);
    std::cout<<"Commitments: one pause, no unchanged-fire retries, cleared-track search, delayed fire evidence verified\n";
}
static void TrackTests(){
    Soldier s;s.id=0;s.position={0,0};s.contacts[32]={true,false,{20,0},0};Map map;
    assert(SelectFireSolution(s,map,30).enemy<0);assert(WithTracks(s,30).contacts[32].known);
    assert(TrackConfidence(s.contacts[32],30)<TrackConfidence(s.contacts[32],5));assert(TrackUncertainty(s.contacts[32],30)>TrackUncertainty(s.contacts[32],5));
    ObserveEmptyTracks(s,map,5);ObserveEmptyTracks(s,map,7);assert(WithTracks(s,7).contacts[32].known);
    ObserveEmptyTracks(s,map,8);assert(!WithTracks(s,8).contacts[32].known);
    Frame f;f.soldiers[0]=s;ReactionRuntime rt;std::vector<Event> events;PendingReaction old;old.kind=ReactionKind::Report;old.enemy=32;old.contact={true,false,{20,0},1};QueueReaction(f.soldiers[0],old,9,rt);f.time=10;ProcessReactions(f,rt,events);assert(!WithTracks(f.soldiers[0],10).contacts[32].known);
    s.contacts[32]={true,false,{20,0},0};map.obstacles={{{10,0},{1,10},false,false,3}};
    ObserveEmptyTracks(s,map,5);ObserveEmptyTracks(s,map,10);assert(WithTracks(s,10).contacts[32].known); // obscured area not searched
    auto passed=s.contacts[32];passed.passedAt=5;assert(TrackConfidence(passed,30)<TrackConfidence(s.contacts[32],30));
    Soldier rifle;rifle.id=2;rifle.understoodHealth=60;assert(!KnowsWounded(rifle,rifle));rifle.understoodHealth=54;assert(KnowsWounded(rifle,rifle));
    Config a,b;b.emberDoctrine=Doctrine::Aggressive;assert(!SameConfig(a,b));
    std::cout<<"Tracks: confidence, uncertainty, negative observation, occlusion, passed-position decay and stale-report rejection verified\n";
}
static void PreparationTests(){
    Config config;auto f=InitialFrame(config);Map map;map.obstacles={{{-18,18},{.6f,3},false,true}};
    std::vector<Soldier> squad(f.soldiers.begin()+8,f.soldiers.begin()+16);for(auto& s:squad)s.position={-20,0};
    auto leader=squad[0];SquadCommand cmd;cmd.advancing=true;cmd.leader=8;cmd.support=15;
    auto refresh=[&](float time,bool fire){leader.contacts[32]={true,true,{30,0},time};leader.deliveries={};if(fire){FireDelivery d;d.shooter=15;d.enemy=32;d.rounds=3;d.target={30,0};d.firstAt=d.observedAt=time;RememberDelivery(leader,d);}};
    for(float t:{0.f,2.f,4.f}){refresh(t,true);UpdateManeuver(leader,squad,map,config,{},cmd,t);assert(!cmd.hasWaypoint);}
    assert(cmd.opportunitySince==0&&cmd.preparationSeconds==8);
    refresh(6,false);UpdateManeuver(leader,squad,map,config,{},cmd,6);assert(!cmd.hasWaypoint&&cmd.opportunitySince<0);
    for(float t:{8.f,10.f,12.f,14.f}){refresh(t,true);UpdateManeuver(leader,squad,map,config,{},cmd,t);assert(!cmd.hasWaypoint);}
    refresh(16,true);UpdateManeuver(leader,squad,map,config,{},cmd,16);assert(cmd.hasWaypoint&&cmd.moveExposure>=.2f);
    refresh(18,false);UpdateManeuver(leader,squad,map,config,{},cmd,18);assert(cmd.movementBlock.reason==MoveBlock::Support&&!cmd.teamPlan.released);
    std::cout<<"Prepared assault: eight seconds of crossing-specific fire, reset on gap, pause on lost support verified\n";
}
static void MGEncounterTests(){
    int flankHits=0,coveringRounds=0,pauses=0,blockedFrames=0,closingScenarios=0;
    for(int variant:{1,2,3})for(int seed:{107,108,109}) {
        Config config;config.seed=seed;config.maxSeconds=360;
        auto record=Simulate(config,{}, {},variant);
        assert(record.encounter==variant);
        for(const auto& s:record.frames.front().soldiers)for(const auto& ct:s.contacts)assert(!ct.known);
        for(const auto& f:record.frames)for(const auto& cmd:f.command)if(cmd.movementBlock.reason!=MoveBlock::None) {
            assert(cmd.hasWaypoint&&!cmd.teamPlan.released&&!cmd.teamPlan.bounding);++blockedFrames;
        }
        for(const auto& shot:record.shots){
            coveringRounds+=shot.owner==7;
            if(shot.owner>=8&&shot.owner<16&&shot.target==39&&shot.hit&&std::abs(shot.start.y)>15&&
                Distance(shot.start,record.frames.front().soldiers[shot.owner].position)>8) {
                bool covered=false;
                for(const auto& fire:record.shots)if(fire.owner==7&&fire.time<=shot.time&&shot.time-fire.time<4&&
                    Distance(fire.end,record.frames.front().soldiers[39].position)<15)covered=true;
                flankHits+=covered;
            }
        }
        for(const auto& e:record.diagnostics->entries)pauses+=e.kind=="movement_paused";
        bool closed=false;Vec3 defender=record.frames.front().soldiers[39].position;
        for(const auto& f:record.frames)if(f.soldiers[39].Active()){int advancing=0;for(int id=8;id<16;++id)if(f.soldiers[id].Active()){
            Vec3 start=record.frames.front().soldiers[id].position,p=f.soldiers[id].position;
            advancing+=Distance(start,p)>=8&&Distance(start,defender)-Distance(p,defender)>=8;
        }closed|=advancing>=2;}closingScenarios+=closed;
    }
    std::cout<<"MG encounter matrix: 3 layouts x 3 seeds, covering rounds="<<coveringRounds<<" flank-group hits on MG="<<flankHits<<" pauses="<<pauses<<" blocked frames="<<blockedFrames<<" (individual outcomes vary)\n";
    std::cout.flush();
    // Keep rare flank hits as a diagnostic, not the old one-hit-in-nine acceptance test.
    // Require group closure in multiple layouts/seeds plus all fixed defenders defeated below.
    std::cout<<"MG encounter group closure: "<<closingScenarios<<"/9\n";std::cout.flush();
    assert(coveringRounds>0&&blockedFrames>0&&pauses>0&&closingScenarios>=3);
    int dislodged=0;
    for(int seed:{107,108,109}){Config c;c.seed=seed;c.maxSeconds=360;auto r=Simulate(c,{}, {},4);
        bool defenders=false;for(const auto& s:r.frames.back().soldiers)if(s.team==1&&s.Active())defenders=true;
        dislodged+=!defenders;assert(r.encounter==4);
    }
    std::cout<<"Fixed defender: "<<dislodged<<"/3 eliminated within six minutes\n";std::cout.flush();assert(dislodged==3);
}
static void LabTests(){
    TrackTests();PreparationTests();MovementCommitmentTests();
    RifleFlankTests();
    Map m;m.obstacles={{{0,0},{1,3},false,true},{{12,0},{1,3},false,true}};PrepareGeometry(m);
    uint64_t obstacle=m.obstacles[0].id,other=m.obstacles[1].id;
    const auto* catalog=&CoverPositions(m);assert(catalog==&CoverPositions(m));
    uint64_t cover=catalog->front().id;assert(cover&&CoverExists(m,cover));assert(!ClearLine3D(m,{-4,0,1},{4,0,1}));
    auto path=FindPath(m,{-4,0},{4,0});assert(!path.empty());auto nav=m.navigation;
    FindPath(m,{-4,1},{4,1});assert(nav==m.navigation);
    auto revision=m.revision;assert(RemoveObstacle(m,obstacle)&&m.revision>revision&&!CoverExists(m,cover));
    assert(ClearLine3D(m,{-4,0,1},{4,0,1})&&FindPath(m,{-4,0},{4,0}).size()==1);
    assert(!RemoveObstacle(m,obstacle));
    Obstacle replacement=m.obstacles[0];replacement.center={0,0};assert(ReplaceObstacle(m,other,replacement));
    assert(!ClearLine3D(m,{-4,0,1},{4,0,1}));
    uint64_t next=m.nextGeometryId;m.obstacles.push_back({{25,0},{1,1},false,true});InvalidateGeometry(m);
    assert(m.obstacles.back().id>=next&&m.obstacles.back().id!=obstacle);
    auto stable=CoverPositions(m)[0].id;std::reverse(m.obstacles.begin(),m.obstacles.end());InvalidateGeometry(m);assert(CoverExists(m,stable));
    Map building;AddBuilding(building,{0,0});PrepareGeometry(building);
    auto window=building.windows.front();assert(window.id&&window.source&&CoverExists(building,window.id));
    assert(RemoveObstacle(building,window.source)&&!CoverExists(building,window.id));
    Map field=MakeSkirmishMap(),reference=field;reference.prepared=false;reference.spatial.reset();
    for(int i=0;i<1500;++i){Vec3 a{float((i*37)%330-165),float((i*53)%290-145),float(i%6)};
        Vec3 b{float((i*71)%330-165),float((i*19)%290-145),float((i+3)%7)};
        float brute=-1;for(const auto& o:field.obstacles){float hit=SegmentObstacle(a,b,o);if(hit>=0&&(brute<0||hit<brute))brute=hit;}
        assert(std::abs(brute-MapContact(field,a,b))<0.00001f);
        assert(ClearLine3D(field,a,b)==(brute<0));
        a.z=b.z=0;assert(ClearLine(field,a,b,.48f)==ClearLine(reference,a,b,.48f));
    }
    Vec3 from{129.18402f,-20.119076f,0};auto route=FindPath(field,from,{95.386169f,-20.102886f,0});assert(!route.empty());
    for(Vec3 to:route){assert(ClearLine(field,from,to,.48f));from=to;}
    // Detailed logging is observational, including actual contact and firing.
    Config c;c.maxSeconds=60;DiagnosticOptions off;off.enabled=false;DiagnosticOptions detail;detail.detailed=true;detail.soldier=1;detail.from=40;detail.to=60;
    auto a=Simulate(c,off),b=Simulate(c),d=Simulate(c,detail);
    assert(GameplayDigest(a)==GameplayDigest(b)&&GameplayDigest(b)==GameplayDigest(d));
    assert(Fingerprint(a)==Fingerprint(b)&&Fingerprint(b)==Fingerprint(d));
    assert(a.diagnostics->entries.empty()&&!b.diagnostics->entries.empty());
    std::unordered_map<uint64_t,bool> ids;bool issued=false,received=false,alternatives=false;
    for(const auto& row:d.diagnostics->entries){assert(!ids.count(row.id));if(row.parent)assert(ids.count(row.parent));ids[row.id]=true;
        issued|=row.kind=="order_issued";received|=row.kind=="order_received";
        for(const auto& k:row.knowledge)assert(k.contact.observedAt<=row.time);
        if(!row.alternatives.empty()){alternatives=true;assert(row.soldier==1&&row.time>=40&&row.time<=60&&row.alternatives.size()<=3);}}
    assert(issued&&received&&alternatives);
    c.maxSeconds=1;GeometryEdit edit;edit.time=.12f;edit.obstacle=field.obstacles[0].id;
    auto changed=Simulate(c,{}, {edit});assert(changed.geometryVersions.size()==2&&changed.geometryVersions[1].time>=.12f&&changed.geometryVersions[1].time<.17f);
    assert(GeometryAt(changed,.1f).revision<GeometryAt(changed,.2f).revision);
    for(const auto& f:changed.frames)for(const auto& s:f.soldiers)for(const auto& ct:s.contacts)assert(!ct.known); // geometry does not broadcast enemy knowledge
    // Cover timer expiry alone does not cause relocation or interrupt reload shelter.
    Map wall;wall.obstacles={{{0,0},{.6f,4},false,true}};Soldier rifle;rifle.position={-1.2f,0};rifle.contacts[TeamSize]={true,true,{20,0},0};
    Tactics memory;memory.assigned=true;memory.halfCover=true;memory.shelter=memory.peek=rifle.position;memory.expires=0;
    for(float t:{1.f,20.f,80.f,150.f}){rifle.contacts[TeamSize].observedAt=t;auto order=ChooseOrder(rifle,wall,Config{}, {},memory,t);assert(Distance(order.goal,rifle.position)<.01f);}
    rifle.suppression=.8f;auto shelter=ChooseOrder(rifle,wall,Config{}, {},memory,151);assert(Distance(shelter.goal,rifle.position)<.01f);
    std::cout<<"Lab: geometry revisions/IDs, spatial equivalence, trace on/off/detail determinism, causal order links, tick-boundary changes and stable cover verified\n";
}
