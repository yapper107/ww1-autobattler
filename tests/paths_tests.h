// Plan 020: threat-aware soldier paths and the user's cover rule. A street, a parallel
// covered alley behind one screen, and one enemy overlooking the street. Everything here is
// a mechanism assertion on the decision itself: which path the soldier asks for, and whether
// he leaves cover. Nothing asserts a battle outcome.
#pragma once
#include "TaskSim.h"
// The street runs east-west at y=-2 between x=-36 and x=36. depth 1 leaves a thin screen at
// y=-4, so the covered lane is the alley immediately behind it; depth 26 makes the same
// screen a solid block, so the only covered ground is far to the south.
static army::Map StreetAndAlley(float depth){
    using namespace army;
    Map m;m.halfWidth=60;m.halfHeight=60;
    m.obstacles.push_back({{0,-4-(depth-1)/2,0},{34,depth/2,0},false,false,3.2f});
    PrepareGeometry(m);
    return m;
}
static army::Soldier StreetWalker(army::Vec3 at){
    using namespace army;
    Soldier s;s.id=1;s.position=at;s.assignment.id=7;s.assignment.task=Task::Advance;
    return s;
}
static void KnowEnemy(army::Soldier& s,int id,army::Vec3 position,float observedAt){
    auto& ct=s.contacts[id];ct.known=true;ct.visible=true;ct.position=position;ct.observedAt=observedAt;ct.aimHeight=1.45f;
}
// One obstacle produces its own cover positions; find the pair nearest a point.
static const army::CoverPosition* NearestCover(const army::Map& m,army::Vec3 near,float within){
    using namespace army;
    const CoverPosition* best=nullptr;float bestDistance=within;
    for(const auto& cover:CoverPositions(m))if(Distance(cover.shelter,near)<bestDistance){bestDistance=Distance(cover.shelter,near);best=&cover;}
    return best;
}
static void PathChoiceTests(){
    using namespace army;
    Config on,off;off.threatAwarePaths=false;
    const Vec3 start{-36,-2,0},goal{36,-2,0},overlook{0,30,0};
    auto near=StreetAndAlley(1);
    // 1. Nothing known: the shortest path, and the covered search never runs.
    {
        auto s=StreetWalker(start);PathChoice choice;
        auto path=TaskExecutionPath(near,s,goal,{},on,10,&choice);
        auto shortest=FindPath(near,start,goal);
        assert(!choice.searched&&!choice.covered&&path.size()==shortest.size());
        for(size_t i=0;i<path.size();++i)assert(Distance(path[i],shortest[i])==0);
        std::cout<<"PATHS: with no enemy known the street is taken unchanged ("<<path.size()<<" points)\n";
    }
    // 2. A path the enemy barely sees: measured, and the shortest is kept.
    {
        auto s=StreetWalker({-36,-8,0});KnowEnemy(s,32,overlook,10);PathChoice choice;
        auto path=TaskExecutionPath(near,s,{36,-8,0},{},on,10,&choice);
        assert(choice.searched&&!choice.covered&&choice.shortestRevealed<=Caution().revealedSeconds);
        std::cout<<"PATHS: a walk revealed for "<<choice.shortestRevealed<<"s stays on the shortest path\n";
    }
    // 3. The street is revealed for far too long and the alley is inside the detour limit.
    {
        auto s=StreetWalker(start);KnowEnemy(s,32,overlook,10);PathChoice choice;
        auto path=TaskExecutionPath(near,s,goal,{},on,10,&choice);
        assert(choice.searched&&choice.covered);
        assert(choice.shortestRevealed>Caution().revealedSeconds);
        assert(choice.alternativeLength<=choice.shortestLength*Caution().detour);
        assert(choice.alternativeRevealed<=Caution().revealedSeconds||choice.alternativeRevealed<=choice.shortestRevealed*.5f);
        assert(PathRevealedSeconds(near,s,start,path,10)==choice.alternativeRevealed);
        float south=0;for(Vec3 p:path)south=std::min(south,p.y);
        assert(south<-4); // He went behind the screen rather than down the street.
        std::cout<<"PATHS: street "<<choice.shortestLength<<"m revealed "<<choice.shortestRevealed
                 <<"s -> alley "<<choice.alternativeLength<<"m revealed "<<choice.alternativeRevealed
                 <<"s ("<<choice.why<<"), deepest point y="<<south<<"\n";
    }
    // 4. The same street, with the only covered ground far beyond the detour limit.
    {
        auto far=StreetAndAlley(26);
        auto s=StreetWalker(start);KnowEnemy(s,32,overlook,10);PathChoice choice;
        auto path=TaskExecutionPath(far,s,goal,{},on,10,&choice);
        auto shortest=FindPath(far,start,goal);
        assert(choice.searched&&!choice.covered&&path.size()==shortest.size());
        assert(choice.alternativeLength==0||choice.alternativeLength>choice.shortestLength*Caution().detour);
        std::cout<<"PATHS: the covered way round is "<<choice.alternativeLength<<"m against a "<<choice.shortestLength
                 <<"m street, beyond "<<Caution().detour<<" times: the street is taken ("<<choice.why<<")\n";
    }
    // 5. A contact older than the memory window is not a threat any more.
    {
        auto s=StreetWalker(start);KnowEnemy(s,32,overlook,10);PathChoice choice;
        auto path=TaskExecutionPath(near,s,goal,{},on,10+Caution().memorySeconds+1,&choice);
        auto shortest=FindPath(near,start,goal);
        assert(!choice.searched&&!choice.covered&&path.size()==shortest.size());
        std::cout<<"PATHS: a contact "<<(Caution().memorySeconds+1)<<"s old is ignored and the street is taken\n";
    }
    // 6. A newly known enemy reveals the remaining path: the replan condition and its result.
    {
        auto blind=StreetWalker(start);PathChoice first;
        auto street=TaskExecutionPath(near,blind,goal,{},on,10,&first);
        assert(!first.searched&&PathRevealedSeconds(near,blind,start,street,10)==0);
        auto informed=blind;informed.position={-33,-2,0};KnowEnemy(informed,32,overlook,20);
        std::vector<Vec3> remaining(street.begin(),street.end());
        const float ahead=PathRevealedSeconds(near,informed,informed.position,remaining,20);
        assert(ahead>Caution().revealedSeconds);
        PathChoice again;auto replanned=TaskExecutionPath(near,informed,goal,{},on,20,&again);
        assert(again.searched&&again.covered&&PathRevealedSeconds(near,informed,informed.position,replanned,20)<ahead);
        std::cout<<"PATHS: a newly known enemy reveals "<<ahead<<"s of the remaining street; the replan takes a covered way\n";
    }
    // 7. The off switch is the pre-020 shortest path exactly.
    {
        auto s=StreetWalker(start);KnowEnemy(s,32,overlook,10);PathChoice choice;
        auto path=TaskExecutionPath(near,s,goal,{},off,10,&choice);
        auto shortest=FindPath(near,start,goal);
        assert(!choice.searched&&!choice.covered&&path.size()==shortest.size());
        for(size_t i=0;i<path.size();++i)assert(Distance(path[i],shortest[i])==0);
        std::cout<<"PATHS: --no-threat-aware-paths reproduces the shortest path point for point\n";
    }
    // 8. An emergency shelter move is never searched: it must be instant.
    {
        auto s=StreetWalker(start);KnowEnemy(s,32,overlook,10);PathChoice choice;
        Tactics emergency;emergency.assigned=emergency.emergency=true;emergency.shelter=goal;
        auto path=TaskExecutionPath(near,s,goal,emergency,on,10,&choice);
        auto shortest=FindPath(near,start,goal);
        assert(!choice.searched&&path.size()==shortest.size());
        std::cout<<"PATHS: an emergency departure keeps the direct path\n";
    }
}
// The user's rule, on a map with two low walls: one the rifleman holds, one eight metres
// away that answers an enemy his own does not.
struct CoverRuleFixture {
    army::Map map;
    const army::CoverPosition* held=nullptr;
    army::Soldier soldier;
    army::Tactics memory;
};
static CoverRuleFixture MakeCoverRule(bool typed){
    using namespace army;
    CoverRuleFixture f;
    f.map.halfWidth=60;f.map.halfHeight=60;
    // His own wall screens the northern enemy only; the second wall, eight metres west,
    // screens the eastern one as well.
    f.map.obstacles.push_back({{0,2,0},{3,.6f,0},false,true,1.1f});
    f.map.obstacles.push_back({{-8,2,0},{3,.6f,0},false,true,1.1f});
    f.map.obstacles.push_back({{-4.5f,-1,0},{.6f,4,0},false,true,1.1f});
    PrepareGeometry(f.map);
    f.held=NearestCover(f.map,{0,0,0},4);
    assert(f.held);
    f.soldier.id=1;f.soldier.position=f.held->shelter;
    f.soldier.assignment.id=11;f.soldier.assignment.task=Task::Rally;f.soldier.assignment.position={0,-40,0};
    f.soldier.assignment.serial=3;
    if(typed){f.soldier.cognition=true;f.soldier.assignment.execution.completion=Completion::Transit;}
    KnowEnemy(f.soldier,32,{0,40,0},0);
    f.memory.assigned=true;f.memory.halfCover=f.held->crouch;f.memory.shelter=f.held->shelter;f.memory.peek=f.held->peek;
    f.memory.coverId=f.held->id;f.memory.geometryRevision=f.map.revision;f.memory.expires=1000;f.memory.lastProgress=0;
    return f;
}
static void CoverRuleTests(){
    using namespace army;
    Config on;on.drills=true;on.foundations=true;
    for(int typed=0;typed<2;++typed){
        const char* who=typed?"drills":"legacy";
        auto order=[&](CoverRuleFixture& f,float time){
            return typed?ExecuteTask(f.soldier,f.map,on,{},f.memory,time):ChooseOrder(f.soldier,f.map,on,{},f.memory,time);
        };
        // a. Not under fire, ordered to rally forty metres away: he goes.
        {
            auto f=MakeCoverRule(typed!=0);f.soldier.suppression=0;
            if(typed)PrepareTaskExecution(f.soldier,f.memory,1,on.threatAwarePaths);
            auto d=order(f,1);
            assert(Distance(d.goal,f.held->shelter)>1.5f&&(d.action==Action::Advance||d.action==Action::Cover||d.action==Action::Retreat));
            std::cout<<"COVER RULE "<<who<<": not under fire he leaves a useful position for his rally point\n";
        }
        // b. Under fire in that cover, same order: he stays.
        {
            auto f=MakeCoverRule(typed!=0);f.soldier.suppression=.3f;
            if(typed)PrepareTaskExecution(f.soldier,f.memory,1,on.threatAwarePaths);
            auto d=order(f,1);
            assert(Distance(d.goal,f.held->shelter)<1.5f||Distance(d.goal,f.held->peek)<1.5f);
            assert(f.memory.coverRule==CoverRule::StayedUnderFire);
            std::cout<<"COVER RULE "<<who<<": under fire he holds the cover and ignores the same order\n";
        }
        // c. Under fire, with cover close by that answers an enemy his own does not.
        {
            auto f=MakeCoverRule(typed!=0);f.soldier.suppression=.3f;
            // His wall faces north; this one, remembered from fifteen seconds ago, takes him in
            // enfilade. Remembered rather than visible, so the ordinary exposed-shelter searches
            // (which only look ten seconds back) cannot answer it first.
            KnowEnemy(f.soldier,33,{40,0,0},-14);f.soldier.contacts[33].visible=false;
            if(typed)PrepareTaskExecution(f.soldier,f.memory,1,on.threatAwarePaths);
            auto d=order(f,1);
            const bool moved=Distance(d.goal,f.held->shelter)>1.f;
            assert(moved&&f.memory.coverRule==CoverRule::BetterCover&&Distance(d.goal,f.soldier.position)<=Caution().betterCover);
            assert(ProtectedAt(f.map,d.goal,{0,40,0},Stance::Crouched)&&ProtectedAt(f.map,d.goal,{40,0,0},Stance::Crouched));
            std::cout<<"COVER RULE "<<who<<": under fire he moves "<<Distance(d.goal,f.soldier.position)<<"m to cover that answers both enemies\n";
        }
        // d. Under fire, with a squad-wide retreat: he goes.
        {
            auto f=MakeCoverRule(typed!=0);f.soldier.suppression=.3f;f.soldier.assignment.task=Task::PullBack;
            if(typed)PrepareTaskExecution(f.soldier,f.memory,1,on.threatAwarePaths);
            auto d=order(f,1);
            assert(Distance(d.goal,f.held->shelter)>1.5f);
            std::cout<<"COVER RULE "<<who<<": a squad-wide retreat is obeyed under the same fire\n";
        }
        // The off switch: under fire, the pre-020 order is the movement order again.
        {
            Config plain=on;plain.threatAwarePaths=false;
            auto f=MakeCoverRule(typed!=0);f.soldier.suppression=.3f;
            if(typed)PrepareTaskExecution(f.soldier,f.memory,1,plain.threatAwarePaths);
            auto d=typed?ExecuteTask(f.soldier,f.map,plain,{},f.memory,1):ChooseOrder(f.soldier,f.map,plain,{},f.memory,1);
            assert(f.memory.coverRule==CoverRule::None);
            (void)d;
            std::cout<<"COVER RULE "<<who<<": with the switch off no cover-rule verdict is reached\n";
        }
    }
}
static void PathsTests(){
    std::cout.setf(std::ios::unitbuf);
    PathChoiceTests();CoverRuleTests();
    std::cout<<"PATHS: threat-aware path choice and the cover rule PASS\n";
}
