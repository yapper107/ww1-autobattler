// Plan 029 M-A1: the prone stance with a short crawl, behind Config::prone.
// Four parts: the posture table against the literals it replaced (and the sway and recoil pins),
// the prone body against cover and rounds, the rules at the decision (going down, staying down,
// getting up, the crawl), and one fixture battle: a squad in the open under a machine gun forty
// metres off, level with it and with the gun on a platform 3.2 m up. Every other soldier sits in
// a closed pen at the far end of the map, so the fight is the squad and the gun.
#pragma once
#include "ImportedMap.h"
namespace prone_tests {
using namespace army;
// Plan 029 M-A2: the crater fixture's 90 s lean digest with the switch off, from the parent build
// (0c59ea67b5264b3b), before prone cover existed.
constexpr uint64_t CraterParentDigest=7718332071265670208ull; // battle_cli --legacy-ai --map <this map> --seed 1 --seconds 90 --lean
static void PostureTableTests(){
    // Standing and crouched are the literals every site carried before the table: bit for bit.
    const auto& up=Posture(Stance::Standing);const auto& low=Posture(Stance::Crouched);const auto& flat=Posture(Stance::Prone);
    assert(up.body==1.85f&&up.eye==1.7f&&up.muzzle==1.5f&&up.speed==1.f&&up.sway==1.f&&up.recoil==1.f&&up.aim==1.f&&up.plannerBody==1.5f);
    assert(low.body==0.9f&&low.eye==0.82f&&low.muzzle==0.72f&&low.speed==0.6f&&low.sway==0.7f&&low.recoil==0.8f&&low.aim==1.f&&low.plannerBody==0.9f);
    assert(flat.body==0.35f&&flat.eye==0.30f&&flat.muzzle==0.30f&&flat.speed==0.3f&&flat.sway==0.5f&&flat.recoil==0.7f&&flat.aim==1.1f&&flat.plannerBody==0.35f);
    assert(BodyHeight(Stance::Standing)==1.85f&&BodyHeight(Stance::Crouched)==0.9f&&BodyHeight(Stance::Prone)==0.35f);
    assert(Postures().crawlRange==6.f&&Postures().riseSeconds==.8f&&Postures().minimumSeconds==3.f);
    // The functions that read the table give exactly the pre-table arithmetic for both old stances.
    Config c;
    for(Stance stance:{Stance::Standing,Stance::Crouched}){
        const float factor=stance==Stance::Crouched?0.6f:1.f,sway=stance==Stance::Crouched?0.7f:1.f,kick=stance==Stance::Crouched?0.8f:1.f;
        Soldier s;s.stance=stance;s.suppression=.3f;s.stats.value[size_t(Stat::Dexterity)]=113;
        const float dexterity=StatScale(s.stats.Get(Stat::Dexterity));
        assert(MovementSpeed(s,c)==3.15f*1.f*(1-s.suppression*0.45f)*factor*1.f*1.f*1.f);
        assert(SwayAmplitude(s)==0.010f/(s.gun.ergonomics*dexterity)*sway*(1+2*s.suppression)*1.f*1.f);
        assert(RecoilKick(s)==s.gun.recoil/(s.gun.ergonomics*dexterity)*kick*1.f);
        assert(AimSeconds(s)==0.45f/(s.gun.ergonomics*dexterity)*(1+3*s.suppression)*1.f*1.f*1.f);
    }
    // Prone: a third of his pace, half the sway, seven tenths of the kick, a tenth longer to aim.
    Soldier up1,flat1;flat1.stance=Stance::Prone;
    assert(std::abs(MovementSpeed(flat1,c)-.3f*MovementSpeed(up1,c))<1e-6f);
    assert(std::abs(SwayAmplitude(flat1)-.5f*SwayAmplitude(up1))<1e-7f);
    assert(std::abs(RecoilKick(flat1)-.7f*RecoilKick(up1))<1e-7f);
    assert(std::abs(AimSeconds(flat1)-1.1f*AimSeconds(up1))<1e-6f);
    // The switch: a config with it on is a different battle.
    Config on;on.prone=true;assert(!SameConfig(c,on)&&SameConfig(on,on));
    std::cout<<"PRONE posture table: standing and crouched are the old literals exactly, prone body "<<flat.body
             <<" m, crawl x"<<flat.speed<<", sway x"<<flat.sway<<", recoil x"<<flat.recoil<<", aim x"<<flat.aim<<" PASS\n";
}
static void ProneBodyTests(){
    // A 0.6 m lip right in front of him (its near face 0.6 m away): it shelters a man lying down from
    // an enemy four metres off on the level, not the same man crouched, and not from an enemy 3.2 m
    // up ten metres away, who looks over it.
    Map map;map.halfWidth=60;map.halfHeight=40;
    map.obstacles.push_back({{.9f,0,0},{.3f,2,0},false,true,.6f});
    PrepareGeometry(map);
    const Vec3 man{0,0,0};
    assert(ProtectedAt(map,man,{4,0,0},Stance::Prone));
    assert(!ProtectedAt(map,man,{4,0,0},Stance::Crouched));
    assert(!ProtectedAt(map,man,{10,0,3.2f},Stance::Prone));
    // The cover memo keys the stance: the same place and threat answer differently for each.
    assert(ProtectedAt(map,man,{4,0,0},Stance::Prone)&&!ProtectedAt(map,man,{4,0,0},Stance::Standing));
    // A round half a metre off the ground passes over a prone body and strikes a crouched one.
    const Vec3 from{-10,0,.5f},to{10,0,.5f};
    assert(SegmentSoldier(from,to,man,man,BodyHeight(Stance::Prone))<0);
    assert(SegmentSoldier(from,to,man,man,BodyHeight(Stance::Crouched))>=0);
    assert(SegmentSoldier(from,to,man,man,BodyHeight(Stance::Standing))>=0);
    // And a round at 0.2 m still finds him.
    assert(SegmentSoldier({-10,0,.2f},{10,0,.2f},man,man,BodyHeight(Stance::Prone))>=0);
    std::cout<<"PRONE body: a 0.6 m lip shelters him prone from a level enemy at 4 m (not crouched, not from 3.2 m up), a 0.5 m round passes over him PASS\n";
}
// One rifleman in open ground, a gun he can see forty metres east. Nothing within 35 m shelters him.
static Soldier OpenRifleman(float time,Vec3 gun){
    Soldier s;s.id=3;s.team=0;s.squad=0;s.position={0,0,0};s.goal=s.position;s.facing={1,0};
    s.assignment.task=Task::Advance;s.assignment.position={40,0,0};s.assignment.serial=1;
    s.action=Action::Advance;s.reason=Reason::OrderedAdvance;
    auto& ct=s.contacts[39];ct.known=ct.visible=true;ct.position=gun;ct.observedAt=time;ct.aimHeight=gun.z+1.45f;ct.automaticWeapon=true;
    return s;
}
static Map OpenField(){Map m;m.halfWidth=90;m.halfHeight=60;PrepareGeometry(m);return m;}
static Order Decide(Soldier& s,const Map& map,const Config& c,Tactics& memory,float time,float suppression){
    s.suppression=suppression;for(auto& ct:s.contacts)if(ct.known&&ct.visible)ct.observedAt=time;
    const Order o=ChooseOrder(s,map,c,{},memory,time);
    s.action=o.action;s.reason=o.reason;s.stance=o.stance;
    if(Distance(o.goal,s.position)<.01f)s.goal=o.goal;
    return o;
}
static void ProneRuleTests(){
    Config on;on.prone=true;Config off;
    const auto map=OpenField();
    // Pressed in the open with no cover anywhere: down at once, firing from where he lies.
    {auto s=OpenRifleman(10,{40,0,0});Tactics memory;
     const Order o=Decide(s,map,on,memory,10,.6f);
     assert(o.stance==Stance::Prone&&o.reason==Reason::Prone&&o.action==Action::Fire&&Distance(o.goal,s.position)<1e-4f);
     assert(memory.proneSince==10.f);
     // The same moment with the switch off is the old open-ground fallback: back off five metres.
     auto t=OpenRifleman(10,{40,0,0});Tactics plain;t.suppression=.6f;const Order old=ChooseOrder(t,map,off,{},plain,10);
     assert(old.stance==Stance::Crouched&&old.action==Action::Retreat&&plain.proneSince<0);
     // He stays down for three seconds, even when the fire stops at once.
     for(float time:{11.f,12.f,12.9f}){const Order stay=Decide(s,map,on,memory,time,.1f);assert(stay.stance==Stance::Prone&&stay.reason==Reason::Prone);}
     // Still pressed above his duck threshold minus 0.2 after three seconds: still down.
     {auto pressed=s;Tactics m=memory;assert(Decide(pressed,map,on,m,13.5f,.4f).stance==Stance::Prone);}
     // An enemy in sight inside 30 m keeps him down however quiet it is.
     {auto close=s;Tactics m=memory;close.contacts[39].position={25,0,0};assert(Decide(close,map,on,m,13.5f,.1f).stance==Stance::Prone);}
     // Quiet and three seconds down: he gets up, and takes the old fallback's order.
     const Order up=Decide(s,map,on,memory,13.1f,.1f);
     assert(up.stance!=Stance::Prone&&up.reason!=Reason::Prone&&memory.proneSince<0);
     // Up again at 0.1 suppression he does not go straight back down: that needs pressure again.
     assert(Decide(s,map,on,memory,13.6f,.3f).stance!=Stance::Prone);
    }
    // Not pressed (below his duck threshold): he does not go down, whatever else holds.
    {auto s=OpenRifleman(10,{40,0,0});Tactics memory;assert(Decide(s,map,on,memory,10,.45f).stance!=Stance::Prone);}
    // A gun 3.2 m up and forty metres off looks down on a prone man: he never goes down for it.
    {auto s=OpenRifleman(10,{40,0,3.2f});Tactics memory;
     assert(!ProneUseful(s,map,10));assert(Decide(s,map,on,memory,10,.9f).stance!=Stance::Prone);
     // Beyond 60 m its height is not read.
     auto far=OpenRifleman(10,{70,0,3.2f});Tactics m;assert(ProneUseful(far,map,10)&&Decide(far,map,on,m,10,.9f).stance==Stance::Prone);}
    // Not inside a building, not on its stairs.
    {Map town;town.halfWidth=90;town.halfHeight=60;AddBuilding(town,{0,0,0});PrepareGeometry(town);
     auto s=OpenRifleman(10,{40,0,0});s.position=town.buildings[0].center+Vec3{1,1,0};assert(!ProneUseful(s,town,10));
     s.position={-20,-20,0};assert(ProneUseful(s,town,10));}
    // A squad-wide retreat raises him at once, before his three seconds are up.
    {auto s=OpenRifleman(10,{40,0,0});Tactics memory;Decide(s,map,on,memory,10,.6f);assert(s.stance==Stance::Prone);
     s.assignment.task=Task::PullBack;s.assignment.position={-40,0,0};++s.assignment.serial;
     const Order back=Decide(s,map,on,memory,10.6f,.6f);assert(back.stance!=Stance::Prone&&back.action==Action::Retreat);}
    std::cout<<"PRONE rules: down only when pressed with no cover, 3 s minimum, up when quiet with nobody in sight inside 30 m, never under a gun 2 m above him, never in a building, up at once for a squad retreat PASS\n";
}
static void CrawlTests(){
    Config on;on.prone=true;
    // A low wall behind which he would be sheltered from the gun, 5 m or 12 m east of him. He is
    // already down (the place was taken when the search failed him; the taker has gone).
    for(float gap:{5.f,12.f}){
        Map map;map.halfWidth=90;map.halfHeight=60;
        map.obstacles.push_back({{gap+.9f,0,0},{.3f,1.5f,0},false,true,1.f});
        PrepareGeometry(map);
        const CoverPosition* near=nullptr;
        for(const auto& c:CoverPositions(map))if(c.shelter.x<gap+.9f&&(!near||Distance(c.shelter,{0,0,0})<Distance(near->shelter,{0,0,0})))near=&c;
        assert(near&&ProtectedAt(map,near->shelter,{40,0,0},near->crouch?Stance::Crouched:Stance::Standing));
        auto s=OpenRifleman(10,{40,0,0});s.stance=Stance::Prone;s.reason=Reason::Prone;s.action=Action::Fire;
        Tactics memory;memory.proneSince=9;
        const Order o=Decide(s,map,on,memory,10,.6f);
        auto pathLength=[&](Vec3 to){auto path=FindPath(map,s.position,to);float l=0;Vec3 p=s.position;for(Vec3 q:path){l+=Distance(p,q);p=q;}return path.empty()?1e9f:l;};
        float length=0;
        if(gap<6){
            assert(o.stance==Stance::Prone&&o.action==Action::Cover&&Distance(o.goal,s.position)>1&&memory.assigned);
            length=pathLength(o.goal);assert(length<=Postures().crawlRange);
            // He crawls at three tenths of his pace and never sprints or fires on the way (the movement and
            // firing stages read the stance; covered in the battle below).
            assert(std::abs(MovementSpeed(s,on)-.3f*(1-.6f*.45f)*3.15f)<1e-5f);
            // Pinned, he does not crawl either: he stays flat.
            auto pinned=OpenRifleman(10,{40,0,0});pinned.stance=Stance::Prone;pinned.reason=Reason::Prone;Tactics m;m.proneSince=9;
            const Order stay=Decide(pinned,map,on,m,10,.8f);assert(stay.stance==Stance::Prone&&Distance(stay.goal,pinned.position)<1e-4f);
        } else {
            length=pathLength(near->shelter);assert(length>Postures().crawlRange);
            // Cover the emergency search found beyond crawling range: he stays down, and gives up the
            // reservation he will not use.
            assert(o.stance==Stance::Prone&&o.reason==Reason::Prone&&Distance(o.goal,s.position)<1e-4f&&!memory.assigned);
        }
        std::cout<<"PRONE crawl: cover "<<gap<<" m off ("<<length<<" m of path): "<<(gap<6?"crawls to it":"stays down")<<"\n";
    }
    std::cout<<"PRONE crawl: to cover within 6 m of path, not when pinned, not beyond PASS\n";
}
// The fixture battle. Squad 0 stands in the open 40 m west of the Ember gun (id 39), which sits behind
// its own low wall; with gunZ 3.2 the gun stands on a platform. Everyone else is in a closed pen.
static std::string ProneFixtureMap(float gunZ){
    std::ostringstream m;m<<"ARMYMAP 1 city 29\nBOUNDS 150 60 0\n";
    int id=1;auto O=[&](float x,float y,float z,float hx,float hy,float h,int low){m<<"O "<<id++<<' '<<x<<' '<<y<<' '<<z<<' '<<hx<<' '<<hy<<' '<<h<<" 0 "<<low<<" 1\n";};
    for(float cx:{-130.f,130.f}){O(cx-8.3f,0,0,.3f,8.6f,3.2f,0);O(cx+8.3f,0,0,.3f,8.6f,3.2f,0);O(cx,-8.3f,0,8.f,.3f,3.2f,0);O(cx,8.3f,0,8.f,.3f,3.2f,0);}
    O(18.6f,0,gunZ,.3f,1.5f,1.f,1);
    if(gunZ>0)m<<"S 900 20 0 "<<gunZ<<" 2.5 2.5 0 0\n";
    for(int i=0;i<UnitCount;++i){
        Vec3 p;
        if(i<8)p={-20,-14.f+4.f*float(i),0};
        else if(i<32){const int k=i-8;p={-136.f+2.5f*float(k%6),-6.f+2.5f*float(k/6),0};}
        else if(i==39)p={20,0,gunZ};
        else{const int k=i-32-(i>39?1:0);p={124.f+2.5f*float(k%6),-6.f+2.5f*float(k/6),0};}
        m<<"U "<<i<<' '<<p.x<<' '<<p.y<<' '<<p.z<<' '<<p.x<<' '<<p.y<<' '<<p.z<<'\n';
    }
    m<<"END\n";return m.str();
}
struct ProneSample { float time=0; std::array<Vec3,SquadSize> position{}; std::array<float,SquadSize> suppression{}; std::array<Stance,SquadSize> stance{};
    std::array<bool,SquadSize> alive{},sprinting{},movingFire{}; std::array<Task,SquadSize> task{}; };
struct ProneRun { uint64_t digest=0; std::vector<ProneSample> samples; std::vector<std::pair<float,int>> shots; std::array<float,SquadSize> dexterity{}; };
static ProneRun RunProneFixture(const std::shared_ptr<const ImportedBattlefield>& map,bool prone,bool drills){
    Config c;c.battlefield=map;c.seed=1;c.maxSeconds=90;c.prone=prone;c.drills=c.foundations=drills;
    DiagnosticOptions lean;lean.enabled=false;lean.keepFrames=false;LeanRecorder recorder;ProneRun out;
    lean.frameSink=[&](const Record& r,const Frame& f){recorder.Record_(r,f);ProneSample x;x.time=f.time;
        for(int n=0;n<SquadSize;++n){const auto& s=f.soldiers[size_t(n)];x.position[size_t(n)]=s.position;x.suppression[size_t(n)]=s.suppression;x.stance[size_t(n)]=s.stance;
            x.alive[size_t(n)]=s.Active();x.sprinting[size_t(n)]=s.sprinting;x.movingFire[size_t(n)]=s.movingFire;x.task[size_t(n)]=s.assignment.task;out.dexterity[size_t(n)]=s.stats.Get(Stat::Dexterity);}
        out.samples.push_back(x);};
    const auto r=Simulate(c,lean);out.digest=recorder.Digest(r);
    for(const auto& shot:r.shots)if(shot.owner<SquadSize)out.shots.push_back({shot.time,shot.owner});
    return out;
}
static void ProneBattleTests(){
    std::string error;
    auto level=ImportBattlefield(ProneFixtureMap(0),error);assert(level&&error.empty());
    auto raised=ImportBattlefield(ProneFixtureMap(3.2f),error);assert(raised&&error.empty());
    const auto on=RunProneFixture(level,true,false),off=RunProneFixture(level,false,false);
    // Off is the parent: these lean digests are the parent build's (3db4b7c553c58257, muzzle credit on, battle_cli
    // --legacy-ai --map <this map> --seed 1 --seconds 90 --lean), recorded before the switch existed.
    // A legitimate change elsewhere that moves every battle moves these too; re-record them then.
    std::cout<<"PRONE fixture digests: level off "<<off.digest<<", on "<<on.digest<<"\n";
    assert(off.digest==17887772779024154910ull);
    assert(on.digest!=off.digest&&on.digest==RunProneFixture(level,true,false).digest);
    const float duckAt=.52f;int proneMen=0,episodes=0;float longest=0,crawled=0;
    for(int n=0;n<SquadSize;++n){
        float pressedAt=-1,firstDown=-1,downAt=-1,downSuppression=0;Vec3 lying{};
        for(size_t k=0;k<on.samples.size();++k){
            const auto& x=on.samples[k];
            if(!x.alive[size_t(n)])break;
            const bool prone=x.stance[size_t(n)]==Stance::Prone;
            // The latest moment the fire on him rose above his duck threshold.
            if(x.suppression[size_t(n)]>duckAt&&(k==0||on.samples[k-1].suppression[size_t(n)]<=duckAt))pressedAt=x.time;
            // Off never produces the stance; on, a man down never sprints and never fires on the move.
            if(prone)assert(!x.sprinting[size_t(n)]&&!x.movingFire[size_t(n)]);
            if(prone&&downAt<0){downAt=x.time;downSuppression=x.suppression[size_t(n)];lying=x.position[size_t(n)];if(firstDown<0)firstDown=x.time;
                // He went down only pressed: within 3 s of first being pressed above his duck threshold.
                assert(pressedAt>=0&&x.time-pressedAt<=3.f+1e-3f);}
            if(prone)crawled=std::max(crawled,Distance(lying,x.position[size_t(n)]));
            if(!prone&&downAt>=0){
                ++episodes;longest=std::max(longest,x.time-downAt);
                // Down for at least three seconds (one 0.2 s sample of slack either side) unless a squad retreat
                // raised him, and up only once the fire on him has faded below where it put him down and below
                // his duck threshold.
                assert(x.time-downAt>=3.f-.4f||x.task[size_t(n)]==Task::PullBack);
                assert(x.suppression[size_t(n)]<downSuppression&&x.suppression[size_t(n)]<duckAt);
                // Getting up: he stands where he lay and fires nothing until he is up.
                const float upUntil=on.samples[k-1].time+Postures().riseSeconds/StatScale(on.dexterity[size_t(n)]);
                for(size_t j=k;j<on.samples.size()&&on.samples[j].time<upUntil-1e-3f;++j)
                    if(on.samples[j].alive[size_t(n)])assert(Distance(on.samples[j].position[size_t(n)],x.position[size_t(n)])<1e-5f);
                for(const auto& shot:on.shots)if(shot.second==n)assert(!(shot.first>x.time+1e-3f&&shot.first<upUntil-1e-3f));
                downAt=-1;
            }
        }
        if(firstDown>=0)++proneMen;
    }
    for(const auto& x:off.samples)for(int n=0;n<SquadSize;++n)assert(x.stance[size_t(n)]!=Stance::Prone);
    assert(proneMen>=3&&episodes>=3&&longest>=3.f);
    std::cout<<"PRONE fixture level: "<<proneMen<<" of 8 men went prone, "<<episodes<<" episodes ended, longest "<<longest<<" s, farthest crawl "<<crawled<<" m\n";
    // The gun on a platform 3.2 m up: nobody goes prone for it.
    const auto high=RunProneFixture(raised,true,false),highOff=RunProneFixture(raised,false,false);
    std::cout<<"PRONE fixture high off "<<highOff.digest<<"\n";
    assert(highOff.digest==3147563839377466477ull);
    int pressed=0;
    for(const auto& x:high.samples)for(int n=0;n<SquadSize;++n){assert(x.stance[size_t(n)]!=Stance::Prone);pressed+=x.alive[size_t(n)]&&x.suppression[size_t(n)]>duckAt;}
    assert(pressed>0);
    // Drills on the same ground: the switch off is the parent, on reproduces itself.
    const auto drillsOff=RunProneFixture(level,false,true),drillsOn=RunProneFixture(level,true,true);
    std::cout<<"PRONE fixture drills off "<<drillsOff.digest<<"\n";
    assert(drillsOff.digest==1748860964040150014ull&&drillsOn.digest==RunProneFixture(level,true,true).digest);
    std::cout<<"PRONE fixture elevated: pressed in "<<pressed<<" samples, never prone; drills off digest is the parent's PASS\n";
}
// Plan 029 M-A2: prone cover. A crater of eight 0.6 m rim boxes (radius 3, centre 0,0, flags bit1, low,
// non-blocking) with four prone `C` records (crouch=2) half a metre inside the rim, facing out. Squad 0
// stands west of it, the Ember gun (id 39) forty metres east behind its own low wall; everyone else
// is in a closed pen at the far ends of the map.
static std::string CraterFixtureMap(){
    std::ostringstream m;m<<"ARMYMAP 2 city 29\nBOUNDS 150 60 0\n";
    int id=1;auto O=[&](float x,float y,float z,float hx,float hy,float h,int low,int move,int flags=-1){
        m<<"O "<<id++<<' '<<x<<' '<<y<<' '<<z<<' '<<hx<<' '<<hy<<' '<<h<<" 0 "<<low<<' '<<move;if(flags>=0)m<<' '<<flags;m<<'\n';};
    for(float cx:{-130.f,130.f}){O(cx-8.3f,0,0,.3f,8.6f,3.2f,0,1);O(cx+8.3f,0,0,.3f,8.6f,3.2f,0,1);O(cx,-8.3f,0,8.f,.3f,3.2f,0,1);O(cx,8.3f,0,8.f,.3f,3.2f,0,1);}
    O(38.6f,0,0,.3f,1.5f,1.f,1,1);                                     // O 9: the gun's own low wall
    const float r=3,pi=3.14159265f,t=r*std::tan(pi/8);
    for(int k=0;k<8;++k){const float ux=std::cos(k*pi/4),uy=std::sin(k*pi/4);  // O 10..17: the rim (10 east)
        if(k%2==0){const float x=float(std::lround(ux)),y=float(std::lround(uy));O(r*x,r*y,0,x!=0?.3f:t,x!=0?t:.3f,.6f,1,0,2);}
        else O(r*ux,r*uy,0,.6f,.6f,.6f,1,0,2);}
    for(int k=0;k<8;k+=2){const int ux=int(std::lround(std::cos(k*pi/4))),uy=int(std::lround(std::sin(k*pi/4)));const float d=r-.3f-.5f;
        m<<"C "<<1000000+k/2<<' '<<10+k<<' '<<ux*d<<' '<<uy*d<<" 0 "<<ux*d<<' '<<uy*d<<" 0 "<<ux<<' '<<uy<<" 2 0\n";}
    for(int i=0;i<UnitCount;++i){
        Vec3 p;
        if(i<8)p={-8.f-2.f*float(i%2),-6.f+2.f*float(i/2),0};
        else if(i<32){const int k=i-8;p={-136.f+2.5f*float(k%6),-6.f+2.5f*float(k/6),0};}
        else if(i==39)p={40,0,0};
        else{const int k=i-32-(i>39?1:0);p={124.f+2.5f*float(k%6),-6.f+2.5f*float(k/6),0};}
        m<<"U "<<i<<' '<<p.x<<' '<<p.y<<' '<<p.z<<' '<<p.x<<' '<<p.y<<' '<<p.z<<'\n';
    }
    m<<"END\n";return m.str();
}
// The battle's own copy, as Simulate makes it with Config::prone on (the flag, and the cover caches dropped).
static Map ProneBattleCopy(const Map& imported){Map m=imported;m.proneCover=true;m.coverCatalog.reset();m.coverRevision=0;m.rasterStatic.reset();return m;}
static void CoverStanceTests(){
    // Identity with prone false: exactly the `crouch ? Crouched : Standing` every site carried.
    CoverPosition wall;wall.crouch=false;CoverPosition low;low.crouch=true;CoverPosition rim;rim.crouch=rim.prone=true;
    assert(CoverStance(wall)==Stance::Standing&&CoverStance(low)==Stance::Crouched&&CoverStance(rim)==Stance::Prone);
    Tactics t;assert(ShelterStance(t)==Stance::Standing&&PeekStance(t)==Stance::Standing);
    t.halfCover=true;assert(ShelterStance(t)==Stance::Crouched&&PeekStance(t)==Stance::Standing);
    t.proneCover=true;assert(ShelterStance(t)==Stance::Prone&&PeekStance(t)==Stance::Crouched);
    // Every cover of the authored Works and Trenches maps, and of the crater fixture as imported.
    std::string error;
    for(const Map& authored:{MakeSkirmishMap(),MakeTrenchMap()})for(const auto& c:CoverPositions(authored))
        assert(!c.prone&&CoverStance(c)==(c.crouch?Stance::Crouched:Stance::Standing));
    auto crater=ImportBattlefield(CraterFixtureMap(),error);assert(crater&&error.empty());
    for(const auto& c:CoverPositions(crater->map))assert(c.prone==(c.id>=1000000&&c.id<2000000)&&(c.prone||CoverStance(c)==(c.crouch?Stance::Crouched:Stance::Standing)));
    std::cout<<"PRONE cover stance: identity for prone=false records and memories; prone shelters prone, peeks crouched PASS\n";
}
static void CraterCoverTests(){
    std::string error;auto crater=ImportBattlefield(CraterFixtureMap(),error);assert(crater&&error.empty());
    const Map& m=crater->map;
    // The importer's prone rule: protected prone against a level threat 4 m out along the facing.
    assert(m.windows.size()==4);
    for(size_t i=0;i<m.windows.size();++i){const auto& c=m.windows[i];const Vec3 out=crater->coverFacing[i];
        assert(c.prone&&c.crouch&&!c.window&&(m.obstacles[size_t(c.source-1)].flags&2u)&&!m.obstacles[size_t(c.source-1)].blocksMovement);
        // Protected lying down from a level enemy at 4 m and at 100 m; not crouched, not standing.
        for(float range:{4.f,100.f}){const Vec3 threat=c.shelter+out*range;
            assert(ProtectedAt(m,c.shelter,threat,Stance::Prone));
            assert(!ProtectedAt(m,c.shelter,threat,Stance::Crouched)&&!ProtectedAt(m,c.shelter,threat,Stance::Standing));}
        // A rifleman at an upper window (floor 3.2 m, eye 4.9 m) looks over the rim from 8 m. From 10 m he does
        // not: half a metre behind a 0.6 m rim a prone head is below his line out to 8.6 m. (A lip 0.6 m in
        // front of him, ProneBodyTests, is looked over from 10 m.)
        assert(!ProtectedAt(m,c.shelter,c.shelter+out*8+Vec3{0,0,UpperFloor},Stance::Prone));
        assert(ProtectedAt(m,c.shelter,c.shelter+out*10+Vec3{0,0,UpperFloor},Stance::Prone));
        // Popped up crouched he fires over the rim: his muzzle has a clear line out along the facing.
        const Vec3 muzzle=c.peek+Vec3{0,0,Posture(Stance::Crouched).muzzle};
        assert(ClearLine3D(m,muzzle,muzzle+out*20)&&!ClearLine3D(m,c.peek+Vec3{0,0,Posture(Stance::Prone).muzzle},c.peek+out*20+Vec3{0,0,Posture(Stance::Prone).muzzle}));
    }
    // A prone record the rim does not shelter (a metre farther in) and a rim that blocks movement are refused.
    {auto text=CraterFixtureMap();const auto at=text.find("C 1000000 ");text.replace(at,text.find('\n',at)-at,"C 1000000 10 1.2 0 0 1.2 0 0 1 0 2 0");
     assert(!ImportBattlefield(text,error)&&error=="Prone cover unprotected 0");}
    {auto text=CraterFixtureMap();const auto at=text.find("O 10 ");const auto end=text.find('\n',at);const auto row=text.substr(at,end-at);
     assert(row.substr(row.size()-6)==" 1 0 2");text.replace(at,end-at,row.substr(0,row.size()-6)+" 1 1 2");assert(!ImportBattlefield(text,error)&&error=="Crater rim blocks movement");}
    // Rims never block movement: a man walks straight across the crater.
    assert(ClearLine(m,{-6,0,0},{6,0,0},.48f)&&Walkable(m,{3,0,0}));
    // The derived catalogue: without the battle flag (the switch off) it is what it was, no prone cover.
    size_t derived=0;for(const auto& c:CoverPositions(m))derived+=c.id>=2000000&&c.prone;
    assert(derived==0);
    // With it, the rims add prone cover of their own, each protected prone from its own 4 m threat and not crouched.
    const Map on=ProneBattleCopy(m);size_t prone=0,total=0;
    for(const auto& c:CoverPositions(on)){++total;if(c.id<2000000||!c.prone)continue;++prone;assert(c.crouch&&c.source>=10&&c.source<=17);}
    assert(prone>=8&&total==CoverPositions(m).size()+prone);
    std::cout<<"PRONE crater: prone records protected prone from a level threat at 4 m and 100 m, exposed to a window 8 m off (not 10 m: the rim is 0.5 m in front of him); "
             <<prone<<" derived prone covers only with the switch; rims walkable PASS\n";
}
// One rifleman holding the crater's east shelter, a gun he can see forty metres east.
static Soldier CraterRifleman(const Map& m,float time){
    Soldier s;s.id=3;s.team=0;s.squad=0;s.position=m.windows[0].shelter;s.goal=s.position;s.facing={1,0};
    s.assignment.task=Task::Hold;s.assignment.position=s.position;s.assignment.serial=1;
    auto& ct=s.contacts[39];ct.known=ct.visible=true;ct.position={40,0,0};ct.observedAt=time;ct.aimHeight=1.45f;ct.automaticWeapon=true;
    return s;
}
static void CraterDecisionTests(){
    std::string error;auto crater=ImportBattlefield(CraterFixtureMap(),error);assert(crater&&error.empty());
    Config on;on.prone=true;
    const Map map=ProneBattleCopy(crater->map);
    auto s=CraterRifleman(map,10);Tactics memory;
    // Holding on his post, in the open to the gun: he takes the crater's shelter, and his memory knows it is prone cover.
    Order o=Decide(s,map,on,memory,10,.1f);
    assert(memory.assigned&&memory.proneCover&&memory.halfCover&&Distance(memory.shelter,map.windows[0].shelter)<1e-4f);
    // At the shelter with nothing pressing him he pops up crouched to fire over the rim.
    for(float time=10.4f;time<12&&!(o.action==Action::Fire&&o.reason==Reason::PopUp);time+=.4f)o=Decide(s,map,on,memory,time,.1f);
    assert(o.action==Action::Fire&&o.reason==Reason::PopUp&&o.stance==Stance::Crouched&&Distance(o.goal,memory.peek)<1e-4f);
    // Fire lands near him: he ducks prone behind the rim, and stays down while it lasts.
    o=Decide(s,map,on,memory,12.4f,.6f);
    assert(o.action==Action::Hold&&o.reason==Reason::Duck&&o.stance==Stance::Prone&&Distance(o.goal,map.windows[0].shelter)<1e-4f);
    o=Decide(s,map,on,memory,12.8f,.6f);assert(o.stance==Stance::Prone&&o.reason!=Reason::Prone&&o.action==Action::Hold);
    // Quiet again: up to crouched and firing, with no three-second prone clock (that is the open-ground rule).
    o=Decide(s,map,on,memory,13.6f,.1f);
    for(float time=14.f;time<15&&o.action!=Action::Fire;time+=.4f)o=Decide(s,map,on,memory,time,.1f);
    assert(o.action==Action::Fire&&o.reason==Reason::PopUp&&o.stance==Stance::Crouched);
    // Without the switch the same record is the crouched cover it always was, and crouched the rim does not shelter
    // him from the gun: the search does not take it.
    Map off=crater->map;for(auto& w:off.windows)w.prone=false;off.coverCatalog.reset();off.coverRevision=0;
    auto t=CraterRifleman(off,10);Tactics plain;const Order old=ChooseOrder(t,off,Config{},{},plain,10);
    assert(!plain.proneCover&&!(plain.assigned&&Distance(plain.shelter,off.windows[0].shelter)<1e-4f)&&old.stance!=Stance::Prone);
    std::cout<<"PRONE crater decision: takes the crater, pops up crouched to fire, ducks prone under fire, up again when quiet PASS\n";
}
static void CraterBattleTests(){
    std::string error;auto crater=ImportBattlefield(CraterFixtureMap(),error);assert(crater&&error.empty());
    // The switch off: the record is cleared on the battle's copy, and the digest is the parent build's.
    {Config c;c.battlefield=crater;c.maxSeconds=2;const auto r=Simulate(c);assert(!r.map.proneCover);for(const auto& w:r.map.windows)assert(!w.prone);
     Config p=c;p.prone=true;const auto q=Simulate(p);assert(q.map.proneCover);for(const auto& w:q.map.windows)assert(w.prone);
     for(const auto& w:crater->map.windows)assert(w.prone);}  // the imported map itself is untouched
    const auto off=RunProneFixture(crater,false,false),on=RunProneFixture(crater,true,false);
    std::cout<<"PRONE crater fixture digests: off "<<off.digest<<", on "<<on.digest<<"\n";
    assert(off.digest==CraterParentDigest);
    assert(on.digest!=off.digest&&on.digest==RunProneFixture(crater,true,false).digest);
    const Map copy=ProneBattleCopy(crater->map);
    int atCrater=0,crouchedShots=0;
    for(int n=0;n<SquadSize;++n){bool lay=false;
        for(const auto& x:on.samples){if(!x.alive[size_t(n)])break;
            if(x.stance[size_t(n)]!=Stance::Prone)continue;
            for(const auto& c:CoverPositions(copy))if(c.prone&&Distance(c.shelter,x.position[size_t(n)])<.3f)lay=true;}
        atCrater+=lay;}
    for(const auto& shot:on.shots){const auto& x=*std::min_element(on.samples.begin(),on.samples.end(),[&](const ProneSample& a,const ProneSample& b){return std::abs(a.time-shot.first)<std::abs(b.time-shot.first);});
        if(x.stance[size_t(shot.second)]!=Stance::Crouched)continue;
        for(const auto& c:CoverPositions(copy))if(c.prone&&Distance(c.peek,x.position[size_t(shot.second)])<.3f){++crouchedShots;break;}}
    std::cout<<"PRONE crater fixture: "<<atCrater<<" men lay prone at the crater's prone cover, "<<crouchedShots<<" rounds fired crouched from it\n";
    assert(atCrater>=1&&crouchedShots>=1);
}
}
static void ProneTests(){
    std::cout.setf(std::ios::unitbuf);
    prone_tests::PostureTableTests();prone_tests::ProneBodyTests();prone_tests::ProneRuleTests();prone_tests::CrawlTests();prone_tests::ProneBattleTests();
    prone_tests::CoverStanceTests();prone_tests::CraterCoverTests();prone_tests::CraterDecisionTests();prone_tests::CraterBattleTests();
    std::cout<<"PRONE all PASS\n";
}
