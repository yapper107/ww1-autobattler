#include "CognitiveSim.h"

static Config CognitiveConfig(){Config c;c.foundations=c.cognition=true;return c;}
static std::vector<Soldier> CognitiveSquad(Frame& f){return {f.soldiers.begin(),f.soldiers.begin()+SquadSize};}
static void CognitiveOrder(Soldier& leader,Vec3 goal,Vec3 sector,PlatoonTask task=PlatoonTask::FlankNorth){
    leader.platoonOrder.serial=40;leader.platoonOrder.task=task;leader.platoonOrder.position=goal;
    leader.platoonOrder.sector=sector;leader.platoonOrder.issuedAt=0;leader.platoonOrder.expiresAt=100;
    leader.platoonOrder.intent={40,0,task==PlatoonTask::Observe?GoalPurpose::Observe:GoalPurpose::Seize,task==PlatoonTask::Observe?sector:goal,8,100};
}
static void CognitiveDelivery(Soldier& leader,float time){
    auto& report=leader.deliveries[0];report.shooter=7;report.supportWeapon=true;report.target={40,0};report.observedAt=time;report.rounds=2;
    report.times[0]=time;report.times[1]=time-.1f;
}
static void CognitionPerceptionScenarios(){
    auto c=CognitiveConfig();auto f=InitialFrame(c);auto s=f.soldiers[2];s.position={0,0};s.look={1,0};s.goal={30,0};
    auto enemy=f.soldiers[32];enemy.position={15,0};Map map;
    auto near=SenseEnemy(s,enemy,map,0);enemy.position={60,0};auto far=SenseEnemy(s,enemy,map,0);
    assert(near.known&&far.known&&far.detectionDelay>near.detectionDelay);
    enemy.position={-15,0};assert(!SenseEnemy(s,enemy,map,0).known);bool rear=false;
    for(int tick=1;tick<=260;++tick){float time=tick*.05f;UpdateAttention(s,time,.05f);rear|=SenseEnemy(s,enemy,map,time).known;}assert(rear);
    s.look={1,0};enemy.position={20,0};map.obstacles={{{10,0},{1,5},false,false,4}};PrepareGeometry(map);
    assert(!SenseEnemy(s,enemy,map,15).known);
    s.contacts[32]={true,false,{20,0},1};s.goal={0,20};s.look={1,0};
    for(int tick=0;tick<200;++tick)UpdateAttention(s,20+tick*.05f,.05f);
    assert(s.attentionTrack==-1); // An old report cannot monopolize attention.
    auto full=s;full.directionalSight=false;assert(InVisualField(full,{-20,0},70));
    std::cout<<"SCENARIO sight: front/rear, occlusion, distance recognition and stale fixation PASS\n";
}
static void CognitionMemoryScenarios(){
    auto f=InitialFrame(CognitiveConfig());auto& s=f.soldiers[0];s.position={0,0};
    Contact ct{true,false,{20,0},1};ct.originalObserver=2;
    ReceiveObservations(s,{{32,ct}},1,3);auto fresh=BuildMentalMap(s,3);auto aged=BuildMentalMap(s,50);
    assert(fresh.size()==1&&aged.size()==1&&fresh[0].high==aged[0].high&&aged[0].low<fresh[0].low);
    assert(aged[0].uncertainty>fresh[0].uncertainty);
    auto rev=s.knowledgeRevision;ReceiveObservations(s,{{32,ct}},3,10);assert(s.knowledgeRevision==rev&&s.reports[32].observedAt==1);
    assert(BuildMentalMap(s,10)[0].observations==1);
    assert(RememberedRisk(s,{43,0},30)>RememberedRisk(s,{43,0},2));
    auto expert=s;expert.estimateBias=1;expert.officer.judgment=1;auto novice=expert;novice.officer.judgment=0;
    assert(BuildMentalMap(expert,3)[0].estimate<BuildMentalMap(novice,3)[0].estimate);
    ct.clearedAt=51;ReceiveObservations(s,{{32,ct}},2,52);ct.clearedAt=-100;ReceiveObservations(s,{{32,ct}},3,53);assert(BuildMentalMap(s,53).empty());
    std::cout<<"SCENARIO memory: count conservation, location uncertainty, relay dedup, skill and clearance PASS\n";
}
static void CognitionMethodScenarios(){
    auto c=CognitiveConfig();auto f=InitialFrame(c);for(auto& s:f.soldiers)s.position={float(s.id%8)*-.3f,0};
    auto& leader=f.soldiers[0];leader.contacts[32]={true,false,{40,0},0};CognitiveOrder(leader,{24,0},{40,0});
    // Support authorization is isolated from unsafe-wait failure: this squad
    // starts behind a real shelter while unrelated rifle reports arrive.
    Map map;map.obstacles={{{3,0},{.6f,6},false,true,1.3f}};PrepareGeometry(map);SquadCommand command;command.leader=0;Diagnostics trace;
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,command,&trace,1);
    assert(command.accepted.method==CognitiveMethod::SupportedAdvance&&command.accepted.stage==MethodStage::Prepare);
    auto orders=CognitiveOrders(leader,CognitiveSquad(f),command);for(const auto& o:orders)if(o.task==Task::BoundMove)assert(o.execution.paused&&!o.teamPlan.released);
    auto blocked=command;leader.supportBlocked=true;CognitiveDelivery(leader,2);
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,blocked,nullptr,42);
    assert(!blocked.accepted.attempts.empty()&&blocked.accepted.attempts.back().cause==TaskCause::Support);
    leader.supportBlocked=false;
    auto rifleOnly=command;
    for(int t=2;t<=5;++t){CognitiveDelivery(leader,float(t));leader.deliveries[0].supportWeapon=false;UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,rifleOnly,nullptr,float(t));}
    assert(rifleOnly.accepted.stage==MethodStage::Prepare);
    for(int t=2;t<=5;++t){CognitiveDelivery(leader,float(t));UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,command,&trace,float(t));}
    assert(command.accepted.stage==MethodStage::Execute);
    orders=CognitiveOrders(leader,CognitiveSquad(f),command);int moving=0;for(const auto& o:orders)moving+=o.task==Task::BoundMove;assert(moving>=2);
    const int method=command.accepted.intent.id;
    auto& reloader=leader.taskReports[2];reloader.goalId=method;reloader.active=true;reloader.status=TaskStatus::Interrupted;reloader.cause=TaskCause::Reload;reloader.at=5;
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,command,&trace,5.5f);assert(!command.accepted.safetyOverride);
    reloader.status=TaskStatus::Executing;
    auto& interrupted=leader.taskReports[0];interrupted.cause=TaskCause::Shelter;interrupted.goalId=method;interrupted.active=true;interrupted.status=TaskStatus::Interrupted;interrupted.at=5;
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,command,&trace,6);assert(command.accepted.safetyOverride&&command.accepted.intent.id==method);
    auto retained=CognitiveOrders(leader,CognitiveSquad(f),command);assert(retained[2].task==orders[2].task&&Distance(retained[2].position,orders[2].position)<.01f);
    interrupted.status=TaskStatus::Executing;interrupted.at=6;CognitiveDelivery(leader,7);
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,command,&trace,7);assert(!command.accepted.safetyOverride&&command.accepted.intent.id==method);
    for(int t=8;t<16&&command.accepted.stage!=MethodStage::Complete;++t){
        for(int slot=0;slot<8;++slot)if(command.accepted.movers[slot]){auto& report=leader.taskReports[slot];report.goalId=method;report.active=true;report.status=TaskStatus::Done;report.at=float(t);report.position=command.accepted.positions[slot];report.execution.completion=command.accepted.route&&command.accepted.routeStage+1<int(command.accepted.route->stages.size())?Completion::Transit:Completion::Occupy;}
        CognitiveDelivery(leader,float(t));UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,command,&trace,float(t));
    }
    assert(command.accepted.stage==MethodStage::Complete);
    UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,command,&trace,80);assert(command.accepted.stage==MethodStage::Complete);
    int accepted=0;bool pause=false,resume=false;for(const auto& e:trace.entries){accepted+=e.kind=="method_accepted";pause|=e.kind=="method_safety_override";resume|=e.kind=="method_resume";}assert(accepted==1&&pause&&resume);
    // Observation completion requires post-order evidence, and otherwise times out honestly.
    auto observer=leader;observer.contacts={};observer.reports={};CognitiveOrder(observer,{0,0},{40,0},PlatoonTask::Observe);
    SquadCommand observation;UpdateCognitivePlan(observer,CognitiveSquad(f),map,c,observation,nullptr,1);
    auto timeout=observation;UpdateCognitivePlan(observer,CognitiveSquad(f),map,c,timeout,nullptr,62);assert(timeout.accepted.stage==MethodStage::Blocked);
    observer.contacts[32]={true,false,{40,0},2};UpdateCognitivePlan(observer,CognitiveSquad(f),map,c,observation,nullptr,3);assert(observation.accepted.stage!=MethodStage::Complete);
    auto& receipt=observer.taskReports[2];receipt.goalId=observation.accepted.intent.id;receipt.active=true;receipt.status=TaskStatus::Done;receipt.at=4;receipt.execution.completion=Completion::Observe;
    UpdateCognitivePlan(observer,CognitiveSquad(f),map,c,observation,nullptr,4);assert(observation.accepted.stage==MethodStage::Complete);
    auto exhaustedObservation=observation;
    exhaustedObservation.accepted.mission.purpose=GoalPurpose::Seize;
    exhaustedObservation.accepted.attempts.push_back({CognitiveMethod::SupportedAdvance,exhaustedObservation.accepted.mission.objective,exhaustedObservation.accepted.mission.objective,map.revision,exhaustedObservation.accepted.threats,4,TaskCause::Support});
    UpdateCognitivePlan(observer,CognitiveSquad(f),map,c,exhaustedObservation,nullptr,5);
    assert(exhaustedObservation.accepted.method==CognitiveMethod::Hold&&exhaustedObservation.accepted.exhausted); // Repeated inspection needs changed evidence, not another order ID.

    // An unobstructed ray alone is insufficient when the region is beyond sight range.
    Map distantMap;distantMap.obstacles={{{18,7},{.6f,3},false,true}};PrepareGeometry(distantMap);
    observer.contacts={};observer.reports={};CognitiveOrder(observer,{0,0},{85,0},PlatoonTask::Observe);
    SquadCommand distant;UpdateCognitivePlan(observer,CognitiveSquad(f),distantMap,c,distant,nullptr,1);
    assert(distant.accepted.method==CognitiveMethod::Observe&&Distance(distant.accepted.destination,observer.position)>8);
    assert(Distance(distant.accepted.destination,{85,0})<=SightRange(observer)+2);
    auto observationOrders=CognitiveOrders(observer,CognitiveSquad(f),distant);int observers=0;for(const auto& o:observationOrders)observers+=o.execution.completion==Completion::Observe;
    assert(observers==2);
    std::cout<<"SCENARIO execution: withheld support, delivery release, same-method pause/resume, staged arrivals, latched completion and observe timeout PASS\n";
}
static void CognitionProfileScenarios(){
    auto c=CognitiveConfig();auto f=InitialFrame(c);auto commander=f.soldiers[5];Map map;map.obstacles={{{8,-35},{.6f,4},false,true,1.3f},{{8,35},{.6f,4},false,true,1.3f}};PrepareGeometry(map);
    for(int n=0;n<5;++n)commander.contacts[32+n]={true,false,{20,float(n)},1};
    for(int n=0;n<2;++n){auto& r=commander.platoonReports[n];r.squad=n;r.leader=n*8;r.active=6;r.mobile=4;r.position={-20,float(n*15)};r.contact=commander.contacts[32];r.enemy=32;r.observedAt=1;}
    commander.platoonReports[0].machineGuns=1;commander.estimateBias=0;commander.officer.risk=0;
    auto cautious=PlanPlatoon(commander,map,c,2);commander.officer.risk=1;auto bold=PlanPlatoon(commander,map,c,2);
    assert(cautious[1].directive.task==PlatoonTask::Reserve&&bold[1].directive.task!=PlatoonTask::Reserve);
    for(int n=0;n<20;++n)commander.contacts[32+n]={true,false,{20,float(n%3)},1};
    commander.officer.risk=0;
    auto retreat=PlanPlatoon(commander,map,c,2);assert(retreat[1].directive.task==PlatoonTask::Withdraw);
    std::cout<<"SCENARIO officer: identical evidence, distinct risk preference; overwhelming believed force produces withdrawal PASS\n";
}
static void CognitionObstructionScenario(){
    auto c=CognitiveConfig();c.maxSeconds=120;
    auto record=Simulate(c,{}, {},10);
    float exhausted=-1,sent=-1;
    bool obstruction=false,feedback=false,replacement=false,changed=false;
    for(const auto& e:record.diagnostics->entries){
        if(e.kind=="method_exhausted"&&e.intent.parent==9000)exhausted=e.time;
        if(e.kind=="goal_feedback_sent"&&e.intent.id==9000&&sent<0)sent=e.time;
        if(sent>=0&&e.kind=="method_accepted")assert(e.intent.parent!=9000);
        obstruction|=e.kind=="task_status"&&e.taskCause==int(TaskCause::Geometry)&&e.taskStatus==int(TaskStatus::Failed);
        feedback|=e.kind=="goal_feedback_received";
        replacement|=e.kind=="goal_alternative_applied";
        changed|=e.kind=="method_accepted"&&e.phase=="hold"&&e.intent.parent!=9000;
    }
    std::cout<<"Obstruction evidence: "<<obstruction<<","<<feedback<<","<<replacement<<","<<changed<<"\n";
    if(!(obstruction&&feedback&&replacement&&changed))ExportBattle(record,".local/cognition-obstruction-failure");
    assert(obstruction&&feedback&&replacement&&changed&&exhausted>=0&&sent>=exhausted);
    std::cout<<"SCENARIO physical obstruction: changed geometry -> invalidated destination -> delayed feedback -> honest hold after observation alternatives exhausted PASS\n";
}
static void CognitionAlternativeScenario(){
    auto c=CognitiveConfig();auto f=InitialFrame(c);for(auto& s:f.soldiers)s.position={float(s.id%8)*-.3f,0};
    auto& leader=f.soldiers[0];CognitiveOrder(leader,{24,0},{40,0});leader.contacts[32]={true,false,{40,0},0};
    Map map;map.obstacles={{{3,0},{.6f,6},false,true,1.3f},{{10,14},{.6f,3},false,true},{{10,-14},{.6f,3},false,true}};PrepareGeometry(map);
    SquadCommand cmd;UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,cmd,nullptr,1);
    assert(cmd.accepted.method==CognitiveMethod::SupportedAdvance);
    for(int t=2;t<=5;++t){CognitiveDelivery(leader,float(t));UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,cmd,nullptr,float(t));}
    const int old=cmd.accepted.intent.id;
    for(int slot:{2,3}){auto& report=leader.taskReports[slot];report.goalId=old;report.status=TaskStatus::Blocked;report.cause=TaskCause::Unreachable;report.at=6;}
    CognitiveDelivery(leader,6);UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,cmd,nullptr,6);
    assert(cmd.accepted.method==CognitiveMethod::AlternateApproach&&cmd.accepted.intent.id!=old&&cmd.accepted.intent.parent==40);
    assert(Distance(cmd.accepted.destination,{24,0})>8&&cmd.accepted.route&&cmd.accepted.route->geometry==map.revision);
    assert(cmd.accepted.intent.expiresAt==100&&Distance(cmd.accepted.intent.objective,{24,0})<.01f);
    auto recovering=cmd;recovering.accepted.attempts.clear();recovering.accepted.supportUseful=false;
    recovering.accepted.attempts.push_back({CognitiveMethod::SupportedAdvance,{24,0},{24,0},map.revision,recovering.accepted.threats,6,TaskCause::Support});
    auto renewedSupport=leader;renewedSupport.taskReports={};CognitiveDelivery(renewedSupport,7);
    UpdateCognitivePlan(renewedSupport,CognitiveSquad(f),map,c,recovering,nullptr,7);
    assert(recovering.accepted.method==CognitiveMethod::SupportedAdvance&&Distance(recovering.accepted.destination,{24,0})<.01f);

    auto expired=cmd;UpdateCognitivePlan(leader,CognitiveSquad(f),map,c,expired,nullptr,101);
    assert(expired.accepted.stage==MethodStage::Blocked&&expired.accepted.intent.parent==0&&expired.accepted.intent.expiresAt==100);
    auto renewed=leader;renewed.platoonOrder.serial=41;renewed.platoonOrder.intent.id=41;renewed.platoonOrder.expiresAt=120;
    renewed.contacts={};renewed.reports={};
    UpdateCognitivePlan(renewed,CognitiveSquad(f),map,c,expired,nullptr,102);
    assert(expired.accepted.exhausted&&expired.accepted.intent.expiresAt==100&&!expired.accepted.attempts.empty()); // Equivalent reissue retains the deadline and failed approaches.
    // Holding all evidence fixed, adaptability controls response to a newly reported threat.
    auto fast=leader,slow=leader;fast.taskReports={};slow.taskReports={};fast.officer.adaptability=1;slow.officer.adaptability=0;
    SquadCommand fastPlan,slowPlan;UpdateCognitivePlan(fast,CognitiveSquad(f),map,c,fastPlan,nullptr,1);UpdateCognitivePlan(slow,CognitiveSquad(f),map,c,slowPlan,nullptr,1);
    fast.contacts[33]=slow.contacts[33]={true,false,{24,0},7};++fast.knowledgeRevision;++slow.knowledgeRevision;
    CognitiveDelivery(fast,8);CognitiveDelivery(slow,8);Diagnostics fastTrace,slowTrace;
    UpdateCognitivePlan(fast,CognitiveSquad(f),map,c,fastPlan,&fastTrace,8);UpdateCognitivePlan(slow,CognitiveSquad(f),map,c,slowPlan,&slowTrace,8);
    bool reconsidered=false;for(const auto& e:fastTrace.entries)reconsidered|=e.kind=="method_reconsidered";assert(reconsidered);
    for(const auto& e:slowTrace.entries)assert(e.kind!="method_reconsidered");
    std::cout<<"SCENARIO alternatives: failed method replaced through another approach; adaptability controls new-threat reconsideration PASS\n";
}
static void CognitionTransportScenario(){
    auto fast=CognitiveConfig(),slow=fast;fast.maxSeconds=slow.maxSeconds=20;slow.reportDelay=3;
    DiagnosticOptions off;off.enabled=false;auto a=Simulate(fast,off,{},9),b=Simulate(slow,off,{},9);
    auto receipt=[](const Record& record){for(const auto& frame:record.frames){const auto& commander=frame.soldiers[5];
        assert(!commander.contacts[32].known);if(commander.reports[32].known){assert(commander.reports[32].observedAt<frame.time);return frame.time;}}
        return 1000.f;};
    float early=receipt(a),late=receipt(b);std::cerr<<"transport "<<early<<" "<<late<<"\n";assert(early<late&&late<20);
    std::cout<<"SCENARIO report transport: commander outside sight learns at "<<early<<"s versus "<<late<<"s with slower reports PASS\n";
}
static void CognitionSupportRelayScenario(){
    auto c=CognitiveConfig();auto f=InitialFrame(c);PlatoonRuntime transport;ReactionRuntime reactions;std::vector<Event> events;
    CognitiveDelivery(f.soldiers[0],0);
    assert(!ReceivedUsefulSupport(f.soldiers[8],{40,0},0));
    for(int tick=0;tick<=100;++tick){f.time=tick*.05f;ProcessReactions(f,reactions,events);UpdatePlatoon(f,Map{},c,transport,reactions,events);}
    assert(ReceivedUsefulSupport(f.soldiers[8],{40,0},f.time));
    bool preserved=false;for(const auto& delivery:f.soldiers[8].deliveries)if(delivery.shooter==7){assert(delivery.observedAt==0);preserved=true;}assert(preserved);
    assert(!ReceivedUsefulSupport(f.soldiers[8],{40,0},12));
    assert(!ReceivedUsefulSupport(f.soldiers[8],{-40,0},5));
    std::cout<<"SCENARIO support relay: fire evidence reaches another squad through command; wrong-area and expired evidence rejected PASS\n";
}
static void CognitionTests(){
    CognitionPerceptionScenarios();CognitionMemoryScenarios();CognitionMethodScenarios();CognitionProfileScenarios();CognitionAlternativeScenario();CognitionTransportScenario();CognitionSupportRelayScenario();CognitionObstructionScenario();
    auto c=CognitiveConfig();c.maxSeconds=35;DiagnosticOptions off;off.enabled=false;
    auto a=Simulate(c,{}, {},8),b=Simulate(c,off,{},8);assert(GameplayDigest(a)==GameplayDigest(b));
    bool accepted=false;for(const auto& e:a.diagnostics->entries)accepted|=e.kind=="method_accepted";assert(accepted);
    std::cout<<"SCENARIO integration: production sensing/orders/execution, traced/untraced digest "<<GameplayDigest(a)<<" PASS\n";
}
