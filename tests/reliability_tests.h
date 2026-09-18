// Discriminating contracts for the reliability repair. Physical encounters below
// exercise these through production command, sensing, movement and transport too.
static void ReliabilityContractScenarios(){
    auto config=CognitiveConfig();auto frame=InitialFrame(config);Map map;
    map.obstacles={{{0,0},{1,5},false,false,4}};PrepareGeometry(map);
    const auto slot=CoverPositions(map).front();auto soldier=frame.soldiers[2];
    soldier.position=slot.peek;soldier.assignment={};soldier.assignment.id=42;
    soldier.assignment.intent={42,0,GoalPurpose::Seize,slot.peek,8,100};
    soldier.assignment.hasSlot=true;soldier.assignment.slot=slot;soldier.assignment.position=slot.shelter;
    soldier.assignment.geometry=map.revision;soldier.assignment.task=Task::BoundMove;
    soldier.assignment.execution={Completion::Occupy,42,0,0,80};
    soldier.assignment.status=TaskStatus::Interrupted;soldier.assignment.cause=TaskCause::Shelter;
    Tactics memory;memory.assigned=memory.emergency=true;memory.shelter=slot.shelter;memory.peek=slot.peek;
    soldier.suppression=.5f;PrepareTaskExecution(soldier,memory,1);assert(memory.emergency);
    soldier.suppression=0;PrepareTaskExecution(soldier,memory,2);assert(!memory.emergency);
    auto order=ExecuteTask(soldier,map,config,{},memory,2,nullptr);soldier.reason=order.reason;
    EvaluateTaskExecution(soldier,map,memory,2,nullptr);
    assert(soldier.assignment.status==TaskStatus::Done&&soldier.assignment.id==42);
    soldier.position=slot.peek+Vec3{0,8};EvaluateTaskExecution(soldier,map,memory,3,nullptr);
    assert(soldier.assignment.status!=TaskStatus::Done&&soldier.assignment.id==42);
    soldier.position=slot.peek;EvaluateTaskExecution(soldier,map,memory,4,nullptr);assert(soldier.assignment.status==TaskStatus::Done);
    soldier.position=slot.shelter;soldier.reloadUntil=10;soldier.reason=Reason::Duck;
    EvaluateTaskExecution(soldier,map,memory,5,nullptr);assert(soldier.assignment.status==TaskStatus::Done);
    auto observe=soldier;observe.assignment.status=TaskStatus::Executing;observe.assignment.execution.completion=Completion::Observe;
    EvaluateTaskExecution(observe,map,memory,5,nullptr);assert(observe.assignment.status!=TaskStatus::Done);
    auto fire=soldier;fire.assignment.status=TaskStatus::Executing;fire.assignment.execution.completion=Completion::Support;
    EvaluateTaskExecution(fire,map,memory,5,nullptr);assert(fire.assignment.status!=TaskStatus::Done);
    auto point=soldier;point.assignment.hasSlot=false;point.assignment.position=slot.shelter;point.position=point.goal=slot.shelter;
    Tactics pointMemory=memory;pointMemory.assigned=pointMemory.emergency=true;pointMemory.shelter=slot.shelter;
    PrepareTaskExecution(point,pointMemory,6);assert(pointMemory.emergency); // Real reload is still active.
    point.reloadUntil=0;PrepareTaskExecution(point,pointMemory,6);assert(!pointMemory.emergency);
    auto impossible=soldier;impossible.assignment.status=TaskStatus::Executing;impossible.assignment.execution.unavailable=true;
    EvaluateTaskExecution(impossible,map,memory,3,nullptr);assert(impossible.assignment.status==TaskStatus::Failed);
    std::cout<<"SCENARIO reliability shelter: same-slot peek recovery retains identity; actual pressure and unavailable tasks never certify occupation PASS\n";

    auto& leader=frame.soldiers[0];CognitiveDelivery(leader,10);leader.deliveries[0].enemy=33;
    leader.deliveries[0].target={40,-11};
    assert(ReceivedUsefulSupport(leader,{40,0},10,7));
    assert(!ReceivedThreatSupport(leader,{40,0},10,7,39));
    leader.deliveries[0].enemy=39;leader.deliveries[0].target={40,0};
    assert(ReceivedThreatSupport(leader,{40,0},10,7,39));
    assert(!ReceivedThreatSupport(leader,{40,0},20,7,39));
    leader.deliveries={};FireDelivery first;first.shooter=7;first.enemy=39;first.supportWeapon=true;first.target={40,0};first.observedAt=10;first.times={10,9.9f};
    RememberDelivery(leader,first);auto other=first;other.enemy=33;other.target={40,-11};other.observedAt=11;other.times={11,10.9f};RememberDelivery(leader,other);
    assert(ReceivedThreatSupport(leader,{40,0},11,7,39)&&ReceivedThreatSupport(leader,{40,-11},11,7,33));
    RememberDelivery(leader,first);assert(ReceivedThreatSupport(leader,{40,0},15.5f,7,39));
    assert(!ReceivedThreatSupport(leader,{40,0},17,7,39));
    std::cout<<"SCENARIO reliability delivery memory: alternating targets retain independent original evidence; duplicate relays cannot refresh it PASS\n";
    std::cout<<"SCENARIO reliability threat support: nearby rifle fire cannot substitute for the crossing MG; original delivery age retained PASS\n";
    auto denial=frame.soldiers[7];denial.position={-60,0};denial.assignment.id=7;denial.assignment.task=Task::Overwatch;
    denial.supportSector.shooter=7;denial.supportSector.observedAt=10;
    Contact remembered;remembered.known=true;remembered.position={30,0};remembered.aimHeight=.8f;remembered.observedAt=0;remembered.automaticWeapon=true;
    denial.reports[39]=remembered;denial.supportSector.threats.push_back({39,remembered});
    Map low;low.obstacles={{{28,0},{.6f,4},false,true,1.3f}};PrepareGeometry(low);
    auto solution=SelectFireSolution(denial,low,10);
    assert(solution.enemy==39&&solution.area&&solution.observedAt==0&&solution.point.z==1.5f);
    assert(denial.reports[39].observedAt==0);assert(SelectFireSolution(denial,low,20).enemy<0);
    denial.reports[39].known=false;denial.supportSector.observedAt=12;
    auto retained=SelectFireSolution(denial,low,12);assert(retained.enemy==39&&retained.observedAt==0);
    auto legacyExpired=denial;legacyExpired.cognition=false;assert(SelectFireSolution(legacyExpired,low,12).enemy<0);
    auto cleared=denial;cleared.contacts[39].clearedAt=11;assert(SelectFireSolution(cleared,low,12).enemy<0);
    denial.reports[39].known=true;denial.supportSector.observedAt=10;
    denial.reports[39].automaticWeapon=false;
    assert(SelectFireSolution(denial,low,10).enemy==39); // A reported rifle position can also be denied.
    denial.supportSector.threats.clear();assert(SelectFireSolution(denial,low,10).enemy<0);
    std::cout<<"SCENARIO reliability area denial: requested remembered gun covered at executable cover edge, uncertainty bounded, no refreshed sighting PASS\n";

    Map clear;PrepareGeometry(clear);auto gun=frame.soldiers[7];gun.position={-60,0};gun.stance=Stance::Standing;
    gun.supportSector.shooter=gun.id;gun.supportSector.observedAt=10;
    gun.supportSector.friendlies.push_back({12,{38,0},{38,0},10});
    assert(!gun.allies[12].known);
    assert(ShouldHoldFire(gun,FriendlyFireRisk(gun,clear,{40,0,1.5f},11)));
    gun.supportSector.friendlies[0].position=gun.supportSector.friendlies[0].destination={38,30};
    assert(!ShouldHoldFire(gun,FriendlyFireRisk(gun,clear,{40,0,1.5f},11)));
    gun.supportSector.friendlies[0].position=gun.supportSector.friendlies[0].destination={38,0};
    assert(FriendlyFireRisk(gun,clear,{40,0,1.5f},20)==0); // No fabricated fresh visual ally.
    std::cout<<"SCENARIO reliability friendly intent: distant lane protected from received evidence; clear lane allowed; no invented personal contact PASS\n";
}

static void ReliabilityPathScenario(){
    Map map;map.obstacles={{{9,0},{2,5},false,true,4}};PrepareGeometry(map);
    TacticalRoute route;route.geometry=map.revision;route.start={0,-10};route.destination={6,0};route.points={{6,-10},{6,0}};
    const Vec3 goal{12.5f,0};assert(!FindPath(map,route.start,goal).empty());
    assert(FollowCorridor(map,route,route.start,goal).empty());
    auto path=FollowFinalApproach(map,route,route.start,goal);assert(!path.empty());
    Vec3 previous=route.start;
    for(auto point:path){assert(ClearLine(map,previous,point,.48f));assert(CorridorDistance(route,point)<=4||Distance(point,route.destination)<=12);previous=point;}
    assert(Distance(path.back(),goal)<.01f);
    Map clear;PrepareGeometry(clear);TacticalRoute local;local.geometry=clear.revision;local.start={0,0};local.destination={8,0};local.points={local.destination};
    auto separated=FollowFinalApproach(clear,local,{0,-1},{8,-2});assert(separated.size()==1&&Distance(separated.front(),Vec3{8,-2})<.01f);
    auto id=map.obstacles.front().id;ReplaceObstacle(map,id,{{8,0},{1,90},false,true,4});
    assert(FollowFinalApproach(map,route,route.start,goal).empty());
    std::cout<<"SCENARIO reliability final connector: same physical clearance, bounded departure from route, geometry invalidation PASS\n";
}

static void ReliabilitySupportRecoveryScenario(){
    auto config=CognitiveConfig();auto frame=InitialFrame(config);Map map;PrepareGeometry(map);
    auto& leader=frame.soldiers[0];leader.position={0,0};leader.contacts[32]={true,false,{40,0},0};
    CognitiveOrder(leader,{24,0},{40,0});SquadCommand command;
    UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,1);
    auto& plan=command.accepted;assert(plan.stage==MethodStage::Prepare);
    int point=-1;for(int i=0;i<SquadSize;++i)if(plan.movers[i]){point=i;break;}assert(point>=0);
    auto& receipt=leader.taskReports[point];receipt.soldier=point;receipt.goalId=plan.intent.id;receipt.at=2;
    receipt.active=true;receipt.status=TaskStatus::Interrupted;receipt.cause=TaskCause::Shelter;
    CognitiveDelivery(leader,2);UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,2);
    assert(plan.supportUseful&&plan.stage==MethodStage::Execute&&plan.safetyOverride);
    const float deadline=plan.executionDeadline;const int method=plan.intent.id;
    leader.deliveries={};UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,3);
    assert(plan.stage==MethodStage::Prepare);
    CognitiveDelivery(leader,4);UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,4);
    assert(plan.stage==MethodStage::Execute&&plan.executionDeadline==deadline&&plan.intent.id==method);
    // A sector accepted from an old report acquires an exact dependency when a
    // fresh sighting arrives; nearby deliveries must then stop qualifying.
    plan.supportThreat=-1;leader.contacts[32]={};leader.contacts[39]={true,false,{40,0},5};leader.contacts[39].automaticWeapon=true;
    leader.deliveries[0].enemy=33;leader.deliveries[0].target={40,-11};leader.deliveries[0].observedAt=5;leader.deliveries[0].times={5,4.9f};
    UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,5);
    assert(plan.supportThreat==39&&!plan.supportUseful&&plan.stage==MethodStage::Prepare);
    // A prior rifle sighting at the same emplacement must not pin the dependency
    // to that rifle after the actual machine gun is identified through reports.
    plan.supportThreat=32;leader.contacts[32]={true,false,{40,0},5};
    leader.contacts[39]={};leader.reports[39]={true,false,{40,0},5};leader.reports[39].automaticWeapon=true;
    const auto retained=plan.intent.id;
    UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,6);
    assert(plan.supportThreat==39&&plan.intent.id==retained&&!plan.supportUseful);
    leader.deliveries[0].enemy=39;leader.deliveries[0].target={40,0};leader.deliveries[0].observedAt=6;leader.deliveries[0].times={6,5.9f};
    UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,6.1f);
    assert(plan.supportUseful&&plan.executionDeadline==deadline);

    std::cout<<"SCENARIO reliability support recovery: local safety cannot starve received support; repeated support recovery cannot renew execution budget PASS\n";
}

static void ReliabilityPhysicalScenarios(){
    for(int variant:{18,19,26}){
        auto config=CognitiveConfig();config.seed=301;config.maxSeconds=25;
        auto record=Simulate(config,{}, {},variant);if(variant==26)assert(record.frames.front().command[0].accepted.hasSlot[2]);bool arrived=false,reported=false,interrupted=false,peeked=false,crouchedFire=false;uint64_t assignment=0;
        for(const auto& frame:record.frames){const auto& s=frame.soldiers[2];
            if(s.assignment.execution.completion!=Completion::Occupy||s.assignment.execution.method!=9001)continue;
            if(!assignment&&s.assignment.id)assignment=s.assignment.id;
            assert(s.assignment.id==assignment);
            interrupted|=s.assignment.status==TaskStatus::Interrupted&&s.assignment.cause==TaskCause::Shelter;
            peeked|=Distance(s.position,s.assignment.hasSlot?s.assignment.slot.peek:s.assignment.position)<.75f;
            if(s.assignment.status==TaskStatus::Done){arrived=true;assert(Distance(s.position,s.assignment.position)<.75f||(s.assignment.hasSlot&&Distance(s.position,s.assignment.slot.peek)<.75f));}
            const auto& receipt=frame.soldiers[0].taskReports[2];
            if(receipt.status==TaskStatus::Done&&receipt.id==assignment){reported=true;assert(frame.time>=receipt.at+config.reportDelay);}
        }
        std::cerr<<"reliability physical "<<variant<<" arrived="<<arrived<<" transported="<<reported<<" sheltered="<<interrupted<<"\n";
        for(const auto& shot:record.shots)if(shot.owner==2&&shot.flight.front().position.z<1)crouchedFire=true;
        assert(arrived&&reported&&peeked);if(variant==18)assert(interrupted);if(variant==26)assert(crouchedFire);
    }
    std::cout<<"SCENARIO reliability physical: safety recovery and final connector execute through movement, collision and delayed receipt transport PASS\n";
}

static void ReliabilityPhysicalFriendlyScenario(){
    for(int variant:{20,21}){
        auto config=CognitiveConfig();config.seed=302;config.maxSeconds=8;
        auto record=Simulate(config,{}, {},variant);bool received=false,held=false;int shots=0;
        for(const auto& frame:record.frames){const auto& gun=frame.soldiers[7];
            assert(!gun.allies[10].known); // Both configurations are beyond personal sight.
            for(const auto& intent:gun.supportSector.friendlies)if(intent.soldier==10){
                assert(frame.time>=intent.observedAt+config.reportDelay);received=true;
                if(frame.time>4&&gun.holdingFire)held=true;
            }
        }
        for(const auto& shot:record.shots)if(shot.owner==7)++shots;
        std::cerr<<"remote friendly "<<variant<<" received="<<received<<" held="<<held<<" shots="<<shots<<"\n";
        assert(received);if(variant==20)assert(held&&shots==0);else assert(shots>0);
    }
    std::cout<<"SCENARIO reliability physical distant support: transported friendly intent inhibits conflicting fire; clear-lane control delivers actual projectiles PASS\n";
}

static void ReliabilityOccupiedPositionScenario(){
    auto config=CognitiveConfig();config.seed=303;config.maxSeconds=70;
    auto record=Simulate(config,{}, {},22);bool inspected=false,delivered=false;uint64_t replacement=0;
    for(const auto& event:record.diagnostics->entries){
        if(event.kind!="order_issued"||event.soldier!=0||event.execution.completion!=Completion::Occupy)continue;
        for(const auto& known:event.knowledge)if(known.id==32&&event.time-known.contact.observedAt<8){
            inspected=true;assert(Distance(event.peek,known.contact.position)>=2);replacement=event.taskId;
        }
    }
    for(const auto& frame:record.frames)if(frame.soldiers[0].assignment.id==replacement)delivered=true;
    assert(inspected&&delivered);
    std::cout<<"SCENARIO reliability physical occupied position: fresh sensed defender excludes ordinary occupation of its cover PASS\n";
}

static void ReliabilityPhysicalThreatScenario(){
    auto config=CognitiveConfig();config.seed=304;config.maxSeconds=8;
    auto record=Simulate(config,{}, {},23);bool physical=false,received=false;
    for(const auto& shot:record.shots)if(shot.owner==7&&shot.aimedEnemy==32&&shot.aimedAt.z>1.2f)physical=true;
    for(const auto& frame:record.frames)for(const auto& report:frame.soldiers[8].deliveries)
        if(report.shooter==7&&report.enemy==32&&report.observedAt>=0){received=true;assert(frame.time>=report.observedAt+config.reportDelay);}
    std::cerr<<"physical threat: cover denial="<<physical<<" delivery="<<received<<"\n";assert(physical&&received);
    std::cout<<"SCENARIO reliability physical threat: gun covers the requested concealed MG instead of substituting the nearby rifleman PASS\n";
    // A support sector is current for eight seconds from its own observation, so
    // the transported window must still hold one settle at the reference reaction.
    config.reportDelay=6;config.maxSeconds=24;
    auto rifle=Simulate(config,{}, {},27);bool reported=false,denied=false;
    for(const auto& shot:rifle.shots)if(shot.owner==7&&shot.aimedEnemy==32&&shot.aimedAt.z>1.2f)denied=true;
    for(const auto& f:rifle.frames){const auto& gun=f.soldiers[7];const auto& contact=gun.reports[32];
        if(contact.known&&!contact.automaticWeapon&&f.time-contact.observedAt>6&&gun.supportSector.shooter==7)reported=true;
    }
    std::cerr<<"physical rifle denial: report="<<reported<<" projectile="<<denied<<"\n";
    assert(reported&&denied);
    std::cout<<"SCENARIO reliability physical rifle denial: delayed observation supports bounded area fire at a concealed requested rifle position PASS\n";
    config.maxSeconds=40;auto relayed=Simulate(config,{}, {},36);bool oldEvidenceShot=false;
    for(const auto& shot:relayed.shots)if(shot.owner==7&&shot.aimedEnemy==32){
        const Frame* before=nullptr;for(const auto& f:relayed.frames){if(f.time>shot.time)break;before=&f;}
        if(!before)continue;
        const auto& gun=before->soldiers[7];const auto& report=gun.reports[32];
        if(shot.time-report.observedAt>10&&!report.known&&report.observedAt>=0){
            oldEvidenceShot=true;assert(TrackUncertainty(report,shot.time)<=Distance(gun.position,report.position)*ShotSpread(gun));
        }
    }
    std::cerr<<"physical aged evidence: projectile="<<oldEvidenceShot<<"\n";assert(oldEvidenceShot);
    std::cout<<"SCENARIO reliability firing memory: two real report hops preserve original age beyond10s; bounded remembered target remains executable without a fabricated sighting PASS\n";

}

static void ReliabilityStrengthScenario(){
    auto config=CognitiveConfig();Map map;PrepareGeometry(map);
    for(bool capablePair:{false,true}){
        auto frame=InitialFrame(config);auto& leader=frame.soldiers[0];SquadCommand command;auto& p=command.accepted;
        leader.position={0,0};leader.platoonOrder.serial=1;leader.platoonOrder.expiresAt=100;
        p.directive=1;p.revision=1;p.intent={100,1,GoalPurpose::Seize,{20,0},8,100};p.mission=leader.platoonOrder.intent={1,0,GoalPurpose::Seize,{20,0},8,100};
        p.method=CognitiveMethod::SupportedAdvance;p.stage=MethodStage::Execute;p.started=p.stageStarted=1;p.reconsiderAt=50;p.destination={20,0};
        p.requiredOccupants=2;auto route=std::make_shared<TacticalRoute>();route->geometry=map.revision;route->destination=p.destination;
        route->points={{10,0},{20,0}};route->stages={{0,1,{10,0},3,0},{1,2,{20,0},3,0}};p.route=route;
        for(int id:{2,3})if(id==2||capablePair){p.movers[id]=true;p.expected[id]=id;
            auto& receipt=leader.taskReports[id];receipt.soldier=id;receipt.goalId=100;receipt.id=id;receipt.active=true;receipt.at=2;
            receipt.status=TaskStatus::Done;receipt.execution={Completion::Transit,100,0,0,50};}
        UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,3);
        if(capablePair)assert(p.route&&p.routeStage==1);
        else {bool explicitFailure=false;for(const auto& attempt:p.attempts)explicitFailure|=attempt.cause==TaskCause::InsufficientStrength;assert(explicitFailure);}
    }
    std::cout<<"SCENARIO reliability strength: one arrival cannot advance a two-person objective; capable pair advances PASS\n";
}

static void ReliabilityProtectedTransitScenario(){
    for(int variant:{24,25}){
        auto config=CognitiveConfig();config.seed=305;config.maxSeconds=40;
        auto record=Simulate(config,{}, {},variant);bool advanced=false,held=false,learned=false;
        for(const auto& frame:record.frames){const auto& p=frame.command[0].accepted;const auto& leader=frame.soldiers[frame.command[0].leader];
            learned|=WithTracks(leader,frame.time).contacts[32].known;
            if(p.route&&p.route->id==900&&p.routeStage==1){advanced=true;held|=p.stage==MethodStage::Prepare;assert(!p.supportUseful&&p.stage!=MethodStage::Execute);}
        }
        for(const auto& shot:record.shots)assert(shot.owner!=7);
        std::cerr<<"protected transit "<<variant<<" learned="<<learned<<" advanced="<<advanced<<" held="<<held<<"\n";
        assert(learned);if(variant==24)assert(advanced&&held);else assert(!advanced);
    }
    std::cout<<"SCENARIO reliability protected transit: observed geometry permits screened movement without fire; exposed next stage and unscreened control retain actual-fire gate PASS\n";
}

static void ReliabilityPausedDefenseScenario(){
    auto config=CognitiveConfig();auto frame=InitialFrame(config);auto waiting=frame.soldiers[2];Map map;PrepareGeometry(map);
    waiting.position={0,0};waiting.assignment.id=80;waiting.assignment.task=Task::BoundMove;waiting.assignment.position={20,0};
    waiting.assignment.execution={Completion::Occupy,80,0,0,60,true};waiting.assignment.status=TaskStatus::Executing;
    waiting.contacts[32]={true,true,{30,0},10};waiting.contacts[32].aimHeight=1.5f;
    Tactics memory;auto defend=ExecuteTask(waiting,map,config,{},memory,10,nullptr);
    assert(defend.action==Action::Fire&&Distance(defend.goal,waiting.position)<.01f);
    EvaluateTaskExecution(waiting,map,memory,10,nullptr);assert(waiting.assignment.status==TaskStatus::Interrupted&&waiting.assignment.cause==TaskCause::AwaitSupport);
    waiting.contacts={};auto hold=ExecuteTask(waiting,map,config,{},memory,10,nullptr);assert(hold.action==Action::Hold);
    std::cout<<"SCENARIO reliability paused movement: defend current position without movement release or fabricated completion PASS\n";
    waiting.assignment.position=waiting.position;waiting.assignment.execution.paused=false;waiting.assignment.execution.completion=Completion::Transit;
    waiting.contacts[32]={true,true,{30,0},10};waiting.contacts[32].aimHeight=1.5f;
    waiting.contacts[32].detectionDelay=.6f;
    const float sensedAt=10+ReactionSeconds(waiting,ReactionKind::Sight)+.8f;
    assert(SelectFireSolution(waiting,map,sensedAt).enemy==32);
    assert(SelectFireSolution(waiting,map,10+ReactionSeconds(waiting,ReactionKind::Sight)+1.1f).enemy<0);
    auto legacy=waiting;legacy.cognition=false;assert(SelectFireSolution(legacy,map,sensedAt).enemy<0);
    auto cover=ExecuteTask(waiting,map,config,{},memory,10,nullptr);assert(cover.action==Action::Fire&&cover.reason==Reason::AtWaypoint);
    EvaluateTaskExecution(waiting,map,memory,10,nullptr);assert(waiting.assignment.status==TaskStatus::Done);
    waiting.contacts={};assert(ExecuteTask(waiting,map,config,{},memory,10,nullptr).action==Action::Hold);
    std::cout<<"SCENARIO reliability transit cover: arrived member can fire from the waypoint; no-contact control waits and transit completion remains spatial PASS\n";
    config.seed=308;config.maxSeconds=18;auto record=Simulate(config,{}, {},31);float until=18;bool assigned=false,fire=false;
    for(const auto& f:record.frames){const auto& p=f.command[0].accepted;const auto& member=f.soldiers[2];
        if(p.routeStage==0&&member.assignment.execution.completion==Completion::Transit&&member.action==Action::Fire)assigned=true;
        if(p.routeStage>0)until=std::min(until,f.time);
    }
    for(const auto& shot:record.shots)fire|=shot.owner==2&&shot.time<until;
    std::cerr<<"transit covering: assigned="<<assigned<<" fired="<<fire<<" stage ends="<<until<<"\n";assert(assigned&&fire);
    std::cout<<"SCENARIO reliability physical transit cover: early arrival fires real projectiles while the remaining movers approach the synchronization point PASS\n";


}

static void ReliabilityCoverPostureScenario(){
    auto config=CognitiveConfig();auto frame=InitialFrame(config);Map map;
    map.obstacles={{{0,0},{1,5},false,true,1.3f},{{80,-60},{1,1},false,false,4}};PrepareGeometry(map);
    auto soldier=frame.soldiers[2];soldier.contacts[32]={true,true,{20,0},10};soldier.contacts[32].aimHeight=1.5f;
    const CoverPosition* selected=nullptr;
    for(const auto& slot:CoverPositions(map))if(slot.crouch&&ClearLine3D(map,slot.peek+Vec3{0,0,.72f},{20,0,1.5f})){selected=&slot;break;}
    assert(selected);soldier.position=selected->peek;soldier.assignment.id=90;soldier.assignment.task=Task::BoundMove;
    soldier.assignment.hasSlot=true;soldier.assignment.slot=*selected;soldier.assignment.position=selected->shelter;
    soldier.assignment.execution={Completion::Occupy,90,0,0,60};
    Tactics memory;memory.assigned=true;memory.shelter=selected->shelter;memory.peek=selected->peek;
    auto low=ExecuteTask(soldier,map,config,{},memory,10,nullptr);assert(low.action==Action::Fire&&low.stance==Stance::Crouched);
    Vec3 delta=Vec3{20,0}-soldier.position;Vec3 blocker=soldier.position+delta*(1/Length(delta));
    ReplaceObstacle(map,map.obstacles.back().id,{blocker,{.25f,.25f},false,true,1.2f});
    assert(!ClearLine3D(map,soldier.position+Vec3{0,0,.72f},{20,0,1.5f}));
    assert(ClearLine3D(map,soldier.position+Vec3{0,0,1.5f},{20,0,1.5f}));
    auto high=ExecuteTask(soldier,map,config,{},memory,10,nullptr);assert(high.action==Action::Fire&&high.stance==Stance::Standing);
    std::cout<<"SCENARIO reliability cover posture: crouched firing uses a real clear muzzle ray; blocked low shot requires standing PASS\n";
}

static void ReliabilityPausedShelterScenario(){
    auto config=CognitiveConfig();config.seed=306;config.maxSeconds=12;
    auto record=Simulate(config,{}, {},28);bool safetyMove=false,occupied=false,paused=false;uint64_t retained=0;
    const auto slot=record.frames.front().command[0].accepted.slots[2];
    for(const auto& f:record.frames){const auto& s=f.soldiers[2];
        if(s.assignment.execution.paused){paused=true;if(!retained)retained=s.assignment.id;
            if(s.reason==Reason::EmergencyCover&&Distance(s.goal,slot.shelter)<.01f){safetyMove=true;assert(s.assignment.id==retained);}}
        if(safetyMove&&Distance(s.position,slot.shelter)<.75f)occupied=true;
    }
    for(const auto& shot:record.shots)assert(shot.owner!=7);
    std::cerr<<"paused shelter: paused="<<paused<<" safety="<<safetyMove<<" occupied="<<occupied<<"\n";
    assert(paused&&safetyMove&&occupied);
    std::cout<<"SCENARIO reliability paused shelter: sensed exposure triggers bounded physical shelter movement without inventing support fire PASS\n";
}

static void ReliabilityWoundedOccupationScenario(){
    auto config=CognitiveConfig();Map map;PrepareGeometry(map);
    for(int fault=0;fault<6;++fault){
        auto frame=InitialFrame(config);auto& leader=frame.soldiers[0];SquadCommand command;auto& p=command.accepted;
        for(auto& s:frame.soldiers)if(s.squad==0&&s.id!=0&&s.id!=2&&s.id!=3)s.health=0;
        leader.understoodHealth=40;leader.knownWounded[0]=true;
        leader.position={10,0};leader.platoonOrder.serial=1;leader.platoonOrder.expiresAt=100;
        p.directive=1;p.revision=1;p.intent={100,1,GoalPurpose::Seize,{20,0},8,100};p.mission=leader.platoonOrder.intent={1,0,GoalPurpose::Seize,{20,0},8,100};
        p.method=CognitiveMethod::SupportedAdvance;p.stage=MethodStage::Execute;p.started=p.stageStarted=1;p.reconsiderAt=50;p.destination={20,0};p.requiredOccupants=2;
        for(int id:{2,3}){p.movers[id]=true;p.expected[id]=id;p.positions[id]={20,float(id)};
            frame.soldiers[id].position=p.positions[id];frame.soldiers[id].health=40;leader.knownWounded[id]=true;
            auto& r=leader.taskReports[id];r.soldier=id;r.goalId=100;r.id=id;r.active=true;r.at=9;r.position=p.positions[id];
            r.status=TaskStatus::Done;r.execution={Completion::Occupy,100,0,0,50};}
        auto& r=leader.taskReports[2];
        if(fault==1){leader.allies[2]={true,true,{0,0},10};} // Fresh departure overrides an older Done.
        if(fault==2){frame.soldiers[2].health=0;r.active=false;}
        if(fault==3)r.at=2;
        if(fault==4)++r.execution.generation;
        if(fault==5){r.status=TaskStatus::Executing;leader.allies[2]={true,true,p.positions[2],10};}
        UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,10);
        if(!fault)assert(p.stage==MethodStage::Complete&&p.movers[2]&&p.movers[3]);
        else if(fault==5)assert(p.stage==MethodStage::Execute&&p.movers[2]&&p.movers[3]);
        else {assert(p.stage!=MethodStage::Complete);
            // Invalid evidence cannot complete occupation. A living wounded
            // member gets the same bounded acknowledgment window as any new role.
            if(fault!=2)UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,15);
            bool failed=false;for(const auto& a:p.attempts)failed|=a.cause==TaskCause::InsufficientStrength;assert(failed);}
    }
    config.seed=307;config.maxSeconds=24;auto record=Simulate(config,{}, {},29);bool held=false,complete=false;
    for(const auto& f:record.frames){const auto& p=f.command[0].accepted;const auto& leader=f.soldiers[f.command[0].leader];
        if(p.intent.id==9001&&p.stage!=MethodStage::Complete&&leader.knownWounded[2]&&p.movers[2]&&leader.taskReports[2].status==TaskStatus::Done)held=true;
        complete|=p.intent.id==9001&&p.stage==MethodStage::Complete;
    }
    std::cerr<<"wounded occupation: held="<<held<<" completed="<<complete<<"\n";assert(held&&complete);
    std::cout<<"SCENARIO reliability wounded occupation: physically established holder retained through reported injury; stale, departed, dead and replaced evidence rejected PASS\n";
    auto alternate=Simulate(config,{}, {},30);bool adopted=false,received=false,done=false;int generation=-1;float issuedAt=-1;
    for(const auto& e:alternate.diagnostics->entries)if(e.kind=="method_foothold_adopted"){adopted=true;issuedAt=e.time;}
    for(const auto& f:alternate.frames){const auto& p=f.command[0].accepted;const auto& member=f.soldiers[2];
        if(p.holders[2]){generation=p.generations[2];assert(p.hasSlot[2]==false);}
        if(generation>0&&member.assignment.execution.generation==generation&&member.assignment.execution.method==9001){
            received=true;assert(f.time>=issuedAt+config.reportDelay);
            done|=member.assignment.status==TaskStatus::Done;
        }
    }
    std::cerr<<"alternate wounded foothold: adopted="<<adopted<<" received="<<received<<" done="<<done<<"\n";
    assert(adopted&&received&&done);
    std::cout<<"SCENARIO reliability alternate foothold: received injury and fresh friendly position cause a useful local reassignment; physical arrival returns a new matching receipt PASS\n";

}

static void ReliabilityLocalCoverScenario(){
    auto config=CognitiveConfig();config.seed=309;config.maxSeconds=28;
    for(int variant:{32,33}){
        auto record=Simulate(config,{}, {},variant);bool assigned=false,acknowledged=false,useful=false,shot=false;
        float assignedAt=0;int source=-1;
        for(const auto& f:record.frames){const auto& p=f.command[0].accepted;
            if(p.localSupport<0)continue;
            if(!assigned)assignedAt=p.localAssignedAt;
            assigned=true;source=p.localSupport;
            assert(!p.movers[source%SquadSize]&&p.support==7&&p.localThreat==33);
            const auto& leader=f.soldiers[f.command[0].leader];const auto& receipt=leader.taskReports[source%SquadSize];
            if(receipt.id==p.expected[source%SquadSize]&&receipt.execution.rifleSupport&&receipt.execution.generation==p.generations[source%SquadSize])acknowledged=true;
            if(p.localUseful){useful=true;assert(acknowledged&&f.time>=assignedAt+config.reportDelay*2);}
        }
        for(const auto& s:record.shots)shot|=s.owner==source&&s.aimedEnemy==33&&s.time>assignedAt;
        std::cerr<<"local cover "<<variant<<": assigned="<<assigned<<" acknowledged="<<acknowledged<<" useful="<<useful<<" shot="<<shot<<"\n";
        if(variant==32){
            assert(assigned&&acknowledged&&useful&&shot);
            const Frame* established=nullptr;
            for(const auto& f:record.frames)if(f.command[0].accepted.localUseful){established=&f;break;}
            assert(established);
            // Local delivery can become useful while the designated gun is
            // redeploying. It must never substitute for that separate dependency.
            for(const auto& f:record.frames){const auto& p=f.command[0].accepted;
                if(p.localSupport>=0&&p.stage==MethodStage::Execute)assert(p.localUseful&&p.supportUseful);}
            for(int control=0;control<6;++control){
                auto f=*established;auto& command=f.command[0];auto& p=command.accepted;
                auto& leader=f.soldiers[command.leader];const int member=p.localSupport;
                const auto method=p.intent.id;const float deadline=p.executionDeadline,expires=p.mission.expiresAt;
                if(control==0)for(auto& e:leader.deliveries)if(e.shooter==member){e.enemy=50;e.target={-80,-80};}
                if(control==1)for(auto& e:leader.deliveries)if(e.shooter==member){e.observedAt=f.time-7;e.times={f.time-7,f.time-8};}
                if(control==2)--leader.taskReports[member%SquadSize].execution.generation;
                if(control==3)leader.taskReports[member%SquadSize].active=false;
                if(control==4){--leader.taskReports[member%SquadSize].execution.generation;leader.taskReports[member%SquadSize].active=false;}
                if(control==5){FireDelivery e;e.shooter=p.support;e.enemy=p.localThreat;e.supportWeapon=true;e.target=p.localSector;e.observedAt=f.time;e.times={f.time,f.time-.1f};RememberDelivery(leader,e);}
                UpdateCognitivePlan(leader,CognitiveSquad(f),record.map,config,command,nullptr,f.time+.01f);
                if(control==5){assert(p.localSupport<0&&p.intent.id==method);
                    if(deadline>0)assert(p.executionDeadline==deadline);
                    else assert(p.executionDeadline<=expires&&p.executionDeadline<=f.time+.01f+60);
                }
                else if(control==3){bool failed=false;for(const auto& a:p.attempts)failed|=a.cause==TaskCause::LocalSupport;assert(failed);}
                else {assert(p.intent.id==method&&!p.localUseful&&p.stage==MethodStage::Prepare);assert(p.executionDeadline==deadline&&p.mission.expiresAt==expires);}
            }
            auto noTrace=config;DiagnosticOptions disabled;disabled.enabled=false;
            auto repeat=Simulate(noTrace,disabled,{},variant);assert(GameplayDigest(record)==GameplayDigest(repeat));
        }else assert(!assigned);
    }
    std::cout<<"SCENARIO reliability local cover: real forward rifle delivery selects an explicit role, new delayed receipt and continued projectiles establish local support; reload-only control cannot provide it PASS\n";
}

static void ReliabilityReconnaissanceScenario(){
    auto config=CognitiveConfig();config.seed=309;config.maxSeconds=28;
    for(int variant:{34,35}){
        auto record=Simulate(config,{}, {},variant);bool selected=false,observed=false,reassigned=false,completed=false;float learnedAt=-1;
        for(const auto& e:record.diagnostics->entries){
            selected|=e.kind=="method_reconnaissance";
            if(e.kind=="method_reconnaissance_received"){observed=true;if(learnedAt<0)learnedAt=e.time;}
        }
        for(const auto& f:record.frames){const auto& p=f.command[0].accepted;
            if(p.intent.id!=9001)continue;
            for(int i:{2,3}){const auto& a=f.soldiers[i].assignment;
                if(a.execution.method==9001&&a.execution.generation>=2&&a.execution.completion==Completion::Occupy){
                    reassigned=true;assert(learnedAt>=0&&f.time>=learnedAt+config.reportDelay);}
            }
            if(!completed&&p.stage==MethodStage::Complete){completed=true;assert(observed&&reassigned);
                for(int i:{2,3}){const auto& r=f.soldiers[f.command[0].leader].taskReports[i];
                    assert(r.id==p.expected[i]&&r.execution.generation==p.generations[i]&&r.execution.completion==Completion::Occupy&&r.status==TaskStatus::Done);}
            }
        }
        std::cerr<<"recon "<<variant<<": selected="<<selected<<" observed="<<observed<<" new occupation="<<reassigned<<" complete="<<completed<<"\n";
        if(variant==34)assert(selected&&observed&&reassigned&&completed);else assert(!selected&&!completed);
    }
    std::cout<<"SCENARIO reliability final reconnaissance: stale targeting information prompts physical peeking and delayed evidence, then distinct occupation receipts; unreachable viewpoint control cannot complete PASS\n";
}

static void ReliabilitySupportProtocolContracts(){
    auto config=CognitiveConfig();auto frame=InitialFrame(config);Map map;PrepareGeometry(map);
    auto& leader=frame.soldiers[0];leader.position={0,0};leader.contacts[32]={true,false,{40,0},0};
    CognitiveOrder(leader,{24,0},{40,0});SquadCommand command;
    UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,1);
    auto& plan=command.accepted;assert(plan.stage==MethodStage::Prepare&&plan.route);
    const float cap=plan.prepareDeadline;assert(cap==61);
    for(int t:{2,12,22,32,42,52}){
        auto& report=leader.supportProgress;report.shooter=7;report.route=plan.route->id;report.stage=plan.routeStage;report.sector=plan.sector;
        report.observedAt=float(t);report.assignment=t;report.deadline=float(t)+45;report.status=TaskStatus::Executing;
        UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,float(t));
        assert(plan.prepareDeadline==cap&&plan.reconsiderAt<=cap);
    }
    UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,62);
    bool silent=false;for(const auto& loss:plan.supportFailures)silent|=loss.soldier==7&&loss.cause==TaskCause::Timeout;
    assert(silent&&plan.support!=7);
    // Distinct targets remain separate through the platoon relay as well as direct transport.
    ReactionRuntime reactions;std::vector<Event> events;PendingReaction relay;relay.kind=ReactionKind::PlatoonReport;relay.source=5;
    relay.situation.squad=0;relay.situation.observedAt=10;
    for(int target:{32,39}){FireDelivery d;d.shooter=7;d.supportWeapon=true;d.enemy=target;d.target={40,float(target-32)*2};d.observedAt=10;d.times={10,9.9f};relay.situation.deliveries.push_back(d);}
    auto& receiver=frame.soldiers[8];QueueReaction(receiver,relay,10,reactions);frame.time=11;ProcessReactions(frame,reactions,events);
    assert(ReceivedThreatSupport(receiver,{40,0},11,7,32)&&ReceivedThreatSupport(receiver,{40,14},11,7,39));
    QueueReaction(receiver,relay,12,reactions);frame.time=13;ProcessReactions(frame,reactions,events);
    for(const auto& d:receiver.deliveries)if(d.shooter==7)assert(d.observedAt==10);
    PlatoonDirective amended;amended.serial=44;amended.intent.id=40;amended.issuedAt=10;amended.expiresAt=80;amended.hasAlternative=true;amended.alternativeTask=PlatoonTask::Observe;
    SquadSituation obsolete;obsolete.goalId=40;obsolete.directive=43;obsolete.goalStatus=TaskStatus::Blocked;obsolete.observedAt=11;
    PlatoonDirective next;assert(!GoalAlternative(obsolete,amended,12,next,true));
    obsolete.directive=44;assert(GoalAlternative(obsolete,amended,12,next,true));
    std::cout<<"SCENARIO reliability support protocol: reissued deployment cannot extend stage cap; silence requires new source evidence; platoon relay retains distinct original target evidence PASS\n";
}

static void ReliabilitySupportLossScenario(){
    for(int variant:{37,38,39}){
        auto config=CognitiveConfig();config.seed=variant==39?320:317;config.maxSeconds=variant==38?24:65;
        auto record=Simulate(config,{}, {},variant);float dead=-1,received=-1,replaced=-1,released=-1;bool retired=false;
        for(const auto& f:record.frames){
            if(!f.soldiers[7].Active()&&dead<0)dead=f.time;
            const auto& p=f.command[1].accepted;
            for(const auto& loss:p.supportFailures)if(loss.soldier==7&&loss.cause==TaskCause::Casualty)retired=true;
            if(p.support==23&&replaced<0)replaced=f.time;
            if(p.support==23&&p.supportUseful&&released<0)released=f.time;
        }
        for(const auto& e:record.diagnostics->entries)if(e.kind=="support_unavailable_received"&&e.soldier==8){
            received=e.time;assert(e.time>=e.supportProgress.statusAt+2*config.reportDelay);
            assert(e.supportProgress.statusAt==e.supportProgress.observedAt);
        }
        if(variant==37){assert(dead>=0&&received>dead&&retired);bool learned=false;
            for(const auto& f:record.frames){const auto& p=f.command[1].accepted;learned|=!p.supportFailures.empty();if(learned)assert(p.support!=7);}
            DiagnosticOptions off;off.enabled=false;assert(GameplayDigest(record)==GameplayDigest(Simulate(config,off,{},variant)));
        }
        if(variant==38)assert(dead<0&&received<0&&!retired);
        if(variant==39){
            assert(dead>=0&&received>dead&&retired&&replaced>received&&released>replaced);
            bool amendment=false;
            for(const auto& e:record.diagnostics->entries)amendment|=e.kind=="support_replaced_by_command"&&e.soldier==8&&e.support==23;
            assert(amendment);
            for(const auto& f:record.frames){const auto& p=f.command[1].accepted;if(p.support!=23||!p.supportUseful||f.time!=released)continue;
                assert(p.intent.id==9011&&p.mission.id==9001&&p.mission.expiresAt==80&&p.route&&p.route->id==900);
                assert(ReceivedThreatSupport(f.soldiers[8],p.sector,f.time,23,p.supportThreat));
                int rounds=0;for(const auto& shot:record.shots)rounds+=shot.owner==23&&shot.time>=replaced&&shot.time<=f.time-config.reportDelay;
                assert(rounds>=2);
            }
        }
        std::cerr<<"support loss "<<variant<<": dead="<<dead<<" received="<<received<<" retired="<<retired<<" replaced="<<replaced<<" released="<<released<<"\n";
    }
    std::cout<<"SCENARIO reliability support loss: physical casualty relays original evidence, remains retired, and replacement needs actual delayed fire; living sheltered control retains source PASS\n";
}

static void ReliabilityInjuredMovementScenario(){
    for(int variant:{40,41,42}){
        auto config=CognitiveConfig();config.seed=301;config.maxSeconds=35;auto record=Simulate(config,{}, {},variant);
        bool assessed=false,completed=false,retired=false,progress=false;float moved=0;
        for(const auto& f:record.frames){const auto& p=f.command[0].accepted;const auto& soldier=f.soldiers[2];
            assessed|=p.injuries[2].deadline>0;retired|=!p.movers[2];
            if(p.intent.id==9001&&p.stage==MethodStage::Complete){completed=true;assert(f.soldiers[0].taskReports[2].status==TaskStatus::Done);}
            moved=std::max(moved,Distance(soldier.position,record.frames.front().soldiers[2].position));
            if(variant==42)assert(!f.soldiers[0].allies[2].known);
        }
        for(const auto& e:record.diagnostics->entries)progress|=e.soldier==2&&e.kind=="task_progress";
        std::cerr<<"injured movement "<<variant<<": assessed="<<assessed<<" completed="<<completed<<" retired="<<retired<<" moved="<<moved<<"\n";
        if(variant!=41)assert(assessed&&completed&&progress&&moved>6);else assert(!completed&&retired&&moved<1);
        if(variant==42){const TraceEntry* previous=nullptr;bool detour=false,delivered=false;
            for(const auto& e:record.diagnostics->entries){
                if(e.soldier==2&&e.kind=="task_progress"){
                    assert(e.taskRemaining>=0);
                    if(previous&&e.taskId==previous->taskId){assert(e.time-previous->time>=.999f&&Distance(e.position,previous->position)>=.749f);
                        detour|=e.taskRemaining<previous->taskRemaining&&Distance(e.position,e.goal)>Distance(previous->position,previous->goal);}
                    previous=&e;
                }
                if(e.soldier==0&&e.kind=="task_report_received"&&e.taskRemaining>=0){delivered=true;assert(e.time>=e.taskObservedAt+config.reportDelay);}
            }
            assert(detour&&delivered);
            DiagnosticOptions off;off.enabled=false;assert(GameplayDigest(record)==GameplayDigest(Simulate(config,off,{},variant)));
        }
    }
    std::cout<<"SCENARIO reliability injury: a wounded member demonstrates actual retained-task movement and completion; persistent physical inability retires the role within its budget PASS\n";
}

static void ReliabilityInjuryContracts(){
    auto config=CognitiveConfig();Map map;PrepareGeometry(map);
    auto setup=[&](){auto f=InitialFrame(config);for(auto& s:f.soldiers)if(s.id!=0&&s.id!=2){s.health=0;s.action=Action::Killed;}
        auto& leader=f.soldiers[0];leader.position={-10,0};leader.knownWounded[2]=true;
        f.soldiers[2].health=40;f.soldiers[2].position={-2,0};
        auto& p=f.command[0].accepted;p.method=CognitiveMethod::Withdraw;p.stage=MethodStage::Execute;p.revision=1;p.directive=9000;
        p.mission={9000,0,GoalPurpose::Withdraw,{10,0},8,50};p.intent={9001,9000,GoalPurpose::Withdraw,{10,0},8,50};p.geometry=map.revision;
        p.executionDeadline=p.reconsiderAt=50;p.movers[2]=true;p.requiredOccupants=1;p.expected[2]=100;p.positions[2]={10,0};p.holds[2]={-30,0};
        leader.platoonOrder.serial=9000;leader.platoonOrder.intent=p.mission;leader.platoonOrder.expiresAt=50;
        auto& r=leader.taskReports[2];r.soldier=2;r.active=true;r.id=100;r.goalId=9001;r.at=1;r.position={-2,0};r.remaining=20;
        r.status=TaskStatus::Executing;r.execution={Completion::Occupy,9001,0,0,50};return f;};
    auto f=setup();auto& leader=f.soldiers[0];auto& p=f.command[0].accepted;auto& r=leader.taskReports[2];
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,config,f.command[0],nullptr,1);
    ++p.generations[2];p.expected[2]=200;
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,config,f.command[0],nullptr,2);assert(p.movers[2]&&p.injuries[2].generation==1);
    r.id=200;r.execution.generation=1;r.at=3;r.remaining=20;
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,config,f.command[0],nullptr,3);const float before=p.injuries[2].deadline;
    r.at=4;r.remaining=18;r.position={-4,0};
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,config,f.command[0],nullptr,4);
    assert(p.movers[2]&&p.injuries[2].deadline>before&&p.injuries[2].pathMetric&&p.executionDeadline==50);
    // Reassessing the same accepted approach must use the retained capability,
    // rather than the stricter eligibility used to assign a new assault.
    p.destination=p.mission.objective;p.committedUntil=0;p.riskAtCommit=-10;p.started=0;
    f.soldiers[3].health=40;f.soldiers[3].action=Action::Hold;f.soldiers[3].position={-5,0};leader.knownWounded[3]=true;
    p.movers[3]=true;p.positions[3]={10,1};p.expected[3]=201;
    leader.taskReports[3]=r;leader.taskReports[3].id=201;leader.taskReports[3].soldier=3;leader.taskReports[3].execution.generation=0;
    leader.contacts[32]={true,false,{11,0},5};leader.contacts[32].automaticWeapon=true;
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,config,f.command[0],nullptr,5);
    assert(p.intent.id==9001&&p.movers[2]&&p.movers[3]&&p.stage==MethodStage::Execute);
    for(bool healthy:{false,true}){auto control=setup();auto& officer=control.soldiers[0];if(healthy)officer.knownWounded[2]=false;
        auto& receipt=officer.taskReports[2];receipt.status=TaskStatus::Interrupted;receipt.cause=TaskCause::Shelter;
        for(int t=1;t<=9;++t){receipt.at=float(t);UpdateCognitivePlan(officer,CognitiveSquad(control),map,config,control.command[0],nullptr,float(t));assert(control.command[0].accepted.movers[2]);}
    }
    auto stuck=setup();auto& officer=stuck.soldiers[0];officer.taskReports[2].status=TaskStatus::Interrupted;officer.taskReports[2].cause=TaskCause::Reload;
    UpdateCognitivePlan(officer,CognitiveSquad(stuck),map,config,stuck.command[0],nullptr,1);
    UpdateCognitivePlan(officer,CognitiveSquad(stuck),map,config,stuck.command[0],nullptr,7);
    assert(!stuck.command[0].accepted.movers[2]&&Distance(stuck.command[0].accepted.holds[2],Vec3{-2,0})<.01f);
    std::cout<<"SCENARIO reliability injury contracts: generation gaps retain roles, reported detour progress renews capability, shelter matches healthy grace, retirement holds the last known position PASS\n";
}

static void ReliabilitySupportHandoffScenario(){
    auto config=CognitiveConfig();config.seed=302;config.maxSeconds=65;auto record=Simulate(config,{}, {},43);
    bool requested=false,relocated=false,fired=false,handed=false;float handoffAt=-1;
    for(const auto& f:record.frames){const auto& p=f.command[1].accepted;const auto& gun=f.soldiers[7];
        requested|=f.soldiers[0].supportSector.requester==8&&Distance(f.soldiers[0].supportSector.focus,Vec3{48,25})<6;
        relocated|=Distance(gun.position,record.frames.front().soldiers[7].position)>20;
        // Candidate90 predates the strict changed-threat preflight contract.
        // Its later negative control is retained with experimental candidate141.
        if(!handed&&p.intent.id==9011&&p.supportThreat==33){handed=true;handoffAt=f.time;
            assert(ReceivedThreatSupport(f.soldiers[8],p.sector,f.time,7,33));
            assert(p.intent.id==9011&&p.mission.expiresAt==80);
        }
    }
    for(const auto& shot:record.shots)fired|=shot.owner==7&&shot.aimedEnemy==33&&shot.time<=handoffAt-config.reportDelay;
    std::cerr<<"support handoff: requested="<<requested<<" relocated="<<relocated<<" fired="<<fired<<" handed="<<handed<<" at="<<handoffAt<<"\n";
    assert(requested&&relocated&&fired&&handed);
    auto frame=InitialFrame(config);auto& leader=frame.soldiers[0];AcceptedPlan p;p.sector={30,0};p.requestedThreat=33;
    leader.reports[33]={true,false,{48,25},10};assert(Distance(SupportDeploymentSector(p,leader,11),Vec3{48,25})<.01f);
    assert(Distance(SupportDeploymentSector(p,leader,20),p.sector)<.01f);
    p.support=7;p.supportThreat=32;CognitiveDelivery(leader,11);leader.deliveries[0].target=p.sector;leader.deliveries[0].enemy=32;
    assert(!ReceivedThreatSupport(leader,{48,25},11,7,33));
    std::cout<<"SCENARIO reliability support handoff: production reports redirect deployment beyond initial range, gun physically relocates, and actual new-target delivery acknowledges the handoff PASS\n";
}

// Candidate90 baseline. Later experimental contracts are preserved in the candidate141 archive.
static void ReliabilityTests(){ReliabilitySupportHandoffScenario();ReliabilityInjuryContracts();ReliabilityInjuredMovementScenario();ReliabilitySupportProtocolContracts();ReliabilitySupportLossScenario();ReliabilityContractScenarios();ReliabilityStrengthScenario();ReliabilityPathScenario();ReliabilitySupportRecoveryScenario();ReliabilityPhysicalScenarios();ReliabilityPhysicalFriendlyScenario();ReliabilityOccupiedPositionScenario();ReliabilityPhysicalThreatScenario();ReliabilityProtectedTransitScenario();ReliabilityPausedDefenseScenario();ReliabilityCoverPostureScenario();ReliabilityPausedShelterScenario();ReliabilityWoundedOccupationScenario();ReliabilityLocalCoverScenario();ReliabilityReconnaissanceScenario();}
