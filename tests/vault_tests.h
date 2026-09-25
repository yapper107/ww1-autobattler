// Plan 029 M-C: vaulting, behind Config::vaulting.
// Five parts: the geometry rule (VaultCrossing's truth table), the class searches (a garden wall with a
// long way round), monotonicity on a generated town, the vault class a man has from his own state, and
// fixture battles: a squad walking to a goal behind a garden wall (1.15 m, everybody goes over) and behind
// a 1.9 m wall (only the strong and nimble go over), with the switch off equal to the parent build.
#pragma once
#include "ImportedMap.h"
#include "TacticalRouteSim.h"
#include "TaskSim.h"
#include "ReactionSim.h"
#include <memory>
#include <random>
namespace vault_tests {
using namespace army;
// Lean digests of the fixture battles on the parent build (see FixtureTests).
constexpr uint64_t VAULT_PARENT_LOW=2926382255015066008ull,VAULT_PARENT_HIGH=13186929409584424844ull,
                   VAULT_PARENT_DRILLS=10758994825909840724ull,VAULT_PARENT_DRILLS_HIGH=6230704123110061092ull;
// A solid (not a building, not a hedge) standing on the ground: a garden wall or a yard wall.
static Obstacle Wall(Vec3 center,Vec3 half,float height){Obstacle o;o.center=center;o.half=half;o.height=height;o.blocksMovement=true;return o;}
static Map Field(){Map m;m.halfWidth=60;m.halfHeight=40;return m;}
static float Length(Vec3 from,const std::vector<Vec3>& path){float l=0;Vec3 p=from;for(Vec3 q:path){l+=Distance(p,q);p=q;}return l;}
// Every leg of a class path is walkable or one vault of that class; returns how many are vaults.
static int CheckLegs(const Map& m,Vec3 from,const std::vector<Vec3>& path,VaultClass cls){
    int vaults=0;Vec3 p=from;
    for(Vec3 q:path){if(!ClearLine(m,p,q,.48f)){assert(cls!=VaultClass::None&&VaultCrossing(m,p,q,cls)!=VaultClass::None);++vaults;}p=q;}
    return vaults;
}
static void TruthTableTests(){
    const Vec3 a{-1.5f,0,0},b{1.5f,0,0};
    auto verdict=[&](const Map& m,VaultClass cls){return VaultCrossing(m,a,b,cls);};
    // A 1.15 m garden wall 0.6 m thick: everybody goes over it, as a low vault.
    {Map m=Field();m.obstacles.push_back(Wall({0,0,0},{.3f,3,0},1.15f));PrepareGeometry(m);
     assert(!ClearLine(m,a,b,.48f));
     assert(verdict(m,VaultClass::None)==VaultClass::None&&verdict(m,VaultClass::Low)==VaultClass::Low&&verdict(m,VaultClass::High)==VaultClass::Low);
     float height=0;assert(VaultCrossing(m,a,b,VaultClass::High,&height)==VaultClass::Low&&std::abs(height-1.15f)<1e-5f);
     // The same answer unprepared (no memo, linear scan) and a second time (memo hit).
     Map raw=m;raw.prepared=false;assert(VaultCrossing(raw,a,b,VaultClass::Low)==VaultClass::Low);assert(verdict(m,VaultClass::Low)==VaultClass::Low);
     // Both directions; a leg longer than 3.2 m is no vault; nor a leg that only grazes the wall's end.
     assert(VaultCrossing(m,b,a,VaultClass::Low)==VaultClass::Low);
     assert(VaultCrossing(m,{-1.7f,0,0},{1.7f,0,0},VaultClass::High)==VaultClass::None);
     assert(VaultCrossing(m,{-1.5f,3.1f,0},{1.5f,3.1f,0},VaultClass::High)==VaultClass::None);
     // Ends at different heights, or one end on a stair surface: never.
     assert(VaultCrossing(m,a,b+Vec3{0,0,.05f},VaultClass::High)==VaultClass::None);
     Map stair=m;GroundSurface landing;landing.id=77;landing.center={-1.5f,0,0};landing.half={.8f,.8f,0};landing.kind=2;stair.surfaces.push_back(landing);
     InvalidateGeometry(stair);assert(OnStairs(stair,a)&&Walkable(stair,a)&&VaultCrossing(stair,a,b,VaultClass::High)==VaultClass::None);
     assert(VaultCrossing(stair,{-1.5f,2,0},{1.5f,2,0},VaultClass::High)==VaultClass::Low);}
    // 1.9 m: a wall only a High man goes over; 2.2 m (and the default 2.2 m solid): nobody.
    {Map m=Field();m.obstacles.push_back(Wall({0,0,0},{.3f,3,0},1.9f));PrepareGeometry(m);
     assert(verdict(m,VaultClass::Low)==VaultClass::None&&verdict(m,VaultClass::High)==VaultClass::High);}
    for(float h:{2.2f,0.f}){Map m=Field();m.obstacles.push_back(Wall({0,0,0},{.3f,3,0},h));PrepareGeometry(m);
     assert(ObstacleHeight(m.obstacles[0])>2.f&&verdict(m,VaultClass::High)==VaultClass::None);}
    // Too deep (1.2 m through the obstacle), and no headroom (a beam 0.8 m over a 1.1 m wall).
    {Map m=Field();m.obstacles.push_back(Wall({0,0,0},{.6f,3,0},1.f));PrepareGeometry(m);assert(verdict(m,VaultClass::High)==VaultClass::None);}
    {Map m=Field();m.obstacles.push_back(Wall({0,0,0},{.3f,3,0},1.1f));Obstacle beam=Wall({0,0,1.9f},{.6f,3,0},.3f);beam.blocksMovement=false;m.obstacles.push_back(beam);
     PrepareGeometry(m);assert(verdict(m,VaultClass::High)==VaultClass::None);
     m.obstacles.back().center.z=2.15f;InvalidateGeometry(m);assert(verdict(m,VaultClass::High)==VaultClass::Low);}
    // A second wall along the leg: both are crossed and low, so it is one vault over both.
    {Map m=Field();m.obstacles.push_back(Wall({-.4f,0,0},{.15f,3,0},1.f));m.obstacles.push_back(Wall({.4f,0,0},{.15f,3,0},1.15f));PrepareGeometry(m);
     float height=0;assert(VaultCrossing(m,a,b,VaultClass::Low,&height)==VaultClass::Low&&std::abs(height-1.15f)<1e-5f);}
    // A hedge (concealment, and the authored bit alone once Simulate cleared concealment): never.
    {Map m=Field();auto hedge=Wall({0,0,0},{.3f,3,0},1.f);hedge.concealment=true;hedge.flags=1;m.obstacles.push_back(hedge);PrepareGeometry(m);
     assert(verdict(m,VaultClass::High)==VaultClass::None);
     m.obstacles[0].concealment=false;InvalidateGeometry(m);assert(!m.hasConcealment&&verdict(m,VaultClass::High)==VaultClass::None);}
    // A non-blocking obstacle in the band (a crater rim) spoils the leg: every touched obstacle must be a solid.
    {Map m=Field();m.obstacles.push_back(Wall({0,0,0},{.3f,3,0},1.f));auto rim=Wall({1.f,.45f,0},{.2f,.2f,0},.6f);rim.blocksMovement=false;rim.flags=2;m.obstacles.push_back(rim);
     PrepareGeometry(m);assert(verdict(m,VaultClass::High)==VaultClass::None);}
    // Open ground: nothing to vault. A lane just beyond a wall: the leg is not over supported ground.
    {Map m=Field();PrepareGeometry(m);assert(ClearLine(m,a,b,.48f)&&verdict(m,VaultClass::High)==VaultClass::None);}
    {Map m=Field();m.obstacles.push_back(Wall({-.8f,0,0},{.15f,3,0},1.f));PrepareGeometry(m);assert(verdict(m,VaultClass::Low)==VaultClass::Low);
     GroundSurface lane;lane.id=5;lane.center={.5f,0,-1.4f};lane.half={.4f,3,0};m.surfaces.push_back(lane);InvalidateGeometry(m);
     assert(Walkable(m,a)&&Walkable(m,b)&&verdict(m,VaultClass::High)==VaultClass::None);}
    // A house: a window sill (building obstacle, 1.05 m) and a doorway are never vaulted.
    {Map m=Field();AddBuilding(m,{0,0,0});PrepareGeometry(m);
     const Vec3 out{2.5f,5.3f,0},in{2.5f,2.6f,0};assert(Walkable(m,out)&&Walkable(m,in)&&!ClearLine(m,out,in,.48f));
     assert(VaultCrossing(m,out,in,VaultClass::High)==VaultClass::None&&VaultCrossing(m,in,out,VaultClass::High)==VaultClass::None);
     const Vec3 door{-6.4f,0,0},hall{-3.6f,0,0};assert(VaultCrossing(m,door,hall,VaultClass::High)==VaultClass::None);}
    std::cout<<"VAULT rule: 1.15 m wall low, 1.9 m high only, 2.2 m never; too deep, no headroom, hedge, rim, sill, doorway, stairs, heights, length, grazing: never PASS\n";
}
// A garden wall 44 m long across the way, a man 5 m in front of it, his goal 5 m behind: 45 m round, 13 m over.
static void ClassPathTests(){
    for(float h:{1.15f,1.9f}){
        Map m;m.halfWidth=70;m.halfHeight=50;m.obstacles.push_back(Wall({0,0,0},{.3f,22,0},h));PrepareGeometry(m);
        const Vec3 from{-5,.25f,0},to{5,-.25f,0};
        const auto none=FindPath(m,from,to),plain=FindPath(m,from,to,VaultClass::None);
        assert(none.size()==plain.size()&&std::memcmp(none.data(),plain.data(),none.size()*sizeof(Vec3))==0);
        const auto low=FindPath(m,from,to,VaultClass::Low),high=FindPath(m,from,to,VaultClass::High);
        const float round=Length(from,none);assert(!none.empty()&&round>40&&CheckLegs(m,from,none,VaultClass::None)==0);
        assert(!high.empty()&&CheckLegs(m,from,high,VaultClass::High)==1&&Length(from,high)<14);
        if(h<1.2f){assert(!low.empty()&&CheckLegs(m,from,low,VaultClass::Low)==1&&Length(from,low)<14);}
        else{assert(low.size()==none.size()&&std::abs(Length(from,low)-round)<1e-3f);}
        // The cost search with a class keeps its vault leg's two ends (collinear compaction does not cut it).
        int expanded=0;RouteStatus status;
        auto costed=FindCostPath(m,from,to,[](Vec3){return 1.f;},4000,expanded,status,VaultClass::High);
        assert(status==RouteStatus::Complete&&CheckLegs(m,from,costed,VaultClass::High)==1);
        auto plainCost=FindCostPath(m,from,to,[](Vec3){return 1.f;},4000,expanded,status);
        assert(CheckLegs(m,from,plainCost,VaultClass::None)==0&&Length(from,plainCost)>40);
        // Unprepared geometry gives the same class path.
        Map raw=m;raw.prepared=false;raw.navigation.reset();auto again=FindPath(raw,from,to,VaultClass::High);
        assert(again.size()==high.size());for(size_t i=0;i<high.size();++i)assert(Distance(again[i],high[i])<1e-5f);
        std::cout<<"VAULT paths ("<<h<<" m wall): none "<<round<<" m, low "<<Length(from,low)<<" m, high "<<Length(from,high)<<" m\n";
    }
    // On an authored house map (Fractured Works): a class path never goes through a house wall or window.
    auto works=MakeSkirmishMap();PrepareGeometry(works);
    const Vec3 from{-44,-62,0},to{-32,-62,0};
    for(auto cls:{VaultClass::Low,VaultClass::High}){auto p=FindPath(works,from,to,cls);if(!p.empty())CheckLegs(works,from,p,cls);}
    std::cout<<"VAULT paths: a class path takes one vault leg over the wall and keeps it through the cost search PASS\n";
}
// Generated and authored ground (an F1 scenario map, Fractured Works, the trench map): every vault leg a Low
// man may take a High man may take; every point a class None path reaches a class path reaches; every class
// path's legs are valid.
static void MonotoneOn(const char* name,const Map& m,uint32_t seed){
    std::mt19937 rng(seed);std::uniform_real_distribution<float> ux(-m.halfWidth+2,m.halfWidth-2),uy(-m.halfHeight+2,m.halfHeight-2);
    const float floor=m.surfaces.empty()?0.f:m.groundBase;
    int legs=0,lows=0,highs=0,tries=0;
    // Candidate legs where the one-cell step is blocked: grid points next to obstacles, two and three cells out.
    while(legs<200&&++tries<200000){
        const Vec3 p{std::round(ux(rng)),std::round(uy(rng)),floor};if(!Walkable(m,p))continue;
        for(int x=-1;x<=1;++x)for(int y=-1;y<=1;++y){
            if(!x&&!y)continue;
            const Vec3 near=p+Vec3{float(x),float(y),0};
            if(Walkable(m,near)&&ClearLine(m,p,near,.48f))continue;
            for(int k=2;k<=3;++k){const Vec3 q=p+Vec3{float(k*x),float(k*y),0};
                const auto low=VaultCrossing(m,p,q,VaultClass::Low),high=VaultCrossing(m,p,q,VaultClass::High);
                assert(VaultCrossing(m,p,q,VaultClass::None)==VaultClass::None);
                if(low!=VaultClass::None)assert(low==VaultClass::Low&&high==VaultClass::Low);
                if(high==VaultClass::High)assert(low==VaultClass::None);
                lows+=low!=VaultClass::None;highs+=high!=VaultClass::None;++legs;}
        }
    }
    int pairs=0,reachNone=0,reachLow=0,reachHigh=0,vaultPaths=0;
    while(pairs<200){
        const Vec3 p{ux(rng),uy(rng),floor},q=p+Vec3{std::uniform_real_distribution<float>(-25,25)(rng),std::uniform_real_distribution<float>(-25,25)(rng),0};
        if(!Walkable(m,p)||!Walkable(m,q))continue;
        ++pairs;
        const auto none=FindPath(m,p,q),low=FindPath(m,p,q,VaultClass::Low),high=FindPath(m,p,q,VaultClass::High);
        if(!none.empty())assert(!low.empty());
        if(!low.empty())assert(!high.empty());
        reachNone+=!none.empty();reachLow+=!low.empty();reachHigh+=!high.empty();
        if(!low.empty())vaultPaths+=CheckLegs(m,p,low,VaultClass::Low)>0;
        if(!high.empty())CheckLegs(m,p,high,VaultClass::High);
    }
    std::cout<<"VAULT monotone on "<<name<<": "<<legs<<" blocked legs (low "<<lows<<", high "<<highs<<"); "<<pairs<<" pairs reached none "<<reachNone
             <<", low "<<reachLow<<", high "<<reachHigh<<" ("<<vaultPaths<<" low paths vault)\n";
}
// Yards: forty garden and yard walls of mixed heights, thicknesses and lengths, and four houses.
static Map Yards(){
    Map m;m.halfWidth=60;m.halfHeight=45;std::mt19937 rng(17);std::uniform_real_distribution<float> u(0,1);
    const float heights[]={.9f,1.15f,1.5f,1.9f,2.2f},thick[]={.1f,.2f,.3f,.45f,.6f};
    for(int i=0;i<40;++i){const bool alongX=u(rng)<.5f;const float length=3+9*u(rng),half=thick[int(u(rng)*5)%5];
        const Vec3 c{-50+100*u(rng),-38+76*u(rng),0};
        m.obstacles.push_back(Wall(c,alongX?Vec3{length*.5f,half,0}:Vec3{half,length*.5f,0},heights[int(u(rng)*5)%5]));}
    for(Vec3 c:{Vec3{-30,-25,0},Vec3{30,25,0},Vec3{-30,25,0},Vec3{30,-25,0}})AddBuilding(m,c);
    return m;
}
static void MonotoneTests(){
    auto yards=Yards();PrepareGeometry(yards);MonotoneOn("yards",yards,23);
    auto f1=GenerateScenario(ScenarioFamily::F1,3).map;PrepareGeometry(f1);MonotoneOn("F1 gen-seed 3",f1,29);
    auto works=MakeSkirmishMap();PrepareGeometry(works);MonotoneOn("Fractured Works",works,31);
    auto trench=MakeTrenchMap();PrepareGeometry(trench);MonotoneOn("trenches",trench,37);
    std::cout<<"VAULT monotone: low implies high, reach none implies reach low implies reach high, every class leg valid PASS\n";
}
static void ClassTests(){
    Config off,on;on.vaulting=true;assert(!SameConfig(off,on)&&SameConfig(on,on));
    Soldier s;s.stamina=8;
    auto set=[&](float strength,float dexterity){s.stats.value[size_t(Stat::Strength)]=strength;s.stats.value[size_t(Stat::Dexterity)]=dexterity;};
    set(100,100);assert(VaultClassOf(s,off)==VaultClass::None&&VaultClassOf(s,on)==VaultClass::Low);
    set(104,100);assert(VaultClassOf(s,on)==VaultClass::High);          // mean 102
    set(103.9f,100);assert(VaultClassOf(s,on)==VaultClass::Low);        // mean 101.95
    set(110,110);assert(VaultClassOf(s,on)==VaultClass::High);
    {auto gunner=s;gunner.machineGun=true;assert(VaultClassOf(gunner,on)==VaultClass::Low);}
    {auto hurt=s;hurt.understoodHealth=54;assert(VaultClassOf(hurt,on)==VaultClass::None);hurt.understoodHealth=55;assert(VaultClassOf(hurt,on)==VaultClass::High);}
    {auto down=s;down.stance=Stance::Prone;assert(VaultClassOf(down,on)==VaultClass::None);}
    {auto winded=s;winded.winded=true;assert(VaultClassOf(winded,on)==VaultClass::None);}
    {auto tired=s;tired.stamina=2.4f;assert(VaultClassOf(tired,on)==VaultClass::Low);tired.stamina=.9f;assert(VaultClassOf(tired,on)==VaultClass::None);
     Config noStamina=on;noStamina.stamina=false;assert(VaultClassOf(tired,noStamina)==VaultClass::High);}
    // Seconds: 0.9 and 1.8 at dexterity 100, faster for a nimbler man.
    Soldier plain;assert(VaultSeconds(plain,VaultClass::Low)==.9f&&VaultSeconds(plain,VaultClass::High)==1.8f);
    assert(std::abs(VaultSeconds(s,VaultClass::Low)-.9f/StatScale(110))<1e-6f);
    // The charge is paid at once and can leave him winded; zero spend is the old stamina step.
    {Soldier x,y;x.stamina=y.stamina=5;StepStamina(x,false,true,TickSeconds);StepStamina(y,false,true,TickSeconds,0);assert(x.stamina==y.stamina&&x.winded==y.winded);
     Soldier z;z.stamina=2;StepStamina(z,false,true,TickSeconds,2.5f);assert(z.winded&&z.stamina<.1f);}
    // No fire while going over.
    {Soldier w;w.action=Action::Advance;w.assignment.task=Task::BoundMove;w.magazineRemaining=5;const bool before=WalkingFire(w,0);w.vaulting=true;assert(!WalkingFire(w,0));(void)before;}
    std::cout<<"VAULT class: off none, mean(Str,Dex)>=102 high, gunner low, wounded/prone/winded/short none, seconds by dexterity, charge up front PASS\n";
}
// The movement stage's choice at a wall, and the path a winded man is given instead.
static void StepTests(){
    Map m;m.halfWidth=70;m.halfHeight=50;m.obstacles.push_back(Wall({0,0,0},{.3f,22,0},1.15f));PrepareGeometry(m);
    Config on;on.vaulting=true;Config off;
    Soldier s;s.id=3;s.position={-1.5f,0,0};s.stamina=8;s.goal={5,0,0};
    const Vec3 landing{1.5f,0,0};VaultClass need=VaultClass::None;float height=0;
    assert(VaultStepFor(m,s,landing,off)==VaultStep::Walk);
    assert(VaultStepFor(m,s,landing,on,&need,&height)==VaultStep::Vault&&need==VaultClass::Low&&std::abs(height-1.15f)<1e-5f);
    assert(VaultStepFor(m,s,{-1.5f,3,0},on)==VaultStep::Walk);
    auto winded=s;winded.winded=true;winded.stamina=0;
    assert(VaultStepFor(m,winded,landing,on)==VaultStep::Replan);
    // His replanned path goes round; a fresh man's goes over.
    Tactics memory;auto fresh=TaskExecutionPath(m,s,s.goal,memory,on,0),round=TaskExecutionPath(m,winded,s.goal,memory,on,0);
    assert(CheckLegs(m,s.position,fresh,VaultClass::Low)==1&&Length(s.position,fresh)<10);
    assert(CheckLegs(m,s.position,round,VaultClass::None)==0&&Length(s.position,round)>40);
    auto plain=TaskExecutionPath(m,s,s.goal,memory,off,0);assert(CheckLegs(m,s.position,plain,VaultClass::None)==0);
    std::cout<<"VAULT step: vault when his class covers it, replan round when winded ("<<Length(s.position,round)<<" m against "<<Length(s.position,fresh)<<" m) PASS\n";
}
// The fixture battle: squad 0 walks from x=-8 to goals at x=+10 behind a wall across x=0 (32 m long, so
// 37 m round against 18 m over). Everyone else sits in a closed pen at either end; nobody sees an enemy.
static std::string FixtureMap(float wallHeight){
    std::ostringstream m;m<<"ARMYMAP 1 city 29\nBOUNDS 80 40 0\n";
    int id=1;auto O=[&](float x,float y,float hx,float hy,float h){m<<"O "<<id++<<' '<<x<<' '<<y<<" 0 "<<hx<<' '<<hy<<' '<<h<<" 0 0 1\n";};
    for(float cx:{-66.f,66.f}){O(cx-8.3f,0,.3f,8.6f,3.2f);O(cx+8.3f,0,.3f,8.6f,3.2f);O(cx,-8.3f,8.f,.3f,3.2f);O(cx,8.3f,8.f,.3f,3.2f);}
    O(0,0,.3f,16,wallHeight);
    for(int i=0;i<UnitCount;++i){
        Vec3 p,g;
        if(i<SquadSize){p={-8,-7+2.f*float(i),0};g={10,-7+2.f*float(i),0};}
        else{const int k=i<TeamSize?i-SquadSize:i-TeamSize;const float cx=i<TeamSize?-66.f:66.f;p={cx-6.25f+2.5f*float(k%6),-6.25f+2.5f*float(k/6),0};g=p;}
        m<<"U "<<i<<' '<<p.x<<' '<<p.y<<' '<<p.z<<' '<<g.x<<' '<<g.y<<' '<<g.z<<'\n';
    }
    m<<"END\n";return m.str();
}
struct Sample { float time=0; std::array<Vec3,SquadSize> position{}; std::array<bool,SquadSize> vaulting{},alive{}; std::array<float,SquadSize> stamina{},progress{},height{};
    std::array<Stance,SquadSize> stance{}; std::array<Reason,SquadSize> reason{}; };
struct Run { uint64_t digest=0; int vaults=0; std::vector<Sample> samples; std::vector<std::pair<float,int>> shots; std::array<Soldier,SquadSize> men{}; };
static Run RunFixture(const std::shared_ptr<const ImportedBattlefield>& map,bool vaulting,bool drills=false){
    Config c;c.battlefield=map;c.seed=1;c.maxSeconds=60;c.vaulting=vaulting;c.drills=c.foundations=drills;
    DiagnosticOptions lean;lean.enabled=false;lean.keepFrames=false;LeanRecorder recorder;Run out;
    lean.frameSink=[&](const Record& r,const Frame& f){recorder.Record_(r,f);Sample x;x.time=f.time;
        for(int n=0;n<SquadSize;++n){const auto& s=f.soldiers[size_t(n)];x.position[size_t(n)]=s.position;x.vaulting[size_t(n)]=s.vaulting;x.alive[size_t(n)]=s.Active();
            x.stamina[size_t(n)]=s.stamina;x.progress[size_t(n)]=s.vaultProgress;x.height[size_t(n)]=s.vaultHeight;x.stance[size_t(n)]=s.stance;x.reason[size_t(n)]=s.reason;
            if(out.samples.empty())out.men[size_t(n)]=s;}
        out.samples.push_back(x);};
    const auto r=Simulate(c,lean);out.digest=recorder.Digest(r);out.vaults=r.vaults;
    for(const auto& shot:r.shots)if(shot.owner<SquadSize)out.shots.push_back({shot.time,shot.owner});
    return out;
}
static bool Strong(const Soldier& s){return !s.machineGun&&(s.stats.Get(Stat::Strength)+s.stats.Get(Stat::Dexterity))*.5f>=Vaulting().highStat;}
// Every vault in the run: the man stands still at take-off, standing, for his vault's seconds, paid for at
// once, and lands on the far side of the wall two or three metres on. Returns the men who vaulted.
static int CheckVaults(const Run& run,float wallHeight,std::array<int,SquadSize>& count){
    count.fill(0);int men=0;
    for(int n=0;n<SquadSize;++n){
        const Soldier& man=run.men[size_t(n)];
        for(size_t k=1;k<run.samples.size();++k){
            const auto& x=run.samples[k];const auto& before=run.samples[k-1];
            // A vault begins where he is vaulting and was not, or was but somewhere else: he landed from one and
            // took off on the next within the same 0.2 s frame (back over the wall, plan 029 M-C2's fixtures).
            if(!x.vaulting[size_t(n)]||(before.vaulting[size_t(n)]&&Distance(before.position[size_t(n)],x.position[size_t(n)])<1e-6f))continue;
            ++count[size_t(n)];
            // Frames are every 0.2 s: he took off within the last frame, from where the frame before left him or close by.
            const Vec3 takeoff=x.position[size_t(n)];
            assert(std::abs(x.height[size_t(n)]-wallHeight)<1e-4f&&x.stance[size_t(n)]==Stance::Standing&&x.reason[size_t(n)]==Reason::Vault);
            assert(before.stamina[size_t(n)]-x.stamina[size_t(n)]>(wallHeight>1.2f?Vaulting().highStamina:Vaulting().lowStamina)-.1f);
            size_t j=k;while(j<run.samples.size()&&run.samples[j].vaulting[size_t(n)]&&Distance(run.samples[j].position[size_t(n)],takeoff)<1e-6f)++j;
            assert(j<run.samples.size());
            const float seconds=VaultSeconds(man,wallHeight>1.2f?VaultClass::High:VaultClass::Low);
            const float span=run.samples[j].time-x.time;assert(span>seconds-.2f-1e-3f&&span<seconds+.25f);
            const Vec3 landed=run.samples[j].position[size_t(n)];
            const float jump=Distance(takeoff,landed);assert(jump>1.9f);assert((takeoff.x<0)!=(landed.x<0));
            for(const auto& shot:run.shots)assert(!(shot.second==n&&shot.first>x.time-.2f&&shot.first<run.samples[j].time-.05f));
            if(wallHeight>1.2f)assert(Strong(man));
        }
        men+=count[size_t(n)]>0;
    }
    return men;
}
static void FixtureTests(){
    std::string error;
    auto low=ImportBattlefield(FixtureMap(1.15f),error);assert(low&&error.empty());
    auto high=ImportBattlefield(FixtureMap(1.9f),error);assert(high&&error.empty());
    // Off is the parent: these lean digests are the parent build's (0c59ea67b5264b3b, battle_cli --legacy-ai or
    // --drills --map <this map> --seed 1 --seconds 60 --lean), recorded before the switch existed. A legitimate
    // change elsewhere that moves every battle moves these too; re-record them then.
    struct Case{const char* name;std::shared_ptr<const ImportedBattlefield> map;float wall;bool drills;uint64_t parent;};
    const Case cases[]={{"legacy 1.15 m",low,1.15f,false,VAULT_PARENT_LOW},{"legacy 1.9 m",high,1.9f,false,VAULT_PARENT_HIGH},
                        {"drills 1.15 m",low,1.15f,true,VAULT_PARENT_DRILLS},{"drills 1.9 m",high,1.9f,true,VAULT_PARENT_DRILLS_HIGH}};
    int all=0;
    for(const auto& k:cases){
        const auto on=RunFixture(k.map,true,k.drills),off=RunFixture(k.map,false,k.drills);
        std::cout<<"VAULT fixture "<<k.name<<": off "<<off.digest<<", on "<<on.digest;
        assert(off.digest==k.parent&&off.vaults==0);
        for(const auto& x:off.samples)for(int n=0;n<SquadSize;++n)assert(!x.vaulting[size_t(n)]);
        assert(on.digest!=off.digest&&on.digest==RunFixture(k.map,true,k.drills).digest);
        std::array<int,SquadSize> count{};const int men=CheckVaults(on,k.wall,count);
        int total=0,strong=0;for(int n=0;n<SquadSize;++n){total+=count[size_t(n)];strong+=Strong(on.men[size_t(n)]);}
        assert(total==on.vaults);all+=total;
        // The wall a Low man cannot clear is vaulted only by the strong and nimble (never the gunner).
        if(k.wall>1.2f)for(int n=0;n<SquadSize;++n)if(!Strong(on.men[size_t(n)]))assert(!count[size_t(n)]);
        // Drills walks through to its objective: most of the squad goes over the garden wall.
        if(k.drills&&k.wall<1.2f)assert(men>=4);
        std::cout<<"; "<<men<<" men vaulted ("<<total<<" vaults, "<<strong<<" strong men in the squad)\n";
    }
    assert(all>=10);
    std::cout<<"VAULT fixture: every vault still at take-off for its seconds, standing, paid up front, silent, landing over the wall; off digests are the parent's PASS\n";
}
// Plan 029 M-C2: cover ranked by his own path's length (a vault at its seconds), and a hold order that named
// his take-off spot. The wall: x=0, 0.6 m thick, 1.15 m high, 32 m long (a garden wall, low cover on both faces);
// his hold spot 1 m east of it at (1.3,0); its west-face cover at (-0.9,0); a gun forty metres east.
static Map ReversalField(bool eastBlock){
    Map m;m.halfWidth=70;m.halfHeight=40;Obstacle w=Wall({0,0,0},{.3f,16,0},1.15f);w.id=1;w.halfCover=true;m.obstacles.push_back(w);
    // A garden block 4 m east of the wall, whose own west face is cover from the gun 3.4 m from his spot with no vault.
    if(eastBlock){Obstacle b=Wall({5.3f,2,0},{.3f,1,0},1.15f);b.id=2;b.halfCover=true;m.obstacles.push_back(b);}
    PrepareGeometry(m);return m;
}
static Soldier HoldingRifleman(float time){
    Soldier s;s.id=3;s.team=0;s.squad=0;s.position={1.3f,0,0};s.goal=s.position;s.facing={1,0};s.stamina=8;
    s.assignment.task=Task::Hold;s.assignment.position=s.position;s.assignment.serial=1;s.assignment.sector={40,0,0};
    auto& ct=s.contacts[39];ct.known=ct.visible=true;ct.position={40,0,0};ct.observedAt=time;ct.aimHeight=1.45f;ct.automaticWeapon=true;
    return s;
}
static void PathTravelTests(){
    const Map m=ReversalField(false);
    const Vec3 from{1.3f,0,0},to{-.9f,0,0};
    const auto low=FindPath(m,from,to,VaultClass::Low),none=FindPath(m,from,to,VaultClass::None);
    assert(CheckLegs(m,from,low,VaultClass::Low)==1&&!none.empty()&&CheckLegs(m,from,none,VaultClass::None)==0);
    const float vault=Vaulting().lowSeconds*Vaulting().plannerPace;
    // Low: the legs plus one vault's seconds as metres; the walk round is its plain length; None never adds.
    assert(std::abs(PathTravel(m,from,low,VaultClass::Low)-(Length(from,low)+vault))<1e-4f);
    assert(std::abs(PathTravel(m,from,none,VaultClass::Low)-Length(from,none))<1e-4f&&Length(from,none)>30);
    assert(std::abs(PathTravel(m,from,low,VaultClass::None)-Length(from,low))<1e-4f);
    Vec3 p=from;int vaults=0;for(Vec3 q:low){const float extra=VaultLegMetres(m,p,q,VaultClass::Low);assert(extra==0||std::abs(extra-vault)<1e-6f);vaults+=extra>0;p=q;}
    assert(vaults==1&&VaultLegMetres(m,{1.3f,-3,0},{1.3f,3,0},VaultClass::High)==0);
    std::cout<<"VAULT path travel: over the wall "<<PathTravel(m,from,low,VaultClass::Low)<<" m ("<<Length(from,low)<<" m and a vault), round "<<Length(from,none)<<" m PASS\n";
}
// The man's own loop, as the battle's movement stage runs it for this test: he decides every 0.2 s, walks at 3 m/s
// along his own-class path, and a vault leg takes him over at once and holds him there for its seconds.
struct HoldRun { int vaults=0; float lastVault=-1; Vec3 end{}; Tactics memory; std::vector<Order> orders; };
static HoldRun RunHold(const Map& m,const Config& c,float until,float fireUntil,float quietUntil){
    HoldRun run;Soldier s=HoldingRifleman(10);float busy=0;
    for(float time=10;time<until;time+=.2f){
        const bool firing=time<fireUntil,seen=time<quietUntil;
        auto& ct=s.contacts[39];ct.visible=seen;if(seen)ct.observedAt=time;
        s.suppression=firing?.6f:0.f;
        if(time<busy)continue;
        const Order o=ChooseOrder(s,m,c,{},run.memory,time);run.orders.push_back(o);
        s.action=o.action;s.reason=o.reason;s.stance=o.stance;
        if(Distance(s.position,o.goal)<=.12f||o.action==Action::Hold||o.action==Action::Fire)continue;
        const auto path=FindPath(m,s.position,o.goal,VaultClassOf(s,c));
        size_t next=0;while(next<path.size()&&Distance(path[next],s.position)<.05f)++next;
        if(next==path.size())continue;
        const Vec3 dest=path[next];
        if(VaultStepFor(m,s,dest,c)==VaultStep::Vault){s.position=dest;++run.vaults;run.lastVault=time;busy=time+VaultSeconds(s,VaultClass::Low);continue;}
        const float step=std::min(.6f,Distance(s.position,dest));s.position=s.position+(dest-s.position)*(step/std::max(1e-4f,Distance(s.position,dest)));
    }
    run.end=s.position;return run;
}
static void ReversalDecisionTests(){
    Config on;on.vaulting=true;Config off;
    {const Map m=ReversalField(false);
     // With the switch on: exposed on his post, he goes over the wall to the west face once, and stays there while
     // the gun fires and after, while it is still in sight (the post has no cover from it).
     const auto run=RunHold(m,on,40,25,40);
     std::cout<<"VAULT hold fixture: "<<run.vaults<<" vault(s), ends at ("<<run.end.x<<","<<run.end.y<<")\n";
     assert(run.vaults==1&&run.lastVault<11&&Distance(run.end,{-.9f,0,0})<.3f);
     // With it off he cannot go over: he walks the 36 m round the wall to the same cover.
     const auto plain=RunHold(m,off,40,25,40);assert(plain.vaults==0&&Distance(plain.end,{-.9f,0,0})<.3f);}
    {const Map m=ReversalField(true);
     // A cover on his own side 3.4 m away against one over the wall 2.2 m away: by his path the near side is the
     // shorter (2.2 m and a vault is 5 m), so he walks to it and never vaults. The parent (M-C) ranked the straight
     // line and went over the wall.
     const Vec3 from{1.3f,0,0},west{-.9f,0,0},east{4.4f,2-.55f,0};
     assert(Distance(from,west)<Distance(from,east));
     assert(PathTravel(m,from,FindPath(m,from,west,VaultClass::Low),VaultClass::Low)>PathTravel(m,from,FindPath(m,from,east,VaultClass::Low),VaultClass::Low));
     auto s=HoldingRifleman(10);Tactics memory;const Order o=ChooseOrder(s,m,on,{},memory,10);
     std::cout<<"VAULT near-side fixture: order to ("<<o.goal.x<<","<<o.goal.y<<")\n";
     assert(memory.assigned&&memory.emergency&&memory.shelter.x>1);
     const auto run=RunHold(m,on,40,25,40);assert(run.vaults==0&&run.end.x>1);
     // The traced search (DecisionAlternatives) makes the same choice.
     auto t=HoldingRifleman(10);Tactics traced;DecisionAlternatives alternatives;ChooseOrder(t,m,on,{},traced,10,&alternatives);
     assert(Distance(traced.shelter,memory.shelter)<1e-6f);}
    std::cout<<"VAULT hold: over the wall once and he stays under fire; with near-side cover he walks to it, by path PASS\n";
}
// The order rule: a hold order sent before his last vault landed, naming its take-off spot, is where he landed.
static void HoldOrderRuleTests(){
    auto receive=[](Soldier man,Vec3 position,float issued,float at){
        auto frame=std::make_unique<Frame>();frame->time=at;frame->soldiers[size_t(man.id)]=man;ReactionRuntime rt;std::vector<Event> events;
        PendingReaction p;p.kind=ReactionKind::Order;p.order.task=Task::Hold;p.order.position=position;p.order.serial=man.assignment.serial+1;p.order.issuedAt=issued;
        QueueReaction(frame->soldiers[size_t(man.id)],p,at-2,rt);ProcessReactions(*frame,rt,events);
        return frame->soldiers[size_t(man.id)].assignment;};
    Soldier man;man.id=3;man.health=100;man.position={-1,0,0};
    const Vec3 takeoff{1,0,0},landing{-1,0,0};
    // Never vaulted (every soldier with the switch off): the order is the order.
    {const auto a=receive(man,takeoff,10,11);assert(a.task==Task::Hold&&Distance(a.position,takeoff)<1e-6f);}
    man.vaultTakeoff=takeoff;man.vaultLanding=landing;man.vaultLandsAt=10.5f;
    {const auto a=receive(man,takeoff,10.2f,11.2f);assert(Distance(a.position,landing)<1e-6f);}          // sent mid-vault
    {const auto a=receive(man,takeoff+Vec3{.2f,0,0},9.6f,11.2f);assert(Distance(a.position,landing)<1e-6f);} // sent just before he went
    {const auto a=receive(man,takeoff,10.8f,11.6f);assert(Distance(a.position,takeoff)<1e-6f);}         // sent after he landed: meant
    {const auto a=receive(man,{1,3,0},10.2f,11.2f);assert(Distance(a.position,{1,3,0})<1e-6f);}         // another spot
    {PendingReaction p;Soldier moving=man;auto frame=std::make_unique<Frame>();frame->time=11.2f;frame->soldiers[3]=moving;ReactionRuntime rt;std::vector<Event> events;
     p.kind=ReactionKind::Order;p.order.task=Task::Advance;p.order.position=takeoff;p.order.serial=1;p.order.issuedAt=10.2f;
     QueueReaction(frame->soldiers[3],p,9,rt);ProcessReactions(*frame,rt,events);assert(Distance(frame->soldiers[3].assignment.position,takeoff)<1e-6f);} // not a hold
    std::cout<<"VAULT hold order: a hold sent before he landed naming his take-off is where he landed; later, elsewhere or not a hold: as sent PASS\n";
}
}
namespace vault_tests {
// The battle version: squad 0 on hold spots 1 m east of the 32 m garden wall, the enemy gun forty metres east behind
// its own low wall, everyone else in the closed pens. Lean digest of the switch-off battle on the parent build.
constexpr uint64_t VAULT_PARENT_HOLD=16972941566334419232ull; // 3db4b7c553c58257 (muzzle credit on), battle_cli --legacy-ai --map <this map> --seed 1 --seconds 60 --lean
static std::string HoldFixtureMap(){
    std::ostringstream m;m<<"ARMYMAP 1 city 29\nBOUNDS 80 40 0\n";
    int id=1;auto O=[&](float x,float y,float hx,float hy,float h,int low){m<<"O "<<id++<<' '<<x<<' '<<y<<" 0 "<<hx<<' '<<hy<<' '<<h<<" 0 "<<low<<" 1\n";};
    for(float cx:{-66.f,66.f}){O(cx-8.3f,0,.3f,8.6f,3.2f,0);O(cx+8.3f,0,.3f,8.6f,3.2f,0);O(cx,-8.3f,8.f,.3f,3.2f,0);O(cx,8.3f,8.f,.3f,3.2f,0);}
    O(0,0,.3f,16,1.15f,1);O(38.6f,0,.3f,1.5f,1.f,1);
    for(int i=0;i<UnitCount;++i){
        Vec3 p;
        if(i<SquadSize)p={1.3f,-7+2.f*float(i),0};
        else if(i==39)p={40,0,0};
        else{const int k=i<TeamSize?i-SquadSize:i-TeamSize-(i>39?1:0);const float cx=i<TeamSize?-66.f:66.f;p={cx-6.25f+2.5f*float(k%6),-6.25f+2.5f*float(k/6),0};}
        m<<"U "<<i<<' '<<p.x<<' '<<p.y<<' '<<p.z<<' '<<p.x<<' '<<p.y<<' '<<p.z<<'\n';
    }
    m<<"END\n";return m.str();
}
// Vaults and reversals (back over the same wall within 10 s of landing) of squad 0.
static std::pair<int,int> Reversals(const Run& run){
    int vaults=0,reversals=0;
    for(int n=0;n<SquadSize;++n){Vec3 lastTakeoff{};float lastEnd=-100;bool have=false;
        for(size_t k=1;k<run.samples.size();++k){const auto& x=run.samples[k];const auto& b=run.samples[k-1];
            if(x.vaulting[size_t(n)]&&(!b.vaulting[size_t(n)]||Distance(b.position[size_t(n)],x.position[size_t(n)])>1e-6f)){++vaults;
                const Vec3 takeoff=x.position[size_t(n)];
                size_t j=k;while(j<run.samples.size()&&run.samples[j].vaulting[size_t(n)]&&Distance(run.samples[j].position[size_t(n)],takeoff)<1e-6f)++j;
                if(j>=run.samples.size())break;
                const Vec3 landing=run.samples[j].position[size_t(n)];
                if(have&&x.time-lastEnd<=10&&Distance(landing,lastTakeoff)<2.5f)++reversals;
                have=true;lastTakeoff=x.position[size_t(n)];lastEnd=run.samples[j].time;}}}
    return {vaults,reversals};
}
static void HoldFixtureTests(){
    std::string error;auto map=ImportBattlefield(HoldFixtureMap(),error);assert(map&&error.empty());
    const auto off=RunFixture(map,false),on=RunFixture(map,true);
    const auto counted=Reversals(on);
    std::cout<<"VAULT hold battle: off "<<off.digest<<", on "<<on.digest<<"; "<<counted.first<<" vaults, "<<counted.second<<" reversals\n";
    assert(off.digest==VAULT_PARENT_HOLD&&off.vaults==0);
    assert(on.digest==RunFixture(map,true).digest);
    // Under the gun every man goes over the wall to its west face once, and is still there thirty seconds in (the
    // squad's next orders come after that).
    for(int n=0;n<SquadSize;++n){int early=0;
        for(size_t k=1;k<on.samples.size()&&on.samples[k].time<30;++k)early+=on.samples[k].vaulting[size_t(n)]&&!on.samples[k-1].vaulting[size_t(n)];
        const auto& at30=*std::find_if(on.samples.begin(),on.samples.end(),[](const Sample& x){return x.time>=30;});
        assert(early==1&&at30.position[size_t(n)].x<0);}
    std::cout<<"VAULT hold battle: under the gun each man over the wall once and staying; off digest is the parent's PASS\n";
}
}
static void VaultTests(){
    std::cout.setf(std::ios::unitbuf);
    vault_tests::TruthTableTests();vault_tests::ClassPathTests();vault_tests::MonotoneTests();vault_tests::ClassTests();vault_tests::StepTests();vault_tests::FixtureTests();
    vault_tests::PathTravelTests();vault_tests::ReversalDecisionTests();vault_tests::HoldOrderRuleTests();vault_tests::HoldFixtureTests();
    std::cout<<"VAULT all PASS\n";
}
