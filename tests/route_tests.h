#include "TacticalRouteSim.h"
#include <cstring>
static void RouteThreatOrderTests(){
    Map prepared;prepared.halfWidth=prepared.halfHeight=70;
    prepared.obstacles={{{0,6},{16,.7f},false,false,3},{{-12,-8},{.7f,10},false,true,1.1f}};
    PrepareGeometry(prepared);
    Soldier forward;forward.id=0;forward.position={-24,-20};
    for(int i=0;i<8;++i){
        auto& contact=forward.contacts[32+i];contact.known=true;
        contact.position={-40.f+20.f*(i%4),24.f+12.f*(i/4)};
        contact.observedAt=10.f+2.f*(i%3);contact.automaticWeapon=i%3==0;
    }
    // This fully visible report reaches the largest bound at the rear samples;
    // the cleared report is discarded and the far report is distance-skipped.
    forward.contacts[32].position={-40,-40};forward.contacts[32].observedAt=20;
    forward.contacts[40]=forward.contacts[33];forward.contacts[40].clearedAt=20;
    forward.contacts[41]=forward.contacts[34];forward.contacts[41].position={300,0};
    Soldier reversed=forward;
    for(int i=0;i<8;++i)reversed.contacts[32+i]=forward.contacts[39-i];
    // Distinct report groups may be visited in either order: the exposure maximum
    // must be identical, including tied bounds and partly occluded eye positions.
    for(auto stance:{Stance::Standing,Stance::Crouched}){
        Map unprepared=prepared;unprepared.prepared=false;
        TacticalRoutePlanner a(prepared,forward,20,Doctrine::Balanced,stance);
        TacticalRoutePlanner b(prepared,reversed,20,Doctrine::Balanced,stance);
        TacticalRoutePlanner fallback(unprepared,forward,20,Doctrine::Balanced,stance);
        for(int y=-30;y<=30;y+=10)for(int x=-30;x<=30;x+=10){
            const Vec3 p{float(x)+.25f,float(y)-.25f};
            auto expected=a.Sample(p),reordered=b.Sample(p),uncached=fallback.Sample(p);
            static_assert(sizeof(RouteCost)==6*sizeof(float));
            assert(std::memcmp(&expected,&reordered,sizeof expected)==0);
            assert(std::memcmp(&expected,&uncached,sizeof expected)==0);
        }
    }
    std::cout<<"Route threat order: exact costs across report permutations, ties, stances and prepared/unprepared geometry\n";
}
// A route leg is valid when it can be walked, or (plan 029 M-C, only for a class path) when it is one vault
// of that class. With class None (every route and every path while Config::vaulting is off) it is ClearLine.
static bool RouteLegValid(const Map& m,Vec3 a,Vec3 b,VaultClass cls=VaultClass::None){
    return ClearLine(m,a,b,.48f)||(cls!=VaultClass::None&&VaultCrossing(m,a,b,cls)!=VaultClass::None);
}
static void RouteVaultLegTests(){
    Map m;m.halfWidth=40;m.halfHeight=35;m.obstacles.push_back({{0,0},{.3f,20},false,false,1.15f});PrepareGeometry(m);
    const Vec3 from{-4,.5f},to{4,-.5f};Config on;on.vaulting=true;
    // Off: the route is walked round and every leg is walkable. On: a man's own path takes the vault leg,
    // which is valid for his class and for nobody walking (class None).
    auto round=FindPath(m,from,to);Vec3 p=from;for(auto q:round){assert(RouteLegValid(m,p,q));p=q;}
    Soldier s;s.position=from;s.stamina=8;const auto cls=VaultClassOf(s,on);assert(cls==VaultClass::Low&&VaultClassOf(s,Config{})==VaultClass::None);
    auto over=FindPath(m,from,to,cls);int vaults=0;p=from;
    for(auto q:over){assert(RouteLegValid(m,p,q,cls));vaults+=!RouteLegValid(m,p,q);p=q;}
    assert(vaults==1);
    std::cout<<"Route legs: class None legs are walkable; a vault leg is valid only for its class ("<<vaults<<" in the class path)\n";
}
static void RouteTests(){
    RouteThreatOrderTests();RouteVaultLegTests();
    Map m;m.halfWidth=40;m.halfHeight=35;
    m.obstacles.push_back({{0,-3},{18,.7f},false,false,3});PrepareGeometry(m);
    Soldier leader;leader.position={-24,0};leader.contacts[32]={true,true,{0,20},0};leader.contacts[32].automaticWeapon=true;
    Vec3 goal{24,0};TacticalRoutePlanner planner(m,leader,0);
    auto physical=FindPath(m,leader.position,goal);float oldExposure=0;planner.Measure(leader.position,physical,&oldExposure);
    auto route=planner.Evaluate(leader.position,goal,12000);
    std::cout<<"Route fixture: status="<<RouteStatusName(route.status)<<" expansions="<<route.expanded<<" exposed="<<oldExposure<<" -> "<<route.exposedSeconds<<" seconds\n";
    assert(route.status==RouteStatus::Complete&&route.exposedSeconds<oldExposure*.8f);
    auto executed=FollowCorridor(m,route,leader.position,goal);assert(!executed.empty());float actual=0;planner.Measure(leader.position,executed,&actual);assert(actual<oldExposure*.85f);
    Vec3 previous=leader.position;for(auto p:executed){assert(RouteLegValid(m,previous,p));previous=p;}assert(Distance(previous,goal)<.01f);
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
    for(auto p:ramp){assert(RouteLegValid(trench,prior,p));prior=p;}
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
