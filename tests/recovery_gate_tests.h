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
    // The final cover pair is local execution, even when its peek lies outside
    // the route corridor used to reach the shelter.
    auto peeker=movers.front();peeker.position={41.2f,-26};peeker.assignment.id=900;peeker.assignment.task=Task::BoundMove;peeker.assignment.hasSlot=true;peeker.assignment.slot.shelter=peeker.position;peeker.assignment.slot.peek={43.2f,-23};
    auto oldRoute=std::make_shared<TacticalRoute>();oldRoute->start={-55,-25};oldRoute->destination={38,-23};oldRoute->points={{38,-23}};peeker.assignment.teamPlan.route=oldRoute;
    auto peekPath=TaskExecutionPath(map,peeker,peeker.assignment.slot.peek,{});
    assert(!peekPath.empty()&&Distance(peekPath.back(),peeker.assignment.slot.peek)<.01f);
    float length=0;Vec3 previous=peeker.position;for(Vec3 point:peekPath){assert(ClearLine(map,previous,point,.46f));length+=Distance(previous,point);previous=point;}assert(length<5);
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
    config.seed=107;config.maxSeconds=60;DiagnosticOptions off;off.enabled=false;auto battle=Simulate(config,off,{},5);
    for(const auto& frame:battle.frames)for(const auto& s:frame.soldiers){
        if(s.Active()&&s.team==1)assert(Distance(s.position,battle.frames.front().soldiers[s.id].position)<.01f);
        if(s.squad==0)assert(!s.assignment.teamPlan.route);
    }
    bool assigned=false;
    for(const auto& frame:battle.frames){const auto& command=frame.command[1];
        if(command.drill.selected&&command.route){checkDestination(command);assigned=true;}
    }
    assert(assigned);
    std::cout<<"Recovery gate checks: fixed roles/defenders, sliding delivery, corner slots, local occupation, re-slot continuity and current screening passed\n";
}
