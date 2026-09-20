#pragma once
#include "RecoverySim.h"
#include "TaskSim.h"
static void RecoveryGateTests(){
    using namespace army;
    Config config;config.recoveryFixture=true;
    auto fixture=std::make_unique<Frame>();Map map;
    MakeMGEncounter(config,5,map,*fixture);
    auto leader=fixture->soldiers[8];
    for(int id=32;id<40;++id){auto& track=leader.contacts[id];track.known=true;track.observedAt=1;track.position=fixture->soldiers[id].position;}
    // Preserve the published corner probe, then test a query over received
    // tracks. No observer target list is passed to the policy.
    assert(!ClearLine3D(map,{38,-22,1.5f},{29,-4,1.45f}));
    assert(ClearLine3D(map,{40,-20,1.5f},{29,-4,1.45f}));
    PositionQuery q;q.center={40,-22};q.target={29.2f,0};q.support={-59.2f,0};q.minAngle=45;q.minSupportDistance=15;q.count=2;q.radius=30;
    std::vector<Soldier> movers{fixture->soldiers[10],fixture->soldiers[11]};
    auto slots=QueryTacticalPositions(leader,movers,map,q,5,nullptr);assert(slots.size()==2);
    for(const auto& slot:slots){int seen=0;for(int id=32;id<40;++id)seen+=ClearLine3D(map,slot.cover.peek+Vec3{0,0,1.5f},leader.contacts[id].position+Vec3{0,0,1.4f});assert(seen>=4);assert(Distance(slot.cover.peek,q.target)>=15);assert(ClearLine(map,slot.cover.shelter,slot.cover.peek,.46f));assert(CoverExists(map,slot.cover.id));}
    assert(Distance(slots[0].cover.peek,slots[1].cover.peek)>=q.spacing);
    for(int layout:{5,6}){
        Map mirrored;MakeMGEncounter(config,layout,mirrored,*fixture);
        auto informed=fixture->soldiers[8];
        for(int id=32;id<40;++id){auto& ct=informed.contacts[id];ct.known=true;ct.observedAt=1;ct.position=fixture->soldiers[id].position;}
        PositionQuery probe=q;probe.center=probe.target;probe.radius=65;
        auto protectedPair=QueryTacticalPositions(informed,movers,mirrored,probe,5,nullptr);
        assert(protectedPair.size()==2);
        for(const auto& slot:protectedPair){
            assert(slot.cover.crouch);int protectedCount=0;
            for(int id=32;id<40;++id)protectedCount+=ProtectedAt(mirrored,slot.cover.shelter,informed.contacts[id].position,Stance::Crouched);
            assert(protectedCount>4);
        }
    }
    MakeMGEncounter(config,5,map,*fixture);
    // The final cover pair is local execution, even when its peek lies outside
    // the route corridor used to reach the shelter.
    auto peeker=movers.front();peeker.position={41.2f,-26};peeker.assignment.id=900;peeker.assignment.task=Task::BoundMove;peeker.assignment.hasSlot=true;peeker.assignment.slot.shelter=peeker.position;peeker.assignment.slot.peek={43.2f,-23};
    auto oldRoute=std::make_shared<TacticalRoute>();oldRoute->start={-55,-25};oldRoute->destination={38,-23};oldRoute->points={{38,-23}};peeker.assignment.teamPlan.route=oldRoute;
    auto peekPath=TaskExecutionPath(map,peeker,peeker.assignment.slot.peek,{},Config{},0.f);
    assert(!peekPath.empty()&&Distance(peekPath.back(),peeker.assignment.slot.peek)<.01f);
    float length=0;Vec3 previous=peeker.position;for(Vec3 point:peekPath){assert(ClearLine(map,previous,point,.46f));length+=Distance(previous,point);previous=point;}assert(length<5);
    // Emergency cover at a valid assigned slot is resumable, not an eternal
    // interruption. Nearby, ducking, and no-solution cases still cannot finish.
    auto arrived=leader;arrived.id=10;arrived.assignment={};
    const CoverPosition* low=nullptr;
    for(const auto& c:CoverPositions(map))if(c.crouch&&ClearLine3D(map,c.peek+Vec3{0,0,1.5f},leader.contacts[32].position+Vec3{0,0,1.4f})){low=&c;break;}
    assert(low);arrived.position=low->peek;arrived.assignment.id=901;arrived.assignment.task=Task::BoundMove;
    arrived.assignment.hasSlot=true;arrived.assignment.slot=*low;arrived.assignment.position=low->shelter;
    arrived.assignment.geometry=map.revision;arrived.assignment.status=TaskStatus::Interrupted;
    arrived.stance=Stance::Standing;arrived.contacts[32].aimHeight=1.4f;
    arrived.contacts[32].visible=true;arrived.contacts[32].observedAt=1;
    Tactics emergency;emergency.assigned=emergency.emergency=true;emergency.shelter=low->shelter;
    PrepareTaskExecution(arrived,emergency,1);assert(!emergency.emergency&&emergency.coverId==low->id);
    arrived.action=Action::Hold;arrived.reason=Reason::Duck;
    EvaluateTaskExecution(arrived,map,emergency,1,nullptr);assert(arrived.assignment.status==TaskStatus::Interrupted);
    arrived.reason=Reason::AtWaypoint;arrived.action=Action::Fire;
    auto noSolution=arrived;noSolution.contacts={};
    EvaluateTaskExecution(noSolution,map,emergency,1.1f,nullptr);assert(noSolution.assignment.status!=TaskStatus::Done);
    assert(SelectFireSolution(arrived,map,1.2f).enemy>=0);
    EvaluateTaskExecution(arrived,map,emergency,1.2f,nullptr);assert(arrived.assignment.status==TaskStatus::Done&&arrived.assignment.id==901);
    // Shot timestamps and positions survive changes of target within an area.
    // Repeated relay of a report cannot create additional rounds.
    FireDelivery delivery;delivery.shooter=7;delivery.enemy=39;delivery.target={29.2f,7};delivery.observedAt=20;
    delivery.history={{9,{29.2f,0}},{11,{29.2f,0}},{15,{29.2f,7}},{20,{29.2f,-5}},{21,{29.2f,0}},{19,{60,50}}};
    RememberDelivery(leader,delivery);RememberDelivery(leader,delivery);
    assert(TrailingCoveringRounds(leader,{29.2f,0},20)==3);
    assert(RequiredCoveringRounds(2)<RequiredCoveringRounds(10));
    assert(TrailingCoveringRounds(leader,{29.2f,0},31)==0);
    // A newly reported threat changes the release query, without modifying map
    // geometry or the existing route's recorded exposure.
    Map open;PrepareGeometry(open);TacticalRoute route;route.start={0,0};route.points={{8,0}};route.stages={{0,1,{8,0},3,0}};
    auto unaware=fixture->soldiers[8];
    assert(CurrentStageExposure(unaware,open,route,0,10)==0);
    unaware.contacts[32].known=true;unaware.contacts[32].observedAt=10;unaware.contacts[32].position={20,0};
    assert(CurrentStageExposure(unaware,open,route,0,10)>1);
    assert(route.stages[0].exposedSeconds==0);
    CoverPosition laneA,laneB;laneA.shelter=laneA.peek={0,0};laneB.shelter=laneB.peek={3,0};
    assert(!TacticalPairLaneClear(open,laneA,laneB,{{20,0}}));
    laneB.shelter=laneB.peek={3,3};assert(TacticalPairLaneClear(open,laneA,laneB,{{20,0}}));
    // Planned slots never become observed friendly positions.
    auto observer=fixture->soldiers[10];observer.position={0,0};observer.stance=Stance::Standing;
    observer.allies={};assert(FriendlyFireRisk(observer,open,{20,0,1.5f},10)==0);
    observer.allies[11].known=true;observer.allies[11].position={3,0};observer.allies[11].aimHeight=1.85f;observer.allies[11].observedAt=10;
    assert(ShouldHoldFire(observer,FriendlyFireRisk(observer,open,{20,0,1.5f},10)));
    // Support priorities are delayed reports. Rotation keeps a six-round
    // commitment, expiry restores ordinary selection, and a fire lift applies
    // only to the reported sector. No contacts become personal sightings.
    auto gun=fixture->soldiers[7];gun.position={0,0};gun.stance=Stance::Standing;
    gun.assignment.id=902;gun.assignment.task=Task::Overwatch;gun.contacts={};gun.reports={};gun.allies={};gun.rounds=0;
    for(int id:{32,33,39}){auto& ct=gun.reports[id];ct.known=true;ct.position={id==39?15.f:20.f,float(id-32),0};ct.observedAt=10;ct.aimHeight=1.4f;}
    gun.supportSector.observedAt=10;gun.supportSector.route=22;
    gun.supportSector.threats={{32,gun.reports[32]},{33,gun.reports[33]}};
    assert(SelectFireSolution(gun,open,10).enemy==32);gun.rounds=6;assert(SelectFireSolution(gun,open,10).enemy==33);
    gun.supportSector.lifted=true;assert(SelectFireSolution(gun,open,10).enemy==39);
    gun.supportSector.lifted=false;for(int id:{32,33,39})gun.reports[id].observedAt=20;
    assert(SelectFireSolution(gun,open,20).enemy==39);
    fixture->soldiers[7]=gun;fixture->soldiers[7].supportSector={};fixture->soldiers[7].reports={};
    ReactionRuntime reaction;reaction.recoveryFixture=true;PendingReaction sectorReport;sectorReport.kind=ReactionKind::SupportSector;
    sectorReport.source=8;sectorReport.supportSector=gun.supportSector;sectorReport.supportSector.observedAt=20;
    QueueReaction(fixture->soldiers[7],sectorReport,20,reaction);fixture->time=20;std::vector<Event> messages;
    ProcessReactions(*fixture,reaction,messages);assert(fixture->soldiers[7].supportSector.route==0);
    fixture->time=22;ProcessReactions(*fixture,reaction,messages);assert(fixture->soldiers[7].supportSector.route==22);
    assert(!fixture->soldiers[7].reports[32].visible&&!fixture->soldiers[7].contacts[32].known);
    sectorReport.supportSector.route=99;sectorReport.supportSector.observedAt=19;
    QueueReaction(fixture->soldiers[7],sectorReport,22,reaction);fixture->time=24;ProcessReactions(*fixture,reaction,messages);
    assert(fixture->soldiers[7].supportSector.route==22);
    // Final occupation uses reported local readiness, releases one member, then
    // releases the partner only after arrival at the selected firing slot.
    SquadCommand cmd;cmd.leader=8;cmd.support=7;
    auto& drill=cmd.drill;drill.initialized=drill.selected=true;drill.node=DrillNode::Traverse;drill.geometry=open.revision;
    auto approach=std::make_shared<TacticalRoute>();approach->id=22;approach->start={-2,0};approach->points={{0,0},{2,0}};approach->destination={2,0};approach->stages={{0,1,{0,0},1,0},{1,2,{2,0},1.7f,.3f}};
    cmd.route=approach;cmd.routeStage=1;cmd.waypoint={2,0};
    auto local=fixture->soldiers[8];
    for(size_t i=0;i<movers.size();++i){auto& mover=movers[i];int index=mover.id%SquadSize;mover.position={0,float(i)*2};drill.movers[index]=true;drill.slots[index]={2,float(i)*2};drill.assaultSlots[index].shelter=drill.assaultSlots[index].peek=drill.slots[index];drill.issuedSlots[index]=mover.position;drill.expected[index]=100+index;auto& report=local.taskReports[index];report.id=100+index;report.route=22;report.position=report.goal=mover.position;report.status=TaskStatus::Done;}
    auto orders=UpdateRecoveryDrill(local,movers,open,config,cmd,10,nullptr);
    assert(drill.closeOccupation&&drill.released&&orders.size()==2);
    assert(orders[0].task==Task::BoundMove&&orders[1].task==Task::BoundCover);
    local.taskReports[2].goal=drill.slots[2];local.taskReports[2].position=drill.slots[2];
    orders=UpdateRecoveryDrill(local,movers,open,config,cmd,11,nullptr);
    assert(drill.node==DrillNode::Traverse&&orders[1].task==Task::BoundMove);
    // A replacement slot set retains the completed approach and route identity.
    cmd.routeStage=1;cmd.route=approach;drill.geometry=map.revision;
    movers[0].position={38,-23};movers[1].position={41.2f,-26};drill.supportPosition={-59.2f,0};
    assert(ReslotAssault(leader,movers,map,config,cmd,32,{29.2f,0},5,nullptr));
    assert(cmd.route->id==22&&cmd.routeStage==1&&cmd.route->stages[0].destination.x==0);
    assert(Distance(cmd.route->points[cmd.route->stages[1].begin-1],movers[0].position)<.01f);
    // Four seconds into a distant approach, a target report may update final
    // slots without discarding the route identity or the current first stage.
    auto early=cmd;auto earlyRoute=std::make_shared<TacticalRoute>(*cmd.route);
    earlyRoute->evaluatedAt=1;early.route=earlyRoute;early.routeStage=0;early.waypoint=earlyRoute->stages[0].destination;
    early.drill.target=32;early.drill.targetPosition={29.2f,-10};early.drill.knowledge=leader.knowledgeRevision;
    auto updated=leader;++updated.knowledgeRevision;updated.contacts[32].position={29.2f,0};updated.contacts[32].observedAt=5;
    auto distant=movers;distant[0].position={0,-24};distant[1].position={0,-26};
    const auto identity=early.route->id;const auto waypoint=early.waypoint;
    UpdateRecoveryDrill(updated,distant,map,config,early,5,nullptr);
    assert(early.drill.selected&&early.route->id==identity&&early.routeStage==0);
    assert(Distance(early.waypoint,waypoint)<.01f);
    // Report arrival against the assigned firing objective; navigation still
    // ends at the shelter centroid. Check both initial assignment and re-slotting.
    auto checkDestination=[](const SquadCommand& command){
        Vec3 firing{},shelter{};int count=0;
        for(int i=0;i<SquadSize;++i)if(command.drill.movers[i]){
            firing=firing+command.drill.assaultSlots[i].peek;
            shelter=shelter+command.drill.assaultSlots[i].shelter;++count;
        }
        assert(count>=2&&command.route);
        firing=firing*(1.f/count);shelter=shelter*(1.f/count);
        assert(Distance(command.route->destination,firing)<.01f);
        assert(Distance(command.route->stages.back().destination,shelter)<.01f);
        assert(Distance(command.route->points.back(),shelter)<.01f);
    };
    checkDestination(cmd);
    // The authored deployment is fixture-only; native gameplay still uses the
    // previous spawn layout when recovery is disabled.
    Config legacy=config;legacy.recoveryFixture=false;Map oldMap;auto old=std::make_unique<Frame>();MakeMGEncounter(legacy,5,oldMap,*old);
    assert(old->soldiers[32].position.x==30&&fixture->soldiers[32].position.x==29.2f);
    config.seed=107;config.maxSeconds=90;DiagnosticOptions off;off.enabled=false;auto battle=Simulate(config,off,{},5);
    for(const auto& frame:battle.frames)for(const auto& s:frame.soldiers){
        if(s.Active()&&s.team==1)assert(Distance(s.position,battle.frames.front().soldiers[s.id].position)<.01f);
        if(s.squad==0)assert(!s.assignment.teamPlan.route);
    }
    bool assigned=false,supportReceived=false;
    for(const auto& frame:battle.frames){const auto& command=frame.command[1];
        if(command.drill.selected&&command.route){checkDestination(command);assigned=true;}
        for(const auto& soldier:frame.soldiers)supportReceived|=soldier.supportSector.route!=0;
    }
    assert(assigned&&supportReceived);
    std::cout<<"Recovery gate checks: fixed roles/defenders, sliding delivery, corner slots, local occupation, re-slot continuity and current screening passed\n";
}
