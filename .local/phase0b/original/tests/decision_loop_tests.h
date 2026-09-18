#include "TaskSim.h"
#include "PerceptionSim.h"

static void ExecutionContractScenarios(){
    auto f=InitialFrame(CognitiveConfig());auto s=f.soldiers[2];Map map;PrepareGeometry(map);Tactics memory;
    s.position={0,0};s.look={1,0};s.stance=Stance::Standing;s.assignment={};
    s.assignment.id=11;s.assignment.serial=11;s.assignment.intent={80,0,GoalPurpose::Observe,{20,0},8,50};
    s.assignment.position=s.position;s.assignment.sector={20,0};s.assignment.execution={Completion::Observe,80,0,0,20};
    s.assignment.status=TaskStatus::Executing;s.assignment.activatedAt=1;
    EvaluateTaskExecution(s,map,memory,2,nullptr);assert(s.assignment.status==TaskStatus::Executing); // Arrival is not observation.
    auto coverage=SenseCoverage(s,map,2);assert(CoverageSamples(coverage.samples)==9);
    ReceiveCoverage(s,coverage,3);auto revision=s.knowledgeRevision;
    ReceiveCoverage(s,coverage,10);assert(s.knowledgeRevision==revision);bool preserved=false;for(const auto& e:s.coverage)preserved|=e.observer==2&&e.observedAt==2;assert(preserved);
    EvaluateTaskExecution(s,map,memory,3,nullptr);assert(s.assignment.status==TaskStatus::Done&&s.assignment.cause==TaskCause::Observed);
    assert(s.taskOutbox.back().execution.method==80&&s.taskOutbox.back().coverage.observedAt==2);
    for(const auto& ct:s.contacts)assert(!ct.known); // Empty sight lines do not invent contacts or clear unseen ground.
    auto replacement=s;replacement.assignment.status=TaskStatus::Executing;replacement.assignment.execution.generation=1;
    EvaluateTaskExecution(replacement,map,memory,4,nullptr);assert(replacement.assignment.status==TaskStatus::Executing);
    replacement.reloadUntil=8;EvaluateTaskExecution(replacement,map,memory,5,nullptr);
    assert(replacement.assignment.status==TaskStatus::Interrupted&&replacement.assignment.id==11);
    replacement.reloadUntil=0;EvaluateTaskExecution(replacement,map,memory,21,nullptr);assert(replacement.assignment.status==TaskStatus::Failed);
    auto support=s;support.assignment.status=TaskStatus::Executing;support.assignment.execution.completion=Completion::Support;
    EvaluateTaskExecution(support,map,memory,4,nullptr);assert(support.assignment.status==TaskStatus::Executing);
    auto gun=s;gun.id=7;gun.machineGun=true;gun.assignment.id=70;gun.assignment.intent.expiresAt=50;
    gun.assignment.execution.completion=Completion::Support;gun.assignment.status=TaskStatus::Executing;
    auto& delivery=gun.deliveries[0];delivery.shooter=7;delivery.supportWeapon=true;delivery.target={20,0};delivery.observedAt=3;
    EvaluateTaskExecution(gun,map,memory,4,nullptr);assert(gun.assignment.status==TaskStatus::Done);
    EvaluateTaskExecution(gun,map,memory,10,nullptr);assert(gun.assignment.status!=TaskStatus::Done&&gun.assignment.id==70&&gun.assignment.execution.deadline==25);
    EvaluateTaskExecution(gun,map,memory,26,nullptr);assert(gun.assignment.status==TaskStatus::Failed);
    auto transit=s;transit.assignment.status=TaskStatus::Executing;transit.assignment.execution.completion=Completion::Transit;
    EvaluateTaskExecution(transit,map,memory,4,nullptr);assert(transit.assignment.status==TaskStatus::Done);
    std::cout<<"SCENARIO contracts: arrival, bounded empty coverage, duplicate evidence, replacement generation, reload retention and deadline PASS\n";
}
static void ExactReceiptScenario(){
    auto c=CognitiveConfig();auto f=InitialFrame(c);auto& leader=f.soldiers[0];leader.position={0,0};
    for(auto& s:f.soldiers)if(s.squad==0)s.position={0,float(s.id)};
    CognitiveOrder(leader,{24,0},{40,0});Map map;PrepareGeometry(map);SquadCommand cmd;
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,cmd,nullptr,1);
    auto& p=cmd.accepted;const int stage=p.routeStage;
    for(int n=0;n<SquadSize;++n)if(p.movers[n]){
        p.expected[n]=100+n;auto& r=leader.taskReports[n];r.soldier=n;r.active=true;r.goalId=p.intent.id;
        r.id=50+n;r.status=TaskStatus::Done;r.at=2;r.execution={Completion::Transit,p.intent.id,stage,0,50};
    }
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,cmd,nullptr,2);assert(p.routeStage==stage&&p.stage!=MethodStage::Complete);
    for(int n=0;n<SquadSize;++n)if(p.movers[n]){auto& r=leader.taskReports[n];r.id=p.expected[n];r.execution.stage=stage-1;}
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,cmd,nullptr,3);assert(p.routeStage==stage&&p.stage!=MethodStage::Complete);
    leader.knownWounded[2]=true;f.soldiers[2].health=0;leader.taskReports[2].active=false;leader.taskReports[2].at=4;
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,cmd,nullptr,4);
    assert(!p.movers[2]&&p.routeStage==stage&&p.generations[2]==1);
    for(int n=0;n<SquadSize;++n)if(p.movers[n])assert(p.expected[n]==uint64_t(100+n)&&p.generations[n]==0);
    // Different support identities and stale/wrong-sector fire cannot release movement.
    CognitiveDelivery(leader,3);assert(ReceivedUsefulSupport(leader,{40,0},3,7));
    assert(!ReceivedUsefulSupport(leader,{40,0},3,15));assert(!ReceivedUsefulSupport(leader,{-40,0},3,7));assert(!ReceivedUsefulSupport(leader,{40,0},12,7));
    auto changed=c;changed.maxSeconds=600;assert(!SameConfig(c,changed));assert(c.maxSeconds==360);
    auto revised=leader;revised.contacts={};revised.reports={};revised.taskReports={};
    revised.contacts[39]={true,false,{40,0},1};revised.contacts[39].automaticWeapon=true;
    revised.contacts[32]={true,false,{40,20},20};SquadCommand freshPlan;
    UpdateCognitivePlan(revised,CognitiveSquad(f),map,c,freshPlan,nullptr,21);
    assert(Distance(freshPlan.accepted.sector,{40,20})<.01f); // A stale gun report cannot override fresh contradictory resistance.
    std::cout<<"SCENARIO receipts: obsolete assignment/stage rejected; exact support identity, sector, age and duration cache key PASS\n";
}
static void SupportDeploymentScenario(){
    auto config=CognitiveConfig();auto frame=InitialFrame(config);Map map;PrepareGeometry(map);
    auto& leader=frame.soldiers[0];leader.position={0,0};leader.contacts[32]={true,false,{40,0},0};
    CognitiveOrder(leader,{24,0},{40,0});auto& command=frame.command[0];command.leader=0;
    UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,1);
    auto& plan=command.accepted;assert(plan.route&&plan.stage==MethodStage::Prepare);plan.support=7;
    const auto route=plan.route->id;const auto method=plan.intent.id;
    PendingReaction message;message.kind=ReactionKind::SupportProgress;message.source=7;
    auto& progress=message.supportProgress;progress.shooter=7;progress.assignment=701;progress.route=route;
    progress.stage=plan.routeStage;progress.sector=plan.sector;progress.observedAt=25;progress.statusAt=20;
    progress.deadline=60;progress.status=TaskStatus::Executing;
    ReactionRuntime reactions;std::vector<Event> events;
    for(int fault=0;fault<5;++fault){auto wrong=message;
        if(fault==0)wrong.supportProgress.shooter=15;
        if(fault==1)++wrong.supportProgress.route;
        if(fault==2)++wrong.supportProgress.stage;
        if(fault==3)wrong.supportProgress.sector={-40,0};
        if(fault==4)wrong.supportProgress.observedAt=1;
        QueueReaction(leader,wrong,25,reactions);frame.time=27;ProcessReactions(frame,reactions,events);
        assert(leader.supportProgress.assignment==0);
    }
    QueueReaction(leader,message,25,reactions);frame.time=27;ProcessReactions(frame,reactions,events);
    assert(leader.supportProgress.assignment==701&&leader.supportProgress.statusAt==20);
    UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,27);
    const float deadline=plan.reconsiderAt;
    assert(deadline>=60&&plan.stage==MethodStage::Prepare&&!plan.supportUseful&&plan.intent.id==method&&plan.route->id==route);
    // A heartbeat or copied order cannot extend the same deployment indefinitely.
    leader.supportProgress.observedAt=30;leader.supportProgress.deadline=99;leader.supportProgress.cause=TaskCause::Arrived;
    UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,30);
    assert(plan.reconsiderAt==deadline&&plan.supportDeployed&&!plan.supportUseful&&plan.stage==MethodStage::Prepare);
    leader.supportProgress.assignment=702;leader.supportProgress.observedAt=31;leader.supportProgress.deadline=150;
    UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,31);
    assert(plan.reconsiderAt==plan.prepareDeadline&&plan.prepareDeadline==61&&plan.mission.expiresAt==100);
    CognitiveDelivery(leader,32);UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,32);
    assert(plan.stage==MethodStage::Execute&&plan.intent.id==method);
    std::cout<<"SCENARIO support deployment: exact source/route/stage/sector/age, bounded wait, duplicate deadline, actual fire release PASS\n";
}
static void RetainedExecutionScenario(){
    auto f=InitialFrame(CognitiveConfig());auto& s=f.soldiers[2];s.position={0,0};s.assignment={};
    s.assignment.id=100;s.assignment.serial=10;s.assignment.intent.id=7;s.assignment.status=TaskStatus::Done;
    s.assignment.statusAt=4;s.assignment.activatedAt=2;s.assignment.execution={Completion::Occupy,7,1,0,20,false};
    ReactionRuntime rt;std::vector<Event> events;
    PendingReaction pause;pause.kind=ReactionKind::Order;pause.source=0;pause.order=s.assignment;pause.order.serial=11;pause.order.execution.paused=true;
    QueueReaction(s,pause,5,rt);f.time=7;ProcessReactions(f,rt,events);
    assert(s.assignment.id==100&&s.assignment.status==TaskStatus::Done&&s.assignment.activatedAt==2&&s.assignment.statusAt==4&&s.assignment.execution.paused);
    auto resume=pause;resume.order.serial=12;resume.order.execution.paused=false;resume.order.execution.deadline=100;
    QueueReaction(s,resume,7,rt);f.time=9;ProcessReactions(f,rt,events);
    assert(s.assignment.id==100&&!s.assignment.execution.paused&&s.assignment.execution.deadline==20&&s.assignment.status==TaskStatus::Done);
    assert(!s.taskOutbox.empty()&&s.taskOutbox.back().id==100&&s.taskOutbox.back().at==4);
    QueueReaction(s,pause,9,rt);f.time=11;ProcessReactions(f,rt,events);assert(!s.assignment.execution.paused); // Reordered older pause is obsolete.
    std::cout<<"SCENARIO retained execution: pause/resume preserves ID, original arrival, deadline, and rejects reordered control PASS\n";
}
static void ObserverAvailabilityScenario(){
    auto config=CognitiveConfig();auto frame=InitialFrame(config);Map map;PrepareGeometry(map);
    for(auto& soldier:frame.soldiers)if(soldier.squad==0){soldier.position={0,float(soldier.id)};if(soldier.role==Role::Rifleman&&soldier.id!=2)soldier.health=0;}
    auto& leader=frame.soldiers[0];CognitiveOrder(leader,{0,0},{30,0},PlatoonTask::Observe);SquadCommand command;
    UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,1);
    auto orders=CognitiveOrders(leader,CognitiveSquad(frame),command);int observers=0;
    for(const auto& order:orders)if(order.execution.completion==Completion::Observe){++observers;assert(order.recipient==2);}
    assert(observers==1&&!command.accepted.movers[0]&&!command.accepted.movers[1]);
    frame.soldiers[2].health=0;SquadCommand unavailable;
    UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,unavailable,nullptr,1);assert(unavailable.accepted.exhausted);
    std::cout<<"SCENARIO observer availability: use remaining rifleman; retain command roles; report no observer available PASS\n";
}
static void PhysicalObservationScenarios(){
    for(int variant:{11,12,13,14}){
        auto c=CognitiveConfig();c.seed=108;c.maxSeconds=80;auto record=Simulate(c,{}, {},variant);
        bool completed=false,moved=false,selectedPeek=false,transported=false,sighting=false;int exhausted=0;
        for(const auto& frame:record.frames){
            for(int id:{2,3}){const auto& s=frame.soldiers[id];const auto& a=s.assignment;
                if(a.execution.completion!=Completion::Observe)continue;
                moved|=Distance(s.position,record.frames.front().soldiers[id].position)>8;
                selectedPeek|=a.hasSlot&&Distance(s.position,a.slot.peek)<.75f;
                sighting|=s.contacts[32].known;
                if(a.status==TaskStatus::Done){completed=true;assert(a.cause==TaskCause::Observed);}
            }
            for(const auto& e:frame.soldiers[0].coverage)if(e.observer==2||e.observer==3){transported|=e.receivedAt>e.observedAt+c.reportDelay;assert(e.samples!=0);}
        }
        for(const auto& e:record.diagnostics->entries)exhausted+=e.kind=="method_exhausted";
        std::cerr<<"physical "<<variant<<" completed="<<completed<<" transported="<<transported<<" moved="<<moved<<" sighting="<<sighting<<"\n";
        if(variant==14){assert(!completed&&exhausted==1);}
        else {assert(completed&&transported);if(variant!=13)assert(moved&&selectedPeek&&sighting);else assert(!sighting);}
        std::cout<<"SCENARIO physical observation "<<variant<<": completion="<<completed<<" movement="<<moved<<" peek="<<selectedPeek<<" transport="<<transported<<" exhausted="<<exhausted<<" PASS\n";
    }
}
static void PhysicalSupportScenarios(){
    for(int variant:{15,16}){
        auto c=CognitiveConfig();c.seed=107;c.maxSeconds=80;auto record=Simulate(c,{}, {},variant);
        bool released=false,lost=false,physical=false;
        for(const auto& e:record.diagnostics->entries){
            if(e.kind=="method_stage"&&e.reason=="sustained useful support releases staged movement"){
                released=true;assert(e.support==7&&e.supportUseful);
                bool evidence=false;for(const auto& report:e.deliveries)if(report.shooter==7&&report.supportWeapon&&e.time-report.observedAt<=6){
                    for(const auto& shot:record.shots)physical|=shot.owner==7&&shot.time<=report.observedAt&&report.observedAt-shot.time<1;
                    evidence=true;
                }assert(evidence);
            }
            lost|=e.kind=="method_stage"&&e.reason=="support lost; retain route and prepare again";
        }
        std::cerr<<"support "<<variant<<" release="<<released<<" loss="<<lost<<" physical="<<physical<<"\n";
        if(variant==15)assert(released&&physical&&lost);else assert(!released&&!physical);
    }
    std::cout<<"SCENARIO physical support: actual delivery releases movement, loss pauses it, unavailable gun cannot be replaced by rifle fire PASS\n";
}
static void PhysicalDeploymentScenario(){
    auto config=CognitiveConfig();config.seed=107;config.maxSeconds=70;
    auto record=Simulate(config,{}, {},17);
    bool waiting=false,released=false,travel=false,transported=false;int method=0;float waitAt=0;
    const auto start=record.frames.front().soldiers[15].position;
    for(const auto& frame:record.frames){
        const auto& leader=frame.soldiers[0];const auto& progress=leader.supportProgress;
        if(progress.shooter==15){
            assert(progress.observedAt+config.reportDelay<=frame.time+.001f);
            assert(progress.statusAt<=progress.observedAt&&progress.assignment!=0);
            transported=true;
        }
        travel|=Distance(frame.soldiers[15].position,start)>25;
    }
    for(const auto& entry:record.diagnostics->entries)if(entry.squad==0){
        if(entry.kind=="method_support_deploying"&&!waiting){
            waiting=true;waitAt=entry.time;method=entry.intent.id;
            assert(!entry.supportUseful&&entry.support==15&&entry.supportProgress.shooter==15);
            assert(entry.supportDeadline>31&&entry.supportProgress.status!=TaskStatus::Done);
        }
        if(!released&&entry.kind=="method_stage"&&entry.reason=="sustained useful support releases staged movement"){
            assert(waiting&&entry.intent.id==method&&entry.time>31&&entry.time>waitAt);
            bool physical=false;
            for(const auto& delivery:entry.deliveries)if(delivery.shooter==15&&delivery.supportWeapon&&entry.time-delivery.observedAt<=6){
                assert(delivery.observedAt+config.reportDelay<=entry.time+.001f);
                for(const auto& shot:record.shots)physical|=shot.owner==15&&shot.time<=delivery.observedAt&&delivery.observedAt-shot.time<1;
            }
            assert(physical);released=true;
        }
    }
    assert(waiting&&released&&travel&&transported);
    std::cout<<"SCENARIO physical cross-squad deployment: long obstructed relocation retains method past initial wait, delayed original evidence releases movement PASS\n";
}
static void ProtectedTransitScenario(){
    auto config=CognitiveConfig();auto frame=InitialFrame(config);Map map;PrepareGeometry(map);
    auto& leader=frame.soldiers[0];leader.position={0,0};CognitiveOrder(leader,{72,0},{80,0});
    SquadCommand command;UpdateCognitivePlan(leader,CognitiveSquad(frame),map,config,command,nullptr,1);
    const auto& route=command.accepted.route;assert(route&&route->stages.size()>1);
    bool continuous=false;size_t end=0;float seconds=0;
    for(const auto& stage:route->stages){assert(stage.begin==end&&stage.end>stage.begin);end=stage.end;seconds+=stage.seconds;
        continuous|=stage.seconds*route->speed>18;assert(stage.seconds<=10);}
    assert(continuous&&end==route->points.size()&&std::abs(seconds-route->cost.travel)<.01f);
    assert(Distance(route->stages.back().destination,route->destination)<.01f);
    auto orders=CognitiveOrders(leader,CognitiveSquad(frame),command);
    for(const auto& order:orders)if(command.accepted.movers[order.recipient%SquadSize])assert(order.execution.completion==Completion::Transit);
    std::cout<<"SCENARIO protected transit: continuous planned corridor, bounded stages, separate final occupation PASS\n";
}
static void NormalMapScenarios(){
    for(auto terrain:{Terrain::FracturedWorks,Terrain::Trenches}){
        auto c=CognitiveConfig();c.terrain=terrain;c.seed=108;c.maxSeconds=600;c.supportWeapon=false;
        auto record=Simulate(c);bool failure=false,occlusion=false;int successions=0;
        for(const auto& event:record.events)successions+=event.kind==EventKind::Succession&&event.text.find("down:")!=std::string::npos;
        for(const auto& frame:record.frames){
            for(const auto& observer:frame.soldiers)if(observer.Active())for(const auto& enemy:frame.soldiers)
                if(enemy.Active()&&enemy.team!=observer.team&&Distance(observer.position,enemy.position)<SightRange(observer)&&!ClearLine3D(record.map,observer.position+Vec3{0,0,1.7f},enemy.position+Vec3{0,0,1.2f}))occlusion=true;
        }
        for(const auto& entry:record.diagnostics->entries)if(entry.soldier<32){
            assert(entry.kind!="method_stage"||entry.reason!="sustained useful support releases staged movement");
            failure|=entry.kind=="method_exhausted";
        }
        assert(failure&&occlusion&&successions>0);
        std::cout<<"SCENARIO normal map "<<int(terrain)<<": obstructed views, command succession, unavailable support reported; duration="<<record.duration<<" PASS\n";
    }
}
static void DecisionLoopTests(){ExecutionContractScenarios();ExactReceiptScenario();SupportDeploymentScenario();RetainedExecutionScenario();ObserverAvailabilityScenario();PhysicalObservationScenarios();PhysicalSupportScenarios();PhysicalDeploymentScenario();ProtectedTransitScenario();}
