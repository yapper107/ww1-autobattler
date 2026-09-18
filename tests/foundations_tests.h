#include "PerceptionSim.h"
#include "BeliefSim.h"

static void FoundationsVisionTests(){
    Soldier scout;scout.id=2;scout.directionalSight=true;scout.look={-1,0};scout.facing={1,0};
    Soldier enemy;enemy.id=32;enemy.team=1;enemy.position={20,0};Map map;
    assert(!SenseEnemy(scout,enemy,map,0).known);
    scout.look={1,0};auto sight=SenseEnemy(scout,enemy,map,0);assert(sight.visible&&sight.originalObserver==2);
    map.obstacles={{{10,0},{1,4},false,false,4}};assert(!SenseEnemy(scout,enemy,map,0).known);
    map={};Frame f;f.soldiers[2]=scout;ReactionRuntime runtime;std::vector<Event> events;
    PendingReaction reaction;reaction.kind=ReactionKind::Sight;reaction.enemy=32;reaction.contact=sight;
    QueueReaction(scout,reaction,0,runtime);f.time=.01f;ProcessReactions(f,runtime,events);assert(!f.soldiers[2].contacts[32].known);
    f.time=1;ProcessReactions(f,runtime,events);assert(f.soldiers[2].contacts[32].visible);
    scout.contacts[32]=sight;scout.contacts[32].visible=false;scout.look={-1,0};
    ObserveEmptyTracks(scout,map,5);ObserveEmptyTracks(scout,map,9);assert(WithTracks(scout,9).contacts[32].known);
    scout.look={1,0};ObserveEmptyTracks(scout,map,10);ObserveEmptyTracks(scout,map,14);assert(!WithTracks(scout,14).contacts[32].known);
    scout.contacts={};scout.goal={20,0};scout.look={1,0};bool rear=false;
    for(int tick=0;tick<260;++tick){UpdateAttention(scout,tick*.05f,.05f);rear|=InVisualField(scout,{-20,0},70);}
    assert(rear&&scout.facing.x==1); // A stationary soldier can check behind without moving his body.
    std::cout<<"Foundations sight: field, occlusion, recognition delay, rear scanning, negative evidence verified\n";
}
static void FoundationsBeliefTests(){
    Soldier scout;scout.directionalSight=true;scout.id=2;
    Contact contact{true,true,{20,0},1};contact.originalObserver=2;contact.automaticWeapon=true;
    std::vector<ReportedContact> observations{{32,contact}};
    Soldier officer;officer.directionalSight=true;officer.id=0;
    ReceiveObservations(officer,observations,1,3);
    auto first=BuildMentalMap(officer,3);assert(first.size()==1&&first[0].observations==1&&first[0].high>first[0].low&&first[0].automaticWeapons==1);
    auto revision=officer.knowledgeRevision;
    ReceiveObservations(officer,observations,6,4);assert(officer.knowledgeRevision==revision);
    assert(officer.reports[32].observedAt==1&&officer.reports[32].originalObserver==2);
    auto same=BuildMentalMap(officer,3);assert(same[0].estimate==first[0].estimate);
    auto doubtful=officer;doubtful.estimateBias=1;auto reckless=officer;reckless.estimateBias=-1;
    assert(BuildMentalMap(doubtful,3)[0].estimate>first[0].estimate&&BuildMentalMap(reckless,3)[0].estimate<first[0].estimate);
    assert(doubtful.reports[32].position.x==reckless.reports[32].position.x);
    auto aged=BuildMentalMap(officer,50);assert(aged[0].high-aged[0].low>first[0].high-first[0].low);
    assert(BuildMentalMap(officer,125).empty());
    observations[0].contact.clearedAt=5;ReceiveObservations(officer,observations,1,6);
    observations[0].contact=contact;ReceiveObservations(officer,observations,6,7);assert(BuildMentalMap(officer,7).empty());
    // A leader's regional picture must not depend on unobserved bodies.
    Soldier hidden;hidden.id=33;hidden.team=1;hidden.position={21,0};hidden.machineGun=true;
    assert(BuildMentalMap(reckless,3)[0].observations==1);
    Frame f;f.soldiers[0]=officer;ReactionRuntime rt;std::vector<Event> events;
    PendingReaction directive;directive.kind=ReactionKind::PlatoonOrder;directive.source=5;
    directive.directive.serial=1;directive.directive.expiresAt=60;directive.directive.enemy=32;
    directive.directive.contact=contact;directive.directive.contact.observedAt=2;
    QueueReaction(f.soldiers[0],directive,7,rt);f.time=8;ProcessReactions(f,rt,events);
    assert(f.soldiers[0].reports[32].clearedAt==5&&BuildMentalMap(f.soldiers[0],8).empty());
    std::cout<<"Foundations beliefs: delayed evidence identity, deduplication, ageing, clearance and stable officer bias verified\n";
}
static void FoundationsFeedbackTests(){
    Config config;config.foundations=true;Frame f=InitialFrame(config);Map map;PlatoonRuntime rt;ReactionRuntime reactions;std::vector<Event> events;
    Diagnostics diagnostics;reactions.diagnostics=&diagnostics;
    for(auto& soldier:f.soldiers){soldier.position={-40,0};if(soldier.team==1)soldier.health=0;}
    auto& officer=f.soldiers[8];officer.platoonOrder.serial=40;officer.platoonOrder.intent={40,0,GoalPurpose::Seize,{20,0},8,60};officer.platoonOrder.expiresAt=60;
    auto& task=officer.taskReports[2];task.goalId=39;task.status=TaskStatus::Blocked;task.at=1;task.cause=TaskCause::Unreachable;
    assert(ReportedGoalStatus(officer,2)==TaskStatus::Executing);
    task.goalId=40;task.status=TaskStatus::Interrupted;assert(ReportedGoalStatus(officer,2)==TaskStatus::Executing);
    task.status=TaskStatus::Blocked;assert(ReportedGoalStatus(officer,2)==TaskStatus::Executing);
    officer.taskReports[3]=task;officer.taskReports[3].soldier=11;assert(ReportedGoalStatus(officer,2)==TaskStatus::Blocked);
    officer.taskReports[3].cause=TaskCause::Casualty;assert(ReportedGoalStatus(officer,2)==TaskStatus::Executing);officer.taskReports[3]=task;
    PlatoonDirective previous;previous.serial=40;previous.intent=officer.platoonOrder.intent;previous.issuedAt=0;previous.expiresAt=60;
    previous.sector={20,0};previous.hasAlternative=true;previous.alternativeTask=PlatoonTask::Observe;previous.alternativePosition={-40,0};
    rt.lastOrders[1]=previous;rt.nextSerial=41;f.platoon[0].nextPlanAt=55;
    SquadSituation report;report.squad=1;report.leader=8;report.goalId=40;report.goalStatus=TaskStatus::Blocked;report.observedAt=1;report.active=6;
    Contact contact{true,false,{20,0},0};contact.originalObserver=10;report.observations={{32,contact}};
    rt.messages.push_back({false,8,5,1+MessageDelay,report,{}});
    f.time=1.5f;UpdatePlatoon(f,map,config,rt,reactions,events);assert(rt.lastOrders[1].serial==40&&f.soldiers[5].reports[32].observedAt<0);
    f.time=1.8f;UpdatePlatoon(f,map,config,rt,reactions,events);assert(rt.lastOrders[1].serial==40);
    f.time=3;ProcessReactions(f,reactions,events);UpdatePlatoon(f,map,config,rt,reactions,events);
    const auto& replacement=rt.lastOrders[1];assert(replacement.serial==41&&replacement.intent.parent==40&&replacement.task==PlatoonTask::Observe&&!replacement.hasAlternative);
    assert(f.soldiers[5].reports[32].originalObserver==10&&f.soldiers[5].reports[32].observedAt==0);
    assert(officer.platoonOrder.serial==40); // Return order has not arrived/been understood yet.
    f.time=4;UpdatePlatoon(f,map,config,rt,reactions,events);f.time=5;ProcessReactions(f,reactions,events);
    assert(officer.platoonOrder.serial==41&&officer.platoonOrder.intent.purpose==GoalPurpose::Observe);
    PlatoonDirective unused;assert(!GoalAlternative(report,replacement,5,unused));
    report.goalId=39;assert(!GoalAlternative(report,previous,5,unused));report.goalId=40;report.observedAt=-1;assert(!GoalAlternative(report,previous,5,unused));
    // The accepted intent changes actual squad orders, not just inspector text.
    SquadCommand cmd;cmd.leader=8;cmd.support=15;ProgressRuntime progress;
    std::vector<Soldier> squad(f.soldiers.begin()+8,f.soldiers.begin()+16);
    UpdateSquadPlan(officer,squad,map,config,{}, {},cmd,progress,nullptr,5);
    auto orders=PlanSquad(officer,squad,map,config,cmd,5);
    assert(!orders.empty());for(const auto& order:orders)assert(order.task==Task::Hold&&Distance(order.sector,{20,0})<.01f);
    bool sent=false,received=false,applied=false;
    for(const auto& e:diagnostics.entries){sent|=e.kind=="goal_feedback_sent";received|=e.kind=="goal_feedback_received"&&e.goalStatus==int(TaskStatus::Blocked);applied|=e.kind=="goal_alternative_applied"&&e.intent.parent==40;}
    assert(sent&&received&&applied);
    officer.platoonOrder.expiresAt=5;assert(ReportedGoalStatus(officer,6)==TaskStatus::Executing);
    CommandRuntime commands;commands.nextSerial=100;f.time=6;
    officer.assignment.intent=officer.platoonOrder.intent;officer.assignment.intent.expiresAt=5;
    UpdateCommands(f,map,config,commands,events);
    int freshOrders=0;for(const auto& assignment:commands.lastSent)if(assignment.issuer==8){++freshOrders;assert(assignment.intent.id==0);}assert(freshOrders>0);
    std::cout<<"Foundations goals: matching subordinate blockage, delayed upward report, retained alternative and delayed changed squad orders verified\n";
}
static void FoundationsJudgmentTests(){
    Config config;config.foundations=true;auto frame=InitialFrame(config);auto commander=frame.soldiers[5];Map map;
    for(int n=0;n<5;++n)commander.contacts[32+n]={true,false,{20,float(n)},1};
    for(int n=0;n<2;++n){auto& report=commander.platoonReports[n];report.squad=n;report.leader=n*8;report.active=6;report.mobile=4;
        report.position={-20,float(n*15)};report.contact=commander.contacts[32];report.enemy=32;report.observedAt=1;}
    commander.platoonReports[0].machineGuns=1;
    commander.estimateBias=-1;auto optimistic=PlanPlatoon(commander,map,config,2);
    commander.estimateBias=1;auto pessimistic=PlanPlatoon(commander,map,config,2);
    assert(optimistic.size()>=2&&pessimistic.size()>=2);
    assert(optimistic[1].directive.task!=PlatoonTask::Observe&&pessimistic[1].directive.task==PlatoonTask::Observe);
    // Real task/navigation feedback passes through the existing message and reaction transport.
    auto& mover=frame.soldiers[10];mover.position={0,0};mover.assignment.id=7;mover.assignment.serial=7;
    mover.assignment.intent={40,0,GoalPurpose::Seize,{20,0},8,60};mover.assignment.task=Task::Flank;mover.assignment.position={20,0};
    frame.soldiers[8].platoonOrder.intent=mover.assignment.intent;frame.soldiers[8].platoonOrder.expiresAt=60;
    frame.soldiers[11].assignment=mover.assignment;frame.soldiers[11].assignment.id=8;frame.soldiers[11].assignment.serial=8;
    map.obstacles={{{20,0},{3,3},false,false,4}};PrepareGeometry(map);
    assert(FindPath(map,mover.position,mover.assignment.position).empty());
    CommandRuntime runtime;std::vector<Event> events;
    ReportTaskNavigation(mover,false,1,nullptr);ReportTaskNavigation(frame.soldiers[11],false,1,nullptr);frame.time=1;UpdateTaskReports(frame,runtime);
    assert(ReportedGoalStatus(frame.soldiers[8],1)==TaskStatus::Executing);
    frame.time=1.5f;UpdateCommands(frame,map,config,runtime,events);assert(ReportedGoalStatus(frame.soldiers[8],1.5f)==TaskStatus::Executing);
    frame.time=1.8f;UpdateCommands(frame,map,config,runtime,events);
    frame.time=3;UpdateCommands(frame,map,config,runtime,events);assert(ReportedGoalStatus(frame.soldiers[8],3)==TaskStatus::Blocked);
    std::cout<<"Foundations judgment: same observations produce different commitments; real navigation failure reaches leader after transport and reaction\n";
}
static void FoundationsTests(){
    FoundationsVisionTests();FoundationsBeliefTests();FoundationsFeedbackTests();FoundationsJudgmentTests();
    Config c;c.foundations=true;c.maxSeconds=40;
    Config legacy;assert(!SameConfig(c,legacy));
    bool rejected=false;try{Simulate(c);}catch(const std::invalid_argument&){rejected=true;}assert(rejected);
    DiagnosticOptions off;off.enabled=false;auto first=Simulate(c,{}, {},8),second=Simulate(c,off,{},8);
    assert(GameplayDigest(first)==GameplayDigest(second));
    bool seen=false,reported=false,belief=false,task=false;
    for(const auto& frame:first.frames)for(const auto& soldier:frame.soldiers)if(soldier.team==0){
        for(const auto& ct:soldier.contacts)seen|=ct.known;
        if(soldier.role==Role::Lieutenant)for(const auto& ct:soldier.reports)reported|=ct.observedAt>=0;
        task|=soldier.assignment.id>0;
    }
    for(const auto& e:first.diagnostics->entries)belief|=e.kind=="mental_map";
    assert(seen&&reported&&belief&&task);
    auto modified=first;modified.frames[0].soldiers[0].look={0,1};assert(GameplayDigest(modified)!=GameplayDigest(first));
    std::cout<<"Foundations integration: encounter 8, real sightings and commander reports, task execution, trace parity digest="<<GameplayDigest(first)<<"\n";
}
