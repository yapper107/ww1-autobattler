#include "TacticalRouteSim.h"
static void RouteTests(){
    Map m;m.halfWidth=40;m.halfHeight=35;
    m.obstacles.push_back({{0,-3},{18,.7f},false,false,3});PrepareGeometry(m);
    Soldier leader;leader.position={-24,0};leader.contacts[32]={true,true,{0,20},0};leader.contacts[32].automaticWeapon=true;
    Vec3 goal{24,0};TacticalRoutePlanner planner(m,leader,0);
    auto physical=FindPath(m,leader.position,goal);float oldExposure=0;planner.Measure(leader.position,physical,&oldExposure);
    auto route=planner.Evaluate(leader.position,goal,12000);
    std::cout<<"Route fixture: status="<<RouteStatusName(route.status)<<" expansions="<<route.expanded<<" exposed="<<oldExposure<<" -> "<<route.exposedSeconds<<" seconds\n";
    assert(route.status==RouteStatus::Complete&&route.exposedSeconds<oldExposure*.8f);
    auto executed=FollowCorridor(m,route,leader.position,goal);assert(!executed.empty());float actual=0;planner.Measure(leader.position,executed,&actual);assert(actual<oldExposure*.85f);
    Vec3 previous=leader.position;for(auto p:executed){assert(ClearLine(m,previous,p,.48f));previous=p;}assert(Distance(previous,goal)<.01f);
    auto truncated=planner.Evaluate(leader.position,goal,1);assert(truncated.status==RouteStatus::BudgetExhausted);
    Soldier unaware;unaware.position=leader.position;TacticalRoutePlanner quiet(m,unaware,0);auto direct=quiet.Evaluate(unaware.position,goal,12000);assert(direct.status==RouteStatus::Complete&&direct.cost.travel<route.cost.travel);
    // Hidden enemy bodies are not inputs. Identical received knowledge selects identical geometry.
    TacticalRoutePlanner same(m,leader,0);auto repeated=same.Evaluate(leader.position,goal,12000);assert(repeated.points.size()==route.points.size());for(size_t i=0;i<route.points.size();++i)assert(Distance(route.points[i],repeated.points[i])==0);
    Map arrival;arrival.obstacles={{{0,0},{.6f,3},false,true}};PrepareGeometry(arrival);
    Soldier arriving;arriving.id=1;arriving.position={-1.2f,0};arriving.assignment.task=Task::BoundMove;arriving.assignment.position=arriving.position;arriving.assignment.sector={20,0};
    arriving.contacts[32]={true,true,{20,0},0};Tactics memory;auto settled=ChooseOrder(arriving,arrival,Config{}, {},memory,0);
    assert(memory.assigned&&memory.halfCover);arriving.position=settled.goal;
    auto peek=ChooseOrder(arriving,arrival,Config{}, {},memory,1);assert(peek.action==Action::Fire&&peek.stance==Stance::Standing);
    std::cout<<"Route arrival: claims assigned cover and takes its firing peek\n";
    auto trench=MakeTrenchMap();Config trenchConfig;trenchConfig.terrain=Terrain::Trenches;auto deployed=InitialFrame(trenchConfig);
    for(const auto& soldier:deployed.soldiers){if(!Walkable(trench,soldier.position))std::cerr<<"Invalid trench spawn "<<soldier.id<<" "<<soldier.position.x<<","<<soldier.position.y<<","<<soldier.position.z<<"\n";assert(Walkable(trench,soldier.position));}
    auto underground=FindPath(trench,{-80,0,-1.4f},{80,0,-1.4f});assert(!underground.empty());
    auto ramp=FindPath(trench,{-20,0,-1.4f},{-5,0,0});assert(!ramp.empty());Vec3 prior{-20,0,-1.4f};
    for(auto p:ramp){assert(ClearLine(trench,prior,p,.48f));prior=p;}
    assert(!Walkable(trench,{0,10,-1.4f}));assert(!Walkable(trench,{-80,0,0}));
    assert(!ClearLine3D(trench,{-80,0,-.5f},{-80,10,-.5f}));
    std::cout<<"Trenches: recessed floor, raised earth, ramps, connected detour and deployment verified\n";
    auto hiddenMap=MakeSkirmishMap();Config early;early.maxSeconds=8;
    GeometryEdit hidden;hidden.time=.1f;for(const auto& obstacle:hiddenMap.obstacles)if(std::abs(obstacle.center.x)<20&&std::abs(obstacle.center.y)<20){hidden.obstacle=obstacle.id;break;}
    assert(hidden.obstacle!=0);
    auto ordinary=Simulate(early),mutated=Simulate(early,{}, {hidden});
    assert(ordinary.frames.size()==mutated.frames.size());
    for(size_t i=0;i<ordinary.frames.size();++i)for(int id=0;id<UnitCount;++id){const auto& a=ordinary.frames[i].soldiers[id];const auto& b=mutated.frames[i].soldiers[id];
        assert(Distance(a.position,b.position)<.0001f);assert(a.assignment.serial==b.assignment.serial);assert(Distance(a.assignment.position,b.assignment.position)<.0001f);
    }
    for(const auto& e:mutated.diagnostics->entries)assert(e.kind!="geometry_observed");
    std::cout<<"Geometry knowledge: hidden mutation preserves received orders and movement before observation\n";
    auto id=m.obstacles.front().id;assert(RemoveObstacle(m,id));assert(m.revision!=route.geometry);
    TacticalRoutePlanner removed(m,leader,0);auto changed=removed.Evaluate(leader.position,goal,12000);assert(changed.status==RouteStatus::Complete&&changed.exposedSeconds>route.exposedSeconds);
}
