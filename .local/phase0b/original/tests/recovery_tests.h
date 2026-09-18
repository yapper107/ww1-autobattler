#pragma once
#include "TaskSim.h"
#include "RecoverySim.h"
static void RecoveryTests(){
    using namespace army;
    Config c;c.recoveryFixture=true;Map map;map.obstacles={{{0,0},{.6f,5},false,true}};PrepareGeometry(map);
    auto frame=InitialFrame(c);auto& s=frame.soldiers[2];s.position={-10,0};s.assignment.id=7;s.assignment.serial=7;s.assignment.task=Task::BoundMove;s.assignment.position={-1.2f,0};
    assert(EquivalentTask(s.assignment,Task::BoundMove,{-1.1f,0},{0,0}));
    assert(!EquivalentTask(s.assignment,Task::Hold,{-1.1f,0},{0,0}));
    assert(!EquivalentTask(s.assignment,Task::BoundMove,{-1.1f,0},{0,0},5));
    Diagnostics diagnostics;Tactics memory;memory.emergency=true;
    EvaluateTaskExecution(s,map,memory,2,&diagnostics);assert(s.assignment.status==TaskStatus::Interrupted&&s.assignment.cause==TaskCause::Shelter);
    memory={};EvaluateTaskExecution(s,map,memory,3,&diagnostics);assert(s.assignment.status==TaskStatus::Executing&&s.assignment.id==7&&s.assignment.serial==7);
    auto blocked=s;blocked.taskOutbox.clear();ReportTaskNavigation(blocked,false,3.1f,&diagnostics);assert(blocked.assignment.status==TaskStatus::Blocked);
    EvaluateTaskExecution(blocked,map,{},3.2f,&diagnostics);assert(blocked.assignment.status==TaskStatus::Blocked);
    ReportTaskNavigation(blocked,true,3.3f,&diagnostics);assert(blocked.assignment.status==TaskStatus::Executing&&blocked.assignment.id==7);
    auto travel=s;travel.contacts[32].known=true;travel.contacts[32].visible=true;travel.contacts[32].position={10,0};travel.contacts[32].observedAt=3;
    auto order=ExecuteTask(travel,map,c,{},memory,3);assert(Distance(order.goal,travel.assignment.position)<.01f);
    Map screen=map;auto wall=screen.obstacles[0];wall.halfCover=false;wall.height=3.5f;ReplaceObstacle(screen,wall.id,wall);
    travel.suppression=.8f;order=ExecuteTask(travel,screen,c,{},memory,3);assert(order.action==Action::Hold&&order.stance==Stance::Crouched&&Distance(order.goal,travel.position)<.01f);
    s.position=s.assignment.position;EvaluateTaskExecution(s,map,memory,4,&diagnostics);assert(s.assignment.status==TaskStatus::Done);
    EvaluateTaskExecution(s,map,memory,5,&diagnostics);assert(s.assignment.statusSequence==3);
    CommandRuntime runtime;runtime.reactions.diagnostics=&diagnostics;frame.time=4;UpdateTaskReports(frame,runtime);
    assert(runtime.messages.size()==6);assert(frame.soldiers[0].taskReports[2].id==0);assert(frame.soldiers[1].taskReports[2].id==0);
    // Receipt, reaction, and monotonic ordering are independent of observed positions.
    auto report=runtime.messages.back().taskReceipt;PendingReaction p;p.kind=ReactionKind::TaskReport;p.source=2;p.taskReceipt=report;
    QueueReaction(frame.soldiers[0],p,5,runtime.reactions);frame.time=5;std::vector<Event> events;ProcessReactions(frame,runtime.reactions,events);assert(frame.soldiers[0].taskReports[2].id==0);
    frame.time=7;ProcessReactions(frame,runtime.reactions,events);assert(frame.soldiers[0].taskReports[2].status==TaskStatus::Done);
    p.taskReceipt.sequence=1;p.taskReceipt.status=TaskStatus::Interrupted;QueueReaction(frame.soldiers[0],p,8,runtime.reactions);frame.time=10;ProcessReactions(frame,runtime.reactions,events);assert(frame.soldiers[0].taskReports[2].status==TaskStatus::Done);
    Map fixture;Frame encounter;MakeMGEncounter(c,5,fixture,encounter);
    auto commander=encounter.soldiers[0];PositionQuery query;query.center=query.target={30,0};query.support={-59,0};query.minAngle=45;query.minSupportDistance=15;query.radius=65;query.count=2;
    std::vector<Soldier> movers{encounter.soldiers[2],encounter.soldiers[3]};
    auto slots=QueryTacticalPositions(commander,movers,fixture,query,0,nullptr);assert(slots.size()==2);
    for(const auto& slot:slots){assert(slot.angle>=45);assert(CoverExists(fixture,slot.cover.id));assert(ProtectedAt(fixture,slot.cover.shelter,query.target,slot.cover.crouch?Stance::Crouched:Stance::Standing));}
    auto removed=slots[0].cover;RemoveObstacle(fixture,removed.source);assert(!CoverExists(fixture,removed.id));
    auto witness=movers[0];witness.position=removed.shelter;witness.assignment={};witness.assignment.id=44;witness.assignment.hasSlot=true;witness.assignment.slot=removed;witness.assignment.position=removed.shelter;
    EvaluateTaskExecution(witness,fixture,{},1,nullptr);assert(witness.assignment.status==TaskStatus::Failed&&witness.assignment.cause==TaskCause::Geometry);
    s.health=0;frame.time=11;UpdateTaskReports(frame,runtime);bool loss=false;for(const auto& message:runtime.messages)loss|=message.kind==CommandMessage::Kind::TaskStatus&&!message.taskReceipt.active&&message.taskReceipt.soldier==s.id;assert(loss);
    // A temporary interruption cannot cancel a released task or advance its stage.
    SquadCommand cmd;cmd.leader=0;cmd.support=7;cmd.drill.initialized=cmd.drill.selected=cmd.drill.released=true;cmd.drill.node=DrillNode::Traverse;cmd.drill.geometry=map.revision;
    auto route=std::make_shared<TacticalRoute>();route->id=1;route->geometry=map.revision;route->start={-10,0};route->destination={-2,0};route->points={{-5,0},{-2,0}};route->stages={RouteStage{0,1,{-5,0},2,0},RouteStage{1,2,{-2,0},1,0}};cmd.route=route;
    auto lead=encounter.soldiers[8];std::vector<Soldier> group{encounter.soldiers[10],encounter.soldiers[11]};
    for(auto& unit:group){int slot=unit.id%SquadSize;unit.assignment.id=uint64_t(10+slot);unit.assignment.teamPlan.route=route;cmd.drill.movers[slot]=true;cmd.drill.expected[slot]=unit.assignment.id;lead.taskReports[slot].id=unit.assignment.id;lead.taskReports[slot].route=route->id;lead.taskReports[slot].status=TaskStatus::Done;}
    lead.taskReports[3].status=TaskStatus::Interrupted;
    UpdateRecoveryDrill(lead,group,map,c,cmd,20,nullptr);assert(cmd.routeStage==0&&cmd.drill.released);
    lead.taskReports[3].status=TaskStatus::Done;UpdateRecoveryDrill(lead,group,map,c,cmd,21,nullptr);assert(cmd.routeStage==1&&!cmd.drill.released);
    UpdateRecoveryDrill(lead,group,map,c,cmd,22,nullptr);assert(cmd.drill.node==DrillNode::Traverse); // Old Done receipts cannot finish a newly released stage.
    cmd.drill.expected[2]=20;cmd.drill.expected[3]=21;UpdateRecoveryDrill(lead,group,map,c,cmd,23,nullptr);assert(cmd.drill.node==DrillNode::Traverse);
    // Casualty before delivery of a newer task still releases the old member's
    // slot. A remaining member's Done cannot complete a two-member stage alone.
    auto reserve=encounter.soldiers[12];group.push_back(reserve);
    lead.taskReports[2].active=false;lead.taskReports[2].cause=TaskCause::Casualty;
    assert(lead.taskReports[2].id!=cmd.drill.expected[2]);
    UpdateRecoveryDrill(lead,group,map,c,cmd,24,nullptr);
    assert(!cmd.drill.movers[2]&&cmd.drill.movers[4]);
    assert(cmd.drill.node==DrillNode::Traverse);
    // Geometry is unchanged. Only receipt of new target knowledge invalidates
    // a selected slot's purpose; elapsed time alone preserves the plan.
    auto unchanged=cmd;unchanged.drill.target=32;unchanged.drill.targetPosition={30,0};
    lead.knowledgeRevision=unchanged.drill.knowledge;
    lead.contacts[32].known=true;lead.contacts[32].observedAt=25;lead.contacts[32].position={-10,10};
    UpdateRecoveryDrill(lead,group,map,c,unchanged,25,nullptr);
    assert(unchanged.drill.selected);
    ++lead.knowledgeRevision;
    UpdateRecoveryDrill(lead,group,map,c,unchanged,26,nullptr);
    assert(!unchanged.drill.selected&&unchanged.drill.node==DrillNode::EstablishFire);
    c.maxSeconds=30;DiagnosticOptions off;off.enabled=false;
    auto traced=Simulate(c,{}, {},5),untraced=Simulate(c,off,{},5);assert(GameplayDigest(traced)==GameplayDigest(untraced));
    bool delivered=false;for(const auto& sample:traced.frames)for(const auto& unit:sample.soldiers)for(const auto& delivery:unit.deliveries)delivered|=delivery.shooter>=0&&delivery.shooter<8&&delivery.rounds>0;assert(delivered);
    // Recovery policy cannot silently change full battles.
    bool rejected=false;try{Simulate(c,{}, {},0);}catch(const std::invalid_argument&){rejected=true;}assert(rejected);
    std::cout<<"Recovery task identity, interruption, completion, delayed status and stale-report tests passed\n";
}
